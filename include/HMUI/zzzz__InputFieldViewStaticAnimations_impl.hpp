#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__InputFieldViewStaticAnimations_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2141750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21417d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21418fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2141918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.HandleInputFieldViewSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)(::HMUI::__InputFieldView__SelectionState)>(
    &::HMUI::InputFieldViewStaticAnimations::HandleInputFieldViewSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x21417fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "HandleInputFieldViewSelectionStateDidChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__InputFieldView__SelectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21419e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::InputFieldView*& HMUI::InputFieldViewStaticAnimations::__get__inputFieldView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFieldView;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& HMUI::InputFieldViewStaticAnimations::__get__inputFieldView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFieldView;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__inputFieldView(::HMUI::InputFieldView* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____inputFieldView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::InputFieldViewStaticAnimations::__get__normalClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::InputFieldViewStaticAnimations::__get__normalClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__normalClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::InputFieldViewStaticAnimations::__get__highlightedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::InputFieldViewStaticAnimations::__get__highlightedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__highlightedClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightedClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::InputFieldViewStaticAnimations::__get__pressedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::InputFieldViewStaticAnimations::__get__pressedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__pressedClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pressedClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::InputFieldViewStaticAnimations::__get__disabledClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::InputFieldViewStaticAnimations::__get__disabledClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__disabledClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::InputFieldViewStaticAnimations::__get__selectedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::InputFieldViewStaticAnimations::__get__selectedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__selectedClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::InputFieldViewStaticAnimations::__get__didStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didStart;
}
constexpr bool const& HMUI::InputFieldViewStaticAnimations::__get__didStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didStart;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__set__didStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didStart = value;
}
inline void HMUI::InputFieldViewStaticAnimations::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::HandleInputFieldViewSelectionStateDidChange(::HMUI::__InputFieldView__SelectionState state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), "HandleInputFieldViewSelectionStateDidChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__InputFieldView__SelectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::HMUI::InputFieldViewStaticAnimations* HMUI::InputFieldViewStaticAnimations::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::InputFieldViewStaticAnimations*>());
}
inline void HMUI::InputFieldViewStaticAnimations::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldViewStaticAnimations*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldViewStaticAnimations::InputFieldViewStaticAnimations() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
