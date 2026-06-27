#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
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
class SettingsManager;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO);
// Dependencies BeatmapKey, LevelScenesTransitionSetupDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionLevelScenesTransitionSetupDataSO
class CORDL_TYPE MissionLevelScenesTransitionSetupDataSO : public ::GlobalNamespace::LevelScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief Field <beatmapKey>k__BackingField, offset 0x50, size 0x20 
 __declspec(property(get=__cordl_internal_get__beatmapKey_k__BackingField, put=__cordl_internal_set__beatmapKey_k__BackingField)) ::GlobalNamespace::BeatmapKey  _beatmapKey_k__BackingField;

/// @brief Field <missionId>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__missionId_k__BackingField, put=__cordl_internal_set__missionId_k__BackingField)) ::StringW  _missionId_k__BackingField;

 __declspec(property(get=get_beatmapKey, put=set_beatmapKey)) ::GlobalNamespace::BeatmapKey  beatmapKey;

/// @brief Field didFinishEvent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_didFinishEvent, put=__cordl_internal_set_didFinishEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MissionCompletionResults*>*  didFinishEvent;

 __declspec(property(get=get_missionId, put=set_missionId)) ::StringW  missionId;

/// @brief Method Finish, addr 0x57f2370, size 0x28, virtual false, abstract: false, final false
inline void Finish(::GlobalNamespace::MissionCompletionResults*  levelCompletionResults) ;

/// @brief Method Init, addr 0x57ebfe4, size 0x45c, virtual false, abstract: false, final false
inline void Init(::StringW  missionId, ::ByRef<::GlobalNamespace::BeatmapKey>  beatmapKey, ::GlobalNamespace::BeatmapLevel*  beatmapLevel, ::ArrayW<::GlobalNamespace::MissionObjective*,::Array<::GlobalNamespace::MissionObjective*>*>  missionObjectives, ::GlobalNamespace::ColorScheme*  playerOverrideColorScheme, bool  playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings*  playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel*  environmentsListModel, ::GlobalNamespace::AudioClipAsyncLoader*  audioClipAsyncLoader, ::GlobalNamespace::SettingsManager*  settingsManager, ::GlobalNamespace::BeatmapDataLoader*  beatmapDataLoader, ::StringW  backButtonText, ::GlobalNamespace::BeatmapLevelsModel*  beatmapLevelsModel, ::GlobalNamespace::IBeatmapLevelData*  beatmapLevelData) ;

static inline ::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* New_ctor() ;

constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get__beatmapKey_k__BackingField() const;

constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get__beatmapKey_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__missionId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__missionId_k__BackingField() ;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MissionCompletionResults*>* const& __cordl_internal_get_didFinishEvent() const;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MissionCompletionResults*>*& __cordl_internal_get_didFinishEvent() ;

constexpr void __cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey  value) ;

constexpr void __cordl_internal_set__missionId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MissionCompletionResults*>*  value) ;

/// @brief Method .ctor, addr 0x57f2398, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_didFinishEvent, addr 0x57ef39c, size 0xc0, virtual false, abstract: false, final false
inline void add_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MissionCompletionResults*>*  value) ;

/// @brief Method get_beatmapKey, addr 0x57f2358, size 0xc, virtual false, abstract: false, final false
inline ::GlobalNamespace::BeatmapKey get_beatmapKey() ;

/// @brief Method get_missionId, addr 0x57f2348, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_missionId() ;

/// @brief Method remove_didFinishEvent, addr 0x57ef898, size 0xc0, virtual false, abstract: false, final false
inline void remove_didFinishEvent(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MissionCompletionResults*>*  value) ;

/// @brief Method set_beatmapKey, addr 0x57f2364, size 0xc, virtual false, abstract: false, final false
inline void set_beatmapKey(::GlobalNamespace::BeatmapKey  value) ;

/// @brief Method set_missionId, addr 0x57f2350, size 0x8, virtual false, abstract: false, final false
inline void set_missionId(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MissionLevelScenesTransitionSetupDataSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionLevelScenesTransitionSetupDataSO(MissionLevelScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionLevelScenesTransitionSetupDataSO(MissionLevelScenesTransitionSetupDataSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6853};

/// @brief Field didFinishEvent, offset: 0x40, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,::GlobalNamespace::MissionCompletionResults*>*  ___didFinishEvent;

/// @brief Field <missionId>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____missionId_k__BackingField;

/// @brief Field <beatmapKey>k__BackingField, offset: 0x50, size: 0x20, def value: None
 ::GlobalNamespace::BeatmapKey  ____beatmapKey_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, ___didFinishEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, ____missionId_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, ____beatmapKey_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO*, "", "MissionLevelScenesTransitionSetupDataSO");
