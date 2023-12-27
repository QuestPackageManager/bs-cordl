#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ExternalCamerasManager_def.hpp"
#include "GlobalNamespace/zzzz__OculusMRCManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExternalCamerasManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExternalCamerasManager::*)()>(&::GlobalNamespace::ExternalCamerasManager::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2807498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalCamerasManager.InstantiateMixedRealityBackgroundCameraGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::ExternalCamerasManager::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2807564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "InstantiateMixedRealityBackgroundCameraGameObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalCamerasManager.InstantiateMixedRealityForegroundCameraGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::GlobalNamespace::ExternalCamerasManager::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28075e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "InstantiateMixedRealityForegroundCameraGameObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalCamerasManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExternalCamerasManager::*)()>(&::GlobalNamespace::ExternalCamerasManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2807664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OculusMRCManager*& GlobalNamespace::ExternalCamerasManager::__get__oculusMRCManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____oculusMRCManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusMRCManager*> const& GlobalNamespace::ExternalCamerasManager::__get__oculusMRCManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____oculusMRCManager;
}
constexpr void GlobalNamespace::ExternalCamerasManager::__set__oculusMRCManager(::GlobalNamespace::OculusMRCManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusMRCManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Camera*& GlobalNamespace::ExternalCamerasManager::__get__mrcBackgroundCameraPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mrcBackgroundCameraPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::ExternalCamerasManager::__get__mrcBackgroundCameraPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mrcBackgroundCameraPrefab;
}
constexpr void GlobalNamespace::ExternalCamerasManager::__set__mrcBackgroundCameraPrefab(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mrcBackgroundCameraPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Camera*& GlobalNamespace::ExternalCamerasManager::__get__mrcForegroundCameraPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mrcForegroundCameraPrefab;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& GlobalNamespace::ExternalCamerasManager::__get__mrcForegroundCameraPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mrcForegroundCameraPrefab;
}
constexpr void GlobalNamespace::ExternalCamerasManager::__set__mrcForegroundCameraPrefab(::UnityEngine::Camera* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mrcForegroundCameraPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ExternalCamerasManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::GameObject* GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "InstantiateMixedRealityBackgroundCameraGameObject",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, mainCameraGameObject);
}
inline ::UnityEngine::GameObject* GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "InstantiateMixedRealityForegroundCameraGameObject",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, mainCameraGameObject);
}
inline ::GlobalNamespace::ExternalCamerasManager* GlobalNamespace::ExternalCamerasManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ExternalCamerasManager*>());
}
inline void GlobalNamespace::ExternalCamerasManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExternalCamerasManager::ExternalCamerasManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
