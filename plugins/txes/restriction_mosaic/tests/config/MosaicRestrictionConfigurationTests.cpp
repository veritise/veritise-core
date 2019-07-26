/**
*** Copyright (c) 2016-present,
*** Jaguar0625, gimre, BloodyRookie, Tech Bureau, Corp. All rights reserved.
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

#include "src/config/MosaicRestrictionConfiguration.h"
#include "tests/test/nodeps/ConfigurationTestUtils.h"
#include "tests/TestHarness.h"

namespace catapult { namespace config {

	namespace {
		struct MosaicRestrictionConfigurationTraits {
			using ConfigurationType = MosaicRestrictionConfiguration;

			static utils::ConfigurationBag::ValuesContainer CreateProperties() {
				return {
					{
						"",
						{
							{ "maxMosaicRestrictionValues", "234" }
						}
					}
				};
			}

			static bool IsSectionOptional(const std::string&) {
				return false;
			}

			static void AssertZero(const MosaicRestrictionConfiguration& config) {
				// Assert:
				EXPECT_EQ(0u, config.MaxMosaicRestrictionValues);
			}

			static void AssertCustom(const MosaicRestrictionConfiguration& config) {
				// Assert:
				EXPECT_EQ(234u, config.MaxMosaicRestrictionValues);
			}
		};
	}

	DEFINE_CONFIGURATION_TESTS(MosaicRestrictionConfigurationTests, MosaicRestriction)
}}
