#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupDataSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MissionLevelScenesTransitionSetupDataSO)
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
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class ColorScheme;
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
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
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
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO);
// Dependencies LevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelScenesTransitionSetupDataSO
class CORDL_TYPE MissionLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
  // Declarations
  /// @brief Field _gameCoreSceneInfo, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameCoreSceneInfo, put = __cordl_internal_set__gameCoreSceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _gameCoreSceneInfo;

  /// @brief Field _missionGameplaySceneInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionGameplaySceneInfo, put = __cordl_internal_set__missionGameplaySceneInfo)) ::UnityW<::GlobalNamespace::SceneInfo> _missionGameplaySceneInfo;

  /// @brief Field <missionId>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__missionId_k__BackingField, put = __cordl_internal_set__missionId_k__BackingField)) ::StringW _missionId_k__BackingField;

  /// @brief Field didFinishEvent, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didFinishEvent,
      put =
          __cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* didFinishEvent;

  __declspec(property(get = get_missionId, put = set_missionId)) ::StringW missionId;

  /// @brief Method Finish, addr 0x3b3e690, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::MissionCompletionResults* levelCompletionResults);

  /// @brief Method Init, addr 0x3b3ce00, size 0x3ec, virtual false, abstract: false, final false
  inline void Init(::StringW missionId, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                   ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                   ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                   ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                   ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                   ::StringW backButtonText);

  /// @brief Method Init, addr 0x3b38bc0, size 0x3c0, virtual false, abstract: false, final false
  inline void Init(::StringW missionId, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                   ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                   ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                   ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager,
                   ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::StringW backButtonText);

  static inline ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__gameCoreSceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__gameCoreSceneInfo();

  constexpr ::UnityW<::GlobalNamespace::SceneInfo> const& __cordl_internal_get__missionGameplaySceneInfo() const;

  constexpr ::UnityW<::GlobalNamespace::SceneInfo>& __cordl_internal_get__missionGameplaySceneInfo();

  constexpr ::StringW const& __cordl_internal_get__missionId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__missionId_k__BackingField();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__gameCoreSceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__missionGameplaySceneInfo(::UnityW<::GlobalNamespace::SceneInfo> value);

  constexpr void __cordl_internal_set__missionId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  /// @brief Method .ctor, addr 0x3b3e6b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x3b3bd2c, size 0xb0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  /// @brief Method get_missionId, addr 0x3b3e680, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_missionId();

  /// @brief Method remove_didFinishEvent, addr 0x3b3c20c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  /// @brief Method set_missionId, addr 0x3b3e688, size 0x8, virtual false, abstract: false, final false
  inline void set_missionId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelScenesTransitionSetupDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelScenesTransitionSetupDataSO(MissionLevelScenesTransitionSetupDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelScenesTransitionSetupDataSO(MissionLevelScenesTransitionSetupDataSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5268 };

  /// @brief Field _missionGameplaySceneInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____missionGameplaySceneInfo;

  /// @brief Field _gameCoreSceneInfo, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SceneInfo> ____gameCoreSceneInfo;

  /// @brief Field didFinishEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* ___didFinishEvent;

  /// @brief Field <missionId>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::StringW ____missionId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, ____missionGameplaySceneInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, ____gameCoreSceneInfo) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, ___didFinishEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, ____missionId_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, "", "MissionLevelScenesTransitionSetupDataSO");
