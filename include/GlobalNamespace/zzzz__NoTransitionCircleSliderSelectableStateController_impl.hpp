#pragma once
// IWYU pragma private; include "GlobalNamespace\NoTransitionCircleSliderSelectableStateController.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoTransitionCircleSliderSelectableStateController_def.hpp"
#include "HMUI/zzzz__NoTransitionCircleSlider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoTransitionCircleSliderSelectableStateController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6445de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionCircleSliderSelectableStateController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6445ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionCircleSliderSelectableStateController.HandleSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::*)(::HMUI::NoTransitionCircleSlider_SelectionState)>(
    &::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::HandleSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6445f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(),
                                                             { "HandleSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::NoTransitionCircleSlider_SelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionCircleSliderSelectableStateController.ResolveSelectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::*)(::HMUI::NoTransitionCircleSlider_SelectionState, bool)>(
    &::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::ResolveSelectionState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6445e90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(),
                                                             { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::NoTransitionCircleSlider_SelectionState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionCircleSliderSelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6445f78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoTransitionCircleSliderSelectableStateController::OnEnable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionCircleSliderSelectableStateController::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionCircleSliderSelectableStateController::HandleSelectionStateDidChange(::HMUI::NoTransitionCircleSlider_SelectionState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(),
                                                           { "HandleSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::NoTransitionCircleSlider_SelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::NoTransitionCircleSliderSelectableStateController::ResolveSelectionState(::HMUI::NoTransitionCircleSlider_SelectionState state, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(),
                                                           { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::NoTransitionCircleSlider_SelectionState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, animated);
}
inline void GlobalNamespace::NoTransitionCircleSliderSelectableStateController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoTransitionCircleSliderSelectableStateController* GlobalNamespace::NoTransitionCircleSliderSelectableStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoTransitionCircleSliderSelectableStateController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoTransitionCircleSliderSelectableStateController::NoTransitionCircleSliderSelectableStateController() {}
