#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerCenterTextAnimator.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerCenterTextAnimator_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&::GlobalNamespace::MultiplayerCenterTextAnimator::Awake)> {
  constexpr static std::size_t size = 0x5f4;
  constexpr static std::size_t addrs = 0x59d0784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&::GlobalNamespace::MultiplayerCenterTextAnimator::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59d0d78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator.AnimateTextColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(::UnityEngine::Color, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::MultiplayerCenterTextAnimator::AnimateTextColor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59d0e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(),
                                                { "AnimateTextColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator.AnimateFontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(float_t, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::MultiplayerCenterTextAnimator::AnimateFontSize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x59d0e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(),
                                                             { "AnimateFontSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator.AnimatePositionOffsetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(::UnityEngine::Vector3, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::MultiplayerCenterTextAnimator::AnimatePositionOffsetSize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x59d0ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(),
                                         { "AnimatePositionOffsetSize", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator.AnimateEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(bool, float_t, ::GlobalNamespace::EaseType)>(
    &::GlobalNamespace::MultiplayerCenterTextAnimator::AnimateEnabled)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x59d0f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(),
                                                             { "AnimateEnabled", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator.SetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(::StringW)>(&::GlobalNamespace::MultiplayerCenterTextAnimator::SetText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59d10b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "SetText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&::GlobalNamespace::MultiplayerCenterTextAnimator::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59d10d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator._Awake_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(float_t)>(&::GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59d10dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator._Awake_b__8_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(float_t)>(&::GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x59d1158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator._Awake_b__8_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)()>(&::GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_5)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x59d11d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_5", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator._Awake_b__8_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(float_t)>(&::GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59d1200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_2", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator._Awake_b__8_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59d1218;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_3", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerCenterTextAnimator._Awake_b__8_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerCenterTextAnimator::*)(::UnityEngine::Vector3)>(
    &::GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_4)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59d1238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_4", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__scalingTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scalingTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__scalingTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scalingTarget;
}
constexpr void GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_set__scalingTarget(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scalingTarget = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__fadeInTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__fadeInTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInTween;
}
constexpr void GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_set__fadeInTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeInTween = value;
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__fadeOutTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__fadeOutTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr void GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_set__fadeOutTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutTween = value;
}
constexpr ::Tweening::Tween_1<float_t>*& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__fontSizeTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSizeTween;
}
constexpr ::Tweening::Tween_1<float_t>* const& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__fontSizeTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontSizeTween;
}
constexpr void GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_set__fontSizeTween(::Tweening::Tween_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fontSizeTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Color>*& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__colorTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Color>* const& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__colorTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorTween;
}
constexpr void GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_set__colorTween(::Tweening::Tween_1<::UnityEngine::Color>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorTween = value;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>*& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__offsetTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offsetTween;
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* const& GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_get__offsetTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offsetTween;
}
constexpr void GlobalNamespace::MultiplayerCenterTextAnimator::__cordl_internal_set__offsetTween(::Tweening::Tween_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offsetTween = value;
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::AnimateTextColor(::UnityEngine::Color color, float_t duration, ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(),
                                              { "AnimateTextColor", {}, { ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color, duration, easeType);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::AnimateFontSize(float_t fontSize, float_t duration, ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(),
                                                           { "AnimateFontSize", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fontSize, duration, easeType);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::AnimatePositionOffsetSize(::UnityEngine::Vector3 offset, float_t duration, ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(),
                                       { "AnimatePositionOffsetSize", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, offset, duration, easeType);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::AnimateEnabled(bool isEnabled, float_t duration, ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(),
                                                           { "AnimateEnabled", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::EaseType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled, duration, easeType);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::SetText(::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "SetText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_0(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_1(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_5() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_5", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_2(float_t val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_2", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_3(::UnityEngine::Color val) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_3", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::MultiplayerCenterTextAnimator::_Awake_b__8_4(::UnityEngine::Vector3 val) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerCenterTextAnimator*>(), { "<Awake>b__8_4", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline ::GlobalNamespace::MultiplayerCenterTextAnimator* GlobalNamespace::MultiplayerCenterTextAnimator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerCenterTextAnimator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerCenterTextAnimator::MultiplayerCenterTextAnimator() {}
