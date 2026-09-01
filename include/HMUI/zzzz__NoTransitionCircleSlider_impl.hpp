#pragma once
// IWYU pragma private; include "HMUI\NoTransitionCircleSlider.hpp"
#include "HMUI/zzzz__CircleSlider_impl.hpp"
#include "HMUI/zzzz__NoTransitionCircleSlider_def.hpp"
#include "HMUI/zzzz__NoTransitionCircleSlider_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::NoTransitionCircleSlider_SelectionState::NoTransitionCircleSlider_SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionCircleSlider_SelectionState::NoTransitionCircleSlider_SelectionState() {}
constexpr ::HMUI::NoTransitionCircleSlider_SelectionState HMUI::NoTransitionCircleSlider_SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::NoTransitionCircleSlider_SelectionState HMUI::NoTransitionCircleSlider_SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::NoTransitionCircleSlider_SelectionState HMUI::NoTransitionCircleSlider_SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::NoTransitionCircleSlider_SelectionState HMUI::NoTransitionCircleSlider_SelectionState::Disabled{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HMUI::NoTransitionCircleSlider.get_selectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::NoTransitionCircleSlider_SelectionState (::HMUI::NoTransitionCircleSlider::*)()>(
    &::HMUI::NoTransitionCircleSlider::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588c00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(), { "get_selectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionCircleSlider.add_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionCircleSlider::*)(::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>*)>(
    &::HMUI::NoTransitionCircleSlider::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588c014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(),
                                                             { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionCircleSlider.remove_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionCircleSlider::*)(::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>*)>(
    &::HMUI::NoTransitionCircleSlider::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588c0d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(),
                                                { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionCircleSlider.DoStateTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionCircleSlider::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(
    &::HMUI::NoTransitionCircleSlider::DoStateTransition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x588c194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(), { ::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionCircleSlider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionCircleSlider::*)()>(&::HMUI::NoTransitionCircleSlider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588c1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>*& HMUI::NoTransitionCircleSlider::__cordl_internal_get_selectionStateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr ::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* const& HMUI::NoTransitionCircleSlider::__cordl_internal_get_selectionStateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr void HMUI::NoTransitionCircleSlider::__cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionStateDidChangeEvent = value;
}
constexpr ::HMUI::NoTransitionCircleSlider_SelectionState& HMUI::NoTransitionCircleSlider::__cordl_internal_get__selectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr ::HMUI::NoTransitionCircleSlider_SelectionState const& HMUI::NoTransitionCircleSlider::__cordl_internal_get__selectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr void HMUI::NoTransitionCircleSlider::__cordl_internal_set__selectionState(::HMUI::NoTransitionCircleSlider_SelectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionState = value;
}
inline ::HMUI::NoTransitionCircleSlider_SelectionState HMUI::NoTransitionCircleSlider::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(), { "get_selectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::NoTransitionCircleSlider_SelectionState>(this, ___internal_method);
}
inline void HMUI::NoTransitionCircleSlider::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(),
                                                           { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionCircleSlider::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(),
                                                           { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionCircleSlider_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionCircleSlider::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void HMUI::NoTransitionCircleSlider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionCircleSlider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::NoTransitionCircleSlider* HMUI::NoTransitionCircleSlider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::NoTransitionCircleSlider*>());
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionCircleSlider::NoTransitionCircleSlider() {}
