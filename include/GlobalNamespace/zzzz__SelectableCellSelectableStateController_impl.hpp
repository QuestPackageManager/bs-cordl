#pragma once
// IWYU pragma private; include "GlobalNamespace\SelectableCellSelectableStateController.hpp"
#include "GlobalNamespace/zzzz__SelectableStateController_1_impl.hpp"
#include "GlobalNamespace/zzzz__SelectableCellSelectableStateController_def.hpp"
#include "HMUI/zzzz__Interactable_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectableCellSelectableStateController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableCellSelectableStateController::*)()>(&::GlobalNamespace::SelectableCellSelectableStateController::OnEnable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6446578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableCellSelectableStateController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableCellSelectableStateController::*)()>(
    &::GlobalNamespace::SelectableCellSelectableStateController::OnDisable)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6446754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableCellSelectableStateController.HandleSelectableCellInteractableDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableCellSelectableStateController::*)(::HMUI::Interactable*, bool)>(
    &::GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellInteractableDidChange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x64468ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(),
                                                             { "HandleSelectableCellInteractableDidChange", {}, { ::i2c::type_of<::HMUI::Interactable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableCellSelectableStateController.HandleSelectableCellHighlightDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableCellSelectableStateController::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellHighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6446940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(),
                                         { "HandleSelectableCellHighlightDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableCellSelectableStateController.HandleSelectableCellSelectionStateDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableCellSelectableStateController::*)(
    ::HMUI::SelectableCell*, ::HMUI::SelectableCell_TransitionType, ::System::Object*)>(&::GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellSelectionStateDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6446944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(),
                                                { "HandleSelectableCellSelectionStateDidChange",
                                                  {},
                                                  { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableCellSelectableStateController.ResolveState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableCellSelectableStateController::*)(::HMUI::SelectableCell*, ::HMUI::SelectableCell_TransitionType)>(
    &::GlobalNamespace::SelectableCellSelectableStateController::ResolveState)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x64466e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(),
                                                             { "ResolveState", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SelectableCellSelectableStateController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SelectableCellSelectableStateController::*)()>(&::GlobalNamespace::SelectableCellSelectableStateController::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6446948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SelectableCellSelectableStateController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectableCellSelectableStateController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellInteractableDidChange(::HMUI::Interactable* interactableCell, bool interactable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(),
                                                           { "HandleSelectableCellInteractableDidChange", {}, { ::i2c::type_of<::HMUI::Interactable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactableCell, interactable);
}
inline void GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellHighlightDidChange(::HMUI::SelectableCell* selectableCell,
                                                                                                             ::HMUI::SelectableCell_TransitionType transitionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(),
                                       { "HandleSelectableCellHighlightDidChange", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell, transitionType);
}
inline void GlobalNamespace::SelectableCellSelectableStateController::HandleSelectableCellSelectionStateDidChange(::HMUI::SelectableCell* selectableCell,
                                                                                                                  ::HMUI::SelectableCell_TransitionType transitionType, ::System::Object* owner) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(),
                                              { "HandleSelectableCellSelectionStateDidChange",
                                                {},
                                                { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell, transitionType, owner);
}
inline void GlobalNamespace::SelectableCellSelectableStateController::ResolveState(::HMUI::SelectableCell* selectableCell, ::HMUI::SelectableCell_TransitionType transitionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(),
                                                           { "ResolveState", {}, { ::i2c::type_of<::HMUI::SelectableCell*>(), ::i2c::type_of<::HMUI::SelectableCell_TransitionType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectableCell, transitionType);
}
inline void GlobalNamespace::SelectableCellSelectableStateController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SelectableCellSelectableStateController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SelectableCellSelectableStateController* GlobalNamespace::SelectableCellSelectableStateController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SelectableCellSelectableStateController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectableCellSelectableStateController::SelectableCellSelectableStateController() {}
