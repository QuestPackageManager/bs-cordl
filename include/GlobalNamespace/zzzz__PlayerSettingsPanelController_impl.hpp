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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5810ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "add_didChangePlayerSettingsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.remove_didChangePlayerSettingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5811a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "remove_didChangePlayerSettingsEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.get_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x580fcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "get_playerSpecificSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58108b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout)>(&::GlobalNamespace::PlayerSettingsPanelController::SetLayout)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5810150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5811b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "Awake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::OnEnable)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x5811bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5812194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58121cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.UnsubscribeAllUICallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5812198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "UnsubscribeAllUICallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5811588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "Refresh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleSFXVolumeSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58122f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleSFXVolumeSettingsControllerValueDidChange",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleArcVisibilityDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::ArcVisibilityType)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5812338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                 "HandleArcVisibilityDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleSaberTrailIntensitySettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5812398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                    "HandleSaberTrailIntensitySettingsControllerValueDidChange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandlePlayerHeightSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58123bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "HandlePlayerHeightSettingsControllerValueDidChange", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleHeadsetHapticIntensityControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleHeadsetHapticIntensityControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58123e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                    "HandleHeadsetHapticIntensityControllerValueDidChange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpStartBeatOffsetPositionSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5812404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleNoteJumpStartBeatOffsetPositionSelected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleLightReductionAmountSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    int32_t, ::GlobalNamespace::EnvironmentEffectsFilterPreset)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5812428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleLightReductionAmountSelected",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentEffectsFilterPreset>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleAdvancedHudToggleChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x581244c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleAdvancedHudToggleChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::NoteJumpDurationTypeSettings)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x581249c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                 "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpFixedDurationSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58124d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                    "HandleNoteJumpFixedDurationSettingsControllerValueDidChange", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoTextsAndHudsToggleChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58124fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleNoTextsAndHudsToggleChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetIsDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetIsDirty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5812314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "SetIsDirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.RefreshNoteJumpUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::NoteJumpDurationTypeSettings)>(
    &::GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58121d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "RefreshNoteJumpUI", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetSectionDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::UnityEngine::CanvasGroup*, bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5811b08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetSectionDisabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.RefreshArcsWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::ArcVisibilityType, bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5812208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "RefreshArcsWarning", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x581254c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58125ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58125d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58125f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_2",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5812618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_3",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_4)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x581263c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_4",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_5)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5812660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_5",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_6)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58126a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_6",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_7)> {
  constexpr static std::size_t size = 0x534;
  constexpr static std::size_t addrs = 0x58126c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "<OnEnable>b__42_7", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_8)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x5812bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "<OnEnable>b__42_8", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHandedToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reduceDebrisToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noTextsAndHudsToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____advanceHudToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightSettingsController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightSettingsCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____automaticPlayerHeightToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sfxVolumeSettingsController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberTrailIntensitySettingsController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpDurationTypeSettingsDropdown)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpFixedDurationSettingsController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpFixedDurationSettingsCanvasGroup)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpStartBeatOffsetDropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpStartBeatOffsetCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentEffectsFilterDefaultPresetDropdown)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentEffectsFilterExpertPlusPresetDropdown)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hideNoteSpawnEffectToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adaptiveSfxToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____autoRestartToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headsetHapticIntensityController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcsVisibilityTypeSettingsDropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcHapticFeedbackCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcsHapticFeedbackToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singleplayerOnlyCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcVisibilityWarning)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangePlayerSettingsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggleBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "add_didChangePlayerSettingsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "remove_didChangePlayerSettingsEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "get_playerSpecificSettings", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetData(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetLayout(::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSettingsPanelController_PlayerSettingsPanelLayout>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout);
}
inline void GlobalNamespace::PlayerSettingsPanelController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "OnEnable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "UnsubscribeAllUICallbacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "Refresh", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                            float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleSFXVolumeSettingsControllerValueDidChange",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx(int32_t idx, ::GlobalNamespace::ArcVisibilityType arcVisibilityType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                               "HandleArcVisibilityDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, arcVisibilityType);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                                      float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                  "HandleSaberTrailIntensitySettingsControllerValueDidChange", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "HandlePlayerHeightSettingsControllerValueDidChange", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleHeadsetHapticIntensityControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                                 float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                  "HandleHeadsetHapticIntensityControllerValueDidChange", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected(int32_t idx, float_t startBeatOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleNoteJumpStartBeatOffsetPositionSelected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, startBeatOffset);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected(int32_t obj, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleLightReductionAmountSelected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentEffectsFilterPreset>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, environmentEffectsFilterPreset);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleAdvancedHudToggleChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void
GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx(int32_t idx,
                                                                                                               ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                               "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, noteJumpDurationTypeSettings);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange(
    ::GlobalNamespace::FormattedFloatListSettingsController* formattedFloatListSettingsController, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                  "HandleNoteJumpFixedDurationSettingsControllerValueDidChange", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, formattedFloatListSettingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleNoTextsAndHudsToggleChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetIsDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "SetIsDirty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI(::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "RefreshNoteJumpUI", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteJumpDurationTypeSettings);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled(::UnityEngine::CanvasGroup* sectionCanvasGroup, bool disable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetSectionDisabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sectionCanvasGroup, disable);
}
inline void GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool forceRebuild) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "RefreshArcsWarning", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arcVisibilityType, forceRebuild);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_0(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_1(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_2(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_2",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_3(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_3",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_4(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_4",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_5(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_5",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_6(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_6",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "<OnEnable>b__42_7", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_8() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "<OnEnable>b__42_8", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSettingsPanelController* GlobalNamespace::PlayerSettingsPanelController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PlayerSettingsPanelController*>());
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
