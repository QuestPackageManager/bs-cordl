#pragma once
#include "HMUI/zzzz__SwitchView_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__SwitchView_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "HMUI/zzzz__SwitchView_def.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__SwitchView__AnimationType::__SwitchView__AnimationType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__SwitchView__AnimationType::__SwitchView__AnimationType() {}
constexpr ::HMUI::__SwitchView__AnimationType HMUI::__SwitchView__AnimationType::OnOff{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__SwitchView__AnimationType HMUI::__SwitchView__AnimationType::SelectedState{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HMUI::SwitchView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2146a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2146acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2146db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.HandleOnValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)(bool)>(&::HMUI::SwitchView::HandleOnValueChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2146f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "HandleOnValueChanged", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.HandleStateDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)(::HMUI::__ToggleWithCallbacks__SelectionState)>(
    &::HMUI::SwitchView::HandleStateDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2146f7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "HandleStateDidChange", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ToggleWithCallbacks__SelectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView.RefreshVisuals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::RefreshVisuals)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x2146c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "RefreshVisuals",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SwitchView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SwitchView::*)()>(&::HMUI::SwitchView::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2146fd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::__SwitchView__AnimationType& HMUI::SwitchView::__get__animationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____animationType;
}
constexpr ::HMUI::__SwitchView__AnimationType const& HMUI::SwitchView::__get__animationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____animationType;
}
constexpr void HMUI::SwitchView::__set__animationType(::HMUI::__SwitchView__AnimationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____animationType = value;
}
constexpr ::UnityEngine::AnimationClip*& HMUI::SwitchView::__get__normalAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalAnimationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::SwitchView::__get__normalAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalAnimationClip;
}
constexpr void HMUI::SwitchView::__set__normalAnimationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalAnimationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::SwitchView::__get__highlightedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____highlightedAnimationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::SwitchView::__get__highlightedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____highlightedAnimationClip;
}
constexpr void HMUI::SwitchView::__set__highlightedAnimationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightedAnimationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::SwitchView::__get__pressedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pressedAnimationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::SwitchView::__get__pressedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pressedAnimationClip;
}
constexpr void HMUI::SwitchView::__set__pressedAnimationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pressedAnimationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::SwitchView::__get__disabledAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disabledAnimationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::SwitchView::__get__disabledAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disabledAnimationClip;
}
constexpr void HMUI::SwitchView::__set__disabledAnimationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledAnimationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::SwitchView::__get__onAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____onAnimationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::SwitchView::__get__onAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____onAnimationClip;
}
constexpr void HMUI::SwitchView::__set__onAnimationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAnimationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::SwitchView::__get__offAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____offAnimationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::SwitchView::__get__offAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____offAnimationClip;
}
constexpr void HMUI::SwitchView::__set__offAnimationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____offAnimationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::SwitchView::__get__selectedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____selectedAnimationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::SwitchView::__get__selectedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____selectedAnimationClip;
}
constexpr void HMUI::SwitchView::__set__selectedAnimationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedAnimationClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::SwitchView::__get__selectedAndHighlightedAnimationClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____selectedAndHighlightedAnimationClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::SwitchView::__get__selectedAndHighlightedAnimationClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____selectedAndHighlightedAnimationClip;
}
constexpr void HMUI::SwitchView::__set__selectedAndHighlightedAnimationClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedAndHighlightedAnimationClip)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ToggleWithCallbacks*& HMUI::SwitchView::__get__toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____toggle;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleWithCallbacks*> const& HMUI::SwitchView::__get__toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____toggle;
}
constexpr void HMUI::SwitchView::__set__toggle(::HMUI::ToggleWithCallbacks* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::SwitchView::Awake() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::SwitchView::Start() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "Start", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::SwitchView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::SwitchView::HandleOnValueChanged(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "HandleOnValueChanged", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::SwitchView::HandleStateDidChange(::HMUI::__ToggleWithCallbacks__SelectionState value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "HandleStateDidChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ToggleWithCallbacks__SelectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::SwitchView::RefreshVisuals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), "RefreshVisuals",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::SwitchView* HMUI::SwitchView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::SwitchView*>());
}
inline void HMUI::SwitchView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SwitchView*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::SwitchView::SwitchView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
