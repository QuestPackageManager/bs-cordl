#pragma once
// IWYU pragma private; include "Tweening/QuaternionTween.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Tweening/zzzz__QuaternionTween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::QuaternionTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::QuaternionTween::*)()>(&::Tweening::QuaternionTween::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x64432d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::QuaternionTween*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::QuaternionTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::QuaternionTween::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*,
                                                                                             float_t, ::GlobalNamespace::EaseType, float_t)>(&::Tweening::QuaternionTween::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6443330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tweening::QuaternionTween*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Quaternion>*>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::QuaternionTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::QuaternionTween::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*,
                                                                                             float_t, ::UnityEngine::AnimationCurve*, float_t)>(&::Tweening::QuaternionTween::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x64433fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tweening::QuaternionTween*>(),
                                         { ".ctor",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Quaternion>*>(),
                                             ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::QuaternionTween.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Tweening::QuaternionTween::*)(float_t)>(&::Tweening::QuaternionTween::GetValue)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64434cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::QuaternionTween*>(), { ::i2c::class_of<::Tweening::QuaternionTween*>(), 6 }));
    return ___internal_method;
  }
};
inline void Tweening::QuaternionTween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t,
                                                                                     ::GlobalNamespace::EaseType, float_t, ::Tweening::QuaternionTween*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t,
                                                                  ::GlobalNamespace::EaseType, float_t, ::Tweening::QuaternionTween*>*,
                                    "Pool", ::Tweening::QuaternionTween*>(
      std::forward<::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                                 ::Tweening::QuaternionTween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t, ::GlobalNamespace::EaseType, float_t,
                                     ::Tweening::QuaternionTween*>*
Tweening::QuaternionTween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_7<::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Action_1<::UnityEngine::Quaternion>*, float_t,
                                                                         ::GlobalNamespace::EaseType, float_t, ::Tweening::QuaternionTween*>*,
                                           "Pool", ::Tweening::QuaternionTween*>();
}
inline void Tweening::QuaternionTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::QuaternionTween*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tweening::QuaternionTween::_ctor(::UnityEngine::Quaternion fromValue, ::UnityEngine::Quaternion toValue, ::System::Action_1<::UnityEngine::Quaternion>* onUpdate, float_t duration,
                                             ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tweening::QuaternionTween*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Quaternion>*>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline void Tweening::QuaternionTween::_ctor(::UnityEngine::Quaternion fromValue, ::UnityEngine::Quaternion toValue, ::System::Action_1<::UnityEngine::Quaternion>* onUpdate, float_t duration,
                                             ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tweening::QuaternionTween*>(),
                                       { ".ctor",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::System::Action_1<::UnityEngine::Quaternion>*>(),
                                           ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, animationCurve, delay);
}
inline ::UnityEngine::Quaternion Tweening::QuaternionTween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::QuaternionTween*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, t);
}
inline ::Tweening::QuaternionTween* Tweening::QuaternionTween::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::QuaternionTween*>());
}
inline ::Tweening::QuaternionTween* Tweening::QuaternionTween::New_ctor(::UnityEngine::Quaternion fromValue, ::UnityEngine::Quaternion toValue, ::System::Action_1<::UnityEngine::Quaternion>* onUpdate,
                                                                        float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::QuaternionTween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
inline ::Tweening::QuaternionTween* Tweening::QuaternionTween::New_ctor(::UnityEngine::Quaternion fromValue, ::UnityEngine::Quaternion toValue, ::System::Action_1<::UnityEngine::Quaternion>* onUpdate,
                                                                        float_t duration, ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::QuaternionTween*>(fromValue, toValue, onUpdate, duration, animationCurve, delay));
}
// Ctor Parameters []
constexpr ::Tweening::QuaternionTween::QuaternionTween() {}
