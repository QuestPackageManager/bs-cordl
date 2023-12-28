#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyAvatarPlace_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlace.SetPositionAndRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlace::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::MultiplayerLobbyAvatarPlace::SetPositionAndRotation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2251d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>::get(), "SetPositionAndRotation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLobbyAvatarPlace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLobbyAvatarPlace::*)()>(&::GlobalNamespace::MultiplayerLobbyAvatarPlace::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2251d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MultiplayerLobbyAvatarPlace::SetPositionAndRotation(::UnityEngine::Vector3 worldPos, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>::get(), "SetPositionAndRotation", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, worldPos, rotation);
}
inline ::GlobalNamespace::MultiplayerLobbyAvatarPlace* GlobalNamespace::MultiplayerLobbyAvatarPlace::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>());
}
inline void GlobalNamespace::MultiplayerLobbyAvatarPlace::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLobbyAvatarPlace*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLobbyAvatarPlace::MultiplayerLobbyAvatarPlace() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::*)()>(
    &::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2251d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool* GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*>());
}
inline void GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLobbyAvatarPlace__Pool::__MultiplayerLobbyAvatarPlace__Pool() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
