#pragma once
// IWYU pragma private; include "GlobalNamespace/NoTransitionSlider2DSelectableStateController.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_impl.hpp"
#include "GlobalNamespace/zzzz__NoTransitionSlider2DSelectableStateController_def.hpp"
#include "HMUI/zzzz__NoTransitionSlider2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoTransitionSlider2DSelectableStateController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionSlider2DSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionSlider2DSelectableStateController::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x64407a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionSlider2DSelectableStateController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionSlider2DSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionSlider2DSelectableStateController::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x644089c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionSlider2DSelectableStateController.HandleSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionSlider2DSelectableStateController::*)(::HMUI::NoTransitionSlider2D_SelectionState)>(
    &::GlobalNamespace::NoTransitionSlider2DSelectableStateController::HandleSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644092c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(),
                                                             { "HandleSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::NoTransitionSlider2D_SelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionSlider2DSelectableStateController.ResolveSelectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionSlider2DSelectableStateController::*)(::HMUI::NoTransitionSlider2D_SelectionState, bool)>(
    &::GlobalNamespace::NoTransitionSlider2DSelectableStateController::ResolveSelectionState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x644084c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(),
                                                             { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::NoTransitionSlider2D_SelectionState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoTransitionSlider2DSelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoTransitionSlider2DSelectableStateController::*)()>(
    &::GlobalNamespace::NoTransitionSlider2DSelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6440934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NoTransitionSlider2DSelectableStateController::OnEnable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionSlider2DSelectableStateController::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoTransitionSlider2DSelectableStateController::HandleSelectionStateDidChange(::HMUI::NoTransitionSlider2D_SelectionState state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(),
                                                                                         { "HandleSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::NoTransitionSlider2D_SelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::NoTransitionSlider2DSelectableStateController::ResolveSelectionState(::HMUI::NoTransitionSlider2D_SelectionState state, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(),
                                                           { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::NoTransitionSlider2D_SelectionState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, animated);
}
inline void GlobalNamespace::NoTransitionSlider2DSelectableStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoTransitionSlider2DSelectableStateController* GlobalNamespace::NoTransitionSlider2DSelectableStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoTransitionSlider2DSelectableStateController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoTransitionSlider2DSelectableStateController::NoTransitionSlider2DSelectableStateController() {}
