#pragma once
// IWYU pragma private; include "GlobalNamespace\InitialDestinationResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InitialDestinationResolver)
namespace BeatSaber::Destinations {
class Destination;
}
namespace BeatSaber::Destinations {
class GameplayEnvironmentOverride;
}
namespace BeatSaber::Destinations {
class IInitialDestinationResolver;
}
namespace BeatSaber::Destinations {
class InitialDestinationController;
}
namespace BeatSaber::Destinations {
class LevelStartDestinationParameters;
}
namespace BeatSaber::Destinations {
class SimpleMissionObjective;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupData_AppInitSceneSetupData;
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
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class CreditsScenesTransitionSetupData;
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
class HealthWarningSceneSetupData;
}
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupData;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToCreditsAsync_d__37;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToMainMenuAsync_d__40;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToMissionLevelAsync_d__32;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToStandardLevelAsync_d__31;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToStartupErrorAsync_d__34;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToTargetDestinationAsync_d__29;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToTutorialAsync_d__35;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__InitializeScenesAsync_d__27;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__PresentHealthWarningAsync_d__42;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__PresentShaderWarmUpAsync_d__41;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupData;
}
namespace GlobalNamespace {
class MissionCompletionResults;
}
namespace GlobalNamespace {
class MissionLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
class MissionObjectiveTypeCollection;
}
namespace GlobalNamespace {
class MissionObjective;
}
namespace GlobalNamespace {
class MultiplayerLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
class OverrideEnvironmentSettings;
}
namespace GlobalNamespace {
class PlayerDataFileModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupData;
}
namespace GlobalNamespace {
class StartupErrorScenesTransitionSetupData;
}
namespace GlobalNamespace {
class TerminalController;
}
namespace GlobalNamespace {
struct TutorialScenesTransitionSetupData_TutorialEndStateType;
}
namespace GlobalNamespace {
class TutorialScenesTransitionSetupData;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class InitialDestinationResolver;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToCreditsAsync_d__37;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToMainMenuAsync_d__40;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToMissionLevelAsync_d__32;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToStandardLevelAsync_d__31;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToStartupErrorAsync_d__34;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToTargetDestinationAsync_d__29;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToTutorialAsync_d__35;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__InitializeScenesAsync_d__27;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__PresentHealthWarningAsync_d__42;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__PresentShaderWarmUpAsync_d__41;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::InitialDestinationResolver*);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver*, "", "InitialDestinationResolver");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, "", "InitialDestinationResolver/<GoToCreditsAsync>d__37");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40, "", "InitialDestinationResolver/<GoToMainMenuAsync>d__40");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, "", "InitialDestinationResolver/<GoToMissionLevelAsync>d__32");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, "", "InitialDestinationResolver/<GoToMultiplayerLevelAsync>d__39");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, "", "InitialDestinationResolver/<GoToStandardLevelAsync>d__31");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34, "", "InitialDestinationResolver/<GoToStartupErrorAsync>d__34");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29, "", "InitialDestinationResolver/<GoToTargetDestinationAsync>d__29");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, "", "InitialDestinationResolver/<GoToTutorialAsync>d__35");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27, "", "InitialDestinationResolver/<InitializeScenesAsync>d__27");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42, "", "InitialDestinationResolver/<PresentHealthWarningAsync>d__42");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41, "", "InitialDestinationResolver/<PresentShaderWarmUpAsync>d__41");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToCreditsAsync>d__37
struct CORDL_TYPE InitialDestinationResolver__GoToCreditsAsync_d__37 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3771cfc, size 0x51c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3772218, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToCreditsAsync_d__37();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: None }, CppParam { name: "shouldReplace", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::CreditsScenesTransitionSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>",
  // modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToCreditsAsync_d__37(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::GlobalNamespace::InitialDestinationResolver* __4__this, ::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace,
                                                               ::GlobalNamespace::CreditsScenesTransitionSetupData* _transition_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21010 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field targetDestination, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field shouldReplace, offset: 0x30, size: 0x1, def value: None
  bool shouldReplace;

  /// @brief Field <transition>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::CreditsScenesTransitionSetupData* _transition_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, targetDestination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, shouldReplace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, _transition_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToMainMenuAsync>d__40
struct CORDL_TYPE InitialDestinationResolver__GoToMainMenuAsync_d__40 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3772284, size 0x320, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x37725a4, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToMainMenuAsync_d__40();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "shouldReplace", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToMainMenuAsync_d__40(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::GlobalNamespace::InitialDestinationResolver* __4__this, bool shouldReplace,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21011 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field shouldReplace, offset: 0x28, size: 0x1, def value: None
  bool shouldReplace;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40, shouldReplace) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToMissionLevelAsync>d__32
struct CORDL_TYPE InitialDestinationResolver__GoToMissionLevelAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3772610, size 0x75c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3772d6c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToMissionLevelAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: None }, CppParam { name: "shouldReplace", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::MissionLevelScenesTransitionSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>",
  // modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToMissionLevelAsync_d__32(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::GlobalNamespace::InitialDestinationResolver* __4__this, ::BeatSaber::Destinations::Destination* targetDestination,
                                                                    bool shouldReplace, ::GlobalNamespace::MissionLevelScenesTransitionSetupData* _transition_5__2,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21012 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field targetDestination, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field shouldReplace, offset: 0x30, size: 0x1, def value: None
  bool shouldReplace;

  /// @brief Field <transition>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupData* _transition_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, targetDestination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, shouldReplace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, _transition_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BeatmapKey, BeatmapLevelDataVersion, LoadBeatmapLevelDataResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter,
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToMultiplayerLevelAsync>d__39
struct CORDL_TYPE InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3772dd8, size 0xa7c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3773854, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: None }, CppParam { name: "shouldReplace", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*", modifiers: "", def_value: None }, CppParam { name:
  // "_parameters_5__3", ty: "::BeatSaber::Destinations::LevelStartDestinationParameters*", modifiers: "", def_value: None }, CppParam { name: "_additionalInformation_5__4", ty:
  // "::GlobalNamespace::GameplayAdditionalInformation*", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevelKey_5__5", ty: "::GlobalNamespace::BeatmapKey", modifiers: "", def_value:
  // None }, CppParam { name: "_beatmapLevel_5__6", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "_playerSpecificSettings_5__7", ty:
  // "::GlobalNamespace::PlayerSpecificSettings*", modifiers: "", def_value: None }, CppParam { name: "_beatmapLevelDataVersion_5__8", ty: "::GlobalNamespace::BeatmapLevelDataVersion", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: None }, CppParam { name: "__u__3", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: None }, CppParam { name: "__u__4", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::Destinations::Destination* targetDestination,
      ::GlobalNamespace::InitialDestinationResolver* __4__this, bool shouldReplace, ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* _transition_5__2,
      ::BeatSaber::Destinations::LevelStartDestinationParameters* _parameters_5__3, ::GlobalNamespace::GameplayAdditionalInformation* _additionalInformation_5__4,
      ::GlobalNamespace::BeatmapKey _beatmapLevelKey_5__5, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__6, ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings_5__7,
      ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion_5__8, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__3,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__4) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21013 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field targetDestination, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field shouldReplace, offset: 0x30, size: 0x1, def value: None
  bool shouldReplace;

  /// @brief Field <transition>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* _transition_5__2;

  /// @brief Field <parameters>5__3, offset: 0x40, size: 0x8, def value: None
  ::BeatSaber::Destinations::LevelStartDestinationParameters* _parameters_5__3;

  /// @brief Field <additionalInformation>5__4, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::GameplayAdditionalInformation* _additionalInformation_5__4;

  /// @brief Field <beatmapLevelKey>5__5, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::BeatmapKey _beatmapLevelKey_5__5;

  /// @brief Field <beatmapLevel>5__6, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__6;

  /// @brief Field <playerSpecificSettings>5__7, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::PlayerSpecificSettings* _playerSpecificSettings_5__7;

  /// @brief Field <beatmapLevelDataVersion>5__8, offset: 0x70, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapLevelDataVersion _beatmapLevelDataVersion_5__8;

  /// @brief Field <>u__1, offset: 0x78, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x80, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion> __u__2;

  /// @brief Field <>u__3, offset: 0x88, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__3;

  /// @brief Field <>u__4, offset: 0x90, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, targetDestination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, shouldReplace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, _transition_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, _parameters_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, _additionalInformation_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, _beatmapLevelKey_5__5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, _beatmapLevel_5__6) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, _playerSpecificSettings_5__7) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, _beatmapLevelDataVersion_5__8) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, __u__1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, __u__2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, __u__3) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39, __u__4) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39) == 0x98, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToStandardLevelAsync>d__31
struct CORDL_TYPE InitialDestinationResolver__GoToStandardLevelAsync_d__31 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x37738c0, size 0x4a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3773d60, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToStandardLevelAsync_d__31();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: None }, CppParam { name: "shouldReplace", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::StandardLevelScenesTransitionSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>",
  // modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToStandardLevelAsync_d__31(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                     ::GlobalNamespace::InitialDestinationResolver* __4__this, ::BeatSaber::Destinations::Destination* targetDestination,
                                                                     bool shouldReplace, ::GlobalNamespace::StandardLevelScenesTransitionSetupData* _transition_5__2,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21014 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field targetDestination, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field shouldReplace, offset: 0x30, size: 0x1, def value: None
  bool shouldReplace;

  /// @brief Field <transition>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupData* _transition_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, targetDestination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, shouldReplace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, _transition_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToStartupErrorAsync>d__34
struct CORDL_TYPE InitialDestinationResolver__GoToStartupErrorAsync_d__34 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3773dcc, size 0x350, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x377411c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToStartupErrorAsync_d__34();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToStartupErrorAsync_d__34(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::BeatSaber::Destinations::Destination* targetDestination, ::GlobalNamespace::InitialDestinationResolver* __4__this,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21015 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field targetDestination, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34, targetDestination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToTargetDestinationAsync>d__29
struct CORDL_TYPE InitialDestinationResolver__GoToTargetDestinationAsync_d__29 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3774188, size 0x6bc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3774844, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToTargetDestinationAsync_d__29();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: None }, CppParam { name: "shouldReplace", ty: "bool",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToTargetDestinationAsync_d__29(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                         ::BeatSaber::Destinations::Destination* targetDestination, ::GlobalNamespace::InitialDestinationResolver* __4__this,
                                                                         bool shouldReplace, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21016 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field targetDestination, offset: 0x20, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field shouldReplace, offset: 0x30, size: 0x1, def value: None
  bool shouldReplace;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29, targetDestination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29, shouldReplace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToTutorialAsync>d__35
struct CORDL_TYPE InitialDestinationResolver__GoToTutorialAsync_d__35 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x37748b0, size 0x5c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3774e74, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToTutorialAsync_d__35();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: None }, CppParam { name: "shouldReplace", ty: "bool", modifiers:
  // "", def_value: None }, CppParam { name: "_transition_5__2", ty: "::GlobalNamespace::TutorialScenesTransitionSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>",
  // modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToTutorialAsync_d__35(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::GlobalNamespace::InitialDestinationResolver* __4__this, ::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace,
                                                                ::GlobalNamespace::TutorialScenesTransitionSetupData* _transition_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21017 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field targetDestination, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field shouldReplace, offset: 0x30, size: 0x1, def value: None
  bool shouldReplace;

  /// @brief Field <transition>5__2, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::TutorialScenesTransitionSetupData* _transition_5__2;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x48, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, targetDestination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, shouldReplace) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, _transition_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35, __u__2) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35) == 0x50, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<InitializeScenesAsync>d__27
struct CORDL_TYPE InitialDestinationResolver__InitializeScenesAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3774ee0, size 0x588, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3775468, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__InitializeScenesAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "_targetDestination_5__2", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__InitializeScenesAsync_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::GlobalNamespace::InitialDestinationResolver* __4__this, ::BeatSaber::Destinations::Destination* _targetDestination_5__2,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21018 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field <targetDestination>5__2, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* _targetDestination_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27, _targetDestination_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<PresentHealthWarningAsync>d__42
struct CORDL_TYPE InitialDestinationResolver__PresentHealthWarningAsync_d__42 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x37754d4, size 0x3d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x37758a8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__PresentHealthWarningAsync_d__42();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "_sceneSetupData_5__2", ty: "::GlobalNamespace::HealthWarningSceneSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__PresentHealthWarningAsync_d__42(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                        ::GlobalNamespace::InitialDestinationResolver* __4__this, ::GlobalNamespace::HealthWarningSceneSetupData* _sceneSetupData_5__2,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21019 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field <sceneSetupData>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningSceneSetupData* _sceneSetupData_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42, _sceneSetupData_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<PresentShaderWarmUpAsync>d__41
struct CORDL_TYPE InitialDestinationResolver__PresentShaderWarmUpAsync_d__41 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3775914, size 0x3d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3775ce8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__PresentShaderWarmUpAsync_d__41();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "_sceneSetupData_5__2", ty: "::GlobalNamespace::ShaderWarmupSceneSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*>", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__PresentShaderWarmUpAsync_d__41(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::GlobalNamespace::InitialDestinationResolver* __4__this, ::GlobalNamespace::ShaderWarmupSceneSetupData* _sceneSetupData_5__2,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21020 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field <sceneSetupData>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::ShaderWarmupSceneSetupData* _sceneSetupData_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::Zenject::DiContainer*> __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41, _sceneSetupData_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41, __u__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: InitialDestinationResolver
class CORDL_TYPE InitialDestinationResolver : public ::System::Object {
public:
  // Declarations
  using _GoToCreditsAsync_d__37 = ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__37;

  using _GoToMainMenuAsync_d__40 = ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__40;

  using _GoToMissionLevelAsync_d__32 = ::GlobalNamespace::InitialDestinationResolver__GoToMissionLevelAsync_d__32;

  using _GoToMultiplayerLevelAsync_d__39 = ::GlobalNamespace::InitialDestinationResolver__GoToMultiplayerLevelAsync_d__39;

  using _GoToStandardLevelAsync_d__31 = ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__31;

  using _GoToStartupErrorAsync_d__34 = ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__34;

  using _GoToTargetDestinationAsync_d__29 = ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__29;

  using _GoToTutorialAsync_d__35 = ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__35;

  using _InitializeScenesAsync_d__27 = ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__27;

  using _PresentHealthWarningAsync_d__42 = ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__42;

  using _PresentShaderWarmUpAsync_d__41 = ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__41;

  /// @brief Field _appInitSceneSetupData, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__appInitSceneSetupData,
                      put = __cordl_internal_set__appInitSceneSetupData)) ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData* _appInitSceneSetupData;

  /// @brief Field _appInitScenesTransitionSetupData, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__appInitScenesTransitionSetupData,
                      put = __cordl_internal_set__appInitScenesTransitionSetupData)) ::GlobalNamespace::AppInitScenesTransitionSetupData* _appInitScenesTransitionSetupData;

  /// @brief Field _audioClipAsyncLoader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader)) ::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _colorSchemesSettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesSettings, put = __cordl_internal_set__colorSchemesSettings)) ::GlobalNamespace::ColorSchemesSettings* _colorSchemesSettings;

  /// @brief Field _controller, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__controller, put = __cordl_internal_set__controller)) ::BeatSaber::Destinations::InitialDestinationController* _controller;

  /// @brief Field _creditsScenesTransitionSetupData, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__creditsScenesTransitionSetupData,
                      put = __cordl_internal_set__creditsScenesTransitionSetupData)) ::GlobalNamespace::CreditsScenesTransitionSetupData* _creditsScenesTransitionSetupData;

  /// @brief Field _environmentsListModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _healthWarningScenesTransitionSetupData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningScenesTransitionSetupData,
                      put = __cordl_internal_set__healthWarningScenesTransitionSetupData)) ::GlobalNamespace::HealthWarningScenesTransitionSetupData* _healthWarningScenesTransitionSetupData;

  /// @brief Field _lastDestination, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__lastDestination, put = __cordl_internal_set__lastDestination)) ::BeatSaber::Destinations::Destination* _lastDestination;

  /// @brief Field _menuScenesTransitionSetupData, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__menuScenesTransitionSetupData,
                      put = __cordl_internal_set__menuScenesTransitionSetupData)) ::GlobalNamespace::MenuScenesTransitionSetupData* _menuScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__missionLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__missionLevelScenesTransitionSetupData)) ::GlobalNamespace::MissionLevelScenesTransitionSetupData* _missionLevelScenesTransitionSetupData;

  /// @brief Field _missionObjectiveTypeCollection, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__missionObjectiveTypeCollection,
                      put = __cordl_internal_set__missionObjectiveTypeCollection)) ::GlobalNamespace::MissionObjectiveTypeCollection* _missionObjectiveTypeCollection;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__multiplayerLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__multiplayerLevelScenesTransitionSetupData)) ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* _multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _playerDataFileModel, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileModel, put = __cordl_internal_set__playerDataFileModel)) ::GlobalNamespace::PlayerDataFileModel* _playerDataFileModel;

  /// @brief Field _playerDataModel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _recordingToolManager, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolManager, put = __cordl_internal_set__recordingToolManager)) ::GlobalNamespace::RecordingToolManager* _recordingToolManager;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _shaderWarmupSceneSetupData, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderWarmupSceneSetupData,
                      put = __cordl_internal_set__shaderWarmupSceneSetupData)) ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* _shaderWarmupSceneSetupData;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__standardLevelScenesTransitionSetupData,
                      put = __cordl_internal_set__standardLevelScenesTransitionSetupData)) ::GlobalNamespace::StandardLevelScenesTransitionSetupData* _standardLevelScenesTransitionSetupData;

  /// @brief Field _startupErrorScenesTransitionSetupData, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__startupErrorScenesTransitionSetupData,
                      put = __cordl_internal_set__startupErrorScenesTransitionSetupData)) ::GlobalNamespace::StartupErrorScenesTransitionSetupData* _startupErrorScenesTransitionSetupData;

  /// @brief Field _terminalRunner, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__terminalRunner, put = __cordl_internal_set__terminalRunner)) ::GlobalNamespace::TerminalController* _terminalRunner;

  /// @brief Field _tutorialScenesTransitionSetupData, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__tutorialScenesTransitionSetupData,
                      put = __cordl_internal_set__tutorialScenesTransitionSetupData)) ::GlobalNamespace::TutorialScenesTransitionSetupData* _tutorialScenesTransitionSetupData;

  /// @brief Convert operator to "::BeatSaber::Destinations::IInitialDestinationResolver"
  constexpr operator ::BeatSaber::Destinations::IInitialDestinationResolver*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method ClearPreviousState, addr 0x3770a04, size 0x1bc, virtual false, abstract: false, final false
  inline void ClearPreviousState();

  /// @brief Method DelaySmallAmountOfTime, addr 0x3770c8c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* DelaySmallAmountOfTime();

  /// @brief Method GoToCreditsAsync, addr 0x3771234, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToCreditsAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace);

  /// @brief Method GoToMainMenuAsync, addr 0x377148c, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToMainMenuAsync(bool shouldReplace);

  /// @brief Method GoToMissionLevelAsync, addr 0x3770db4, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToMissionLevelAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace);

  /// @brief Method GoToMultiplayerLevelAsync, addr 0x37713bc, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToMultiplayerLevelAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace);

  /// @brief Method GoToStandardLevelAsync, addr 0x3770ce4, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToStandardLevelAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace);

  /// @brief Method GoToStartupErrorAsync, addr 0x3770f3c, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToStartupErrorAsync(::BeatSaber::Destinations::Destination* targetDestination);

  /// @brief Method GoToTargetDestinationAsync, addr 0x3770bc0, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToTargetDestinationAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace);

  /// @brief Method GoToTutorialAsync, addr 0x3771000, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToTutorialAsync(::BeatSaber::Destinations::Destination* targetDestination, bool shouldReplace);

  /// @brief Method HandleCreditsSceneDidFinish, addr 0x3771304, size 0xb8, virtual false, abstract: false, final false
  inline void HandleCreditsSceneDidFinish(::GlobalNamespace::CreditsScenesTransitionSetupData* setupData);

  /// @brief Method HandleMissionSceneDidFinish, addr 0x3770e84, size 0xb8, virtual false, abstract: false, final false
  inline void HandleMissionSceneDidFinish(::GlobalNamespace::MissionLevelScenesTransitionSetupData* setupData, ::GlobalNamespace::MissionCompletionResults* missionCompletionResults);

  /// @brief Method HandleStandardLevelSetupDataFinishEvent, addr 0x3771b00, size 0x164, virtual false, abstract: false, final false
  inline void HandleStandardLevelSetupDataFinishEvent(::GlobalNamespace::StandardLevelScenesTransitionSetupData* standardLevelScenesTransitionSetupData,
                                                      ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  /// @brief Method HandleTutorialSceneDidFinish, addr 0x37710d0, size 0x164, virtual false, abstract: false, final false
  inline void HandleTutorialSceneDidFinish(::GlobalNamespace::TutorialScenesTransitionSetupData* setupData,
                                           ::GlobalNamespace::TutorialScenesTransitionSetupData_TutorialEndStateType tutorialEndStateType);

  /// @brief Method Initialize, addr 0x3770934, size 0x1c, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeScenesAsync, addr 0x3770950, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* InitializeScenesAsync();

  /// @brief Method InitializeStandardLevelSetupData, addr 0x37716b4, size 0x1dc, virtual false, abstract: false, final false
  inline void InitializeStandardLevelSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* setupData, ::BeatSaber::Destinations::Destination* targetDestination);

  static inline ::GlobalNamespace::InitialDestinationResolver* New_ctor();

  /// @brief Method PrepareParametersForLevelSetupData, addr 0x3771890, size 0x270, virtual false, abstract: false, final false
  inline void PrepareParametersForLevelSetupData(::BeatSaber::Destinations::LevelStartDestinationParameters* parameters, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapLevelKey,
                                                 ::by_ref<::GlobalNamespace::BeatmapLevel*> beatmapLevel, ::by_ref<::GlobalNamespace::PlayerSpecificSettings*> playerSpecificSettings,
                                                 ::by_ref<::GlobalNamespace::OverrideEnvironmentSettings*> overrideEnvironmentSettings,
                                                 ::by_ref<::GlobalNamespace::ColorScheme*> playerOverrideColorScheme,
                                                 ::by_ref<::BeatSaber::Destinations::GameplayEnvironmentOverride*> environmentOverride);

  /// @brief Method PresentHealthWarningAsync, addr 0x3771604, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PresentHealthWarningAsync();

  /// @brief Method PresentShaderWarmUpAsync, addr 0x3771554, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PresentShaderWarmUpAsync();

  /// @brief Method ShouldGoDirectlyToMenu, addr 0x3771c64, size 0x20, virtual false, abstract: false, final false
  inline bool ShouldGoDirectlyToMenu();

  /// @brief Method <GoToMissionLevelAsync>b__32_0, addr 0x3771cd8, size 0x20, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MissionObjective* _GoToMissionLevelAsync_b__32_0(::BeatSaber::Destinations::SimpleMissionObjective* objective);

  /// @brief Method <GoToMultiplayerLevelAsync>g__InitializeMultiplayerMocks|39_0, addr 0x3771cf8, size 0x4, virtual false, abstract: false, final false
  static inline void _GoToMultiplayerLevelAsync_g__InitializeMultiplayerMocks_39_0(::Zenject::DiContainer* container);

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData* const& __cordl_internal_get__appInitSceneSetupData() const;

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData*& __cordl_internal_get__appInitSceneSetupData();

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData* const& __cordl_internal_get__appInitScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupData*& __cordl_internal_get__appInitScenesTransitionSetupData();

  constexpr ::GlobalNamespace::AudioClipAsyncLoader* const& __cordl_internal_get__audioClipAsyncLoader() const;

  constexpr ::GlobalNamespace::AudioClipAsyncLoader*& __cordl_internal_get__audioClipAsyncLoader();

  constexpr ::GlobalNamespace::BeatmapDataLoader* const& __cordl_internal_get__beatmapDataLoader() const;

  constexpr ::GlobalNamespace::BeatmapDataLoader*& __cordl_internal_get__beatmapDataLoader();

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel* const& __cordl_internal_get__beatmapLevelsEntitlementModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& __cordl_internal_get__beatmapLevelsEntitlementModel();

  constexpr ::GlobalNamespace::BeatmapLevelsModel* const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::GlobalNamespace::ColorSchemesSettings* const& __cordl_internal_get__colorSchemesSettings() const;

  constexpr ::GlobalNamespace::ColorSchemesSettings*& __cordl_internal_get__colorSchemesSettings();

  constexpr ::BeatSaber::Destinations::InitialDestinationController* const& __cordl_internal_get__controller() const;

  constexpr ::BeatSaber::Destinations::InitialDestinationController*& __cordl_internal_get__controller();

  constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData* const& __cordl_internal_get__creditsScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::CreditsScenesTransitionSetupData*& __cordl_internal_get__creditsScenesTransitionSetupData();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupData* const& __cordl_internal_get__healthWarningScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::HealthWarningScenesTransitionSetupData*& __cordl_internal_get__healthWarningScenesTransitionSetupData();

  constexpr ::BeatSaber::Destinations::Destination* const& __cordl_internal_get__lastDestination() const;

  constexpr ::BeatSaber::Destinations::Destination*& __cordl_internal_get__lastDestination();

  constexpr ::GlobalNamespace::MenuScenesTransitionSetupData* const& __cordl_internal_get__menuScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MenuScenesTransitionSetupData*& __cordl_internal_get__menuScenesTransitionSetupData();

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData* const& __cordl_internal_get__missionLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MissionLevelScenesTransitionSetupData*& __cordl_internal_get__missionLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::MissionObjectiveTypeCollection* const& __cordl_internal_get__missionObjectiveTypeCollection() const;

  constexpr ::GlobalNamespace::MissionObjectiveTypeCollection*& __cordl_internal_get__missionObjectiveTypeCollection();

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* const& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*& __cordl_internal_get__multiplayerLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::PlayerDataFileModel* const& __cordl_internal_get__playerDataFileModel() const;

  constexpr ::GlobalNamespace::PlayerDataFileModel*& __cordl_internal_get__playerDataFileModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::RecordingToolManager* const& __cordl_internal_get__recordingToolManager() const;

  constexpr ::GlobalNamespace::RecordingToolManager*& __cordl_internal_get__recordingToolManager();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* const& __cordl_internal_get__shaderWarmupSceneSetupData() const;

  constexpr ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData*& __cordl_internal_get__shaderWarmupSceneSetupData();

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData* const& __cordl_internal_get__standardLevelScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData*& __cordl_internal_get__standardLevelScenesTransitionSetupData();

  constexpr ::GlobalNamespace::StartupErrorScenesTransitionSetupData* const& __cordl_internal_get__startupErrorScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::StartupErrorScenesTransitionSetupData*& __cordl_internal_get__startupErrorScenesTransitionSetupData();

  constexpr ::GlobalNamespace::TerminalController* const& __cordl_internal_get__terminalRunner() const;

  constexpr ::GlobalNamespace::TerminalController*& __cordl_internal_get__terminalRunner();

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData* const& __cordl_internal_get__tutorialScenesTransitionSetupData() const;

  constexpr ::GlobalNamespace::TutorialScenesTransitionSetupData*& __cordl_internal_get__tutorialScenesTransitionSetupData();

  constexpr void __cordl_internal_set__appInitSceneSetupData(::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData* value);

  constexpr void __cordl_internal_set__appInitScenesTransitionSetupData(::GlobalNamespace::AppInitScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value);

  constexpr void __cordl_internal_set__controller(::BeatSaber::Destinations::InitialDestinationController* value);

  constexpr void __cordl_internal_set__creditsScenesTransitionSetupData(::GlobalNamespace::CreditsScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__healthWarningScenesTransitionSetupData(::GlobalNamespace::HealthWarningScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__lastDestination(::BeatSaber::Destinations::Destination* value);

  constexpr void __cordl_internal_set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__missionLevelScenesTransitionSetupData(::GlobalNamespace::MissionLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__missionObjectiveTypeCollection(::GlobalNamespace::MissionObjectiveTypeCollection* value);

  constexpr void __cordl_internal_set__multiplayerLevelScenesTransitionSetupData(::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__playerDataFileModel(::GlobalNamespace::PlayerDataFileModel* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__shaderWarmupSceneSetupData(::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__standardLevelScenesTransitionSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__startupErrorScenesTransitionSetupData(::GlobalNamespace::StartupErrorScenesTransitionSetupData* value);

  constexpr void __cordl_internal_set__terminalRunner(::GlobalNamespace::TerminalController* value);

  constexpr void __cordl_internal_set__tutorialScenesTransitionSetupData(::GlobalNamespace::TutorialScenesTransitionSetupData* value);

  /// @brief Method .ctor, addr 0x3771c84, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::BeatSaber::Destinations::IInitialDestinationResolver"
  constexpr ::BeatSaber::Destinations::IInitialDestinationResolver* i___BeatSaber__Destinations__IInitialDestinationResolver() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitialDestinationResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitialDestinationResolver(InitialDestinationResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitialDestinationResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitialDestinationResolver(InitialDestinationResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21021 };

  /// @brief Field _beatmapLevelsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _controller, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::Destinations::InitialDestinationController* ____controller;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field _environmentsListModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _beatmapDataLoader, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _playerDataFileModel, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataFileModel* ____playerDataFileModel;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _colorSchemesSettings, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemesSettings* ____colorSchemesSettings;

  /// @brief Field _playerDataModel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _missionObjectiveTypeCollection, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::MissionObjectiveTypeCollection* ____missionObjectiveTypeCollection;

  /// @brief Field _recordingToolManager, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* ____recordingToolManager;

  /// @brief Field _terminalRunner, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* ____terminalRunner;

  /// @brief Field _appInitSceneSetupData, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupData_AppInitSceneSetupData* ____appInitSceneSetupData;

  /// @brief Field _appInitScenesTransitionSetupData, offset: 0x88, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupData* ____appInitScenesTransitionSetupData;

  /// @brief Field _standardLevelScenesTransitionSetupData, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::StandardLevelScenesTransitionSetupData* ____standardLevelScenesTransitionSetupData;

  /// @brief Field _multiplayerLevelScenesTransitionSetupData, offset: 0x98, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* ____multiplayerLevelScenesTransitionSetupData;

  /// @brief Field _missionLevelScenesTransitionSetupData, offset: 0xa0, size: 0x8, def value: None
  ::GlobalNamespace::MissionLevelScenesTransitionSetupData* ____missionLevelScenesTransitionSetupData;

  /// @brief Field _tutorialScenesTransitionSetupData, offset: 0xa8, size: 0x8, def value: None
  ::GlobalNamespace::TutorialScenesTransitionSetupData* ____tutorialScenesTransitionSetupData;

  /// @brief Field _creditsScenesTransitionSetupData, offset: 0xb0, size: 0x8, def value: None
  ::GlobalNamespace::CreditsScenesTransitionSetupData* ____creditsScenesTransitionSetupData;

  /// @brief Field _healthWarningScenesTransitionSetupData, offset: 0xb8, size: 0x8, def value: None
  ::GlobalNamespace::HealthWarningScenesTransitionSetupData* ____healthWarningScenesTransitionSetupData;

  /// @brief Field _shaderWarmupSceneSetupData, offset: 0xc0, size: 0x8, def value: None
  ::GlobalNamespace::ShaderWarmupScenesTransitionSetupData* ____shaderWarmupSceneSetupData;

  /// @brief Field _menuScenesTransitionSetupData, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::MenuScenesTransitionSetupData* ____menuScenesTransitionSetupData;

  /// @brief Field _startupErrorScenesTransitionSetupData, offset: 0xd0, size: 0x8, def value: None
  ::GlobalNamespace::StartupErrorScenesTransitionSetupData* ____startupErrorScenesTransitionSetupData;

  /// @brief Field _lastDestination, offset: 0xd8, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* ____lastDestination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____beatmapLevelsModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____controller) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____gameScenesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____environmentsListModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____audioClipAsyncLoader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____beatmapDataLoader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____playerDataFileModel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____beatmapLevelsEntitlementModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____colorSchemesSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____playerDataModel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____missionObjectiveTypeCollection) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____recordingToolManager) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____terminalRunner) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____appInitSceneSetupData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____appInitScenesTransitionSetupData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____standardLevelScenesTransitionSetupData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____multiplayerLevelScenesTransitionSetupData) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____missionLevelScenesTransitionSetupData) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____tutorialScenesTransitionSetupData) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____creditsScenesTransitionSetupData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____healthWarningScenesTransitionSetupData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____shaderWarmupSceneSetupData) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____menuScenesTransitionSetupData) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____startupErrorScenesTransitionSetupData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____lastDestination) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InitialDestinationResolver) == 0xe0, "Size mismatch!");

} // namespace GlobalNamespace
