#pragma once
// IWYU pragma private; include "HMUI/ToggleWithCallbacks.hpp"
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::ToggleWithCallbacks_SelectionState::ToggleWithCallbacks_SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::ToggleWithCallbacks_SelectionState::ToggleWithCallbacks_SelectionState() {}
constexpr ::HMUI::ToggleWithCallbacks_SelectionState HMUI::ToggleWithCallbacks_SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::ToggleWithCallbacks_SelectionState HMUI::ToggleWithCallbacks_SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::ToggleWithCallbacks_SelectionState HMUI::ToggleWithCallbacks_SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::ToggleWithCallbacks_SelectionState HMUI::ToggleWithCallbacks_SelectionState::Selected{ static_cast<int32_t>(0x3) };
constexpr ::HMUI::ToggleWithCallbacks_SelectionState HMUI::ToggleWithCallbacks_SelectionState::Disabled{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.add_stateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>*)>(
    &::HMUI::ToggleWithCallbacks::add_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588e8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(),
                                                             { "add_stateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.remove_stateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>*)>(
    &::HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588ec58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(),
                                                             { "remove_stateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.get_selectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::ToggleWithCallbacks_SelectionState (::HMUI::ToggleWithCallbacks::*)()>(&::HMUI::ToggleWithCallbacks::get_selectionState)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x588ed20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(), { "get_selectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.DoStateTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(&::HMUI::ToggleWithCallbacks::DoStateTransition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5893318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(), { ::i2c::class_of<::HMUI::ToggleWithCallbacks*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ToggleWithCallbacks::*)()>(&::HMUI::ToggleWithCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5893360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>*& HMUI::ToggleWithCallbacks::__cordl_internal_get_stateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateDidChangeEvent;
}
constexpr ::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* const& HMUI::ToggleWithCallbacks::__cordl_internal_get_stateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateDidChangeEvent;
}
constexpr void HMUI::ToggleWithCallbacks::__cordl_internal_set_stateDidChangeEvent(::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stateDidChangeEvent = value;
}
inline void HMUI::ToggleWithCallbacks::add_stateDidChangeEvent(::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(), { "add_stateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent(::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(),
                                                           { "remove_stateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::ToggleWithCallbacks_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HMUI::ToggleWithCallbacks_SelectionState HMUI::ToggleWithCallbacks::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(), { "get_selectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ToggleWithCallbacks_SelectionState>(this, ___internal_method);
}
inline void HMUI::ToggleWithCallbacks::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::ToggleWithCallbacks*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void HMUI::ToggleWithCallbacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ToggleWithCallbacks*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ToggleWithCallbacks* HMUI::ToggleWithCallbacks::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ToggleWithCallbacks*>());
}
// Ctor Parameters []
constexpr ::HMUI::ToggleWithCallbacks::ToggleWithCallbacks() {}
