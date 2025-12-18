#pragma once
// IWYU pragma private; include "GlobalNamespace/InitialDestinationResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
class IInitialDestinationResolver;
}
namespace BeatSaber::Destinations {
class InitialDestinationController;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapDataLoader;
}
namespace GlobalNamespace {
class BeatmapLevelsEntitlementModel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class ColorSchemesSettings;
}
namespace GlobalNamespace {
class CreditsScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class EnvironmentsListModel;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class HealthWarningSceneSetupData;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToCreditsAsync_d__24;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToMainMenuAsync_d__25;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToRecordingToolAsync_d__19;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToStandardLevelAsync_d__21;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToStartupErrorAsync_d__22;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToTargetDestinationAsync_d__17;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToTutorialAsync_d__23;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__InitializeScenesAsync_d__16;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__LaunchRecordingToolAsync_d__18;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__PresentHealthWarningAsync_d__27;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__PresentShaderWarmUpAsync_d__26;
}
namespace GlobalNamespace {
class InitialDestinationResolver___c__DisplayClass28_0;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MenuTransitionsHelper;
}
namespace GlobalNamespace {
class PlayerDataFileModel;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
namespace GlobalNamespace {
class SettingsManager;
}
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
namespace GlobalNamespace {
class StandardLevelScenesTransitionSetupDataSO;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class InitialDestinationResolver;
}
namespace GlobalNamespace {
class InitialDestinationResolver___c__DisplayClass28_0;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToCreditsAsync_d__24;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToMainMenuAsync_d__25;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToRecordingToolAsync_d__19;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToStandardLevelAsync_d__21;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToStartupErrorAsync_d__22;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToTargetDestinationAsync_d__17;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__GoToTutorialAsync_d__23;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__InitializeScenesAsync_d__16;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__LaunchRecordingToolAsync_d__18;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__PresentHealthWarningAsync_d__27;
}
namespace GlobalNamespace {
struct InitialDestinationResolver__PresentShaderWarmUpAsync_d__26;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::InitialDestinationResolver);
MARK_REF_PTR_T(::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27);
MARK_VAL_T(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: InitialDestinationResolver/<>c__DisplayClass28_0
class CORDL_TYPE InitialDestinationResolver___c__DisplayClass28_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field setupData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_setupData, put = __cordl_internal_set_setupData)) ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> setupData;

  static inline ::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0* New_ctor();

  /// @brief Method <InitializeStandardLevelSetupData>g__HandleFinishEvent|0, addr 0x3672884, size 0x1fc, virtual false, abstract: false, final false
  inline void _InitializeStandardLevelSetupData_g__HandleFinishEvent_0(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelScenesTransitionSetupData,
                                                                       ::GlobalNamespace::LevelCompletionResults* levelCompletionResults);

  constexpr ::GlobalNamespace::InitialDestinationResolver* const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::InitialDestinationResolver*& __cordl_internal_get___4__this();

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> const& __cordl_internal_get_setupData() const;

  constexpr ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO>& __cordl_internal_get_setupData();

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::InitialDestinationResolver* value);

  constexpr void __cordl_internal_set_setupData(::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x36727c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver___c__DisplayClass28_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InitialDestinationResolver___c__DisplayClass28_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InitialDestinationResolver___c__DisplayClass28_0(InitialDestinationResolver___c__DisplayClass28_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InitialDestinationResolver___c__DisplayClass28_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InitialDestinationResolver___c__DisplayClass28_0(InitialDestinationResolver___c__DisplayClass28_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20992 };

  /// @brief Field setupData, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO> ___setupData;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0, ___setupData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToCreditsAsync>d__24
struct CORDL_TYPE InitialDestinationResolver__GoToCreditsAsync_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3672a80, size 0x3f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3672e74, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToCreditsAsync_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: None }, CppParam { name: "_transition_5__2", ty:
  // "::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr InitialDestinationResolver__GoToCreditsAsync_d__24(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                               ::GlobalNamespace::InitialDestinationResolver* __4__this, ::BeatSaber::Destinations::Destination* targetDestination,
                                                               ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> _transition_5__2,
                                                               ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20993 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field targetDestination, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field <transition>5__2, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CreditsScenesTransitionSetupDataSO> _transition_5__2;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24, targetDestination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24, _transition_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24, __u__1) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToMainMenuAsync>d__25
struct CORDL_TYPE InitialDestinationResolver__GoToMainMenuAsync_d__25 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3672ee0, size 0x22c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x367310c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToMainMenuAsync_d__25();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToMainMenuAsync_d__25(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::GlobalNamespace::InitialDestinationResolver* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20994 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToRecordingToolAsync>d__19
struct CORDL_TYPE InitialDestinationResolver__GoToRecordingToolAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3673178, size 0x424, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x367359c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToRecordingToolAsync_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "_setupData_5__2", ty: "::GlobalNamespace::RecordingToolSceneSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr InitialDestinationResolver__GoToRecordingToolAsync_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                     ::GlobalNamespace::InitialDestinationResolver* __4__this, ::GlobalNamespace::RecordingToolSceneSetupData* _setupData_5__2,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20995 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field <setupData>5__2, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSceneSetupData* _setupData_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19, _setupData_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToStandardLevelAsync>d__21
struct CORDL_TYPE InitialDestinationResolver__GoToStandardLevelAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3673608, size 0x37c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3673984, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToStandardLevelAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToStandardLevelAsync_d__21(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                     ::BeatSaber::Destinations::Destination* targetDestination, ::GlobalNamespace::InitialDestinationResolver* __4__this,
                                                                     ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20996 };

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
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21, targetDestination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToStartupErrorAsync>d__22
struct CORDL_TYPE InitialDestinationResolver__GoToStartupErrorAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x36739f0, size 0x31c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3673d0c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToStartupErrorAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToStartupErrorAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::BeatSaber::Destinations::Destination* targetDestination, ::GlobalNamespace::InitialDestinationResolver* __4__this,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20997 };

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
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22, targetDestination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToTargetDestinationAsync>d__17
struct CORDL_TYPE InitialDestinationResolver__GoToTargetDestinationAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3673d78, size 0x6dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3674454, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToTargetDestinationAsync_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToTargetDestinationAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                         ::BeatSaber::Destinations::Destination* targetDestination, ::GlobalNamespace::InitialDestinationResolver* __4__this,
                                                                         ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20998 };

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
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17, targetDestination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<GoToTutorialAsync>d__23
struct CORDL_TYPE InitialDestinationResolver__GoToTutorialAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x36744c0, size 0x278, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3674738, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__GoToTutorialAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "targetDestination", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__GoToTutorialAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                ::GlobalNamespace::InitialDestinationResolver* __4__this, ::BeatSaber::Destinations::Destination* targetDestination,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20999 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field targetDestination, offset: 0x28, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* targetDestination;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23, targetDestination) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<InitializeScenesAsync>d__16
struct CORDL_TYPE InitialDestinationResolver__InitializeScenesAsync_d__16 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x36747a4, size 0x56c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3674d10, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__InitializeScenesAsync_d__16();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "_targetDestination_5__2", ty: "::BeatSaber::Destinations::Destination*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__InitializeScenesAsync_d__16(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                    ::GlobalNamespace::InitialDestinationResolver* __4__this, ::BeatSaber::Destinations::Destination* _targetDestination_5__2,
                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21000 };

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
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16, _targetDestination_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<LaunchRecordingToolAsync>d__18
struct CORDL_TYPE InitialDestinationResolver__LaunchRecordingToolAsync_d__18 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3674d7c, size 0x250, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3674fcc, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__LaunchRecordingToolAsync_d__18();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr InitialDestinationResolver__LaunchRecordingToolAsync_d__18(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::GlobalNamespace::InitialDestinationResolver* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21001 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::InitialDestinationResolver* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<PresentHealthWarningAsync>d__27
struct CORDL_TYPE InitialDestinationResolver__PresentHealthWarningAsync_d__27 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3675038, size 0x3a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x36753d8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__PresentHealthWarningAsync_d__27();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "_sceneSetupData_5__2", ty: "::GlobalNamespace::HealthWarningSceneSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr InitialDestinationResolver__PresentHealthWarningAsync_d__27(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                        ::GlobalNamespace::InitialDestinationResolver* __4__this, ::GlobalNamespace::HealthWarningSceneSetupData* _sceneSetupData_5__2,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                        ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21002 };

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
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27, _sceneSetupData_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: InitialDestinationResolver/<PresentShaderWarmUpAsync>d__26
struct CORDL_TYPE InitialDestinationResolver__PresentShaderWarmUpAsync_d__26 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3675444, size 0x3a0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x36757e4, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InitialDestinationResolver__PresentShaderWarmUpAsync_d__26();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::InitialDestinationResolver*", modifiers: "",
  // def_value: None }, CppParam { name: "_sceneSetupData_5__2", ty: "::GlobalNamespace::ShaderWarmupSceneSetupData*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "",
  // def_value: None }]
  constexpr InitialDestinationResolver__PresentShaderWarmUpAsync_d__26(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                       ::GlobalNamespace::InitialDestinationResolver* __4__this, ::GlobalNamespace::ShaderWarmupSceneSetupData* _sceneSetupData_5__2,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                       ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21003 };

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
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26, _sceneSetupData_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26, __u__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26, __u__2) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: InitialDestinationResolver
class CORDL_TYPE InitialDestinationResolver : public ::System::Object {
public:
  // Declarations
  using _GoToCreditsAsync_d__24 = ::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24;

  using _GoToMainMenuAsync_d__25 = ::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25;

  using _GoToRecordingToolAsync_d__19 = ::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19;

  using _GoToStandardLevelAsync_d__21 = ::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21;

  using _GoToStartupErrorAsync_d__22 = ::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22;

  using _GoToTargetDestinationAsync_d__17 = ::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17;

  using _GoToTutorialAsync_d__23 = ::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23;

  using _InitializeScenesAsync_d__16 = ::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16;

  using _LaunchRecordingToolAsync_d__18 = ::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18;

  using _PresentHealthWarningAsync_d__27 = ::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27;

  using _PresentShaderWarmUpAsync_d__26 = ::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26;

  using __c__DisplayClass28_0 = ::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0;

  /// @brief Field _audioClipAsyncLoader, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__audioClipAsyncLoader, put = __cordl_internal_set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader* _audioClipAsyncLoader;

  /// @brief Field _beatmapDataLoader, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDataLoader, put = __cordl_internal_set__beatmapDataLoader)) ::GlobalNamespace::BeatmapDataLoader* _beatmapDataLoader;

  /// @brief Field _beatmapLevelsEntitlementModel, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsEntitlementModel,
                      put = __cordl_internal_set__beatmapLevelsEntitlementModel)) ::GlobalNamespace::BeatmapLevelsEntitlementModel* _beatmapLevelsEntitlementModel;

  /// @brief Field _beatmapLevelsModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel)) ::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _colorSchemesSettings, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__colorSchemesSettings, put = __cordl_internal_set__colorSchemesSettings)) ::GlobalNamespace::ColorSchemesSettings* _colorSchemesSettings;

  /// @brief Field _controller, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__controller, put = __cordl_internal_set__controller)) ::UnityW<::BeatSaber::Destinations::InitialDestinationController> _controller;

  /// @brief Field _environmentsListModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__environmentsListModel, put = __cordl_internal_set__environmentsListModel)) ::GlobalNamespace::EnvironmentsListModel* _environmentsListModel;

  /// @brief Field _gameScenesManager, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _lastDestination, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__lastDestination, put = __cordl_internal_set__lastDestination)) ::BeatSaber::Destinations::Destination* _lastDestination;

  /// @brief Field _playerDataFileModel, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataFileModel, put = __cordl_internal_set__playerDataFileModel)) ::GlobalNamespace::PlayerDataFileModel* _playerDataFileModel;

  /// @brief Field _playerDataModel, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel)) ::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _recordingToolManager, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolManager, put = __cordl_internal_set__recordingToolManager)) ::GlobalNamespace::RecordingToolManager* _recordingToolManager;

  /// @brief Field _settingsManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Field _transitions, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__transitions, put = __cordl_internal_set__transitions)) ::UnityW<::GlobalNamespace::MenuTransitionsHelper> _transitions;

  /// @brief Field characteristicCollection, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_characteristicCollection,
                      put = __cordl_internal_set_characteristicCollection)) ::GlobalNamespace::BeatmapCharacteristicCollection* characteristicCollection;

  /// @brief Convert operator to "::BeatSaber::Destinations::IInitialDestinationResolver"
  constexpr operator ::BeatSaber::Destinations::IInitialDestinationResolver*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method DelaySmallAmountOfTime, addr 0x3671ec4, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Threading::Tasks::Task* DelaySmallAmountOfTime();

  /// @brief Method GoToCreditsAsync, addr 0x3672168, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToCreditsAsync(::BeatSaber::Destinations::Destination* targetDestination);

  /// @brief Method GoToMainMenuAsync, addr 0x3672228, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToMainMenuAsync();

  /// @brief Method GoToRecordingToolAsync, addr 0x3671e14, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToRecordingToolAsync();

  /// @brief Method GoToStandardLevelAsync, addr 0x3671f1c, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToStandardLevelAsync(::BeatSaber::Destinations::Destination* targetDestination);

  /// @brief Method GoToStartupErrorAsync, addr 0x3671fe0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToStartupErrorAsync(::BeatSaber::Destinations::Destination* targetDestination);

  /// @brief Method GoToTargetDestinationAsync, addr 0x3671ca0, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToTargetDestinationAsync(::BeatSaber::Destinations::Destination* targetDestination);

  /// @brief Method GoToTutorialAsync, addr 0x36720a4, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* GoToTutorialAsync(::BeatSaber::Destinations::Destination* targetDestination);

  /// @brief Method Initialize, addr 0x3671bd0, size 0x1c, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeScenesAsync, addr 0x3671bec, size 0xb4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* InitializeScenesAsync();

  /// @brief Method InitializeStandardLevelSetupData, addr 0x3672438, size 0x38c, virtual false, abstract: false, final false
  inline void InitializeStandardLevelSetupData(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* setupData, ::BeatSaber::Destinations::Destination* targetDestination);

  /// @brief Method LaunchRecordingToolAsync, addr 0x3671d64, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LaunchRecordingToolAsync();

  static inline ::GlobalNamespace::InitialDestinationResolver* New_ctor();

  /// @brief Method PresentHealthWarningAsync, addr 0x3672388, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PresentHealthWarningAsync();

  /// @brief Method PresentShaderWarmUpAsync, addr 0x36722d8, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PresentShaderWarmUpAsync();

  /// @brief Method <GoToCreditsAsync>g__HandleCreditsSceneDidFinish|24_0, addr 0x36727cc, size 0xb8, virtual false, abstract: false, final false
  inline void _GoToCreditsAsync_g__HandleCreditsSceneDidFinish_24_0(::GlobalNamespace::CreditsScenesTransitionSetupDataSO* setupData);

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

  constexpr ::UnityW<::BeatSaber::Destinations::InitialDestinationController> const& __cordl_internal_get__controller() const;

  constexpr ::UnityW<::BeatSaber::Destinations::InitialDestinationController>& __cordl_internal_get__controller();

  constexpr ::GlobalNamespace::EnvironmentsListModel* const& __cordl_internal_get__environmentsListModel() const;

  constexpr ::GlobalNamespace::EnvironmentsListModel*& __cordl_internal_get__environmentsListModel();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::BeatSaber::Destinations::Destination* const& __cordl_internal_get__lastDestination() const;

  constexpr ::BeatSaber::Destinations::Destination*& __cordl_internal_get__lastDestination();

  constexpr ::GlobalNamespace::PlayerDataFileModel* const& __cordl_internal_get__playerDataFileModel() const;

  constexpr ::GlobalNamespace::PlayerDataFileModel*& __cordl_internal_get__playerDataFileModel();

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::GlobalNamespace::RecordingToolManager* const& __cordl_internal_get__recordingToolManager() const;

  constexpr ::GlobalNamespace::RecordingToolManager*& __cordl_internal_get__recordingToolManager();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper> const& __cordl_internal_get__transitions() const;

  constexpr ::UnityW<::GlobalNamespace::MenuTransitionsHelper>& __cordl_internal_get__transitions();

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection* const& __cordl_internal_get_characteristicCollection() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristicCollection*& __cordl_internal_get_characteristicCollection();

  constexpr void __cordl_internal_set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader* value);

  constexpr void __cordl_internal_set__beatmapDataLoader(::GlobalNamespace::BeatmapDataLoader* value);

  constexpr void __cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__colorSchemesSettings(::GlobalNamespace::ColorSchemesSettings* value);

  constexpr void __cordl_internal_set__controller(::UnityW<::BeatSaber::Destinations::InitialDestinationController> value);

  constexpr void __cordl_internal_set__environmentsListModel(::GlobalNamespace::EnvironmentsListModel* value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__lastDestination(::BeatSaber::Destinations::Destination* value);

  constexpr void __cordl_internal_set__playerDataFileModel(::GlobalNamespace::PlayerDataFileModel* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  constexpr void __cordl_internal_set__transitions(::UnityW<::GlobalNamespace::MenuTransitionsHelper> value);

  constexpr void __cordl_internal_set_characteristicCollection(::GlobalNamespace::BeatmapCharacteristicCollection* value);

  /// @brief Method .ctor, addr 0x36727c8, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21004 };

  /// @brief Field _beatmapLevelsModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _controller, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::BeatSaber::Destinations::InitialDestinationController> ____controller;

  /// @brief Field _gameScenesManager, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  /// @brief Field characteristicCollection, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicCollection* ___characteristicCollection;

  /// @brief Field _environmentsListModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentsListModel* ____environmentsListModel;

  /// @brief Field _audioClipAsyncLoader, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AudioClipAsyncLoader* ____audioClipAsyncLoader;

  /// @brief Field _settingsManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _beatmapDataLoader, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapDataLoader* ____beatmapDataLoader;

  /// @brief Field _playerDataFileModel, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::PlayerDataFileModel* ____playerDataFileModel;

  /// @brief Field _beatmapLevelsEntitlementModel, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsEntitlementModel* ____beatmapLevelsEntitlementModel;

  /// @brief Field _colorSchemesSettings, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::ColorSchemesSettings* ____colorSchemesSettings;

  /// @brief Field _transitions, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuTransitionsHelper> ____transitions;

  /// @brief Field _playerDataModel, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _recordingToolManager, offset: 0x78, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* ____recordingToolManager;

  /// @brief Field _lastDestination, offset: 0x80, size: 0x8, def value: None
  ::BeatSaber::Destinations::Destination* ____lastDestination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____beatmapLevelsModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____controller) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____gameScenesManager) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ___characteristicCollection) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____environmentsListModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____audioClipAsyncLoader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____settingsManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____beatmapDataLoader) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____playerDataFileModel) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____beatmapLevelsEntitlementModel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____colorSchemesSettings) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____transitions) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____playerDataModel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____recordingToolManager) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InitialDestinationResolver, ____lastDestination) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::InitialDestinationResolver, 0x88>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::InitialDestinationResolver);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver*, "", "InitialDestinationResolver");
NEED_NO_BOX(::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver___c__DisplayClass28_0*, "", "InitialDestinationResolver/<>c__DisplayClass28_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__GoToCreditsAsync_d__24, "", "InitialDestinationResolver/<GoToCreditsAsync>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__GoToMainMenuAsync_d__25, "", "InitialDestinationResolver/<GoToMainMenuAsync>d__25");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__GoToRecordingToolAsync_d__19, "", "InitialDestinationResolver/<GoToRecordingToolAsync>d__19");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__GoToStandardLevelAsync_d__21, "", "InitialDestinationResolver/<GoToStandardLevelAsync>d__21");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__GoToStartupErrorAsync_d__22, "", "InitialDestinationResolver/<GoToStartupErrorAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__GoToTargetDestinationAsync_d__17, "", "InitialDestinationResolver/<GoToTargetDestinationAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__GoToTutorialAsync_d__23, "", "InitialDestinationResolver/<GoToTutorialAsync>d__23");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__InitializeScenesAsync_d__16, "", "InitialDestinationResolver/<InitializeScenesAsync>d__16");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__LaunchRecordingToolAsync_d__18, "", "InitialDestinationResolver/<LaunchRecordingToolAsync>d__18");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__PresentHealthWarningAsync_d__27, "", "InitialDestinationResolver/<PresentHealthWarningAsync>d__27");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InitialDestinationResolver__PresentShaderWarmUpAsync_d__26, "", "InitialDestinationResolver/<PresentShaderWarmUpAsync>d__26");
