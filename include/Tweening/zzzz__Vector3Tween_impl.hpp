#pragma once
// IWYU pragma private; include "Tweening\Vector3Tween.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Tweening/zzzz__Vector3Tween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::Vector3Tween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::Vector3Tween::*)()>(&::Tweening::Vector3Tween::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x644877c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector3Tween*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector3Tween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::Vector3Tween::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t,
                                                                                          ::GlobalNamespace::EaseType, float_t)>(&::Tweening::Vector3Tween::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x64487dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector3Tween*>(), { ".ctor",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                               ::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector3Tween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::Vector3Tween::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t,
                                                                                          ::UnityEngine::AnimationCurve*, float_t)>(&::Tweening::Vector3Tween::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6448890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector3Tween*>(), { ".ctor",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                               ::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(),
                                                                                                               ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::Vector3Tween.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Tweening::Vector3Tween::*)(float_t)>(&::Tweening::Vector3Tween::GetValue)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6448948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::Vector3Tween*>(), { ::i2c::class_of<::Tweening::Vector3Tween*>(), 6 }));
    return ___internal_method;
  }
};
inline void Tweening::Vector3Tween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t,
                                                                                  ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector3Tween*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType,
                                                                  float_t, ::Tweening::Vector3Tween*>*,
                                    "Pool", ::Tweening::Vector3Tween*>(
      std::forward<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                                 ::Tweening::Vector3Tween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                     ::Tweening::Vector3Tween*>*
Tweening::Vector3Tween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action_1<::UnityEngine::Vector3>*, float_t,
                                                                         ::GlobalNamespace::EaseType, float_t, ::Tweening::Vector3Tween*>*,
                                           "Pool", ::Tweening::Vector3Tween*>();
}
inline void Tweening::Vector3Tween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector3Tween*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tweening::Vector3Tween::_ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate, float_t duration,
                                          ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector3Tween*>(), { ".ctor",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline void Tweening::Vector3Tween::_ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate, float_t duration,
                                          ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::Vector3Tween*>(), { ".ctor",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, animationCurve, delay);
}
inline ::UnityEngine::Vector3 Tweening::Vector3Tween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::Vector3Tween*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, t);
}
inline ::Tweening::Vector3Tween* Tweening::Vector3Tween::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Vector3Tween*>());
}
inline ::Tweening::Vector3Tween* Tweening::Vector3Tween::New_ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate,
                                                                  float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Vector3Tween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
inline ::Tweening::Vector3Tween* Tweening::Vector3Tween::New_ctor(::UnityEngine::Vector3 fromValue, ::UnityEngine::Vector3 toValue, ::System::Action_1<::UnityEngine::Vector3>* onUpdate,
                                                                  float_t duration, ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::Vector3Tween*>(fromValue, toValue, onUpdate, duration, animationCurve, delay));
}
// Ctor Parameters []
constexpr ::Tweening::Vector3Tween::Vector3Tween() {}
