#pragma once
// IWYU pragma private; include "GlobalNamespace\MenuTransitionsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(MenuTransitionsHelper)
namespace Analytics::Model {
class TelemetryModel;
}
namespace BeatSaber::Analytics::Gameplay {
class IGameplayEventsDispatcher;
}
namespace BeatmapEditor3D {
class BeatmapEditorStandardLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupData;
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
class CreditsScenesTransitionSetupData;
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
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c;
}
namespace GlobalNamespace {
class MenuTransitionsHelper___c__DisplayClass24_0;
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
class MenuTransitionsHelper___c__DisplayClass36_0;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupData;
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
class SettingsManager;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
struct TutorialScenesTransitionSetupData_TutorialEndStateType;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupData;
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
class IDisposable;
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
class MenuTransitionsHelper___c__DisplayClass24_0;
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
class MenuTransitionsHelper___c__DisplayClass36_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MenuTransitionsHelper*);
MARK_REF_T(::GlobalNamespace::MenuTransitionsHelper___c*);
MARK_REF_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0*);
MARK_REF_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0*);
MARK_REF_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0*);
MARK_REF_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0*);
MARK_REF_T(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuTransitionsHelper*, "", "MenuTransitionsHelper");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuTransitionsHelper___c*, "", "MenuTransitionsHelper/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0*, "", "MenuTransitionsHelper/<>c__DisplayClass24_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0*, "", "MenuTransitionsHelper/<>c__DisplayClass33_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0*, "", "MenuTransitionsHelper/<>c__DisplayClass34_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0*, "", "MenuTransitionsHelper/<>c__DisplayClass35_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0*, "", "MenuTransitionsHelper/<>c__DisplayClass36_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c
class CORDL_TYPE MenuTransitionsHelper___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::MenuTransitionsHelper___c* __9;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__37_0, put = setStaticF___9__37_0)) ::System::Action_1<::Zenject::DiContainer*>* __9__37_0;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c* New_ctor();

  /// @brief Method <HandleTutorialSceneDidFinish>b__37_0, addr 0x5911e18, size 0x4, virtual false, abstract: false, final false
  inline void _HandleTutorialSceneDidFinish_b__37_0(::Zenject::DiContainer* _);

  /// @brief Method .ctor, addr 0x5911e14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::MenuTransitionsHelper___c* getStaticF___9();

  static inline ::System::Action_1<::Zenject::DiContainer*>* getStaticF___9__37_0();

  static inline void setStaticF___9(::GlobalNamespace::MenuTransitionsHelper___c* value);

  static inline void setStaticF___9__37_0(::System::Action_1<::Zenject::DiContainer*>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass24_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field afterSceneSwitchToGameplayCallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_afterSceneSwitchToGameplayCallback,
                      put = __cordl_internal_set_afterSceneSwitchToGameplayCallback)) ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchToGameplayCallback;

  /// @brief Field gameplayModifiers, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gameplayModifiers, put = __cordl_internal_set_gameplayModifiers)) ::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Field serializedBeatmapKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_serializedBeatmapKey, put = __cordl_internal_set_serializedBeatmapKey)) ::StringW serializedBeatmapKey;

  /// @brief Field stopwatch, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stopwatch, put = __cordl_internal_set_stopwatch)) ::System::Diagnostics::Stopwatch* stopwatch;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0* New_ctor();

  /// @brief Method <StartStandardLevel>b__0, addr 0x5911e1c, size 0xdc, virtual false, abstract: false, final false
  inline void _StartStandardLevel_b__0(::Zenject::DiContainer* container);

  constexpr ::GlobalNamespace::MenuTransitionsHelper* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __cordl_internal_get___4__this();

  constexpr ::System::Action_1<::Zenject::DiContainer*>* const& __cordl_internal_get_afterSceneSwitchToGameplayCallback() const;

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __cordl_internal_get_afterSceneSwitchToGameplayCallback();

  constexpr ::GlobalNamespace::GameplayModifiers* const& __cordl_internal_get_gameplayModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifiers*& __cordl_internal_get_gameplayModifiers();

  constexpr ::StringW const& __cordl_internal_get_serializedBeatmapKey() const;

  constexpr ::StringW& __cordl_internal_get_serializedBeatmapKey();

  constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get_stopwatch() const;

  constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get_stopwatch();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr void __cordl_internal_set_afterSceneSwitchToGameplayCallback(::System::Action_1<::Zenject::DiContainer*>* value);

  constexpr void __cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  constexpr void __cordl_internal_set_serializedBeatmapKey(::StringW value);

  constexpr void __cordl_internal_set_stopwatch(::System::Diagnostics::Stopwatch* value);

  /// @brief Method .ctor, addr 0x590fb60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass24_0(MenuTransitionsHelper___c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass24_0(MenuTransitionsHelper___c__DisplayClass24_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6743 };

  /// @brief Field stopwatch, offset: 0x10, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* ___stopwatch;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field serializedBeatmapKey, offset: 0x20, size: 0x8, def value: None
  ::StringW ___serializedBeatmapKey;

  /// @brief Field gameplayModifiers, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ___gameplayModifiers;

  /// @brief Field afterSceneSwitchToGameplayCallback, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___afterSceneSwitchToGameplayCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0, ___stopwatch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0, ___serializedBeatmapKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0, ___gameplayModifiers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0, ___afterSceneSwitchToGameplayCallback) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass33_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass33_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field levelCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_levelCompletionResults, put = __cordl_internal_set_levelCompletionResults)) ::GlobalNamespace::LevelCompletionResults* levelCompletionResults;

  /// @brief Field standardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_standardLevelScenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0* New_ctor();

  /// @brief Method <HandleMainGameSceneDidFinish>b__0, addr 0x5911ef8, size 0x34, virtual false, abstract: false, final false
  inline void _HandleMainGameSceneDidFinish_b__0(::Zenject::DiContainer* _);

  constexpr ::GlobalNamespace::MenuTransitionsHelper* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::LevelCompletionResults* const& __cordl_internal_get_levelCompletionResults() const;

  constexpr ::GlobalNamespace::LevelCompletionResults*& __cordl_internal_get_levelCompletionResults();

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& __cordl_internal_get_standardLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& __cordl_internal_get_standardLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr void __cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value);

  constexpr void __cordl_internal_set_standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value);

  /// @brief Method .ctor, addr 0x5911634, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6744 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field standardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupData* ___standardLevelScenesTransitionSetupData;

  /// @brief Field levelCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::LevelCompletionResults* ___levelCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0, ___standardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0, ___levelCompletionResults) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass34_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_multiplayerLevelScenesTransitionSetupData)) ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_multiplayerResultsData, put = __cordl_internal_set_multiplayerResultsData)) ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0* New_ctor();

  /// @brief Method <HandleMultiplayerLevelDidFinish>b__0, addr 0x5911f2c, size 0x34, virtual false, abstract: false, final false
  inline void _HandleMultiplayerLevelDidFinish_b__0(::Zenject::DiContainer* _);

  constexpr ::GlobalNamespace::MenuTransitionsHelper* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& __cordl_internal_get_multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& __cordl_internal_get_multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::MultiplayerResultsData* const& __cordl_internal_get_multiplayerResultsData() const;

  constexpr ::GlobalNamespace::MultiplayerResultsData*& __cordl_internal_get_multiplayerResultsData();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr void __cordl_internal_set_multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set_multiplayerResultsData(::GlobalNamespace::MultiplayerResultsData* value);

  /// @brief Method .ctor, addr 0x59117f8, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6745 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field multiplayerLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* ___multiplayerLevelScenesTransitionSetupData;

  /// @brief Field multiplayerResultsData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsData* ___multiplayerResultsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0, ___multiplayerLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0, ___multiplayerResultsData) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DisconnectedReason, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass35_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass35_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field disconnectedReason, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_disconnectedReason, put = __cordl_internal_set_disconnectedReason)) ::GlobalNamespace::DisconnectedReason disconnectedReason;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0* New_ctor();

  /// @brief Method <HandleMultiplayerLevelDidDisconnect>b__0, addr 0x5911f60, size 0x30, virtual false, abstract: false, final false
  inline void _HandleMultiplayerLevelDidDisconnect_b__0(::Zenject::DiContainer* _);

  constexpr ::GlobalNamespace::MenuTransitionsHelper* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::DisconnectedReason const& __cordl_internal_get_disconnectedReason() const;

  constexpr ::GlobalNamespace::DisconnectedReason& __cordl_internal_get_disconnectedReason();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr void __cordl_internal_set_disconnectedReason(::GlobalNamespace::DisconnectedReason value);

  /// @brief Method .ctor, addr 0x591198c, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6746 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field disconnectedReason, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::DisconnectedReason ___disconnectedReason;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0, ___disconnectedReason) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper/<>c__DisplayClass36_0
class CORDL_TYPE MenuTransitionsHelper___c__DisplayClass36_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::MenuTransitionsHelper* __4__this;

  /// @brief Field missionCompletionResults, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_missionCompletionResults, put = __cordl_internal_set_missionCompletionResults)) ::GlobalNamespace::MissionCompletionResults* missionCompletionResults;

  /// @brief Field missionLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set_missionLevelScenesTransitionSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData;

  static inline ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0* New_ctor();

  /// @brief Method <HandleMissionLevelSceneDidFinish>b__0, addr 0x5911f90, size 0x34, virtual false, abstract: false, final false
  inline void _HandleMissionLevelSceneDidFinish_b__0(::Zenject::DiContainer* _);

  constexpr ::GlobalNamespace::MenuTransitionsHelper* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::MenuTransitionsHelper*& __cordl_internal_get___4__this();

  constexpr ::GlobalNamespace::MissionCompletionResults* const& __cordl_internal_get_missionCompletionResults() const;

  constexpr ::GlobalNamespace::MissionCompletionResults*& __cordl_internal_get_missionCompletionResults();

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& __cordl_internal_get_missionLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& __cordl_internal_get_missionLevelScenesTransitionSetupData();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::MenuTransitionsHelper* value);

  constexpr void __cordl_internal_set_missionCompletionResults(::GlobalNamespace::MissionCompletionResults* value);

  constexpr void __cordl_internal_set_missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value);

  /// @brief Method .ctor, addr 0x5911b58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MenuTransitionsHelper___c__DisplayClass36_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass36_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MenuTransitionsHelper___c__DisplayClass36_0(MenuTransitionsHelper___c__DisplayClass36_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MenuTransitionsHelper___c__DisplayClass36_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MenuTransitionsHelper___c__DisplayClass36_0(MenuTransitionsHelper___c__DisplayClass36_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6747 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::MenuTransitionsHelper* _____4__this;

  /// @brief Field missionLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupData* ___missionLevelScenesTransitionSetupData;

  /// @brief Field missionCompletionResults, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MissionCompletionResults* ___missionCompletionResults;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0, ___missionLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0, ___missionCompletionResults) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MenuTransitionsHelper
class CORDL_TYPE MenuTransitionsHelper : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::MenuTransitionsHelper___c;

  using __c__DisplayClass24_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass24_0;

  using __c__DisplayClass33_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass33_0;

  using __c__DisplayClass34_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass34_0;

  using __c__DisplayClass35_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass35_0;

  using __c__DisplayClass36_0 = ::GlobalNamespace::MenuTransitionsHelper___c__DisplayClass36_0;

  /// @brief Field _appInitScenesTransitionSetupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__appInitScenesTransitionSetupData,
                      put = __cordl_internal_set__appInitScenesTransitionSetupData)) ::GlobalNamespace::AppInitScenesTransitionSetupData* _appInitScenesTransitionSetupData;

  /// @brief Field _audioClipAsyncLoader, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader)) ::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapEditorFinishedCallback, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorFinishedCallback, put = __cordl_internal_set__beatmapEditorFinishedCallback)) ::System::Action* _beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback, put = __cordl_internal_set__beatmapEditorGameplayLevelFinishedCallback)) ::System::Action_2<
      ::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* _beatmapEditorGameplayLevelFinishedCallback;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _creditsScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsScenesTransitionSetupData,
                      put = __cordl_internal_set__creditsScenesTransitionSetupData)) ::GlobalNamespace::CreditsScenesTransitionSetupData* _creditsScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _gameplayEventsDispatcher, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayEventsDispatcher,
                      put = __cordl_internal_set__gameplayEventsDispatcher)) ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* _gameplayEventsDispatcher;

  /// @brief Field _missionLevelFinishedCallback, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelFinishedCallback,
                      put = __cordl_internal_set__missionLevelFinishedCallback)) ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*,
                                                                                                    ::GlobalNamespace::MissionCompletionResults*>* _missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelRestartedCallback,
                      put = __cordl_internal_set__missionLevelRestartedCallback)) ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*,
                                                                                                     ::GlobalNamespace::MissionCompletionResults*>* _missionLevelRestartedCallback;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupData* _missionLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerDidDisconnectCallback, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerDidDisconnectCallback,
                      put = __cordl_internal_set__multiplayerDidDisconnectCallback)) ::System::Action_1<::GlobalNamespace::DisconnectedReason>* _multiplayerDidDisconnectCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelFinishedCallback,
                      put = __cordl_internal_set__multiplayerLevelFinishedCallback)) ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*,
                                                                                                        ::GlobalNamespace::MultiplayerResultsData*>* _multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData)) ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _settingsManager, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _standardLevelFinishedCallback, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelFinishedCallback,
                      put = __cordl_internal_set__standardLevelFinishedCallback)) ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*,
                                                                                                     ::GlobalNamespace::LevelCompletionResults*>* _standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelRestartedCallback,
                      put = __cordl_internal_set__standardLevelRestartedCallback)) ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*,
                                                                                                      ::GlobalNamespace::LevelCompletionResults*>* _standardLevelRestartedCallback;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupData* _standardLevelScenesTransitionSetupData;

  /// @brief Field _telemetryModel, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__telemetryModel, put = __cordl_internal_set__telemetryModel)) ::Analytics::Model::TelemetryModel* _telemetryModel;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialScenesTransitionSetupData,
                      put = __cordl_internal_set__tutorialScenesTransitionSetupData)) ::GlobalNamespace::TutorialScenesTransitionSetupData* _tutorialScenesTransitionSetupData;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x590f2dc, size 0x270, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method HandleCreditsSceneDidFinish, addr 0x5911d08, size 0xb4, virtual false, abstract: false, final false
  inline void HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupData* creditsSceneTransitionSetupData);

  /// @brief Method HandleMainGameSceneDidFinish, addr 0x591147c, size 0x1b8, virtual false, abstract: false, final false
  inline void HandleMainGameSceneDidFinish(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                           ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleMissionLevelSceneDidFinish, addr 0x5911990, size 0x1c8, virtual false, abstract: false, final false
  inline void HandleMissionLevelSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupData* missionLevelScenesTransitionSetupData,
                                               ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleMultiplayerLevelDidDisconnect, addr 0x59117fc, size 0x190, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidDisconnect(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                                  ::GlobalNamespace::DisconnectedReason disconnectedReason);

  /// @brief Method HandleMultiplayerLevelDidFinish, addr 0x5911638, size 0x1c0, virtual false, abstract: false, final false
  inline void HandleMultiplayerLevelDidFinish(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* multiplayerLevelScenesTransitionSetupData,
                                              ::GlobalNamespace::MultiplayerResultsData* multiplayerResultsData);

  /// @brief Method HandleTutorialSceneDidFinish, addr 0x5911b5c, size 0x1ac, virtual false, abstract: false, final false
  inline void HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupData* tutorialSceneTransitionSetupData,
                                           ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType endState);

  static inline ::GlobalNamespace::MenuTransitionsHelper* New_ctor();

  /// @brief Method RestartGame, addr 0x59113d0, size 0x54, virtual false, abstract: false, final false
  inline void RestartGame(::System::Action_1<::Zenject::DiContainer*>* finishCallback);

  /// @brief Method ShowCredits, addr 0x59112d4, size 0xf4, virtual false, abstract: false, final false
  inline void ShowCredits();

  /// @brief Method StartBeatmapEditor, addr 0x59113c8, size 0x4, virtual false, abstract: false, final false
  inline void StartBeatmapEditor(::System::Action* beatmapEditorFinishedCallback);

  /// @brief Method StartBeatmapEditorStandardLevel, addr 0x59113cc, size 0x4, virtual false, abstract: false, final false
  inline void
  StartBeatmapEditorStandardLevel(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                  ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                  ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::ColorScheme* colorScheme, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                  ::by_ref<::GlobalNamespace::BeatmapEditorStartTestLevelData> data, ::System::Action* beforeSceneSwitchCallback,
                                  ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchCallback,
                                  ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback);

  /// @brief Method StartMissionLevel, addr 0x5910304, size 0x4ec, virtual false, abstract: false, final false
  inline void StartMissionLevel(::StringW missionId, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                ::ArrayW<::GlobalNamespace::MissionObjective*> missionObjectives, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::System::Action* beforeSceneSwitchCallback,
                                ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* levelFinishedCallback,
                                ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* levelRestartedCallback);

  /// @brief Method StartMultiplayerLevel, addr 0x59107f0, size 0x40c, virtual false, abstract: false, final false
  inline void StartMultiplayerLevel(::StringW gameMode, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                    ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText,
                                    bool useTestNoteCutSoundEffects, ::System::Action* beforeSceneSwitchCallback,
                                    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* levelFinishedCallback,
                                    ::System::Action_1<::GlobalNamespace::DisconnectedReason>* didDisconnectCallback);

  /// @brief Method StartStandardLevel, addr 0x590f60c, size 0x554, virtual false, abstract: false, final false
  inline void StartStandardLevel(::StringW gameMode, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                 ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, ::GlobalNamespace::ColorScheme* playerOverrideColorScheme,
                                 bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                 ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
                                 ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation, ::System::Action* beforeSceneSwitchToGameplayCallback,
                                 ::System::Action_1<::Zenject::DiContainer*>* afterSceneSwitchToGameplayCallback,
                                 ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* levelFinishedCallback,
                                 ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* levelRestartedCallback,
                                 ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData);

  /// @brief Method StartTutorial, addr 0x5910e44, size 0x178, virtual false, abstract: false, final false
  inline void StartTutorial(::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::System::Action* beforeSceneSwitchCallback);

  /// @brief Method StopStandardLevel, addr 0x5911424, size 0x58, virtual false, abstract: false, final false
  inline void StopStandardLevel();

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData* const& __cordl_internal_get__appInitScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData*& __cordl_internal_get__appInitScenesTransitionSetupData();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::GlobalNamespace::BeatmapDataLoader* const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::System::Action* const& __cordl_internal_get__beatmapEditorFinishedCallback() const;

  constexpr ::System::Action*& __cordl_internal_get__beatmapEditorFinishedCallback();

  constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const&
  __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback() const;

  constexpr ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*&
  __cordl_internal_get__beatmapEditorGameplayLevelFinishedCallback();

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData* const& __cordl_internal_get__creditsScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData*& __cordl_internal_get__creditsScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* const& __cordl_internal_get__gameplayEventsDispatcher() const;

  constexpr ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher*& __cordl_internal_get__gameplayEventsDispatcher();

  constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* const&
  __cordl_internal_get__missionLevelFinishedCallback() const;

  constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*& __cordl_internal_get__missionLevelFinishedCallback();

  constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* const&
  __cordl_internal_get__missionLevelRestartedCallback() const;

  constexpr ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>*& __cordl_internal_get__missionLevelRestartedCallback();

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>* const& __cordl_internal_get__multiplayerDidDisconnectCallback() const;

  constexpr ::System::Action_1<::GlobalNamespace::DisconnectedReason>*& __cordl_internal_get__multiplayerDidDisconnectCallback();

  constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* const&
  __cordl_internal_get__multiplayerLevelFinishedCallback() const;

  constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*& __cordl_internal_get__multiplayerLevelFinishedCallback();

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const&
  __cordl_internal_get__standardLevelFinishedCallback() const;

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*& __cordl_internal_get__standardLevelFinishedCallback();

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const&
  __cordl_internal_get__standardLevelRestartedCallback() const;

  constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*& __cordl_internal_get__standardLevelRestartedCallback();

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::Analytics::Model::TelemetryModel* const& __cordl_internal_get__telemetryModel() const;

  constexpr ::Analytics::Model::TelemetryModel*& __cordl_internal_get__telemetryModel();

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData* const& __cordl_internal_get__tutorialScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData*& __cordl_internal_get__tutorialScenesTransitionSetupData();

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupData(::GlobalNamespace::AppInitScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapEditorFinishedCallback(::System::Action* value);

  constexpr void __cordl_internal_set__beatmapEditorGameplayLevelFinishedCallback(
      ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__creditsScenesTransitionSetupData(::GlobalNamespace::CreditsScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__gameplayEventsDispatcher(::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* value);

  constexpr void __cordl_internal_set__missionLevelFinishedCallback(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr void
  __cordl_internal_set__missionLevelRestartedCallback(::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__multiplayerDidDisconnectCallback(::System::Action_1<::GlobalNamespace::DisconnectedReason>* value);

  constexpr void
  __cordl_internal_set__multiplayerLevelFinishedCallback(::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__standardLevelFinishedCallback(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void
  __cordl_internal_set__standardLevelRestartedCallback(::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__telemetryModel(::Analytics::Model::TelemetryModel* value);

  constexpr void __cordl_internal_set__tutorialScenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupData* value);

  /// @brief Method .ctor, addr 0x5911dbc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6748 };

  /// @brief Field kBackButtonLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kBackButtonLocalizationKey{ u"BUTTON_MENU" };

  /// @brief Field _appInitScenesTransitionSetupData, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupData* ____appInitScenesTransitionSetupData;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupData* ____standardLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupData* ____missionLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::TutorialScenesTransitionSetupData* ____tutorialScenesTransitionSetupData;

  /// @brief Field _creditsScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::CreditsScenesTransitionSetupData* ____creditsScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _beatmapDataLoader, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _settingsManager, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _telemetryModel, offset: 0x68, size: 0x8, def value: None
  ::Analytics::Model::TelemetryModel* ____telemetryModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _gameplayEventsDispatcher, offset: 0x78, size: 0x8, def value: None
  ::BeatSaber::Analytics::Gameplay::IGameplayEventsDispatcher* ____gameplayEventsDispatcher;

  /// @brief Field _standardLevelFinishedCallback, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelFinishedCallback;

  /// @brief Field _standardLevelRestartedCallback, offset: 0x88, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* ____standardLevelRestartedCallback;

  /// @brief Field _multiplayerLevelFinishedCallback, offset: 0x90, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* ____multiplayerLevelFinishedCallback;

  /// @brief Field _multiplayerDidDisconnectCallback, offset: 0x98, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::DisconnectedReason>* ____multiplayerDidDisconnectCallback;

  /// @brief Field _missionLevelFinishedCallback, offset: 0xa0, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* ____missionLevelFinishedCallback;

  /// @brief Field _missionLevelRestartedCallback, offset: 0xa8, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::MissionLevelScenesTransitionSetupData*, ::GlobalNamespace::MissionCompletionResults*>* ____missionLevelRestartedCallback;

  /// @brief Field _beatmapEditorFinishedCallback, offset: 0xb0, size: 0x8, def value: None
  ::System::Action* ____beatmapEditorFinishedCallback;

  /// @brief Field _beatmapEditorGameplayLevelFinishedCallback, offset: 0xb8, size: 0x8, def value: None
  ::System::Action_2<::BeatmapEditor3D::BeatmapEditorStandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* ____beatmapEditorGameplayLevelFinishedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____appInitScenesTransitionSetupData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelScenesTransitionSetupData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____tutorialScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____creditsScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____gameScenesManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapDataLoader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapLevelsEntitlementModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____audioClipAsyncLoader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____settingsManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____telemetryModel) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapLevelsModel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____gameplayEventsDispatcher) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelFinishedCallback) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____standardLevelRestartedCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerLevelFinishedCallback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____multiplayerDidDisconnectCallback) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelFinishedCallback) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____missionLevelRestartedCallback) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorFinishedCallback) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuTransitionsHelper, ____beatmapEditorGameplayLevelFinishedCallback) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MenuTransitionsHelper) == 0xc0, "Size mismatch!");

} // namespace GlobalNamespace
