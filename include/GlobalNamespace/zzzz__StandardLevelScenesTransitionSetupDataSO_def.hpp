#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StandardLevelScenesTransitionSetupDataSO)
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
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class PracticeSettings;
}
namespace GlobalNamespace {
struct RecordingToolManager_SetupData;
}
namespace GlobalNamespace {
class SceneInfo;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO);
MARK_REF_PTR_T(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelScenesTransitionSetupDataSO/<>c__DisplayClass48_0
class CORDL_TYPE StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field openedLevelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_openedLevelId, put = __cordl_internal_set_openedLevelId)) ::StringW openedLevelId;

  static inline ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0* New_ctor();

  /// @brief Method <InitEnvironmentInfo>b__0, addr 0x3b3dff4, size 0x24, virtual false, abstract: false, final false
  inline bool _InitEnvironmentInfo_b__0(::GlobalNamespace::EnvironmentInfoSO* env);

  constexpr ::StringW const& __cordl_internal_get_openedLevelId() const;

  constexpr ::StringW& __cordl_internal_get_openedLevelId();

  constexpr void __cordl_internal_set_openedLevelId(::StringW value);

  /// @brief Method .ctor, addr 0x3b3dfe4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0(StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0(StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5268 };

  /// @brief Field openedLevelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___openedLevelId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0, ___openedLevelId) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, LevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: StandardLevelScenesTransitionSetupDataSO
class CORDL_TYPE StandardLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
  // Declarations
  using __c__DisplayClass48_0 = ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0;

  /// @brief Field <beatmapKey>k__BackingField, offset 0x58, size 0x18
  __declspec(property(get = __cordl_internal_get__beatmapKey_k__BackingField, put = __cordl_internal_set__beatmapKey_k__BackingField)) ::GlobalNamespace::BeatmapKey _beatmapKey_k__BackingField;

  /// @brief Field <beatmapLevel>k__BackingField, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevel_k__BackingField,
                      put = __cordl_internal_set__beatmapLevel_k__BackingField)) ::GlobalNamespace::BeatmapLevel* _beatmapLevel_k__BackingField;

  /// @brief Field <colorScheme>k__BackingField, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__colorScheme_k__BackingField, put = __cordl_internal_set__colorScheme_k__BackingField)) ::GlobalNamespace::ColorScheme* _colorScheme_k__BackingField;

  /// @brief Field _gameCoreSceneInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameCoreSceneInfo, put = __cordl_internal_set__gameCoreSceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _gameCoreSceneInfo;

  /// @brief Field <gameMode>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameMode_k__BackingField, put = __cordl_internal_set__gameMode_k__BackingField)) ::StringW _gameMode_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayModifiers_k__BackingField,
                      put = __cordl_internal_set__gameplayModifiers_k__BackingField)) ::GlobalNamespace::GameplayModifiers* _gameplayModifiers_k__BackingField;

  /// @brief Field <originalEnvironmentInfo>k__BackingField, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__originalEnvironmentInfo_k__BackingField,
                      put = __cordl_internal_set__originalEnvironmentInfo_k__BackingField)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO>
      _originalEnvironmentInfo_k__BackingField;

  /// @brief Field <practiceSettings>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__practiceSettings_k__BackingField,
                      put = __cordl_internal_set__practiceSettings_k__BackingField)) ::GlobalNamespace::PracticeSettings* _practiceSettings_k__BackingField;

  /// @brief Field _standardGameplaySceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__standardGameplaySceneInfo, put = __cordl_internal_set__standardGameplaySceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _standardGameplaySceneInfo;

  /// @brief Field <targetEnvironmentInfo>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__targetEnvironmentInfo_k__BackingField,
                      put = __cordl_internal_set__targetEnvironmentInfo_k__BackingField)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO>
      _targetEnvironmentInfo_k__BackingField;

  /// @brief Field <usingOverrideColorScheme>k__BackingField, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get__usingOverrideColorScheme_k__BackingField,
                      put = __cordl_internal_set__usingOverrideColorScheme_k__BackingField)) bool _usingOverrideColorScheme_k__BackingField;

  /// @brief Field <usingOverrideEnvironment>k__BackingField, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get__usingOverrideEnvironment_k__BackingField,
                      put = __cordl_internal_set__usingOverrideEnvironment_k__BackingField)) bool _usingOverrideEnvironment_k__BackingField;

  __declspec(property(get = get_beatmapKey, put = set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  __declspec(property(get = get_beatmapLevel, put = set_beatmapLevel)) ::GlobalNamespace::BeatmapLevel* beatmapLevel;

  __declspec(property(get = get_colorScheme, put = set_colorScheme)) ::GlobalNamespace::ColorScheme* colorScheme;

  /// @brief Field didFinishEvent, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didFinishEvent,
      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* didFinishEvent;

  __declspec(property(get = get_gameMode, put = set_gameMode)) ::StringW gameMode;

  __declspec(property(get = get_gameplayModifiers, put = set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  __declspec(property(get = get_originalEnvironmentInfo, put = set_originalEnvironmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> originalEnvironmentInfo;

  __declspec(property(get = get_practiceSettings, put = set_practiceSettings)) ::GlobalNamespace::PracticeSettings* practiceSettings;

  __declspec(property(get = get_targetEnvironmentInfo, put = set_targetEnvironmentInfo)) ::UnityW<::GlobalNamespace::EnvironmentInfoSO> targetEnvironmentInfo;

  __declspec(property(get = get_usingOverrideColorScheme, put = set_usingOverrideColorScheme)) bool usingOverrideColorScheme;

  __declspec(property(get = get_usingOverrideEnvironment, put = set_usingOverrideEnvironment)) bool usingOverrideEnvironment;

  /// @brief Method Finish, addr 0x3b3dfbc, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method Init, addr 0x3b3b728, size 0x188, virtual false, abstract: false, final false
  inline void Init(::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                   ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
                   ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                   ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                   ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader,
                   ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::SettingsManager* settingsManager, ::StringW backButtonText,
                   ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, bool useTestNoteCutSoundEffects,
                   bool startPaused, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method Init, addr 0x3b38240, size 0x188, virtual false, abstract: false, final false
  inline void Init(::StringW gameMode, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                   ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors,
                   ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                   ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                   ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager,
                   ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, ::StringW backButtonText,
                   bool useTestNoteCutSoundEffects, bool startPaused, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method InitAndSetupScenes, addr 0x3b3dd04, size 0x2b8, virtual false, abstract: false, final false
  inline void InitAndSetupScenes(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::StringW backButtonText, bool startPaused);

  /// @brief Method InitColorInfo, addr 0x3b3dcb0, size 0x54, virtual false, abstract: false, final false
  inline void InitColorInfo(::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme);

  /// @brief Method InitEnvironmentInfo, addr 0x3b3da6c, size 0x244, virtual false, abstract: false, final false
  inline void InitEnvironmentInfo(::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel);

  static inline ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* New_ctor();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapLevel* const& __cordl_internal_get__beatmapLevel_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get__beatmapLevel_k__BackingField();

  constexpr ::GlobalNamespace::ColorScheme* const& __cordl_internal_get__colorScheme_k__BackingField() const;

  constexpr ::GlobalNamespace::ColorScheme*& __cordl_internal_get__colorScheme_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__gameCoreSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__gameCoreSceneInfo();

  constexpr ::StringW const& __cordl_internal_get__gameMode_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__gameMode_k__BackingField();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get__gameplayModifiers_k__BackingField() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get__gameplayModifiers_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__originalEnvironmentInfo_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__originalEnvironmentInfo_k__BackingField();

  constexpr ::GlobalNamespace::PracticeSettings* const& __cordl_internal_get__practiceSettings_k__BackingField() const;

  constexpr ::GlobalNamespace::PracticeSettings*& __cordl_internal_get__practiceSettings_k__BackingField();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__standardGameplaySceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__standardGameplaySceneInfo();

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& __cordl_internal_get__targetEnvironmentInfo_k__BackingField() const;

  constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& __cordl_internal_get__targetEnvironmentInfo_k__BackingField();

  constexpr bool const& __cordl_internal_get__usingOverrideColorScheme_k__BackingField() const;

  constexpr bool& __cordl_internal_get__usingOverrideColorScheme_k__BackingField();

  constexpr bool const& __cordl_internal_get__usingOverrideEnvironment_k__BackingField() const;

  constexpr bool& __cordl_internal_get__usingOverrideEnvironment_k__BackingField();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__beatmapLevel_k__BackingField(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set__colorScheme_k__BackingField(::GlobalNamespace::ColorScheme* value);

  constexpr void __cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__gameMode_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set__originalEnvironmentInfo_k__BackingField(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings* value);

  constexpr void __cordl_internal_set__standardGameplaySceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__targetEnvironmentInfo_k__BackingField(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value);

  constexpr void __cordl_internal_set__usingOverrideColorScheme_k__BackingField(bool value);

  constexpr void __cordl_internal_set__usingOverrideEnvironment_k__BackingField(bool value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method .ctor, addr 0x3b3dfec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b3a908, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method get_beatmapKey, addr 0x3b3d9bc, size 0x14, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_beatmapLevel, addr 0x3b3d9e4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapLevel* get_beatmapLevel();

  /// @brief Method get_colorScheme, addr 0x3b3da18, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* get_colorScheme();

  /// @brief Method get_gameMode, addr 0x3b3d9ac, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_gameMode();

  /// @brief Method get_gameplayModifiers, addr 0x3b3da5c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  /// @brief Method get_originalEnvironmentInfo, addr 0x3b3da4c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> get_originalEnvironmentInfo();

  /// @brief Method get_practiceSettings, addr 0x3b3d9f4, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::PracticeSettings* get_practiceSettings();

  /// @brief Method get_targetEnvironmentInfo, addr 0x3b3da3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> get_targetEnvironmentInfo();

  /// @brief Method get_usingOverrideColorScheme, addr 0x3b3da04, size 0x8, virtual false, abstract: false, final false
  inline bool get_usingOverrideColorScheme();

  /// @brief Method get_usingOverrideEnvironment, addr 0x3b3da28, size 0x8, virtual false, abstract: false, final false
  inline bool get_usingOverrideEnvironment();

  /// @brief Method remove_didFinishEvent, addr 0x3b3ade8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  /// @brief Method set_beatmapKey, addr 0x3b3d9d0, size 0x14, virtual false, abstract: false, final false
  inline void set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method set_beatmapLevel, addr 0x3b3d9ec, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  /// @brief Method set_colorScheme, addr 0x3b3da20, size 0x8, virtual false, abstract: false, final false
  inline void set_colorScheme(::GlobalNamespace::ColorScheme* value);

  /// @brief Method set_gameMode, addr 0x3b3d9b4, size 0x8, virtual false, abstract: false, final false
  inline void set_gameMode(::StringW value);

  /// @brief Method set_gameplayModifiers, addr 0x3b3da64, size 0x8, virtual false, abstract: false, final false
  inline void set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method set_originalEnvironmentInfo, addr 0x3b3da54, size 0x8, virtual false, abstract: false, final false
  inline void set_originalEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  /// @brief Method set_practiceSettings, addr 0x3b3d9fc, size 0x8, virtual false, abstract: false, final false
  inline void set_practiceSettings(::GlobalNamespace::PracticeSettings* value);

  /// @brief Method set_targetEnvironmentInfo, addr 0x3b3da44, size 0x8, virtual false, abstract: false, final false
  inline void set_targetEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value);

  /// @brief Method set_usingOverrideColorScheme, addr 0x3b3da0c, size 0xc, virtual false, abstract: false, final false
  inline void set_usingOverrideColorScheme(bool value);

  /// @brief Method set_usingOverrideEnvironment, addr 0x3b3da30, size 0xc, virtual false, abstract: false, final false
  inline void set_usingOverrideEnvironment(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardLevelScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardLevelScenesTransitionSetupDataSO(StandardLevelScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardLevelScenesTransitionSetupDataSO(StandardLevelScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5269 };

  /// @brief Field _standardGameplaySceneInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____standardGameplaySceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____gameCoreSceneInfo;

  /// @brief Field didFinishEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ___didFinishEvent;

  /// @brief Field <gameMode>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____gameMode_k__BackingField;

  /// @brief Field <beatmapKey>k__BackingField, offset: 0x58, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey_k__BackingField;

  /// @brief Field <beatmapLevel>k__BackingField, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ____beatmapLevel_k__BackingField;

  /// @brief Field <practiceSettings>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::PracticeSettings* ____practiceSettings_k__BackingField;

  /// @brief Field <usingOverrideColorScheme>k__BackingField, offset: 0x80, size: 0x1, def value: None
  bool ____usingOverrideColorScheme_k__BackingField;

  /// @brief Field <colorScheme>k__BackingField, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::ColorScheme* ____colorScheme_k__BackingField;

  /// @brief Field <usingOverrideEnvironment>k__BackingField, offset: 0x90, size: 0x1, def value: None
  bool ____usingOverrideEnvironment_k__BackingField;

  /// @brief Field <targetEnvironmentInfo>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____targetEnvironmentInfo_k__BackingField;

  /// @brief Field <originalEnvironmentInfo>k__BackingField, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::EnvironmentInfoSO> ____originalEnvironmentInfo_k__BackingField;

  /// @brief Field <gameplayModifiers>k__BackingField, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____standardGameplaySceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ___didFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____gameMode_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____beatmapKey_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____beatmapLevel_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____practiceSettings_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____usingOverrideColorScheme_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____colorScheme_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____usingOverrideEnvironment_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____targetEnvironmentInfo_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____originalEnvironmentInfo_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, ____gameplayModifiers_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO, 0xb0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*, "", "StandardLevelScenesTransitionSetupDataSO");
NEED_NO_BOX(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO___c__DisplayClass48_0*, "", "StandardLevelScenesTransitionSetupDataSO/<>c__DisplayClass48_0");
