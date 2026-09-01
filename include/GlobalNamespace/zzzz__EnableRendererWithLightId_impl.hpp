#pragma once
// IWYU pragma private; include "GlobalNamespace\EnableRendererWithLightId.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableRendererWithLightId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EnableRendererWithLightId.ColorWasSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableRendererWithLightId::*)(::UnityEngine::Color)>(&::GlobalNamespace::EnableRendererWithLightId::ColorWasSet)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x586cc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableRendererWithLightId*>(), { ::i2c::class_of<::GlobalNamespace::EnableRendererWithLightId*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnableRendererWithLightId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::EnableRendererWithLightId::*)()>(&::GlobalNamespace::EnableRendererWithLightId::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x586ccb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableRendererWithLightId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::EnableRendererWithLightId::__cordl_internal_get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::EnableRendererWithLightId::__cordl_internal_get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::EnableRendererWithLightId::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____renderer = value;
}
constexpr float_t& GlobalNamespace::EnableRendererWithLightId::__cordl_internal_get__hideAlphaRangeMin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr float_t const& GlobalNamespace::EnableRendererWithLightId::__cordl_internal_get__hideAlphaRangeMin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMin;
}
constexpr void GlobalNamespace::EnableRendererWithLightId::__cordl_internal_set__hideAlphaRangeMin(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAlphaRangeMin = value;
}
constexpr float_t& GlobalNamespace::EnableRendererWithLightId::__cordl_internal_get__hideAlphaRangeMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr float_t const& GlobalNamespace::EnableRendererWithLightId::__cordl_internal_get__hideAlphaRangeMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideAlphaRangeMax;
}
constexpr void GlobalNamespace::EnableRendererWithLightId::__cordl_internal_set__hideAlphaRangeMax(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideAlphaRangeMax = value;
}
inline void GlobalNamespace::EnableRendererWithLightId::ColorWasSet(::UnityEngine::Color color) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::EnableRendererWithLightId*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::EnableRendererWithLightId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::EnableRendererWithLightId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::EnableRendererWithLightId* GlobalNamespace::EnableRendererWithLightId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::EnableRendererWithLightId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnableRendererWithLightId::EnableRendererWithLightId() {}
