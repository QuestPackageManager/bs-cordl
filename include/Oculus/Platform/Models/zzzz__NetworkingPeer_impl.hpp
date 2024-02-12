#pragma once
#include "Oculus/Platform/zzzz__PeerConnectionState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__NetworkingPeer_def.hpp"
#include "Oculus/Platform/zzzz__PeerConnectionState_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::NetworkingPeer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetworkingPeer::*)(uint64_t, ::Oculus::Platform::PeerConnectionState)>(
    &::Oculus::Platform::Models::NetworkingPeer::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x273bcd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::PeerConnectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::NetworkingPeer.get_ID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::Oculus::Platform::Models::NetworkingPeer::*)()>(&::Oculus::Platform::Models::NetworkingPeer::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273bd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), "get_ID",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::NetworkingPeer.set_ID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetworkingPeer::*)(uint64_t)>(
    &::Oculus::Platform::Models::NetworkingPeer::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273bd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), "set_ID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::NetworkingPeer.get_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::PeerConnectionState (::Oculus::Platform::Models::NetworkingPeer::*)()>(
    &::Oculus::Platform::Models::NetworkingPeer::get_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273bd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), "get_State",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Models::NetworkingPeer.set_State
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::NetworkingPeer::*)(::Oculus::Platform::PeerConnectionState)>(
    &::Oculus::Platform::Models::NetworkingPeer::set_State)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273bd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::PeerConnectionState>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Oculus::Platform::Models::NetworkingPeer::__cordl_internal_get__ID_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ID_k__BackingField;
}
constexpr uint64_t const& Oculus::Platform::Models::NetworkingPeer::__cordl_internal_get__ID_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ID_k__BackingField;
}
constexpr void Oculus::Platform::Models::NetworkingPeer::__cordl_internal_set__ID_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ID_k__BackingField = value;
}
constexpr ::Oculus::Platform::PeerConnectionState& Oculus::Platform::Models::NetworkingPeer::__cordl_internal_get__State_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr ::Oculus::Platform::PeerConnectionState const& Oculus::Platform::Models::NetworkingPeer::__cordl_internal_get__State_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____State_k__BackingField;
}
constexpr void Oculus::Platform::Models::NetworkingPeer::__cordl_internal_set__State_k__BackingField(::Oculus::Platform::PeerConnectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____State_k__BackingField = value;
}
inline ::Oculus::Platform::Models::NetworkingPeer* Oculus::Platform::Models::NetworkingPeer::New_ctor(uint64_t id, ::Oculus::Platform::PeerConnectionState state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::NetworkingPeer*>(id, state));
}
inline void Oculus::Platform::Models::NetworkingPeer::_ctor(uint64_t id, ::Oculus::Platform::PeerConnectionState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::PeerConnectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, state);
}
inline uint64_t Oculus::Platform::Models::NetworkingPeer::get_ID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), "get_ID",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void Oculus::Platform::Models::NetworkingPeer::set_ID(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), "set_ID", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Oculus::Platform::PeerConnectionState Oculus::Platform::Models::NetworkingPeer::get_State() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), "get_State",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::PeerConnectionState, false>(this, ___internal_method);
}
inline void Oculus::Platform::Models::NetworkingPeer::set_State(::Oculus::Platform::PeerConnectionState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::NetworkingPeer*>::get(), "set_State", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::PeerConnectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::NetworkingPeer::NetworkingPeer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
