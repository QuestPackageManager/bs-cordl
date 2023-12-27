#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ButtonStaticAnimations_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2130848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21308d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21309ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2130a08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations.HandleButtonSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)(::HMUI::__NoTransitionsButton__SelectionState)>(
    &::HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21308f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "HandleButtonSelectionStateDidChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__NoTransitionsButton__SelectionState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ButtonStaticAnimations._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ButtonStaticAnimations::*)()>(&::HMUI::ButtonStaticAnimations::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2130ad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::NoTransitionsButton*& HMUI::ButtonStaticAnimations::__get__button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____button;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::NoTransitionsButton*> const& HMUI::ButtonStaticAnimations::__get__button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____button;
}
constexpr void HMUI::ButtonStaticAnimations::__set__button(::HMUI::NoTransitionsButton* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::ButtonStaticAnimations::__get__normalClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::ButtonStaticAnimations::__get__normalClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____normalClip;
}
constexpr void HMUI::ButtonStaticAnimations::__set__normalClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::ButtonStaticAnimations::__get__highlightedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____highlightedClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::ButtonStaticAnimations::__get__highlightedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____highlightedClip;
}
constexpr void HMUI::ButtonStaticAnimations::__set__highlightedClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____highlightedClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::ButtonStaticAnimations::__get__pressedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pressedClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::ButtonStaticAnimations::__get__pressedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pressedClip;
}
constexpr void HMUI::ButtonStaticAnimations::__set__pressedClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pressedClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& HMUI::ButtonStaticAnimations::__get__disabledClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disabledClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& HMUI::ButtonStaticAnimations::__get__disabledClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____disabledClip;
}
constexpr void HMUI::ButtonStaticAnimations::__set__disabledClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____disabledClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HMUI::ButtonStaticAnimations::__get__didStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____didStart;
}
constexpr bool const& HMUI::ButtonStaticAnimations::__get__didStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____didStart;
}
constexpr void HMUI::ButtonStaticAnimations::__set__didStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____didStart = value;
}
inline void HMUI::ButtonStaticAnimations::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ButtonStaticAnimations::HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), "HandleButtonSelectionStateDidChange", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__NoTransitionsButton__SelectionState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
inline ::HMUI::ButtonStaticAnimations* HMUI::ButtonStaticAnimations::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::ButtonStaticAnimations*>());
}
inline void HMUI::ButtonStaticAnimations::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ButtonStaticAnimations*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::ButtonStaticAnimations::ButtonStaticAnimations() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
