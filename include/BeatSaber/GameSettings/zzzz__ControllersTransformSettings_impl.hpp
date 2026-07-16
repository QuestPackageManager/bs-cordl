#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllersTransformSettings.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllersTransformSettings_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfile_def.hpp"
#include "HMUI/zzzz__RangeValuesTextSlider_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllersTransformSettings.get_selectedControllerProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (::BeatSaber::GameSettings::ControllersTransformSettings::*)()>(
    &::BeatSaber::GameSettings::ControllersTransformSettings::get_selectedControllerProfile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3293c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { "get_selectedControllerProfile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllersTransformSettings.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllersTransformSettings::*)()>(&::BeatSaber::GameSettings::ControllersTransformSettings::Initialize)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x32930c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllersTransformSettings.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllersTransformSettings::*)()>(&::BeatSaber::GameSettings::ControllersTransformSettings::Deactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x329368c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { "Deactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllersTransformSettings.RefreshView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllersTransformSettings::*)(::BeatSaber::GameSettings::ControllerProfile*)>(
    &::BeatSaber::GameSettings::ControllersTransformSettings::RefreshView)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x3293a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(),
                                                                                           { "RefreshView", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllersTransformSettings.SetInteractable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllersTransformSettings::*)(bool)>(
    &::BeatSaber::GameSettings::ControllersTransformSettings::SetInteractable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3293cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { "SetInteractable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllersTransformSettings.HandlePositionSliderValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllersTransformSettings::*)(::HMUI::RangeValuesTextSlider*, float_t)>(
    &::BeatSaber::GameSettings::ControllersTransformSettings::HandlePositionSliderValueDidChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3293d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(),
                                                             { "HandlePositionSliderValueDidChange", {}, { ::i2c::type_of<::HMUI::RangeValuesTextSlider*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllersTransformSettings.HandleRotationSliderValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllersTransformSettings::*)(::HMUI::RangeValuesTextSlider*, float_t)>(
    &::BeatSaber::GameSettings::ControllersTransformSettings::HandleRotationSliderValueDidChange)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3293e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(),
                                                             { "HandleRotationSliderValueDidChange", {}, { ::i2c::type_of<::HMUI::RangeValuesTextSlider*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllersTransformSettings._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllersTransformSettings::*)()>(&::BeatSaber::GameSettings::ControllersTransformSettings::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3293ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__isLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLeft;
}
constexpr bool const& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__isLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isLeft;
}
constexpr void BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_set__isLeft(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isLeft = value;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__posXSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posXSlider;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__posXSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posXSlider;
}
constexpr void BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_set__posXSlider(::UnityW<::HMUI::RangeValuesTextSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____posXSlider = value;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__posYSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posYSlider;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__posYSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posYSlider;
}
constexpr void BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_set__posYSlider(::UnityW<::HMUI::RangeValuesTextSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____posYSlider = value;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__posZSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posZSlider;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__posZSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____posZSlider;
}
constexpr void BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_set__posZSlider(::UnityW<::HMUI::RangeValuesTextSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____posZSlider = value;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__rotXSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotXSlider;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__rotXSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotXSlider;
}
constexpr void BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_set__rotXSlider(::UnityW<::HMUI::RangeValuesTextSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotXSlider = value;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__rotYSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotYSlider;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__rotYSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotYSlider;
}
constexpr void BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_set__rotYSlider(::UnityW<::HMUI::RangeValuesTextSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotYSlider = value;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider>& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__rotZSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotZSlider;
}
constexpr ::UnityW<::HMUI::RangeValuesTextSlider> const& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__rotZSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotZSlider;
}
constexpr void BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_set__rotZSlider(::UnityW<::HMUI::RangeValuesTextSlider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotZSlider = value;
}
constexpr ::BeatSaber::GameSettings::ControllerProfile*& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__selectedControllerProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedControllerProfile;
}
constexpr ::BeatSaber::GameSettings::ControllerProfile* const& BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_get__selectedControllerProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedControllerProfile;
}
constexpr void BeatSaber::GameSettings::ControllersTransformSettings::__cordl_internal_set__selectedControllerProfile(::BeatSaber::GameSettings::ControllerProfile* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedControllerProfile = value;
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllersTransformSettings::get_selectedControllerProfile() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { "get_selectedControllerProfile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllersTransformSettings::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllersTransformSettings::Deactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { "Deactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllersTransformSettings::RefreshView(::BeatSaber::GameSettings::ControllerProfile* controllerProfile) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(),
                                                                                         { "RefreshView", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controllerProfile);
}
inline void BeatSaber::GameSettings::ControllersTransformSettings::SetInteractable(bool interactable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { "SetInteractable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void BeatSaber::GameSettings::ControllersTransformSettings::HandlePositionSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(),
                                                           { "HandlePositionSliderValueDidChange", {}, { ::i2c::type_of<::HMUI::RangeValuesTextSlider*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, value);
}
inline void BeatSaber::GameSettings::ControllersTransformSettings::HandleRotationSliderValueDidChange(::HMUI::RangeValuesTextSlider* slider, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(),
                                                           { "HandleRotationSliderValueDidChange", {}, { ::i2c::type_of<::HMUI::RangeValuesTextSlider*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slider, value);
}
inline void BeatSaber::GameSettings::ControllersTransformSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllersTransformSettings*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllersTransformSettings* BeatSaber::GameSettings::ControllersTransformSettings::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllersTransformSettings*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllersTransformSettings::ControllersTransformSettings() {}
