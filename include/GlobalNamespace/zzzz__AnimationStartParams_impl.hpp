#pragma once
// IWYU pragma private; include "GlobalNamespace\AnimationStartParams.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__AnimationStartParams_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AnimationStartParams.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationStartParams::*)()>(&::GlobalNamespace::AnimationStartParams::Start)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x33218dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnimationStartParams*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AnimationStartParams._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AnimationStartParams::*)()>(&::GlobalNamespace::AnimationStartParams::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3321b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnimationStartParams*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AnimationStartParams::__cordl_internal_get__timeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOffset;
}
constexpr float_t const& GlobalNamespace::AnimationStartParams::__cordl_internal_get__timeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOffset;
}
constexpr void GlobalNamespace::AnimationStartParams::__cordl_internal_set__timeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOffset = value;
}
constexpr float_t& GlobalNamespace::AnimationStartParams::__cordl_internal_get__speed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr float_t const& GlobalNamespace::AnimationStartParams::__cordl_internal_get__speed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____speed;
}
constexpr void GlobalNamespace::AnimationStartParams::__cordl_internal_set__speed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____speed = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::AnimationStartParams::__cordl_internal_get__animation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::AnimationStartParams::__cordl_internal_get__animation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr void GlobalNamespace::AnimationStartParams::__cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animation = value;
}
inline void GlobalNamespace::AnimationStartParams::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnimationStartParams*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AnimationStartParams::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AnimationStartParams*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AnimationStartParams* GlobalNamespace::AnimationStartParams::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AnimationStartParams*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AnimationStartParams::AnimationStartParams() {}
