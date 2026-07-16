#pragma once
// IWYU pragma private; include "GlobalNamespace/TransitionTimingSO.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TransitionTimingSO_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO.get_easeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EaseType (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::get_easeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransitionTimingSO*>(), { "get_easeType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO.get_easeDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::get_easeDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64412fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransitionTimingSO*>(), { "get_easeDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO.get_animationCurve
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::get_animationCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6441304;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransitionTimingSO*>(), { "get_animationCurve", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransitionTimingSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransitionTimingSO::*)()>(&::GlobalNamespace::TransitionTimingSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644130c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransitionTimingSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__easeType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__easeType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeType;
}
constexpr void GlobalNamespace::TransitionTimingSO::__cordl_internal_set__easeType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeType = value;
}
constexpr float_t& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__easeDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeDuration;
}
constexpr float_t const& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__easeDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____easeDuration;
}
constexpr void GlobalNamespace::TransitionTimingSO::__cordl_internal_set__easeDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____easeDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__animationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::TransitionTimingSO::__cordl_internal_get__animationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationCurve;
}
constexpr void GlobalNamespace::TransitionTimingSO::__cordl_internal_set__animationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationCurve = value;
}
inline ::GlobalNamespace::EaseType GlobalNamespace::TransitionTimingSO::get_easeType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransitionTimingSO*>(), { "get_easeType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EaseType>(this, ___internal_method);
}
inline float_t GlobalNamespace::TransitionTimingSO::get_easeDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransitionTimingSO*>(), { "get_easeDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::AnimationCurve* GlobalNamespace::TransitionTimingSO::get_animationCurve() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransitionTimingSO*>(), { "get_animationCurve", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void GlobalNamespace::TransitionTimingSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TransitionTimingSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransitionTimingSO* GlobalNamespace::TransitionTimingSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransitionTimingSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransitionTimingSO::TransitionTimingSO() {}
