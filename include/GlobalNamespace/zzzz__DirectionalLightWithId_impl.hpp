#pragma once
// IWYU pragma private; include "GlobalNamespace/DirectionalLightWithId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithId.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DirectionalLightWithId::*)(::UnityEngine::Color)>(&::GlobalNamespace::DirectionalLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x586f524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithId*>(), { ::i2c::class_of<::GlobalNamespace::DirectionalLightWithId*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DirectionalLightWithId::*)()>(&::GlobalNamespace::DirectionalLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x586f554;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::DirectionalLight>& GlobalNamespace::DirectionalLightWithId::__cordl_internal_get__light() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____light;
}
constexpr ::UnityW<::GlobalNamespace::DirectionalLight> const& GlobalNamespace::DirectionalLightWithId::__cordl_internal_get__light() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____light;
}
constexpr void GlobalNamespace::DirectionalLightWithId::__cordl_internal_set__light(::UnityW<::GlobalNamespace::DirectionalLight> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____light = value;
}
constexpr float_t& GlobalNamespace::DirectionalLightWithId::__cordl_internal_get__intensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr float_t const& GlobalNamespace::DirectionalLightWithId::__cordl_internal_get__intensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____intensity;
}
constexpr void GlobalNamespace::DirectionalLightWithId::__cordl_internal_set__intensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____intensity = value;
}
constexpr float_t& GlobalNamespace::DirectionalLightWithId::__cordl_internal_get__minIntensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minIntensity;
}
constexpr float_t const& GlobalNamespace::DirectionalLightWithId::__cordl_internal_get__minIntensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minIntensity;
}
constexpr void GlobalNamespace::DirectionalLightWithId::__cordl_internal_set__minIntensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minIntensity = value;
}
inline void GlobalNamespace::DirectionalLightWithId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::DirectionalLightWithId*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::DirectionalLightWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DirectionalLightWithId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DirectionalLightWithId* GlobalNamespace::DirectionalLightWithId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DirectionalLightWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DirectionalLightWithId::DirectionalLightWithId() {}
