#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionButtonSelectableStateController.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoTransitionButtonSelectableStateController_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoTransitionButtonSelectableStateController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionButtonSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionButtonSelectableStateController::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64403fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionButtonSelectableStateController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionButtonSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionButtonSelectableStateController::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x64404f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionButtonSelectableStateController.HandleNoTransitionButtonSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionButtonSelectableStateController::*)(::HMUI::NoTransitionsButton_SelectionState)>(
    &::GlobalNamespace::NoTransitionButtonSelectableStateController::HandleNoTransitionButtonSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6440584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(),
                                                             { "HandleNoTransitionButtonSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::NoTransitionsButton_SelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionButtonSelectableStateController.ResolveSelectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionButtonSelectableStateController::*)(::HMUI::NoTransitionsButton_SelectionState, bool)>(
    &::GlobalNamespace::NoTransitionButtonSelectableStateController::ResolveSelectionState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x64404a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(),
                                                             { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::NoTransitionsButton_SelectionState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionButtonSelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionButtonSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionButtonSelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x644058c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoTransitionButtonSelectableStateController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionButtonSelectableStateController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionButtonSelectableStateController::HandleNoTransitionButtonSelectionStateDidChange(::HMUI::NoTransitionsButton_SelectionState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(),
                                                           { "HandleNoTransitionButtonSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::NoTransitionsButton_SelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::NoTransitionButtonSelectableStateController::ResolveSelectionState(::HMUI::NoTransitionsButton_SelectionState state, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(),
                                                           { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::NoTransitionsButton_SelectionState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, animated);
}
inline void GlobalNamespace::NoTransitionButtonSelectableStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionButtonSelectableStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoTransitionButtonSelectableStateController* GlobalNamespace::NoTransitionButtonSelectableStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoTransitionButtonSelectableStateController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoTransitionButtonSelectableStateController::NoTransitionButtonSelectableStateController() {}
