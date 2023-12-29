#ifdef __cpp_modules
module;
#endif

#pragma once
#include "LiteNetLib/Utils/CRC32C.hpp"
#include "LiteNetLib/Utils/FastBitConverter.hpp"
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
#include "LiteNetLib/Utils/INetSerializable.hpp"
#include "LiteNetLib/Utils/InvalidTypeException.hpp"
#include "LiteNetLib/Utils/NetDataReader.hpp"
#include "LiteNetLib/Utils/NetDataWriter.hpp"
#include "LiteNetLib/Utils/NetPacketProcessor.hpp"
#include "LiteNetLib/Utils/NetSerializer.hpp"
#include "LiteNetLib/Utils/NtpLeapIndicator.hpp"
#include "LiteNetLib/Utils/NtpMode.hpp"
#include "LiteNetLib/Utils/NtpPacket.hpp"
#include "LiteNetLib/Utils/NtpRequest.hpp"
#include "LiteNetLib/Utils/ParseException.hpp"
#ifdef __cpp_modules
export module Utils;
#endif
