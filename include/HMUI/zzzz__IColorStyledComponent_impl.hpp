#pragma once
// IWYU pragma private; include "HMUI/IColorStyledComponent.hpp"
#include "HMUI/zzzz__IColorStyledComponent_def.hpp"
#include "GlobalNamespace/zzzz__IReadOnlyColorStyle_def.hpp"
//  Writing Method size for method: ::HMUI::IColorStyledComponent.get_colorStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IReadOnlyColorStyle* (::HMUI::IColorStyledComponent::*)()>(&::HMUI::IColorStyledComponent::get_colorStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::IColorStyledComponent*>(), { ::i2c::class_of<::HMUI::IColorStyledComponent*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IColorStyledComponent.UpdateColorStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IColorStyledComponent::*)(::GlobalNamespace::IReadOnlyColorStyle*)>(&::HMUI::IColorStyledComponent::UpdateColorStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::IColorStyledComponent*>(), { ::i2c::class_of<::HMUI::IColorStyledComponent*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::IColorStyledComponent.LerpColorStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IColorStyledComponent::*)(::GlobalNamespace::IReadOnlyColorStyle*, ::GlobalNamespace::IReadOnlyColorStyle*, float_t)>(
    &::HMUI::IColorStyledComponent::LerpColorStyle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::IColorStyledComponent*>(), { ::i2c::class_of<::HMUI::IColorStyledComponent*>(), 2 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadOnlyColorStyle* HMUI::IColorStyledComponent::get_colorStyle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::IColorStyledComponent*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadOnlyColorStyle*>(this, ___internal_method);
}
inline void HMUI::IColorStyledComponent::UpdateColorStyle(::GlobalNamespace::IReadOnlyColorStyle* colorStyle) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::IColorStyledComponent*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorStyle);
}
inline void HMUI::IColorStyledComponent::LerpColorStyle(::GlobalNamespace::IReadOnlyColorStyle* from, ::GlobalNamespace::IReadOnlyColorStyle* to, float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::IColorStyledComponent*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to, t);
}
