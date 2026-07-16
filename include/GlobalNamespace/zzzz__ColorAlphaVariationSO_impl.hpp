#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorAlphaVariationSO.hpp"
#include "GlobalNamespace/zzzz__ColorSO_impl.hpp"
#include "GlobalNamespace/zzzz__ColorAlphaVariationSO_def.hpp"
#include "GlobalNamespace/zzzz__AlphaSO_def.hpp"
#include "GlobalNamespace/zzzz__NoAlphaColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorAlphaVariationSO.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::ColorAlphaVariationSO::*)()>(&::GlobalNamespace::ColorAlphaVariationSO::get_color)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x36f4900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), { ::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorAlphaVariationSO.get_baseColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::NoAlphaColorSO> (::GlobalNamespace::ColorAlphaVariationSO::*)()>(
    &::GlobalNamespace::ColorAlphaVariationSO::get_baseColor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f4934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), { "get_baseColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorAlphaVariationSO.get_alpha
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AlphaSO> (::GlobalNamespace::ColorAlphaVariationSO::*)()>(&::GlobalNamespace::ColorAlphaVariationSO::get_alpha)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f493c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), { "get_alpha", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ColorAlphaVariationSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorAlphaVariationSO::*)()>(&::GlobalNamespace::ColorAlphaVariationSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x36f4944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NoAlphaColorSO>& GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_get__baseColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColor;
}
constexpr ::UnityW<::GlobalNamespace::NoAlphaColorSO> const& GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_get__baseColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseColor;
}
constexpr void GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_set__baseColor(::UnityW<::GlobalNamespace::NoAlphaColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseColor = value;
}
constexpr ::UnityW<::GlobalNamespace::AlphaSO>& GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_get__alpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr ::UnityW<::GlobalNamespace::AlphaSO> const& GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_get__alpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alpha;
}
constexpr void GlobalNamespace::ColorAlphaVariationSO::__cordl_internal_set__alpha(::UnityW<::GlobalNamespace::AlphaSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alpha = value;
}
inline ::UnityEngine::Color GlobalNamespace::ColorAlphaVariationSO::get_color() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::NoAlphaColorSO> GlobalNamespace::ColorAlphaVariationSO::get_baseColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), { "get_baseColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::NoAlphaColorSO>>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AlphaSO> GlobalNamespace::ColorAlphaVariationSO::get_alpha() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), { "get_alpha", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AlphaSO>>(this, ___internal_method);
}
inline void GlobalNamespace::ColorAlphaVariationSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorAlphaVariationSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ColorAlphaVariationSO* GlobalNamespace::ColorAlphaVariationSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorAlphaVariationSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorAlphaVariationSO::ColorAlphaVariationSO() {}
