#pragma once
// IWYU pragma private; include "LiteNetLib/NetPeer.hpp"
#include "LiteNetLib/zzzz__BaseChannel_impl.hpp"
#include "LiteNetLib/zzzz__ConnectionState_impl.hpp"
#include "LiteNetLib/zzzz__NetPacket_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "LiteNetLib/zzzz__ConnectRequestResult_def.hpp"
#include "LiteNetLib/zzzz__ConnectionState_def.hpp"
#include "LiteNetLib/zzzz__DeliveryMethod_def.hpp"
#include "LiteNetLib/zzzz__DisconnectResult_def.hpp"
#include "LiteNetLib/zzzz__NetConnectAcceptPacket_def.hpp"
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacketPool_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/zzzz__NetStatistics_def.hpp"
#include "LiteNetLib/zzzz__ShutdownResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetPeer_IncomingFragments._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer_IncomingFragments::*)()>(&::LiteNetLib::NetPeer_IncomingFragments::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a7b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer_IncomingFragments*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::LiteNetLib::NetPacket*>& LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_get_Fragments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fragments;
}
constexpr ::ArrayW<::LiteNetLib::NetPacket*> const& LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_get_Fragments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Fragments;
}
constexpr void LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_set_Fragments(::ArrayW<::LiteNetLib::NetPacket*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Fragments = value;
}
constexpr int32_t& LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_get_ReceivedCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReceivedCount;
}
constexpr int32_t const& LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_get_ReceivedCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ReceivedCount;
}
constexpr void LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_set_ReceivedCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ReceivedCount = value;
}
constexpr int32_t& LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_get_TotalSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalSize;
}
constexpr int32_t const& LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_get_TotalSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___TotalSize;
}
constexpr void LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_set_TotalSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___TotalSize = value;
}
constexpr uint8_t& LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_get_ChannelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChannelId;
}
constexpr uint8_t const& LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_get_ChannelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ChannelId;
}
constexpr void LiteNetLib::NetPeer_IncomingFragments::__cordl_internal_set_ChannelId(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ChannelId = value;
}
inline void LiteNetLib::NetPeer_IncomingFragments::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer_IncomingFragments*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::NetPeer_IncomingFragments* LiteNetLib::NetPeer_IncomingFragments::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetPeer_IncomingFragments*>());
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetPeer_IncomingFragments::NetPeer_IncomingFragments() {}
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_ConnectionNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_ConnectionNum)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a6860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_ConnectionNum", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.set_ConnectionNum
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(uint8_t)>(&::LiteNetLib::NetPeer::set_ConnectionNum)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x58a6868;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "set_ConnectionNum", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_ConnectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::ConnectionState (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_ConnectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a68b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_ConnectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_ConnectTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_ConnectTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a68bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_ConnectTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_Ping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_Ping)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58a68c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_Ping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_Mtu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_Mtu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a68d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_Mtu", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_RemoteTimeDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_RemoteTimeDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a68e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_RemoteTimeDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_RemoteUtcTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_RemoteUtcTime)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58a68e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_RemoteUtcTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_TimeSinceLastPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_TimeSinceLastPacket)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a697c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_TimeSinceLastPacket", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.get_ResendDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::get_ResendDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a6984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_ResendDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetManager*, ::System::Net::IPEndPoint*, int32_t)>(&::LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x58a2b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetManager*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SetMtu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(int32_t)>(&::LiteNetLib::NetPeer::SetMtu)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58a698c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SetMtu", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.GetPacketsCountInReliableQueue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::NetPeer::*)(uint8_t, bool)>(&::LiteNetLib::NetPeer::GetPacketsCountInReliableQueue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58a6a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "GetPacketsCountInReliableQueue", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.CreateChannel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::BaseChannel* (::LiteNetLib::NetPeer::*)(uint8_t)>(&::LiteNetLib::NetPeer::CreateChannel)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x58a6aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "CreateChannel", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetManager*, ::System::Net::IPEndPoint*, int32_t, uint8_t, ::LiteNetLib::Utils::NetDataWriter*)>(
    &::LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58a5a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { ".ctor",
                                                                         {},
                                                                         { ::i2c::type_of<::LiteNetLib::NetManager*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<int32_t>(),
                                                                           ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetManager*, ::System::Net::IPEndPoint*, int32_t, int64_t, uint8_t)>(
    &::LiteNetLib::NetPeer::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58a2ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { ".ctor",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::LiteNetLib::NetManager*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(),
                                                                                                            ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Reject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(int64_t, uint8_t, ::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::NetPeer::Reject)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58a2eac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                            { "Reject", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessConnectAccept
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetConnectAcceptPacket*)>(&::LiteNetLib::NetPeer::ProcessConnectAccept)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58a3820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessConnectAccept", {}, { ::i2c::type_of<::LiteNetLib::NetConnectAcceptPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.GetMaxSinglePacketSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::NetPeer::*)(::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::GetMaxSinglePacketSize)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58a6eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "GetMaxSinglePacketSize", {}, { ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendWithDeliveryEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, uint8_t, ::LiteNetLib::DeliveryMethod, ::System::Object*)>(
    &::LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58a6f30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::LiteNetLib::NetPeer*>(),
            { "SendWithDeliveryEvent", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendWithDeliveryEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, uint8_t, ::LiteNetLib::DeliveryMethod, ::System::Object*)>(
    &::LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58a7480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendWithDeliveryEvent",
                                                                         {},
                                                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(),
                                                                           ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendWithDeliveryEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::Utils::NetDataWriter*, uint8_t, ::LiteNetLib::DeliveryMethod, ::System::Object*)>(
    &::LiteNetLib::NetPeer::SendWithDeliveryEvent)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58a74e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendWithDeliveryEvent",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint8_t>(),
                                                                                                            ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58a7568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::Utils::NetDataWriter*, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a758c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Send", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a75b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                            { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, uint8_t, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58a75c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                                             { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::Utils::NetDataWriter*, uint8_t, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a75ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                                { "Send", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, uint8_t, ::LiteNetLib::DeliveryMethod)>(&::LiteNetLib::NetPeer::Send)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a4248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::LiteNetLib::NetPeer*>(),
            { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, uint8_t, ::LiteNetLib::DeliveryMethod, ::System::Object*)>(
    &::LiteNetLib::NetPeer::SendInternal)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x58a6fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendInternal",
                                                                         {},
                                                                         { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(),
                                                                           ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>)>(&::LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58a7618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Disconnect", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58a7638;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Disconnect", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58a7658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Disconnect", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::Disconnect)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58a76a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Disconnect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessDisconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::DisconnectResult (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::ProcessDisconnect)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58a36cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessDisconnect", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Shutdown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::ShutdownResult (::LiteNetLib::NetPeer::*)(::ArrayW<uint8_t>, int32_t, int32_t, bool)>(&::LiteNetLib::NetPeer::Shutdown)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x58a13f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                                { "Shutdown", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.UpdateRoundTripTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(int32_t)>(&::LiteNetLib::NetPeer::UpdateRoundTripTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58a76e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "UpdateRoundTripTime", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.AddReliablePacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::DeliveryMethod, ::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::AddReliablePacket)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x58a7720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "AddReliablePacket", {}, { ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessMtuPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::ProcessMtuPacket)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x58a7b68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessMtuPacket", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.UpdateMtuLogic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(int32_t)>(&::LiteNetLib::NetPeer::UpdateMtuLogic)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58a7f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "UpdateMtuLogic", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessConnectRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::ConnectRequestResult (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetConnectRequestPacket*)>(
    &::LiteNetLib::NetPeer::ProcessConnectRequest)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58a3218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessConnectRequest", {}, { ::i2c::type_of<::LiteNetLib::NetConnectRequestPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.ProcessPacket
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::ProcessPacket)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x58a3884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessPacket", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendMerged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::SendMerged)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58a8170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendMerged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.SendUserData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::SendUserData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x58a8224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendUserData", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)()>(&::LiteNetLib::NetPeer::Flush)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58a52bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(int32_t)>(&::LiteNetLib::NetPeer::Update)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x58a1ec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Update", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPeer.RecycleAndDeliver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPeer::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPeer::RecycleAndDeliver)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x58a8340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "RecycleAndDeliver", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__rtt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rtt;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__rtt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rtt;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__rtt(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rtt = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__avgRtt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avgRtt;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__avgRtt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avgRtt;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__avgRtt(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avgRtt = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__rttCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rttCount;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__rttCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rttCount;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__rttCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rttCount = value;
}
constexpr double_t& LiteNetLib::NetPeer::__cordl_internal_get__resendDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resendDelay;
}
constexpr double_t const& LiteNetLib::NetPeer::__cordl_internal_get__resendDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____resendDelay;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__resendDelay(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____resendDelay = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__pingSendTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingSendTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__pingSendTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingSendTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__pingSendTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pingSendTimer = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__rttResetTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rttResetTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__rttResetTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rttResetTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__rttResetTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rttResetTimer = value;
}
constexpr ::System::Diagnostics::Stopwatch*& LiteNetLib::NetPeer::__cordl_internal_get__pingTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingTimer;
}
constexpr ::System::Diagnostics::Stopwatch* const& LiteNetLib::NetPeer::__cordl_internal_get__pingTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__pingTimer(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pingTimer = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__timeSinceLastPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSinceLastPacket;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__timeSinceLastPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeSinceLastPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__timeSinceLastPacket(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeSinceLastPacket = value;
}
constexpr int64_t& LiteNetLib::NetPeer::__cordl_internal_get__remoteDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteDelta;
}
constexpr int64_t const& LiteNetLib::NetPeer::__cordl_internal_get__remoteDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____remoteDelta;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__remoteDelta(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____remoteDelta = value;
}
constexpr ::LiteNetLib::NetPacketPool*& LiteNetLib::NetPeer::__cordl_internal_get__packetPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetPool;
}
constexpr ::LiteNetLib::NetPacketPool* const& LiteNetLib::NetPeer::__cordl_internal_get__packetPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetPool;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__packetPool(::LiteNetLib::NetPacketPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetPool = value;
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get__flushLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flushLock;
}
constexpr ::System::Object* const& LiteNetLib::NetPeer::__cordl_internal_get__flushLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flushLock;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__flushLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flushLock = value;
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get__sendLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendLock;
}
constexpr ::System::Object* const& LiteNetLib::NetPeer::__cordl_internal_get__sendLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sendLock;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__sendLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sendLock = value;
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get__shutdownLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownLock;
}
constexpr ::System::Object* const& LiteNetLib::NetPeer::__cordl_internal_get__shutdownLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownLock;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__shutdownLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shutdownLock = value;
}
constexpr ::LiteNetLib::NetPeer*& LiteNetLib::NetPeer::__cordl_internal_get_NextPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextPeer;
}
constexpr ::LiteNetLib::NetPeer* const& LiteNetLib::NetPeer::__cordl_internal_get_NextPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NextPeer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_NextPeer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NextPeer = value;
}
constexpr ::LiteNetLib::NetPeer*& LiteNetLib::NetPeer::__cordl_internal_get_PrevPeer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrevPeer;
}
constexpr ::LiteNetLib::NetPeer* const& LiteNetLib::NetPeer::__cordl_internal_get_PrevPeer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___PrevPeer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_PrevPeer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___PrevPeer = value;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*& LiteNetLib::NetPeer::__cordl_internal_get__unreliableChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableChannel;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* const& LiteNetLib::NetPeer::__cordl_internal_get__unreliableChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unreliableChannel;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__unreliableChannel(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____unreliableChannel = value;
}
constexpr ::ArrayW<::LiteNetLib::BaseChannel*>& LiteNetLib::NetPeer::__cordl_internal_get__channels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channels;
}
constexpr ::ArrayW<::LiteNetLib::BaseChannel*> const& LiteNetLib::NetPeer::__cordl_internal_get__channels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____channels;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__channels(::ArrayW<::LiteNetLib::BaseChannel*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____channels = value;
}
constexpr ::LiteNetLib::BaseChannel*& LiteNetLib::NetPeer::__cordl_internal_get__headChannel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headChannel;
}
constexpr ::LiteNetLib::BaseChannel* const& LiteNetLib::NetPeer::__cordl_internal_get__headChannel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headChannel;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__headChannel(::LiteNetLib::BaseChannel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headChannel = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mtu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtu;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mtu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtu;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtu(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtu = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mtuIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuIdx;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mtuIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuIdx;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtuIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtuIdx = value;
}
constexpr bool& LiteNetLib::NetPeer::__cordl_internal_get__finishMtu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishMtu;
}
constexpr bool const& LiteNetLib::NetPeer::__cordl_internal_get__finishMtu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____finishMtu;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__finishMtu(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____finishMtu = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mtuCheckTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuCheckTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mtuCheckTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuCheckTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtuCheckTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtuCheckTimer = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mtuCheckAttempts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuCheckAttempts;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mtuCheckAttempts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuCheckAttempts;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtuCheckAttempts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtuCheckAttempts = value;
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get__mtuMutex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuMutex;
}
constexpr ::System::Object* const& LiteNetLib::NetPeer::__cordl_internal_get__mtuMutex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mtuMutex;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mtuMutex(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mtuMutex = value;
}
constexpr uint16_t& LiteNetLib::NetPeer::__cordl_internal_get__fragmentId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentId;
}
constexpr uint16_t const& LiteNetLib::NetPeer::__cordl_internal_get__fragmentId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fragmentId;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__fragmentId(uint16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fragmentId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::NetPeer_IncomingFragments*>*& LiteNetLib::NetPeer::__cordl_internal_get__holdedFragments() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____holdedFragments;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::NetPeer_IncomingFragments*>* const& LiteNetLib::NetPeer::__cordl_internal_get__holdedFragments() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____holdedFragments;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__holdedFragments(::System::Collections::Generic::Dictionary_2<uint16_t, ::LiteNetLib::NetPeer_IncomingFragments*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____holdedFragments = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>*& LiteNetLib::NetPeer::__cordl_internal_get__deliveredFramgnets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deliveredFramgnets;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* const& LiteNetLib::NetPeer::__cordl_internal_get__deliveredFramgnets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____deliveredFramgnets;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__deliveredFramgnets(::System::Collections::Generic::Dictionary_2<uint16_t, uint16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____deliveredFramgnets = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__mergeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeData;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::NetPeer::__cordl_internal_get__mergeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeData;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mergeData(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mergeData = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mergePos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergePos;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mergePos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergePos;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mergePos(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mergePos = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__mergeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeCount;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__mergeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mergeCount;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__mergeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mergeCount = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__connectAttempts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectAttempts;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__connectAttempts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectAttempts;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectAttempts(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectAttempts = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__connectTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__connectTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectTimer = value;
}
constexpr int64_t& LiteNetLib::NetPeer::__cordl_internal_get__connectTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectTime;
}
constexpr int64_t const& LiteNetLib::NetPeer::__cordl_internal_get__connectTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectTime;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectTime = value;
}
constexpr uint8_t& LiteNetLib::NetPeer::__cordl_internal_get__connectNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectNum;
}
constexpr uint8_t const& LiteNetLib::NetPeer::__cordl_internal_get__connectNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectNum;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectNum(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectNum = value;
}
constexpr ::LiteNetLib::ConnectionState& LiteNetLib::NetPeer::__cordl_internal_get__connectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr ::LiteNetLib::ConnectionState const& LiteNetLib::NetPeer::__cordl_internal_get__connectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectionState;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectionState(::LiteNetLib::ConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectionState = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__shutdownPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownPacket;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::NetPeer::__cordl_internal_get__shutdownPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__shutdownPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shutdownPacket = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get__shutdownTimer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownTimer;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get__shutdownTimer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shutdownTimer;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__shutdownTimer(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shutdownTimer = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__pingPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingPacket;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::NetPeer::__cordl_internal_get__pingPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pingPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__pingPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pingPacket = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__pongPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pongPacket;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::NetPeer::__cordl_internal_get__pongPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pongPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__pongPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pongPacket = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__connectRequestPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectRequestPacket;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::NetPeer::__cordl_internal_get__connectRequestPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectRequestPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectRequestPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectRequestPacket = value;
}
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPeer::__cordl_internal_get__connectAcceptPacket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectAcceptPacket;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::NetPeer::__cordl_internal_get__connectAcceptPacket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectAcceptPacket;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set__connectAcceptPacket(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectAcceptPacket = value;
}
constexpr ::System::Net::IPEndPoint*& LiteNetLib::NetPeer::__cordl_internal_get_EndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndPoint;
}
constexpr ::System::Net::IPEndPoint* const& LiteNetLib::NetPeer::__cordl_internal_get_EndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___EndPoint;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_EndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___EndPoint = value;
}
constexpr ::LiteNetLib::NetManager*& LiteNetLib::NetPeer::__cordl_internal_get_NetManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetManager;
}
constexpr ::LiteNetLib::NetManager* const& LiteNetLib::NetPeer::__cordl_internal_get_NetManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___NetManager;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_NetManager(::LiteNetLib::NetManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___NetManager = value;
}
constexpr int32_t& LiteNetLib::NetPeer::__cordl_internal_get_Id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr int32_t const& LiteNetLib::NetPeer::__cordl_internal_get_Id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Id;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_Id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Id = value;
}
constexpr ::System::Object*& LiteNetLib::NetPeer::__cordl_internal_get_Tag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tag;
}
constexpr ::System::Object* const& LiteNetLib::NetPeer::__cordl_internal_get_Tag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Tag;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_Tag(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Tag = value;
}
constexpr ::LiteNetLib::NetStatistics*& LiteNetLib::NetPeer::__cordl_internal_get_Statistics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Statistics;
}
constexpr ::LiteNetLib::NetStatistics* const& LiteNetLib::NetPeer::__cordl_internal_get_Statistics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Statistics;
}
constexpr void LiteNetLib::NetPeer::__cordl_internal_set_Statistics(::LiteNetLib::NetStatistics* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Statistics = value;
}
inline uint8_t LiteNetLib::NetPeer::get_ConnectionNum() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_ConnectionNum", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void LiteNetLib::NetPeer::set_ConnectionNum(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "set_ConnectionNum", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::LiteNetLib::ConnectionState LiteNetLib::NetPeer::get_ConnectionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_ConnectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::ConnectionState>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetPeer::get_ConnectTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_ConnectTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int32_t LiteNetLib::NetPeer::get_Ping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_Ping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t LiteNetLib::NetPeer::get_Mtu() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_Mtu", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetPeer::get_RemoteTimeDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_RemoteTimeDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline ::System::DateTime LiteNetLib::NetPeer::get_RemoteUtcTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_RemoteUtcTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline int32_t LiteNetLib::NetPeer::get_TimeSinceLastPacket() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_TimeSinceLastPacket", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline double_t LiteNetLib::NetPeer::get_ResendDelay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "get_ResendDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void LiteNetLib::NetPeer::_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetManager*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netManager, remoteEndPoint, id);
}
inline void LiteNetLib::NetPeer::SetMtu(int32_t mtuIdx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SetMtu", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mtuIdx);
}
inline int32_t LiteNetLib::NetPeer::GetPacketsCountInReliableQueue(uint8_t channelNumber, bool ordered) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "GetPacketsCountInReliableQueue", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, channelNumber, ordered);
}
inline ::LiteNetLib::BaseChannel* LiteNetLib::NetPeer::CreateChannel(uint8_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "CreateChannel", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::BaseChannel*>(this, ___internal_method, idx);
}
inline void LiteNetLib::NetPeer::_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, uint8_t connectNum,
                                       ::LiteNetLib::Utils::NetDataWriter* connectData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { ".ctor",
                                                                       {},
                                                                       { ::i2c::type_of<::LiteNetLib::NetManager*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<int32_t>(),
                                                                         ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netManager, remoteEndPoint, id, connectNum, connectData);
}
inline void LiteNetLib::NetPeer::_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { ".ctor",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::LiteNetLib::NetManager*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(),
                                                                                                          ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netManager, remoteEndPoint, id, connectId, connectNum);
}
inline void LiteNetLib::NetPeer::Reject(int64_t connectionId, uint8_t connectionNumber, ::ArrayW<uint8_t> data, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                          { "Reject", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connectionId, connectionNumber, data, start, length);
}
inline bool LiteNetLib::NetPeer::ProcessConnectAccept(::LiteNetLib::NetConnectAcceptPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessConnectAccept", {}, { ::i2c::type_of<::LiteNetLib::NetConnectAcceptPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, packet);
}
inline int32_t LiteNetLib::NetPeer::GetMaxSinglePacketSize(::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "GetMaxSinglePacketSize", {}, { ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, options);
}
inline void LiteNetLib::NetPeer::SendWithDeliveryEvent(::ArrayW<uint8_t> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::LiteNetLib::NetPeer*>(),
          { "SendWithDeliveryEvent", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channelNumber, deliveryMethod, userData);
}
inline void LiteNetLib::NetPeer::SendWithDeliveryEvent(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod,
                                                       ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendWithDeliveryEvent",
                                                                       {},
                                                                       { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(),
                                                                         ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, start, length, channelNumber, deliveryMethod, userData);
}
inline void LiteNetLib::NetPeer::SendWithDeliveryEvent(::LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendWithDeliveryEvent",
                                                                                                        {},
                                                                                                        { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint8_t>(),
                                                                                                          ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataWriter, channelNumber, deliveryMethod, userData);
}
inline void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t> data, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, deliveryMethod);
}
inline void LiteNetLib::NetPeer::Send(::LiteNetLib::Utils::NetDataWriter* dataWriter, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Send", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataWriter, deliveryMethod);
}
inline void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t> data, int32_t start, int32_t length, ::LiteNetLib::DeliveryMethod options) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                       { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, start, length, options);
}
inline void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t> data, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                                           { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channelNumber, deliveryMethod);
}
inline void LiteNetLib::NetPeer::Send(::LiteNetLib::Utils::NetDataWriter* dataWriter, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                              { "Send", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataWriter, channelNumber, deliveryMethod);
}
inline void LiteNetLib::NetPeer::Send(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::LiteNetLib::NetPeer*>(),
          { "Send", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::LiteNetLib::DeliveryMethod>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, start, length, channelNumber, deliveryMethod);
}
inline void LiteNetLib::NetPeer::SendInternal(::ArrayW<uint8_t> data, int32_t start, int32_t length, uint8_t channelNumber, ::LiteNetLib::DeliveryMethod deliveryMethod, ::System::Object* userData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendInternal",
                                                                       {},
                                                                       { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(),
                                                                         ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, start, length, channelNumber, deliveryMethod, userData);
}
inline void LiteNetLib::NetPeer::Disconnect(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Disconnect", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void LiteNetLib::NetPeer::Disconnect(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Disconnect", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void LiteNetLib::NetPeer::Disconnect(::ArrayW<uint8_t> data, int32_t start, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Disconnect", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, start, count);
}
inline void LiteNetLib::NetPeer::Disconnect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Disconnect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::DisconnectResult LiteNetLib::NetPeer::ProcessDisconnect(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessDisconnect", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::DisconnectResult>(this, ___internal_method, packet);
}
inline ::LiteNetLib::ShutdownResult LiteNetLib::NetPeer::Shutdown(::ArrayW<uint8_t> data, int32_t start, int32_t length, bool force) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(),
                                                           { "Shutdown", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::ShutdownResult>(this, ___internal_method, data, start, length, force);
}
inline void LiteNetLib::NetPeer::UpdateRoundTripTime(int32_t roundTripTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "UpdateRoundTripTime", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roundTripTime);
}
inline void LiteNetLib::NetPeer::AddReliablePacket(::LiteNetLib::DeliveryMethod method, ::LiteNetLib::NetPacket* p) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "AddReliablePacket", {}, { ::i2c::type_of<::LiteNetLib::DeliveryMethod>(), ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method, p);
}
inline void LiteNetLib::NetPeer::ProcessMtuPacket(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessMtuPacket", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPeer::UpdateMtuLogic(int32_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "UpdateMtuLogic", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline ::LiteNetLib::ConnectRequestResult LiteNetLib::NetPeer::ProcessConnectRequest(::LiteNetLib::NetConnectRequestPacket* connRequest) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessConnectRequest", {}, { ::i2c::type_of<::LiteNetLib::NetConnectRequestPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::ConnectRequestResult>(this, ___internal_method, connRequest);
}
inline void LiteNetLib::NetPeer::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "ProcessPacket", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPeer::SendMerged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendMerged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::NetPeer::SendUserData(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "SendUserData", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPeer::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::NetPeer::Update(int32_t deltaTime) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "Update", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void LiteNetLib::NetPeer::RecycleAndDeliver(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPeer*>(), { "RecycleAndDeliver", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetPeer::New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetPeer*>(netManager, remoteEndPoint, id));
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetPeer::New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, uint8_t connectNum,
                                                            ::LiteNetLib::Utils::NetDataWriter* connectData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetPeer*>(netManager, remoteEndPoint, id, connectNum, connectData));
}
inline ::LiteNetLib::NetPeer* LiteNetLib::NetPeer::New_ctor(::LiteNetLib::NetManager* netManager, ::System::Net::IPEndPoint* remoteEndPoint, int32_t id, int64_t connectId, uint8_t connectNum) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetPeer*>(netManager, remoteEndPoint, id, connectId, connectNum));
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetPeer::NetPeer() {}
