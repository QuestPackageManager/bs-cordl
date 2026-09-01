#pragma once
// IWYU pragma private; include "GlobalNamespace\RectangleFakeGlowLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RectangleFakeGlowLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__RectangleFakeGlow_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RectangleFakeGlowLightWithId.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::RectangleFakeGlowLightWithId::*)()>(&::GlobalNamespace::RectangleFakeGlowLightWithId::get_color)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59a5f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RectangleFakeGlowLightWithId*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RectangleFakeGlowLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RectangleFakeGlowLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::RectangleFakeGlowLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59a5f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::RectangleFakeGlowLightWithId*>(), { ::i2c::class_of<::GlobalNamespace::RectangleFakeGlowLightWithId*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RectangleFakeGlowLightWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RectangleFakeGlowLightWithId::*)()>(&::GlobalNamespace::RectangleFakeGlowLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59a5f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RectangleFakeGlowLightWithId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAlpha = value;
}
constexpr float_t& GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_get__alphaMul() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaMul;
}
constexpr float_t const& GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_get__alphaMul() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaMul;
}
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_set__alphaMul(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaMul = value;
}
constexpr ::UnityW<::GlobalNamespace::RectangleFakeGlow>& GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_get__rectangleFakeGlow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectangleFakeGlow;
}
constexpr ::UnityW<::GlobalNamespace::RectangleFakeGlow> const& GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_get__rectangleFakeGlow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rectangleFakeGlow;
}
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__cordl_internal_set__rectangleFakeGlow(::UnityW<::GlobalNamespace::RectangleFakeGlow> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rectangleFakeGlow = value;
}
inline ::UnityEngine::Color GlobalNamespace::RectangleFakeGlowLightWithId::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RectangleFakeGlowLightWithId*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::RectangleFakeGlowLightWithId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::RectangleFakeGlowLightWithId*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::RectangleFakeGlowLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RectangleFakeGlowLightWithId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RectangleFakeGlowLightWithId* GlobalNamespace::RectangleFakeGlowLightWithId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RectangleFakeGlowLightWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RectangleFakeGlowLightWithId::RectangleFakeGlowLightWithId() {}
