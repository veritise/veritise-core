# veritise-core

[![docs](badges/docs--green.svg)](https://symbol.github.io)
[![docker](badges/docker-symbolplatform-brightgreen.svg)](https://hub.docker.com/u/symbolplatform)

Symbol-based networks rely on nodes to provide a trustless, high-performance, and secure blockchain platform.

These nodes are deployed using [veritise-core] software, a C++ rewrite of the previous Java-written [NEM] distributed ledger that has been running since 2015.

Learn more about the protocol by reading the [whitepaper] and the  [developer documentation].

## Package Organization

veritise-core code is organized as follows:

| Folder name | Description |
| -------------|--------------|
| /extensions | Modules that add features to the bare veritise-core. These capabilities are all optional because none of them impact consensus. |
| /external | External dependencies that are built with the client. |
| /plugins | Modules that introduce new and different ways to alter the chain's state via transactions. |
| /resources | Default properties. These can be configured per network and node. |
| /scripts | Utility scripts for developers. |
| /sdk | Reusable code used by tests and tools. |
| /seed | Nemesis blocks used in tests. |
| /src | Symbol's core engine. |
| /tests | Collection of tests. |
| /tools | Tools to deploy and monitor networks and nodes. |

## Versioning

Versioning starting with 1.0.0.0 release. Testnet releases use odd numbers for minor field.

| description | versions |
|-------------|----------|
| example mainnet build numbers | 1.0.0.0, 1.2.x.x, 1.4.x.x, 2.2.x.x, 3.4.x.x |
| example testnet build numbers | 1.1.0.0, 1.3.x.x, 1.5.x.x, 2.3.x.x, 3.5.x.x |

## Building the Image

To compile veritise-core source code, follow the [developer notes](docs/README.md).

## Running veritise-core

veritise-core executable can be used either to run different types of nodes or to launch new networks. This section contains the instructions on how to run the veritise-core for various purposes.


To run a private test net, follow [this guide](https://symbol.github.io/guides/network/creating-a-private-test-net.html#creating-a-private-test-net).

### Private Network

Instructions on how to launch a secure and production-ready private chain will be released here.

## Contributing

Before contributing please [read this](CONTRIBUTING.md).


## License

Copyright (c) 2018 Jaguar0625, gimre, BloodyRookie, Tech Bureau, Corp Licensed under the [GNU Lesser General Public License v3](LICENSE.txt)

[developer documentation]: https://symbol.github.io
[issues]: https://github.co/veritise/veritise-core/issues
[veritise-core]: https://github.com/veritise/veritise-core
[rest]: https://github.com/symbol/catapult-rest
[Service Bootstrap]: https://github.com/veritise/veritise-node
