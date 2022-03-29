/**
*** Copyright (c) 2016-2019, Jaguar0625, gimre, BloodyRookie, Tech Bureau, Corp.
*** Copyright (c) 2020-present, Jaguar0625, gimre, BloodyRookie.
*** All rights reserved.
***
*** This file is part of Catapult.
***
*** Catapult is free software: you can redistribute it and/or modify
*** it under the terms of the GNU Lesser General Public License as published by
*** the Free Software Foundation, either version 3 of the License, or
*** (at your option) any later version.
***
*** Catapult is distributed in the hope that it will be useful,
*** but WITHOUT ANY WARRANTY; without even the implied warranty of
*** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
*** GNU Lesser General Public License for more details.
***
*** You should have received a copy of the GNU Lesser General Public License
*** along with Catapult. If not, see <http://www.gnu.org/licenses/>.
**/

#include "Observers.h"
#include "src/cache/SecretLockInfoCache.h"
#include "src/model/SecretLockReceiptType.h"
#include "plugins/txes/lock_shared/src/observers/ExpiredLockInfoObserver.h"
#include "catapult/observers/ObserverUtils.h"

namespace catapult { namespace observers {

	DEFINE_OBSERVER(ExpiredSecretLockInfo, model::BlockNotification, [](const auto&, ObserverContext& context) {
		ExpiredLockInfoObserver<cache::SecretLockInfoCache>(context, model::Receipt_Type_LockSecret_Expired, [](
				auto& accountStateCache,
				const auto& lockInfo,
				auto accountStateConsumer) {
			accountStateConsumer(accountStateCache.find(lockInfo.OwnerAddress).get());
		});
	})
}}
