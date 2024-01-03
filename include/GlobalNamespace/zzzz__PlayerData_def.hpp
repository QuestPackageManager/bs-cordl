#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__UserAgeCategory_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerData)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct LevelKey;
}
namespace GlobalNamespace {
class MissionHelpSO;
}
namespace GlobalNamespace {
class MultiplayerModeSettings;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerAgreements;
}
namespace GlobalNamespace {
class PlayerAllOverallStatsData;
}
namespace GlobalNamespace {
class PlayerLevelStatsData;
}
namespace GlobalNamespace {
class PlayerMissionStatsData;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
struct UserAgeCategory;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerData);
// Type: ::PlayerData
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4660)), TypeDefinitionIndex(TypeDefinitionIndex(4658)), TypeDefinitionIndex(TypeDefinitionIndex(2613)),
// TypeDefinitionIndex(TypeDefinitionIndex(14717))} Self: TypeDefinitionIndex(TypeDefinitionIndex(4628)) CS Name: ::PlayerData*
class CORDL_TYPE PlayerData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <playerId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__playerId_k__BackingField, put = __set__playerId_k__BackingField))::StringW _playerId_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__playerName_k__BackingField, put = __set__playerName_k__BackingField))::StringW _playerName_k__BackingField;

  /// @brief Field <shouldShowTutorialPrompt>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __get__shouldShowTutorialPrompt_k__BackingField, put = __set__shouldShowTutorialPrompt_k__BackingField)) bool _shouldShowTutorialPrompt_k__BackingField;

  /// @brief Field <shouldShow360Warning>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __get__shouldShow360Warning_k__BackingField, put = __set__shouldShow360Warning_k__BackingField)) bool _shouldShow360Warning_k__BackingField;

  /// @brief Field <agreedToEula>k__BackingField, offset 0x22, size 0x1
  __declspec(property(get = __get__agreedToEula_k__BackingField, put = __set__agreedToEula_k__BackingField)) bool _agreedToEula_k__BackingField;

  /// @brief Field <didSelectLanguage>k__BackingField, offset 0x23, size 0x1
  __declspec(property(get = __get__didSelectLanguage_k__BackingField, put = __set__didSelectLanguage_k__BackingField)) bool _didSelectLanguage_k__BackingField;

  /// @brief Field <agreedToMultiplayerDisclaimer>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __get__agreedToMultiplayerDisclaimer_k__BackingField, put = __set__agreedToMultiplayerDisclaimer_k__BackingField)) bool _agreedToMultiplayerDisclaimer_k__BackingField;

  /// @brief Field <didSelectRegionVersion>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __get__didSelectRegionVersion_k__BackingField, put = __set__didSelectRegionVersion_k__BackingField)) int32_t _didSelectRegionVersion_k__BackingField;

  /// @brief Field <selectedAvatarSystemTypeId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__selectedAvatarSystemTypeId_k__BackingField, put = __set__selectedAvatarSystemTypeId_k__BackingField))::StringW _selectedAvatarSystemTypeId_k__BackingField;

  /// @brief Field <playerAgreements>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__playerAgreements_k__BackingField, put = __set__playerAgreements_k__BackingField))::GlobalNamespace::PlayerAgreements* _playerAgreements_k__BackingField;

  /// @brief Field <lastSelectedBeatmapDifficulty>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__lastSelectedBeatmapDifficulty_k__BackingField,
                      put = __set__lastSelectedBeatmapDifficulty_k__BackingField))::GlobalNamespace::BeatmapDifficulty _lastSelectedBeatmapDifficulty_k__BackingField;

  /// @brief Field <lastSelectedBeatmapCharacteristic>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__lastSelectedBeatmapCharacteristic_k__BackingField,
                      put = __set__lastSelectedBeatmapCharacteristic_k__BackingField))::GlobalNamespace::BeatmapCharacteristicSO* _lastSelectedBeatmapCharacteristic_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __get__gameplayModifiers_k__BackingField, put = __set__gameplayModifiers_k__BackingField))::GlobalNamespace::GameplayModifiers* _gameplayModifiers_k__BackingField;

  /// @brief Field <playerSpecificSettings>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __get__playerSpecificSettings_k__BackingField,
                      put = __set__playerSpecificSettings_k__BackingField))::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings_k__BackingField;

  /// @brief Field <practiceSettings>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __get__practiceSettings_k__BackingField, put = __set__practiceSettings_k__BackingField))::GlobalNamespace::PracticeSettings* _practiceSettings_k__BackingField;

  /// @brief Field <playerAllOverallStatsData>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __get__playerAllOverallStatsData_k__BackingField,
                      put = __set__playerAllOverallStatsData_k__BackingField))::GlobalNamespace::PlayerAllOverallStatsData* _playerAllOverallStatsData_k__BackingField;

  /// @brief Field <levelsStatsData>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __get__levelsStatsData_k__BackingField,
                      put = __set__levelsStatsData_k__BackingField))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey,
                                                                                                                 ::GlobalNamespace::PlayerLevelStatsData*>* _levelsStatsData_k__BackingField;

  /// @brief Field <missionsStatsData>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __get__missionsStatsData_k__BackingField,
                      put = __set__missionsStatsData_k__BackingField))::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* _missionsStatsData_k__BackingField;

  /// @brief Field <showedMissionHelpIds>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __get__showedMissionHelpIds_k__BackingField,
                      put = __set__showedMissionHelpIds_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _showedMissionHelpIds_k__BackingField;

  /// @brief Field <guestPlayerNames>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __get__guestPlayerNames_k__BackingField,
                      put = __set__guestPlayerNames_k__BackingField))::System::Collections::Generic::List_1<::StringW>* _guestPlayerNames_k__BackingField;

  /// @brief Field <colorSchemesSettings>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __get__colorSchemesSettings_k__BackingField,
                      put = __set__colorSchemesSettings_k__BackingField))::GlobalNamespace::ColorSchemesSettings* _colorSchemesSettings_k__BackingField;

  /// @brief Field <overrideEnvironmentSettings>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __get__overrideEnvironmentSettings_k__BackingField,
                      put = __set__overrideEnvironmentSettings_k__BackingField))::GlobalNamespace::OverrideEnvironmentSettings* _overrideEnvironmentSettings_k__BackingField;

  /// @brief Field <favoritesLevelIds>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __get__favoritesLevelIds_k__BackingField,
                      put = __set__favoritesLevelIds_k__BackingField))::System::Collections::Generic::HashSet_1<::StringW>* _favoritesLevelIds_k__BackingField;

  /// @brief Field <multiplayerModeSettings>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __get__multiplayerModeSettings_k__BackingField,
                      put = __set__multiplayerModeSettings_k__BackingField))::GlobalNamespace::MultiplayerModeSettings* _multiplayerModeSettings_k__BackingField;

  /// @brief Field <userAgeCategory>k__BackingField, offset 0xb0, size 0x4
  __declspec(property(get = __get__userAgeCategory_k__BackingField, put = __set__userAgeCategory_k__BackingField))::GlobalNamespace::UserAgeCategory _userAgeCategory_k__BackingField;

  /// @brief Field <desiredSensitivityFlag>k__BackingField, offset 0xb4, size 0x4
  __declspec(property(get = __get__desiredSensitivityFlag_k__BackingField,
                      put = __set__desiredSensitivityFlag_k__BackingField))::GlobalNamespace::PlayerSensitivityFlag _desiredSensitivityFlag_k__BackingField;

  /// @brief Field <currentDlcPromoDisplayCount>k__BackingField, offset 0xb8, size 0x4
  __declspec(property(get = __get__currentDlcPromoDisplayCount_k__BackingField, put = __set__currentDlcPromoDisplayCount_k__BackingField)) int32_t _currentDlcPromoDisplayCount_k__BackingField;

  /// @brief Field <currentDlcPromoId>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __get__currentDlcPromoId_k__BackingField, put = __set__currentDlcPromoId_k__BackingField))::StringW _currentDlcPromoId_k__BackingField;

  /// @brief Field favoriteLevelsSetDidChangeEvent, offset 0xc8, size 0x8
  __declspec(property(get = __get_favoriteLevelsSetDidChangeEvent, put = __set_favoriteLevelsSetDidChangeEvent))::System::Action* favoriteLevelsSetDidChangeEvent;

  /// @brief Field didIncreaseNumberOfGameplaysEvent, offset 0xd0, size 0x8
  __declspec(property(get = __get_didIncreaseNumberOfGameplaysEvent, put = __set_didIncreaseNumberOfGameplaysEvent))::System::Action* didIncreaseNumberOfGameplaysEvent;

  __declspec(property(get = get_playerId, put = set_playerId))::StringW playerId;

  __declspec(property(get = get_playerName, put = set_playerName))::StringW playerName;

  __declspec(property(get = get_shouldShowTutorialPrompt, put = set_shouldShowTutorialPrompt)) bool shouldShowTutorialPrompt;

  __declspec(property(get = get_shouldShow360Warning, put = set_shouldShow360Warning)) bool shouldShow360Warning;

  __declspec(property(get = get_agreedToEula, put = set_agreedToEula)) bool agreedToEula;

  __declspec(property(get = get_didSelectLanguage, put = set_didSelectLanguage)) bool didSelectLanguage;

  __declspec(property(get = get_agreedToMultiplayerDisclaimer, put = set_agreedToMultiplayerDisclaimer)) bool agreedToMultiplayerDisclaimer;

  __declspec(property(get = get_didSelectRegionVersion, put = set_didSelectRegionVersion)) int32_t didSelectRegionVersion;

  __declspec(property(get = get_selectedAvatarSystemTypeId, put = set_selectedAvatarSystemTypeId))::StringW selectedAvatarSystemTypeId;

  __declspec(property(get = get_playerAgreements, put = set_playerAgreements))::GlobalNamespace::PlayerAgreements* playerAgreements;

  __declspec(property(get = get_lastSelectedBeatmapDifficulty, put = set_lastSelectedBeatmapDifficulty))::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;

  __declspec(property(get = get_lastSelectedBeatmapCharacteristic, put = set_lastSelectedBeatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic;

  __declspec(property(get = get_gameplayModifiers, put = set_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_playerSpecificSettings, put = set_playerSpecificSettings))::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  __declspec(property(get = get_practiceSettings, put = set_practiceSettings))::GlobalNamespace::PracticeSettings* practiceSettings;

  __declspec(property(get = get_playerAllOverallStatsData, put = set_playerAllOverallStatsData))::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData;

  __declspec(property(get = get_levelsStatsData,
                      put = set_levelsStatsData))::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData;

  __declspec(property(get = get_missionsStatsData, put = set_missionsStatsData))::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData;

  __declspec(property(get = get_showedMissionHelpIds, put = set_showedMissionHelpIds))::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;

  __declspec(property(get = get_guestPlayerNames, put = set_guestPlayerNames))::System::Collections::Generic::List_1<::StringW>* guestPlayerNames;

  __declspec(property(get = get_colorSchemesSettings, put = set_colorSchemesSettings))::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings;

  __declspec(property(get = get_overrideEnvironmentSettings, put = set_overrideEnvironmentSettings))::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings;

  __declspec(property(get = get_favoritesLevelIds, put = set_favoritesLevelIds))::System::Collections::Generic::HashSet_1<::StringW>* favoritesLevelIds;

  __declspec(property(get = get_multiplayerModeSettings, put = set_multiplayerModeSettings))::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;

  __declspec(property(get = get_userAgeCategory, put = set_userAgeCategory))::GlobalNamespace::UserAgeCategory userAgeCategory;

  __declspec(property(get = get_desiredSensitivityFlag, put = set_desiredSensitivityFlag))::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag;

  __declspec(property(get = get_currentDlcPromoDisplayCount, put = set_currentDlcPromoDisplayCount)) int32_t currentDlcPromoDisplayCount;

  __declspec(property(get = get_currentDlcPromoId, put = set_currentDlcPromoId))::StringW currentDlcPromoId;

  constexpr ::StringW& __get__playerId_k__BackingField();

  constexpr ::StringW const& __get__playerId_k__BackingField() const;

  constexpr void __set__playerId_k__BackingField(::StringW value);

  constexpr ::StringW& __get__playerName_k__BackingField();

  constexpr ::StringW const& __get__playerName_k__BackingField() const;

  constexpr void __set__playerName_k__BackingField(::StringW value);

  constexpr bool& __get__shouldShowTutorialPrompt_k__BackingField();

  constexpr bool const& __get__shouldShowTutorialPrompt_k__BackingField() const;

  constexpr void __set__shouldShowTutorialPrompt_k__BackingField(bool value);

  constexpr bool& __get__shouldShow360Warning_k__BackingField();

  constexpr bool const& __get__shouldShow360Warning_k__BackingField() const;

  constexpr void __set__shouldShow360Warning_k__BackingField(bool value);

  constexpr bool& __get__agreedToEula_k__BackingField();

  constexpr bool const& __get__agreedToEula_k__BackingField() const;

  constexpr void __set__agreedToEula_k__BackingField(bool value);

  constexpr bool& __get__didSelectLanguage_k__BackingField();

  constexpr bool const& __get__didSelectLanguage_k__BackingField() const;

  constexpr void __set__didSelectLanguage_k__BackingField(bool value);

  constexpr bool& __get__agreedToMultiplayerDisclaimer_k__BackingField();

  constexpr bool const& __get__agreedToMultiplayerDisclaimer_k__BackingField() const;

  constexpr void __set__agreedToMultiplayerDisclaimer_k__BackingField(bool value);

  constexpr int32_t& __get__didSelectRegionVersion_k__BackingField();

  constexpr int32_t const& __get__didSelectRegionVersion_k__BackingField() const;

  constexpr void __set__didSelectRegionVersion_k__BackingField(int32_t value);

  constexpr ::StringW& __get__selectedAvatarSystemTypeId_k__BackingField();

  constexpr ::StringW const& __get__selectedAvatarSystemTypeId_k__BackingField() const;

  constexpr void __set__selectedAvatarSystemTypeId_k__BackingField(::StringW value);

  constexpr ::GlobalNamespace::PlayerAgreements*& __get__playerAgreements_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerAgreements*> const& __get__playerAgreements_k__BackingField() const;

  constexpr void __set__playerAgreements_k__BackingField(::GlobalNamespace::PlayerAgreements* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__lastSelectedBeatmapDifficulty_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__lastSelectedBeatmapDifficulty_k__BackingField() const;

  constexpr void __set__lastSelectedBeatmapDifficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__lastSelectedBeatmapCharacteristic_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__lastSelectedBeatmapCharacteristic_k__BackingField() const;

  constexpr void __set__lastSelectedBeatmapCharacteristic_k__BackingField(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers_k__BackingField() const;

  constexpr void __set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value);

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __get__playerSpecificSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerSpecificSettings*> const& __get__playerSpecificSettings_k__BackingField() const;

  constexpr void __set__playerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr ::GlobalNamespace::PracticeSettings*& __get__practiceSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PracticeSettings*> const& __get__practiceSettings_k__BackingField() const;

  constexpr void __set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings* value);

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData*& __get__playerAllOverallStatsData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerAllOverallStatsData*> const& __get__playerAllOverallStatsData_k__BackingField() const;

  constexpr void __set__playerAllOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>*& __get__levelsStatsData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>*> const&
  __get__levelsStatsData_k__BackingField() const;

  constexpr void __set__levelsStatsData_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* value);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*& __get__missionsStatsData_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*> const& __get__missionsStatsData_k__BackingField() const;

  constexpr void __set__missionsStatsData_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__showedMissionHelpIds_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__showedMissionHelpIds_k__BackingField() const;

  constexpr void __set__showedMissionHelpIds_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get__guestPlayerNames_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get__guestPlayerNames_k__BackingField() const;

  constexpr void __set__guestPlayerNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr ::GlobalNamespace::ColorSchemesSettings*& __get__colorSchemesSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSchemesSettings*> const& __get__colorSchemesSettings_k__BackingField() const;

  constexpr void __set__colorSchemesSettings_k__BackingField(::GlobalNamespace::ColorSchemesSettings* value);

  constexpr ::GlobalNamespace::OverrideEnvironmentSettings*& __get__overrideEnvironmentSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OverrideEnvironmentSettings*> const& __get__overrideEnvironmentSettings_k__BackingField() const;

  constexpr void __set__overrideEnvironmentSettings_k__BackingField(::GlobalNamespace::OverrideEnvironmentSettings* value);

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __get__favoritesLevelIds_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& __get__favoritesLevelIds_k__BackingField() const;

  constexpr void __set__favoritesLevelIds_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr ::GlobalNamespace::MultiplayerModeSettings*& __get__multiplayerModeSettings_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSettings*> const& __get__multiplayerModeSettings_k__BackingField() const;

  constexpr void __set__multiplayerModeSettings_k__BackingField(::GlobalNamespace::MultiplayerModeSettings* value);

  constexpr ::GlobalNamespace::UserAgeCategory& __get__userAgeCategory_k__BackingField();

  constexpr ::GlobalNamespace::UserAgeCategory const& __get__userAgeCategory_k__BackingField() const;

  constexpr void __set__userAgeCategory_k__BackingField(::GlobalNamespace::UserAgeCategory value);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __get__desiredSensitivityFlag_k__BackingField();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __get__desiredSensitivityFlag_k__BackingField() const;

  constexpr void __set__desiredSensitivityFlag_k__BackingField(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr int32_t& __get__currentDlcPromoDisplayCount_k__BackingField();

  constexpr int32_t const& __get__currentDlcPromoDisplayCount_k__BackingField() const;

  constexpr void __set__currentDlcPromoDisplayCount_k__BackingField(int32_t value);

  constexpr ::StringW& __get__currentDlcPromoId_k__BackingField();

  constexpr ::StringW const& __get__currentDlcPromoId_k__BackingField() const;

  constexpr void __set__currentDlcPromoId_k__BackingField(::StringW value);

  constexpr ::System::Action*& __get_favoriteLevelsSetDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_favoriteLevelsSetDidChangeEvent() const;

  constexpr void __set_favoriteLevelsSetDidChangeEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didIncreaseNumberOfGameplaysEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didIncreaseNumberOfGameplaysEvent() const;

  constexpr void __set_didIncreaseNumberOfGameplaysEvent(::System::Action* value);

  /// @brief Method get_playerId, addr 0x236be04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerId();

  /// @brief Method set_playerId, addr 0x236be0c, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(::StringW value);

  /// @brief Method get_playerName, addr 0x236be14, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerName();

  /// @brief Method set_playerName, addr 0x236be1c, size 0x8, virtual false, abstract: false, final false
  inline void set_playerName(::StringW value);

  /// @brief Method get_shouldShowTutorialPrompt, addr 0x236be24, size 0x8, virtual false, abstract: false, final false
  inline bool get_shouldShowTutorialPrompt();

  /// @brief Method set_shouldShowTutorialPrompt, addr 0x236be2c, size 0xc, virtual false, abstract: false, final false
  inline void set_shouldShowTutorialPrompt(bool value);

  /// @brief Method get_shouldShow360Warning, addr 0x236be38, size 0x8, virtual false, abstract: false, final false
  inline bool get_shouldShow360Warning();

  /// @brief Method set_shouldShow360Warning, addr 0x236be40, size 0xc, virtual false, abstract: false, final false
  inline void set_shouldShow360Warning(bool value);

  /// @brief Method get_agreedToEula, addr 0x236be4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_agreedToEula();

  /// @brief Method set_agreedToEula, addr 0x236be54, size 0xc, virtual false, abstract: false, final false
  inline void set_agreedToEula(bool value);

  /// @brief Method get_didSelectLanguage, addr 0x236be60, size 0x8, virtual false, abstract: false, final false
  inline bool get_didSelectLanguage();

  /// @brief Method set_didSelectLanguage, addr 0x236be68, size 0xc, virtual false, abstract: false, final false
  inline void set_didSelectLanguage(bool value);

  /// @brief Method get_agreedToMultiplayerDisclaimer, addr 0x236be74, size 0x8, virtual false, abstract: false, final false
  inline bool get_agreedToMultiplayerDisclaimer();

  /// @brief Method set_agreedToMultiplayerDisclaimer, addr 0x236be7c, size 0xc, virtual false, abstract: false, final false
  inline void set_agreedToMultiplayerDisclaimer(bool value);

  /// @brief Method get_didSelectRegionVersion, addr 0x236be88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_didSelectRegionVersion();

  /// @brief Method set_didSelectRegionVersion, addr 0x236be90, size 0x8, virtual false, abstract: false, final false
  inline void set_didSelectRegionVersion(int32_t value);

  /// @brief Method get_selectedAvatarSystemTypeId, addr 0x236be98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_selectedAvatarSystemTypeId();

  /// @brief Method set_selectedAvatarSystemTypeId, addr 0x236bea0, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedAvatarSystemTypeId(::StringW value);

  /// @brief Method get_playerAgreements, addr 0x236bea8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAgreements* get_playerAgreements();

  /// @brief Method set_playerAgreements, addr 0x236beb0, size 0x8, virtual false, abstract: false, final false
  inline void set_playerAgreements(::GlobalNamespace::PlayerAgreements* value);

  /// @brief Method get_lastSelectedBeatmapDifficulty, addr 0x236beb8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_lastSelectedBeatmapDifficulty();

  /// @brief Method set_lastSelectedBeatmapDifficulty, addr 0x236bec0, size 0x8, virtual false, abstract: false, final false
  inline void set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method get_lastSelectedBeatmapCharacteristic, addr 0x236bec8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_lastSelectedBeatmapCharacteristic();

  /// @brief Method set_lastSelectedBeatmapCharacteristic, addr 0x236bed0, size 0x8, virtual false, abstract: false, final false
  inline void set_lastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method get_gameplayModifiers, addr 0x236bed8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method set_gameplayModifiers, addr 0x236bee0, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method get_playerSpecificSettings, addr 0x236bee8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Method set_playerSpecificSettings, addr 0x236bef0, size 0x8, virtual false, abstract: false, final false
  inline void set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  /// @brief Method get_practiceSettings, addr 0x236bef8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PracticeSettings* get_practiceSettings();

  /// @brief Method set_practiceSettings, addr 0x236bf00, size 0x8, virtual false, abstract: false, final false
  inline void set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  /// @brief Method get_playerAllOverallStatsData, addr 0x236bf08, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData* get_playerAllOverallStatsData();

  /// @brief Method set_playerAllOverallStatsData, addr 0x236bf10, size 0x8, virtual false, abstract: false, final false
  inline void set_playerAllOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData* value);

  /// @brief Method get_levelsStatsData, addr 0x236bf18, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* get_levelsStatsData();

  /// @brief Method set_levelsStatsData, addr 0x236bf20, size 0x8, virtual false, abstract: false, final false
  inline void set_levelsStatsData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* value);

  /// @brief Method get_missionsStatsData, addr 0x236bf28, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* get_missionsStatsData();

  /// @brief Method set_missionsStatsData, addr 0x236bf30, size 0x8, virtual false, abstract: false, final false
  inline void set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* value);

  /// @brief Method get_showedMissionHelpIds, addr 0x236bf38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_showedMissionHelpIds();

  /// @brief Method set_showedMissionHelpIds, addr 0x236bf40, size 0x8, virtual false, abstract: false, final false
  inline void set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_guestPlayerNames, addr 0x236bf48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_guestPlayerNames();

  /// @brief Method set_guestPlayerNames, addr 0x236bf50, size 0x8, virtual false, abstract: false, final false
  inline void set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method get_colorSchemesSettings, addr 0x236bf58, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();

  /// @brief Method set_colorSchemesSettings, addr 0x236bf60, size 0x8, virtual false, abstract: false, final false
  inline void set_colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value);

  /// @brief Method get_overrideEnvironmentSettings, addr 0x236bf68, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings();

  /// @brief Method set_overrideEnvironmentSettings, addr 0x236bf70, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings* value);

  /// @brief Method get_favoritesLevelIds, addr 0x236bf78, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* get_favoritesLevelIds();

  /// @brief Method set_favoritesLevelIds, addr 0x236bf80, size 0x8, virtual false, abstract: false, final false
  inline void set_favoritesLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method get_multiplayerModeSettings, addr 0x236bf88, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();

  /// @brief Method set_multiplayerModeSettings, addr 0x236bf90, size 0x8, virtual false, abstract: false, final false
  inline void set_multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value);

  /// @brief Method get_userAgeCategory, addr 0x236bf98, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::UserAgeCategory get_userAgeCategory();

  /// @brief Method set_userAgeCategory, addr 0x236bfa0, size 0x8, virtual false, abstract: false, final false
  inline void set_userAgeCategory(::GlobalNamespace::UserAgeCategory value);

  /// @brief Method get_desiredSensitivityFlag, addr 0x236bfa8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_desiredSensitivityFlag();

  /// @brief Method set_desiredSensitivityFlag, addr 0x236bfb0, size 0x8, virtual false, abstract: false, final false
  inline void set_desiredSensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value);

  /// @brief Method get_currentDlcPromoDisplayCount, addr 0x236bfb8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentDlcPromoDisplayCount();

  /// @brief Method set_currentDlcPromoDisplayCount, addr 0x236bfc0, size 0x8, virtual false, abstract: false, final false
  inline void set_currentDlcPromoDisplayCount(int32_t value);

  /// @brief Method get_currentDlcPromoId, addr 0x236bfc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_currentDlcPromoId();

  /// @brief Method set_currentDlcPromoId, addr 0x236bfd0, size 0x8, virtual false, abstract: false, final false
  inline void set_currentDlcPromoId(::StringW value);

  /// @brief Method add_favoriteLevelsSetDidChangeEvent, addr 0x236bfd8, size 0x9c, virtual false, abstract: false, final false
  inline void add_favoriteLevelsSetDidChangeEvent(::System::Action* value);

  /// @brief Method remove_favoriteLevelsSetDidChangeEvent, addr 0x236c074, size 0x9c, virtual false, abstract: false, final false
  inline void remove_favoriteLevelsSetDidChangeEvent(::System::Action* value);

  /// @brief Method add_didIncreaseNumberOfGameplaysEvent, addr 0x236c110, size 0x9c, virtual false, abstract: false, final false
  inline void add_didIncreaseNumberOfGameplaysEvent(::System::Action* value);

  /// @brief Method remove_didIncreaseNumberOfGameplaysEvent, addr 0x236c1ac, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didIncreaseNumberOfGameplaysEvent(::System::Action* value);

  static inline ::GlobalNamespace::PlayerData* New_ctor(::StringW playerId, ::StringW playerName, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
                                                        ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings);

  /// @brief Method .ctor, addr 0x236c248, size 0x2d0, virtual false, abstract: false, final false
  inline void _ctor(::StringW playerId, ::StringW playerName, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
                    ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings);

  static inline ::GlobalNamespace::PlayerData*
  New_ctor(::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage, bool agreedToMultiplayerDisclaimer,
           int32_t didSelectRegionVersion, ::StringW selectedAvatarSystemTypeId, ::GlobalNamespace::PlayerAgreements* playerAgreements,
           ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
           ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
           ::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData, ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData,
           ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData, ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds,
           ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames, ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
           ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds,
           ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings, int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId, ::GlobalNamespace::UserAgeCategory userAgeCategory,
           ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag);

  /// @brief Method .ctor, addr 0x236c518, size 0x410, virtual false, abstract: false, final false
  inline void _ctor(::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage, bool agreedToMultiplayerDisclaimer,
                    int32_t didSelectRegionVersion, ::StringW selectedAvatarSystemTypeId, ::GlobalNamespace::PlayerAgreements* playerAgreements,
                    ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                    ::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData, ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData,
                    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData, ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds,
                    ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames, ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
                    ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds,
                    ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings, int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId,
                    ::GlobalNamespace::UserAgeCategory userAgeCategory, ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag);

  /// @brief Method SetNewDlcPromo, addr 0x236c928, size 0xc, virtual false, abstract: false, final false
  inline void SetNewDlcPromo(::StringW dlcPromoId);

  /// @brief Method IncreaseCurrentDlcPromoDisplayCount, addr 0x236c934, size 0x10, virtual false, abstract: false, final false
  inline void IncreaseCurrentDlcPromoDisplayCount();

  /// @brief Method GetPlayerLevelStatsData, addr 0x236c944, size 0x264, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerLevelStatsData* GetPlayerLevelStatsData(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);

  /// @brief Method GetPlayerLevelStatsData, addr 0x236cba8, size 0x104, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerLevelStatsData* GetPlayerLevelStatsData(::StringW levelId, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                          ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method GetPlayerMissionStatsData, addr 0x236ccac, size 0x230, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerMissionStatsData* GetPlayerMissionStatsData(::StringW missionId);

  /// @brief Method WasMissionHelpShowed, addr 0x236cedc, size 0x5c, virtual false, abstract: false, final false
  inline bool WasMissionHelpShowed(::GlobalNamespace::MissionHelpSO* missionHelp);

  /// @brief Method MissionHelpWasShowed, addr 0x236cf38, size 0xd8, virtual false, abstract: false, final false
  inline void MissionHelpWasShowed(::GlobalNamespace::MissionHelpSO* missionHelp);

  /// @brief Method IncreaseNumberOfGameplays, addr 0x236d010, size 0x40, virtual false, abstract: false, final false
  inline void IncreaseNumberOfGameplays(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats);

  /// @brief Method IsLevelUserFavorite, addr 0x236d050, size 0xcc, virtual false, abstract: false, final false
  inline bool IsLevelUserFavorite(::GlobalNamespace::IPreviewBeatmapLevel* level);

  /// @brief Method AddLevelToFavorites, addr 0x236d11c, size 0x100, virtual false, abstract: false, final false
  inline void AddLevelToFavorites(::GlobalNamespace::IPreviewBeatmapLevel* level);

  /// @brief Method RemoveLevelFromFavorites, addr 0x236d21c, size 0x100, virtual false, abstract: false, final false
  inline void RemoveLevelFromFavorites(::GlobalNamespace::IPreviewBeatmapLevel* level);

  /// @brief Method MarkTutorialAsShown, addr 0x236d31c, size 0x8, virtual false, abstract: false, final false
  inline void MarkTutorialAsShown();

  /// @brief Method Mark360WarningAsShown, addr 0x236d324, size 0x8, virtual false, abstract: false, final false
  inline void Mark360WarningAsShown();

  /// @brief Method MarkEulaAsAgreed, addr 0x236d32c, size 0x20, virtual false, abstract: false, final false
  inline void MarkEulaAsAgreed();

  /// @brief Method MarkLanguageAsSelected, addr 0x236d34c, size 0xc, virtual false, abstract: false, final false
  inline void MarkLanguageAsSelected();

  /// @brief Method MarkRegionAsSelected, addr 0x236d358, size 0x8, virtual false, abstract: false, final false
  inline void MarkRegionAsSelected(int32_t version);

  /// @brief Method SelectAvatarSystemTypeId, addr 0x236d360, size 0x8, virtual false, abstract: false, final false
  inline void SelectAvatarSystemTypeId(::StringW selectedAvatarSystemTypeId);

  /// @brief Method MarkMultiplayerDisclaimerAsAgreed, addr 0x236d368, size 0xc, virtual false, abstract: false, final false
  inline void MarkMultiplayerDisclaimerAsAgreed();

  /// @brief Method MarkPrivacyPolicyAsAgreed, addr 0x236d374, size 0x20, virtual false, abstract: false, final false
  inline void MarkPrivacyPolicyAsAgreed();

  /// @brief Method MarkHealthAndSafetyAsAgreed, addr 0x236d394, size 0x20, virtual false, abstract: false, final false
  inline void MarkHealthAndSafetyAsAgreed();

  /// @brief Method AddGuestPlayerName, addr 0x236d3b4, size 0x158, virtual false, abstract: false, final false
  inline void AddGuestPlayerName(::StringW guestPlayerName);

  /// @brief Method DeleteAllGuestPlayers, addr 0x236d50c, size 0x70, virtual false, abstract: false, final false
  inline void DeleteAllGuestPlayers();

  /// @brief Method SetLastSelectedBeatmapDifficulty, addr 0x236d57c, size 0x8, virtual false, abstract: false, final false
  inline void SetLastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  /// @brief Method SetLastSelectedBeatmapCharacteristic, addr 0x236d584, size 0x8, virtual false, abstract: false, final false
  inline void SetLastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method SetGameplayModifiers, addr 0x236d58c, size 0x8, virtual false, abstract: false, final false
  inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* newGameplayModifiers);

  /// @brief Method SetPlayerSpecificSettings, addr 0x236d594, size 0x8, virtual false, abstract: false, final false
  inline void SetPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* newPlayerSpecificSettings);

  /// @brief Method SetMultiplayerModeSettings, addr 0x236d59c, size 0x8, virtual false, abstract: false, final false
  inline void SetMultiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);

  /// @brief Method DidSelectRegion, addr 0x236d5a4, size 0x10, virtual false, abstract: false, final false
  inline bool DidSelectRegion();

  // Ctor Parameters [CppParam { name: "", ty: "PlayerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerData(PlayerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerData(PlayerData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerData();

public:
  /// @brief Field <playerId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____playerId_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____playerName_k__BackingField;

  /// @brief Field <shouldShowTutorialPrompt>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____shouldShowTutorialPrompt_k__BackingField;

  /// @brief Field <shouldShow360Warning>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____shouldShow360Warning_k__BackingField;

  /// @brief Field <agreedToEula>k__BackingField, offset: 0x22, size: 0x1, def value: None
  bool ____agreedToEula_k__BackingField;

  /// @brief Field <didSelectLanguage>k__BackingField, offset: 0x23, size: 0x1, def value: None
  bool ____didSelectLanguage_k__BackingField;

  /// @brief Field <agreedToMultiplayerDisclaimer>k__BackingField, offset: 0x24, size: 0x1, def value: None
  bool ____agreedToMultiplayerDisclaimer_k__BackingField;

  /// @brief Field <didSelectRegionVersion>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____didSelectRegionVersion_k__BackingField;

  /// @brief Field <selectedAvatarSystemTypeId>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::StringW ____selectedAvatarSystemTypeId_k__BackingField;

  /// @brief Field <playerAgreements>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PlayerAgreements* ____playerAgreements_k__BackingField;

  /// @brief Field <lastSelectedBeatmapDifficulty>k__BackingField, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____lastSelectedBeatmapDifficulty_k__BackingField;

  /// @brief Field <lastSelectedBeatmapCharacteristic>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____lastSelectedBeatmapCharacteristic_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers_k__BackingField;

  /// @brief Field <playerSpecificSettings>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings_k__BackingField;

  /// @brief Field <practiceSettings>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ____practiceSettings_k__BackingField;

  /// @brief Field <playerAllOverallStatsData>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PlayerAllOverallStatsData* ____playerAllOverallStatsData_k__BackingField;

  /// @brief Field <levelsStatsData>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::LevelKey, ::GlobalNamespace::PlayerLevelStatsData*>* ____levelsStatsData_k__BackingField;

  /// @brief Field <missionsStatsData>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* ____missionsStatsData_k__BackingField;

  /// @brief Field <showedMissionHelpIds>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____showedMissionHelpIds_k__BackingField;

  /// @brief Field <guestPlayerNames>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____guestPlayerNames_k__BackingField;

  /// @brief Field <colorSchemesSettings>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemesSettings* ____colorSchemesSettings_k__BackingField;

  /// @brief Field <overrideEnvironmentSettings>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::OverrideEnvironmentSettings* ____overrideEnvironmentSettings_k__BackingField;

  /// @brief Field <favoritesLevelIds>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::StringW>* ____favoritesLevelIds_k__BackingField;

  /// @brief Field <multiplayerModeSettings>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerModeSettings* ____multiplayerModeSettings_k__BackingField;

  /// @brief Field <userAgeCategory>k__BackingField, offset: 0xb0, size: 0x4, def value: None
  ::GlobalNamespace::UserAgeCategory ____userAgeCategory_k__BackingField;

  /// @brief Field <desiredSensitivityFlag>k__BackingField, offset: 0xb4, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____desiredSensitivityFlag_k__BackingField;

  /// @brief Field <currentDlcPromoDisplayCount>k__BackingField, offset: 0xb8, size: 0x4, def value: None
  int32_t ____currentDlcPromoDisplayCount_k__BackingField;

  /// @brief Field <currentDlcPromoId>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____currentDlcPromoId_k__BackingField;

  /// @brief Field favoriteLevelsSetDidChangeEvent, offset: 0xc8, size: 0x8, def value: None
  ::System::Action* ___favoriteLevelsSetDidChangeEvent;

  /// @brief Field didIncreaseNumberOfGameplaysEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action* ___didIncreaseNumberOfGameplaysEvent;

  /// @brief Field kMaxGuestPlayers offset 0xffffffff size 0x4
  static constexpr int32_t kMaxGuestPlayers{ static_cast<int32_t>(0xa) };

  /// @brief Field kCurrentRegionVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentRegionVersion{ static_cast<int32_t>(0x1) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerData, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____playerId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____playerName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____shouldShowTutorialPrompt_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____shouldShow360Warning_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____agreedToEula_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____didSelectLanguage_k__BackingField) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____agreedToMultiplayerDisclaimer_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____didSelectRegionVersion_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____selectedAvatarSystemTypeId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____playerAgreements_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____lastSelectedBeatmapDifficulty_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____lastSelectedBeatmapCharacteristic_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____gameplayModifiers_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____playerSpecificSettings_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____practiceSettings_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____playerAllOverallStatsData_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____levelsStatsData_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____missionsStatsData_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____showedMissionHelpIds_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____guestPlayerNames_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____colorSchemesSettings_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____overrideEnvironmentSettings_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____favoritesLevelIds_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____multiplayerModeSettings_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____userAgeCategory_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____desiredSensitivityFlag_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____currentDlcPromoDisplayCount_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ____currentDlcPromoId_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ___favoriteLevelsSetDidChangeEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ___didIncreaseNumberOfGameplaysEvent) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerData*, "", "PlayerData");
