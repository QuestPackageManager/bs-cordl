#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlace.SetPositionAndRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlace::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::MultiplayerLobbyAvatarPlace::SetPositionAndRotation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x247e144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>::get(), "SetPositionAndRotation", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlace::*)()>(&::GlobalNamespace::MultiplayerLobbyAvatarPlace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x247e1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerLobbyAvatarPlace::SetPositionAndRotation(::UnityEngine::Vector3 worldPos, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>::get(), "SetPositionAndRotation", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, worldPos, rotation);
}
inline ::GlobalNamespace::MultiplayerLobbyAvatarPlace* GlobalNamespace::MultiplayerLobbyAvatarPlace::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>());
}
inline void GlobalNamespace::MultiplayerLobbyAvatarPlace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace::MultiplayerLobbyAvatarPlace() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::*)()>(
    &::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x247e1c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool* GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*>());
}
inline void GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::__MultiplayerLobbyAvatarPlace__Pool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
