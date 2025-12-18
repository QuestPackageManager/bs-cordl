#pragma once
// IWYU pragma private; include "GlobalNamespace/RecordingToolSettingsNoTransitionInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "Zenject/zzzz__NoTransitionInstaller_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RecordingToolSettingsNoTransitionInstaller)
namespace GlobalNamespace {
class RecordingToolManager;
}
namespace GlobalNamespace {
class RecordingToolSceneSetupData;
}
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3;
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
// Forward declare root types
namespace GlobalNamespace {
class RecordingToolSettingsNoTransitionInstaller;
}
namespace GlobalNamespace {
struct RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
MARK_VAL_T(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: RecordingToolSettingsNoTransitionInstaller/<WaitForTransition>d__3
struct CORDL_TYPE RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x577a528, size 0x264, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x577a78c, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "setupData", ty: "::GlobalNamespace::RecordingToolSceneSetupData*", modifiers:
  // "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller>", modifiers: "", def_value: None }, CppParam { name: "__u__1",
  // ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                               ::GlobalNamespace::RecordingToolSceneSetupData* setupData,
                                                                               ::UnityW<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller> __4__this,
                                                                               ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6802 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field setupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolSceneSetupData* setupData;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3, setupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Zenject.NoTransitionInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: RecordingToolSettingsNoTransitionInstaller
class CORDL_TYPE RecordingToolSettingsNoTransitionInstaller : public ::Zenject::NoTransitionInstaller {
public:
  // Declarations
  using _WaitForTransition_d__3 = ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3;

  /// @brief Field _recordingToolManager, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolManager, put = __cordl_internal_set__recordingToolManager)) ::GlobalNamespace::RecordingToolManager* _recordingToolManager;

  /// @brief Field _scenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scenesTransitionSetupData,
                      put = __cordl_internal_set__scenesTransitionSetupData)) ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>
      _scenesTransitionSetupData;

  /// @brief Method InstallBindings, addr 0x577a230, size 0xf8, virtual true, abstract: false, final false
  inline void InstallBindings(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller* New_ctor();

  /// @brief Method WaitForTransition, addr 0x577a460, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* WaitForTransition(::GlobalNamespace::RecordingToolSceneSetupData* setupData);

  constexpr ::GlobalNamespace::RecordingToolManager* const& __cordl_internal_get__recordingToolManager() const;

  constexpr ::GlobalNamespace::RecordingToolManager*& __cordl_internal_get__recordingToolManager();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> const& __cordl_internal_get__scenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>& __cordl_internal_get__scenesTransitionSetupData();

  constexpr void __cordl_internal_set__recordingToolManager(::GlobalNamespace::RecordingToolManager* value);

  constexpr void __cordl_internal_set__scenesTransitionSetupData(::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x577a524, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecordingToolSettingsNoTransitionInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecordingToolSettingsNoTransitionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecordingToolSettingsNoTransitionInstaller(RecordingToolSettingsNoTransitionInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6803 };

  /// @brief Field _scenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> ____scenesTransitionSetupData;

  /// @brief Field _recordingToolManager, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::RecordingToolManager* ____recordingToolManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, ____scenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, ____recordingToolManager) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller*, "", "RecordingToolSettingsNoTransitionInstaller");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RecordingToolSettingsNoTransitionInstaller__WaitForTransition_d__3, "", "RecordingToolSettingsNoTransitionInstaller/<WaitForTransition>d__3");
