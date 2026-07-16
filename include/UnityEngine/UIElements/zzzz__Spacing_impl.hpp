#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Spacing.hpp"
#include "UnityEngine/UIElements/zzzz__Spacing_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Spacing.get_horizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Spacing::*)()>(&::UnityEngine::UIElements::Spacing::get_horizontal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6dd6d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Spacing>(), { "get_horizontal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Spacing.get_vertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::Spacing::*)()>(&::UnityEngine::UIElements::Spacing::get_vertical)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6dd6d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Spacing>(), { "get_vertical", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Spacing._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Spacing::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::UIElements::Spacing::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6dd6d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Spacing>(),
                                                             { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Spacing.op_Subtraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::UnityEngine::UIElements::Spacing)>(&::UnityEngine::UIElements::Spacing::op_Subtraction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6dd6d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Spacing>(),
                                                             { "op_Subtraction", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::Spacing>() } })));
    return ___internal_method;
  }
};
inline float_t UnityEngine::UIElements::Spacing::get_horizontal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Spacing>(), { "get_horizontal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::Spacing::get_vertical() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Spacing>(), { "get_vertical", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Spacing::_ctor(float_t left, float_t top, float_t right, float_t bottom) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Spacing>(),
                                                           { ".ctor", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, left, top, right, bottom);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::Spacing::op_Subtraction(::UnityEngine::Rect r, ::UnityEngine::UIElements::Spacing a) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Spacing>(),
                                                           { "op_Subtraction", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::UIElements::Spacing>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, r, a);
}
// Ctor Parameters [CppParam { name: "left", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "top", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "right", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bottom", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Spacing::Spacing(float_t left, float_t top, float_t right, float_t bottom) noexcept {
  this->left = left;
  this->top = top;
  this->right = right;
  this->bottom = bottom;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Spacing::Spacing() {}
