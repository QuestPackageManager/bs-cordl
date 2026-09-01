#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSchemeColorToggleController.hpp"
#include "UnityEngine/UI/zzzz__Graphic_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeColorToggleController_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.get_toggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Toggle> (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(
    &::GlobalNamespace::ColorSchemeColorToggleController::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591ff6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeColorToggleController*>(), { "get_toggle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(
    &::GlobalNamespace::ColorSchemeColorToggleController::get_color)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x591f6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeColorToggleController*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeColorToggleController::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::ColorSchemeColorToggleController::set_color)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x591f6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeColorToggleController*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeColorToggleController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeColorToggleController::*)()>(&::GlobalNamespace::ColorSchemeColorToggleController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591ff74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeColorToggleController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>>& GlobalNamespace::ColorSchemeColorToggleController::__cordl_internal_get__colorGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorGraphics;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Graphic>> const& GlobalNamespace::ColorSchemeColorToggleController::__cordl_internal_get__colorGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorGraphics;
}
constexpr void GlobalNamespace::ColorSchemeColorToggleController::__cordl_internal_set__colorGraphics(::ArrayW<::UnityW<::UnityEngine::UI::Graphic>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorGraphics = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::ColorSchemeColorToggleController::__cordl_internal_get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::ColorSchemeColorToggleController::__cordl_internal_get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr void GlobalNamespace::ColorSchemeColorToggleController::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggle = value;
}
inline ::UnityW<::UnityEngine::UI::Toggle> GlobalNamespace::ColorSchemeColorToggleController::get_toggle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeColorToggleController*>(), { "get_toggle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Toggle>>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::ColorSchemeColorToggleController::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeColorToggleController*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::ColorSchemeColorToggleController::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeColorToggleController*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::ColorSchemeColorToggleController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeColorToggleController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorSchemeColorToggleController* GlobalNamespace::ColorSchemeColorToggleController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSchemeColorToggleController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeColorToggleController::ColorSchemeColorToggleController() {}
