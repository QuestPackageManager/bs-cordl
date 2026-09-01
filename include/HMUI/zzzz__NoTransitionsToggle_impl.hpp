#pragma once
// IWYU pragma private; include "HMUI\NoTransitionsToggle.hpp"
#include "HMUI/zzzz__UISelectionState_impl.hpp"
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "HMUI/zzzz__NoTransitionsToggle_def.hpp"
#include "HMUI/zzzz__UISelectionState_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
//  Writing Method size for method: ::HMUI::NoTransitionsToggle.get_selectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::UISelectionState (::HMUI::NoTransitionsToggle::*)()>(&::HMUI::NoTransitionsToggle::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5887440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "get_selectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsToggle.add_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsToggle::*)(::System::Action_1<::HMUI::UISelectionState>*)>(
    &::HMUI::NoTransitionsToggle::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5887448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::UISelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsToggle.remove_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsToggle::*)(::System::Action_1<::HMUI::UISelectionState>*)>(
    &::HMUI::NoTransitionsToggle::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5887508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::UISelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsToggle.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsToggle::*)()>(&::HMUI::NoTransitionsToggle::Awake)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58875c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { ::i2c::class_of<::HMUI::NoTransitionsToggle*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsToggle.DoStateTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsToggle::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(&::HMUI::NoTransitionsToggle::DoStateTransition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x588767c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { ::i2c::class_of<::HMUI::NoTransitionsToggle*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsToggle.SetSelectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsToggle::*)(::HMUI::UISelectionState)>(&::HMUI::NoTransitionsToggle::SetSelectionState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58876e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "SetSelectionState", {}, { ::i2c::type_of<::HMUI::UISelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsToggle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsToggle::*)()>(&::HMUI::NoTransitionsToggle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5887700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsToggle._Awake_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::NoTransitionsToggle::*)(bool)>(&::HMUI::NoTransitionsToggle::_Awake_b__6_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5887708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "<Awake>b__6_0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::HMUI::UISelectionState>*& HMUI::NoTransitionsToggle::__cordl_internal_get_selectionStateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr ::System::Action_1<::HMUI::UISelectionState>* const& HMUI::NoTransitionsToggle::__cordl_internal_get_selectionStateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr void HMUI::NoTransitionsToggle::__cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionStateDidChangeEvent = value;
}
constexpr ::HMUI::UISelectionState& HMUI::NoTransitionsToggle::__cordl_internal_get__selectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr ::HMUI::UISelectionState const& HMUI::NoTransitionsToggle::__cordl_internal_get__selectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr void HMUI::NoTransitionsToggle::__cordl_internal_set__selectionState(::HMUI::UISelectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionState = value;
}
inline ::HMUI::UISelectionState HMUI::NoTransitionsToggle::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "get_selectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::UISelectionState>(this, ___internal_method);
}
inline void HMUI::NoTransitionsToggle::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::UISelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionsToggle::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::UISelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::UISelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionsToggle::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::NoTransitionsToggle*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::NoTransitionsToggle::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::NoTransitionsToggle*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void HMUI::NoTransitionsToggle::SetSelectionState(::HMUI::UISelectionState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "SetSelectionState", {}, { ::i2c::type_of<::HMUI::UISelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void HMUI::NoTransitionsToggle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::NoTransitionsToggle::_Awake_b__6_0(bool _) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::NoTransitionsToggle*>(), { "<Awake>b__6_0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline ::HMUI::NoTransitionsToggle* HMUI::NoTransitionsToggle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::NoTransitionsToggle*>());
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionsToggle::NoTransitionsToggle() {}
