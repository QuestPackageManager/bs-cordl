#pragma once
// IWYU pragma private; include "GlobalNamespace/AppInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInit)
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext;
}
namespace GlobalNamespace {
class AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
struct AppInit_AppStartType;
}
namespace GlobalNamespace {
struct AppInit__Awake_d__10;
}
namespace GlobalNamespace {
struct AppInit__InitializeAsync_d__13;
}
namespace GlobalNamespace {
struct AppInit__StartGameAsync_d__11;
}
namespace GlobalNamespace {
class AppInit___c;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct AppInit_AppStartType;
}
namespace GlobalNamespace {
class AppInit;
}
namespace GlobalNamespace {
class AppInit___c;
}
namespace GlobalNamespace {
struct AppInit__Awake_d__10;
}
namespace GlobalNamespace {
struct AppInit__InitializeAsync_d__13;
}
namespace GlobalNamespace {
struct AppInit__StartGameAsync_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AppInit_AppStartType);
MARK_REF_PTR_T(::GlobalNamespace::AppInit);
MARK_REF_PTR_T(::GlobalNamespace::AppInit___c);
MARK_VAL_T(::GlobalNamespace::AppInit__Awake_d__10);
MARK_VAL_T(::GlobalNamespace::AppInit__InitializeAsync_d__13);
MARK_VAL_T(::GlobalNamespace::AppInit__StartGameAsync_d__11);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInit/AppStartType
struct CORDL_TYPE AppInit_AppStartType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AppInit_AppStartType_Unwrapped
  enum struct __AppInit_AppStartType_Unwrapped : int32_t {
    __E_AppStart = static_cast<int32_t>(0x0),
    __E_AppRestart = static_cast<int32_t>(0x1),
    __E_MultiSceneEditor = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AppInit_AppStartType_Unwrapped() const noexcept {
    return static_cast<__AppInit_AppStartType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit_AppStartType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AppInit_AppStartType(int32_t value__) noexcept;

  /// @brief Field AppRestart value: I32(1)
  static ::GlobalNamespace::AppInit_AppStartType const AppRestart;

  /// @brief Field AppStart value: I32(0)
  static ::GlobalNamespace::AppInit_AppStartType const AppStart;

  /// @brief Field MultiSceneEditor value: I32(2)
  static ::GlobalNamespace::AppInit_AppStartType const MultiSceneEditor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17607 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInit_AppStartType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit_AppStartType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInit/<>c
class CORDL_TYPE AppInit___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::AppInit___c* __9;

  /// @brief Field <>9__13_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__13_1, put = setStaticF___9__13_1)) ::System::Func_1<bool>* __9__13_1;

  static inline ::GlobalNamespace::AppInit___c* New_ctor();

  /// @brief Method <InitializeAsync>b__13_1, addr 0x2294b30, size 0x8, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__13_1();

  /// @brief Method .ctor, addr 0x2294b28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::AppInit___c* getStaticF___9();

  static inline ::System::Func_1<bool>* getStaticF___9__13_1();

  static inline void setStaticF___9(::GlobalNamespace::AppInit___c* value);

  static inline void setStaticF___9__13_1(::System::Func_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInit___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInit___c(AppInit___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInit___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInit___c(AppInit___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17608 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInit/<Awake>d__10
struct CORDL_TYPE AppInit__Awake_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2294b38, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2294d60, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit__Awake_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AppInit__Awake_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                 ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17609 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInit> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInit__Awake_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__Awake_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__Awake_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__Awake_d__10, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit__Awake_d__10, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies AppInit::AppStartType, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInit/<InitializeAsync>d__13
struct CORDL_TYPE AppInit__InitializeAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2294d6c, size 0x58c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2295400, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit__InitializeAsync_d__13();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "_startType_5__2", ty: "::GlobalNamespace::AppInit_AppStartType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AppInit__InitializeAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                           ::GlobalNamespace::AppInit_AppStartType _startType_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17610 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInit> __4__this;

  /// @brief Field <startType>5__2, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::AppInit_AppStartType _startType_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__13, _startType_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__13, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit__InitializeAsync_d__13, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInit/<StartGameAsync>d__11
struct CORDL_TYPE AppInit__StartGameAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2295468, size 0x360, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2295888, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit__StartGameAsync_d__11();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AppInit__StartGameAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17611 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInit> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit__StartGameAsync_d__11, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInit
class CORDL_TYPE AppInit : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using AppStartType = ::GlobalNamespace::AppInit_AppStartType;

  using _Awake_d__10 = ::GlobalNamespace::AppInit__Awake_d__10;

  using _InitializeAsync_d__13 = ::GlobalNamespace::AppInit__InitializeAsync_d__13;

  using _StartGameAsync_d__11 = ::GlobalNamespace::AppInit__StartGameAsync_d__11;

  using __c = ::GlobalNamespace::AppInit___c;

  /// @brief Field _asyncSceneContext, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncSceneContext, put = __cordl_internal_set__asyncSceneContext)) ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> _asyncSceneContext;

  /// @brief Field _cameraGO, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraGO, put = __cordl_internal_set__cameraGO)) ::UnityW<::UnityEngine::GameObject> _cameraGO;

  /// @brief Field _gameScenesManager, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  /// @brief Field _setupData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__setupData, put = __cordl_internal_set__setupData)) ::GlobalNamespace::AppInitSetupData* _setupData;

  __declspec(property(get = get_gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> gameScenesManager;

  __declspec(property(get = get_isTestContext)) bool isTestContext;

  /// @brief Field sceneSetupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneSetupData,
                      put = __cordl_internal_set_sceneSetupData)) ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData* sceneSetupData;

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method Awake, addr 0x22944c0, size 0x90, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method GetAppStartType, addr 0x2294978, size 0x94, virtual false, abstract: false, final false
  inline ::GlobalNamespace::AppInit_AppStartType GetAppStartType();

  /// @brief Method HandleBeforeDismissingScenes, addr 0x22948d8, size 0xa0, virtual false, abstract: false, final false
  inline void HandleBeforeDismissingScenes(::System::Collections::Generic::List_1<::StringW>* scenes);

  /// @brief Method InitializeAsync, addr 0x2294698, size 0xc4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  static inline ::GlobalNamespace::AppInit* New_ctor();

  /// @brief Method OnDestroy, addr 0x229475c, size 0xcc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PreloadAsync, addr 0x2294610, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method RepeatableSetupAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method StartGameAsync, addr 0x2294550, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* StartGameAsync();

  /// @brief Method TransitionToNextScene, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void TransitionToNextScene();

  /// @brief Method <InitializeAsync>b__13_0, addr 0x2294a98, size 0x24, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__13_0();

  constexpr ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> const& __cordl_internal_get__asyncSceneContext() const;

  constexpr ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>& __cordl_internal_get__asyncSceneContext();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraGO();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::GlobalNamespace::AppInitSetupData* const& __cordl_internal_get__setupData() const;

  constexpr ::GlobalNamespace::AppInitSetupData*& __cordl_internal_get__setupData();

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData* const& __cordl_internal_get_sceneSetupData() const;

  constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData*& __cordl_internal_get_sceneSetupData();

  constexpr void __cordl_internal_set__asyncSceneContext(::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> value);

  constexpr void __cordl_internal_set__cameraGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  constexpr void __cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value);

  constexpr void __cordl_internal_set_sceneSetupData(::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData* value);

  /// @brief Method .ctor, addr 0x2294a0c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameScenesManager, addr 0x2294498, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::GameScenesManager> get_gameScenesManager();

  /// @brief Method get_isTestContext, addr 0x22944a0, size 0x20, virtual false, abstract: false, final false
  inline bool get_isTestContext();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInit(AppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInit(AppInit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17612 };

  /// @brief Field _cameraGO, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____cameraGO;

  /// @brief Field _asyncSceneContext, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> ____asyncSceneContext;

  /// @brief Field sceneSetupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AppInitScenesTransitionSetupDataSO_AppInitSceneSetupData* ___sceneSetupData;

  /// @brief Field _setupData, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _gameScenesManager, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInit, ____cameraGO) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____asyncSceneContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ___sceneSetupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____setupData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____gameScenesManager) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit_AppStartType, "", "AppInit/AppStartType");
NEED_NO_BOX(::GlobalNamespace::AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit*, "", "AppInit");
NEED_NO_BOX(::GlobalNamespace::AppInit___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit___c*, "", "AppInit/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit__Awake_d__10, "", "AppInit/<Awake>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit__InitializeAsync_d__13, "", "AppInit/<InitializeAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit__StartGameAsync_d__11, "", "AppInit/<StartGameAsync>d__11");
