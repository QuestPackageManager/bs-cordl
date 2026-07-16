#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSettingsPanelController.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPresetDropdown_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpStartBeatOffsetDropdown_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout::PlayerSettingsPanelController_PlayerSettingsPanelLayout(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout::PlayerSettingsPanelController_PlayerSettingsPanelLayout() {}
constexpr ::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout::Singleplayer{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout::Multiplayer{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.add_didChangePlayerSettingsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59449ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "add_didChangePlayerSettingsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.remove_didChangePlayerSettingsEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5945994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                                                           { "remove_didChangePlayerSettingsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.get_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5943bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "get_playerSpecificSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59447f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout)>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetLayout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x594408c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                             { "SetLayout", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5945aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::OnEnable)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x5945b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59460cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5946104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.UnsubscribeAllUICallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59460d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "UnsubscribeAllUICallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.Refresh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x59454c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "Refresh", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleSFXVolumeSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5946228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                            { "HandleSFXVolumeSettingsControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleArcVisibilityDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::ArcVisibilityType)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5946270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                { "HandleArcVisibilityDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcVisibilityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleSaberTrailIntensitySettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59462d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
            { "HandleSaberTrailIntensitySettingsControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandlePlayerHeightSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59462f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                                                           { "HandlePlayerHeightSettingsControllerValueDidChange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleHeadsetHapticIntensityControllerValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleHeadsetHapticIntensityControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5946318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                         { "HandleHeadsetHapticIntensityControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpStartBeatOffsetPositionSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x594633c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                             { "HandleNoteJumpStartBeatOffsetPositionSelected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleLightReductionAmountSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::EnvironmentEffectsFilterPreset)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5946360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                { "HandleLightReductionAmountSelected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EnvironmentEffectsFilterPreset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleAdvancedHudToggleChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5946384;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "HandleAdvancedHudToggleChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::NoteJumpDurationTypeSettings)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59463d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                         { "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteJumpDurationTypeSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpFixedDurationSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5946410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
            { "HandleNoteJumpFixedDurationSettingsControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoTextsAndHudsToggleChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5946434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "HandleNoTextsAndHudsToggleChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetIsDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::SetIsDirty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x594624c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "SetIsDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.RefreshNoteJumpUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::NoteJumpDurationTypeSettings)>(
    &::GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5946108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                                                           { "RefreshNoteJumpUI", {}, { ::i2c::type_of<::GlobalNamespace::NoteJumpDurationTypeSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetSectionDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::UnityEngine::CanvasGroup*, bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5945a40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                                                           { "SetSectionDisabled", {}, { ::i2c::type_of<::UnityEngine::CanvasGroup*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.RefreshArcsWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::ArcVisibilityType, bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5946140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                             { "RefreshArcsWarning", {}, { ::i2c::type_of<::GlobalNamespace::ArcVisibilityType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5946484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59464e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_0", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5946508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_1", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x594652c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_2", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5946550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_3", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_4)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5946574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_4", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_5
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_5)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5946598;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_5", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_6
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_6)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x59465dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_6", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_7
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_7)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x5946600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_7", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_8
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(&::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_8)> {
  constexpr static std::size_t size = 0x648;
  constexpr static std::size_t addrs = 0x5946b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_8", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__leftHandedToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandedToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__leftHandedToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandedToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__leftHandedToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandedToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__reduceDebrisToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reduceDebrisToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__reduceDebrisToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reduceDebrisToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__reduceDebrisToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reduceDebrisToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noTextsAndHudsToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noTextsAndHudsToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noTextsAndHudsToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noTextsAndHudsToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__noTextsAndHudsToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noTextsAndHudsToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__advanceHudToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advanceHudToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__advanceHudToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____advanceHudToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__advanceHudToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____advanceHudToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightSettingsController>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__playerHeightSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightSettingsController;
}
constexpr ::UnityW<::GlobalNamespace::PlayerHeightSettingsController> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__playerHeightSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightSettingsController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__playerHeightSettingsController(::UnityW<::GlobalNamespace::PlayerHeightSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeightSettingsController = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__playerHeightSettingsCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightSettingsCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__playerHeightSettingsCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerHeightSettingsCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__playerHeightSettingsCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerHeightSettingsCanvasGroup = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__automaticPlayerHeightToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____automaticPlayerHeightToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__automaticPlayerHeightToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____automaticPlayerHeightToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__automaticPlayerHeightToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____automaticPlayerHeightToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__sfxVolumeSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolumeSettingsController;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__sfxVolumeSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sfxVolumeSettingsController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__sfxVolumeSettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sfxVolumeSettingsController = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__saberTrailIntensitySettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTrailIntensitySettingsController;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__saberTrailIntensitySettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberTrailIntensitySettingsController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__saberTrailIntensitySettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberTrailIntensitySettingsController = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpDurationTypeSettingsDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpDurationTypeSettingsDropdown;
}
constexpr ::UnityW<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpDurationTypeSettingsDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpDurationTypeSettingsDropdown;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__noteJumpDurationTypeSettingsDropdown(::UnityW<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpDurationTypeSettingsDropdown = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpFixedDurationSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpFixedDurationSettingsController;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const&
GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpFixedDurationSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpFixedDurationSettingsController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__noteJumpFixedDurationSettingsController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpFixedDurationSettingsController = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpFixedDurationSettingsCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpFixedDurationSettingsCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpFixedDurationSettingsCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpFixedDurationSettingsCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__noteJumpFixedDurationSettingsCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpFixedDurationSettingsCanvasGroup = value;
}
constexpr ::UnityW<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpStartBeatOffsetDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffsetDropdown;
}
constexpr ::UnityW<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpStartBeatOffsetDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffsetDropdown;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__noteJumpStartBeatOffsetDropdown(::UnityW<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffsetDropdown = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpStartBeatOffsetCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffsetCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__noteJumpStartBeatOffsetCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffsetCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__noteJumpStartBeatOffsetCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffsetCanvasGroup = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__environmentEffectsFilterDefaultPresetDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentEffectsFilterDefaultPresetDropdown;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> const&
GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__environmentEffectsFilterDefaultPresetDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentEffectsFilterDefaultPresetDropdown;
}
constexpr void
GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__environmentEffectsFilterDefaultPresetDropdown(::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentEffectsFilterDefaultPresetDropdown = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown>&
GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__environmentEffectsFilterExpertPlusPresetDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentEffectsFilterExpertPlusPresetDropdown;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> const&
GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__environmentEffectsFilterExpertPlusPresetDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentEffectsFilterExpertPlusPresetDropdown;
}
constexpr void
GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__environmentEffectsFilterExpertPlusPresetDropdown(::UnityW<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentEffectsFilterExpertPlusPresetDropdown = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__hideNoteSpawnEffectToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideNoteSpawnEffectToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__hideNoteSpawnEffectToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideNoteSpawnEffectToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__hideNoteSpawnEffectToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideNoteSpawnEffectToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__adaptiveSfxToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adaptiveSfxToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__adaptiveSfxToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____adaptiveSfxToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__adaptiveSfxToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____adaptiveSfxToggle = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__autoRestartToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoRestartToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__autoRestartToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____autoRestartToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__autoRestartToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____autoRestartToggle = value;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__headsetHapticIntensityController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headsetHapticIntensityController;
}
constexpr ::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__headsetHapticIntensityController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headsetHapticIntensityController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__headsetHapticIntensityController(::UnityW<::GlobalNamespace::FormattedFloatListSettingsController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headsetHapticIntensityController = value;
}
constexpr ::UnityW<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__arcsVisibilityTypeSettingsDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcsVisibilityTypeSettingsDropdown;
}
constexpr ::UnityW<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__arcsVisibilityTypeSettingsDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcsVisibilityTypeSettingsDropdown;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__arcsVisibilityTypeSettingsDropdown(::UnityW<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcsVisibilityTypeSettingsDropdown = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__arcHapticFeedbackCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHapticFeedbackCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__arcHapticFeedbackCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcHapticFeedbackCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__arcHapticFeedbackCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcHapticFeedbackCanvasGroup = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__arcsHapticFeedbackToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcsHapticFeedbackToggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__arcsHapticFeedbackToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcsHapticFeedbackToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__arcsHapticFeedbackToggle(::UnityW<::UnityEngine::UI::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcsHapticFeedbackToggle = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__singleplayerOnlyCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleplayerOnlyCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__singleplayerOnlyCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____singleplayerOnlyCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__singleplayerOnlyCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____singleplayerOnlyCanvasGroup = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__arcVisibilityWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcVisibilityWarning;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__arcVisibilityWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arcVisibilityWarning;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__arcVisibilityWarning(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____arcVisibilityWarning = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get_didChangePlayerSettingsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangePlayerSettingsEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get_didChangePlayerSettingsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didChangePlayerSettingsEvent;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set_didChangePlayerSettingsEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didChangePlayerSettingsEvent = value;
}
constexpr ::GlobalNamespace::ArcVisibilityType& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__currentArcType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentArcType;
}
constexpr ::GlobalNamespace::ArcVisibilityType const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__currentArcType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentArcType;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__currentArcType(::GlobalNamespace::ArcVisibilityType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentArcType = value;
}
constexpr ::GlobalNamespace::PlayerData*& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerData;
}
constexpr ::GlobalNamespace::PlayerData* const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerData;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__playerData(::GlobalNamespace::PlayerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerData = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerSpecificSettings = value;
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr ::HMUI::ToggleBinder* const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____toggleBinder = value;
}
constexpr bool& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty;
}
constexpr bool const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dirty;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__dirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dirty = value;
}
constexpr bool& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__refreshed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshed;
}
constexpr bool const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__refreshed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____refreshed;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__refreshed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____refreshed = value;
}
constexpr ::GlobalNamespace::EventBinder*& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__eventBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr ::GlobalNamespace::EventBinder* const& GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_get__eventBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventBinder;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__cordl_internal_set__eventBinder(::GlobalNamespace::EventBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventBinder = value;
}
inline void GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "add_didChangePlayerSettingsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "remove_didChangePlayerSettingsEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "get_playerSpecificSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetData(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "SetData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetLayout(::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout layout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                           { "SetLayout", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layout);
}
inline void GlobalNamespace::PlayerSettingsPanelController::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "UnsubscribeAllUICallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "Refresh", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                            float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                          { "HandleSFXVolumeSettingsControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx(int32_t idx, ::GlobalNamespace::ArcVisibilityType arcVisibilityType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                              { "HandleArcVisibilityDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ArcVisibilityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, arcVisibilityType);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                                      float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
          { "HandleSaberTrailIntensitySettingsControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                                                         { "HandlePlayerHeightSettingsControllerValueDidChange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleHeadsetHapticIntensityControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                                 float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                          { "HandleHeadsetHapticIntensityControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected(int32_t idx, float_t startBeatOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                           { "HandleNoteJumpStartBeatOffsetPositionSelected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, startBeatOffset);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected(int32_t obj, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                              { "HandleLightReductionAmountSelected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::EnvironmentEffectsFilterPreset>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obj, environmentEffectsFilterPreset);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged(bool on) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "HandleAdvancedHudToggleChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void
GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx(int32_t idx,
                                                                                                               ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                          { "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteJumpDurationTypeSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, noteJumpDurationTypeSettings);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange(
    ::GlobalNamespace::FormattedFloatListSettingsController* formattedFloatListSettingsController, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
          { "HandleNoteJumpFixedDurationSettingsControllerValueDidChange", {}, { ::i2c::type_of<::GlobalNamespace::FormattedFloatListSettingsController*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, formattedFloatListSettingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged(bool on) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "HandleNoTextsAndHudsToggleChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetIsDirty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "SetIsDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI(::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                                                         { "RefreshNoteJumpUI", {}, { ::i2c::type_of<::GlobalNamespace::NoteJumpDurationTypeSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, noteJumpDurationTypeSettings);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled(::UnityEngine::CanvasGroup* sectionCanvasGroup, bool disable) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                                                         { "SetSectionDisabled", {}, { ::i2c::type_of<::UnityEngine::CanvasGroup*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sectionCanvasGroup, disable);
}
inline void GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool forceRebuild) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(),
                                                           { "RefreshArcsWarning", {}, { ::i2c::type_of<::GlobalNamespace::ArcVisibilityType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arcVisibilityType, forceRebuild);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_0(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_0", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_1(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_1", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_2(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_2", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_3(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_3", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_4(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_4", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_5(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_5", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_6(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_6", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_7() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_7", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_8() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSettingsPanelController*>(), { "<OnEnable>b__42_8", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSettingsPanelController* GlobalNamespace::PlayerSettingsPanelController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerSettingsPanelController*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr GlobalNamespace::PlayerSettingsPanelController::operator ::GlobalNamespace::IRefreshable*() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRefreshable"
constexpr ::GlobalNamespace::IRefreshable* GlobalNamespace::PlayerSettingsPanelController::i___GlobalNamespace__IRefreshable() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSettingsPanelController::PlayerSettingsPanelController() {}
