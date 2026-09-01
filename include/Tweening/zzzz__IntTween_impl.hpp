#pragma once
// IWYU pragma private; include "Tweening\IntTween.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "Tweening/zzzz__IntTween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Tweening/zzzz__IntTween_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Tweening::IntTween_RoundingType::IntTween_RoundingType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Tweening::IntTween_RoundingType::IntTween_RoundingType() {}
constexpr ::Tweening::IntTween_RoundingType Tweening::IntTween_RoundingType::Floor{ static_cast<int32_t>(0x0) };
constexpr ::Tweening::IntTween_RoundingType Tweening::IntTween_RoundingType::Round{ static_cast<int32_t>(0x1) };
constexpr ::Tweening::IntTween_RoundingType Tweening::IntTween_RoundingType::Ceil{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::Tweening::IntTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::IntTween::*)()>(&::Tweening::IntTween::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6447d24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::IntTween*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::IntTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::IntTween::*)(int32_t, int32_t, ::System::Action_1<int32_t>*, float_t, ::GlobalNamespace::EaseType,
                                                                                      ::Tweening::IntTween_RoundingType, float_t)>(&::Tweening::IntTween::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6447d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::IntTween*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<float_t>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<::Tweening::IntTween_RoundingType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::IntTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::IntTween::*)(int32_t, int32_t, ::System::Action_1<int32_t>*, float_t, ::UnityEngine::AnimationCurve*,
                                                                                      ::Tweening::IntTween_RoundingType, float_t)>(&::Tweening::IntTween::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6447e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::IntTween*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<::Tweening::IntTween_RoundingType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::IntTween.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Tweening::IntTween::*)(float_t)>(&::Tweening::IntTween::GetValue)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6447eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::IntTween*>(), { ::i2c::class_of<::Tweening::IntTween*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::Tweening::IntTween_RoundingType& Tweening::IntTween::__cordl_internal_get__roundingType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roundingType;
}
constexpr ::Tweening::IntTween_RoundingType const& Tweening::IntTween::__cordl_internal_get__roundingType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____roundingType;
}
constexpr void Tweening::IntTween::__cordl_internal_set__roundingType(::Tweening::IntTween_RoundingType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____roundingType = value;
}
inline void Tweening::IntTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::IntTween*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tweening::IntTween::_ctor(int32_t fromValue, int32_t toValue, ::System::Action_1<int32_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                                      ::Tweening::IntTween_RoundingType roundingType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::IntTween*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<::Tweening::IntTween_RoundingType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, roundingType, delay);
}
inline void Tweening::IntTween::_ctor(int32_t fromValue, int32_t toValue, ::System::Action_1<int32_t>* onUpdate, float_t duration, ::UnityEngine::AnimationCurve* animationCurve,
                                      ::Tweening::IntTween_RoundingType roundingType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::IntTween*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<int32_t>*>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<::Tweening::IntTween_RoundingType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, animationCurve, roundingType, delay);
}
inline int32_t Tweening::IntTween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::IntTween*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, t);
}
inline ::Tweening::IntTween* Tweening::IntTween::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::IntTween*>());
}
inline ::Tweening::IntTween* Tweening::IntTween::New_ctor(int32_t fromValue, int32_t toValue, ::System::Action_1<int32_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                                                          ::Tweening::IntTween_RoundingType roundingType, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::IntTween*>(fromValue, toValue, onUpdate, duration, easeType, roundingType, delay));
}
inline ::Tweening::IntTween* Tweening::IntTween::New_ctor(int32_t fromValue, int32_t toValue, ::System::Action_1<int32_t>* onUpdate, float_t duration, ::UnityEngine::AnimationCurve* animationCurve,
                                                          ::Tweening::IntTween_RoundingType roundingType, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::IntTween*>(fromValue, toValue, onUpdate, duration, animationCurve, roundingType, delay));
}
// Ctor Parameters []
constexpr ::Tweening::IntTween::IntTween() {}
