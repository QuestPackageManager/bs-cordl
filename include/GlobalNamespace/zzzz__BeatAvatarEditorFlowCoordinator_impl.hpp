#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatAvatarEditorFlowCoordinator.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_impl.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__BeatAvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarEditorFlowCoordinator_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__BeatAvatarEditorViewController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarColorViewController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarDataModel_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPart_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarVisualController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode)>(
    &::GlobalNamespace::BeatAvatarEditorFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3271e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::BeatAvatarEditorFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x3271ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x3272f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleBeatAvatarViewControllerDidRequestColorChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(::System::Action_1<::UnityEngine::Color>*, ::UnityEngine::Color, ::BeatSaber::BeatAvatarSDK::AvatarPart, int32_t)>(
        &::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarViewControllerDidRequestColorChange)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3273928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(),
                                                                                           { "HandleBeatAvatarViewControllerDidRequestColorChange",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                               ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleBeatAvatarViewControllerChangedAvatarPart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(::BeatSaber::BeatAvatarSDK::AvatarPart)>(
    &::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarViewControllerChangedAvatarPart)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3273a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(),
                                                             { "HandleBeatAvatarViewControllerChangedAvatarPart", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleBeatAvatarEditorViewCancelButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)()>(
    &::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarEditorViewCancelButtonWasPressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3273ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { "HandleBeatAvatarEditorViewCancelButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleBeatAvatarEditorViewOkButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)()>(
    &::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarEditorViewOkButtonWasPressed)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3273af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { "HandleBeatAvatarEditorViewOkButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleEditColorViewControllerDidChangedColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(::UnityEngine::Color)>(
    &::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleEditColorViewControllerDidChangedColor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3273b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(),
                                                                                           { "HandleEditColorViewControllerDidChangedColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.HandleEditColorViewControllerControllerDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleEditColorViewControllerControllerDidFinish)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3273b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(),
                                                                                           { "HandleEditColorViewControllerControllerDidFinish", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator.OneTimeInitialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)()>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::OneTimeInitialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3273c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { ::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatAvatarEditorFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatAvatarEditorFlowCoordinator::*)()>(&::GlobalNamespace::BeatAvatarEditorFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3273c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController>& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__avatarTweenController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTweenController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> const& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__avatarTweenController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarTweenController;
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__avatarTweenController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarTweenController = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__avatarContainerGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarContainerGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__avatarContainerGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarContainerGameObject;
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__avatarContainerGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarContainerGameObject = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController>& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__avatarVisualController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarVisualController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> const& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__avatarVisualController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarVisualController;
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__avatarVisualController(::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarVisualController = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>&
GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__beatAvatarEditorViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAvatarEditorViewController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const&
GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__beatAvatarEditorViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAvatarEditorViewController;
}
constexpr void
GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__beatAvatarEditorViewController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatAvatarEditorViewController = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController>&
GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__editAvatarColorViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarColorViewController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> const&
GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__editAvatarColorViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarColorViewController;
}
constexpr void
GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__editAvatarColorViewController(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editAvatarColorViewController = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel*& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__avatarDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarDataModel* const& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__avatarDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarDataModel;
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__avatarDataModel(::BeatSaber::BeatAvatarSDK::AvatarDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarDataModel = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>*&
GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__parameterChangedAnimationCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterChangedAnimationCallbacks;
}
constexpr ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>* const&
GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__parameterChangedAnimationCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameterChangedAnimationCallbacks;
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__parameterChangedAnimationCallbacks(
    ::System::Collections::Generic::Dictionary_2<::BeatSaber::BeatAvatarSDK::AvatarPart, ::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parameterChangedAnimationCallbacks = value;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__coloredAvatarPart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coloredAvatarPart;
}
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPart const& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__coloredAvatarPart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coloredAvatarPart;
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__coloredAvatarPart(::BeatSaber::BeatAvatarSDK::AvatarPart value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coloredAvatarPart = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__originalColorOfColoredPart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColorOfColoredPart;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_get__originalColorOfColoredPart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalColorOfColoredPart;
}
constexpr void GlobalNamespace::BeatAvatarEditorFlowCoordinator::__cordl_internal_set__originalColorOfColoredPart(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalColorOfColoredPart = value;
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::Setup(::BeatSaber::AvatarCore::AvatarEditorFlowCoordinator_EditMode editMode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, editMode);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarViewControllerDidRequestColorChange(::System::Action_1<::UnityEngine::Color>* colorCallback,
                                                                                                                  ::UnityEngine::Color currentColor, ::BeatSaber::BeatAvatarSDK::AvatarPart editPart,
                                                                                                                  int32_t uvSegment) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(),
                                                                                         { "HandleBeatAvatarViewControllerDidRequestColorChange",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Action_1<::UnityEngine::Color>*>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                                             ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorCallback, currentColor, editPart, uvSegment);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarViewControllerChangedAvatarPart(::BeatSaber::BeatAvatarSDK::AvatarPart avatarPart) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(),
                                                           { "HandleBeatAvatarViewControllerChangedAvatarPart", {}, { ::i2c::type_of<::BeatSaber::BeatAvatarSDK::AvatarPart>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, avatarPart);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarEditorViewCancelButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { "HandleBeatAvatarEditorViewCancelButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleBeatAvatarEditorViewOkButtonWasPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { "HandleBeatAvatarEditorViewOkButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleEditColorViewControllerDidChangedColor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(),
                                                                                         { "HandleEditColorViewControllerDidChangedColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::HandleEditColorViewControllerControllerDidFinish(bool apply) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(),
                                                                                         { "HandleEditColorViewControllerControllerDidFinish", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, apply);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::OneTimeInitialize() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatAvatarEditorFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatAvatarEditorFlowCoordinator* GlobalNamespace::BeatAvatarEditorFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatAvatarEditorFlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatAvatarEditorFlowCoordinator::BeatAvatarEditorFlowCoordinator() {}
