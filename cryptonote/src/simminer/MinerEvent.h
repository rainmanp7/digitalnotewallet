// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2014-2017 XDN-project developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstdint>

namespace Miner {

enum class MinerEventType: uint8_t {
  BLOCK_MINED,
  BLOCKCHAIN_UPDATED,
};

struct MinerEvent {
  MinerEventType type;
};

} //namespace Miner
