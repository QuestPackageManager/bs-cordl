#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuTransitionsHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__TutorialScenesTransitionSetupDataSO_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MenuTransitionsHelper)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
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
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass34_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass35_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass36_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass40_0;
}
namespace GlobalNamespace {
struct __RecordingToolManager__SetupData;
}
namespace GlobalNamespace {
struct __TutorialScenesTransitionSetupDataSO__TutorialEndStateType;
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
class __MenuTransitionsHelper____c__DisplayClass33_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass34_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass35_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass36_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass37_0;
}
namespace GlobalNamespace {
class __MenuTransitionsHelper____c__DisplayClass40_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass35_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0);
MARK_REF_PTR_T(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0);
// Type: ::<>c__DisplayClass33_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass33_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field levelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCompletionResults, put = __cordl_internal_set_levelCompletionResults))::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  /// @brief Field standardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_standardLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> standardLevelScenesTransitionSetupData;

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0* New_ctor();

  /// @brief Method <HandleMainGameSceneDidFinish>b__0, addr 0x26d5400, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMainGameSceneDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __cordl_internal_get_levelCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_standardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get_standardLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set_standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x26d4a18, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass33_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass33_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass33_0(__MenuTransitionsHelper____c__DisplayClass33_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass33_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass33_0(__MenuTransitionsHelper____c__DisplayClass33_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field standardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ___standardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0, ___standardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0, ___levelCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass34_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass34_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(
      property(get = __cordl_internal_get_multiplayerLevelScenesTransitionSetupData,
               put = __cordl_internal_set_multiplayerLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerResultsData, put = __cordl_internal_set_multiplayerResultsData))::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData;

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0* New_ctor();

  /// @brief Method <HandleMultiplayerLevelDidFinish>b__0, addr 0x26d5438, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMultiplayerLevelDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get_multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::MultiplayerResultsData*& __cordl_internal_get_multiplayerResultsData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsData*> const& __cordl_internal_get_multiplayerResultsData() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set_multiplayerResultsData(::GlobalNamespace::MultiplayerResultsData* value);

  /// @brief Method .ctor, addr 0x26d4bf0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass34_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass34_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass34_0(__MenuTransitionsHelper____c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass34_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass34_0(__MenuTransitionsHelper____c__DisplayClass34_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ___multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsData* ___multiplayerResultsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0, ___multiplayerLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0, ___multiplayerResultsData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass35_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass35_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field disconnectedReason, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason))::GlobalNamespace::DisconnectedReason disconnectedReason;

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass35_0* New_ctor();

  /// @brief Method <HandleMultiplayerLevelDidDisconnect>b__0, addr 0x26d5470, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMultiplayerLevelDidDisconnect_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0x26d4d80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass35_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass35_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass35_0(__MenuTransitionsHelper____c__DisplayClass35_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass35_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass35_0(__MenuTransitionsHelper____c__DisplayClass35_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field disconnectedReason, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass35_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass35_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass35_0, ___disconnectedReason) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass36_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass36_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass36_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field missionCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_missionCompletionResults, put = __cordl_internal_set_missionCompletionResults))::GlobalNamespace::MissionCompletionResults* missionCompletionResults;

  /// @brief Field missionLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_missionLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> missionLevelScenesTransitionSetupData;

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0* New_ctor();

  /// @brief Method <HandleMissionLevelSceneDidFinish>b__0, addr 0x26d54a8, size 0x38, virtual false, abstract: false, final false
  inline void _HandleMissionLevelSceneDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::MissionCompletionResults*& __cordl_internal_get_missionCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionCompletionResults*> const& __cordl_internal_get_missionCompletionResults() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get_missionLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_missionCompletionResults(::GlobalNamespace::MissionCompletionResults* value);

  constexpr void __cordl_internal_set_missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x26d4f48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass36_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass36_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass36_0(__MenuTransitionsHelper____c__DisplayClass36_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass36_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass36_0(__MenuTransitionsHelper____c__DisplayClass36_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field missionLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ___missionLevelScenesTransitionSetupData;

  /// @brief Field missionCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionCompletionResults* ___missionCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0, ___missionLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0, ___missionCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass37_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass37_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass37_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field endState, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_endState, put = __cordl_internal_set_endState))::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState;

  /// @brief Field tutorialSceneTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_tutorialSceneTransitionSetupData,
                      put = __cordl_internal_set_tutorialSceneTransitionSetupData))::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> tutorialSceneTransitionSetupData;

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0* New_ctor();

  /// @brief Method <HandleTutorialSceneDidFinish>b__0, addr 0x26d54e0, size 0x3c, virtual false, abstract: false, final false
  inline void _HandleTutorialSceneDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType const& __cordl_internal_get_endState() const;

  constexpr ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType& __cordl_internal_get_endState();

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& __cordl_internal_get_tutorialSceneTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& __cordl_internal_get_tutorialSceneTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_endState(::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType value);

  constexpr void __cordl_internal_set_tutorialSceneTransitionSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x26d5094, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass37_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass37_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass37_0(__MenuTransitionsHelper____c__DisplayClass37_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass37_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass37_0(__MenuTransitionsHelper____c__DisplayClass37_0 const&) = delete;

  /// @brief Field endState, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType ___endState;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field tutorialSceneTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> ___tutorialSceneTransitionSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0, ___endState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0, ___tutorialSceneTransitionSetupData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass40_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuTransitionsHelper::<>c__DisplayClass40_0*
class CORDL_TYPE __MenuTransitionsHelper____c__DisplayClass40_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field beatmapEditorStandardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapEditorStandardLevelScenesTransitionSetupData, put = __cordl_internal_set_beatmapEditorStandardLevelScenesTransitionSetupData))::UnityW<
      ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO> beatmapEditorStandardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCompletionResults, put = __cordl_internal_set_levelCompletionResults))::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  static inline ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0* New_ctor();

  /// @brief Method <HandleBeatmapEditorGameSceneDidFinish>b__0, addr 0x26d551c, size 0x30, virtual false, abstract: false, final false
  inline void _HandleBeatmapEditorGameSceneDidFinish_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_beatmapEditorStandardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get_beatmapEditorStandardLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> const& __cordl_internal_get_levelCompletionResults() const;

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_beatmapEditorStandardLevelScenesTransitionSetupData(::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  /// @brief Method .ctor, addr 0x26d53d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MenuTransitionsHelper____c__DisplayClass40_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MenuTransitionsHelper____c__DisplayClass40_0(__MenuTransitionsHelper____c__DisplayClass40_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MenuTransitionsHelper____c__DisplayClass40_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MenuTransitionsHelper____c__DisplayClass40_0(__MenuTransitionsHelper____c__DisplayClass40_0 const&) = delete;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field beatmapEditorStandardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO> ___beatmapEditorStandardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0, ___beatmapEditorStandardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0, ___levelCompletionResults) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MenuTransitionsHelper
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuTransitionsHelper*
class CORDL_TYPE MenuTransitionsHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass33_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0;

  using __c__DisplayClass34_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0;

  using __c__DisplayClass35_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass35_0;

  using __c__DisplayClass36_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0;

  using __c__DisplayClass37_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0;

  using __c__DisplayClass40_0 = ::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0;

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__appInitScenesTransitionSetupDataContainer,
      put = __cordl_internal_set__appInitScenesTransitionSetupDataContainer))::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> _appInitScenesTransitionSetupDataContainer;

  /// @brief Field _audioClipAsyncLoader, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader))::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader))::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapEditorFinishedCallback, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorFinishedCallback, put = __cordl_internal_set__beatmapEditorFinishedCallback))::System::Action* _beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback, put = __cordl_internal_set__beatmapEditorGameplayLevelFinishedCallback))::System::Action_2<
      ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* _beatmapEditorGameplayLevelFinishedCallback;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel))::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _creditsScenesTransitionSetupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsScenesTransitionSetupData,
                      put = __cordl_internal_set__creditsScenesTransitionSetupData))::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> _creditsScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _graphicSettingsHandler, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicSettingsHandler,
                      put = __cordl_internal_set__graphicSettingsHandler))::BeatSaber::GameSettings::GraphicSettingsHandler* _graphicSettingsHandler;

  /// @brief Field _mainSettingsHandler, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Field _missionLevelFinishedCallback, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelFinishedCallback,
                      put = __cordl_internal_set__missionLevelFinishedCallback))::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,
                                                                                                   ::GlobalNamespace::MissionCompletionResults*>* _missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelRestartedCallback,
                      put = __cordl_internal_set__missionLevelRestartedCallback))::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,
                                                                                                    ::GlobalNamespace::MissionCompletionResults*>* _missionLevelRestartedCallback;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerDidDisconnectCallback, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerDidDisconnectCallback,
                      put = __cordl_internal_set__multiplayerDidDisconnectCallback))::System::Action_1<::GlobalNamespace::DisconnectedReason>* _multiplayerDidDisconnectCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelFinishedCallback,
                      put = __cordl_internal_set__multiplayerLevelFinishedCallback))::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,
                                                                                                       ::GlobalNamespace::MultiplayerResultsData*>* _multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _standardLevelFinishedCallback, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelFinishedCallback,
                      put = __cordl_internal_set__standardLevelFinishedCallback))::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,
                                                                                                    ::GlobalNamespace::LevelCompletionResults*>* _standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelRestartedCallback,
                      put = __cordl_internal_set__standardLevelRestartedCallback))::System::Action_2<::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>,
                                                                                                     ::GlobalNamespace::LevelCompletionResults*>* _standardLevelRestartedCallback;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData))::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> _standardLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialScenesTransitionSetupData,
                      put = __cordl_internal_set__tutorialScenesTransitionSetupData))::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> _tutorialScenesTransitionSetupData;

  /// @brief Method HandleBeatmapEditorGameSceneDidFinish, addr 0x26d529c, size 0x138, virtual false, abstract: false, final false
  inline void HandleBeatmapEditorGameSceneDidFinish(::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO* beatmapEditorStandardLevelScenesTransitionSetupData,
                                                    ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleBeatmapEditorSceneDidFinish, addr 0x26d514c, size 0x150, virtual false, abstract: false, final false
  inline void HandleBeatmapEditorSceneDidFinish(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* beatmapEditorScenesTransitionSetupData);

  /// @brief Method HandleCreditsSceneDidFinish, addr 0x26d509c, size 0xb0, virtual false, abstract: false, final false
  inline void HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneTransitionSetupData);

  /// @brief Method HandleMainGameSceneDidFinish, addr 0x26d4864, size 0x1b4, virtual false, abstract: false, final false
  inline void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleMissionLevelSceneDidFinish, addr 0x26d4d88, size 0x1c0, virtual false, abstract: false, final false
  inline void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMultiplayerLevelDidDisconnect, addr 0x26d4bf8, size 0x188, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                  ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x26d4a20, size 0x1d0, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleTutorialSceneDidFinish, addr 0x26d4f50, size 0x144, virtual false, abstract: false, final false
  inline void HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneTransitionSetupData,
                                           ::GlobalNamespace::__TutorialScenesTransitionSetupDataSO__TutorialEndStateType endState);

  static inline ::GlobalNamespace::MenuTransitionsHelper* New_ctor();

  /// @brief Method OnDestroy, addr 0x26d319c, size 0x25c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RestartGame, addr 0x26d4798, size 0x64, virtual false, abstract: false, final false
  inline void RestartGame(::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ShowCredits, addr 0x26d4698, size 0xf8, virtual false, abstract: false, final false
  inline void ShowCredits();

  /// @brief Method StartBeatmapEditor, addr 0x26d4790, size 0x4, virtual false, abstract: false, final false
  inline void StartBeatmapEditor(::System::Action* beatmapEditorFinishedCallback);

  /// @brief Method StartBeatmapEditorStandardLevel, addr 0x26d4794, size 0x4, virtual false, abstract: false, final false
  inline void StartBeatmapEditorStandardLevel(
      ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
      ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, bool useFirstPersonFlyingController, ::System::Action* beforeSceneSwitchCallback,
      ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);

  /// @brief Method StartMissionLevel, addr 0x26d3a5c, size 0x214, virtual false, abstract: false, final false
  inline void StartMissionLevel(::StringW missionId, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                ::GlobalNamespace::ColorScheme* overrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives,
                                ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                ::System::Action* beforeSceneSwitchCallback,
                                ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* levelFinishedCallback,
                                ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* levelRestartedCallback);

  /// @brief Method StartMultiplayerLevel, addr 0x26d4094, size 0x26c, virtual false, abstract: false, final false
  inline void StartMultiplayerLevel(::StringW gameMode, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                    ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, ::System::Action* beforeSceneSwitchCallback,
                                    ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
                                    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
                                    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback);

  /// @brief Method StartMultiplayerLevel, addr 0x26d4058, size 0x3c, virtual false, abstract: false, final false
  inline void StartMultiplayerLevel(::StringW gameMode, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                    ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, ::System::Action* beforeSceneSwitchCallback,
                                    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
                                    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback);

  /// @brief Method StartStandardLevel, addr 0x26d3850, size 0x20c, virtual false, abstract: false, final false
  inline void StartStandardLevel(::StringW gameMode, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                 ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
                                 ::GlobalNamespace::ColorScheme* overrideColorScheme, ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme,
                                 ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                 ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::StringW backButtonText,
                                 bool useTestNoteCutSoundEffects, bool startPaused, ::System::Action* beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback,
                                 ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method StartStandardLevel, addr 0x26d34a8, size 0x20c, virtual false, abstract: false, final false
  inline void StartStandardLevel(::StringW gameMode, ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                 ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                 ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                 ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
                                 ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused,
                                 ::System::Action* beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback,
                                 ::System::Nullable_1<::GlobalNamespace::__RecordingToolManager__SetupData> recordingToolData);

  /// @brief Method StartTutorial, addr 0x26d44e0, size 0x108, virtual false, abstract: false, final false
  inline void StartTutorial(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::System::Action* beforeSceneSwitchCallback);

  /// @brief Method StopStandardLevel, addr 0x26d47fc, size 0x68, virtual false, abstract: false, final false
  inline void StopStandardLevel();

  /// @brief Method <HandleBeatmapEditorSceneDidFinish>b__39_0, addr 0x26d53e4, size 0x1c, virtual false, abstract: false, final false
  inline void _HandleBeatmapEditorSceneDidFinish_b__39_0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const& __cordl_internal_get__appInitScenesTransitionSetupDataContainer() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& __cordl_internal_get__appInitScenesTransitionSetupDataContainer();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataLoader*> const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::System::Action*& __cordl_internal_get__beatmapEditorFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get__beatmapEditorFinishedCallback() const;

  constexpr ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*&
  __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*> const&
  __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsEntitlementModel*> const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> const& __cordl_internal_get__creditsScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>& __cordl_internal_get__creditsScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& __cordl_internal_get__graphicSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const& __cordl_internal_get__graphicSettingsHandler() const;

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*&
  __cordl_internal_get__missionLevelFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*> const&
  __cordl_internal_get__missionLevelFinishedCallback() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*&
  __cordl_internal_get__missionLevelRestartedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>*> const&
  __cordl_internal_get__missionLevelRestartedCallback() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get__multiplayerDidDisconnectCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::DisconnectedReason>*> const& __cordl_internal_get__multiplayerDidDisconnectCallback() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>*&
  __cordl_internal_get__multiplayerLevelFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>*> const&
  __cordl_internal_get__multiplayerLevelFinishedCallback() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*&
  __cordl_internal_get__standardLevelFinishedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*> const&
  __cordl_internal_get__standardLevelFinishedCallback() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*& __cordl_internal_get__standardLevelRestartedCallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>*> const&
  __cordl_internal_get__standardLevelRestartedCallback() const;

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

  constexpr void __cordl_internal_set__graphicSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void
  __cordl_internal_set__missionLevelFinishedCallback(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr void
  __cordl_internal_set__missionLevelRestartedCallback(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerDidDisconnectCallback(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set__multiplayerLevelFinishedCallback(
      ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void
  __cordl_internal_set__standardLevelFinishedCallback(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void
  __cordl_internal_set__standardLevelRestartedCallback(::System::Action_2<::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__tutorialScenesTransitionSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x26d53dc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _appInitScenesTransitionSetupDataContainer, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> ____appInitScenesTransitionSetupDataContainer;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ____standardLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ____missionLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> ____tutorialScenesTransitionSetupData;

  /// @brief Field _creditsScenesTransitionSetupData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> ____creditsScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _beatmapDataLoader, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _graphicSettingsHandler, offset: 0x68, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* ____graphicSettingsHandler;

  /// @brief Field _mainSettingsHandler, offset: 0x70, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  /// @brief Field _beatmapLevelsModel, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _standardLevelFinishedCallback, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::LevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelRestartedCallback;

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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper, 0xc0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____appInitScenesTransitionSetupDataContainer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____tutorialScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____creditsScenesTransitionSetupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____gameScenesManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapDataLoader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapLevelsEntitlementModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____audioClipAsyncLoader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____graphicSettingsHandler) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____mainSettingsHandler) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapLevelsModel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelFinishedCallback) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelRestartedCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelFinishedCallback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerDidDisconnectCallback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelFinishedCallback) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelRestartedCallback) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorFinishedCallback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorGameplayLevelFinishedCallback) == 0xb8, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper*, "", "MenuTransitionsHelper");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass33_0*, "", "MenuTransitionsHelper/<>c__DisplayClass33_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass34_0*, "", "MenuTransitionsHelper/<>c__DisplayClass34_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass35_0*, "", "MenuTransitionsHelper/<>c__DisplayClass35_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass36_0*, "", "MenuTransitionsHelper/<>c__DisplayClass36_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass37_0*, "", "MenuTransitionsHelper/<>c__DisplayClass37_0");
NEED_NO_BOX(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuTransitionsHelper____c__DisplayClass40_0*, "", "MenuTransitionsHelper/<>c__DisplayClass40_0");
