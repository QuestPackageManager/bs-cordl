#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuTransitionsHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MenuTransitionsHelper)
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataContainerSO;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct BeatmapEditorStartTestLevelData;
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
class CreditsScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct DisconnectedReason;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class GameScenesManager;
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
class LevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass32_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass33_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass34_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass35_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass39_0;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MultiplayerResultsData;
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
class SettingsManager;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct TutorialScenesTransitionSetupDataSO_TutorialEndStateType;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Action;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass32_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass33_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass34_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass35_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass39_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c
class CORDL_TYPE MenuTransitionsHelper___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MenuTransitionsHelper___c* __9;

  /// @brief Field <>9__36_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__36_0, put = setStaticF___9__36_0)) ::System::Action_1<::Zenject::DiContainer*>* __9__36_0;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c* New_ctor();

  /// @brief Method <HandleTutorialSceneDidFinish>b__36_0, addr 0x3b41358, size 0x4, virtual false, abstract: false, final false
  inline void _HandleTutorialSceneDidFinish_b__36_0(::Zenject::DiContainer* container);

  /// @brief Method .ctor, addr 0x3b41350, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MenuTransitionsHelper___c* getStaticF___9();

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF___9__36_0();

  static inline void setStaticF___9(::GlobalNamespace::MenuTransitionsHelper___c* value);

  static inline void setStaticF___9__36_0(::System::Action_1<::Zenject::DiContainer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c(MenuTransitionsHelper___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c(MenuTransitionsHelper___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5260 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass32_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass32_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field levelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCompletionResults, put = __cordl_internal_set_levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  /// @brief Field standardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_standardLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>
      standardLevelScenesTransitionSetupData;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0* New_ctor();

  /// @brief Method <HandleMainGameSceneDidFinish>b__0, addr 0x3b4135c, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMainGameSceneDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::LevelCompletionResults* const& __cordl_internal_get_levelCompletionResults() const;

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_standardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get_standardLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set_standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3b408fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass32_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass32_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass32_0(MenuTransitionsHelper___c__DisplayClass32_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass32_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass32_0(MenuTransitionsHelper___c__DisplayClass32_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5261 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field standardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ___standardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0, ___standardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0, ___levelCompletionResults) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass33_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_multiplayerLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>
      multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerResultsData, put = __cordl_internal_set_multiplayerResultsData)) ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0* New_ctor();

  /// @brief Method <HandleMultiplayerLevelDidFinish>b__0, addr 0x3b41394, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMultiplayerLevelDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get_multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::MultiplayerResultsData* const& __cordl_internal_get_multiplayerResultsData() const;

  constexpr ::GlobalNamespace::MultiplayerResultsData*& __cordl_internal_get_multiplayerResultsData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set_multiplayerResultsData(::GlobalNamespace::MultiplayerResultsData* value);

  /// @brief Method .ctor, addr 0x3b40ac8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass33_0(MenuTransitionsHelper___c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass33_0(MenuTransitionsHelper___c__DisplayClass33_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5262 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ___multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsData* ___multiplayerResultsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0, ___multiplayerLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0, ___multiplayerResultsData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DisconnectedReason, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass34_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field disconnectedReason, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0* New_ctor();

  /// @brief Method <HandleMultiplayerLevelDidDisconnect>b__0, addr 0x3b413cc, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMultiplayerLevelDidDisconnect_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0x3b40c5c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass34_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass34_0(MenuTransitionsHelper___c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass34_0(MenuTransitionsHelper___c__DisplayClass34_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5263 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field disconnectedReason, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0, ___disconnectedReason) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass35_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field missionCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_missionCompletionResults, put = __cordl_internal_set_missionCompletionResults)) ::GlobalNamespace::MissionCompletionResults* missionCompletionResults;

  /// @brief Field missionLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_missionLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>
      missionLevelScenesTransitionSetupData;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0* New_ctor();

  /// @brief Method <HandleMissionLevelSceneDidFinish>b__0, addr 0x3b41404, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMissionLevelSceneDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::MissionCompletionResults* const& __cordl_internal_get_missionCompletionResults() const;

  constexpr ::GlobalNamespace::MissionCompletionResults*& __cordl_internal_get_missionCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get_missionLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_missionCompletionResults(::GlobalNamespace::MissionCompletionResults* value);

  constexpr void __cordl_internal_set_missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3b40e1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass35_0(MenuTransitionsHelper___c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass35_0(MenuTransitionsHelper___c__DisplayClass35_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5264 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field missionLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ___missionLevelScenesTransitionSetupData;

  /// @brief Field missionCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionCompletionResults* ___missionCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0, ___missionLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0, ___missionCompletionResults) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass39_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass39_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field beatmapEditorStandardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEditorStandardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_beatmapEditorStandardLevelScenesTransitionSetupData)) ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>
      beatmapEditorStandardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCompletionResults, put = __cordl_internal_set_levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0* New_ctor();

  /// @brief Method <HandleBeatmapEditorGameSceneDidFinish>b__0, addr 0x3b4143c, size 0x30, virtual false, abstract: false, final false
  inline void _HandleBeatmapEditorGameSceneDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_beatmapEditorStandardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get_beatmapEditorStandardLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::LevelCompletionResults* const& __cordl_internal_get_levelCompletionResults() const;

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_beatmapEditorStandardLevelScenesTransitionSetupData(::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  /// @brief Method .ctor, addr 0x3b412c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass39_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass39_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass39_0(MenuTransitionsHelper___c__DisplayClass39_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass39_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass39_0(MenuTransitionsHelper___c__DisplayClass39_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5265 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field beatmapEditorStandardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO> ___beatmapEditorStandardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0, ___beatmapEditorStandardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0, ___levelCompletionResults) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper
class CORDL_TYPE MenuTransitionsHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::MenuTransitionsHelper___c;

  using __c__DisplayClass32_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0;

  using __c__DisplayClass33_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0;

  using __c__DisplayClass34_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0;

  using __c__DisplayClass35_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0;

  using __c__DisplayClass39_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
                      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer)) ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>
      _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _audioClipAsyncLoader, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader)) ::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapEditorFinishedCallback, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorFinishedCallback, put = __cordl_internal_set__beatmapEditorFinishedCallback)) ::System::Action* _beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback, put = __cordl_internal_set__beatmapEditorGameplayLevelFinishedCallback)) ::System::Action_2<
      ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* _beatmapEditorGameplayLevelFinishedCallback;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _creditsScenesTransitionSetupData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsScenesTransitionSetupData,
                      put = __cordl_internal_set__creditsScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>
      _creditsScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _missionLevelFinishedCallback, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelFinishedCallback,
                      put = __cordl_internal_set__missionLevelFinishedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,
                                                                                                    ::GlobalNamespace::MissionCompletionResults*>* _missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelRestartedCallback,
                      put = __cordl_internal_set__missionLevelRestartedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,
                                                                                                     ::GlobalNamespace::MissionCompletionResults*>* _missionLevelRestartedCallback;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>
      _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerDidDisconnectCallback, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerDidDisconnectCallback,
                      put = __cordl_internal_set__multiplayerDidDisconnectCallback)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>* _multiplayerDidDisconnectCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelFinishedCallback,
                      put = __cordl_internal_set__multiplayerLevelFinishedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,
                                                                                                        ::GlobalNamespace::MultiplayerResultsData*>* _multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>
      _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _settingsManager, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _standardLevelFinishedCallback, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelFinishedCallback,
                      put = __cordl_internal_set__standardLevelFinishedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,
                                                                                                     ::GlobalNamespace::LevelCompletionResults*>* _standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelRestartedCallback,
                      put = __cordl_internal_set__standardLevelRestartedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,
                                                                                                      ::GlobalNamespace::LevelCompletionResults*>* _standardLevelRestartedCallback;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>
      _standardLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialScenesTransitionSetupData,
                      put = __cordl_internal_set__tutorialScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>
      _tutorialScenesTransitionSetupData;

  /// @brief Method HandleBeatmapEditorGameSceneDidFinish, addr 0x3b41190, size 0x138, virtual false, abstract: false, final false
  inline void HandleBeatmapEditorGameSceneDidFinish(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* beatmapEditorStandardLevelScenesTransitionSetupData,
                                                    ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleBeatmapEditorSceneDidFinish, addr 0x3b41068, size 0x128, virtual false, abstract: false, final false
  inline void HandleBeatmapEditorSceneDidFinish(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* beatmapEditorScenesTransitionSetupData);

  /// @brief Method HandleCreditsSceneDidFinish, addr 0x3b40fbc, size 0xac, virtual false, abstract: false, final false
  inline void HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneTransitionSetupData);

  /// @brief Method HandleMainGameSceneDidFinish, addr 0x3b40750, size 0x1ac, virtual false, abstract: false, final false
  inline void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleMissionLevelSceneDidFinish, addr 0x3b40c64, size 0x1b8, virtual false, abstract: false, final false
  inline void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMultiplayerLevelDidDisconnect, addr 0x3b40ad0, size 0x18c, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                  ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x3b40904, size 0x1c4, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleTutorialSceneDidFinish, addr 0x3b40e24, size 0x198, virtual false, abstract: false, final false
  inline void HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneTransitionSetupData,
                                           ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType endState);

  static inline ::GlobalNamespace::MenuTransitionsHelper* New_ctor();

  /// @brief Method OnDestroy, addr 0x3b3f294, size 0x244, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RestartGame, addr 0x3b4068c, size 0x64, virtual false, abstract: false, final false
  inline void RestartGame(::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ShowCredits, addr 0x3b40594, size 0xf0, virtual false, abstract: false, final false
  inline void ShowCredits();

  /// @brief Method StartBeatmapEditor, addr 0x3b40684, size 0x4, virtual false, abstract: false, final false
  inline void StartBeatmapEditor(::System::Action* beatmapEditorFinishedCallback);

  /// @brief Method StartBeatmapEditorStandardLevel, addr 0x3b40688, size 0x4, virtual false, abstract: false, final false
  inline void StartBeatmapEditorStandardLevel(
      ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
      ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData> data,
      ::System::Action* beforeSceneSwitchCallback,
      ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);

  /// @brief Method StartMissionLevel, addr 0x3b3fa58, size 0x194, virtual false, abstract: false, final false
  inline void StartMissionLevel(::StringW missionId, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                ::GlobalNamespace::ColorScheme* overrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives,
                                ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                ::System::Action* beforeSceneSwitchCallback,
                                ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* levelFinishedCallback,
                                ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* levelRestartedCallback);

  /// @brief Method StartMultiplayerLevel, addr 0x3b40014, size 0x1f0, virtual false, abstract: false, final false
  inline void StartMultiplayerLevel(::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                    ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, ::System::Action* beforeSceneSwitchCallback,
                                    ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
                                    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
                                    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback);

  /// @brief Method StartMultiplayerLevel, addr 0x3b3ffd8, size 0x3c, virtual false, abstract: false, final false
  inline void StartMultiplayerLevel(::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                    ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, ::System::Action* beforeSceneSwitchCallback,
                                    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
                                    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback);

  /// @brief Method StartStandardLevel, addr 0x3b3f8b0, size 0x1a8, virtual false, abstract: false, final false
  inline void StartStandardLevel(::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                 ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
                                 ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme,
                                 ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                 ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::StringW backButtonText,
                                 bool useTestNoteCutSoundEffects, bool startPaused, ::System::Action* beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback,
                                 ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method StartStandardLevel, addr 0x3b3f588, size 0x1a0, virtual false, abstract: false, final false
  inline void StartStandardLevel(::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                 ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme,
                                 bool playerOverrideLightshowColors, ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                 ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                                 ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused,
                                 ::System::Action* beforeSceneSwitchToGameplayCallback, ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchToGameplayCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback,
                                 ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method StartTutorial, addr 0x3b403e4, size 0x100, virtual false, abstract: false, final false
  inline void StartTutorial(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::System::Action* beforeSceneSwitchCallback);

  /// @brief Method StopStandardLevel, addr 0x3b406f0, size 0x60, virtual false, abstract: false, final false
  inline void StopStandardLevel();

  /// @brief Method <HandleBeatmapEditorSceneDidFinish>b__38_0, addr 0x3b412d8, size 0x1c, virtual false, abstract: false, final false
  inline void _HandleBeatmapEditorSceneDidFinish_b__38_0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::GlobalNamespace::BeatmapDataLoader* const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::System::Action* const& __cordl_internal_get__beatmapEditorFinishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get__beatmapEditorFinishedCallback();

  constexpr ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* const&
  __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback() const;

  constexpr ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*&
  __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback();

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> const& __cordl_internal_get__creditsScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>& __cordl_internal_get__creditsScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* const&
  __cordl_internal_get__missionLevelFinishedCallback() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*&
  __cordl_internal_get__missionLevelFinishedCallback();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* const&
  __cordl_internal_get__missionLevelRestartedCallback() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*&
  __cordl_internal_get__missionLevelRestartedCallback();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& __cordl_internal_get__multiplayerDidDisconnectCallback() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get__multiplayerDidDisconnectCallback();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* const&
  __cordl_internal_get__multiplayerLevelFinishedCallback() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>*&
  __cordl_internal_get__multiplayerLevelFinishedCallback();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* const&
  __cordl_internal_get__standardLevelFinishedCallback() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*&
  __cordl_internal_get__standardLevelFinishedCallback();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* const&
  __cordl_internal_get__standardLevelRestartedCallback() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*&
  __cordl_internal_get__standardLevelRestartedCallback();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& __cordl_internal_get__tutorialScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& __cordl_internal_get__tutorialScenesTransitionSetupData();

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapEditorFinishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set__beatmapEditorGameplayLevelFinishedCallback(
      ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__creditsScenesTransitionSetupData(::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void
  __cordl_internal_set__missionLevelFinishedCallback(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr void
  __cordl_internal_set__missionLevelRestartedCallback(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerDidDisconnectCallback(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set__multiplayerLevelFinishedCallback(
      ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void
  __cordl_internal_set__standardLevelFinishedCallback(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void
  __cordl_internal_set__standardLevelRestartedCallback(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__tutorialScenesTransitionSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x3b412d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper(MenuTransitionsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper(MenuTransitionsHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5266 };

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> ____tutorialScenesTransitionSetupData;

  /// @brief Field _creditsScenesTransitionSetupData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> ____creditsScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _beatmapDataLoader, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _settingsManager, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _beatmapLevelsModel, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _standardLevelFinishedCallback, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelRestartedCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* ____multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerDidDisconnectCallback, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ____multiplayerDidDisconnectCallback;

  /// @brief Field _missionLevelFinishedCallback, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* ____missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* ____missionLevelRestartedCallback;

  /// @brief Field _beatmapEditorFinishedCallback, offset: 0xb0, size: 0x8, def value: None
  ::System::Action* ____beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ____beatmapEditorGameplayLevelFinishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____appInitScenesTransitionSetupDataContainer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____tutorialScenesTransitionSetupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____creditsScenesTransitionSetupData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____gameScenesManager) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapDataLoader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapLevelsEntitlementModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____audioClipAsyncLoader) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____settingsManager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapLevelsModel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelFinishedCallback) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelRestartedCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelFinishedCallback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerDidDisconnectCallback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelFinishedCallback) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelRestartedCallback) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorFinishedCallback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorGameplayLevelFinishedCallback) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper, 0xc0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper*, "", "MenuTransitionsHelper");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c*, "", "MenuTransitionsHelper/<>c");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass32_0*, "", "MenuTransitionsHelper/<>c__DisplayClass32_0");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0*, "", "MenuTransitionsHelper/<>c__DisplayClass33_0");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0*, "", "MenuTransitionsHelper/<>c__DisplayClass34_0");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0*, "", "MenuTransitionsHelper/<>c__DisplayClass35_0");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass39_0*, "", "MenuTransitionsHelper/<>c__DisplayClass39_0");
