#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultScenesTransitionsFromInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultScenesTransitionsFromInit)
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit___c__DisplayClass9_0;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class HealthWarningScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class RecordingToolScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class ShaderWarmupScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class StartupErrorScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
struct __c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit___c__DisplayClass9_0;
}
namespace GlobalNamespace {
struct __c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultScenesTransitionsFromInit);
MARK_REF_PTR_T(::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0);
MARK_VAL_T(::GlobalNamespace::__c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d);
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: DefaultScenesTransitionsFromInit/<>c__DisplayClass9_0/<<TransitionToNextScene>g__OnFinishCallback|0>d
struct CORDL_TYPE __c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x27181c0, size 0x2c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2718484, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr __c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d(int32_t __1__state,
                                                                                                                  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                  ::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0* __4__this,
                                                                                                                  ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17786 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::__c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultScenesTransitionsFromInit/<>c__DisplayClass9_0
class CORDL_TYPE DefaultScenesTransitionsFromInit___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  using __TransitionToNextScene_g__OnFinishCallback_0_d = ::GlobalNamespace::__c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d;

  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> __4__this;

  /// @brief Field onFinishShaderWarmup, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_onFinishShaderWarmup, put = __cordl_internal_set_onFinishShaderWarmup)) ::System::Action* onFinishShaderWarmup;

  static inline ::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0* New_ctor();

  /// @brief Method <TransitionToNextScene>g__OnFinishCallback|0, addr 0x2718130, size 0x90, virtual false, abstract: false, final false
  inline void _TransitionToNextScene_g__OnFinishCallback_0(::Zenject::DiContainer* _);

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get___4__this();

  constexpr ::System::Action* const& __cordl_internal_get_onFinishShaderWarmup() const;

  constexpr ::System::Action*& __cordl_internal_get_onFinishShaderWarmup();

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> value);

  constexpr void __cordl_internal_set_onFinishShaderWarmup(::System::Action* value);

  /// @brief Method .ctor, addr 0x2718078, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultScenesTransitionsFromInit___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultScenesTransitionsFromInit___c__DisplayClass9_0(DefaultScenesTransitionsFromInit___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultScenesTransitionsFromInit___c__DisplayClass9_0(DefaultScenesTransitionsFromInit___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17787 };

  /// @brief Field onFinishShaderWarmup, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___onFinishShaderWarmup;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0, ___onFinishShaderWarmup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DefaultScenesTransitionsFromInit
class CORDL_TYPE DefaultScenesTransitionsFromInit : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c__DisplayClass9_0 = ::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0;

  /// @brief Field _beatmapEditorScenesTransitionSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapEditorScenesTransitionSetupData,
                      put = __cordl_internal_set__beatmapEditorScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>
      _beatmapEditorScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _healthWarningScenesTransitionSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__healthWarningScenesTransitionSetupData,
                      put = __cordl_internal_set__healthWarningScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>
      _healthWarningScenesTransitionSetupData;

  /// @brief Field _mainMenuScenesTransitionSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mainMenuScenesTransitionSetupData,
                      put = __cordl_internal_set__mainMenuScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>
      _mainMenuScenesTransitionSetupData;

  /// @brief Field _recordingToolScenesTransitionSetupData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__recordingToolScenesTransitionSetupData,
                      put = __cordl_internal_set__recordingToolScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>
      _recordingToolScenesTransitionSetupData;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__shaderWarmupScenesTransitionSetupData,
                      put = __cordl_internal_set__shaderWarmupScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>
      _shaderWarmupScenesTransitionSetupData;

  /// @brief Field _startupErrorScenesTransitionSetupData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__startupErrorScenesTransitionSetupData,
                      put = __cordl_internal_set__startupErrorScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO>
      _startupErrorScenesTransitionSetupData;

  __declspec(property(get = get_mainMenuScenesTransitionSetupData)) ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> mainMenuScenesTransitionSetupData;

  static inline ::GlobalNamespace::DefaultScenesTransitionsFromInit* New_ctor();

  /// @brief Method TransitionToNextScene, addr 0x2717e58, size 0x220, virtual false, abstract: false, final false
  inline void TransitionToNextScene(bool goStraightToMenu, bool goStraightToEditor, bool goToRecordingToolScene, ::System::Action* onFinishShaderWarmup);

  /// @brief Method TransitionToStartupErrorScene, addr 0x2718080, size 0xa8, virtual false, abstract: false, final false
  inline void TransitionToStartupErrorScene(::StringW title, ::StringW subtitle);

  constexpr ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> const& __cordl_internal_get__beatmapEditorScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>& __cordl_internal_get__beatmapEditorScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> const& __cordl_internal_get__healthWarningScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO>& __cordl_internal_get__healthWarningScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> const& __cordl_internal_get__mainMenuScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO>& __cordl_internal_get__mainMenuScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> const& __cordl_internal_get__recordingToolScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO>& __cordl_internal_get__recordingToolScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> const& __cordl_internal_get__shaderWarmupScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO>& __cordl_internal_get__shaderWarmupScenesTransitionSetupData();

  constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> const& __cordl_internal_get__startupErrorScenesTransitionSetupData() const;

  constexpr ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO>& __cordl_internal_get__startupErrorScenesTransitionSetupData();

  constexpr void __cordl_internal_set__beatmapEditorScenesTransitionSetupData(::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__healthWarningScenesTransitionSetupData(::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__mainMenuScenesTransitionSetupData(::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__recordingToolScenesTransitionSetupData(::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__shaderWarmupScenesTransitionSetupData(::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> value);

  constexpr void __cordl_internal_set__startupErrorScenesTransitionSetupData(::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> value);

  /// @brief Method .ctor, addr 0x2718128, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_mainMenuScenesTransitionSetupData, addr 0x2717e50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> get_mainMenuScenesTransitionSetupData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultScenesTransitionsFromInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultScenesTransitionsFromInit(DefaultScenesTransitionsFromInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultScenesTransitionsFromInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultScenesTransitionsFromInit(DefaultScenesTransitionsFromInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17788 };

  /// @brief Field _healthWarningScenesTransitionSetupData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::HealthWarningScenesTransitionSetupDataSO> ____healthWarningScenesTransitionSetupData;

  /// @brief Field _recordingToolScenesTransitionSetupData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::RecordingToolScenesTransitionSetupDataSO> ____recordingToolScenesTransitionSetupData;

  /// @brief Field _mainMenuScenesTransitionSetupData, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MenuScenesTransitionSetupDataSO> ____mainMenuScenesTransitionSetupData;

  /// @brief Field _beatmapEditorScenesTransitionSetupData, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO> ____beatmapEditorScenesTransitionSetupData;

  /// @brief Field _shaderWarmupScenesTransitionSetupData, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ShaderWarmupScenesTransitionSetupDataSO> ____shaderWarmupScenesTransitionSetupData;

  /// @brief Field _startupErrorScenesTransitionSetupData, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StartupErrorScenesTransitionSetupDataSO> ____startupErrorScenesTransitionSetupData;

  /// @brief Field _gameScenesManager, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____healthWarningScenesTransitionSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____recordingToolScenesTransitionSetupData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____mainMenuScenesTransitionSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____beatmapEditorScenesTransitionSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____shaderWarmupScenesTransitionSetupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____startupErrorScenesTransitionSetupData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DefaultScenesTransitionsFromInit, ____gameScenesManager) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultScenesTransitionsFromInit, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultScenesTransitionsFromInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultScenesTransitionsFromInit*, "", "DefaultScenesTransitionsFromInit");
NEED_NO_BOX(::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultScenesTransitionsFromInit___c__DisplayClass9_0*, "", "DefaultScenesTransitionsFromInit/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__c__DisplayClass9_0_DefaultScenesTransitionsFromInit___TransitionToNextScene_g__OnFinishCallback_0_d, "",
                       "DefaultScenesTransitionsFromInit/<>c__DisplayClass9_0/<<TransitionToNextScene>g__OnFinishCallback|0>d");
