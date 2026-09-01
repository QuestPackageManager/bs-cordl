#pragma once
// IWYU pragma private; include "BGLib\AppFlow\Initialization\AsyncSceneContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncSceneContext)
namespace BGLib::AppFlow::Initialization {
class AsyncInstallerRegistry;
}
namespace BGLib::AppFlow::Initialization {
class AsyncLoader;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext_State;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__LoadInstallersAsync_d__15;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__RunAsync_d__14;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext___c;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext___c__DisplayClass15_0;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext___c__DisplayClass15_1;
}
namespace BGLib::AppFlow::Initialization {
class ConcurrentAsyncLoaders;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext_State;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext___c;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext___c__DisplayClass15_0;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext___c__DisplayClass15_1;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__LoadInstallersAsync_d__15;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__RunAsync_d__14;
}
// Write type traits
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncSceneContext_State);
MARK_REF_T(::BGLib::AppFlow::Initialization::AsyncSceneContext*);
MARK_REF_T(::BGLib::AppFlow::Initialization::AsyncSceneContext___c*);
MARK_REF_T(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*);
MARK_REF_T(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1*);
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15);
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncSceneContext_State, "BGLib.AppFlow.Initialization", "AsyncSceneContext/State");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncSceneContext*, "BGLib.AppFlow.Initialization", "AsyncSceneContext");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncSceneContext___c*, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<>c");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<>c__DisplayClass15_0");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1*, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<>c__DisplayClass15_1");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<LoadInstallersAsync>d__15");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<RunAsync>d__14");
// Dependencies
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/State
struct CORDL_TYPE AsyncSceneContext_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AsyncSceneContext_State_Unwrapped
  enum struct __AsyncSceneContext_State_Unwrapped : int32_t {
    __E_NotInitialized = static_cast<int32_t>(0x0),
    __E_Initializing = static_cast<int32_t>(0x1),
    __E_Initialized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AsyncSceneContext_State_Unwrapped() const noexcept {
    return static_cast<__AsyncSceneContext_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AsyncSceneContext_State(int32_t value__) noexcept;

  /// @brief Field Initialized value: I32(2)
  static ::BGLib::AppFlow::Initialization::AsyncSceneContext_State const Initialized;

  /// @brief Field Initializing value: I32(1)
  static ::BGLib::AppFlow::Initialization::AsyncSceneContext_State const Initializing;

  /// @brief Field NotInitialized value: I32(0)
  static ::BGLib::AppFlow::Initialization::AsyncSceneContext_State const NotInitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21553 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncSceneContext_State) == 0x4, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<>c
class CORDL_TYPE AsyncSceneContext___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* __9;

  /// @brief Field <>9__15_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__15_2,
                      put = setStaticF___9__15_2)) ::System::Func_2<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>,
                                                                    ::System::Threading::Tasks::Task*>* __9__15_2;

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* New_ctor();

  /// @brief Method <LoadInstallersAsync>b__15_2, addr 0x3308e6c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task*
  _LoadInstallersAsync_b__15_2(::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*> loadingRequest);

  /// @brief Method .ctor, addr 0x3308e68, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* getStaticF___9();

  static inline ::System::Func_2<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>, ::System::Threading::Tasks::Task*>*
  getStaticF___9__15_2();

  static inline void setStaticF___9(::BGLib::AppFlow::Initialization::AsyncSceneContext___c* value);

  static inline void
  setStaticF___9__15_2(::System::Func_2<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>, ::System::Threading::Tasks::Task*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncSceneContext___c(AsyncSceneContext___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncSceneContext___c(AsyncSceneContext___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21554 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c) == 0x10, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<>c__DisplayClass15_0
class CORDL_TYPE AsyncSceneContext___c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0,
                      put = __cordl_internal_set___9__0)) ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>,
                                                                           ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>* __9__0;

  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  /// @brief Field registry, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_registry, put = __cordl_internal_set_registry)) ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* registry;

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0* New_ctor();

  /// @brief Method <LoadInstallersAsync>b__0, addr 0x3308e78, size 0x68, virtual false, abstract: false, final false
  inline ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>
  _LoadInstallersAsync_b__0(::BGLib::AppFlow::Initialization::AsyncLoader* asyncLoader);

  constexpr ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>,
                             ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>* const&
  __cordl_internal_get___9__0() const;

  constexpr ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>,
                             ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>*&
  __cordl_internal_get___9__0();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* const& __cordl_internal_get_registry() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& __cordl_internal_get_registry();

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>,
                                                              ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>* value);

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value);

  /// @brief Method .ctor, addr 0x3308e74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext___c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext___c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncSceneContext___c__DisplayClass15_0(AsyncSceneContext___c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext___c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncSceneContext___c__DisplayClass15_0(AsyncSceneContext___c__DisplayClass15_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21555 };

  /// @brief Field registry, offset: 0x10, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* ___registry;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  /// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>*
      _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0, ___registry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0, ___container) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0) == 0x28, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies BGLib.AppFlow.Initialization.AsyncLoader::SynchronizationStep, System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<>c__DisplayClass15_1
class CORDL_TYPE AsyncSceneContext___c__DisplayClass15_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field syncStep, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_syncStep, put = __cordl_internal_set_syncStep)) ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep syncStep;

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1* New_ctor();

  /// @brief Method <LoadInstallersAsync>b__1, addr 0x3308ee4, size 0x38, virtual false, abstract: false, final false
  inline bool _LoadInstallersAsync_b__1(::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*> loadingRequest);

  constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep const& __cordl_internal_get_syncStep() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep& __cordl_internal_get_syncStep();

  constexpr void __cordl_internal_set_syncStep(::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep value);

  /// @brief Method .ctor, addr 0x3308ee0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext___c__DisplayClass15_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext___c__DisplayClass15_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncSceneContext___c__DisplayClass15_1(AsyncSceneContext___c__DisplayClass15_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext___c__DisplayClass15_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncSceneContext___c__DisplayClass15_1(AsyncSceneContext___c__DisplayClass15_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21556 };

  /// @brief Field syncStep, offset: 0x10, size: 0x4, def value: None
  ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep ___syncStep;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1, ___syncStep) == 0x10, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1) == 0x18, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<LoadInstallersAsync>d__15
struct CORDL_TYPE AsyncSceneContext__LoadInstallersAsync_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3308f1c, size 0xa80, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x330999c, size 0x80, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext__LoadInstallersAsync_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0*", modifiers: "", def_value: None }, CppParam { name: "_loadersStopwatch_5__2", ty: "::System::Diagnostics::Stopwatch*",
  // modifiers: "", def_value: None }, CppParam { name: "_queue_5__3", ty: "::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>*", modifiers: "",
  // def_value: None }, CppParam { name: "_loadingRequests_5__4", ty:
  // "::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>,::System::Threading::Tasks::Task*>>*", modifiers: "", def_value: None },
  // CppParam { name: "_count_5__5", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_loadersEndStepIndex_5__6", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_i_5__7", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AsyncSceneContext__LoadInstallersAsync_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder,
      ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this, ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0* __8__1,
      ::System::Diagnostics::Stopwatch* _loadersStopwatch_5__2, ::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* _queue_5__3,
      ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>* _loadingRequests_5__4,
      int32_t _count_5__5, int32_t _loadersEndStepIndex_5__6, int32_t _i_5__7, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21557 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0* __8__1;

  /// @brief Field <loadersStopwatch>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Diagnostics::Stopwatch* _loadersStopwatch_5__2;

  /// @brief Field <queue>5__3, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::BGLib::AppFlow::Initialization::ConcurrentAsyncLoaders*>* _queue_5__3;

  /// @brief Field <loadingRequests>5__4, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncLoader>, ::System::Threading::Tasks::Task*>>* _loadingRequests_5__4;

  /// @brief Field <count>5__5, offset: 0x48, size: 0x4, def value: None
  int32_t _count_5__5;

  /// @brief Field <loadersEndStepIndex>5__6, offset: 0x4c, size: 0x4, def value: None
  int32_t _loadersEndStepIndex_5__6;

  /// @brief Field <i>5__7, offset: 0x50, size: 0x4, def value: None
  int32_t _i_5__7;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, _loadersStopwatch_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, _queue_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, _loadingRequests_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, _count_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, _loadersEndStepIndex_5__6) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, _i_5__7) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15) == 0x60, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<RunAsync>d__14
struct CORDL_TYPE AsyncSceneContext__RunAsync_d__14 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3309a1c, size 0x3d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3309df4, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext__RunAsync_d__14();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "",
  // def_value: None }]
  constexpr AsyncSceneContext__RunAsync_d__14(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                              ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
                                              ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21558 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14) == 0x30, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies BGLib.AppFlow.Initialization.AsyncSceneContext::State, Zenject.SceneContext
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext
class CORDL_TYPE AsyncSceneContext : public ::Zenject::SceneContext {
public:
  // Declarations
  using State = ::BGLib::AppFlow::Initialization::AsyncSceneContext_State;

  using _LoadInstallersAsync_d__15 = ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__15;

  using _RunAsync_d__14 = ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__14;

  using __c = ::BGLib::AppFlow::Initialization::AsyncSceneContext___c;

  using __c__DisplayClass15_0 = ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_0;

  using __c__DisplayClass15_1 = ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass15_1;

  /// @brief Field _containerForLoading, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__containerForLoading, put = __cordl_internal_set__containerForLoading)) ::Zenject::DiContainer* _containerForLoading;

  /// @brief Field _registry, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__registry, put = __cordl_internal_set__registry)) ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* _registry;

  /// @brief Field _state, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::BGLib::AppFlow::Initialization::AsyncSceneContext_State _state;

  /// @brief Field <telemetryInstallersDurationMS>k__BackingField, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get__telemetryInstallersDurationMS_k__BackingField,
                      put = __cordl_internal_set__telemetryInstallersDurationMS_k__BackingField)) int32_t _telemetryInstallersDurationMS_k__BackingField;

  /// @brief Field <telemetryLoadersDurationMS>k__BackingField, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__telemetryLoadersDurationMS_k__BackingField,
                      put = __cordl_internal_set__telemetryLoadersDurationMS_k__BackingField)) int32_t _telemetryLoadersDurationMS_k__BackingField;

  __declspec(property(get = get_telemetryInstallersDurationMS, put = set_telemetryInstallersDurationMS)) int32_t telemetryInstallersDurationMS;

  __declspec(property(get = get_telemetryLoadersDurationMS, put = set_telemetryLoadersDurationMS)) int32_t telemetryLoadersDurationMS;

  /// @brief Method GetOrCreateContainerForLoading, addr 0x3300a58, size 0xac, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* GetOrCreateContainerForLoading();

  /// @brief Method InstallInstallers, addr 0x3308c40, size 0x1c4, virtual true, abstract: false, final false
  inline void InstallInstallers();

  /// @brief Method LoadInstallersAsync, addr 0x3308b60, size 0xe0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* LoadInstallersAsync();

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext* New_ctor();

  /// @brief Method Run, addr 0x3308ae0, size 0x80, virtual true, abstract: false, final false
  inline void Run();

  /// @brief Method RunAsync, addr 0x3300b60, size 0xb0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RunAsync();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__containerForLoading() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__containerForLoading();

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* const& __cordl_internal_get__registry() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& __cordl_internal_get__registry();

  constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State const& __cordl_internal_get__state() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State& __cordl_internal_get__state();

  constexpr int32_t const& __cordl_internal_get__telemetryInstallersDurationMS_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__telemetryInstallersDurationMS_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__telemetryLoadersDurationMS_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__telemetryLoadersDurationMS_k__BackingField();

  constexpr void __cordl_internal_set__containerForLoading(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value);

  constexpr void __cordl_internal_set__state(::BGLib::AppFlow::Initialization::AsyncSceneContext_State value);

  constexpr void __cordl_internal_set__telemetryInstallersDurationMS_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__telemetryLoadersDurationMS_k__BackingField(int32_t value);

  /// @brief Method <>n__0, addr 0x3308e0c, size 0x8, virtual false, abstract: false, final false
  inline void __n__0();

  /// @brief Method .ctor, addr 0x3308e04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_telemetryInstallersDurationMS, addr 0x3308ad0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_telemetryInstallersDurationMS();

  /// @brief Method get_telemetryLoadersDurationMS, addr 0x3308ac0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_telemetryLoadersDurationMS();

  /// @brief Method set_telemetryInstallersDurationMS, addr 0x3308ad8, size 0x8, virtual false, abstract: false, final false
  inline void set_telemetryInstallersDurationMS(int32_t value);

  /// @brief Method set_telemetryLoadersDurationMS, addr 0x3308ac8, size 0x8, virtual false, abstract: false, final false
  inline void set_telemetryLoadersDurationMS(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncSceneContext(AsyncSceneContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncSceneContext(AsyncSceneContext const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21559 };

  /// @brief Field _state, offset: 0xbc, size: 0x4, def value: None
  ::BGLib::AppFlow::Initialization::AsyncSceneContext_State ____state;

  /// @brief Field _registry, offset: 0xc0, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* ____registry;

  /// @brief Field _containerForLoading, offset: 0xc8, size: 0x8, def value: None
  ::Zenject::DiContainer* ____containerForLoading;

  /// @brief Field <telemetryLoadersDurationMS>k__BackingField, offset: 0xd0, size: 0x4, def value: None
  int32_t ____telemetryLoadersDurationMS_k__BackingField;

  /// @brief Field <telemetryInstallersDurationMS>k__BackingField, offset: 0xd4, size: 0x4, def value: None
  int32_t ____telemetryInstallersDurationMS_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____state) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____registry) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____containerForLoading) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____telemetryLoadersDurationMS_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____telemetryInstallersDurationMS_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncSceneContext) == 0xd8, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
