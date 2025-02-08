#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiplayerLevelScenesTransitionSetupDataSO)
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::AddressableAssets {
template <typename TObject> class AssetReferenceT_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO);
// Dependencies BeatmapKey, LevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLevelScenesTransitionSetupDataSO
class CORDL_TYPE MultiplayerLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field <beatmapKey>k__BackingField, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey_k__BackingField, put = __cordl_internal_set__beatmapKey_k__BackingField)) ::GlobalNamespace::BeatmapKey _beatmapKey_k__BackingField;

  /// @brief Field <beatmapLevelData>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelData_k__BackingField,
                      put = __cordl_internal_set__beatmapLevelData_k__BackingField)) ::GlobalNamespace::IBeatmapLevelData* _beatmapLevelData_k__BackingField;

  /// @brief Field <beatmapLevel>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel_k__BackingField,
                      put = __cordl_internal_set__beatmapLevel_k__BackingField)) ::GlobalNamespace::BeatmapLevel* _beatmapLevel_k__BackingField;

  /// @brief Field <colorScheme>k__BackingField, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme_k__BackingField, put = __cordl_internal_set__colorScheme_k__BackingField)) ::GlobalNamespace::ColorScheme* _colorScheme_k__BackingField;

  /// @brief Field _gameCoreSceneInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameCoreSceneInfo, put = __cordl_internal_set__gameCoreSceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _gameCoreSceneInfo;

  /// @brief Field <gameMode>k__BackingField, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__gameMode_k__BackingField, put = __cordl_internal_set__gameMode_k__BackingField)) ::StringW _gameMode_k__BackingField;

  /// @brief Field _loadedMultiplayerEnvironmentInfo, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__loadedMultiplayerEnvironmentInfo, put = __cordl_internal_set__loadedMultiplayerEnvironmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO>
      _loadedMultiplayerEnvironmentInfo;

  /// @brief Field _multiplayerEnvironmentInfo, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get__multiplayerEnvironmentInfo,
      put = __cordl_internal_set__multiplayerEnvironmentInfo)) ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* _multiplayerEnvironmentInfo;

  /// @brief Field _multiplayerLevelSceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelSceneInfo, put = __cordl_internal_set__multiplayerLevelSceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _multiplayerLevelSceneInfo;

  /// @brief Field <usingOverrideColorScheme>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__usingOverrideColorScheme_k__BackingField,
                      put = __cordl_internal_set__usingOverrideColorScheme_k__BackingField)) bool _usingOverrideColorScheme_k__BackingField;

  __declspec(property(get = get_beatmapKey, put = set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_beatmapLevel, put = set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  __declspec(property(get = get_beatmapLevelData, put = set_beatmapLevelData)) ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  __declspec(property(get = get_colorScheme, put = set_colorScheme)) ::GlobalNamespace::ColorScheme* colorScheme;

  /// @brief Field didDisconnectEvent, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_didDisconnectEvent,
                      put = __cordl_internal_set_didDisconnectEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,
                                                                                         ::GlobalNamespace::DisconnectedReason>* didDisconnectEvent;

  /// @brief Field didFinishEvent, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_didFinishEvent,
                      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,
                                                                                     ::GlobalNamespace::MultiplayerResultsData*>* didFinishEvent;

  __declspec(property(get = get_gameMode, put = set_gameMode)) ::StringW gameMode;

  __declspec(property(get = get_usingOverrideColorScheme, put = set_usingOverrideColorScheme)) bool usingOverrideColorScheme;

  /// @brief Method Finish, addr 0x3b4449c, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::MultiplayerResultsData* resultsData);

  /// @brief Method FinishWithDisconnect, addr 0x3b444c4, size 0x28, virtual false, abstract: false, final false
  inline void FinishWithDisconnect(::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method GetOrLoadMultiplayerEnvironmentInfo, addr 0x3b44088, size 0xf8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GetOrLoadMultiplayerEnvironmentInfo();

  /// @brief Method Init, addr 0x3b42d64, size 0x1e0, virtual false, abstract: false, final false
  inline void Init(::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                   ::GlobalNamespace::ColorScheme* overrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                   ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager,
                   ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, bool useTestNoteCutSoundEffects);

  /// @brief Method InitAndSetupScenes, addr 0x3b44204, size 0x298, virtual false, abstract: false, final false
  inline void InitAndSetupScenes();

  /// @brief Method InitColorInfo, addr 0x3b44180, size 0x84, virtual false, abstract: false, final false
  inline void InitColorInfo(::GlobalNamespace::ColorScheme* overrideColorScheme);

  static inline ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* New_ctor();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey_k__BackingField();

  constexpr ::GlobalNamespace::IBeatmapLevelData* const& __cordl_internal_get__beatmapLevelData_k__BackingField() const;

  constexpr ::GlobalNamespace::IBeatmapLevelData*& __cordl_internal_get__beatmapLevelData_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__beatmapLevel_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel_k__BackingField();

  constexpr ::GlobalNamespace::ColorScheme* const& __cordl_internal_get__colorScheme_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get__colorScheme_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__gameCoreSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__gameCoreSceneInfo();

  constexpr ::StringW const& __cordl_internal_get__gameMode_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__gameMode_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__loadedMultiplayerEnvironmentInfo() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__loadedMultiplayerEnvironmentInfo();

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* const& __cordl_internal_get__multiplayerEnvironmentInfo() const;

  constexpr ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>*& __cordl_internal_get__multiplayerEnvironmentInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__multiplayerLevelSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__multiplayerLevelSceneInfo();

  constexpr bool const& __cordl_internal_get__usingOverrideColorScheme_k__BackingField() const;

  constexpr bool& __cordl_internal_get__usingOverrideColorScheme_k__BackingField();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* const& __cordl_internal_get_didDisconnectEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get_didDisconnectEvent();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* const&
  __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__beatmapLevelData_k__BackingField(::GlobalNamespace::IBeatmapLevelData* value);

  constexpr void __cordl_internal_set__beatmapLevel_k__BackingField(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__colorScheme_k__BackingField(::GlobalNamespace::ColorScheme* value);

  constexpr void __cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__gameMode_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__loadedMultiplayerEnvironmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set__multiplayerEnvironmentInfo(::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* value);

  constexpr void __cordl_internal_set__multiplayerLevelSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__usingOverrideColorScheme_k__BackingField(bool value);

  constexpr void __cordl_internal_set_didDisconnectEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method .ctor, addr 0x3b444ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didDisconnectEvent, addr 0x3b415c8, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDisconnectEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method add_didFinishEvent, addr 0x3b41518, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method get_beatmapKey, addr 0x3b4401c, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_beatmapLevel, addr 0x3b44044, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* get_beatmapLevel();

  /// @brief Method get_beatmapLevelData, addr 0x3b44078, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  /// @brief Method get_colorScheme, addr 0x3b44068, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* get_colorScheme();

  /// @brief Method get_gameMode, addr 0x3b4400c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_usingOverrideColorScheme, addr 0x3b44054, size 0x8, virtual false, abstract: false, final false
  inline bool get_usingOverrideColorScheme();

  /// @brief Method remove_didDisconnectEvent, addr 0x3b41aa8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDisconnectEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* value);

  /// @brief Method remove_didFinishEvent, addr 0x3b419f8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  /// @brief Method set_beatmapKey, addr 0x3b44030, size 0x14, virtual false, abstract: false, final false
  inline void set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method set_beatmapLevel, addr 0x3b4404c, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  /// @brief Method set_beatmapLevelData, addr 0x3b44080, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value);

  /// @brief Method set_colorScheme, addr 0x3b44070, size 0x8, virtual false, abstract: false, final false
  inline void set_colorScheme(::GlobalNamespace::ColorScheme* value);

  /// @brief Method set_gameMode, addr 0x3b44014, size 0x8, virtual false, abstract: false, final false
  inline void set_gameMode(::StringW value);

  /// @brief Method set_usingOverrideColorScheme, addr 0x3b4405c, size 0xc, virtual false, abstract: false, final false
  inline void set_usingOverrideColorScheme(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelScenesTransitionSetupDataSO(MultiplayerLevelScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelScenesTransitionSetupDataSO(MultiplayerLevelScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5269 };

  /// @brief Field _multiplayerLevelSceneInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____multiplayerLevelSceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____gameCoreSceneInfo;

  /// @brief Field _multiplayerEnvironmentInfo, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>* ____multiplayerEnvironmentInfo;

  /// @brief Field didFinishEvent, offset: 0x50, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* ___didFinishEvent;

  /// @brief Field didDisconnectEvent, offset: 0x58, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::DisconnectedReason>* ___didDisconnectEvent;

  /// @brief Field <gameMode>k__BackingField, offset: 0x60, size: 0x8, def value: None
  ::StringW ____gameMode_k__BackingField;

  /// @brief Field <beatmapKey>k__BackingField, offset: 0x68, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey_k__BackingField;

  /// @brief Field <beatmapLevel>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel_k__BackingField;

  /// @brief Field <usingOverrideColorScheme>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____usingOverrideColorScheme_k__BackingField;

  /// @brief Field <colorScheme>k__BackingField, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme_k__BackingField;

  /// @brief Field <beatmapLevelData>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelData* ____beatmapLevelData_k__BackingField;

  /// @brief Field _loadedMultiplayerEnvironmentInfo, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____loadedMultiplayerEnvironmentInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____multiplayerLevelSceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____multiplayerEnvironmentInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ___didFinishEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ___didDisconnectEvent) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____gameMode_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____beatmapKey_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____beatmapLevel_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____usingOverrideColorScheme_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____colorScheme_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____beatmapLevelData_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, ____loadedMultiplayerEnvironmentInfo) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO*, "", "MultiplayerLevelScenesTransitionSetupDataSO");
