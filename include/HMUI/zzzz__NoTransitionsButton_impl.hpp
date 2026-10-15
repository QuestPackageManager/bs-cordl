#pragma once
// IWYU pragma private; include "HMUI/NoTransitionsButton.hpp"
#include "UnityEngine/UI/zzzz__Button_impl.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "HMUI/zzzz__IForcedHighlightHandler_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::HMUI::NoTransitionsButton_SelectionState::NoTransitionsButton_SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionsButton_SelectionState::NoTransitionsButton_SelectionState() {}
constexpr ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton_SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton_SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton_SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton_SelectionState::Disabled{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HMUI::NoTransitionsButton.get_selectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::NoTransitionsButton_SelectionState (::HMUI::NoTransitionsButton::*)()>(&::HMUI::NoTransitionsButton::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd1668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(), { "get_selectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.add_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*)>(
    &::HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cd0948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(),
                                                             { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.remove_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*)>(
    &::HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5cd0b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(),
                                                             { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.SetForcedHighlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsButton::*)(bool)>(&::HMUI::NoTransitionsButton::SetForcedHighlight)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5cd1670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(), { "SetForcedHighlight", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.DoStateTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsButton::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(&::HMUI::NoTransitionsButton::DoStateTransition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cd16ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(), { ::i2c::class_of<::HMUI::NoTransitionsButton*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsButton::*)()>(&::HMUI::NoTransitionsButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd1748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*& HMUI::NoTransitionsButton::__cordl_internal_get_selectionStateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr ::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* const& HMUI::NoTransitionsButton::__cordl_internal_get_selectionStateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr void HMUI::NoTransitionsButton::__cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionStateDidChangeEvent = value;
}
constexpr ::HMUI::NoTransitionsButton_SelectionState& HMUI::NoTransitionsButton::__cordl_internal_get__selectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr ::HMUI::NoTransitionsButton_SelectionState const& HMUI::NoTransitionsButton::__cordl_internal_get__selectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr void HMUI::NoTransitionsButton::__cordl_internal_set__selectionState(::HMUI::NoTransitionsButton_SelectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionState = value;
}
constexpr bool& HMUI::NoTransitionsButton::__cordl_internal_get__forceHighlighted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceHighlighted;
}
constexpr bool const& HMUI::NoTransitionsButton::__cordl_internal_get__forceHighlighted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forceHighlighted;
}
constexpr void HMUI::NoTransitionsButton::__cordl_internal_set__forceHighlighted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forceHighlighted = value;
}
inline ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(), { "get_selectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::NoTransitionsButton_SelectionState>(this, ___internal_method);
}
inline void HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(),
                                                           { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(),
                                                           { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionsButton::SetForcedHighlight(bool forced) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(), { "SetForcedHighlight", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forced);
}
inline void HMUI::NoTransitionsButton::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::NoTransitionsButton*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void HMUI::NoTransitionsButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsButton*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::NoTransitionsButton* HMUI::NoTransitionsButton::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::NoTransitionsButton*>());
}
/// @brief Convert operator to "::HMUI::IForcedHighlightHandler"
constexpr HMUI::NoTransitionsButton::operator ::HMUI::IForcedHighlightHandler*() noexcept {
  return static_cast<::HMUI::IForcedHighlightHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::HMUI::IForcedHighlightHandler"
constexpr ::HMUI::IForcedHighlightHandler* HMUI::NoTransitionsButton::i___HMUI__IForcedHighlightHandler() noexcept {
  return static_cast<::HMUI::IForcedHighlightHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionsButton::NoTransitionsButton() {}
