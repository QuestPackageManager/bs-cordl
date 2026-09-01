#pragma once
// IWYU pragma private; include "GlobalNamespace\InstancedMaterialLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__InstancedMaterialLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__InstancedMaterialLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockColorSetter_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::InstancedMaterialLightWithId_MultiplyColorByAlphaType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::InstancedMaterialLightWithId_MultiplyColorByAlphaType() {}
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::BeforeApplyingMinAlpha{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType::AfterApplyingMinAlpha{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.get_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(&::GlobalNamespace::InstancedMaterialLightWithId::get_intensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x586cea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { "get_intensity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.set_intensity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)(float_t)>(&::GlobalNamespace::InstancedMaterialLightWithId::set_intensity)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586cea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { "set_intensity", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x586cec4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { ::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId.AddNecessaryComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(&::GlobalNamespace::InstancedMaterialLightWithId::AddNecessaryComponents)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x586cfd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { "AddNecessaryComponents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InstancedMaterialLightWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InstancedMaterialLightWithId::*)()>(&::GlobalNamespace::InstancedMaterialLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x586d0e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter>& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__materialPropertyBlockColorSetter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__materialPropertyBlockColorSetter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockColorSetter;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__materialPropertyBlockColorSetter(::UnityW<::GlobalNamespace::MaterialPropertyBlockColorSetter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockColorSetter = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__setColorOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__setColorOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____setColorOnly;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__setColorOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____setColorOnly = value;
}
constexpr float_t& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__minAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr float_t const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__minAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minAlpha;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__minAlpha(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minAlpha = value;
}
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__multiplyColorByAlpha() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr ::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__multiplyColorByAlpha() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplyColorByAlpha;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__multiplyColorByAlpha(::GlobalNamespace::InstancedMaterialLightWithId_MultiplyColorByAlphaType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplyColorByAlpha = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__saturateIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saturateIntensity;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__saturateIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saturateIntensity;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__saturateIntensity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saturateIntensity = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__hdr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hdr;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__hdr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hdr;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__hdr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hdr = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__originalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__originalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColor;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__originalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr bool& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__startColorWasSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColorWasSet;
}
constexpr bool const& GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_get__startColorWasSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startColorWasSet;
}
constexpr void GlobalNamespace::InstancedMaterialLightWithId::__cordl_internal_set__startColorWasSet(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startColorWasSet = value;
}
inline float_t GlobalNamespace::InstancedMaterialLightWithId::get_intensity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { "get_intensity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::set_intensity(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { "set_intensity", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::ColorWasSet(::UnityEngine::Color newColor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newColor);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::AddNecessaryComponents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { "AddNecessaryComponents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InstancedMaterialLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InstancedMaterialLightWithId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InstancedMaterialLightWithId* GlobalNamespace::InstancedMaterialLightWithId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InstancedMaterialLightWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InstancedMaterialLightWithId::InstancedMaterialLightWithId() {}
