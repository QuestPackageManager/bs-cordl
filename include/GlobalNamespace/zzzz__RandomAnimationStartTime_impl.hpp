#pragma once
// IWYU pragma private; include "GlobalNamespace\RandomAnimationStartTime.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RandomAnimationStartTime_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationStartTime.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomAnimationStartTime::*)()>(&::GlobalNamespace::RandomAnimationStartTime::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58578f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomAnimationStartTime*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationStartTime.PlayAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomAnimationStartTime::*)()>(&::GlobalNamespace::RandomAnimationStartTime::PlayAnimation)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x58578f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomAnimationStartTime*>(), { "PlayAnimation", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RandomAnimationStartTime._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RandomAnimationStartTime::*)()>(&::GlobalNamespace::RandomAnimationStartTime::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5857bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomAnimationStartTime*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::RandomAnimationStartTime::__cordl_internal_get__animation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::RandomAnimationStartTime::__cordl_internal_get__animation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animation;
}
constexpr void GlobalNamespace::RandomAnimationStartTime::__cordl_internal_set__animation(::UnityW<::UnityEngine::Animation> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animation = value;
}
constexpr ::GlobalNamespace::IRandom*& GlobalNamespace::RandomAnimationStartTime::__cordl_internal_get__random() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr ::GlobalNamespace::IRandom* const& GlobalNamespace::RandomAnimationStartTime::__cordl_internal_get__random() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____random;
}
constexpr void GlobalNamespace::RandomAnimationStartTime::__cordl_internal_set__random(::GlobalNamespace::IRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____random = value;
}
inline void GlobalNamespace::RandomAnimationStartTime::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomAnimationStartTime*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomAnimationStartTime::PlayAnimation() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomAnimationStartTime*>(), { "PlayAnimation", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RandomAnimationStartTime::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RandomAnimationStartTime*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RandomAnimationStartTime* GlobalNamespace::RandomAnimationStartTime::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RandomAnimationStartTime*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RandomAnimationStartTime::RandomAnimationStartTime() {}
