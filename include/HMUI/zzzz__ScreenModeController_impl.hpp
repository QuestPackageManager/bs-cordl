#pragma once
// IWYU pragma private; include "HMUI\ScreenModeController.hpp"
#include "HMUI/zzzz__CurvedCanvasSettings_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScreenModeController_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "HMUI/zzzz__ScreenModeData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenModeController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenModeController::*)()>(&::HMUI::ScreenModeController::Awake)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x32f5f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeController.SetMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenModeController::*)(::HMUI::ScreenModeData*)>(&::HMUI::ScreenModeController::SetMode)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x32f6074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeController*>(), { "SetMode", {}, { ::i2c::type_of<::HMUI::ScreenModeData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeController.SetDefaultMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenModeController::*)()>(&::HMUI::ScreenModeController::SetDefaultMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f6298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeController*>(), { "SetDefaultMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScreenModeController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenModeController::*)()>(&::HMUI::ScreenModeController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f62a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>>& HMUI::ScreenModeController::__cordl_internal_get__curvedCanvases() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvases;
}
constexpr ::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>> const& HMUI::ScreenModeController::__cordl_internal_get__curvedCanvases() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curvedCanvases;
}
constexpr void HMUI::ScreenModeController::__cordl_internal_set__curvedCanvases(::ArrayW<::UnityW<::HMUI::CurvedCanvasSettings>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____curvedCanvases = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& HMUI::ScreenModeController::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& HMUI::ScreenModeController::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void HMUI::ScreenModeController::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrPlatformHelper = value;
}
constexpr ::HMUI::ScreenModeData*& HMUI::ScreenModeController::__cordl_internal_get__defaultModeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultModeData;
}
constexpr ::HMUI::ScreenModeData* const& HMUI::ScreenModeController::__cordl_internal_get__defaultModeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultModeData;
}
constexpr void HMUI::ScreenModeController::__cordl_internal_set__defaultModeData(::HMUI::ScreenModeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultModeData = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& HMUI::ScreenModeController::__cordl_internal_get__transform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& HMUI::ScreenModeController::__cordl_internal_get__transform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transform;
}
constexpr void HMUI::ScreenModeController::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____transform = value;
}
inline void HMUI::ScreenModeController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScreenModeController::SetMode(::HMUI::ScreenModeData* screenModeData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeController*>(), { "SetMode", {}, { ::i2c::type_of<::HMUI::ScreenModeData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenModeData);
}
inline void HMUI::ScreenModeController::SetDefaultMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeController*>(), { "SetDefaultMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScreenModeController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenModeController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ScreenModeController* HMUI::ScreenModeController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScreenModeController*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScreenModeController::ScreenModeController() {}
