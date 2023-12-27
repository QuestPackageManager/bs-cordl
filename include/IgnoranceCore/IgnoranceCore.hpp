#ifdef __cpp_modules
module;
#endif

#pragma once
#include "IgnoranceCore\IgnoranceChannelTypes.hpp"
#include "IgnoranceCore\IgnoranceClient.hpp"
#include "IgnoranceCore\IgnoranceClientStats.hpp"
#include "IgnoranceCore\IgnoranceCommandPacket.hpp"
#include "IgnoranceCore\IgnoranceCommandType.hpp"
#include "IgnoranceCore\IgnoranceConnectionEvent.hpp"
#include "IgnoranceCore\IgnoranceIncomingPacket.hpp"
#include "IgnoranceCore\IgnoranceInternals.hpp"
#include "IgnoranceCore\IgnoranceLogType.hpp"
#include "IgnoranceCore\IgnoranceOutgoingPacket.hpp"
#include "IgnoranceCore\IgnoranceServer.hpp"
#include "IgnoranceCore\IgnoranceServerStats.hpp"
#include "IgnoranceCore\PeerConnectionData.hpp"
#ifdef __cpp_modules
export module IgnoranceCore;
#endif
