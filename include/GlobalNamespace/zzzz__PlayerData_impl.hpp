#pragma once
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "GlobalNamespace/zzzz__UserAgeCategory_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLevelStatsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAgreements_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAllOverallStatsData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__PlayerMissionStatsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__MissionHelpSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__UserAgeCategory_def.hpp"
#include "GlobalNamespace/zzzz__LevelKey_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSettings_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_playerId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_playerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_playerName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::set_playerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_shouldShowTutorialPrompt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_shouldShowTutorialPrompt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_shouldShowTutorialPrompt", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_shouldShowTutorialPrompt
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_shouldShowTutorialPrompt)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236be2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_shouldShowTutorialPrompt",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_shouldShow360Warning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_shouldShow360Warning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_shouldShow360Warning", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_shouldShow360Warning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_shouldShow360Warning)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236be40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_shouldShow360Warning", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_agreedToEula
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_agreedToEula)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_agreedToEula",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_agreedToEula
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_agreedToEula)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236be54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_agreedToEula", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_didSelectLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_didSelectLanguage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_didSelectLanguage",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_didSelectLanguage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_didSelectLanguage)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236be68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_didSelectLanguage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_agreedToMultiplayerDisclaimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_agreedToMultiplayerDisclaimer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_agreedToMultiplayerDisclaimer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_agreedToMultiplayerDisclaimer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_agreedToMultiplayerDisclaimer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236be7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_agreedToMultiplayerDisclaimer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_didSelectRegionVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_didSelectRegionVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_didSelectRegionVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_didSelectRegionVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(int32_t)>(&::GlobalNamespace::PlayerData::set_didSelectRegionVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_didSelectRegionVersion",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_selectedAvatarSystemTypeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_selectedAvatarSystemTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236be98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_selectedAvatarSystemTypeId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_selectedAvatarSystemTypeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::set_selectedAvatarSystemTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bea0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_selectedAvatarSystemTypeId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerAgreements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerAgreements* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_playerAgreements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_playerAgreements",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerAgreements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerAgreements*)>(
    &::GlobalNamespace::PlayerData::set_playerAgreements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236beb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerAgreements", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAgreements*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_lastSelectedBeatmapDifficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_lastSelectedBeatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236beb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_lastSelectedBeatmapDifficulty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_lastSelectedBeatmapDifficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::PlayerData::set_lastSelectedBeatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_lastSelectedBeatmapDifficulty", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_lastSelectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_lastSelectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_lastSelectedBeatmapCharacteristic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_lastSelectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::PlayerData::set_lastSelectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_lastSelectedBeatmapCharacteristic", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_gameplayModifiers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_gameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::PlayerData::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bee0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_gameplayModifiers", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_playerSpecificSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::PlayerData::set_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerSpecificSettings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_practiceSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PracticeSettings* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_practiceSettings",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_practiceSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PracticeSettings*)>(
    &::GlobalNamespace::PlayerData::set_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_practiceSettings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerAllOverallStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_playerAllOverallStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_playerAllOverallStatsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerAllOverallStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerAllOverallStatsData*)>(
    &::GlobalNamespace::PlayerData::set_playerAllOverallStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerAllOverallStatsData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAllOverallStatsData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_levelsStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* (
    ::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_levelsStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_levelsStatsData",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_levelsStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>*)>(&::GlobalNamespace::PlayerData::set_levelsStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_levelsStatsData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_missionsStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_missionsStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_missionsStatsData",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_missionsStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*)>(&::GlobalNamespace::PlayerData::set_missionsStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_missionsStatsData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_showedMissionHelpIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_showedMissionHelpIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_showedMissionHelpIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_showedMissionHelpIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PlayerData::set_showedMissionHelpIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_showedMissionHelpIds", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_guestPlayerNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_guestPlayerNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_guestPlayerNames",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_guestPlayerNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PlayerData::set_guestPlayerNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_guestPlayerNames", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_colorSchemesSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorSchemesSettings* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_colorSchemesSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_colorSchemesSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_colorSchemesSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::ColorSchemesSettings*)>(
    &::GlobalNamespace::PlayerData::set_colorSchemesSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_colorSchemesSettings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_overrideEnvironmentSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_overrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_overrideEnvironmentSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_overrideEnvironmentSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::OverrideEnvironmentSettings*)>(
    &::GlobalNamespace::PlayerData::set_overrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_overrideEnvironmentSettings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_favoritesLevelIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_favoritesLevelIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_favoritesLevelIds",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_favoritesLevelIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::GlobalNamespace::PlayerData::set_favoritesLevelIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_favoritesLevelIds", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_multiplayerModeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerModeSettings* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_multiplayerModeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_multiplayerModeSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_multiplayerModeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::MultiplayerModeSettings*)>(
    &::GlobalNamespace::PlayerData::set_multiplayerModeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_multiplayerModeSettings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_userAgeCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::UserAgeCategory (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_userAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bf98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_userAgeCategory",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_userAgeCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::UserAgeCategory)>(
    &::GlobalNamespace::PlayerData::set_userAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_userAgeCategory", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserAgeCategory>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_desiredSensitivityFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerSensitivityFlag (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_desiredSensitivityFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_desiredSensitivityFlag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_desiredSensitivityFlag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerSensitivityFlag)>(
    &::GlobalNamespace::PlayerData::set_desiredSensitivityFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bfb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_desiredSensitivityFlag", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_currentDlcPromoDisplayCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_currentDlcPromoDisplayCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bfb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "get_currentDlcPromoDisplayCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_currentDlcPromoDisplayCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(int32_t)>(&::GlobalNamespace::PlayerData::set_currentDlcPromoDisplayCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_currentDlcPromoDisplayCount",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_currentDlcPromoId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_currentDlcPromoId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bfc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_currentDlcPromoId",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_currentDlcPromoId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::set_currentDlcPromoId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236bfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_currentDlcPromoId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.add_favoriteLevelsSetDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerData::add_favoriteLevelsSetDidChangeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x236bfd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "add_favoriteLevelsSetDidChangeEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.remove_favoriteLevelsSetDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerData::remove_favoriteLevelsSetDidChangeEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x236c074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "remove_favoriteLevelsSetDidChangeEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.add_didIncreaseNumberOfGameplaysEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerData::add_didIncreaseNumberOfGameplaysEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x236c110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "add_didIncreaseNumberOfGameplaysEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.remove_didIncreaseNumberOfGameplaysEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(
    &::GlobalNamespace::PlayerData::remove_didIncreaseNumberOfGameplaysEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x236c1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "remove_didIncreaseNumberOfGameplaysEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(
    ::StringW, ::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::ColorSchemesSettings*, ::GlobalNamespace::OverrideEnvironmentSettings*)>(
    &::GlobalNamespace::PlayerData::_ctor)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x236c248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(
    ::StringW, ::StringW, bool, bool, bool, bool, bool, int32_t, ::StringW, ::GlobalNamespace::PlayerAgreements*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*,
    ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::PlayerAllOverallStatsData*,
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*,
    ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::ColorSchemesSettings*, ::GlobalNamespace::OverrideEnvironmentSettings*,
    ::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::MultiplayerModeSettings*, int32_t, ::StringW, ::GlobalNamespace::UserAgeCategory, ::GlobalNamespace::PlayerSensitivityFlag)>(
    &::GlobalNamespace::PlayerData::_ctor)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x236c518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAgreements*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAllOverallStatsData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserAgeCategory>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetNewDlcPromo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::SetNewDlcPromo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236c928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetNewDlcPromo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.IncreaseCurrentDlcPromoDisplayCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::IncreaseCurrentDlcPromoDisplayCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x236c934;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "IncreaseCurrentDlcPromoDisplayCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetPlayerLevelStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerLevelStatsData* (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::IDifficultyBeatmap*)>(
    &::GlobalNamespace::PlayerData::GetPlayerLevelStatsData)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x236c944;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "GetPlayerLevelStatsData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetPlayerLevelStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerLevelStatsData* (
    ::GlobalNamespace::PlayerData::*)(::StringW, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::PlayerData::GetPlayerLevelStatsData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x236cba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "GetPlayerLevelStatsData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetPlayerMissionStatsData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlayerMissionStatsData* (::GlobalNamespace::PlayerData::*)(::StringW)>(
    &::GlobalNamespace::PlayerData::GetPlayerMissionStatsData)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x236ccac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "GetPlayerMissionStatsData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.WasMissionHelpShowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::MissionHelpSO*)>(
    &::GlobalNamespace::PlayerData::WasMissionHelpShowed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x236cedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "WasMissionHelpShowed", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MissionHelpWasShowed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::MissionHelpSO*)>(
    &::GlobalNamespace::PlayerData::MissionHelpWasShowed)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x236cf38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MissionHelpWasShowed", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.IncreaseNumberOfGameplays
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerLevelStatsData*)>(
    &::GlobalNamespace::PlayerData::IncreaseNumberOfGameplays)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x236d010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "IncreaseNumberOfGameplays", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerLevelStatsData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.IsLevelUserFavorite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::PlayerData::IsLevelUserFavorite)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x236d050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "IsLevelUserFavorite", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.AddLevelToFavorites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::PlayerData::AddLevelToFavorites)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x236d11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "AddLevelToFavorites", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.RemoveLevelFromFavorites
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::IPreviewBeatmapLevel*)>(
    &::GlobalNamespace::PlayerData::RemoveLevelFromFavorites)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x236d21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "RemoveLevelFromFavorites", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkTutorialAsShown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkTutorialAsShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkTutorialAsShown",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.Mark360WarningAsShown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::Mark360WarningAsShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "Mark360WarningAsShown",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkEulaAsAgreed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkEulaAsAgreed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x236d32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkEulaAsAgreed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkLanguageAsSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkLanguageAsSelected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236d34c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkLanguageAsSelected",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkRegionAsSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(int32_t)>(&::GlobalNamespace::PlayerData::MarkRegionAsSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkRegionAsSelected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SelectAvatarSystemTypeId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::SelectAvatarSystemTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SelectAvatarSystemTypeId", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkMultiplayerDisclaimerAsAgreed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkMultiplayerDisclaimerAsAgreed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x236d368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "MarkMultiplayerDisclaimerAsAgreed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkPrivacyPolicyAsAgreed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkPrivacyPolicyAsAgreed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x236d374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "MarkPrivacyPolicyAsAgreed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkHealthAndSafetyAsAgreed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkHealthAndSafetyAsAgreed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x236d394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                               "MarkHealthAndSafetyAsAgreed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.AddGuestPlayerName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::AddGuestPlayerName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x236d3b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "AddGuestPlayerName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.DeleteAllGuestPlayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::DeleteAllGuestPlayers)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x236d50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "DeleteAllGuestPlayers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetLastSelectedBeatmapDifficulty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::PlayerData::SetLastSelectedBeatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d57c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetLastSelectedBeatmapDifficulty", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetLastSelectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::PlayerData::SetLastSelectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetLastSelectedBeatmapCharacteristic", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetGameplayModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::PlayerData::SetGameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetGameplayModifiers", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetPlayerSpecificSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::PlayerData::SetPlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetPlayerSpecificSettings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetMultiplayerModeSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::MultiplayerModeSettings*)>(
    &::GlobalNamespace::PlayerData::SetMultiplayerModeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x236d59c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetMultiplayerModeSettings", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.DidSelectRegion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::DidSelectRegion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x236d5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "DidSelectRegion",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerData::__get__playerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayerData::__get__playerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__playerId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlayerData::__get__playerName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayerData::__get__playerName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__playerName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::PlayerData::__get__shouldShowTutorialPrompt_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldShowTutorialPrompt_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__get__shouldShowTutorialPrompt_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldShowTutorialPrompt_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__shouldShowTutorialPrompt_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldShowTutorialPrompt_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__get__shouldShow360Warning_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldShow360Warning_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__get__shouldShow360Warning_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldShow360Warning_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__shouldShow360Warning_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldShow360Warning_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__get__agreedToEula_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____agreedToEula_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__get__agreedToEula_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____agreedToEula_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__agreedToEula_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____agreedToEula_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__get__didSelectLanguage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didSelectLanguage_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__get__didSelectLanguage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didSelectLanguage_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__didSelectLanguage_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didSelectLanguage_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__get__agreedToMultiplayerDisclaimer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____agreedToMultiplayerDisclaimer_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__get__agreedToMultiplayerDisclaimer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____agreedToMultiplayerDisclaimer_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__agreedToMultiplayerDisclaimer_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____agreedToMultiplayerDisclaimer_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerData::__get__didSelectRegionVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didSelectRegionVersion_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerData::__get__didSelectRegionVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didSelectRegionVersion_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__didSelectRegionVersion_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didSelectRegionVersion_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::PlayerData::__get__selectedAvatarSystemTypeId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystemTypeId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayerData::__get__selectedAvatarSystemTypeId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystemTypeId_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__selectedAvatarSystemTypeId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectedAvatarSystemTypeId_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerAgreements*& GlobalNamespace::PlayerData::__get__playerAgreements_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAgreements_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerAgreements*> const& GlobalNamespace::PlayerData::__get__playerAgreements_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAgreements_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__playerAgreements_k__BackingField(::GlobalNamespace::PlayerAgreements* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerAgreements_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::PlayerData::__get__lastSelectedBeatmapDifficulty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedBeatmapDifficulty_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::PlayerData::__get__lastSelectedBeatmapDifficulty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedBeatmapDifficulty_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__lastSelectedBeatmapDifficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSelectedBeatmapDifficulty_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::PlayerData::__get__lastSelectedBeatmapCharacteristic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedBeatmapCharacteristic_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::PlayerData::__get__lastSelectedBeatmapCharacteristic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedBeatmapCharacteristic_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__lastSelectedBeatmapCharacteristic_k__BackingField(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lastSelectedBeatmapCharacteristic_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::PlayerData::__get__gameplayModifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& GlobalNamespace::PlayerData::__get__gameplayModifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::PlayerData::__get__playerSpecificSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& GlobalNamespace::PlayerData::__get__playerSpecificSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__playerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerSpecificSettings_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PracticeSettings*& GlobalNamespace::PlayerData::__get__practiceSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeSettings*> const& GlobalNamespace::PlayerData::__get__practiceSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____practiceSettings_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData*& GlobalNamespace::PlayerData::__get__playerAllOverallStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAllOverallStatsData_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerAllOverallStatsData*> const& GlobalNamespace::PlayerData::__get__playerAllOverallStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAllOverallStatsData_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__playerAllOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerAllOverallStatsData_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>*& GlobalNamespace::PlayerData::__get__levelsStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsStatsData_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>*> const&
GlobalNamespace::PlayerData::__get__levelsStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsStatsData_k__BackingField;
}
constexpr void
GlobalNamespace::PlayerData::__set__levelsStatsData_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelsStatsData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*& GlobalNamespace::PlayerData::__get__missionsStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionsStatsData_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*> const&
GlobalNamespace::PlayerData::__get__missionsStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionsStatsData_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__missionsStatsData_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionsStatsData_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerData::__get__showedMissionHelpIds_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showedMissionHelpIds_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::PlayerData::__get__showedMissionHelpIds_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showedMissionHelpIds_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__showedMissionHelpIds_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____showedMissionHelpIds_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerData::__get__guestPlayerNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____guestPlayerNames_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& GlobalNamespace::PlayerData::__get__guestPlayerNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____guestPlayerNames_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__guestPlayerNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____guestPlayerNames_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ColorSchemesSettings*& GlobalNamespace::PlayerData::__get__colorSchemesSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesSettings*> const& GlobalNamespace::PlayerData::__get__colorSchemesSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__colorSchemesSettings_k__BackingField(::GlobalNamespace::ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colorSchemesSettings_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OverrideEnvironmentSettings*& GlobalNamespace::PlayerData::__get__overrideEnvironmentSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironmentSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OverrideEnvironmentSettings*> const& GlobalNamespace::PlayerData::__get__overrideEnvironmentSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironmentSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__overrideEnvironmentSettings_k__BackingField(::GlobalNamespace::OverrideEnvironmentSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____overrideEnvironmentSettings_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::PlayerData::__get__favoritesLevelIds_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoritesLevelIds_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& GlobalNamespace::PlayerData::__get__favoritesLevelIds_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoritesLevelIds_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__favoritesLevelIds_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____favoritesLevelIds_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerModeSettings*& GlobalNamespace::PlayerData::__get__multiplayerModeSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerModeSettings_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSettings*> const& GlobalNamespace::PlayerData::__get__multiplayerModeSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerModeSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__multiplayerModeSettings_k__BackingField(::GlobalNamespace::MultiplayerModeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerModeSettings_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::UserAgeCategory& GlobalNamespace::PlayerData::__get__userAgeCategory_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgeCategory_k__BackingField;
}
constexpr ::GlobalNamespace::UserAgeCategory const& GlobalNamespace::PlayerData::__get__userAgeCategory_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgeCategory_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__userAgeCategory_k__BackingField(::GlobalNamespace::UserAgeCategory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userAgeCategory_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::PlayerData::__get__desiredSensitivityFlag_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____desiredSensitivityFlag_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::PlayerData::__get__desiredSensitivityFlag_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____desiredSensitivityFlag_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__desiredSensitivityFlag_k__BackingField(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____desiredSensitivityFlag_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerData::__get__currentDlcPromoDisplayCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDlcPromoDisplayCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerData::__get__currentDlcPromoDisplayCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDlcPromoDisplayCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__currentDlcPromoDisplayCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDlcPromoDisplayCount_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::PlayerData::__get__currentDlcPromoId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDlcPromoId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayerData::__get__currentDlcPromoId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDlcPromoId_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__set__currentDlcPromoId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____currentDlcPromoId_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PlayerData::__get_favoriteLevelsSetDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___favoriteLevelsSetDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PlayerData::__get_favoriteLevelsSetDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___favoriteLevelsSetDidChangeEvent;
}
constexpr void GlobalNamespace::PlayerData::__set_favoriteLevelsSetDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___favoriteLevelsSetDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::PlayerData::__get_didIncreaseNumberOfGameplaysEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didIncreaseNumberOfGameplaysEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::PlayerData::__get_didIncreaseNumberOfGameplaysEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didIncreaseNumberOfGameplaysEvent;
}
constexpr void GlobalNamespace::PlayerData::__set_didIncreaseNumberOfGameplaysEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didIncreaseNumberOfGameplaysEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::PlayerData::get_playerId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_playerId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerData::get_playerName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_playerName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_shouldShowTutorialPrompt() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_shouldShowTutorialPrompt", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_shouldShowTutorialPrompt(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_shouldShowTutorialPrompt",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_shouldShow360Warning() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_shouldShow360Warning",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_shouldShow360Warning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_shouldShow360Warning", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_agreedToEula() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_agreedToEula",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_agreedToEula(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_agreedToEula", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_didSelectLanguage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_didSelectLanguage",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_didSelectLanguage(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_didSelectLanguage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_agreedToMultiplayerDisclaimer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_agreedToMultiplayerDisclaimer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_agreedToMultiplayerDisclaimer(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_agreedToMultiplayerDisclaimer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerData::get_didSelectRegionVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_didSelectRegionVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_didSelectRegionVersion(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_didSelectRegionVersion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerData::get_selectedAvatarSystemTypeId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_selectedAvatarSystemTypeId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_selectedAvatarSystemTypeId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_selectedAvatarSystemTypeId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerAgreements* GlobalNamespace::PlayerData::get_playerAgreements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_playerAgreements",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAgreements*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerAgreements(::GlobalNamespace::PlayerAgreements* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerAgreements", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAgreements*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::PlayerData::get_lastSelectedBeatmapDifficulty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_lastSelectedBeatmapDifficulty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_lastSelectedBeatmapDifficulty", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::PlayerData::get_lastSelectedBeatmapCharacteristic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_lastSelectedBeatmapCharacteristic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_lastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_lastSelectedBeatmapCharacteristic", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::PlayerData::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_gameplayModifiers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_gameplayModifiers", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PlayerData::get_playerSpecificSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_playerSpecificSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerSpecificSettings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::PlayerData::get_practiceSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_practiceSettings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PracticeSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_practiceSettings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData* GlobalNamespace::PlayerData::get_playerAllOverallStatsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_playerAllOverallStatsData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerAllOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_playerAllOverallStatsData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAllOverallStatsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* GlobalNamespace::PlayerData::get_levelsStatsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_levelsStatsData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_levelsStatsData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_levelsStatsData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* GlobalNamespace::PlayerData::get_missionsStatsData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_missionsStatsData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_missionsStatsData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayerData::get_showedMissionHelpIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_showedMissionHelpIds",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_showedMissionHelpIds", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayerData::get_guestPlayerNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_guestPlayerNames",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_guestPlayerNames", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorSchemesSettings* GlobalNamespace::PlayerData::get_colorSchemesSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_colorSchemesSettings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorSchemesSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_colorSchemesSettings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::PlayerData::get_overrideEnvironmentSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_overrideEnvironmentSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_overrideEnvironmentSettings", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::PlayerData::get_favoritesLevelIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_favoritesLevelIds",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_favoritesLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_favoritesLevelIds", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerModeSettings* GlobalNamespace::PlayerData::get_multiplayerModeSettings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_multiplayerModeSettings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerModeSettings*, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_multiplayerModeSettings", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::UserAgeCategory GlobalNamespace::PlayerData::get_userAgeCategory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_userAgeCategory",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UserAgeCategory, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_userAgeCategory(::GlobalNamespace::UserAgeCategory value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_userAgeCategory", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserAgeCategory>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::PlayerData::get_desiredSensitivityFlag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_desiredSensitivityFlag", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSensitivityFlag, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_desiredSensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_desiredSensitivityFlag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerData::get_currentDlcPromoDisplayCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "get_currentDlcPromoDisplayCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_currentDlcPromoDisplayCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_currentDlcPromoDisplayCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerData::get_currentDlcPromoId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "get_currentDlcPromoId",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_currentDlcPromoId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "set_currentDlcPromoId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::add_favoriteLevelsSetDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "add_favoriteLevelsSetDidChangeEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::remove_favoriteLevelsSetDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "remove_favoriteLevelsSetDidChangeEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::add_didIncreaseNumberOfGameplaysEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "add_didIncreaseNumberOfGameplaysEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::remove_didIncreaseNumberOfGameplaysEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "remove_didIncreaseNumberOfGameplaysEvent",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerData::New_ctor(::StringW playerId, ::StringW playerName, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
                                                                            ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
                                                                            ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerData*>(playerId, playerName, lastSelectedBeatmapCharacteristic, colorSchemesSettings, overrideEnvironmentSettings));
}
inline void GlobalNamespace::PlayerData::_ctor(::StringW playerId, ::StringW playerName, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
                                               ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerId, playerName, lastSelectedBeatmapCharacteristic, colorSchemesSettings, overrideEnvironmentSettings);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerData::New_ctor(
    ::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage, bool agreedToMultiplayerDisclaimer,
    int32_t didSelectRegionVersion, ::StringW selectedAvatarSystemTypeId, ::GlobalNamespace::PlayerAgreements* playerAgreements, ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty,
    ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData,
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData,
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData, ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds,
    ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames, ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
    ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds,
    ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings, int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId, ::GlobalNamespace::UserAgeCategory userAgeCategory,
    ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerData*>(
      playerId, playerName, shouldShowTutorialPrompt, shouldShow360Warning, agreedToEula, didSelectLanguage, agreedToMultiplayerDisclaimer, didSelectRegionVersion, selectedAvatarSystemTypeId,
      playerAgreements, lastSelectedBeatmapDifficulty, lastSelectedBeatmapCharacteristic, gameplayModifiers, playerSpecificSettings, practiceSettings, playerAllOverallStatsData, levelsStatsData,
      missionsStatsData, showedMissionHelpIds, guestPlayerNames, colorSchemesSettings, overrideEnvironmentSettings, favoritesLevelIds, multiplayerModeSettings, currentDlcPromoDisplayCount,
      currentDlcPromoId, userAgeCategory, desiredSensitivityFlag));
}
inline void GlobalNamespace::PlayerData::_ctor(::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage,
                                               bool agreedToMultiplayerDisclaimer, int32_t didSelectRegionVersion, ::StringW selectedAvatarSystemTypeId,
                                               ::GlobalNamespace::PlayerAgreements* playerAgreements, ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty,
                                               ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                               ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                                               ::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData,
                                               ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData,
                                               ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData,
                                               ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds, ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames,
                                               ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
                                               ::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds, ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings,
                                               int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId, ::GlobalNamespace::UserAgeCategory userAgeCategory,
                                               ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAgreements*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PracticeSettings*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerAllOverallStatsData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorSchemesSettings*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OverrideEnvironmentSettings*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::StringW>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSettings*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserAgeCategory>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerId, playerName, shouldShowTutorialPrompt, shouldShow360Warning, agreedToEula, didSelectLanguage,
                                                          agreedToMultiplayerDisclaimer, didSelectRegionVersion, selectedAvatarSystemTypeId, playerAgreements, lastSelectedBeatmapDifficulty,
                                                          lastSelectedBeatmapCharacteristic, gameplayModifiers, playerSpecificSettings, practiceSettings, playerAllOverallStatsData, levelsStatsData,
                                                          missionsStatsData, showedMissionHelpIds, guestPlayerNames, colorSchemesSettings, overrideEnvironmentSettings, favoritesLevelIds,
                                                          multiplayerModeSettings, currentDlcPromoDisplayCount, currentDlcPromoId, userAgeCategory, desiredSensitivityFlag);
}
inline void GlobalNamespace::PlayerData::SetNewDlcPromo(::StringW dlcPromoId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetNewDlcPromo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dlcPromoId);
}
inline void GlobalNamespace::PlayerData::IncreaseCurrentDlcPromoDisplayCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "IncreaseCurrentDlcPromoDisplayCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerData::GetPlayerLevelStatsData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "GetPlayerLevelStatsData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLevelStatsData*, false>(this, ___internal_method, difficultyBeatmap);
}
inline ::GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerData::GetPlayerLevelStatsData(::StringW levelId, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                                                     ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "GetPlayerLevelStatsData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLevelStatsData*, false>(this, ___internal_method, levelId, difficulty, beatmapCharacteristic);
}
inline ::GlobalNamespace::PlayerMissionStatsData* GlobalNamespace::PlayerData::GetPlayerMissionStatsData(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "GetPlayerMissionStatsData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerMissionStatsData*, false>(this, ___internal_method, missionId);
}
inline bool GlobalNamespace::PlayerData::WasMissionHelpShowed(::GlobalNamespace::MissionHelpSO* missionHelp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "WasMissionHelpShowed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, missionHelp);
}
inline void GlobalNamespace::PlayerData::MissionHelpWasShowed(::GlobalNamespace::MissionHelpSO* missionHelp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MissionHelpWasShowed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionHelpSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, missionHelp);
}
inline void GlobalNamespace::PlayerData::IncreaseNumberOfGameplays(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "IncreaseNumberOfGameplays", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerLevelStatsData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerLevelStats);
}
inline bool GlobalNamespace::PlayerData::IsLevelUserFavorite(::GlobalNamespace::IPreviewBeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "IsLevelUserFavorite", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, level);
}
inline void GlobalNamespace::PlayerData::AddLevelToFavorites(::GlobalNamespace::IPreviewBeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "AddLevelToFavorites", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline void GlobalNamespace::PlayerData::RemoveLevelFromFavorites(::GlobalNamespace::IPreviewBeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "RemoveLevelFromFavorites", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewBeatmapLevel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level);
}
inline void GlobalNamespace::PlayerData::MarkTutorialAsShown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkTutorialAsShown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::Mark360WarningAsShown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "Mark360WarningAsShown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkEulaAsAgreed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkEulaAsAgreed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkLanguageAsSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkLanguageAsSelected",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param version: int32_t (default: static_cast<int32_t>(0x1))
inline void GlobalNamespace::PlayerData::MarkRegionAsSelected(int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkRegionAsSelected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, version);
}
inline void GlobalNamespace::PlayerData::SelectAvatarSystemTypeId(::StringW selectedAvatarSystemTypeId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SelectAvatarSystemTypeId", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, selectedAvatarSystemTypeId);
}
inline void GlobalNamespace::PlayerData::MarkMultiplayerDisclaimerAsAgreed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "MarkMultiplayerDisclaimerAsAgreed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkPrivacyPolicyAsAgreed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "MarkPrivacyPolicyAsAgreed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkHealthAndSafetyAsAgreed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(),
                                                                             "MarkHealthAndSafetyAsAgreed", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::AddGuestPlayerName(::StringW guestPlayerName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "AddGuestPlayerName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, guestPlayerName);
}
inline void GlobalNamespace::PlayerData::DeleteAllGuestPlayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "DeleteAllGuestPlayers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::SetLastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetLastSelectedBeatmapDifficulty", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapDifficulty);
}
inline void GlobalNamespace::PlayerData::SetLastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetLastSelectedBeatmapCharacteristic", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristic);
}
inline void GlobalNamespace::PlayerData::SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* newGameplayModifiers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetGameplayModifiers", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newGameplayModifiers);
}
inline void GlobalNamespace::PlayerData::SetPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* newPlayerSpecificSettings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetPlayerSpecificSettings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSpecificSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newPlayerSpecificSettings);
}
inline void GlobalNamespace::PlayerData::SetMultiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "SetMultiplayerModeSettings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerModeSettings);
}
inline bool GlobalNamespace::PlayerData::DidSelectRegion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerData*>::get(), "DidSelectRegion",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerData::PlayerData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
