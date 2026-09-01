#pragma once
// IWYU pragma private; include "HMUI\NoTransitionSlider2D.hpp"
#include "HMUI/zzzz__Slider2D_impl.hpp"
#include "HMUI/zzzz__NoTransitionSlider2D_def.hpp"
#include "HMUI/zzzz__NoTransitionSlider2D_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::NoTransitionSlider2D_SelectionState::NoTransitionSlider2D_SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionSlider2D_SelectionState::NoTransitionSlider2D_SelectionState() {}
constexpr ::HMUI::NoTransitionSlider2D_SelectionState HMUI::NoTransitionSlider2D_SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::NoTransitionSlider2D_SelectionState HMUI::NoTransitionSlider2D_SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::NoTransitionSlider2D_SelectionState HMUI::NoTransitionSlider2D_SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::NoTransitionSlider2D_SelectionState HMUI::NoTransitionSlider2D_SelectionState::Disabled{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HMUI::NoTransitionSlider2D.get_selectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::NoTransitionSlider2D_SelectionState (::HMUI::NoTransitionSlider2D::*)()>(&::HMUI::NoTransitionSlider2D::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588c1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(), { "get_selectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionSlider2D.add_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionSlider2D::*)(::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>*)>(
    &::HMUI::NoTransitionSlider2D::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588c1e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(),
                                                             { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionSlider2D.remove_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionSlider2D::*)(::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>*)>(
    &::HMUI::NoTransitionSlider2D::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588c2a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(),
                                                             { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionSlider2D.DoStateTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionSlider2D::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(&::HMUI::NoTransitionSlider2D::DoStateTransition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x588c364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(), { ::i2c::class_of<::HMUI::NoTransitionSlider2D*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionSlider2D._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionSlider2D::*)()>(&::HMUI::NoTransitionSlider2D::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588c3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>*& HMUI::NoTransitionSlider2D::__cordl_internal_get_selectionStateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr ::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>* const& HMUI::NoTransitionSlider2D::__cordl_internal_get_selectionStateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr void HMUI::NoTransitionSlider2D::__cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionStateDidChangeEvent = value;
}
constexpr ::HMUI::NoTransitionSlider2D_SelectionState& HMUI::NoTransitionSlider2D::__cordl_internal_get__selectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr ::HMUI::NoTransitionSlider2D_SelectionState const& HMUI::NoTransitionSlider2D::__cordl_internal_get__selectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr void HMUI::NoTransitionSlider2D::__cordl_internal_set__selectionState(::HMUI::NoTransitionSlider2D_SelectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionState = value;
}
inline ::HMUI::NoTransitionSlider2D_SelectionState HMUI::NoTransitionSlider2D::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(), { "get_selectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::NoTransitionSlider2D_SelectionState>(this, ___internal_method);
}
inline void HMUI::NoTransitionSlider2D::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(),
                                                           { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionSlider2D::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(),
                                                           { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::NoTransitionSlider2D_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionSlider2D::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::NoTransitionSlider2D*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void HMUI::NoTransitionSlider2D::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionSlider2D*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::NoTransitionSlider2D* HMUI::NoTransitionSlider2D::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::NoTransitionSlider2D*>());
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionSlider2D::NoTransitionSlider2D() {}
