#pragma once
// IWYU pragma private; include "GlobalNamespace/TubeLightBehaviour.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_impl.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__TubeLightBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::TubeLightBehaviour_ParameterType::TubeLightBehaviour_ParameterType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightBehaviour_ParameterType::TubeLightBehaviour_ParameterType() {}
constexpr ::GlobalNamespace::TubeLightBehaviour_ParameterType GlobalNamespace::TubeLightBehaviour_ParameterType::Values{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::TubeLightBehaviour_ParameterType GlobalNamespace::TubeLightBehaviour_ParameterType::References{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.ProcessFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(
    &::GlobalNamespace::TubeLightBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5908f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeLightBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::TubeLightBehaviour*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour.OnPlayableDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5909360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeLightBehaviour*>(), { ::i2c::class_of<::GlobalNamespace::TubeLightBehaviour*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TubeLightBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TubeLightBehaviour::*)()>(&::GlobalNamespace::TubeLightBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5909438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeLightBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__noPredefinedStartValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noPredefinedStartValue;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__noPredefinedStartValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noPredefinedStartValue;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__noPredefinedStartValue(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noPredefinedStartValue = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_startColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_startColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set_startColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startColor = value;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO>& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_endColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endColor;
}
constexpr ::UnityW<::GlobalNamespace::ColorSO> const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_endColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set_endColor(::UnityW<::GlobalNamespace::ColorSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___endColor = value;
}
constexpr float_t& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_blend() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blend;
}
constexpr float_t const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_blend() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blend;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set_blend(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___blend = value;
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__originalColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__originalColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__originalColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalColor = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__tubeLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__tubeLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tubeLights;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__tubeLights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tubeLights = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>>& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__directionalLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>> const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__directionalLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____directionalLights;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__directionalLights(::ArrayW<::UnityW<::GlobalNamespace::DirectionalLight>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____directionalLights = value;
}
constexpr bool& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_started() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr bool const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get_started() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___started;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set_started(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___started = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__firstFrameColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstFrameColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::TubeLightBehaviour::__cordl_internal_get__firstFrameColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____firstFrameColor;
}
constexpr void GlobalNamespace::TubeLightBehaviour::__cordl_internal_set__firstFrameColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____firstFrameColor = value;
}
inline void GlobalNamespace::TubeLightBehaviour::ProcessFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info, ::System::Object* playerData) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TubeLightBehaviour*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable, info, playerData);
}
inline void GlobalNamespace::TubeLightBehaviour::OnPlayableDestroy(::UnityEngine::Playables::Playable playable) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TubeLightBehaviour*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playable);
}
inline void GlobalNamespace::TubeLightBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TubeLightBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TubeLightBehaviour* GlobalNamespace::TubeLightBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TubeLightBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TubeLightBehaviour::TubeLightBehaviour() {}
