#pragma once
// IWYU pragma private; include "Tweening\FloatTween.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::FloatTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::FloatTween::*)()>(&::Tweening::FloatTween::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x644816c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::FloatTween*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::FloatTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::FloatTween::*)(float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t)>(
    &::Tweening::FloatTween::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64481c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tweening::FloatTween*>(), { ".ctor",
                                                                                       {},
                                                                                       { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action_1<float_t>*>(),
                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::FloatTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::FloatTween::*)(float_t, float_t, ::System::Action_1<float_t>*, float_t, ::UnityEngine::AnimationCurve*, float_t)>(
    &::Tweening::FloatTween::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6448250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Tweening::FloatTween*>(), { ".ctor",
                                                                                       {},
                                                                                       { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action_1<float_t>*>(),
                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::FloatTween.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Tweening::FloatTween::*)(float_t)>(&::Tweening::FloatTween::GetValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64482e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::FloatTween*>(), { ::i2c::class_of<::Tweening::FloatTween*>(), 6 }));
    return ___internal_method;
  }
};
inline void
Tweening::FloatTween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* value) {
  ::cordl_internals::setStaticField<::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>*, "Pool",
                                    ::Tweening::FloatTween*>(
      std::forward<::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>* Tweening::FloatTween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<::Zenject::StaticMemoryPool_7<float_t, float_t, ::System::Action_1<float_t>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::FloatTween*>*,
                                           "Pool", ::Tweening::FloatTween*>();
}
inline void Tweening::FloatTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::FloatTween*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tweening::FloatTween::_ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tweening::FloatTween*>(), { ".ctor",
                                                                                     {},
                                                                                     { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action_1<float_t>*>(),
                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline void Tweening::FloatTween::_ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Tweening::FloatTween*>(), { ".ctor",
                                                                                     {},
                                                                                     { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Action_1<float_t>*>(),
                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, animationCurve, delay);
}
inline float_t Tweening::FloatTween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::FloatTween*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline ::Tweening::FloatTween* Tweening::FloatTween::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::FloatTween*>());
}
inline ::Tweening::FloatTween* Tweening::FloatTween::New_ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration, ::GlobalNamespace::EaseType easeType,
                                                              float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::FloatTween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
inline ::Tweening::FloatTween* Tweening::FloatTween::New_ctor(float_t fromValue, float_t toValue, ::System::Action_1<float_t>* onUpdate, float_t duration,
                                                              ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::FloatTween*>(fromValue, toValue, onUpdate, duration, animationCurve, delay));
}
// Ctor Parameters []
constexpr ::Tweening::FloatTween::FloatTween() {}
