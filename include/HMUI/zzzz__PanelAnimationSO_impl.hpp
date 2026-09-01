#pragma once
// IWYU pragma private; include "HMUI\PanelAnimationSO.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HMUI/zzzz__PanelAnimationSO_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::HMUI::PanelAnimationSO.ExecuteAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::PanelAnimationSO::*)(::UnityEngine::GameObject*)>(&::HMUI::PanelAnimationSO::ExecuteAnimation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5875ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::PanelAnimationSO*>(), { "ExecuteAnimation", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PanelAnimationSO.ExecuteAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::PanelAnimationSO::*)(::UnityEngine::GameObject*, ::System::Action*)>(&::HMUI::PanelAnimationSO::ExecuteAnimation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5875d7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::PanelAnimationSO*>(), { "ExecuteAnimation", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PanelAnimationSO.ExecuteAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::PanelAnimationSO::*)(::UnityEngine::GameObject*, ::UnityEngine::CanvasGroup*, ::System::Action*)>(
    &::HMUI::PanelAnimationSO::ExecuteAnimation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5875d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::PanelAnimationSO*>(),
                            { "ExecuteAnimation", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::CanvasGroup*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PanelAnimationSO.ExecuteAnimation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::PanelAnimationSO::*)(::UnityEngine::GameObject*, ::UnityEngine::CanvasGroup*, bool, ::System::Action*)>(
    &::HMUI::PanelAnimationSO::ExecuteAnimation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5875cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::HMUI::PanelAnimationSO*>(),
            { "ExecuteAnimation", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::CanvasGroup*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::PanelAnimationSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::PanelAnimationSO::*)()>(&::HMUI::PanelAnimationSO::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5875d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::PanelAnimationSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::PanelAnimationSO::__cordl_internal_get__duration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr float_t const& HMUI::PanelAnimationSO::__cordl_internal_get__duration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duration;
}
constexpr void HMUI::PanelAnimationSO::__cordl_internal_set__duration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____duration = value;
}
constexpr ::UnityEngine::AnimationCurve*& HMUI::PanelAnimationSO::__cordl_internal_get__scaleXAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleXAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& HMUI::PanelAnimationSO::__cordl_internal_get__scaleXAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleXAnimationCurve;
}
constexpr void HMUI::PanelAnimationSO::__cordl_internal_set__scaleXAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleXAnimationCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& HMUI::PanelAnimationSO::__cordl_internal_get__scaleYAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleYAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& HMUI::PanelAnimationSO::__cordl_internal_get__scaleYAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scaleYAnimationCurve;
}
constexpr void HMUI::PanelAnimationSO::__cordl_internal_set__scaleYAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scaleYAnimationCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& HMUI::PanelAnimationSO::__cordl_internal_get__alphaAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& HMUI::PanelAnimationSO::__cordl_internal_get__alphaAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alphaAnimationCurve;
}
constexpr void HMUI::PanelAnimationSO::__cordl_internal_set__alphaAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alphaAnimationCurve = value;
}
constexpr ::UnityEngine::AnimationCurve*& HMUI::PanelAnimationSO::__cordl_internal_get__parentAlphaAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentAlphaAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& HMUI::PanelAnimationSO::__cordl_internal_get__parentAlphaAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentAlphaAnimationCurve;
}
constexpr void HMUI::PanelAnimationSO::__cordl_internal_set__parentAlphaAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentAlphaAnimationCurve = value;
}
inline void HMUI::PanelAnimationSO::ExecuteAnimation(::UnityEngine::GameObject* go) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::PanelAnimationSO*>(), { "ExecuteAnimation", {}, { ::i2c::type_of<::UnityEngine::GameObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go);
}
inline void HMUI::PanelAnimationSO::ExecuteAnimation(::UnityEngine::GameObject* go, ::System::Action* finishedCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::PanelAnimationSO*>(), { "ExecuteAnimation", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go, finishedCallback);
}
inline void HMUI::PanelAnimationSO::ExecuteAnimation(::UnityEngine::GameObject* go, ::UnityEngine::CanvasGroup* parentCanvasGroup, ::System::Action* finishedCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::PanelAnimationSO*>(),
                          { "ExecuteAnimation", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::CanvasGroup*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go, parentCanvasGroup, finishedCallback);
}
inline void HMUI::PanelAnimationSO::ExecuteAnimation(::UnityEngine::GameObject* go, ::UnityEngine::CanvasGroup* parentCanvasGroup, bool instant, ::System::Action* finishedCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::HMUI::PanelAnimationSO*>(),
          { "ExecuteAnimation", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::CanvasGroup*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go, parentCanvasGroup, instant, finishedCallback);
}
inline void HMUI::PanelAnimationSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::PanelAnimationSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::PanelAnimationSO* HMUI::PanelAnimationSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::PanelAnimationSO*>());
}
// Ctor Parameters []
constexpr ::HMUI::PanelAnimationSO::PanelAnimationSO() {}
