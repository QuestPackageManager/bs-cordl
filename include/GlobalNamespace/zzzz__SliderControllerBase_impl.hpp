#pragma once
// IWYU pragma private; include "GlobalNamespace\SliderControllerBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__CutoutAnimateEffect_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderControllerBase.AnimateCutout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderControllerBase::*)(float_t, float_t, float_t)>(&::GlobalNamespace::SliderControllerBase::AnimateCutout)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59794fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderControllerBase*>(),
                                                             { "AnimateCutout", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderControllerBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SliderControllerBase::*)()>(&::GlobalNamespace::SliderControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5979ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderControllerBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& GlobalNamespace::SliderControllerBase::__cordl_internal_get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& GlobalNamespace::SliderControllerBase::__cordl_internal_get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::SliderControllerBase::__cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____materialPropertyBlockController = value;
}
constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect>& GlobalNamespace::SliderControllerBase::__cordl_internal_get__cutoutAnimateEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutoutAnimateEffect;
}
constexpr ::UnityW<::GlobalNamespace::CutoutAnimateEffect> const& GlobalNamespace::SliderControllerBase::__cordl_internal_get__cutoutAnimateEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutoutAnimateEffect;
}
constexpr void GlobalNamespace::SliderControllerBase::__cordl_internal_set__cutoutAnimateEffect(::UnityW<::GlobalNamespace::CutoutAnimateEffect> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutoutAnimateEffect = value;
}
constexpr bool& GlobalNamespace::SliderControllerBase::__cordl_internal_get__dissolving() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dissolving;
}
constexpr bool const& GlobalNamespace::SliderControllerBase::__cordl_internal_get__dissolving() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dissolving;
}
constexpr void GlobalNamespace::SliderControllerBase::__cordl_internal_set__dissolving(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dissolving = value;
}
inline void GlobalNamespace::SliderControllerBase::AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderControllerBase*>(), { "AnimateCutout", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cutoutStart, cutoutEnd, duration);
}
inline void GlobalNamespace::SliderControllerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SliderControllerBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderControllerBase* GlobalNamespace::SliderControllerBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SliderControllerBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderControllerBase::SliderControllerBase() {}
