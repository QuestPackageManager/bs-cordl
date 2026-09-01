#pragma once
// IWYU pragma private; include "HMUI\SwitchView.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SwitchView_def.hpp"
#include "HMUI/zzzz__SwitchView_def.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::SwitchView_AnimationType::SwitchView_AnimationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::SwitchView_AnimationType::SwitchView_AnimationType() {}
constexpr ::HMUI::SwitchView_AnimationType HMUI::SwitchView_AnimationType::OnOff{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::SwitchView_AnimationType HMUI::SwitchView_AnimationType::SelectedState{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HMUI::SwitchView.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::Awake)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x588c57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::Start)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x588c5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::OnDestroy)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x588c94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.HandleOnValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SwitchView::*)(bool)>(&::HMUI::SwitchView::HandleOnValueChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588cb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "HandleOnValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.HandleStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SwitchView::*)(::HMUI::ToggleWithCallbacks_SelectionState)>(&::HMUI::SwitchView::HandleStateDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588cb90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "HandleStateDidChange", {}, { ::i2c::type_of<::HMUI::ToggleWithCallbacks_SelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.RefreshVisuals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::RefreshVisuals)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x588c818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "RefreshVisuals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588cc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::HMUI::SwitchView_AnimationType& HMUI::SwitchView::__cordl_internal_get__animationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationType;
}
constexpr ::HMUI::SwitchView_AnimationType const& HMUI::SwitchView::__cordl_internal_get__animationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationType;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__animationType(::HMUI::SwitchView_AnimationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationType = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SwitchView::__cordl_internal_get__normalAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SwitchView::__cordl_internal_get__normalAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalAnimationClip;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__normalAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SwitchView::__cordl_internal_get__highlightedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SwitchView::__cordl_internal_get__highlightedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedAnimationClip;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__highlightedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SwitchView::__cordl_internal_get__pressedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SwitchView::__cordl_internal_get__pressedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedAnimationClip;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__pressedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SwitchView::__cordl_internal_get__disabledAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SwitchView::__cordl_internal_get__disabledAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledAnimationClip;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__disabledAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SwitchView::__cordl_internal_get__onAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SwitchView::__cordl_internal_get__onAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnimationClip;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__onAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SwitchView::__cordl_internal_get__offAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SwitchView::__cordl_internal_get__offAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____offAnimationClip;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__offAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____offAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SwitchView::__cordl_internal_get__selectedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SwitchView::__cordl_internal_get__selectedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAnimationClip;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__selectedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAnimationClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::SwitchView::__cordl_internal_get__selectedAndHighlightedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedAnimationClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::SwitchView::__cordl_internal_get__selectedAndHighlightedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAndHighlightedAnimationClip;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__selectedAndHighlightedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAndHighlightedAnimationClip = value;
}
constexpr ::UnityW<::HMUI::ToggleWithCallbacks>& HMUI::SwitchView::__cordl_internal_get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr ::UnityW<::HMUI::ToggleWithCallbacks> const& HMUI::SwitchView::__cordl_internal_get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggle;
}
constexpr void HMUI::SwitchView::__cordl_internal_set__toggle(::UnityW<::HMUI::ToggleWithCallbacks> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggle = value;
}
inline void HMUI::SwitchView::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SwitchView::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SwitchView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SwitchView::HandleOnValueChanged(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "HandleOnValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SwitchView::HandleStateDidChange(::HMUI::ToggleWithCallbacks_SelectionState value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "HandleStateDidChange", {}, { ::i2c::type_of<::HMUI::ToggleWithCallbacks_SelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::SwitchView::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { "RefreshVisuals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::SwitchView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SwitchView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::SwitchView* HMUI::SwitchView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::SwitchView*>());
}
// Ctor Parameters []
constexpr ::HMUI::SwitchView::SwitchView() {}
