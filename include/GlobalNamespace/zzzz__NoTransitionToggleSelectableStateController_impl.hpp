#pragma once
// IWYU pragma private; include "GlobalNamespace\NoTransitionToggleSelectableStateController.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoTransitionToggleSelectableStateController_def.hpp"
#include "HMUI/zzzz__NoTransitionsToggle_def.hpp"
#include "HMUI/zzzz__UISelectionState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoTransitionToggleSelectableStateController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionToggleSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionToggleSelectableStateController::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6446364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionToggleSelectableStateController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionToggleSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionToggleSelectableStateController::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x644649c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionToggleSelectableStateController.HandleNoTransitionToggleSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionToggleSelectableStateController::*)(::HMUI::UISelectionState)>(
    &::GlobalNamespace::NoTransitionToggleSelectableStateController::HandleNoTransitionToggleSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644652c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(),
                                                                                           { "HandleNoTransitionToggleSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::UISelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionToggleSelectableStateController.ResolveSelectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionToggleSelectableStateController::*)(::HMUI::UISelectionState, bool)>(
    &::GlobalNamespace::NoTransitionToggleSelectableStateController::ResolveSelectionState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x644640c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(),
                                                                                           { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::UISelectionState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionToggleSelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionToggleSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionToggleSelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6446534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoTransitionToggleSelectableStateController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionToggleSelectableStateController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionToggleSelectableStateController::HandleNoTransitionToggleSelectionStateDidChange(::HMUI::UISelectionState state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(),
                                                                                         { "HandleNoTransitionToggleSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::UISelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::NoTransitionToggleSelectableStateController::ResolveSelectionState(::HMUI::UISelectionState state, bool animated) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(),
                                                                                         { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::UISelectionState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, animated);
}
inline void GlobalNamespace::NoTransitionToggleSelectableStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionToggleSelectableStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoTransitionToggleSelectableStateController* GlobalNamespace::NoTransitionToggleSelectableStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoTransitionToggleSelectableStateController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoTransitionToggleSelectableStateController::NoTransitionToggleSelectableStateController() {}
