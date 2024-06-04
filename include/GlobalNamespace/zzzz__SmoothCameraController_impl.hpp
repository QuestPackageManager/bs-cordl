#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothCameraController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCameraController_def.hpp"
#include "BeatSaber/GameSettings/zzzz__MainSettingsHandler_def.hpp"
#include "GlobalNamespace/zzzz__SmoothCamera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2740b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2740c48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.HandleDidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(
    &::GlobalNamespace::SmoothCameraController::HandleDidActivate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2740c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                                                                               "HandleDidActivate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.HandleDidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(
    &::GlobalNamespace::SmoothCameraController::HandleDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2740c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                                                                               "HandleDidDeactivate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.ActivateSmoothCameraIfNeeded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(
    &::GlobalNamespace::SmoothCameraController::ActivateSmoothCameraIfNeeded)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2740b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                                                                               "ActivateSmoothCameraIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2740c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SmoothCamera>& GlobalNamespace::SmoothCameraController::__cordl_internal_get__smoothCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothCamera;
}
constexpr ::UnityW<::GlobalNamespace::SmoothCamera> const& GlobalNamespace::SmoothCameraController::__cordl_internal_get__smoothCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smoothCamera;
}
constexpr void GlobalNamespace::SmoothCameraController::__cordl_internal_set__smoothCamera(::UnityW<::GlobalNamespace::SmoothCamera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____smoothCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& GlobalNamespace::SmoothCameraController::__cordl_internal_get__mainSettingsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& GlobalNamespace::SmoothCameraController::__cordl_internal_get__mainSettingsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainSettingsHandler;
}
constexpr void GlobalNamespace::SmoothCameraController::__cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mainSettingsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SmoothCameraController::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::HandleDidActivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                                                                             "HandleDidActivate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::HandleDidDeactivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                                                                             "HandleDidDeactivate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::ActivateSmoothCameraIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(),
                                                                             "ActivateSmoothCameraIfNeeded", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SmoothCameraController* GlobalNamespace::SmoothCameraController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SmoothCameraController*>());
}
inline void GlobalNamespace::SmoothCameraController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SmoothCameraController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothCameraController::SmoothCameraController() {}
