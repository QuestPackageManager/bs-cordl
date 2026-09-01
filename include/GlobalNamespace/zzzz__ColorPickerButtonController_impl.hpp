#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorPickerButtonController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorPickerButtonController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController.get_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Button> (::GlobalNamespace::ColorPickerButtonController::*)()>(
    &::GlobalNamespace::ColorPickerButtonController::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a2ed08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorPickerButtonController*>(), { "get_button", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorPickerButtonController::*)(::UnityEngine::Color)>(&::GlobalNamespace::ColorPickerButtonController::SetColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a2ed10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorPickerButtonController*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorPickerButtonController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorPickerButtonController::*)()>(&::GlobalNamespace::ColorPickerButtonController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a2ed34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorPickerButtonController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::ColorPickerButtonController::__cordl_internal_get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::ColorPickerButtonController::__cordl_internal_get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____button;
}
constexpr void GlobalNamespace::ColorPickerButtonController::__cordl_internal_set__button(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____button = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::ColorPickerButtonController::__cordl_internal_get__colorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::ColorPickerButtonController::__cordl_internal_get__colorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorImage;
}
constexpr void GlobalNamespace::ColorPickerButtonController::__cordl_internal_set__colorImage(::UnityW<::UnityEngine::UI::Image> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorImage = value;
}
inline ::UnityW<::UnityEngine::UI::Button> GlobalNamespace::ColorPickerButtonController::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorPickerButtonController*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Button>>(this, ___internal_method);
}
inline void GlobalNamespace::ColorPickerButtonController::SetColor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorPickerButtonController*>(), { "SetColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::ColorPickerButtonController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorPickerButtonController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorPickerButtonController* GlobalNamespace::ColorPickerButtonController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorPickerButtonController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorPickerButtonController::ColorPickerButtonController() {}
