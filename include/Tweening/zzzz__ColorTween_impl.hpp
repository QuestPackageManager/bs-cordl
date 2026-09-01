#pragma once
// IWYU pragma private; include "Tweening\ColorTween.hpp"
#include "Tweening/zzzz__Tween_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Tweening/zzzz__ColorTween_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "Zenject/zzzz__StaticMemoryPool_7_def.hpp"
//  Writing Method size for method: ::Tweening::ColorTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::ColorTween::*)()>(&::Tweening::ColorTween::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6448e78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::ColorTween*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::ColorTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::ColorTween::*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t,
                                                                                        ::GlobalNamespace::EaseType, float_t)>(&::Tweening::ColorTween::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6448ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::ColorTween*>(), { ".ctor",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::ColorTween._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Tweening::ColorTween::*)(::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t,
                                                                                        ::UnityEngine::AnimationCurve*, float_t)>(&::Tweening::ColorTween::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6448fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::ColorTween*>(), { ".ctor",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                             ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>(), ::i2c::type_of<float_t>(),
                                                                                                             ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Tweening::ColorTween.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Tweening::ColorTween::*)(float_t)>(&::Tweening::ColorTween::GetValue)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6449074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Tweening::ColorTween*>(), { ::i2c::class_of<::Tweening::ColorTween*>(), 6 }));
    return ___internal_method;
  }
};
inline void Tweening::ColorTween::setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t,
                                                                                ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>* value) {
  ::cordl_internals::setStaticField<
      ::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>*,
      "Pool", ::Tweening::ColorTween*>(std::forward<::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t,
                                                                                  ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>*>(value));
}
inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>*
Tweening::ColorTween::getStaticF_Pool() {
  return ::cordl_internals::getStaticField<
      ::Zenject::StaticMemoryPool_7<::UnityEngine::Color, ::UnityEngine::Color, ::System::Action_1<::UnityEngine::Color>*, float_t, ::GlobalNamespace::EaseType, float_t, ::Tweening::ColorTween*>*,
      "Pool", ::Tweening::ColorTween*>();
}
inline void Tweening::ColorTween::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::ColorTween*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Tweening::ColorTween::_ctor(::UnityEngine::Color fromValue, ::UnityEngine::Color toValue, ::System::Action_1<::UnityEngine::Color>* onUpdate, float_t duration,
                                        ::GlobalNamespace::EaseType easeType, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::ColorTween*>(), { ".ctor",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                           ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>(), ::i2c::type_of<float_t>(),
                                                                                                           ::i2c::type_of<::GlobalNamespace::EaseType>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, easeType, delay);
}
inline void Tweening::ColorTween::_ctor(::UnityEngine::Color fromValue, ::UnityEngine::Color toValue, ::System::Action_1<::UnityEngine::Color>* onUpdate, float_t duration,
                                        ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Tweening::ColorTween*>(), { ".ctor",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                                           ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>(), ::i2c::type_of<float_t>(),
                                                                                                           ::i2c::type_of<::UnityEngine::AnimationCurve*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromValue, toValue, onUpdate, duration, animationCurve, delay);
}
inline ::UnityEngine::Color Tweening::ColorTween::GetValue(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Tweening::ColorTween*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method, t);
}
inline ::Tweening::ColorTween* Tweening::ColorTween::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::ColorTween*>());
}
inline ::Tweening::ColorTween* Tweening::ColorTween::New_ctor(::UnityEngine::Color fromValue, ::UnityEngine::Color toValue, ::System::Action_1<::UnityEngine::Color>* onUpdate, float_t duration,
                                                              ::GlobalNamespace::EaseType easeType, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::ColorTween*>(fromValue, toValue, onUpdate, duration, easeType, delay));
}
inline ::Tweening::ColorTween* Tweening::ColorTween::New_ctor(::UnityEngine::Color fromValue, ::UnityEngine::Color toValue, ::System::Action_1<::UnityEngine::Color>* onUpdate, float_t duration,
                                                              ::UnityEngine::AnimationCurve* animationCurve, float_t delay) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Tweening::ColorTween*>(fromValue, toValue, onUpdate, duration, animationCurve, delay));
}
// Ctor Parameters []
constexpr ::Tweening::ColorTween::ColorTween() {}
