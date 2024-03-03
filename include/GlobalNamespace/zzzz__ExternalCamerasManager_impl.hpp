#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ExternalCamerasManager_def.hpp"
#include "GlobalNamespace/zzzz__OculusMRCManager_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ExternalCamerasManager.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExternalCamerasManager::*)()>(&::GlobalNamespace::ExternalCamerasManager::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x28f00fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalCamerasManager.InstantiateMixedRealityBackgroundCameraGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ExternalCamerasManager::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28f01c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "InstantiateMixedRealityBackgroundCameraGameObject",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalCamerasManager.InstantiateMixedRealityForegroundCameraGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::ExternalCamerasManager::*)(::UnityEngine::GameObject*)>(
    &::GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x28f0248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "InstantiateMixedRealityForegroundCameraGameObject",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ExternalCamerasManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ExternalCamerasManager::*)()>(&::GlobalNamespace::ExternalCamerasManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28f02c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OculusMRCManager>& GlobalNamespace::ExternalCamerasManager::__cordl_internal_get__oculusMRCManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusMRCManager;
}
constexpr ::UnityW<::GlobalNamespace::OculusMRCManager> const& GlobalNamespace::ExternalCamerasManager::__cordl_internal_get__oculusMRCManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____oculusMRCManager;
}
constexpr void GlobalNamespace::ExternalCamerasManager::__cordl_internal_set__oculusMRCManager(::UnityW<::GlobalNamespace::OculusMRCManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____oculusMRCManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::ExternalCamerasManager::__cordl_internal_get__mrcBackgroundCameraPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mrcBackgroundCameraPrefab;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::ExternalCamerasManager::__cordl_internal_get__mrcBackgroundCameraPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mrcBackgroundCameraPrefab;
}
constexpr void GlobalNamespace::ExternalCamerasManager::__cordl_internal_set__mrcBackgroundCameraPrefab(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mrcBackgroundCameraPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::ExternalCamerasManager::__cordl_internal_get__mrcForegroundCameraPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mrcForegroundCameraPrefab;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::ExternalCamerasManager::__cordl_internal_get__mrcForegroundCameraPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mrcForegroundCameraPrefab;
}
constexpr void GlobalNamespace::ExternalCamerasManager::__cordl_internal_set__mrcForegroundCameraPrefab(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mrcForegroundCameraPrefab)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ExternalCamerasManager::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityBackgroundCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "InstantiateMixedRealityBackgroundCameraGameObject",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, mainCameraGameObject);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::ExternalCamerasManager::InstantiateMixedRealityForegroundCameraGameObject(::UnityEngine::GameObject* mainCameraGameObject) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), "InstantiateMixedRealityForegroundCameraGameObject",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method, mainCameraGameObject);
}
inline ::GlobalNamespace::ExternalCamerasManager* GlobalNamespace::ExternalCamerasManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ExternalCamerasManager*>());
}
inline void GlobalNamespace::ExternalCamerasManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ExternalCamerasManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ExternalCamerasManager::ExternalCamerasManager() {}
