#pragma once
// IWYU pragma private; include "HMUI/InputFieldViewStaticAnimations.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__InputFieldViewStaticAnimations_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::Awake)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58892c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5889354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5889498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58894b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations.HandleInputFieldViewSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)(::HMUI::InputFieldView_SelectionState)>(
    &::HMUI::InputFieldViewStaticAnimations::HandleInputFieldViewSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5889374;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(),
                                                             { "HandleInputFieldViewSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::InputFieldView_SelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldViewStaticAnimations._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldViewStaticAnimations::*)()>(&::HMUI::InputFieldViewStaticAnimations::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58895c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::InputFieldView>& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__inputFieldView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFieldView;
}
constexpr ::UnityW<::HMUI::InputFieldView> const& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__inputFieldView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inputFieldView;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__cordl_internal_set__inputFieldView(::UnityW<::HMUI::InputFieldView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inputFieldView = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__normalClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__normalClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__cordl_internal_set__normalClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____normalClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__highlightedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__highlightedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____highlightedClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__cordl_internal_set__highlightedClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____highlightedClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__pressedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__pressedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pressedClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__cordl_internal_set__pressedClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pressedClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__disabledClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__disabledClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disabledClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__cordl_internal_set__disabledClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disabledClip = value;
}
constexpr ::UnityW<::UnityEngine::AnimationClip>& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__selectedClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedClip;
}
constexpr ::UnityW<::UnityEngine::AnimationClip> const& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__selectedClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedClip;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__cordl_internal_set__selectedClip(::UnityW<::UnityEngine::AnimationClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedClip = value;
}
constexpr bool& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__didStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didStart;
}
constexpr bool const& HMUI::InputFieldViewStaticAnimations::__cordl_internal_get__didStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didStart;
}
constexpr void HMUI::InputFieldViewStaticAnimations::__cordl_internal_set__didStart(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didStart = value;
}
inline void HMUI::InputFieldViewStaticAnimations::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldViewStaticAnimations::HandleInputFieldViewSelectionStateDidChange(::HMUI::InputFieldView_SelectionState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(),
                                                           { "HandleInputFieldViewSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::InputFieldView_SelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void HMUI::InputFieldViewStaticAnimations::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldViewStaticAnimations*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::InputFieldViewStaticAnimations* HMUI::InputFieldViewStaticAnimations::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InputFieldViewStaticAnimations*>());
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldViewStaticAnimations::InputFieldViewStaticAnimations() {}
