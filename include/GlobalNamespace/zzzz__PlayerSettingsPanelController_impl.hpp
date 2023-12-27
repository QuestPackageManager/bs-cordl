#pragma once
#include "GlobalNamespace/zzzz__ArcVisibilityType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSettingsPanelController_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpStartBeatOffsetDropdown_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPresetDropdown_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettingsDropdown_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__EventBinder_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__IRefreshable_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeightSettingsController_def.hpp"
#include "HMUI/zzzz__ToggleBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::__PlayerSettingsPanelController__PlayerSettingsPanelLayout(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::__PlayerSettingsPanelController__PlayerSettingsPanelLayout() {}
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::All{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::Singleplayer{ static_cast<int32_t>(
    0x1) };
constexpr ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout::Multiplayer{ static_cast<int32_t>(
    0x2) };
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.add_didChangePlayerSettingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b2da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "add_didChangePlayerSettingsEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.remove_didChangePlayerSettingsEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x22b3be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "remove_didChangePlayerSettingsEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.get_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x22b1f80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "get_playerSpecificSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::PlayerData*)>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetData)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b2c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout)>(&::GlobalNamespace::PlayerSettingsPanelController::SetLayout)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b24b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22b3ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::OnEnable)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x22b3d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22b4118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22b4150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.UnsubscribeAllUICallbacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22b411c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "UnsubscribeAllUICallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.Refresh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::Refresh)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x22b37c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "Refresh", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleSFXVolumeSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleSFXVolumeSettingsControllerValueDidChange",
                                    std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleArcVisibilityDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::ArcVisibilityType)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x22b42b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                 "HandleArcVisibilityDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleSaberTrailIntensitySettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                    "HandleSaberTrailIntensitySettingsControllerValueDidChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandlePlayerHeightSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b433c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "HandlePlayerHeightSettingsControllerValueDidChange", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleHeadsetHapticIntensityControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleHeadsetHapticIntensityControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                    "HandleHeadsetHapticIntensityControllerValueDidChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpStartBeatOffsetPositionSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, float_t)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleNoteJumpStartBeatOffsetPositionSelected", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleLightReductionAmountSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    int32_t, ::GlobalNamespace::EnvironmentEffectsFilterPreset)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b43a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleLightReductionAmountSelected", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentEffectsFilterPreset>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleAdvancedHudToggleChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22b43cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleAdvancedHudToggleChanged",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(int32_t, ::GlobalNamespace::NoteJumpDurationTypeSettings)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22b441c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                 "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoteJumpFixedDurationSettingsControllerValueDidChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(
    ::GlobalNamespace::FormattedFloatListSettingsController*, float_t)>(&::GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                    "HandleNoteJumpFixedDurationSettingsControllerValueDidChange", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.HandleNoTextsAndHudsToggleChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22b447c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleNoTextsAndHudsToggleChanged",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetIsDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetIsDirty)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "SetIsDirty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.RefreshNoteJumpUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::NoteJumpDurationTypeSettings)>(
    &::GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22b4154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "RefreshNoteJumpUI", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.SetSectionDisabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::UnityEngine::CanvasGroup*, bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22b3c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetSectionDisabled", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController.RefreshArcsWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(::GlobalNamespace::ArcVisibilityType, bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x22b4190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "RefreshArcsWarning", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22b44cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b4558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_1",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_2)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b457c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_2",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b45a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_3",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_4)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b45c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_4",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_5)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x22b45e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_5",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)(bool)>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_6)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x22b462c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_6",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_7)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x22b4650;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "<OnEnable>b__42_7", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSettingsPanelController._OnEnable_b__42_8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSettingsPanelController::*)()>(
    &::GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_8)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x22b4a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                               "<OnEnable>b__42_8", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IRefreshable"
constexpr GlobalNamespace::PlayerSettingsPanelController::operator ::GlobalNamespace::IRefreshable*() noexcept {
  return static_cast<::GlobalNamespace::IRefreshable*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__leftHandedToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____leftHandedToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__leftHandedToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____leftHandedToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__leftHandedToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftHandedToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__reduceDebrisToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____reduceDebrisToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__reduceDebrisToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____reduceDebrisToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__reduceDebrisToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reduceDebrisToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__noTextsAndHudsToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noTextsAndHudsToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__noTextsAndHudsToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noTextsAndHudsToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noTextsAndHudsToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noTextsAndHudsToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__advanceHudToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____advanceHudToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__advanceHudToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____advanceHudToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__advanceHudToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____advanceHudToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__autoRestartToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____autoRestartToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__autoRestartToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____autoRestartToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__autoRestartToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____autoRestartToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerHeightSettingsController*& GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerHeightSettingsController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeightSettingsController*> const& GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerHeightSettingsController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerHeightSettingsController(::GlobalNamespace::PlayerHeightSettingsController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightSettingsController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerHeightSettingsCanvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::PlayerSettingsPanelController::__get__playerHeightSettingsCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerHeightSettingsCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerHeightSettingsCanvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeightSettingsCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__automaticPlayerHeightToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____automaticPlayerHeightToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__automaticPlayerHeightToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____automaticPlayerHeightToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__automaticPlayerHeightToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____automaticPlayerHeightToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& GlobalNamespace::PlayerSettingsPanelController::__get__sfxVolumeSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sfxVolumeSettingsController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__sfxVolumeSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____sfxVolumeSettingsController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__sfxVolumeSettingsController(::GlobalNamespace::FormattedFloatListSettingsController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sfxVolumeSettingsController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& GlobalNamespace::PlayerSettingsPanelController::__get__saberTrailIntensitySettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberTrailIntensitySettingsController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__saberTrailIntensitySettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberTrailIntensitySettingsController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__saberTrailIntensitySettingsController(::GlobalNamespace::FormattedFloatListSettingsController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberTrailIntensitySettingsController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*& GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpDurationTypeSettingsDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpDurationTypeSettingsDropdown;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpDurationTypeSettingsDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpDurationTypeSettingsDropdown;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpDurationTypeSettingsDropdown(::GlobalNamespace::NoteJumpDurationTypeSettingsDropdown* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpDurationTypeSettingsDropdown)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpFixedDurationSettingsController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpFixedDurationSettingsController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpFixedDurationSettingsController(::GlobalNamespace::FormattedFloatListSettingsController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpFixedDurationSettingsController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpFixedDurationSettingsCanvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpFixedDurationSettingsCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpFixedDurationSettingsCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpFixedDurationSettingsCanvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpFixedDurationSettingsCanvasGroup)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*& GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpStartBeatOffsetDropdown;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::NoteJumpStartBeatOffsetDropdown*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpStartBeatOffsetDropdown;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpStartBeatOffsetDropdown(::GlobalNamespace::NoteJumpStartBeatOffsetDropdown* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpStartBeatOffsetDropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpStartBeatOffsetCanvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::PlayerSettingsPanelController::__get__noteJumpStartBeatOffsetCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noteJumpStartBeatOffsetCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__noteJumpStartBeatOffsetCanvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noteJumpStartBeatOffsetCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*& GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterDefaultPresetDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentEffectsFilterDefaultPresetDropdown;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterDefaultPresetDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentEffectsFilterDefaultPresetDropdown;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__environmentEffectsFilterDefaultPresetDropdown(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentEffectsFilterDefaultPresetDropdown)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*& GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterExpertPlusPresetDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentEffectsFilterExpertPlusPresetDropdown;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__environmentEffectsFilterExpertPlusPresetDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____environmentEffectsFilterExpertPlusPresetDropdown;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__environmentEffectsFilterExpertPlusPresetDropdown(::GlobalNamespace::EnvironmentEffectsFilterPresetDropdown* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentEffectsFilterExpertPlusPresetDropdown)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__hideNoteSpawnEffectToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hideNoteSpawnEffectToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__hideNoteSpawnEffectToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hideNoteSpawnEffectToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__hideNoteSpawnEffectToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hideNoteSpawnEffectToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__adaptiveSfxToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____adaptiveSfxToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__adaptiveSfxToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____adaptiveSfxToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__adaptiveSfxToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____adaptiveSfxToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FormattedFloatListSettingsController*& GlobalNamespace::PlayerSettingsPanelController::__get__headsetHapticIntensityController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____headsetHapticIntensityController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FormattedFloatListSettingsController*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__headsetHapticIntensityController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____headsetHapticIntensityController;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__headsetHapticIntensityController(::GlobalNamespace::FormattedFloatListSettingsController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____headsetHapticIntensityController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*& GlobalNamespace::PlayerSettingsPanelController::__get__arcsVisibilityTypeSettingsDropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arcsVisibilityTypeSettingsDropdown;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*> const&
GlobalNamespace::PlayerSettingsPanelController::__get__arcsVisibilityTypeSettingsDropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arcsVisibilityTypeSettingsDropdown;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcsVisibilityTypeSettingsDropdown(::GlobalNamespace::ArcVisibilityTypeSettingsDropdown* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcsVisibilityTypeSettingsDropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::PlayerSettingsPanelController::__get__arcHapticFeedbackCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arcHapticFeedbackCanvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::PlayerSettingsPanelController::__get__arcHapticFeedbackCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arcHapticFeedbackCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcHapticFeedbackCanvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcHapticFeedbackCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Toggle*& GlobalNamespace::PlayerSettingsPanelController::__get__arcsHapticFeedbackToggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arcsHapticFeedbackToggle;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Toggle*> const& GlobalNamespace::PlayerSettingsPanelController::__get__arcsHapticFeedbackToggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arcsHapticFeedbackToggle;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcsHapticFeedbackToggle(::UnityEngine::UI::Toggle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcsHapticFeedbackToggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::CanvasGroup*& GlobalNamespace::PlayerSettingsPanelController::__get__singleplayerOnlyCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____singleplayerOnlyCanvasGroup;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& GlobalNamespace::PlayerSettingsPanelController::__get__singleplayerOnlyCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____singleplayerOnlyCanvasGroup;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__singleplayerOnlyCanvasGroup(::UnityEngine::CanvasGroup* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____singleplayerOnlyCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::PlayerSettingsPanelController::__get__arcVisibilityWarning() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arcVisibilityWarning;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::PlayerSettingsPanelController::__get__arcVisibilityWarning() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____arcVisibilityWarning;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__arcVisibilityWarning(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arcVisibilityWarning)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PlayerSettingsPanelController::__get_didChangePlayerSettingsEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didChangePlayerSettingsEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PlayerSettingsPanelController::__get_didChangePlayerSettingsEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didChangePlayerSettingsEvent;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set_didChangePlayerSettingsEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didChangePlayerSettingsEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ArcVisibilityType& GlobalNamespace::PlayerSettingsPanelController::__get__currentArcType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentArcType;
}
constexpr ::GlobalNamespace::ArcVisibilityType const& GlobalNamespace::PlayerSettingsPanelController::__get__currentArcType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____currentArcType;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__currentArcType(::GlobalNamespace::ArcVisibilityType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____currentArcType = value;
}
constexpr ::GlobalNamespace::PlayerData*& GlobalNamespace::PlayerSettingsPanelController::__get__playerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerData*> const& GlobalNamespace::PlayerSettingsPanelController::__get__playerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerData;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerData(::GlobalNamespace::PlayerData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::PlayerSettingsPanelController::__get__playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerSpecificSettings;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& GlobalNamespace::PlayerSettingsPanelController::__get__playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerSpecificSettings;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSpecificSettings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ToggleBinder*& GlobalNamespace::PlayerSettingsPanelController::__get__toggleBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____toggleBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ToggleBinder*> const& GlobalNamespace::PlayerSettingsPanelController::__get__toggleBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____toggleBinder;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__toggleBinder(::HMUI::ToggleBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____toggleBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerSettingsPanelController::__get__dirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dirty;
}
constexpr bool const& GlobalNamespace::PlayerSettingsPanelController::__get__dirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dirty;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__dirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____dirty = value;
}
constexpr bool& GlobalNamespace::PlayerSettingsPanelController::__get__refreshed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____refreshed;
}
constexpr bool const& GlobalNamespace::PlayerSettingsPanelController::__get__refreshed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____refreshed;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__refreshed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____refreshed = value;
}
constexpr ::GlobalNamespace::EventBinder*& GlobalNamespace::PlayerSettingsPanelController::__get__eventBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventBinder;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EventBinder*> const& GlobalNamespace::PlayerSettingsPanelController::__get__eventBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____eventBinder;
}
constexpr void GlobalNamespace::PlayerSettingsPanelController::__set__eventBinder(::GlobalNamespace::EventBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PlayerSettingsPanelController::add_didChangePlayerSettingsEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "add_didChangePlayerSettingsEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::remove_didChangePlayerSettingsEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "remove_didChangePlayerSettingsEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PlayerSettingsPanelController::get_playerSpecificSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "get_playerSpecificSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetData(::GlobalNamespace::PlayerData* playerData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerData);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetLayout(::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout layout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PlayerSettingsPanelController__PlayerSettingsPanelLayout>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, layout);
}
inline void GlobalNamespace::PlayerSettingsPanelController::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "OnEnable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::UnsubscribeAllUICallbacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "UnsubscribeAllUICallbacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::Refresh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "Refresh", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleSFXVolumeSettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                            float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleSFXVolumeSettingsControllerValueDidChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleArcVisibilityDropdownDidSelectCellWithIdx(int32_t idx, ::GlobalNamespace::ArcVisibilityType arcVisibilityType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleArcVisibilityDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, arcVisibilityType);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleSaberTrailIntensitySettingsControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                                      float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                               "HandleSaberTrailIntensitySettingsControllerValueDidChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandlePlayerHeightSettingsControllerValueDidChange(float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "HandlePlayerHeightSettingsControllerValueDidChange", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleHeadsetHapticIntensityControllerValueDidChange(::GlobalNamespace::FormattedFloatListSettingsController* settingsController,
                                                                                                                 float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                               "HandleHeadsetHapticIntensityControllerValueDidChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, settingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpStartBeatOffsetPositionSelected(int32_t idx, float_t startBeatOffset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleNoteJumpStartBeatOffsetPositionSelected", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, startBeatOffset);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleLightReductionAmountSelected(int32_t obj, ::GlobalNamespace::EnvironmentEffectsFilterPreset environmentEffectsFilterPreset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleLightReductionAmountSelected", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentEffectsFilterPreset>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, environmentEffectsFilterPreset);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleAdvancedHudToggleChanged(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleAdvancedHudToggleChanged",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void
GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx(int32_t idx,
                                                                                                               ::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                               "HandleNoteJumpDurationTypeSettingsDropdownDidSelectCellWithIdx", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, idx, noteJumpDurationTypeSettings);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoteJumpFixedDurationSettingsControllerValueDidChange(
    ::GlobalNamespace::FormattedFloatListSettingsController* formattedFloatListSettingsController, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                               "HandleNoteJumpFixedDurationSettingsControllerValueDidChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FormattedFloatListSettingsController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, formattedFloatListSettingsController, value);
}
inline void GlobalNamespace::PlayerSettingsPanelController::HandleNoTextsAndHudsToggleChanged(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "HandleNoTextsAndHudsToggleChanged",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetIsDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "SetIsDirty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::RefreshNoteJumpUI(::GlobalNamespace::NoteJumpDurationTypeSettings noteJumpDurationTypeSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "RefreshNoteJumpUI", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpDurationTypeSettings>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteJumpDurationTypeSettings);
}
inline void GlobalNamespace::PlayerSettingsPanelController::SetSectionDisabled(::UnityEngine::CanvasGroup* sectionCanvasGroup, bool disable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "SetSectionDisabled", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::CanvasGroup*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sectionCanvasGroup, disable);
}
inline void GlobalNamespace::PlayerSettingsPanelController::RefreshArcsWarning(::GlobalNamespace::ArcVisibilityType arcVisibilityType, bool forceRebuild) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "RefreshArcsWarning", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arcVisibilityType, forceRebuild);
}
inline ::GlobalNamespace::PlayerSettingsPanelController* GlobalNamespace::PlayerSettingsPanelController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerSettingsPanelController*>());
}
inline void GlobalNamespace::PlayerSettingsPanelController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_0(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_1(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_1",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_2(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_2",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_3(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_3",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_4(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_4",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_5(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_5",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_6(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(), "<OnEnable>b__42_6",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_7() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "<OnEnable>b__42_7", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerSettingsPanelController::_OnEnable_b__42_8() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSettingsPanelController*>::get(),
                                                                             "<OnEnable>b__42_8", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSettingsPanelController::PlayerSettingsPanelController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
