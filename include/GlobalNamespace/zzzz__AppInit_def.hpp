#pragma once
// IWYU pragma private; include "GlobalNamespace\AppInit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInit)
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext;
}
namespace BGLib::AppFlow::Initialization {
class InitializationTime;
}
namespace GlobalNamespace {
struct AppInit__Awake_d__7;
}
namespace GlobalNamespace {
struct AppInit__InitializeAsync_d__10;
}
namespace GlobalNamespace {
struct AppInit__StartGameAsync_d__8;
}
namespace GlobalNamespace {
class AppInit___c;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class AppInit;
}
namespace GlobalNamespace {
class AppInit___c;
}
namespace GlobalNamespace {
struct AppInit__Awake_d__7;
}
namespace GlobalNamespace {
struct AppInit__InitializeAsync_d__10;
}
namespace GlobalNamespace {
struct AppInit__StartGameAsync_d__8;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AppInit*);
MARK_REF_T(::GlobalNamespace::AppInit___c*);
MARK_VAL_T(::GlobalNamespace::AppInit__Awake_d__7);
MARK_VAL_T(::GlobalNamespace::AppInit__InitializeAsync_d__10);
MARK_VAL_T(::GlobalNamespace::AppInit__StartGameAsync_d__8);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInit*, "", "AppInit");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInit___c*, "", "AppInit/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInit__Awake_d__7, "", "AppInit/<Awake>d__7");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInit__InitializeAsync_d__10, "", "AppInit/<InitializeAsync>d__10");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AppInit__StartGameAsync_d__8, "", "AppInit/<StartGameAsync>d__8");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInit/<>c
class CORDL_TYPE AppInit___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::AppInit___c* __9;

  /// @brief Field <>9__10_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_1, put = setStaticF___9__10_1)) ::System::Func_1<bool>* __9__10_1;

  static inline ::GlobalNamespace::AppInit___c* New_ctor();

  /// @brief Method <InitializeAsync>b__10_1, addr 0x32ffc0c, size 0x28, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__10_1();

  /// @brief Method .ctor, addr 0x32ffc08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::AppInit___c* getStaticF___9();

  static inline ::System::Func_1<bool>* getStaticF___9__10_1();

  static inline void setStaticF___9(::GlobalNamespace::AppInit___c* value);

  static inline void setStaticF___9__10_1(::System::Func_1<bool>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21512 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AppInit___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInit/<Awake>d__7
struct CORDL_TYPE AppInit__Awake_d__7 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32ffc34, size 0x244, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x32ffe78, size 0x8, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit__Awake_d__7();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AppInit__Awake_d__7(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21513 };

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
static_assert(offsetof(::GlobalNamespace::AppInit__Awake_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__Awake_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__Awake_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__Awake_d__7, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AppInit__Awake_d__7) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInit/<InitializeAsync>d__10
struct CORDL_TYPE AppInit__InitializeAsync_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x32ffe80, size 0x5d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3300584, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit__InitializeAsync_d__10();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AppInit__InitializeAsync_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21514 };

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
static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__10, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__InitializeAsync_d__10, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AppInit__InitializeAsync_d__10) == 0x30, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: AppInit/<StartGameAsync>d__8
struct CORDL_TYPE AppInit__StartGameAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x33005f0, size 0x40c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3300cc8, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit__StartGameAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "_currentInitialization_5__2", ty: "::BGLib::AppFlow::Initialization::InitializationTime*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AppInit__StartGameAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                         ::BGLib::AppFlow::Initialization::InitializationTime* _currentInitialization_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21515 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInit> __4__this;

  /// @brief Field <currentInitialization>5__2, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::InitializationTime* _currentInitialization_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__8, _currentInitialization_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit__StartGameAsync_d__8, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AppInit__StartGameAsync_d__8) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies Zenject.MonoInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: AppInit
class CORDL_TYPE AppInit : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using _Awake_d__7 = ::GlobalNamespace::AppInit__Awake_d__7;

  using _InitializeAsync_d__10 = ::GlobalNamespace::AppInit__InitializeAsync_d__10;

  using _StartGameAsync_d__8 = ::GlobalNamespace::AppInit__StartGameAsync_d__8;

  using __c = ::GlobalNamespace::AppInit___c;

  /// @brief Field _asyncSceneContext, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncSceneContext, put = __cordl_internal_set__asyncSceneContext)) ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> _asyncSceneContext;

  /// @brief Field _cameraGO, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraGO, put = __cordl_internal_set__cameraGO)) ::UnityW<::UnityEngine::GameObject> _cameraGO;

  /// @brief Field _gameScenesManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  __declspec(property(get = get_asyncSceneContext)) ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> asyncSceneContext;

  __declspec(property(get = get_gameScenesManager)) ::UnityW<::GlobalNamespace::GameScenesManager> gameScenesManager;

  /// @brief Method Awake, addr 0x32ff740, size 0xa4, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleBeforeDismissingScenes, addr 0x32ffae0, size 0xa0, virtual false, abstract: false, final false
  inline void HandleBeforeDismissingScenes(::System::Collections::Generic::IReadOnlyList_1<::StringW>* scenes);

  /// @brief Method InitializeAsync, addr 0x32ff898, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync(::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::AppInit* New_ctor();

  /// @brief Method OnDestroy, addr 0x32ff948, size 0xd8, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method PreInitializeAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreInitializeAsync(::Zenject::DiContainer* container);

  /// @brief Method RepeatableSetupAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method StartGameAsync, addr 0x32ff7e4, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* StartGameAsync();

  /// @brief Method TransitionToNextSceneAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* TransitionToNextSceneAsync();

  /// @brief Method <InitializeAsync>b__10_0, addr 0x32ffb84, size 0x20, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__10_0();

  constexpr ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> const& __cordl_internal_get__asyncSceneContext() const;

  constexpr ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>& __cordl_internal_get__asyncSceneContext();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraGO() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraGO();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr void __cordl_internal_set__asyncSceneContext(::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> value);

  constexpr void __cordl_internal_set__cameraGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  /// @brief Method .ctor, addr 0x32ffb80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_asyncSceneContext, addr 0x32ff730, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> get_asyncSceneContext();

  /// @brief Method get_gameScenesManager, addr 0x32ff738, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::GameScenesManager> get_gameScenesManager();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21516 };

  /// @brief Field _cameraGO, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____cameraGO;

  /// @brief Field _asyncSceneContext, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> ____asyncSceneContext;

  /// @brief Field _gameScenesManager, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AppInit, ____cameraGO) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____asyncSceneContext) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____gameScenesManager) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AppInit) == 0x40, "Size mismatch!");

} // namespace GlobalNamespace
