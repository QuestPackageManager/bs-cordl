#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AppInit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppInit)
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext;
}
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class __AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData;
}
namespace GlobalNamespace {
struct __AppInit__AppStartType;
}
namespace GlobalNamespace {
struct __AppInit___Awake_d__10;
}
namespace GlobalNamespace {
struct __AppInit___InitializeAsync_d__13;
}
namespace GlobalNamespace {
struct __AppInit___StartGameAsync_d__11;
}
namespace GlobalNamespace {
class __AppInit____c;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
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
struct __AppInit__AppStartType;
}
namespace GlobalNamespace {
class AppInit;
}
namespace GlobalNamespace {
class __AppInit____c;
}
namespace GlobalNamespace {
struct __AppInit___Awake_d__10;
}
namespace GlobalNamespace {
struct __AppInit___InitializeAsync_d__13;
}
namespace GlobalNamespace {
struct __AppInit___StartGameAsync_d__11;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__AppInit__AppStartType);
MARK_REF_PTR_T(::GlobalNamespace::AppInit);
MARK_REF_PTR_T(::GlobalNamespace::__AppInit____c);
MARK_VAL_T(::GlobalNamespace::__AppInit___Awake_d__10);
MARK_VAL_T(::GlobalNamespace::__AppInit___InitializeAsync_d__13);
MARK_VAL_T(::GlobalNamespace::__AppInit___StartGameAsync_d__11);
// Type: ::AppStartType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15434))
// CS Name: ::AppInit::AppStartType
struct CORDL_TYPE __AppInit__AppStartType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AppInit__AppStartType_Unwrapped
  enum struct ____AppInit__AppStartType_Unwrapped : int32_t {
    __E_AppStart = static_cast<int32_t>(0x0),
    __E_AppRestart = static_cast<int32_t>(0x1),
    __E_MultiSceneEditor = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AppInit__AppStartType_Unwrapped() const noexcept {
    return static_cast<____AppInit__AppStartType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AppInit__AppStartType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit__AppStartType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AppStart value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__AppInit__AppStartType const AppStart;

  /// @brief Field AppRestart value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__AppInit__AppStartType const AppRestart;

  /// @brief Field MultiSceneEditor value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__AppInit__AppStartType const MultiSceneEditor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit__AppStartType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit__AppStartType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Awake>d__10
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3396))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15435))
// CS Name: ::AppInit::<Awake>d__10
struct CORDL_TYPE __AppInit___Awake_d__10 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe3f618, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe3f840, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AppInit___Awake_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit___Awake_d__10();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInit> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___Awake_d__10, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___Awake_d__10, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___Awake_d__10, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___Awake_d__10, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___Awake_d__10, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<StartGameAsync>d__11
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3397))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15436))
// CS Name: ::AppInit::<StartGameAsync>d__11
struct CORDL_TYPE __AppInit___StartGameAsync_d__11 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe3f84c, size 0x2d4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe3fbe8, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AppInit___StartGameAsync_d__11(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                             ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit___StartGameAsync_d__11();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInit> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___StartGameAsync_d__11, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartGameAsync_d__11, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartGameAsync_d__11, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartGameAsync_d__11, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___StartGameAsync_d__11, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15437))
// CS Name: ::AppInit::<>c*
class CORDL_TYPE __AppInit____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__AppInit____c* __9;

  /// @brief Field <>9__13_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__13_1, put = setStaticF___9__13_1))::System::Func_1<bool>* __9__13_1;

  static inline void setStaticF___9(::GlobalNamespace::__AppInit____c* value);

  static inline ::GlobalNamespace::__AppInit____c* getStaticF___9();

  static inline void setStaticF___9__13_1(::System::Func_1<bool>* value);

  static inline ::System::Func_1<bool>* getStaticF___9__13_1();

  static inline ::GlobalNamespace::__AppInit____c* New_ctor();

  /// @brief Method .ctor, addr 0xe3fc58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitializeAsync>b__13_1, addr 0xe3fc60, size 0x8, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__13_1();

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AppInit____c(__AppInit____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AppInit____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AppInit____c(__AppInit____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeAsync>d__13
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3389)), TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(15434))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15438))
// CS Name: ::AppInit::<InitializeAsync>d__13
struct CORDL_TYPE __AppInit___InitializeAsync_d__13 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0xe3fc68, size 0x52c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0xe40288, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::AppInit>", modifiers: "",
  // def_value: None }, CppParam { name: "_startType_5__2", ty: "::GlobalNamespace::__AppInit__AppStartType", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AppInit___InitializeAsync_d__13(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::AppInit> __4__this,
                                              ::GlobalNamespace::__AppInit__AppStartType _startType_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AppInit___InitializeAsync_d__13();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AppInit> __4__this;

  /// @brief Field <startType>5__2, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__AppInit__AppStartType _startType_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AppInit___InitializeAsync_d__13, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, _startType_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AppInit___InitializeAsync_d__13, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AppInit
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10280))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15439))
// CS Name: ::AppInit*
class CORDL_TYPE AppInit : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using _InitializeAsync_d__13 = ::GlobalNamespace::__AppInit___InitializeAsync_d__13;

  using __c = ::GlobalNamespace::__AppInit____c;

  using _StartGameAsync_d__11 = ::GlobalNamespace::__AppInit___StartGameAsync_d__11;

  using _Awake_d__10 = ::GlobalNamespace::__AppInit___Awake_d__10;

  using AppStartType = ::GlobalNamespace::__AppInit__AppStartType;

  /// @brief Field _cameraGO, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cameraGO, put = __cordl_internal_set__cameraGO))::UnityW<::UnityEngine::GameObject> _cameraGO;

  /// @brief Field _asyncSceneContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncSceneContext, put = __cordl_internal_set__asyncSceneContext))::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> _asyncSceneContext;

  /// @brief Field sceneSetupData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneSetupData,
                      put = __cordl_internal_set_sceneSetupData))::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* sceneSetupData;

  /// @brief Field _setupData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__setupData, put = __cordl_internal_set__setupData))::GlobalNamespace::AppInitSetupData* _setupData;

  /// @brief Field _gameScenesManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__gameScenesManager, put = __cordl_internal_set__gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> _gameScenesManager;

  __declspec(property(get = get_gameScenesManager))::UnityW<::GlobalNamespace::GameScenesManager> gameScenesManager;

  __declspec(property(get = get_isTestContext)) bool isTestContext;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__cameraGO();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__cameraGO() const;

  constexpr void __cordl_internal_set__cameraGO(::UnityW<::UnityEngine::GameObject> value);

  constexpr ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>& __cordl_internal_get__asyncSceneContext();

  constexpr ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> const& __cordl_internal_get__asyncSceneContext() const;

  constexpr void __cordl_internal_set__asyncSceneContext(::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> value);

  constexpr ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*& __cordl_internal_get_sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData*> const& __cordl_internal_get_sceneSetupData() const;

  constexpr void __cordl_internal_set_sceneSetupData(::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* value);

  constexpr ::GlobalNamespace::AppInitSetupData*& __cordl_internal_get__setupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> const& __cordl_internal_get__setupData() const;

  constexpr void __cordl_internal_set__setupData(::GlobalNamespace::AppInitSetupData* value);

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& __cordl_internal_get__gameScenesManager();

  constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& __cordl_internal_get__gameScenesManager() const;

  constexpr void __cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value);

  /// @brief Method get_gameScenesManager, addr 0xe3efe8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::GameScenesManager> get_gameScenesManager();

  /// @brief Method get_isTestContext, addr 0xe3eff0, size 0x20, virtual false, abstract: false, final false
  inline bool get_isTestContext();

  /// @brief Method Awake, addr 0xe3f010, size 0x94, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method StartGameAsync, addr 0xe3f0a4, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* StartGameAsync();

  /// @brief Method PreloadAsync, addr 0xe3f16c, size 0x88, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* PreloadAsync();

  /// @brief Method InitializeAsync, addr 0xe3f1f4, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  /// @brief Method OnDestroy, addr 0xe3f2c0, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method HandleBeforeDismissingScenes, addr 0xe3f42c, size 0x9c, virtual false, abstract: false, final false
  inline void HandleBeforeDismissingScenes();

  /// @brief Method GetAppStartType, addr 0xe3f4c8, size 0x94, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__AppInit__AppStartType GetAppStartType();

  /// @brief Method InstallBindings, addr 0xe3f55c, size 0x4, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AppStartAndMultiSceneEditorSetup();

  /// @brief Method RepeatableSetupAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* RepeatableSetupAsync();

  /// @brief Method TransitionToNextScene, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void TransitionToNextScene();

  static inline ::GlobalNamespace::AppInit* New_ctor();

  /// @brief Method .ctor, addr 0xe3f560, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InitializeAsync>b__13_0, addr 0xe3f5f4, size 0x24, virtual false, abstract: false, final false
  inline bool _InitializeAsync_b__13_0();

  // Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AppInit(AppInit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AppInit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AppInit(AppInit const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AppInit();

public:
  /// @brief Field _cameraGO, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____cameraGO;

  /// @brief Field _asyncSceneContext, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> ____asyncSceneContext;

  /// @brief Field sceneSetupData, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__AppInitScenesTransitionSetupDataSO__AppInitSceneSetupData* ___sceneSetupData;

  /// @brief Field _setupData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::AppInitSetupData* ____setupData;

  /// @brief Field _gameScenesManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GameScenesManager> ____gameScenesManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AppInit, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____cameraGO) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____asyncSceneContext) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ___sceneSetupData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____setupData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AppInit, ____gameScenesManager) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit__AppStartType, "", "AppInit/AppStartType");
NEED_NO_BOX(::GlobalNamespace::AppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AppInit*, "", "AppInit");
NEED_NO_BOX(::GlobalNamespace::__AppInit____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit____c*, "", "AppInit/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___Awake_d__10, "", "AppInit/<Awake>d__10");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___InitializeAsync_d__13, "", "AppInit/<InitializeAsync>d__13");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AppInit___StartGameAsync_d__11, "", "AppInit/<StartGameAsync>d__11");
