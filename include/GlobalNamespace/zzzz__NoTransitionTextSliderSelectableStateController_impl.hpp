#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionTextSliderSelectableStateController.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoTransitionTextSliderSelectableStateController_def.hpp"
#include "HMUI/zzzz__NoTransitionTextSlider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoTransitionTextSliderSelectableStateController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionTextSliderSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionTextSliderSelectableStateController::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6440978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionTextSliderSelectableStateController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionTextSliderSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionTextSliderSelectableStateController::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6440a70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionTextSliderSelectableStateController.HandleSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionTextSliderSelectableStateController::*)(::HMUI::NoTransitionTextSlider_SelectionState)>(
    &::GlobalNamespace::NoTransitionTextSliderSelectableStateController::HandleSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6440b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(),
                                                             { "HandleSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::NoTransitionTextSlider_SelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionTextSliderSelectableStateController.ResolveSelectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionTextSliderSelectableStateController::*)(::HMUI::NoTransitionTextSlider_SelectionState, bool)>(
    &::GlobalNamespace::NoTransitionTextSliderSelectableStateController::ResolveSelectionState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6440a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(),
                                                             { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::NoTransitionTextSlider_SelectionState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionTextSliderSelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionTextSliderSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionTextSliderSelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6440b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoTransitionTextSliderSelectableStateController::OnEnable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionTextSliderSelectableStateController::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionTextSliderSelectableStateController::HandleSelectionStateDidChange(::HMUI::NoTransitionTextSlider_SelectionState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(),
                                                           { "HandleSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::NoTransitionTextSlider_SelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::NoTransitionTextSliderSelectableStateController::ResolveSelectionState(::HMUI::NoTransitionTextSlider_SelectionState state, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(),
                                                           { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::NoTransitionTextSlider_SelectionState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, animated);
}
inline void GlobalNamespace::NoTransitionTextSliderSelectableStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoTransitionTextSliderSelectableStateController* GlobalNamespace::NoTransitionTextSliderSelectableStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoTransitionTextSliderSelectableStateController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoTransitionTextSliderSelectableStateController::NoTransitionTextSliderSelectableStateController() {}
