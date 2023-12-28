#pragma once
#include "ENet/zzzz__ENetEvent_impl.hpp"
#include "ENet/zzzz__Event_def.hpp"
#include "ENet/zzzz__EventType_def.hpp"
#include "ENet/zzzz__Packet_def.hpp"
#include "ENet/zzzz__ENetEvent_def.hpp"
#include "ENet/zzzz__Peer_def.hpp"
//  Writing Method size for method: ::ENet::Event.get_NativeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::ENetEvent (::ENet::Event::*)()>(&::ENet::Event::get_NativeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21efd60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_NativeData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.set_NativeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ENet::Event::*)(::ENet::ENetEvent)>(&::ENet::Event::set_NativeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21efd6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "set_NativeData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::ENet::Event::*)(::ENet::ENetEvent)>(&::ENet::Event::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21efd78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetEvent>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::EventType (::ENet::Event::*)()>(&::ENet::Event::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21efd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_Type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Peer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Peer (::ENet::Event::*)()>(&::ENet::Event::get_Peer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21efd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_Peer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_ChannelID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::ENet::Event::*)()>(&::ENet::Event::get_ChannelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21efe34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_ChannelID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Data
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::ENet::Event::*)()>(&::ENet::Event::get_Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21efe3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_Data", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ENet::Event.get_Packet
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ENet::Packet (::ENet::Event::*)()>(&::ENet::Event::get_Packet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21efe44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_Packet", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::ENet::ENetEvent ENet::Event::get_NativeData() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_NativeData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ENet::ENetEvent, false>(this, ___internal_method);
}
inline void ENet::Event::set_NativeData(::ENet::ENetEvent value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "set_NativeData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void ENet::Event::_ctor(::ENet::ENetEvent event) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ENet::ENetEvent>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, event);
}
inline ::ENet::EventType ENet::Event::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_Type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ENet::EventType, false>(this, ___internal_method);
}
inline ::ENet::Peer ENet::Event::get_Peer() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_Peer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ENet::Peer, false>(this, ___internal_method);
}
inline uint8_t ENet::Event::get_ChannelID() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_ChannelID", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline uint32_t ENet::Event::get_Data() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_Data", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::ENet::Packet ENet::Event::get_Packet() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::ENet::Event>::get(), "get_Packet", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ENet::Packet, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "nativeEvent", ty: "::ENet::ENetEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::ENet::Event::Event(::ENet::ENetEvent nativeEvent) noexcept {
  this->nativeEvent = nativeEvent;
}
// Ctor Parameters []
constexpr ::ENet::Event::Event() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
