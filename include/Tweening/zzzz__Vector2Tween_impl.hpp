#pragma once
// IWYU pragma private; include "Tweening/Vector2Tween.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Tweening/zzzz__Vector2Tween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::Vector2Tween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::Vector2Tween::*)()>(&::Tweening::Vector2Tween::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6442c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector2Tween*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector2Tween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::Vector2Tween::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t,
                                                                                          ::GlobalNamespace::EaseType, float_t)>(&::Tweening::Vector2Tween::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6442ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector2Tween*>(), { ".ctor",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                               ::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector2Tween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::Vector2Tween::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t,
                                                                                          ::UnityEngine::AnimationCurve*, float_t)>(&::Tweening::Vector2Tween::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6442d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector2Tween*>(), { ".ctor",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                               ::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector2Tween.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Tweening::Vector2Tween::*)(float_t)>(&::Tweening::Vector2Tween::GetValue)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6442de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::Vector2Tween*>(), { ::i2c::class_of<::Tweening::Vector2Tween*>(), 6 }));
    return ___internal_method;
  }
};
inline void Tweening::Vector2Tween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t,
                                                                                  ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector2Tween*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType,
                                                                  float_t, ::Tweening::Vector2Tween*>*,
                                    "Pool", ::Tweening::Vector2Tween*>(
      std::forward<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                                 ::Tweening::Vector2Tween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                     ::Tweening::Vector2Tween*>*
Tweening::Vector2Tween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Action_1<::UnityEngine::Vector2>*, float_t,
                                                                         ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector2Tween*>*,
                                           "Pool", ::Tweening::Vector2Tween*>();
}
inline void Tweening::Vector2Tween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector2Tween*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tweening::Vector2Tween::_ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2>* onUpdate, float_t duration,
                                          ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector2Tween*>(), { ".ctor",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline void Tweening::Vector2Tween::_ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2>* onUpdate, float_t duration,
                                          ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector2Tween*>(), { ".ctor",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::Vector2>*>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, animationCurve, delay);
}
inline ::UnityEngine::Vector2 Tweening::Vector2Tween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::Vector2Tween*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, t);
}
inline ::Tweening::Vector2Tween* Tweening::Vector2Tween::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Vector2Tween*>());
}
inline ::Tweening::Vector2Tween* Tweening::Vector2Tween::New_ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2>* onUpdate,
                                                                  float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Vector2Tween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
inline ::Tweening::Vector2Tween* Tweening::Vector2Tween::New_ctor(::UnityEngine::Vector2 fromValue, ::UnityEngine::Vector2 toValue, ::System::Action_1<::UnityEngine::Vector2>* onUpdate,
                                                                  float_t duration, ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Vector2Tween*>(fromValue, toValue, onUpdate, duration, animationCurve, delay));
}
// Ctor Parameters []
constexpr ::Tweening::Vector2Tween::Vector2Tween() {}
