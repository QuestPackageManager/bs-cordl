#pragma once
// IWYU pragma private; include "ENet/Peer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "ENet/zzzz__Peer_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
#include "ENet/zzzz__PeerState_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::ENet::Peer.get_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::ENet::Peer::*)()>(&::ENet::Peer::get_NativeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5896998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_NativeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.set_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(::System::IntPtr)>(&::ENet::Peer::set_NativeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58969a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "set_NativeData", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(::System::IntPtr)>(&::ENet::Peer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x589457c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ENet::Peer::*)()>(&::ENet::Peer::get_IsSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5896a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_IsSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Peer::*)()>(&::ENet::Peer::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5896a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_ID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_IP
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::ENet::Peer::*)()>(&::ENet::Peer::get_IP)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5896a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_IP", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_Port
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::ENet::Peer::*)()>(&::ENet::Peer::get_Port)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5896c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_Port", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_MTU
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Peer::*)()>(&::ENet::Peer::get_MTU)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5896d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_MTU", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_State
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::PeerState (::ENet::Peer::*)()>(&::ENet::Peer::get_State)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5896da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_State", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_RoundTripTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Peer::*)()>(&::ENet::Peer::get_RoundTripTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5896e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_RoundTripTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_LastRoundTripTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Peer::*)()>(&::ENet::Peer::get_LastRoundTripTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5896ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_LastRoundTripTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_LastSendTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Peer::*)()>(&::ENet::Peer::get_LastSendTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5896f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_LastSendTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_LastReceiveTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Peer::*)()>(&::ENet::Peer::get_LastReceiveTime)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5896ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_LastReceiveTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_PacketsSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::ENet::Peer::*)()>(&::ENet::Peer::get_PacketsSent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5897084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_PacketsSent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_PacketsLost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::ENet::Peer::*)()>(&::ENet::Peer::get_PacketsLost)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5897118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_PacketsLost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_PacketsThrottle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::ENet::Peer::*)()>(&::ENet::Peer::get_PacketsThrottle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58971ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_PacketsThrottle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_BytesSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::ENet::Peer::*)()>(&::ENet::Peer::get_BytesSent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5897240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_BytesSent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_BytesReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::ENet::Peer::*)()>(&::ENet::Peer::get_BytesReceived)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58972d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_BytesReceived", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.get_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::ENet::Peer::*)()>(&::ENet::Peer::get_Data)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5897368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_Data", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.set_Data
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(::System::IntPtr)>(&::ENet::Peer::set_Data)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58973fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "set_Data", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.ThrowIfNotCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)()>(&::ENet::Peer::ThrowIfNotCreated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5896af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "ThrowIfNotCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.ConfigureThrottle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(uint32_t, uint32_t, uint32_t, uint32_t)>(&::ENet::Peer::ConfigureThrottle)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58974a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(),
                                                { "ConfigureThrottle", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.Send
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ENet::Peer::*)(uint8_t, ::by_ref<::ENet::Packet>)>(&::ENet::Peer::Send)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x589759c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Send", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ENet::Packet>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.Receive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ENet::Peer::*)(::by_ref<uint8_t>, ::by_ref<::ENet::Packet>)>(&::ENet::Peer::Receive)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5897668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Receive", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<::ENet::Packet>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.Ping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)()>(&::ENet::Peer::Ping)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5897734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Ping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.PingInterval
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(uint32_t)>(&::ENet::Peer::PingInterval)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58977c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "PingInterval", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(uint32_t, uint32_t, uint32_t)>(&::ENet::Peer::Timeout)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5897874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Timeout", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.Disconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(uint32_t)>(&::ENet::Peer::Disconnect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5897950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Disconnect", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.DisconnectNow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(uint32_t)>(&::ENet::Peer::DisconnectNow)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58979fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "DisconnectNow", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.DisconnectLater
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)(uint32_t)>(&::ENet::Peer::DisconnectLater)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5897aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "DisconnectLater", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Peer.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Peer::*)()>(&::ENet::Peer::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5897b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::IntPtr ENet::Peer::get_NativeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_NativeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void ENet::Peer::set_NativeData(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "set_NativeData", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void ENet::Peer::_ctor(::System::IntPtr peer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, peer);
}
inline bool ENet::Peer::get_IsSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_IsSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline uint32_t ENet::Peer::get_ID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_ID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::StringW ENet::Peer::get_IP() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_IP", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint16_t ENet::Peer::get_Port() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_Port", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline uint32_t ENet::Peer::get_MTU() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_MTU", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline ::ENet::PeerState ENet::Peer::get_State() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_State", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ENet::PeerState>(*this, ___internal_method);
}
inline uint32_t ENet::Peer::get_RoundTripTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_RoundTripTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t ENet::Peer::get_LastRoundTripTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_LastRoundTripTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t ENet::Peer::get_LastSendTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_LastSendTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t ENet::Peer::get_LastReceiveTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_LastReceiveTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint64_t ENet::Peer::get_PacketsSent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_PacketsSent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline uint64_t ENet::Peer::get_PacketsLost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_PacketsLost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline float_t ENet::Peer::get_PacketsThrottle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_PacketsThrottle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline uint64_t ENet::Peer::get_BytesSent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_BytesSent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline uint64_t ENet::Peer::get_BytesReceived() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_BytesReceived", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::System::IntPtr ENet::Peer::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "get_Data", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void ENet::Peer::set_Data(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "set_Data", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void ENet::Peer::ThrowIfNotCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "ThrowIfNotCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void ENet::Peer::ConfigureThrottle(uint32_t interval, uint32_t acceleration, uint32_t deceleration, uint32_t threshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(),
                                              { "ConfigureThrottle", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, interval, acceleration, deceleration, threshold);
}
inline int32_t ENet::Peer::Send(uint8_t channelID, ::by_ref<::ENet::Packet> packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Send", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ENet::Packet>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, channelID, packet);
}
inline bool ENet::Peer::Receive(::by_ref<uint8_t> channelID, ::by_ref<::ENet::Packet> packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Receive", {}, { ::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<::by_ref<::ENet::Packet>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, channelID, packet);
}
inline void ENet::Peer::Ping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Ping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void ENet::Peer::PingInterval(uint32_t interval) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "PingInterval", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, interval);
}
inline void ENet::Peer::Timeout(uint32_t timeoutLimit, uint32_t timeoutMinimum, uint32_t timeoutMaximum) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Timeout", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timeoutLimit, timeoutMinimum, timeoutMaximum);
}
inline void ENet::Peer::Disconnect(uint32_t data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Disconnect", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline void ENet::Peer::DisconnectNow(uint32_t data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "DisconnectNow", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline void ENet::Peer::DisconnectLater(uint32_t data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "DisconnectLater", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data);
}
inline void ENet::Peer::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Peer>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "nativePeer", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "nativeID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::Peer::Peer(::System::IntPtr nativePeer, uint32_t nativeID) noexcept {
  this->nativePeer = nativePeer;
  this->nativeID = nativeID;
}
// Ctor Parameters []
constexpr ::ENet::Peer::Peer() {}
