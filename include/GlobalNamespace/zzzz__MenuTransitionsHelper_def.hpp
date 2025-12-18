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
namespace Analytics::Model {
class TelemetryModel;
}
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
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
class GameplayAdditionalInformation;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass49_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass57_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass58_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass59_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass60_0;
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
class RecordingToolScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StartupErrorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct TutorialScenesTransitionSetupDataSO_TutorialEndStateType;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupDataSO;
}
namespace System::Diagnostics {
class Stopwatch;
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
class MenuTransitionsHelper___c__DisplayClass49_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass57_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass58_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass59_0;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass60_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass59_0);
MARK_REF_PTR_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c
class CORDL_TYPE MenuTransitionsHelper___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MenuTransitionsHelper___c* __9;

  /// @brief Field <>9__61_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__61_0, put = setStaticF___9__61_0)) ::System::Action_1<::Zenject::DiContainer*>* __9__61_0;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c* New_ctor();

  /// @brief Method <HandleTutorialSceneDidFinish>b__61_0, addr 0x577fb18, size 0x4, virtual false, abstract: false, final false
  inline void _HandleTutorialSceneDidFinish_b__61_0(::Zenject::DiContainer* _);

  /// @brief Method .ctor, addr 0x577fb14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MenuTransitionsHelper___c* getStaticF___9();

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF___9__61_0();

  static inline void setStaticF___9(::GlobalNamespace::MenuTransitionsHelper___c* value);

  static inline void setStaticF___9__61_0(::System::Action_1<::Zenject::DiContainer*>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass49_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass49_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field afterSceneSwitchToGameplayCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_afterSceneSwitchToGameplayCallback,
                      put = __cordl_internal_set_afterSceneSwitchToGameplayCallback)) ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchToGameplayCallback;

  /// @brief Field gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field serializedBeatmapKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedBeatmapKey, put = __cordl_internal_set_serializedBeatmapKey)) ::StringW serializedBeatmapKey;

  /// @brief Field stopwatch, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stopwatch, put = __cordl_internal_set_stopwatch)) ::System::Diagnostics::Stopwatch* stopwatch;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0* New_ctor();

  /// @brief Method <StartStandardLevel>b__0, addr 0x577fb1c, size 0xdc, virtual false, abstract: false, final false
  inline void _StartStandardLevel_b__0(::Zenject::DiContainer* container);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_afterSceneSwitchToGameplayCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_afterSceneSwitchToGameplayCallback();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::StringW const& __cordl_internal_get_serializedBeatmapKey() const;

  constexpr ::StringW& __cordl_internal_get_serializedBeatmapKey();

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_stopwatch() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_stopwatch();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_afterSceneSwitchToGameplayCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_serializedBeatmapKey(::StringW value);

  constexpr void __cordl_internal_set_stopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x577e4b8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass49_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass49_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass49_0(MenuTransitionsHelper___c__DisplayClass49_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass49_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass49_0(MenuTransitionsHelper___c__DisplayClass49_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6834 };

  /// @brief Field stopwatch, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ___stopwatch;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field serializedBeatmapKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___serializedBeatmapKey;

  /// @brief Field gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field afterSceneSwitchToGameplayCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___afterSceneSwitchToGameplayCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0, ___stopwatch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0, ___serializedBeatmapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0, ___gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0, ___afterSceneSwitchToGameplayCallback) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass57_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass57_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0* New_ctor();

  /// @brief Method <HandleMainGameSceneDidFinish>b__0, addr 0x577fbf8, size 0x34, virtual false, abstract: false, final false
  inline void _HandleMainGameSceneDidFinish_b__0(::Zenject::DiContainer* _);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::LevelCompletionResults* const& __cordl_internal_get_levelCompletionResults() const;

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_standardLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get_standardLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set_standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x577f338, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass57_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass57_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass57_0(MenuTransitionsHelper___c__DisplayClass57_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass57_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass57_0(MenuTransitionsHelper___c__DisplayClass57_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6835 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field standardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ___standardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0, ___standardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0, ___levelCompletionResults) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass58_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass58_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0* New_ctor();

  /// @brief Method <HandleMultiplayerLevelDidFinish>b__0, addr 0x577fc2c, size 0x34, virtual false, abstract: false, final false
  inline void _HandleMultiplayerLevelDidFinish_b__0(::Zenject::DiContainer* _);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>& __cordl_internal_get_multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::MultiplayerResultsData* const& __cordl_internal_get_multiplayerResultsData() const;

  constexpr ::GlobalNamespace::MultiplayerResultsData*& __cordl_internal_get_multiplayerResultsData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set_multiplayerResultsData(::GlobalNamespace::MultiplayerResultsData* value);

  /// @brief Method .ctor, addr 0x577f4fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass58_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass58_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass58_0(MenuTransitionsHelper___c__DisplayClass58_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass58_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass58_0(MenuTransitionsHelper___c__DisplayClass58_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6836 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> ___multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsData* ___multiplayerResultsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0, ___multiplayerLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0, ___multiplayerResultsData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DisconnectedReason, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass59_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass59_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> __4__this;

  /// @brief Field disconnectedReason, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass59_0* New_ctor();

  /// @brief Method <HandleMultiplayerLevelDidDisconnect>b__0, addr 0x577fc60, size 0x30, virtual false, abstract: false, final false
  inline void _HandleMultiplayerLevelDidDisconnect_b__0(::Zenject::DiContainer* _);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0x577f690, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass59_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass59_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass59_0(MenuTransitionsHelper___c__DisplayClass59_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass59_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass59_0(MenuTransitionsHelper___c__DisplayClass59_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6837 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field disconnectedReason, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass59_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass59_0, ___disconnectedReason) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass59_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass60_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass60_0 : public ::System::Object {
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

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0* New_ctor();

  /// @brief Method <HandleMissionLevelSceneDidFinish>b__0, addr 0x577fc90, size 0x34, virtual false, abstract: false, final false
  inline void _HandleMissionLevelSceneDidFinish_b__0(::Zenject::DiContainer* _);

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::MissionCompletionResults* const& __cordl_internal_get_missionCompletionResults() const;

  constexpr ::GlobalNamespace::MissionCompletionResults*& __cordl_internal_get_missionCompletionResults();

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_missionLevelScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& __cordl_internal_get_missionLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_missionCompletionResults(::GlobalNamespace::MissionCompletionResults* value);

  constexpr void __cordl_internal_set_missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x577f858, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass60_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass60_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass60_0(MenuTransitionsHelper___c__DisplayClass60_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass60_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass60_0(MenuTransitionsHelper___c__DisplayClass60_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6838 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _____4__this;

  /// @brief Field missionLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> ___missionLevelScenesTransitionSetupData;

  /// @brief Field missionCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionCompletionResults* ___missionCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0, ___missionLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0, ___missionCompletionResults) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper
class CORDL_TYPE MenuTransitionsHelper : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::MenuTransitionsHelper___c;

  using __c__DisplayClass49_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0;

  using __c__DisplayClass57_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0;

  using __c__DisplayClass58_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0;

  using __c__DisplayClass59_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass59_0;

  using __c__DisplayClass60_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0;

  /// @brief Field _appInitScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__appInitScenesTransitionSetupData,
                      put = __cordl_internal_set__appInitScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO>
      _appInitScenesTransitionSetupData;

  /// @brief Field _audioClipAsyncLoader, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader)) ::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapEditorFinishedCallback, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorFinishedCallback, put = __cordl_internal_set__beatmapEditorFinishedCallback)) ::System::Action* _beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback, put = __cordl_internal_set__beatmapEditorGameplayLevelFinishedCallback)) ::System::Action_2<
      ::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* _beatmapEditorGameplayLevelFinishedCallback;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _creditsScenesTransitionSetupData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsScenesTransitionSetupData,
                      put = __cordl_internal_set__creditsScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>
      _creditsScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _healthWarningScenesTransitionSetupData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningScenesTransitionSetupData,
                      put = __cordl_internal_set__healthWarningScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>
      _healthWarningScenesTransitionSetupData;

  /// @brief Field _menuScenesTransitionSetupData, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__menuScenesTransitionSetupData,
                      put = __cordl_internal_set__menuScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>
      _menuScenesTransitionSetupData;

  /// @brief Field _missionLevelFinishedCallback, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelFinishedCallback,
                      put = __cordl_internal_set__missionLevelFinishedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,
                                                                                                    ::GlobalNamespace::MissionCompletionResults*>* _missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelRestartedCallback,
                      put = __cordl_internal_set__missionLevelRestartedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>,
                                                                                                     ::GlobalNamespace::MissionCompletionResults*>* _missionLevelRestartedCallback;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>
      _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerDidDisconnectCallback, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerDidDisconnectCallback,
                      put = __cordl_internal_set__multiplayerDidDisconnectCallback)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>* _multiplayerDidDisconnectCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelFinishedCallback,
                      put = __cordl_internal_set__multiplayerLevelFinishedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>,
                                                                                                        ::GlobalNamespace::MultiplayerResultsData*>* _multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>
      _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _recordingToolScenesTransitionSetupData, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolScenesTransitionSetupData,
                      put = __cordl_internal_set__recordingToolScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>
      _recordingToolScenesTransitionSetupData;

  /// @brief Field _settingsManager, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _shaderWarmupSceneSetupData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderWarmupSceneSetupData,
                      put = __cordl_internal_set__shaderWarmupSceneSetupData)) ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>
      _shaderWarmupSceneSetupData;

  /// @brief Field _standardLevelFinishedCallback, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelFinishedCallback,
                      put = __cordl_internal_set__standardLevelFinishedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,
                                                                                                     ::GlobalNamespace::LevelCompletionResults*>* _standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelRestartedCallback,
                      put = __cordl_internal_set__standardLevelRestartedCallback)) ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>,
                                                                                                      ::GlobalNamespace::LevelCompletionResults*>* _standardLevelRestartedCallback;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>
      _standardLevelScenesTransitionSetupData;

  /// @brief Field _startupErrorScenesTransitionSetupData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__startupErrorScenesTransitionSetupData,
                      put = __cordl_internal_set__startupErrorScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO>
      _startupErrorScenesTransitionSetupData;

  /// @brief Field _telemetryModel, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__telemetryModel, put = __cordl_internal_set__telemetryModel)) ::Analytics::Model::TelemetryModel* _telemetryModel;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialScenesTransitionSetupData,
                      put = __cordl_internal_set__tutorialScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>
      _tutorialScenesTransitionSetupData;

  __declspec(property(get = get_appInitScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> appInitScenesTransitionSetupData;

  __declspec(property(get = get_creditsScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> creditsScenesTransitionSetupData;

  __declspec(property(get = get_healthWarningScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> healthWarningScenesTransitionSetupData;

  __declspec(property(get = get_menuScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> menuScenesTransitionSetupData;

  __declspec(property(get = get_missionLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> missionLevelScenesTransitionSetupData;

  __declspec(property(get = get_multiplayerLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> multiplayerLevelScenesTransitionSetupData;

  __declspec(property(get = get_recordingToolScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> recordingToolScenesTransitionSetupData;

  __declspec(property(get = get_shaderWarmupSceneSetupData)) ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> shaderWarmupSceneSetupData;

  __declspec(property(get = get_standardLevelScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> standardLevelScenesTransitionSetupData;

  __declspec(property(get = get_startupErrorScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> startupErrorScenesTransitionSetupData;

  __declspec(property(get = get_tutorialScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> tutorialScenesTransitionSetupData;

  /// @brief Method HandleCreditsSceneDidFinish, addr 0x577fa08, size 0xb4, virtual false, abstract: false, final false
  inline void HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupDataSO* creditsSceneTransitionSetupData);

  /// @brief Method HandleMainGameSceneDidFinish, addr 0x577f180, size 0x1b8, virtual false, abstract: false, final false
  inline void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleMissionLevelSceneDidFinish, addr 0x577f694, size 0x1c4, virtual false, abstract: false, final false
  inline void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMultiplayerLevelDidDisconnect, addr 0x577f500, size 0x190, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                                  ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x577f33c, size 0x1c0, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleTutorialSceneDidFinish, addr 0x577f85c, size 0x1ac, virtual false, abstract: false, final false
  inline void HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneTransitionSetupData,
                                           ::GlobalNamespace::TutorialScenesTransitionSetupDataSO_TutorialEndStateType endState);

  static inline ::GlobalNamespace::MenuTransitionsHelper* New_ctor();

  /// @brief Method OnDestroy, addr 0x577df2c, size 0x26c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RestartGame, addr 0x577f12c, size 0x54, virtual false, abstract: false, final false
  inline void RestartGame(::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ShowCredits, addr 0x577f030, size 0xf4, virtual false, abstract: false, final false
  inline void ShowCredits();

  /// @brief Method StartBeatmapEditor, addr 0x577f124, size 0x4, virtual false, abstract: false, final false
  inline void StartBeatmapEditor(::System::Action* beatmapEditorFinishedCallback);

  /// @brief Method StartBeatmapEditorStandardLevel, addr 0x577f128, size 0x4, virtual false, abstract: false, final false
  inline void StartBeatmapEditorStandardLevel(
      ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
      ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings,
      ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::ByRef<::GlobalNamespace::BeatmapEditorStartTestLevelData> data,
      ::System::Action* beforeSceneSwitchCallback, ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
      ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);

  /// @brief Method StartMissionLevel, addr 0x577e4bc, size 0x198, virtual false, abstract: false, final false
  inline void StartMissionLevel(::StringW missionId, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                ::ArrayW<::GlobalNamespace::MissionObjective*, ::Array<::GlobalNamespace::MissionObjective*>*> missionObjectives,
                                ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                ::System::Action* beforeSceneSwitchCallback,
                                ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* levelFinishedCallback,
                                ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* levelRestartedCallback);

  /// @brief Method StartMultiplayerLevel, addr 0x577e654, size 0x25c, virtual false, abstract: false, final false
  inline void StartMultiplayerLevel(::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText,
                                    bool useTestNoteCutSoundEffects, ::System::Action* beforeSceneSwitchCallback,
                                    ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
                                    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback);

  /// @brief Method StartStandardLevel, addr 0x577e258, size 0x260, virtual false, abstract: false, final false
  inline void StartStandardLevel(::StringW gameMode, ::ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                 ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme,
                                 bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                 ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                 ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation, ::System::Action* beforeSceneSwitchToGameplayCallback,
                                 ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchToGameplayCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
                                 ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback,
                                 ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::System::Nullable_1<::GlobalNamespace::RecordingToolManager_SetupData> recordingToolData);

  /// @brief Method StartTutorial, addr 0x577eb14, size 0x160, virtual false, abstract: false, final false
  inline void StartTutorial(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                            ::System::Action* beforeSceneSwitchCallback);

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> const& __cordl_internal_get__appInitScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO>& __cordl_internal_get__appInitScenesTransitionSetupData();

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

  constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> const& __cordl_internal_get__healthWarningScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>& __cordl_internal_get__healthWarningScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> const& __cordl_internal_get__menuScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>& __cordl_internal_get__menuScenesTransitionSetupData();

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

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> const& __cordl_internal_get__recordingToolScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>& __cordl_internal_get__recordingToolScenesTransitionSetupData();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> const& __cordl_internal_get__shaderWarmupSceneSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>& __cordl_internal_get__shaderWarmupSceneSetupData();

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

  constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> const& __cordl_internal_get__startupErrorScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO>& __cordl_internal_get__startupErrorScenesTransitionSetupData();

  constexpr ::Analytics::Model::TelemetryModel* const& __cordl_internal_get__telemetryModel() const;

  constexpr ::Analytics::Model::TelemetryModel*& __cordl_internal_get__telemetryModel();

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> const& __cordl_internal_get__tutorialScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO>& __cordl_internal_get__tutorialScenesTransitionSetupData();

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupData(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapEditorFinishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set__beatmapEditorGameplayLevelFinishedCallback(
      ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__creditsScenesTransitionSetupData(::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__healthWarningScenesTransitionSetupData(::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__menuScenesTransitionSetupData(::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> value);

  constexpr void
  __cordl_internal_set__missionLevelFinishedCallback(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr void
  __cordl_internal_set__missionLevelRestartedCallback(::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__multiplayerDidDisconnectCallback(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void __cordl_internal_set__multiplayerLevelFinishedCallback(
      ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__recordingToolScenesTransitionSetupData(::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__shaderWarmupSceneSetupData(::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> value);

  constexpr void
  __cordl_internal_set__standardLevelFinishedCallback(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void
  __cordl_internal_set__standardLevelRestartedCallback(::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__startupErrorScenesTransitionSetupData(::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value);

  constexpr void __cordl_internal_set__tutorialScenesTransitionSetupData(::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x577fabc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_appInitScenesTransitionSetupData, addr 0x577ded4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> get_appInitScenesTransitionSetupData();

  /// @brief Method get_creditsScenesTransitionSetupData, addr 0x577defc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> get_creditsScenesTransitionSetupData();

  /// @brief Method get_healthWarningScenesTransitionSetupData, addr 0x577df04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> get_healthWarningScenesTransitionSetupData();

  /// @brief Method get_menuScenesTransitionSetupData, addr 0x577df14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> get_menuScenesTransitionSetupData();

  /// @brief Method get_missionLevelScenesTransitionSetupData, addr 0x577deec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> get_missionLevelScenesTransitionSetupData();

  /// @brief Method get_multiplayerLevelScenesTransitionSetupData, addr 0x577dee4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO> get_multiplayerLevelScenesTransitionSetupData();

  /// @brief Method get_recordingToolScenesTransitionSetupData, addr 0x577df24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> get_recordingToolScenesTransitionSetupData();

  /// @brief Method get_shaderWarmupSceneSetupData, addr 0x577df0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> get_shaderWarmupSceneSetupData();

  /// @brief Method get_standardLevelScenesTransitionSetupData, addr 0x577dedc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> get_standardLevelScenesTransitionSetupData();

  /// @brief Method get_startupErrorScenesTransitionSetupData, addr 0x577df1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> get_startupErrorScenesTransitionSetupData();

  /// @brief Method get_tutorialScenesTransitionSetupData, addr 0x577def4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::TutorialScenesTransitionSetupDataSO> get_tutorialScenesTransitionSetupData();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6839 };

  /// @brief Field _appInitScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataSO> ____appInitScenesTransitionSetupData;

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

  /// @brief Field _healthWarningScenesTransitionSetupData, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> ____healthWarningScenesTransitionSetupData;

  /// @brief Field _shaderWarmupSceneSetupData, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> ____shaderWarmupSceneSetupData;

  /// @brief Field _menuScenesTransitionSetupData, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> ____menuScenesTransitionSetupData;

  /// @brief Field _startupErrorScenesTransitionSetupData, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> ____startupErrorScenesTransitionSetupData;

  /// @brief Field _recordingToolScenesTransitionSetupData, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> ____recordingToolScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _beatmapDataLoader, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _settingsManager, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _telemetryModel, offset: 0xa0, size: 0x8, def value: None
  ::Analytics::Model::TelemetryModel* ____telemetryModel;

  /// @brief Field _beatmapLevelsModel, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _standardLevelFinishedCallback, offset: 0xb0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelRestartedCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset: 0xc0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MultiplayerResultsData*>* ____multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerDidDisconnectCallback, offset: 0xc8, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ____multiplayerDidDisconnectCallback;

  /// @brief Field _missionLevelFinishedCallback, offset: 0xd0, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* ____missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset: 0xd8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::MissionCompletionResults*>* ____missionLevelRestartedCallback;

  /// @brief Field _beatmapEditorFinishedCallback, offset: 0xe0, size: 0x8, def value: None
  ::System::Action* ____beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset: 0xe8, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupDataSO>, ::GlobalNamespace::LevelCompletionResults*>* ____beatmapEditorGameplayLevelFinishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____appInitScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____tutorialScenesTransitionSetupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____creditsScenesTransitionSetupData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____healthWarningScenesTransitionSetupData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____shaderWarmupSceneSetupData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____menuScenesTransitionSetupData) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____startupErrorScenesTransitionSetupData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____recordingToolScenesTransitionSetupData) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____gameScenesManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapDataLoader) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapLevelsEntitlementModel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____audioClipAsyncLoader) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____settingsManager) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____telemetryModel) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapLevelsModel) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelFinishedCallback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelRestartedCallback) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelFinishedCallback) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerDidDisconnectCallback) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelFinishedCallback) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelRestartedCallback) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorFinishedCallback) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorGameplayLevelFinishedCallback) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuTransitionsHelper, 0xf0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper*, "", "MenuTransitionsHelper");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c*, "", "MenuTransitionsHelper/<>c");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass49_0*, "", "MenuTransitionsHelper/<>c__DisplayClass49_0");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass57_0*, "", "MenuTransitionsHelper/<>c__DisplayClass57_0");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass58_0*, "", "MenuTransitionsHelper/<>c__DisplayClass58_0");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass59_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass59_0*, "", "MenuTransitionsHelper/<>c__DisplayClass59_0");
NEED_NO_BOX(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass60_0*, "", "MenuTransitionsHelper/<>c__DisplayClass60_0");
