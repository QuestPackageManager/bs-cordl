#pragma once
// IWYU pragma private; include "GlobalNamespace\MissionLevelScenesTransitionSetupData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupData_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MissionLevelScenesTransitionSetupData)
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
class GameplayAdditionalInformation;
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
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MissionLevelScenesTransitionSetupData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MissionLevelScenesTransitionSetupData*, "", "MissionLevelScenesTransitionSetupData");
// Dependencies BeatmapKey, LevelScenesTransitionSetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelScenesTransitionSetupData
class CORDL_TYPE MissionLevelScenesTransitionSetupData : public ::GlobalNamespace::LevelScenesTransitionSetupData {
public:
  // Declarations
  /// @brief Field <beatmapKey>k__BackingField, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__beatmapKey_k__BackingField, put = __cordl_internal_set__beatmapKey_k__BackingField)) ::GlobalNamespace::BeatmapKey _beatmapKey_k__BackingField;

  /// @brief Field <missionId>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__missionId_k__BackingField, put = __cordl_internal_set__missionId_k__BackingField)) ::StringW _missionId_k__BackingField;

  __declspec(property(get = get_beatmapKey, put = set_beatmapKey)) ::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field didFinishEvent, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_didFinishEvent,
      put = __cordl_internal_set_didFinishEvent)) ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* didFinishEvent;

  __declspec(property(get = get_missionId, put = set_missionId)) ::StringW missionId;

  /// @brief Method Finish, addr 0x5972cbc, size 0x28, virtual false, abstract: false, final false
  inline void Finish(::GlobalNamespace::MissionCompletionResults* levelCompletionResults);

  /// @brief Method Init, addr 0x59728c0, size 0x3fc, virtual false, abstract: false, final false
  inline void Init(::StringW missionId, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                   ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives,
                   ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                   ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                   ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager,
                   ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation, ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::StringW backButtonText,
                   ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  static inline ::GlobalNamespace::MissionLevelScenesTransitionSetupData* New_ctor();

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey_k__BackingField() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__missionId_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__missionId_k__BackingField();

  constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* const& __cordl_internal_get_didFinishEvent() const;

  constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*& __cordl_internal_get_didFinishEvent();

  constexpr void __cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set__missionId_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value);

  /// @brief Method .ctor, addr 0x5972ce4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didFinishEvent, addr 0x597271c, size 0xc0, virtual false, abstract: false, final false
  inline void add_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value);

  /// @brief Method get_beatmapKey, addr 0x59728ac, size 0xc, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey get_beatmapKey();

  /// @brief Method get_missionId, addr 0x597289c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_missionId();

  /// @brief Method remove_didFinishEvent, addr 0x59727dc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_didFinishEvent(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value);

  /// @brief Method set_beatmapKey, addr 0x59728b8, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  /// @brief Method set_missionId, addr 0x59728a4, size 0x8, virtual false, abstract: false, final false
  inline void set_missionId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionLevelScenesTransitionSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionLevelScenesTransitionSetupData(MissionLevelScenesTransitionSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionLevelScenesTransitionSetupData(MissionLevelScenesTransitionSetupData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7028 };

  /// @brief Field didFinishEvent, offset: 0x38, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* ___didFinishEvent;

  /// @brief Field <missionId>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::StringW ____missionId_k__BackingField;

  /// @brief Field <beatmapKey>k__BackingField, offset: 0x48, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey ____beatmapKey_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupData, ___didFinishEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupData, ____missionId_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupData, ____beatmapKey_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MissionLevelScenesTransitionSetupData) == 0x58, "Size mismatch!");

} // namespace GlobalNamespace
