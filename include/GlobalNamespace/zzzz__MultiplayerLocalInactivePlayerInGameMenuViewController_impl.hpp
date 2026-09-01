#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLocalInactivePlayerInGameMenuViewController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalInactivePlayerInGameMenuViewController_def.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectPromptView_def.hpp"
#include "GlobalNamespace/zzzz__LevelBar_def.hpp"
#include "GlobalNamespace/zzzz__LocalPlayerInGameMenuInitData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLocalPlayerDisconnectHelper_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "Tweening/zzzz__Tween_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnEnable)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x59b1a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnDisable)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x59b1bf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::Start)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59b1cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnDestroy)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x59b1e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController.DisconnectButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::DisconnectButtonPressed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59b1fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "DisconnectButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController.DetailsToggleValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)(bool)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::DetailsToggleValueChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59b1ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                           { "DetailsToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController.HandleDisconnectPromptViewDidViewFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)(bool)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::HandleDisconnectPromptViewDidViewFinish)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x59b2014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                           { "HandleDisconnectPromptViewDidViewFinish", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController.HandleStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)(::GlobalNamespace::MultiplayerController_State)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::HandleStateChanged)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x59b20e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                           { "HandleStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x59b235c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController._HandleDisconnectPromptViewDidViewFinish_b__22_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::_HandleDisconnectPromptViewDidViewFinish_b__22_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59b23ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                           { "<HandleDisconnectPromptViewDidViewFinish>b__22_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController._HandleStateChanged_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)(float_t)>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::_HandleStateChanged_b__23_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59b2408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                           { "<HandleStateChanged>b__23_0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController._HandleStateChanged_b__23_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::*)()>(
    &::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::_HandleStateChanged_b__23_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59b2420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "<HandleStateChanged>b__23_1", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__disconnectButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__disconnectButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectButton;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__disconnectButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectButton = value;
}
constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__disconnectButtonLocalizedText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectButtonLocalizedText;
}
constexpr ::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> const&
GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__disconnectButtonLocalizedText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectButtonLocalizedText;
}
constexpr void
GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__disconnectButtonLocalizedText(::UnityW<::BGLib::Polyglot::LocalizedTextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectButtonLocalizedText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__detailsToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailsToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__detailsToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailsToggle;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__detailsToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detailsToggle = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__globalCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__globalCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____globalCanvasGroup;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__globalCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____globalCanvasGroup = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__mainBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainBar;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__mainBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainBar;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__mainBar(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainBar = value;
}
constexpr ::UnityW<::GlobalNamespace::DisconnectPromptView>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__disconnectPromptView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectPromptView;
}
constexpr ::UnityW<::GlobalNamespace::DisconnectPromptView> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__disconnectPromptView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectPromptView;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__disconnectPromptView(::UnityW<::GlobalNamespace::DisconnectPromptView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectPromptView = value;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__levelBar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr ::UnityW<::GlobalNamespace::LevelBar> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__levelBar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelBar;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__levelBar(::UnityW<::GlobalNamespace::LevelBar> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelBar = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__dontOwnSongGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dontOwnSongGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__dontOwnSongGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dontOwnSongGameObject;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__dontOwnSongGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dontOwnSongGameObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__detailsGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailsGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__detailsGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailsGameObject;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__detailsGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detailsGameObject = value;
}
constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData*& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__localPlayerInGameMenuInitData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerInGameMenuInitData;
}
constexpr ::GlobalNamespace::LocalPlayerInGameMenuInitData* const&
GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__localPlayerInGameMenuInitData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localPlayerInGameMenuInitData;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__localPlayerInGameMenuInitData(::GlobalNamespace::LocalPlayerInGameMenuInitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____localPlayerInGameMenuInitData = value;
}
constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__disconnectHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectHelper;
}
constexpr ::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__disconnectHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectHelper;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__disconnectHelper(::GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disconnectHelper = value;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__multiplayerController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerController> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__multiplayerController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerController;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__multiplayerController(::UnityW<::GlobalNamespace::MultiplayerController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerController = value;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager>& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__tweeningManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::TimeTweeningManager> const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__tweeningManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tweeningManager;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tweeningManager = value;
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
constexpr ::Tweening::Tween*& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__fadeOutTween() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr ::Tweening::Tween* const& GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_get__fadeOutTween() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeOutTween;
}
constexpr void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::__cordl_internal_set__fadeOutTween(::Tweening::Tween* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeOutTween = value;
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnEnable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnDisable() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::Start() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::OnDestroy() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::DisconnectButtonPressed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "DisconnectButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::DetailsToggleValueChanged(bool isOn) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                         { "DetailsToggleValueChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::HandleDisconnectPromptViewDidViewFinish(bool disconnect) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                         { "HandleDisconnectPromptViewDidViewFinish", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnect);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::HandleStateChanged(::GlobalNamespace::MultiplayerController_State state) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                         { "HandleStateChanged", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerController_State>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::_HandleDisconnectPromptViewDidViewFinish_b__22_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "<HandleDisconnectPromptViewDidViewFinish>b__22_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::_HandleStateChanged_b__23_0(float_t val) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(),
                                                                                         { "<HandleStateChanged>b__23_0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::_HandleStateChanged_b__23_1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>(), { "<HandleStateChanged>b__23_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController* GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLocalInactivePlayerInGameMenuViewController::MultiplayerLocalInactivePlayerInGameMenuViewController() {}
