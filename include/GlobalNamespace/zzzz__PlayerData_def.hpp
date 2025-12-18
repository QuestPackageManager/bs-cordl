#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
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
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class GameplayModifiers;
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
namespace OculusStudios::Platform::Core {
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
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerData);
// Dependencies BeatmapDifficulty, OculusStudios.Platform.Core.UserAgeCategory, PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayerData
class CORDL_TYPE PlayerData : public ::System::Object {
public:
  // Declarations
  /// @brief Field <agreedToEula>k__BackingField, offset 0x22, size 0x1
  __declspec(property(get = __cordl_internal_get__agreedToEula_k__BackingField, put = __cordl_internal_set__agreedToEula_k__BackingField)) bool _agreedToEula_k__BackingField;

  /// @brief Field <agreedToMultiplayerDisclaimer>k__BackingField, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__agreedToMultiplayerDisclaimer_k__BackingField,
                      put = __cordl_internal_set__agreedToMultiplayerDisclaimer_k__BackingField)) bool _agreedToMultiplayerDisclaimer_k__BackingField;

  /// @brief Field <colorSchemesSettings>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesSettings_k__BackingField,
                      put = __cordl_internal_set__colorSchemesSettings_k__BackingField)) ::GlobalNamespace::ColorSchemesSettings* _colorSchemesSettings_k__BackingField;

  /// @brief Field <currentDlcPromoDisplayCount>k__BackingField, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__currentDlcPromoDisplayCount_k__BackingField,
                      put = __cordl_internal_set__currentDlcPromoDisplayCount_k__BackingField)) int32_t _currentDlcPromoDisplayCount_k__BackingField;

  /// @brief Field <currentDlcPromoId>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__currentDlcPromoId_k__BackingField, put = __cordl_internal_set__currentDlcPromoId_k__BackingField)) ::StringW _currentDlcPromoId_k__BackingField;

  /// @brief Field <desiredSensitivityFlag>k__BackingField, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get__desiredSensitivityFlag_k__BackingField,
                      put = __cordl_internal_set__desiredSensitivityFlag_k__BackingField)) ::GlobalNamespace::PlayerSensitivityFlag _desiredSensitivityFlag_k__BackingField;

  /// @brief Field <didSelectLanguage>k__BackingField, offset 0x23, size 0x1
  __declspec(property(get = __cordl_internal_get__didSelectLanguage_k__BackingField, put = __cordl_internal_set__didSelectLanguage_k__BackingField)) bool _didSelectLanguage_k__BackingField;

  /// @brief Field <didSelectRegionVersion>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__didSelectRegionVersion_k__BackingField,
                      put = __cordl_internal_set__didSelectRegionVersion_k__BackingField)) int32_t _didSelectRegionVersion_k__BackingField;

  /// @brief Field <favoritesLevelIds>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__favoritesLevelIds_k__BackingField,
                      put = __cordl_internal_set__favoritesLevelIds_k__BackingField)) ::System::Collections::Generic::HashSet_1<::StringW>* _favoritesLevelIds_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers_k__BackingField,
                      put = __cordl_internal_set__gameplayModifiers_k__BackingField)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers_k__BackingField;

  /// @brief Field <guestPlayerNames>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__guestPlayerNames_k__BackingField,
                      put = __cordl_internal_set__guestPlayerNames_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>* _guestPlayerNames_k__BackingField;

  /// @brief Field <lastSelectedBeatmapCharacteristic>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__lastSelectedBeatmapCharacteristic_k__BackingField,
                      put = __cordl_internal_set__lastSelectedBeatmapCharacteristic_k__BackingField)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
      _lastSelectedBeatmapCharacteristic_k__BackingField;

  /// @brief Field <lastSelectedBeatmapDifficulty>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__lastSelectedBeatmapDifficulty_k__BackingField,
                      put = __cordl_internal_set__lastSelectedBeatmapDifficulty_k__BackingField)) ::GlobalNamespace::BeatmapDifficulty _lastSelectedBeatmapDifficulty_k__BackingField;

  /// @brief Field <levelsStatsData>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__levelsStatsData_k__BackingField, put = __cordl_internal_set__levelsStatsData_k__BackingField)) ::System::Collections::Generic::Dictionary_2<
      ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* _levelsStatsData_k__BackingField;

  /// @brief Field <missionsStatsData>k__BackingField, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get__missionsStatsData_k__BackingField,
      put = __cordl_internal_set__missionsStatsData_k__BackingField)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* _missionsStatsData_k__BackingField;

  /// @brief Field <multiplayerModeSettings>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerModeSettings_k__BackingField,
                      put = __cordl_internal_set__multiplayerModeSettings_k__BackingField)) ::GlobalNamespace::MultiplayerModeSettings* _multiplayerModeSettings_k__BackingField;

  /// @brief Field <overrideEnvironmentSettings>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__overrideEnvironmentSettings_k__BackingField,
                      put = __cordl_internal_set__overrideEnvironmentSettings_k__BackingField)) ::GlobalNamespace::OverrideEnvironmentSettings* _overrideEnvironmentSettings_k__BackingField;

  /// @brief Field <playerAgreements>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__playerAgreements_k__BackingField,
                      put = __cordl_internal_set__playerAgreements_k__BackingField)) ::GlobalNamespace::PlayerAgreements* _playerAgreements_k__BackingField;

  /// @brief Field <playerAllOverallStatsData>k__BackingField, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__playerAllOverallStatsData_k__BackingField,
                      put = __cordl_internal_set__playerAllOverallStatsData_k__BackingField)) ::GlobalNamespace::PlayerAllOverallStatsData* _playerAllOverallStatsData_k__BackingField;

  /// @brief Field <playerId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__playerId_k__BackingField, put = __cordl_internal_set__playerId_k__BackingField)) ::StringW _playerId_k__BackingField;

  /// @brief Field <playerName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerName_k__BackingField, put = __cordl_internal_set__playerName_k__BackingField)) ::StringW _playerName_k__BackingField;

  /// @brief Field <playerSpecificSettings>k__BackingField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__playerSpecificSettings_k__BackingField,
                      put = __cordl_internal_set__playerSpecificSettings_k__BackingField)) ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings_k__BackingField;

  /// @brief Field <practiceSettings>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceSettings_k__BackingField,
                      put = __cordl_internal_set__practiceSettings_k__BackingField)) ::GlobalNamespace::PracticeSettings* _practiceSettings_k__BackingField;

  /// @brief Field <promoCounters>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__promoCounters_k__BackingField,
                      put = __cordl_internal_set__promoCounters_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* _promoCounters_k__BackingField;

  /// @brief Field <selectedAvatarSystemTypeId>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAvatarSystemTypeId_k__BackingField,
                      put = __cordl_internal_set__selectedAvatarSystemTypeId_k__BackingField)) ::StringW _selectedAvatarSystemTypeId_k__BackingField;

  /// @brief Field <shouldShow360Warning>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldShow360Warning_k__BackingField, put = __cordl_internal_set__shouldShow360Warning_k__BackingField)) bool _shouldShow360Warning_k__BackingField;

  /// @brief Field <shouldShowTutorialPrompt>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldShowTutorialPrompt_k__BackingField,
                      put = __cordl_internal_set__shouldShowTutorialPrompt_k__BackingField)) bool _shouldShowTutorialPrompt_k__BackingField;

  /// @brief Field <showedMissionHelpIds>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__showedMissionHelpIds_k__BackingField,
                      put = __cordl_internal_set__showedMissionHelpIds_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>* _showedMissionHelpIds_k__BackingField;

  /// @brief Field <userAgeCategory>k__BackingField, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get__userAgeCategory_k__BackingField,
                      put = __cordl_internal_set__userAgeCategory_k__BackingField)) ::OculusStudios::Platform::Core::UserAgeCategory _userAgeCategory_k__BackingField;

  __declspec(property(get = get_agreedToEula, put = set_agreedToEula)) bool agreedToEula;

  __declspec(property(get = get_agreedToMultiplayerDisclaimer, put = set_agreedToMultiplayerDisclaimer)) bool agreedToMultiplayerDisclaimer;

  __declspec(property(get = get_colorSchemesSettings, put = set_colorSchemesSettings)) ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings;

  __declspec(property(get = get_currentDlcPromoDisplayCount, put = set_currentDlcPromoDisplayCount)) int32_t currentDlcPromoDisplayCount;

  __declspec(property(get = get_currentDlcPromoId, put = set_currentDlcPromoId)) ::StringW currentDlcPromoId;

  __declspec(property(get = get_desiredSensitivityFlag, put = set_desiredSensitivityFlag)) ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag;

  /// @brief Field didIncreaseNumberOfGameplaysEvent, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_didIncreaseNumberOfGameplaysEvent, put = __cordl_internal_set_didIncreaseNumberOfGameplaysEvent)) ::System::Action* didIncreaseNumberOfGameplaysEvent;

  __declspec(property(get = get_didSelectLanguage, put = set_didSelectLanguage)) bool didSelectLanguage;

  __declspec(property(get = get_didSelectRegionVersion, put = set_didSelectRegionVersion)) int32_t didSelectRegionVersion;

  /// @brief Field favoriteLevelsSetDidChangeEvent, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_favoriteLevelsSetDidChangeEvent, put = __cordl_internal_set_favoriteLevelsSetDidChangeEvent)) ::System::Action* favoriteLevelsSetDidChangeEvent;

  __declspec(property(get = get_favoritesLevelIds, put = set_favoritesLevelIds)) ::System::Collections::Generic::HashSet_1<::StringW>* favoritesLevelIds;

  __declspec(property(get = get_gameplayModifiers, put = set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field gameplayModifiersDidChangeEvent, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiersDidChangeEvent, put = __cordl_internal_set_gameplayModifiersDidChangeEvent)) ::System::Action* gameplayModifiersDidChangeEvent;

  __declspec(property(get = get_guestPlayerNames, put = set_guestPlayerNames)) ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames;

  __declspec(property(get = get_lastSelectedBeatmapCharacteristic, put = set_lastSelectedBeatmapCharacteristic)) ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> lastSelectedBeatmapCharacteristic;

  __declspec(property(get = get_lastSelectedBeatmapDifficulty, put = set_lastSelectedBeatmapDifficulty)) ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty;

  __declspec(property(get = get_levelsStatsData,
                      put = set_levelsStatsData)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData;

  __declspec(property(get = get_missionsStatsData, put = set_missionsStatsData)) ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData;

  __declspec(property(get = get_multiplayerModeSettings, put = set_multiplayerModeSettings)) ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings;

  __declspec(property(get = get_overrideEnvironmentSettings, put = set_overrideEnvironmentSettings)) ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings;

  __declspec(property(get = get_playerAgreements, put = set_playerAgreements)) ::GlobalNamespace::PlayerAgreements* playerAgreements;

  __declspec(property(get = get_playerAllOverallStatsData, put = set_playerAllOverallStatsData)) ::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData;

  __declspec(property(get = get_playerId, put = set_playerId)) ::StringW playerId;

  __declspec(property(get = get_playerName, put = set_playerName)) ::StringW playerName;

  __declspec(property(get = get_playerSpecificSettings, put = set_playerSpecificSettings)) ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

  __declspec(property(get = get_practiceSettings, put = set_practiceSettings)) ::GlobalNamespace::PracticeSettings* practiceSettings;

  __declspec(property(get = get_promoCounters, put = set_promoCounters)) ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* promoCounters;

  __declspec(property(get = get_selectedAvatarSystemTypeId, put = set_selectedAvatarSystemTypeId)) ::StringW selectedAvatarSystemTypeId;

  __declspec(property(get = get_shouldShow360Warning, put = set_shouldShow360Warning)) bool shouldShow360Warning;

  __declspec(property(get = get_shouldShowTutorialPrompt, put = set_shouldShowTutorialPrompt)) bool shouldShowTutorialPrompt;

  __declspec(property(get = get_showedMissionHelpIds, put = set_showedMissionHelpIds)) ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds;

  __declspec(property(get = get_userAgeCategory, put = set_userAgeCategory)) ::OculusStudios::Platform::Core::UserAgeCategory userAgeCategory;

  /// @brief Method AddGuestPlayerName, addr 0x364aeac, size 0x15c, virtual false, abstract: false, final false
  inline void AddGuestPlayerName(::StringW guestPlayerName);

  /// @brief Method AddLevelToFavorites, addr 0x364acbc, size 0xac, virtual false, abstract: false, final false
  inline void AddLevelToFavorites(::GlobalNamespace::BeatmapLevel* level);

  /// @brief Method DeleteAllGuestPlayers, addr 0x364b008, size 0x78, virtual false, abstract: false, final false
  inline void DeleteAllGuestPlayers();

  /// @brief Method DidSelectRegion, addr 0x364b0c0, size 0x10, virtual false, abstract: false, final false
  inline bool DidSelectRegion();

  /// @brief Method GetOrCreatePlayerLevelStatsData, addr 0x36375fc, size 0x114, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerLevelStatsData* GetOrCreatePlayerLevelStatsData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method GetOrCreatePlayerLevelStatsData, addr 0x364aa78, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerLevelStatsData* GetOrCreatePlayerLevelStatsData(::StringW levelId, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                                  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method GetOrCreatePlayerMissionStatsData, addr 0x3633410, size 0x1bc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerMissionStatsData* GetOrCreatePlayerMissionStatsData(::StringW missionId);

  /// @brief Method GetPromoClickCount, addr 0x364a920, size 0x68, virtual false, abstract: false, final false
  inline int32_t GetPromoClickCount(::StringW promoId);

  /// @brief Method GetPromoCounter, addr 0x364a744, size 0x5c, virtual false, abstract: false, final false
  inline int32_t GetPromoCounter(::StringW counterKey);

  /// @brief Method GetPromoDisplayCount, addr 0x364a850, size 0x68, virtual false, abstract: false, final false
  inline int32_t GetPromoDisplayCount(::StringW promoId);

  /// @brief Method IncreaseNumberOfGameplays, addr 0x364ac20, size 0x34, virtual false, abstract: false, final false
  inline void IncreaseNumberOfGameplays(::GlobalNamespace::PlayerLevelStatsData* playerLevelStats);

  /// @brief Method IncreasePromoClickCount, addr 0x364a988, size 0x68, virtual false, abstract: false, final false
  inline int32_t IncreasePromoClickCount(::StringW promoId);

  /// @brief Method IncreasePromoCounter, addr 0x364a7a0, size 0xb0, virtual false, abstract: false, final false
  inline int32_t IncreasePromoCounter(::StringW counterKey);

  /// @brief Method IncreasePromoDisplayCount, addr 0x364a8b8, size 0x68, virtual false, abstract: false, final false
  inline int32_t IncreasePromoDisplayCount(::StringW promoId);

  /// @brief Method IsLevelUserFavorite, addr 0x364ac54, size 0x68, virtual false, abstract: false, final false
  inline bool IsLevelUserFavorite(::GlobalNamespace::BeatmapLevel* level);

  /// @brief Method Mark360WarningAsShown, addr 0x364ae10, size 0x8, virtual false, abstract: false, final false
  inline void Mark360WarningAsShown();

  /// @brief Method MarkEulaAsAgreed, addr 0x364ae18, size 0x34, virtual false, abstract: false, final false
  inline void MarkEulaAsAgreed();

  /// @brief Method MarkHealthAndSafetyAsAgreed, addr 0x364ae90, size 0x1c, virtual false, abstract: false, final false
  inline void MarkHealthAndSafetyAsAgreed();

  /// @brief Method MarkLanguageAsSelected, addr 0x364ae4c, size 0xc, virtual false, abstract: false, final false
  inline void MarkLanguageAsSelected();

  /// @brief Method MarkMultiplayerDisclaimerAsAgreed, addr 0x364ae68, size 0xc, virtual false, abstract: false, final false
  inline void MarkMultiplayerDisclaimerAsAgreed();

  /// @brief Method MarkPrivacyPolicyAsAgreed, addr 0x364ae74, size 0x1c, virtual false, abstract: false, final false
  inline void MarkPrivacyPolicyAsAgreed();

  /// @brief Method MarkRegionAsSelected, addr 0x364ae58, size 0x8, virtual false, abstract: false, final false
  inline void MarkRegionAsSelected(int32_t version);

  /// @brief Method MarkTutorialAsShown, addr 0x364ae08, size 0x8, virtual false, abstract: false, final false
  inline void MarkTutorialAsShown();

  /// @brief Method MissionHelpWasShowed, addr 0x364ab38, size 0xe8, virtual false, abstract: false, final false
  inline void MissionHelpWasShowed(::GlobalNamespace::MissionHelpSO* missionHelp);

  static inline ::GlobalNamespace::PlayerData* New_ctor(::StringW playerId, ::StringW playerName, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
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
           ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings, int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId,
           ::OculusStudios::Platform::Core::UserAgeCategory userAgeCategory, ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag,
           ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* promoCounters);

  /// @brief Method RemoveLevelFromFavorites, addr 0x364ad68, size 0xa0, virtual false, abstract: false, final false
  inline void RemoveLevelFromFavorites(::GlobalNamespace::BeatmapLevel* level);

  /// @brief Method SelectAvatarSystemTypeId, addr 0x364ae60, size 0x8, virtual false, abstract: false, final false
  inline void SelectAvatarSystemTypeId(::StringW selectedAvatarSystemTypeId);

  /// @brief Method SetGameplayModifiers, addr 0x364b090, size 0x20, virtual false, abstract: false, final false
  inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* newGameplayModifiers);

  /// @brief Method SetLastSelectedBeatmapCharacteristic, addr 0x364b088, size 0x8, virtual false, abstract: false, final false
  inline void SetLastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method SetLastSelectedBeatmapDifficulty, addr 0x364b080, size 0x8, virtual false, abstract: false, final false
  inline void SetLastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  /// @brief Method SetMultiplayerModeSettings, addr 0x364b0b8, size 0x8, virtual false, abstract: false, final false
  inline void SetMultiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings);

  /// @brief Method SetPlayerSpecificSettings, addr 0x364b0b0, size 0x8, virtual false, abstract: false, final false
  inline void SetPlayerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* newPlayerSpecificSettings);

  /// @brief Method ShouldForceApplySensitivity, addr 0x364a734, size 0x10, virtual false, abstract: false, final false
  inline bool ShouldForceApplySensitivity();

  /// @brief Method TryGetPlayerLevelStatsData, addr 0x364a9f0, size 0x88, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerLevelStatsData* TryGetPlayerLevelStatsData(::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey);

  /// @brief Method WasMissionHelpShowed, addr 0x364aad0, size 0x68, virtual false, abstract: false, final false
  inline bool WasMissionHelpShowed(::GlobalNamespace::MissionHelpSO* missionHelp);

  constexpr bool const& __cordl_internal_get__agreedToEula_k__BackingField() const;

  constexpr bool& __cordl_internal_get__agreedToEula_k__BackingField();

  constexpr bool const& __cordl_internal_get__agreedToMultiplayerDisclaimer_k__BackingField() const;

  constexpr bool& __cordl_internal_get__agreedToMultiplayerDisclaimer_k__BackingField();

  constexpr ::GlobalNamespace::ColorSchemesSettings* const& __cordl_internal_get__colorSchemesSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorSchemesSettings*& __cordl_internal_get__colorSchemesSettings_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__currentDlcPromoDisplayCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__currentDlcPromoDisplayCount_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__currentDlcPromoId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__currentDlcPromoId_k__BackingField();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get__desiredSensitivityFlag_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get__desiredSensitivityFlag_k__BackingField();

  constexpr bool const& __cordl_internal_get__didSelectLanguage_k__BackingField() const;

  constexpr bool& __cordl_internal_get__didSelectLanguage_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__didSelectRegionVersion_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__didSelectRegionVersion_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__favoritesLevelIds_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__favoritesLevelIds_k__BackingField();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__guestPlayerNames_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__guestPlayerNames_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__lastSelectedBeatmapCharacteristic_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__lastSelectedBeatmapCharacteristic_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get__lastSelectedBeatmapDifficulty_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get__lastSelectedBeatmapDifficulty_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* const& __cordl_internal_get__levelsStatsData_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>*& __cordl_internal_get__levelsStatsData_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* const& __cordl_internal_get__missionsStatsData_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>*& __cordl_internal_get__missionsStatsData_k__BackingField();

  constexpr ::GlobalNamespace::MultiplayerModeSettings* const& __cordl_internal_get__multiplayerModeSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::MultiplayerModeSettings*& __cordl_internal_get__multiplayerModeSettings_k__BackingField();

  constexpr ::GlobalNamespace::OverrideEnvironmentSettings* const& __cordl_internal_get__overrideEnvironmentSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::OverrideEnvironmentSettings*& __cordl_internal_get__overrideEnvironmentSettings_k__BackingField();

  constexpr ::GlobalNamespace::PlayerAgreements* const& __cordl_internal_get__playerAgreements_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerAgreements*& __cordl_internal_get__playerAgreements_k__BackingField();

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData* const& __cordl_internal_get__playerAllOverallStatsData_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerAllOverallStatsData*& __cordl_internal_get__playerAllOverallStatsData_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playerId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playerId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__playerName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__playerName_k__BackingField();

  constexpr ::GlobalNamespace::PlayerSpecificSettings* const& __cordl_internal_get__playerSpecificSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::PlayerSpecificSettings*& __cordl_internal_get__playerSpecificSettings_k__BackingField();

  constexpr ::GlobalNamespace::PracticeSettings* const& __cordl_internal_get__practiceSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::PracticeSettings*& __cordl_internal_get__practiceSettings_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* const& __cordl_internal_get__promoCounters_k__BackingField() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get__promoCounters_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__selectedAvatarSystemTypeId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__selectedAvatarSystemTypeId_k__BackingField();

  constexpr bool const& __cordl_internal_get__shouldShow360Warning_k__BackingField() const;

  constexpr bool& __cordl_internal_get__shouldShow360Warning_k__BackingField();

  constexpr bool const& __cordl_internal_get__shouldShowTutorialPrompt_k__BackingField() const;

  constexpr bool& __cordl_internal_get__shouldShowTutorialPrompt_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__showedMissionHelpIds_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__showedMissionHelpIds_k__BackingField();

  constexpr ::OculusStudios::Platform::Core::UserAgeCategory const& __cordl_internal_get__userAgeCategory_k__BackingField() const;

  constexpr ::OculusStudios::Platform::Core::UserAgeCategory& __cordl_internal_get__userAgeCategory_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get_didIncreaseNumberOfGameplaysEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didIncreaseNumberOfGameplaysEvent();

  constexpr ::System::Action* const& __cordl_internal_get_favoriteLevelsSetDidChangeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_favoriteLevelsSetDidChangeEvent();

  constexpr ::System::Action* const& __cordl_internal_get_gameplayModifiersDidChangeEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_gameplayModifiersDidChangeEvent();

  constexpr void __cordl_internal_set__agreedToEula_k__BackingField(bool value);

  constexpr void __cordl_internal_set__agreedToMultiplayerDisclaimer_k__BackingField(bool value);

  constexpr void __cordl_internal_set__colorSchemesSettings_k__BackingField(::GlobalNamespace::ColorSchemesSettings* value);

  constexpr void __cordl_internal_set__currentDlcPromoDisplayCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__currentDlcPromoId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__desiredSensitivityFlag_k__BackingField(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set__didSelectLanguage_k__BackingField(bool value);

  constexpr void __cordl_internal_set__didSelectRegionVersion_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__favoritesLevelIds_k__BackingField(::System::Collections::Generic::HashSet_1<::StringW>* value);

  constexpr void __cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__guestPlayerNames_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__lastSelectedBeatmapCharacteristic_k__BackingField(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set__lastSelectedBeatmapDifficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set__levelsStatsData_k__BackingField(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* value);

  constexpr void __cordl_internal_set__missionsStatsData_k__BackingField(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* value);

  constexpr void __cordl_internal_set__multiplayerModeSettings_k__BackingField(::GlobalNamespace::MultiplayerModeSettings* value);

  constexpr void __cordl_internal_set__overrideEnvironmentSettings_k__BackingField(::GlobalNamespace::OverrideEnvironmentSettings* value);

  constexpr void __cordl_internal_set__playerAgreements_k__BackingField(::GlobalNamespace::PlayerAgreements* value);

  constexpr void __cordl_internal_set__playerAllOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData* value);

  constexpr void __cordl_internal_set__playerId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__playerName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__playerSpecificSettings_k__BackingField(::GlobalNamespace::PlayerSpecificSettings* value);

  constexpr void __cordl_internal_set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings* value);

  constexpr void __cordl_internal_set__promoCounters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set__selectedAvatarSystemTypeId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__shouldShow360Warning_k__BackingField(bool value);

  constexpr void __cordl_internal_set__shouldShowTutorialPrompt_k__BackingField(bool value);

  constexpr void __cordl_internal_set__showedMissionHelpIds_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__userAgeCategory_k__BackingField(::OculusStudios::Platform::Core::UserAgeCategory value);

  constexpr void __cordl_internal_set_didIncreaseNumberOfGameplaysEvent(::System::Action* value);

  constexpr void __cordl_internal_set_favoriteLevelsSetDidChangeEvent(::System::Action* value);

  constexpr void __cordl_internal_set_gameplayModifiersDidChangeEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x3649c90, size 0x398, virtual false, abstract: false, final false
  inline void _ctor(::StringW playerId, ::StringW playerName, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
                    ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings);

  /// @brief Method .ctor, addr 0x364a028, size 0x70c, virtual false, abstract: false, final false
  inline void _ctor(::StringW playerId, ::StringW playerName, bool shouldShowTutorialPrompt, bool shouldShow360Warning, bool agreedToEula, bool didSelectLanguage, bool agreedToMultiplayerDisclaimer,
                    int32_t didSelectRegionVersion, ::StringW selectedAvatarSystemTypeId, ::GlobalNamespace::PlayerAgreements* playerAgreements,
                    ::GlobalNamespace::BeatmapDifficulty lastSelectedBeatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* lastSelectedBeatmapCharacteristic,
                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                    ::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData, ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerLevelStatsData*>* levelsStatsData,
                    ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* missionsStatsData, ::System::Collections::Generic::List_1<::StringW>* showedMissionHelpIds,
                    ::System::Collections::Generic::List_1<::StringW>* guestPlayerNames, ::GlobalNamespace::ColorSchemesSettings* colorSchemesSettings,
                    ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::System::Collections::Generic::List_1<::StringW>* favoritesLevelIds,
                    ::GlobalNamespace::MultiplayerModeSettings* multiplayerModeSettings, int32_t currentDlcPromoDisplayCount, ::StringW currentDlcPromoId,
                    ::OculusStudios::Platform::Core::UserAgeCategory userAgeCategory, ::GlobalNamespace::PlayerSensitivityFlag desiredSensitivityFlag,
                    ::System::Collections::Generic::List_1<::System::ValueTuple_2<::StringW, int32_t>>* promoCounters);

  /// @brief Method add_didIncreaseNumberOfGameplaysEvent, addr 0x36499e0, size 0xac, virtual false, abstract: false, final false
  inline void add_didIncreaseNumberOfGameplaysEvent(::System::Action* value);

  /// @brief Method add_favoriteLevelsSetDidChangeEvent, addr 0x3649888, size 0xac, virtual false, abstract: false, final false
  inline void add_favoriteLevelsSetDidChangeEvent(::System::Action* value);

  /// @brief Method add_gameplayModifiersDidChangeEvent, addr 0x3649b38, size 0xac, virtual false, abstract: false, final false
  inline void add_gameplayModifiersDidChangeEvent(::System::Action* value);

  /// @brief Method get_agreedToEula, addr 0x36496f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_agreedToEula();

  /// @brief Method get_agreedToMultiplayerDisclaimer, addr 0x3649718, size 0x8, virtual false, abstract: false, final false
  inline bool get_agreedToMultiplayerDisclaimer();

  /// @brief Method get_colorSchemesSettings, addr 0x36497f8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorSchemesSettings* get_colorSchemesSettings();

  /// @brief Method get_currentDlcPromoDisplayCount, addr 0x3649858, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_currentDlcPromoDisplayCount();

  /// @brief Method get_currentDlcPromoId, addr 0x3649868, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_currentDlcPromoId();

  /// @brief Method get_desiredSensitivityFlag, addr 0x3649848, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSensitivityFlag get_desiredSensitivityFlag();

  /// @brief Method get_didSelectLanguage, addr 0x3649708, size 0x8, virtual false, abstract: false, final false
  inline bool get_didSelectLanguage();

  /// @brief Method get_didSelectRegionVersion, addr 0x3649728, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_didSelectRegionVersion();

  /// @brief Method get_favoritesLevelIds, addr 0x3649818, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::StringW>* get_favoritesLevelIds();

  /// @brief Method get_gameplayModifiers, addr 0x3649778, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_guestPlayerNames, addr 0x36497e8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_guestPlayerNames();

  /// @brief Method get_lastSelectedBeatmapCharacteristic, addr 0x3649768, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_lastSelectedBeatmapCharacteristic();

  /// @brief Method get_lastSelectedBeatmapDifficulty, addr 0x3649758, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_lastSelectedBeatmapDifficulty();

  /// @brief Method get_levelsStatsData, addr 0x36497b8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* get_levelsStatsData();

  /// @brief Method get_missionsStatsData, addr 0x36497c8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* get_missionsStatsData();

  /// @brief Method get_multiplayerModeSettings, addr 0x3649828, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MultiplayerModeSettings* get_multiplayerModeSettings();

  /// @brief Method get_overrideEnvironmentSettings, addr 0x3649808, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OverrideEnvironmentSettings* get_overrideEnvironmentSettings();

  /// @brief Method get_playerAgreements, addr 0x3649748, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAgreements* get_playerAgreements();

  /// @brief Method get_playerAllOverallStatsData, addr 0x36497a8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerAllOverallStatsData* get_playerAllOverallStatsData();

  /// @brief Method get_playerId, addr 0x36496b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerId();

  /// @brief Method get_playerName, addr 0x36496c8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_playerName();

  /// @brief Method get_playerSpecificSettings, addr 0x3649788, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();

  /// @brief Method get_practiceSettings, addr 0x3649798, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PracticeSettings* get_practiceSettings();

  /// @brief Method get_promoCounters, addr 0x3649878, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* get_promoCounters();

  /// @brief Method get_selectedAvatarSystemTypeId, addr 0x3649738, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_selectedAvatarSystemTypeId();

  /// @brief Method get_shouldShow360Warning, addr 0x36496e8, size 0x8, virtual false, abstract: false, final false
  inline bool get_shouldShow360Warning();

  /// @brief Method get_shouldShowTutorialPrompt, addr 0x36496d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_shouldShowTutorialPrompt();

  /// @brief Method get_showedMissionHelpIds, addr 0x36497d8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_showedMissionHelpIds();

  /// @brief Method get_userAgeCategory, addr 0x3649838, size 0x8, virtual false, abstract: false, final false
  inline ::OculusStudios::Platform::Core::UserAgeCategory get_userAgeCategory();

  /// @brief Method remove_didIncreaseNumberOfGameplaysEvent, addr 0x3649a8c, size 0xac, virtual false, abstract: false, final false
  inline void remove_didIncreaseNumberOfGameplaysEvent(::System::Action* value);

  /// @brief Method remove_favoriteLevelsSetDidChangeEvent, addr 0x3649934, size 0xac, virtual false, abstract: false, final false
  inline void remove_favoriteLevelsSetDidChangeEvent(::System::Action* value);

  /// @brief Method remove_gameplayModifiersDidChangeEvent, addr 0x3649be4, size 0xac, virtual false, abstract: false, final false
  inline void remove_gameplayModifiersDidChangeEvent(::System::Action* value);

  /// @brief Method set_agreedToEula, addr 0x3649700, size 0x8, virtual false, abstract: false, final false
  inline void set_agreedToEula(bool value);

  /// @brief Method set_agreedToMultiplayerDisclaimer, addr 0x3649720, size 0x8, virtual false, abstract: false, final false
  inline void set_agreedToMultiplayerDisclaimer(bool value);

  /// @brief Method set_colorSchemesSettings, addr 0x3649800, size 0x8, virtual false, abstract: false, final false
  inline void set_colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value);

  /// @brief Method set_currentDlcPromoDisplayCount, addr 0x3649860, size 0x8, virtual false, abstract: false, final false
  inline void set_currentDlcPromoDisplayCount(int32_t value);

  /// @brief Method set_currentDlcPromoId, addr 0x3649870, size 0x8, virtual false, abstract: false, final false
  inline void set_currentDlcPromoId(::StringW value);

  /// @brief Method set_desiredSensitivityFlag, addr 0x3649850, size 0x8, virtual false, abstract: false, final false
  inline void set_desiredSensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value);

  /// @brief Method set_didSelectLanguage, addr 0x3649710, size 0x8, virtual false, abstract: false, final false
  inline void set_didSelectLanguage(bool value);

  /// @brief Method set_didSelectRegionVersion, addr 0x3649730, size 0x8, virtual false, abstract: false, final false
  inline void set_didSelectRegionVersion(int32_t value);

  /// @brief Method set_favoritesLevelIds, addr 0x3649820, size 0x8, virtual false, abstract: false, final false
  inline void set_favoritesLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value);

  /// @brief Method set_gameplayModifiers, addr 0x3649780, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method set_guestPlayerNames, addr 0x36497f0, size 0x8, virtual false, abstract: false, final false
  inline void set_guestPlayerNames(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_lastSelectedBeatmapCharacteristic, addr 0x3649770, size 0x8, virtual false, abstract: false, final false
  inline void set_lastSelectedBeatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method set_lastSelectedBeatmapDifficulty, addr 0x3649760, size 0x8, virtual false, abstract: false, final false
  inline void set_lastSelectedBeatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method set_levelsStatsData, addr 0x36497c0, size 0x8, virtual false, abstract: false, final false
  inline void set_levelsStatsData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* value);

  /// @brief Method set_missionsStatsData, addr 0x36497d0, size 0x8, virtual false, abstract: false, final false
  inline void set_missionsStatsData(::System::Collections::Generic::List_1<::GlobalNamespace::PlayerMissionStatsData*>* value);

  /// @brief Method set_multiplayerModeSettings, addr 0x3649830, size 0x8, virtual false, abstract: false, final false
  inline void set_multiplayerModeSettings(::GlobalNamespace::MultiplayerModeSettings* value);

  /// @brief Method set_overrideEnvironmentSettings, addr 0x3649810, size 0x8, virtual false, abstract: false, final false
  inline void set_overrideEnvironmentSettings(::GlobalNamespace::OverrideEnvironmentSettings* value);

  /// @brief Method set_playerAgreements, addr 0x3649750, size 0x8, virtual false, abstract: false, final false
  inline void set_playerAgreements(::GlobalNamespace::PlayerAgreements* value);

  /// @brief Method set_playerAllOverallStatsData, addr 0x36497b0, size 0x8, virtual false, abstract: false, final false
  inline void set_playerAllOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData* value);

  /// @brief Method set_playerId, addr 0x36496c0, size 0x8, virtual false, abstract: false, final false
  inline void set_playerId(::StringW value);

  /// @brief Method set_playerName, addr 0x36496d0, size 0x8, virtual false, abstract: false, final false
  inline void set_playerName(::StringW value);

  /// @brief Method set_playerSpecificSettings, addr 0x3649790, size 0x8, virtual false, abstract: false, final false
  inline void set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value);

  /// @brief Method set_practiceSettings, addr 0x36497a0, size 0x8, virtual false, abstract: false, final false
  inline void set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  /// @brief Method set_promoCounters, addr 0x3649880, size 0x8, virtual false, abstract: false, final false
  inline void set_promoCounters(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  /// @brief Method set_selectedAvatarSystemTypeId, addr 0x3649740, size 0x8, virtual false, abstract: false, final false
  inline void set_selectedAvatarSystemTypeId(::StringW value);

  /// @brief Method set_shouldShow360Warning, addr 0x36496f0, size 0x8, virtual false, abstract: false, final false
  inline void set_shouldShow360Warning(bool value);

  /// @brief Method set_shouldShowTutorialPrompt, addr 0x36496e0, size 0x8, virtual false, abstract: false, final false
  inline void set_shouldShowTutorialPrompt(bool value);

  /// @brief Method set_showedMissionHelpIds, addr 0x36497e0, size 0x8, virtual false, abstract: false, final false
  inline void set_showedMissionHelpIds(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method set_userAgeCategory, addr 0x3649840, size 0x8, virtual false, abstract: false, final false
  inline void set_userAgeCategory(::OculusStudios::Platform::Core::UserAgeCategory value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayerData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlayerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlayerData(PlayerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlayerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlayerData(PlayerData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15146 };

  /// @brief Field kCurrentRegionVersion offset 0xffffffff size 0x4
  static constexpr int32_t kCurrentRegionVersion{ static_cast<int32_t>(0x1) };

  /// @brief Field kMaxGuestPlayers offset 0xffffffff size 0x4
  static constexpr int32_t kMaxGuestPlayers{ static_cast<int32_t>(0xa) };

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
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____lastSelectedBeatmapCharacteristic_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers_k__BackingField;

  /// @brief Field <playerSpecificSettings>k__BackingField, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* ____playerSpecificSettings_k__BackingField;

  /// @brief Field <practiceSettings>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ____practiceSettings_k__BackingField;

  /// @brief Field <playerAllOverallStatsData>k__BackingField, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PlayerAllOverallStatsData* ____playerAllOverallStatsData_k__BackingField;

  /// @brief Field <levelsStatsData>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::BeatmapKey, ::GlobalNamespace::PlayerLevelStatsData*>* ____levelsStatsData_k__BackingField;

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
  ::OculusStudios::Platform::Core::UserAgeCategory ____userAgeCategory_k__BackingField;

  /// @brief Field <desiredSensitivityFlag>k__BackingField, offset: 0xb4, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ____desiredSensitivityFlag_k__BackingField;

  /// @brief Field <currentDlcPromoDisplayCount>k__BackingField, offset: 0xb8, size: 0x4, def value: None
  int32_t ____currentDlcPromoDisplayCount_k__BackingField;

  /// @brief Field <currentDlcPromoId>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::StringW ____currentDlcPromoId_k__BackingField;

  /// @brief Field <promoCounters>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ____promoCounters_k__BackingField;

  /// @brief Field favoriteLevelsSetDidChangeEvent, offset: 0xd0, size: 0x8, def value: None
  ::System::Action* ___favoriteLevelsSetDidChangeEvent;

  /// @brief Field didIncreaseNumberOfGameplaysEvent, offset: 0xd8, size: 0x8, def value: None
  ::System::Action* ___didIncreaseNumberOfGameplaysEvent;

  /// @brief Field gameplayModifiersDidChangeEvent, offset: 0xe0, size: 0x8, def value: None
  ::System::Action* ___gameplayModifiersDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
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

static_assert(offsetof(::GlobalNamespace::PlayerData, ____promoCounters_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ___favoriteLevelsSetDidChangeEvent) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ___didIncreaseNumberOfGameplaysEvent) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerData, ___gameplayModifiersDidChangeEvent) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerData, 0xe8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerData*, "", "PlayerData");
