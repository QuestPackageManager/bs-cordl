#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncSceneContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
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
class AsyncInstaller;
}
namespace BGLib::AppFlow::Initialization {
class AsyncPreloader;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext_State;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__LoadInstallersAsync_d__9;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__RunAsync_d__6;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__Run_d__5;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext___c;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext___c__DisplayClass9_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
class AsyncSceneContext___c__DisplayClass9_0;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__LoadInstallersAsync_d__9;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__RunAsync_d__6;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncSceneContext__Run_d__5;
}
// Write type traits
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncSceneContext_State);
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::AsyncSceneContext);
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::AsyncSceneContext___c);
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0);
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9);
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__6);
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__5);
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17645 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext_State, 0x4>, "Size mismatch!");

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

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* __9__9_0;

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* New_ctor();

  /// @brief Method <LoadInstallersAsync>b__9_0, addr 0x229b7bc, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _LoadInstallersAsync_b__9_0(::BGLib::AppFlow::Initialization::AsyncPreloader* r);

  /// @brief Method .ctor, addr 0x229b7b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* getStaticF___9__9_0();

  static inline void setStaticF___9(::BGLib::AppFlow::Initialization::AsyncSceneContext___c* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>, ::System::Threading::Tasks::Task*>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext___c, 0x10>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Object
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<>c__DisplayClass9_0
class CORDL_TYPE AsyncSceneContext___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::Zenject::DiContainer* container;

  /// @brief Field registry, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_registry, put = __cordl_internal_set_registry)) ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* registry;

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0* New_ctor();

  /// @brief Method <LoadInstallersAsync>b__1, addr 0x229b7e8, size 0x28, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _LoadInstallersAsync_b__1(::BGLib::AppFlow::Initialization::AsyncInstaller* r);

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get_container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* const& __cordl_internal_get_registry() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& __cordl_internal_get_registry();

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value);

  /// @brief Method .ctor, addr 0x229b7e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncSceneContext___c__DisplayClass9_0(AsyncSceneContext___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncSceneContext___c__DisplayClass9_0(AsyncSceneContext___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17647 };

  /// @brief Field registry, offset: 0x10, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* ___registry;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0, ___registry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0, ___container) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0, 0x20>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<LoadInstallersAsync>d__9
struct CORDL_TYPE AsyncSceneContext__LoadInstallersAsync_d__9 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x229b810, size 0x4dc, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x229bcec, size 0x7c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext__LoadInstallersAsync_d__9();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
  // modifiers: "", def_value: None }]
  constexpr AsyncSceneContext__LoadInstallersAsync_d__9(int32_t __1__state,
                                                        ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder,
                                                        ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
                                                        ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0* __8__1,
                                                        ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17648 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9, 0x38>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<Run>d__5
struct CORDL_TYPE AsyncSceneContext__Run_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x229bd68, size 0x178, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x229bee0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext__Run_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AsyncSceneContext__Run_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                        ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17649 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__5, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__5, __u__1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__5, 0x38>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext/<RunAsync>d__6
struct CORDL_TYPE AsyncSceneContext__RunAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x229beec, size 0x3c4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x229c2b0, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext__RunAsync_d__6();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "",
  // def_value: None }]
  constexpr AsyncSceneContext__RunAsync_d__6(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                             ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
                                             ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17650 };

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
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__6, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__6, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__6, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__6, __u__1) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__6, 0x30>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies BGLib.AppFlow.Initialization.AsyncSceneContext::State, Zenject.SceneContext
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncSceneContext
class CORDL_TYPE AsyncSceneContext : public ::Zenject::SceneContext {
public:
  // Declarations
  using State = ::BGLib::AppFlow::Initialization::AsyncSceneContext_State;

  using _LoadInstallersAsync_d__9 = ::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9;

  using _RunAsync_d__6 = ::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__6;

  using _Run_d__5 = ::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__5;

  using __c = ::BGLib::AppFlow::Initialization::AsyncSceneContext___c;

  using __c__DisplayClass9_0 = ::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0;

  /// @brief Field _asyncInstallers, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncInstallers,
                      put = __cordl_internal_set__asyncInstallers)) ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* _asyncInstallers;

  /// @brief Field _asyncPreloaders, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncPreloaders,
                      put = __cordl_internal_set__asyncPreloaders)) ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>* _asyncPreloaders;

  /// @brief Field _registry, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__registry, put = __cordl_internal_set__registry)) ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* _registry;

  /// @brief Field _state, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::BGLib::AppFlow::Initialization::AsyncSceneContext_State _state;

  /// @brief Method CreateContainerForLoading, addr 0x229b274, size 0x94, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* CreateContainerForLoading();

  /// @brief Method CreateRegistry, addr 0x229b308, size 0x84, virtual false, abstract: false, final false
  inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* CreateRegistry();

  /// @brief Method InstallInstallers, addr 0x229b474, size 0x2d4, virtual true, abstract: false, final false
  inline void InstallInstallers();

  /// @brief Method LoadInstallersAsync, addr 0x229b38c, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* LoadInstallersAsync();

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext* New_ctor();

  /// @brief Method Run, addr 0x229b1e4, size 0x90, virtual true, abstract: false, final false
  inline void Run();

  /// @brief Method RunAsync, addr 0x22945e4, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RunAsync();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* const& __cordl_internal_get__asyncInstallers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>*& __cordl_internal_get__asyncInstallers();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>* const& __cordl_internal_get__asyncPreloaders() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>*& __cordl_internal_get__asyncPreloaders();

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* const& __cordl_internal_get__registry() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& __cordl_internal_get__registry();

  constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State const& __cordl_internal_get__state() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncSceneContext_State& __cordl_internal_get__state();

  constexpr void __cordl_internal_set__asyncInstallers(::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* value);

  constexpr void __cordl_internal_set__asyncPreloaders(::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>* value);

  constexpr void __cordl_internal_set__registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value);

  constexpr void __cordl_internal_set__state(::BGLib::AppFlow::Initialization::AsyncSceneContext_State value);

  /// @brief Method <>n__0, addr 0x229b750, size 0x8, virtual false, abstract: false, final false
  inline void __n__0();

  /// @brief Method .ctor, addr 0x229b748, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17651 };

  /// @brief Field _asyncPreloaders, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncPreloader>>* ____asyncPreloaders;

  /// @brief Field _asyncInstallers, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* ____asyncInstallers;

  /// @brief Field _state, offset: 0xd0, size: 0x4, def value: None
  ::BGLib::AppFlow::Initialization::AsyncSceneContext_State ____state;

  /// @brief Field _registry, offset: 0xd8, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* ____registry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____asyncPreloaders) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____asyncInstallers) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____state) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____registry) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext, 0xe0>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext_State, "BGLib.AppFlow.Initialization", "AsyncSceneContext/State");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncSceneContext);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext*, "BGLib.AppFlow.Initialization", "AsyncSceneContext");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncSceneContext___c);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext___c*, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<>c");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext___c__DisplayClass9_0*, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<>c__DisplayClass9_0");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext__LoadInstallersAsync_d__9, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<LoadInstallersAsync>d__9");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext__RunAsync_d__6, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<RunAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext__Run_d__5, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<Run>d__5");
