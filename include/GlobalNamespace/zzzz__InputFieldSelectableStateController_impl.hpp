#pragma once
// IWYU pragma private; include "GlobalNamespace\InputFieldSelectableStateController.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_impl.hpp"
#include "GlobalNamespace/zzzz__InputFieldSelectableStateController_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputFieldSelectableStateController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputFieldSelectableStateController::*)()>(&::GlobalNamespace::InputFieldSelectableStateController::OnEnable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6445a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputFieldSelectableStateController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputFieldSelectableStateController::*)()>(&::GlobalNamespace::InputFieldSelectableStateController::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6445b38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputFieldSelectableStateController.HandleInputFieldSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputFieldSelectableStateController::*)(::HMUI::InputFieldView_SelectionState)>(
    &::GlobalNamespace::InputFieldSelectableStateController::HandleInputFieldSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6445bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(),
                                                             { "HandleInputFieldSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::InputFieldView_SelectionState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputFieldSelectableStateController.ResolveSelectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputFieldSelectableStateController::*)(::HMUI::InputFieldView_SelectionState, bool)>(
    &::GlobalNamespace::InputFieldSelectableStateController::ResolveSelectionState)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6445ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(),
                                                             { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::InputFieldView_SelectionState>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputFieldSelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputFieldSelectableStateController::*)()>(&::GlobalNamespace::InputFieldSelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6445bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::InputFieldSelectableStateController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InputFieldSelectableStateController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::InputFieldSelectableStateController::HandleInputFieldSelectionStateDidChange(::HMUI::InputFieldView_SelectionState state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(),
                                                           { "HandleInputFieldSelectionStateDidChange", {}, { ::i2c::type_of<::HMUI::InputFieldView_SelectionState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::InputFieldSelectableStateController::ResolveSelectionState(::HMUI::InputFieldView_SelectionState state, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(),
                                                           { "ResolveSelectionState", {}, { ::i2c::type_of<::HMUI::InputFieldView_SelectionState>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, animated);
}
inline void GlobalNamespace::InputFieldSelectableStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InputFieldSelectableStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::InputFieldSelectableStateController* GlobalNamespace::InputFieldSelectableStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InputFieldSelectableStateController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputFieldSelectableStateController::InputFieldSelectableStateController() {}
