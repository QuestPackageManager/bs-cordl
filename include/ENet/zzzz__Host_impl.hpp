#pragma once
// IWYU pragma private; include "ENet\Host.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "ENet/zzzz__Host_def.hpp"
#include "ENet/zzzz__Address_def.hpp"
#include "ENet/zzzz__ChecksumCallback_def.hpp"
#include "ENet/zzzz__Event_def.hpp"
#include "ENet/zzzz__InterceptCallback_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
#include "ENet/zzzz__Peer_def.hpp"
#include "ENet/zzzz__SslConfiguration_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::ENet::Host.get_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::ENet::Host::*)()>(&::ENet::Host::get_NativeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58930d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_NativeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.set_NativeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(::System::IntPtr)>(&::ENet::Host::set_NativeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58930dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "set_NativeData", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)()>(&::ENet::Host::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58930e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(bool)>(&::ENet::Host::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5893154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { ::i2c::class_of<::ENet::Host*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)()>(&::ENet::Host::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58931f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { ::i2c::class_of<::ENet::Host*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.get_IsSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::ENet::Host::*)()>(&::ENet::Host::get_IsSet)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5893240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_IsSet", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.get_PeersCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Host::*)()>(&::ENet::Host::get_PeersCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5893250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_PeersCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.get_PacketsSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Host::*)()>(&::ENet::Host::get_PacketsSent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x589333c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_PacketsSent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.get_PacketsReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Host::*)()>(&::ENet::Host::get_PacketsReceived)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58933d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_PacketsReceived", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.get_BytesSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Host::*)()>(&::ENet::Host::get_BytesSent)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5893464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_BytesSent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.get_BytesReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::ENet::Host::*)()>(&::ENet::Host::get_BytesReceived)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58934f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_BytesReceived", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.ThrowIfNotCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)()>(&::ENet::Host::ThrowIfNotCreated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5893268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "ThrowIfNotCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.ThrowIfChannelsExceeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::ENet::Host::ThrowIfChannelsExceeded)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x589358c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "ThrowIfChannelsExceeded", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(::System::Nullable_1<::ENet::Address>, int32_t, int32_t, uint32_t, uint32_t, int32_t, ::ENet::SslConfiguration)>(
    &::ENet::Host::Create)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x58935e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Create",
                                                                {},
                                                                { ::i2c::type_of<::System::Nullable_1<::ENet::Address>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                  ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::SslConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.PreventConnections
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(bool)>(&::ENet::Host::PreventConnections)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5893a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "PreventConnections", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Broadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(uint8_t, ::by_ref<::ENet::Packet>)>(&::ENet::Host::Broadcast)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5893af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Broadcast", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ENet::Packet>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Broadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(uint8_t, ::by_ref<::ENet::Packet>, ::ENet::Peer)>(&::ENet::Host::Broadcast)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5893bc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Broadcast", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ENet::Packet>>(), ::i2c::type_of<::ENet::Peer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Broadcast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(uint8_t, ::by_ref<::ENet::Packet>, ::ArrayW<::ENet::Peer>)>(&::ENet::Host::Broadcast)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5893cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(),
                                                { "Broadcast", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ENet::Packet>>(), ::i2c::type_of<::ArrayW<::ENet::Peer>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.CheckEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ENet::Host::*)(::by_ref<::ENet::Event>)>(&::ENet::Host::CheckEvents)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5893e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "CheckEvents", {}, { ::i2c::type_of<::by_ref<::ENet::Event>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::Peer (::ENet::Host::*)(::ENet::Address)>(&::ENet::Host::Connect)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5893f58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Connect", {}, { ::i2c::type_of<::ENet::Address>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::Peer (::ENet::Host::*)(::ENet::Address, int32_t)>(&::ENet::Host::Connect)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x589409c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Connect", {}, { ::i2c::type_of<::ENet::Address>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Connect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ENet::Peer (::ENet::Host::*)(::ENet::Address, int32_t, uint32_t)>(&::ENet::Host::Connect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5893fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Connect", {}, { ::i2c::type_of<::ENet::Address>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Service
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::ENet::Host::*)(int32_t, ::by_ref<::ENet::Event>)>(&::ENet::Host::Service)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5894188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Service", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ENet::Event>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.SetBandwidthLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(uint32_t, uint32_t)>(&::ENet::Host::SetBandwidthLimit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58942c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetBandwidthLimit", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.SetChannelLimit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(int32_t)>(&::ENet::Host::SetChannelLimit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x589438c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetChannelLimit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.SetMaxDuplicatePeers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(uint16_t)>(&::ENet::Host::SetMaxDuplicatePeers)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5894440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetMaxDuplicatePeers", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.SetInterceptCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(::System::IntPtr)>(&::ENet::Host::SetInterceptCallback)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58944ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetInterceptCallback", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.SetInterceptCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(::ENet::InterceptCallback*)>(&::ENet::Host::SetInterceptCallback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5894598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetInterceptCallback", {}, { ::i2c::type_of<::ENet::InterceptCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.SetChecksumCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(::System::IntPtr)>(&::ENet::Host::SetChecksumCallback)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5894630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetChecksumCallback", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.SetChecksumCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)(::ENet::ChecksumCallback*)>(&::ENet::Host::SetChecksumCallback)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58946dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetChecksumCallback", {}, { ::i2c::type_of<::ENet::ChecksumCallback*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host.Flush
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)()>(&::ENet::Host::Flush)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5894774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Flush", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Host._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ENet::Host::*)()>(&::ENet::Host::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5894808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& ENet::Host::__cordl_internal_get_nativeHost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeHost;
}
constexpr ::System::IntPtr const& ENet::Host::__cordl_internal_get_nativeHost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nativeHost;
}
constexpr void ENet::Host::__cordl_internal_set_nativeHost(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nativeHost = value;
}
inline ::System::IntPtr ENet::Host::get_NativeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_NativeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void ENet::Host::set_NativeData(::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "set_NativeData", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void ENet::Host::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ENet::Host::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::Host*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void ENet::Host::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::ENet::Host*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool ENet::Host::get_IsSet() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_IsSet", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t ENet::Host::get_PeersCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_PeersCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t ENet::Host::get_PacketsSent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_PacketsSent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t ENet::Host::get_PacketsReceived() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_PacketsReceived", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t ENet::Host::get_BytesSent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_BytesSent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline uint32_t ENet::Host::get_BytesReceived() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "get_BytesReceived", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method);
}
inline void ENet::Host::ThrowIfNotCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "ThrowIfNotCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ENet::Host::ThrowIfChannelsExceeded(int32_t channelLimit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "ThrowIfChannelsExceeded", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, channelLimit);
}
inline void ENet::Host::Create(::System::Nullable_1<::ENet::Address> address, int32_t peerLimit, int32_t channelLimit, uint32_t incomingBandwidth, uint32_t outgoingBandwidth, int32_t bufferSize,
                               ::ENet::SslConfiguration sslConfiguration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Create",
                                                              {},
                                                              { ::i2c::type_of<::System::Nullable_1<::ENet::Address>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ENet::SslConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address, peerLimit, channelLimit, incomingBandwidth, outgoingBandwidth, bufferSize, sslConfiguration);
}
inline void ENet::Host::PreventConnections(bool state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "PreventConnections", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void ENet::Host::Broadcast(uint8_t channelID, ::by_ref<::ENet::Packet> packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Broadcast", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ENet::Packet>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelID, packet);
}
inline void ENet::Host::Broadcast(uint8_t channelID, ::by_ref<::ENet::Packet> packet, ::ENet::Peer excludedPeer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Broadcast", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ENet::Packet>>(), ::i2c::type_of<::ENet::Peer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelID, packet, excludedPeer);
}
inline void ENet::Host::Broadcast(uint8_t channelID, ::by_ref<::ENet::Packet> packet, ::ArrayW<::ENet::Peer> peers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Broadcast", {}, { ::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ENet::Packet>>(), ::i2c::type_of<::ArrayW<::ENet::Peer>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelID, packet, peers);
}
inline int32_t ENet::Host::CheckEvents(::by_ref<::ENet::Event> event) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "CheckEvents", {}, { ::i2c::type_of<::by_ref<::ENet::Event>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, event);
}
inline ::ENet::Peer ENet::Host::Connect(::ENet::Address address) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Connect", {}, { ::i2c::type_of<::ENet::Address>() } })));
  return ::cordl_internals::RunMethodRethrow<::ENet::Peer>(this, ___internal_method, address);
}
inline ::ENet::Peer ENet::Host::Connect(::ENet::Address address, int32_t channelLimit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Connect", {}, { ::i2c::type_of<::ENet::Address>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ENet::Peer>(this, ___internal_method, address, channelLimit);
}
inline ::ENet::Peer ENet::Host::Connect(::ENet::Address address, int32_t channelLimit, uint32_t data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Connect", {}, { ::i2c::type_of<::ENet::Address>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ENet::Peer>(this, ___internal_method, address, channelLimit, data);
}
inline int32_t ENet::Host::Service(int32_t timeout, ::by_ref<::ENet::Event> event) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Service", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::ENet::Event>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, timeout, event);
}
inline void ENet::Host::SetBandwidthLimit(uint32_t incomingBandwidth, uint32_t outgoingBandwidth) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetBandwidthLimit", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, incomingBandwidth, outgoingBandwidth);
}
inline void ENet::Host::SetChannelLimit(int32_t channelLimit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetChannelLimit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channelLimit);
}
inline void ENet::Host::SetMaxDuplicatePeers(uint16_t number) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetMaxDuplicatePeers", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void ENet::Host::SetInterceptCallback(::System::IntPtr callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetInterceptCallback", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void ENet::Host::SetInterceptCallback(::ENet::InterceptCallback* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetInterceptCallback", {}, { ::i2c::type_of<::ENet::InterceptCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void ENet::Host::SetChecksumCallback(::System::IntPtr callback) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetChecksumCallback", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void ENet::Host::SetChecksumCallback(::ENet::ChecksumCallback* callback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "SetChecksumCallback", {}, { ::i2c::type_of<::ENet::ChecksumCallback*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callback);
}
inline void ENet::Host::Flush() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { "Flush", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void ENet::Host::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::ENet::Host*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ENet::Host* ENet::Host::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::ENet::Host*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr ENet::Host::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* ENet::Host::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::ENet::Host::Host() {}
