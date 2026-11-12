#pragma once
// IWYU pragma private; include "GlobalNamespace/SmoothCameraController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SmoothCameraController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__SmoothCamera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4fed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4ff70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.SetOverrideWithExternalCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)(bool)>(&::GlobalNamespace::SmoothCameraController::SetOverrideWithExternalCamera)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e4ff74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "SetOverrideWithExternalCamera", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.HandleDidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::HandleDidActivate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e4ff9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "HandleDidActivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.HandleDidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::HandleDidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4ffdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "HandleDidDeactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController.ActivateSmoothCameraIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::ActivateSmoothCameraIfNeeded)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e4fed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "ActivateSmoothCameraIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SmoothCameraController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SmoothCameraController::*)()>(&::GlobalNamespace::SmoothCameraController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4ffe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { ".ctor", {}, {} })));
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
  this->____smoothCamera = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::SmoothCameraController::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::SmoothCameraController::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::SmoothCameraController::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr bool& GlobalNamespace::SmoothCameraController::__cordl_internal_get__isOverriddenByExternalCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOverriddenByExternalCamera;
}
constexpr bool const& GlobalNamespace::SmoothCameraController::__cordl_internal_get__isOverriddenByExternalCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isOverriddenByExternalCamera;
}
constexpr void GlobalNamespace::SmoothCameraController::__cordl_internal_set__isOverriddenByExternalCamera(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isOverriddenByExternalCamera = value;
}
inline void GlobalNamespace::SmoothCameraController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::SetOverrideWithExternalCamera(bool isOverridden) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "SetOverrideWithExternalCamera", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOverridden);
}
inline void GlobalNamespace::SmoothCameraController::HandleDidActivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "HandleDidActivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::HandleDidDeactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "HandleDidDeactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::ActivateSmoothCameraIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { "ActivateSmoothCameraIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SmoothCameraController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SmoothCameraController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SmoothCameraController* GlobalNamespace::SmoothCameraController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SmoothCameraController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SmoothCameraController::SmoothCameraController() {}
