#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerData.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ColorSchemesSettings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MissionHelpSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSettings_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAgreements_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAllOverallStatsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLevelStatsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerMissionStatsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37427dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37427e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_playerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37427ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::set_playerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37427f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_shouldShowTutorialPrompt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_shouldShowTutorialPrompt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37427fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_shouldShowTutorialPrompt", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_shouldShowTutorialPrompt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_shouldShowTutorialPrompt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_shouldShowTutorialPrompt", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_shouldShow360Warning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_shouldShow360Warning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374280c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_shouldShow360Warning", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_shouldShow360Warning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_shouldShow360Warning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_shouldShow360Warning", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_agreedToEula
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_agreedToEula)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374281c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_agreedToEula", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_agreedToEula
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_agreedToEula)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_agreedToEula", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_didSelectLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_didSelectLanguage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_didSelectLanguage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_didSelectLanguage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_didSelectLanguage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_didSelectLanguage", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_agreedToMultiplayerDisclaimer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_agreedToMultiplayerDisclaimer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374283c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_agreedToMultiplayerDisclaimer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_agreedToMultiplayerDisclaimer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(bool)>(&::GlobalNamespace::PlayerData::set_agreedToMultiplayerDisclaimer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_agreedToMultiplayerDisclaimer", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_didSelectRegionVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_didSelectRegionVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374284c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_didSelectRegionVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_didSelectRegionVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(int32_t)>(&::GlobalNamespace::PlayerData::set_didSelectRegionVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_didSelectRegionVersion", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_selectedAvatarSystemTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_selectedAvatarSystemTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374285c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_selectedAvatarSystemTypeId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_selectedAvatarSystemTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::set_selectedAvatarSystemTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_selectedAvatarSystemTypeId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerAgreements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAgreements* (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_playerAgreements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374286c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerAgreements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerAgreements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerAgreements*)>(&::GlobalNamespace::PlayerData::set_playerAgreements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerAgreements", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAgreements*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_lastSelectedBeatmapDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_lastSelectedBeatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374287c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_lastSelectedBeatmapDifficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_lastSelectedBeatmapDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::PlayerData::set_lastSelectedBeatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_lastSelectedBeatmapDifficulty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_lastSelectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_lastSelectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374288c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_lastSelectedBeatmapCharacteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_lastSelectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::PlayerData::set_lastSelectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_lastSelectedBeatmapCharacteristic", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374289c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::PlayerData::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettings* (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerSpecificSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerSpecificSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::PlayerData::set_playerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerSpecificSettings", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_practiceSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PracticeSettings* (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_practiceSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_practiceSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PracticeSettings*)>(&::GlobalNamespace::PlayerData::set_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_practiceSettings", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_playerAllOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_playerAllOverallStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerAllOverallStatsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_playerAllOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerAllOverallStatsData*)>(
    &::GlobalNamespace::PlayerData::set_playerAllOverallStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerAllOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_levelsStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* (
    ::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_levelsStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_levelsStatsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_levelsStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>*)>(&::GlobalNamespace::PlayerData::set_levelsStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::PlayerData*>(),
                         { "set_levelsStatsData", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_missionsStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_missionsStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_missionsStatsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_missionsStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*)>(
    &::GlobalNamespace::PlayerData::set_missionsStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(),
                                                { "set_missionsStatsData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_showedMissionHelpIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_showedMissionHelpIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37428fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_showedMissionHelpIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_showedMissionHelpIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PlayerData::set_showedMissionHelpIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_showedMissionHelpIds", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_guestPlayerNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_guestPlayerNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374290c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_guestPlayerNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_guestPlayerNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::List_1<::StringW>*)>(
    &::GlobalNamespace::PlayerData::set_guestPlayerNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_guestPlayerNames", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_colorSchemesSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorSchemesSettings* (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_colorSchemesSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374291c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_colorSchemesSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_colorSchemesSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::ColorSchemesSettings*)>(&::GlobalNamespace::PlayerData::set_colorSchemesSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_colorSchemesSettings", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_overrideEnvironmentSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OverrideEnvironmentSettings* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_overrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374292c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_overrideEnvironmentSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_overrideEnvironmentSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::OverrideEnvironmentSettings*)>(
    &::GlobalNamespace::PlayerData::set_overrideEnvironmentSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_overrideEnvironmentSettings", {}, { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_favoritesLevelIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::StringW>* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_favoritesLevelIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374293c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_favoritesLevelIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_favoritesLevelIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::HashSet_1<::StringW>*)>(
    &::GlobalNamespace::PlayerData::set_favoritesLevelIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_favoritesLevelIds", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_multiplayerModeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerModeSettings* (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_multiplayerModeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374294c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_multiplayerModeSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_multiplayerModeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::MultiplayerModeSettings*)>(
    &::GlobalNamespace::PlayerData::set_multiplayerModeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_multiplayerModeSettings", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerModeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_userAgeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::OculusStudios::Platform::Core::UserAgeCategory (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_userAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374295c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_userAgeCategory", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_userAgeCategory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::OculusStudios::Platform::Core::UserAgeCategory)>(
    &::GlobalNamespace::PlayerData::set_userAgeCategory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_userAgeCategory", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::UserAgeCategory>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_desiredSensitivityFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSensitivityFlag (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_desiredSensitivityFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374296c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_desiredSensitivityFlag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_desiredSensitivityFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerSensitivityFlag)>(&::GlobalNamespace::PlayerData::set_desiredSensitivityFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_desiredSensitivityFlag", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_currentDlcPromoDisplayCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_currentDlcPromoDisplayCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374297c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_currentDlcPromoDisplayCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_currentDlcPromoDisplayCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(int32_t)>(&::GlobalNamespace::PlayerData::set_currentDlcPromoDisplayCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_currentDlcPromoDisplayCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_currentDlcPromoId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::get_currentDlcPromoId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_currentDlcPromoId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_currentDlcPromoId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::set_currentDlcPromoId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3742994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_currentDlcPromoId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.get_promoCounters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* (::GlobalNamespace::PlayerData::*)()>(
    &::GlobalNamespace::PlayerData::get_promoCounters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x374299c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_promoCounters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.set_promoCounters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*)>(
    &::GlobalNamespace::PlayerData::set_promoCounters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37429a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_promoCounters", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.add_favoriteLevelsSetDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(&::GlobalNamespace::PlayerData::add_favoriteLevelsSetDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x37429ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "add_favoriteLevelsSetDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.remove_favoriteLevelsSetDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(&::GlobalNamespace::PlayerData::remove_favoriteLevelsSetDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3742a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "remove_favoriteLevelsSetDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.add_didIncreaseNumberOfGameplaysEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(&::GlobalNamespace::PlayerData::add_didIncreaseNumberOfGameplaysEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3742b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "add_didIncreaseNumberOfGameplaysEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.remove_didIncreaseNumberOfGameplaysEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(&::GlobalNamespace::PlayerData::remove_didIncreaseNumberOfGameplaysEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3742bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "remove_didIncreaseNumberOfGameplaysEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.add_gameplayModifiersDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(&::GlobalNamespace::PlayerData::add_gameplayModifiersDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3742c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "add_gameplayModifiersDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.remove_gameplayModifiersDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::System::Action*)>(&::GlobalNamespace::PlayerData::remove_gameplayModifiersDidChangeEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3742d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "remove_gameplayModifiersDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW, ::StringW, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::ColorSchemesSettings*,
                                                                                               ::GlobalNamespace::OverrideEnvironmentSettings*)>(&::GlobalNamespace::PlayerData::_ctor)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x3742db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>(), ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(
    ::StringW, ::StringW, bool, bool, bool, bool, bool, int32_t, ::StringW, ::GlobalNamespace::PlayerAgreements*, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristic,
    ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::PlayerAllOverallStatsData*,
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*,
    ::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::ColorSchemesSettings*, ::GlobalNamespace::OverrideEnvironmentSettings*,
    ::System::Collections::Generic::List_1<::StringW>*, ::GlobalNamespace::MultiplayerModeSettings*, int32_t, ::StringW, ::OculusStudios::Platform::Core::UserAgeCategory,
    ::GlobalNamespace::PlayerSensitivityFlag, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>*)>(&::GlobalNamespace::PlayerData::_ctor)> {
  constexpr static std::size_t size = 0x6a4;
  constexpr static std::size_t addrs = 0x3743150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { ".ctor",
                                                                                 {},
                                                                                 { ::i2c::type_of<::StringW>(),
                                                                                   ::i2c::type_of<::StringW>(),
                                                                                   ::i2c::type_of<bool>(),
                                                                                   ::i2c::type_of<bool>(),
                                                                                   ::i2c::type_of<bool>(),
                                                                                   ::i2c::type_of<bool>(),
                                                                                   ::i2c::type_of<bool>(),
                                                                                   ::i2c::type_of<int32_t>(),
                                                                                   ::i2c::type_of<::StringW>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::PlayerAgreements*>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>*>(),
                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>(),
                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(),
                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::MultiplayerModeSettings*>(),
                                                                                   ::i2c::type_of<int32_t>(),
                                                                                   ::i2c::type_of<::StringW>(),
                                                                                   ::i2c::type_of<::OculusStudios::Platform::Core::UserAgeCategory>(),
                                                                                   ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(),
                                                                                   ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.ShouldForceApplySensitivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::ShouldForceApplySensitivity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x37437f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "ShouldForceApplySensitivity", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetPromoCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::GetPromoCounter)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3743804;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetPromoCounter", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.IncreasePromoCounter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::IncreasePromoCounter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3743860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IncreasePromoCounter", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetPromoDisplayCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::GetPromoDisplayCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3743910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetPromoDisplayCount", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.IncreasePromoDisplayCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::IncreasePromoDisplayCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3743978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IncreasePromoDisplayCount", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetPromoClickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::GetPromoClickCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x37439e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetPromoClickCount", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.IncreasePromoClickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::IncreasePromoClickCount)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3743a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IncreasePromoClickCount", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetOrCreatePlayerLevelStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLevelStatsData* (::GlobalNamespace::PlayerData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::PlayerData::GetOrCreatePlayerLevelStatsData)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3730ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetOrCreatePlayerLevelStatsData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.TryGetPlayerLevelStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLevelStatsData* (::GlobalNamespace::PlayerData::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::PlayerData::TryGetPlayerLevelStatsData)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3743ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "TryGetPlayerLevelStatsData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetOrCreatePlayerLevelStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerLevelStatsData* (
    ::GlobalNamespace::PlayerData::*)(::StringW, ::GlobalNamespace::BeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::PlayerData::GetOrCreatePlayerLevelStatsData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3743b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetOrCreatePlayerLevelStatsData",
                                                                                                                  {},
                                                                                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                                                                                                    ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.GetOrCreatePlayerMissionStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerMissionStatsData* (::GlobalNamespace::PlayerData::*)(::StringW)>(
    &::GlobalNamespace::PlayerData::GetOrCreatePlayerMissionStatsData)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3743b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetOrCreatePlayerMissionStatsData", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.WasMissionHelpShowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::MissionHelpSO*)>(&::GlobalNamespace::PlayerData::WasMissionHelpShowed)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3743d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "WasMissionHelpShowed", {}, { ::i2c::type_of<::GlobalNamespace::MissionHelpSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MissionHelpWasShowed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::MissionHelpSO*)>(&::GlobalNamespace::PlayerData::MissionHelpWasShowed)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3743d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MissionHelpWasShowed", {}, { ::i2c::type_of<::GlobalNamespace::MissionHelpSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.IncreaseNumberOfGameplays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerLevelStatsData*)>(&::GlobalNamespace::PlayerData::IncreaseNumberOfGameplays)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3743e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IncreaseNumberOfGameplays", {}, { ::i2c::type_of<::GlobalNamespace::PlayerLevelStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.IsLevelUserFavorite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::PlayerData::IsLevelUserFavorite)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3743e8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IsLevelUserFavorite", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.AddLevelToFavorites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::PlayerData::AddLevelToFavorites)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3743ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "AddLevelToFavorites", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.RemoveLevelFromFavorites
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapLevel*)>(&::GlobalNamespace::PlayerData::RemoveLevelFromFavorites)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3743fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "RemoveLevelFromFavorites", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkTutorialAsShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkTutorialAsShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3744040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkTutorialAsShown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.Mark360WarningAsShown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::Mark360WarningAsShown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3744048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "Mark360WarningAsShown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkEulaAsAgreed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkEulaAsAgreed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3744050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkEulaAsAgreed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkLanguageAsSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkLanguageAsSelected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3744084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkLanguageAsSelected", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkRegionAsSelected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(int32_t)>(&::GlobalNamespace::PlayerData::MarkRegionAsSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3744090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkRegionAsSelected", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SelectAvatarSystemTypeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::SelectAvatarSystemTypeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3744098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SelectAvatarSystemTypeId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkMultiplayerDisclaimerAsAgreed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkMultiplayerDisclaimerAsAgreed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37440a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkMultiplayerDisclaimerAsAgreed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkPrivacyPolicyAsAgreed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkPrivacyPolicyAsAgreed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37440ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkPrivacyPolicyAsAgreed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.MarkHealthAndSafetyAsAgreed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::MarkHealthAndSafetyAsAgreed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x37440c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkHealthAndSafetyAsAgreed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.AddGuestPlayerName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::StringW)>(&::GlobalNamespace::PlayerData::AddGuestPlayerName)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x37440e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "AddGuestPlayerName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.DeleteAllGuestPlayers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::DeleteAllGuestPlayers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3744240;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "DeleteAllGuestPlayers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetLastSelectedBeatmapDifficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::PlayerData::SetLastSelectedBeatmapDifficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37442b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetLastSelectedBeatmapDifficulty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetLastSelectedBeatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::BeatmapCharacteristic)>(
    &::GlobalNamespace::PlayerData::SetLastSelectedBeatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37442c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetLastSelectedBeatmapCharacteristic", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetGameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::GameplayModifiers*)>(&::GlobalNamespace::PlayerData::SetGameplayModifiers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x37442c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetPlayerSpecificSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::PlayerData::SetPlayerSpecificSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37442e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetPlayerSpecificSettings", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.SetMultiplayerModeSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerData::*)(::GlobalNamespace::MultiplayerModeSettings*)>(
    &::GlobalNamespace::PlayerData::SetMultiplayerModeSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37442f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetMultiplayerModeSettings", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerModeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerData.DidSelectRegion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerData::*)()>(&::GlobalNamespace::PlayerData::DidSelectRegion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x37442f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "DidSelectRegion", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerData::__cordl_internal_get__playerId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayerData::__cordl_internal_get__playerId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerId_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__playerId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerId_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::PlayerData::__cordl_internal_get__playerName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayerData::__cordl_internal_get__playerName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerName_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__playerName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerName_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__cordl_internal_get__shouldShowTutorialPrompt_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldShowTutorialPrompt_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__cordl_internal_get__shouldShowTutorialPrompt_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldShowTutorialPrompt_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__shouldShowTutorialPrompt_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldShowTutorialPrompt_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__cordl_internal_get__shouldShow360Warning_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldShow360Warning_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__cordl_internal_get__shouldShow360Warning_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldShow360Warning_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__shouldShow360Warning_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldShow360Warning_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__cordl_internal_get__agreedToEula_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____agreedToEula_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__cordl_internal_get__agreedToEula_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____agreedToEula_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__agreedToEula_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____agreedToEula_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__cordl_internal_get__didSelectLanguage_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didSelectLanguage_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__cordl_internal_get__didSelectLanguage_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didSelectLanguage_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__didSelectLanguage_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didSelectLanguage_k__BackingField = value;
}
constexpr bool& GlobalNamespace::PlayerData::__cordl_internal_get__agreedToMultiplayerDisclaimer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____agreedToMultiplayerDisclaimer_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerData::__cordl_internal_get__agreedToMultiplayerDisclaimer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____agreedToMultiplayerDisclaimer_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__agreedToMultiplayerDisclaimer_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____agreedToMultiplayerDisclaimer_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerData::__cordl_internal_get__didSelectRegionVersion_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didSelectRegionVersion_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerData::__cordl_internal_get__didSelectRegionVersion_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didSelectRegionVersion_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__didSelectRegionVersion_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____didSelectRegionVersion_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::PlayerData::__cordl_internal_get__selectedAvatarSystemTypeId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystemTypeId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayerData::__cordl_internal_get__selectedAvatarSystemTypeId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedAvatarSystemTypeId_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__selectedAvatarSystemTypeId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedAvatarSystemTypeId_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerAgreements*& GlobalNamespace::PlayerData::__cordl_internal_get__playerAgreements_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAgreements_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerAgreements* const& GlobalNamespace::PlayerData::__cordl_internal_get__playerAgreements_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAgreements_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__playerAgreements_k__BackingField(::GlobalNamespace::PlayerAgreements* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerAgreements_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::PlayerData::__cordl_internal_get__lastSelectedBeatmapDifficulty_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedBeatmapDifficulty_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::PlayerData::__cordl_internal_get__lastSelectedBeatmapDifficulty_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedBeatmapDifficulty_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__lastSelectedBeatmapDifficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSelectedBeatmapDifficulty_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic& GlobalNamespace::PlayerData::__cordl_internal_get__lastSelectedBeatmapCharacteristic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedBeatmapCharacteristic_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic const& GlobalNamespace::PlayerData::__cordl_internal_get__lastSelectedBeatmapCharacteristic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedBeatmapCharacteristic_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__lastSelectedBeatmapCharacteristic_k__BackingField(::GlobalNamespace::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSelectedBeatmapCharacteristic_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::PlayerData::__cordl_internal_get__gameplayModifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::PlayerData::__cordl_internal_get__gameplayModifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& GlobalNamespace::PlayerData::__cordl_internal_get__playerSpecificSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& GlobalNamespace::PlayerData::__cordl_internal_get__playerSpecificSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerSpecificSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__playerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerSpecificSettings_k__BackingField = value;
}
constexpr ::GlobalNamespace::PracticeSettings*& GlobalNamespace::PlayerData::__cordl_internal_get__practiceSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr ::GlobalNamespace::PracticeSettings* const& GlobalNamespace::PlayerData::__cordl_internal_get__practiceSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____practiceSettings_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData*& GlobalNamespace::PlayerData::__cordl_internal_get__playerAllOverallStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAllOverallStatsData_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData* const& GlobalNamespace::PlayerData::__cordl_internal_get__playerAllOverallStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerAllOverallStatsData_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__playerAllOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerAllOverallStatsData_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>*&
GlobalNamespace::PlayerData::__cordl_internal_get__levelsStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsStatsData_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* const&
GlobalNamespace::PlayerData::__cordl_internal_get__levelsStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelsStatsData_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__levelsStatsData_k__BackingField(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelsStatsData_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*& GlobalNamespace::PlayerData::__cordl_internal_get__missionsStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionsStatsData_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* const& GlobalNamespace::PlayerData::__cordl_internal_get__missionsStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionsStatsData_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__missionsStatsData_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionsStatsData_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerData::__cordl_internal_get__showedMissionHelpIds_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showedMissionHelpIds_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayerData::__cordl_internal_get__showedMissionHelpIds_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showedMissionHelpIds_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__showedMissionHelpIds_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showedMissionHelpIds_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerData::__cordl_internal_get__guestPlayerNames_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____guestPlayerNames_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayerData::__cordl_internal_get__guestPlayerNames_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____guestPlayerNames_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__guestPlayerNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____guestPlayerNames_k__BackingField = value;
}
constexpr ::GlobalNamespace::ColorSchemesSettings*& GlobalNamespace::PlayerData::__cordl_internal_get__colorSchemesSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings_k__BackingField;
}
constexpr ::GlobalNamespace::ColorSchemesSettings* const& GlobalNamespace::PlayerData::__cordl_internal_get__colorSchemesSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemesSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__colorSchemesSettings_k__BackingField(::GlobalNamespace::ColorSchemesSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemesSettings_k__BackingField = value;
}
constexpr ::GlobalNamespace::OverrideEnvironmentSettings*& GlobalNamespace::PlayerData::__cordl_internal_get__overrideEnvironmentSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironmentSettings_k__BackingField;
}
constexpr ::GlobalNamespace::OverrideEnvironmentSettings* const& GlobalNamespace::PlayerData::__cordl_internal_get__overrideEnvironmentSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideEnvironmentSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__overrideEnvironmentSettings_k__BackingField(::GlobalNamespace::OverrideEnvironmentSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideEnvironmentSettings_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::PlayerData::__cordl_internal_get__favoritesLevelIds_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoritesLevelIds_k__BackingField;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::PlayerData::__cordl_internal_get__favoritesLevelIds_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____favoritesLevelIds_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__favoritesLevelIds_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____favoritesLevelIds_k__BackingField = value;
}
constexpr ::GlobalNamespace::MultiplayerModeSettings*& GlobalNamespace::PlayerData::__cordl_internal_get__multiplayerModeSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerModeSettings_k__BackingField;
}
constexpr ::GlobalNamespace::MultiplayerModeSettings* const& GlobalNamespace::PlayerData::__cordl_internal_get__multiplayerModeSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerModeSettings_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__multiplayerModeSettings_k__BackingField(::GlobalNamespace::MultiplayerModeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerModeSettings_k__BackingField = value;
}
constexpr ::OculusStudios::Platform::Core::UserAgeCategory& GlobalNamespace::PlayerData::__cordl_internal_get__userAgeCategory_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgeCategory_k__BackingField;
}
constexpr ::OculusStudios::Platform::Core::UserAgeCategory const& GlobalNamespace::PlayerData::__cordl_internal_get__userAgeCategory_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userAgeCategory_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__userAgeCategory_k__BackingField(::OculusStudios::Platform::Core::UserAgeCategory value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userAgeCategory_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::PlayerData::__cordl_internal_get__desiredSensitivityFlag_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____desiredSensitivityFlag_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::PlayerData::__cordl_internal_get__desiredSensitivityFlag_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____desiredSensitivityFlag_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__desiredSensitivityFlag_k__BackingField(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____desiredSensitivityFlag_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerData::__cordl_internal_get__currentDlcPromoDisplayCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDlcPromoDisplayCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerData::__cordl_internal_get__currentDlcPromoDisplayCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDlcPromoDisplayCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__currentDlcPromoDisplayCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDlcPromoDisplayCount_k__BackingField = value;
}
constexpr ::StringW& GlobalNamespace::PlayerData::__cordl_internal_get__currentDlcPromoId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDlcPromoId_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::PlayerData::__cordl_internal_get__currentDlcPromoId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentDlcPromoId_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__currentDlcPromoId_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentDlcPromoId_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& GlobalNamespace::PlayerData::__cordl_internal_get__promoCounters_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoCounters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& GlobalNamespace::PlayerData::__cordl_internal_get__promoCounters_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promoCounters_k__BackingField;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set__promoCounters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promoCounters_k__BackingField = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerData::__cordl_internal_get_favoriteLevelsSetDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___favoriteLevelsSetDidChangeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerData::__cordl_internal_get_favoriteLevelsSetDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___favoriteLevelsSetDidChangeEvent;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set_favoriteLevelsSetDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___favoriteLevelsSetDidChangeEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerData::__cordl_internal_get_didIncreaseNumberOfGameplaysEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didIncreaseNumberOfGameplaysEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerData::__cordl_internal_get_didIncreaseNumberOfGameplaysEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didIncreaseNumberOfGameplaysEvent;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set_didIncreaseNumberOfGameplaysEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didIncreaseNumberOfGameplaysEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::PlayerData::__cordl_internal_get_gameplayModifiersDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiersDidChangeEvent;
}
constexpr ::System::Action* const& GlobalNamespace::PlayerData::__cordl_internal_get_gameplayModifiersDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiersDidChangeEvent;
}
constexpr void GlobalNamespace::PlayerData::__cordl_internal_set_gameplayModifiersDidChangeEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiersDidChangeEvent = value;
}
inline ::StringW GlobalNamespace::PlayerData::get_playerId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerData::get_playerName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_shouldShowTutorialPrompt() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_shouldShowTutorialPrompt", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_shouldShowTutorialPrompt(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_shouldShowTutorialPrompt", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_shouldShow360Warning() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_shouldShow360Warning", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_shouldShow360Warning(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_shouldShow360Warning", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_agreedToEula() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_agreedToEula", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_agreedToEula(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_agreedToEula", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_didSelectLanguage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_didSelectLanguage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_didSelectLanguage(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_didSelectLanguage", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::PlayerData::get_agreedToMultiplayerDisclaimer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_agreedToMultiplayerDisclaimer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_agreedToMultiplayerDisclaimer(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_agreedToMultiplayerDisclaimer", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerData::get_didSelectRegionVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_didSelectRegionVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_didSelectRegionVersion(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_didSelectRegionVersion", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerData::get_selectedAvatarSystemTypeId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_selectedAvatarSystemTypeId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_selectedAvatarSystemTypeId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_selectedAvatarSystemTypeId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerAgreements* GlobalNamespace::PlayerData::get_playerAgreements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerAgreements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAgreements*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerAgreements(::GlobalNamespace::PlayerAgreements* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerAgreements", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAgreements*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::PlayerData::get_lastSelectedBeatmapDifficulty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_lastSelectedBeatmapDifficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_lastSelectedBeatmapDifficulty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::PlayerData::get_lastSelectedBeatmapCharacteristic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_lastSelectedBeatmapCharacteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_lastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_lastSelectedBeatmapCharacteristic", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::PlayerData::get_gameplayModifiers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSpecificSettings* GlobalNamespace::PlayerData::get_playerSpecificSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerSpecificSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerSpecificSettings", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::PlayerData::get_practiceSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_practiceSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PracticeSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_practiceSettings", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData* GlobalNamespace::PlayerData::get_playerAllOverallStatsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_playerAllOverallStatsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_playerAllOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_playerAllOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* GlobalNamespace::PlayerData::get_levelsStatsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_levelsStatsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_levelsStatsData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::PlayerData*>(),
                       { "set_levelsStatsData", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* GlobalNamespace::PlayerData::get_missionsStatsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_missionsStatsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(),
                                              { "set_missionsStatsData", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayerData::get_showedMissionHelpIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_showedMissionHelpIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_showedMissionHelpIds", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayerData::get_guestPlayerNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_guestPlayerNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_guestPlayerNames", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorSchemesSettings* GlobalNamespace::PlayerData::get_colorSchemesSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_colorSchemesSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorSchemesSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_colorSchemesSettings", {}, { ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OverrideEnvironmentSettings* GlobalNamespace::PlayerData::get_overrideEnvironmentSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_overrideEnvironmentSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OverrideEnvironmentSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_overrideEnvironmentSettings", {}, { ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::StringW>* GlobalNamespace::PlayerData::get_favoritesLevelIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_favoritesLevelIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_favoritesLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_favoritesLevelIds", {}, { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::MultiplayerModeSettings* GlobalNamespace::PlayerData::get_multiplayerModeSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_multiplayerModeSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerModeSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_multiplayerModeSettings", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerModeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::OculusStudios::Platform::Core::UserAgeCategory GlobalNamespace::PlayerData::get_userAgeCategory() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_userAgeCategory", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::OculusStudios::Platform::Core::UserAgeCategory>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_userAgeCategory(::OculusStudios::Platform::Core::UserAgeCategory value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_userAgeCategory", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::UserAgeCategory>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::PlayerData::get_desiredSensitivityFlag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_desiredSensitivityFlag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSensitivityFlag>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_desiredSensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_desiredSensitivityFlag", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerData::get_currentDlcPromoDisplayCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_currentDlcPromoDisplayCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_currentDlcPromoDisplayCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_currentDlcPromoDisplayCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::PlayerData::get_currentDlcPromoId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_currentDlcPromoId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_currentDlcPromoId(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_currentDlcPromoId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* GlobalNamespace::PlayerData::get_promoCounters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "get_promoCounters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::set_promoCounters(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "set_promoCounters", {}, { ::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::add_favoriteLevelsSetDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "add_favoriteLevelsSetDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::remove_favoriteLevelsSetDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "remove_favoriteLevelsSetDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::add_didIncreaseNumberOfGameplaysEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "add_didIncreaseNumberOfGameplaysEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::remove_didIncreaseNumberOfGameplaysEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "remove_didIncreaseNumberOfGameplaysEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::add_gameplayModifiersDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "add_gameplayModifiersDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::remove_gameplayModifiersDidChangeEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "remove_gameplayModifiersDidChangeEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerData::_ctor(::StringW playerId, ::StringW playerName, ::GlobalNamespace::BeatmapCharacteristic lastSelectedBeatmapCharacteristic,
                                               ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                               ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>(), ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, playerName, lastSelectedBeatmapCharacteristic, colorSchemesSettings, overrideEnvironmentSettings);
}
inline void GlobalNamespace::PlayerData::_ctor(::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage,
                                               bool agreedToMultiplayerDisclaimer, int32_t didSelectRegionVersion, ::StringW selectedAvatarSystemTypeId,
                                               ::GlobalNamespace::PlayerAgreements* playerAgreements, ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty,
                                               ::GlobalNamespace::BeatmapCharacteristic lastSelectedBeatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                               ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                                               ::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData,
                                               ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData,
                                               ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData,
                                               ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds, ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames,
                                               ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
                                               ::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds, ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings,
                                               int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId, ::OculusStudios::Platform::Core::UserAgeCategory userAgeCategory,
                                               ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag,
                                               ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* promoCounters) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { ".ctor",
                                                                               {},
                                                                               { ::i2c::type_of<::StringW>(),
                                                                                 ::i2c::type_of<::StringW>(),
                                                                                 ::i2c::type_of<bool>(),
                                                                                 ::i2c::type_of<bool>(),
                                                                                 ::i2c::type_of<bool>(),
                                                                                 ::i2c::type_of<bool>(),
                                                                                 ::i2c::type_of<bool>(),
                                                                                 ::i2c::type_of<int32_t>(),
                                                                                 ::i2c::type_of<::StringW>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::PlayerAgreements*>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>*>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::ColorSchemesSettings*>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::MultiplayerModeSettings*>(),
                                                                                 ::i2c::type_of<int32_t>(),
                                                                                 ::i2c::type_of<::StringW>(),
                                                                                 ::i2c::type_of<::OculusStudios::Platform::Core::UserAgeCategory>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSensitivityFlag>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, playerName, shouldShowTutorialPrompt, shouldShow360Warning, agreedToEula, didSelectLanguage,
                                                   agreedToMultiplayerDisclaimer, didSelectRegionVersion, selectedAvatarSystemTypeId, playerAgreements, lastSelectedBeatmapDifficulty,
                                                   lastSelectedBeatmapCharacteristic, gameplayModifiers, playerSpecificSettings, practiceSettings, playerAllOverallStatsData, levelsStatsData,
                                                   missionsStatsData, showedMissionHelpIds, guestPlayerNames, colorSchemesSettings, overrideEnvironmentSettings, favoritesLevelIds,
                                                   multiplayerModeSettings, currentDlcPromoDisplayCount, currentDlcPromoId, userAgeCategory, desiredSensitivityFlag, promoCounters);
}
inline bool GlobalNamespace::PlayerData::ShouldForceApplySensitivity() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "ShouldForceApplySensitivity", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PlayerData::GetPromoCounter(::StringW counterKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetPromoCounter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, counterKey);
}
inline int32_t GlobalNamespace::PlayerData::IncreasePromoCounter(::StringW counterKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IncreasePromoCounter", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, counterKey);
}
inline int32_t GlobalNamespace::PlayerData::GetPromoDisplayCount(::StringW promoId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetPromoDisplayCount", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, promoId);
}
inline int32_t GlobalNamespace::PlayerData::IncreasePromoDisplayCount(::StringW promoId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IncreasePromoDisplayCount", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, promoId);
}
inline int32_t GlobalNamespace::PlayerData::GetPromoClickCount(::StringW promoId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetPromoClickCount", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, promoId);
}
inline int32_t GlobalNamespace::PlayerData::IncreasePromoClickCount(::StringW promoId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IncreasePromoClickCount", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, promoId);
}
inline ::GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerData::GetOrCreatePlayerLevelStatsData(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetOrCreatePlayerLevelStatsData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLevelStatsData*>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerData::TryGetPlayerLevelStatsData(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "TryGetPlayerLevelStatsData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLevelStatsData*>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::PlayerLevelStatsData* GlobalNamespace::PlayerData::GetOrCreatePlayerLevelStatsData(::StringW levelId, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                                                             ::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetOrCreatePlayerLevelStatsData",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(),
                                                                                                                  ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerLevelStatsData*>(this, ___internal_method, levelId, difficulty, beatmapCharacteristic);
}
inline ::GlobalNamespace::PlayerMissionStatsData* GlobalNamespace::PlayerData::GetOrCreatePlayerMissionStatsData(::StringW missionId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "GetOrCreatePlayerMissionStatsData", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerMissionStatsData*>(this, ___internal_method, missionId);
}
inline bool GlobalNamespace::PlayerData::WasMissionHelpShowed(::GlobalNamespace::MissionHelpSO* missionHelp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "WasMissionHelpShowed", {}, { ::i2c::type_of<::GlobalNamespace::MissionHelpSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, missionHelp);
}
inline void GlobalNamespace::PlayerData::MissionHelpWasShowed(::GlobalNamespace::MissionHelpSO* missionHelp) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MissionHelpWasShowed", {}, { ::i2c::type_of<::GlobalNamespace::MissionHelpSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionHelp);
}
inline void GlobalNamespace::PlayerData::IncreaseNumberOfGameplays(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IncreaseNumberOfGameplays", {}, { ::i2c::type_of<::GlobalNamespace::PlayerLevelStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerLevelStats);
}
inline bool GlobalNamespace::PlayerData::IsLevelUserFavorite(::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "IsLevelUserFavorite", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, level);
}
inline void GlobalNamespace::PlayerData::AddLevelToFavorites(::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "AddLevelToFavorites", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void GlobalNamespace::PlayerData::RemoveLevelFromFavorites(::GlobalNamespace::BeatmapLevel* level) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "RemoveLevelFromFavorites", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level);
}
inline void GlobalNamespace::PlayerData::MarkTutorialAsShown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkTutorialAsShown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::Mark360WarningAsShown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "Mark360WarningAsShown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkEulaAsAgreed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkEulaAsAgreed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkLanguageAsSelected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkLanguageAsSelected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkRegionAsSelected(int32_t version) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkRegionAsSelected", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, version);
}
inline void GlobalNamespace::PlayerData::SelectAvatarSystemTypeId(::StringW selectedAvatarSystemTypeId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SelectAvatarSystemTypeId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectedAvatarSystemTypeId);
}
inline void GlobalNamespace::PlayerData::MarkMultiplayerDisclaimerAsAgreed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkMultiplayerDisclaimerAsAgreed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkPrivacyPolicyAsAgreed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkPrivacyPolicyAsAgreed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::MarkHealthAndSafetyAsAgreed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "MarkHealthAndSafetyAsAgreed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::AddGuestPlayerName(::StringW guestPlayerName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "AddGuestPlayerName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, guestPlayerName);
}
inline void GlobalNamespace::PlayerData::DeleteAllGuestPlayers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "DeleteAllGuestPlayers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerData::SetLastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetLastSelectedBeatmapDifficulty", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapDifficulty);
}
inline void GlobalNamespace::PlayerData::SetLastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetLastSelectedBeatmapCharacteristic", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristic);
}
inline void GlobalNamespace::PlayerData::SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* newGameplayModifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetGameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameplayModifiers);
}
inline void GlobalNamespace::PlayerData::SetPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* newPlayerSpecificSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetPlayerSpecificSettings", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayerSpecificSettings);
}
inline void GlobalNamespace::PlayerData::SetMultiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "SetMultiplayerModeSettings", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerModeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerModeSettings);
}
inline bool GlobalNamespace::PlayerData::DidSelectRegion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerData*>(), { "DidSelectRegion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerData::New_ctor(::StringW playerId, ::StringW playerName, ::GlobalNamespace::BeatmapCharacteristic lastSelectedBeatmapCharacteristic,
                                                                            ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
                                                                            ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerData*>(playerId, playerName, lastSelectedBeatmapCharacteristic, colorSchemesSettings, overrideEnvironmentSettings));
}
inline ::GlobalNamespace::PlayerData* GlobalNamespace::PlayerData::New_ctor(
    ::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage, bool agreedToMultiplayerDisclaimer,
    int32_t didSelectRegionVersion, ::StringW selectedAvatarSystemTypeId, ::GlobalNamespace::PlayerAgreements* playerAgreements, ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty,
    ::GlobalNamespace::BeatmapCharacteristic lastSelectedBeatmapCharacteristic, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData,
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData,
    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData, ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds,
    ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames, ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
    ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds,
    ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings, int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId,
    ::OculusStudios::Platform::Core::UserAgeCategory userAgeCategory, ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag,
    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* promoCounters) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::PlayerData*>(
                          playerId, playerName, shouldShowTutorialPrompt, shouldShow360Warning, agreedToEula, didSelectLanguage, agreedToMultiplayerDisclaimer, didSelectRegionVersion,
                          selectedAvatarSystemTypeId, playerAgreements, lastSelectedBeatmapDifficulty, lastSelectedBeatmapCharacteristic, gameplayModifiers, playerSpecificSettings, practiceSettings,
                          playerAllOverallStatsData, levelsStatsData, missionsStatsData, showedMissionHelpIds, guestPlayerNames, colorSchemesSettings, overrideEnvironmentSettings, favoritesLevelIds,
                          multiplayerModeSettings, currentDlcPromoDisplayCount, currentDlcPromoId, userAgeCategory, desiredSensitivityFlag, promoCounters));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerData::PlayerData() {}
