#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncSceneContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncSceneContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
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
struct __AsyncSceneContext__State;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___LoadInstallersAsync_d__8;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___RunAsync_d__5;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___Run_d__4;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncSceneContext____c__DisplayClass8_0;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
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
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext__State;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncSceneContext____c__DisplayClass8_0;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___LoadInstallersAsync_d__8;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___RunAsync_d__5;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___Run_d__4;
}
// Write type traits
MARK_VAL_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext__State);
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::AsyncSceneContext);
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0);
MARK_VAL_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8);
MARK_VAL_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5);
MARK_VAL_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: ::AsyncSceneContext::State
struct CORDL_TYPE __AsyncSceneContext__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____AsyncSceneContext__State_Unwrapped
  enum struct ____AsyncSceneContext__State_Unwrapped : int32_t {
    __E_NotInitialized = static_cast<int32_t>(0x0),
    __E_Initializing = static_cast<int32_t>(0x1),
    __E_Initialized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____AsyncSceneContext__State_Unwrapped() const noexcept {
    return static_cast<____AsyncSceneContext__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AsyncSceneContext__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Initialized value: static_cast<int32_t>(0x2)
  static ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const Initialized;

  /// @brief Field Initializing value: static_cast<int32_t>(0x1)
  static ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const Initializing;

  /// @brief Field NotInitialized value: static_cast<int32_t>(0x0)
  static ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const NotInitialized;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext__State, value__) == 0x0, "Offset mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<Run>d__4
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: ::AsyncSceneContext::<Run>d__4
struct CORDL_TYPE __AsyncSceneContext___Run_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x107202c, size 0x178, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x10721a4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext___Run_d__4();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncSceneContext___Run_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                           ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4, __u__1) == 0x30, "Offset mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<RunAsync>d__5
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: ::AsyncSceneContext::<RunAsync>d__5
struct CORDL_TYPE __AsyncSceneContext___RunAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x10721b0, size 0x380, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1072530, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext___RunAsync_d__5();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "",
  // def_value: None }]
  constexpr __AsyncSceneContext___RunAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5, __u__1) == 0x28, "Offset mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: ::AsyncSceneContext::<>c__DisplayClass8_0*
class CORDL_TYPE __AsyncSceneContext____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field container, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container))::Zenject::DiContainer* container;

  /// @brief Field registry, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_registry, put = __cordl_internal_set_registry))::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* registry;

  static inline ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0* New_ctor();

  /// @brief Method <LoadInstallersAsync>b__0, addr 0x1072544, size 0x28, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* _LoadInstallersAsync_b__0(::BGLib::AppFlow::Initialization::AsyncInstaller* r);

  constexpr ::Zenject::DiContainer*& __cordl_internal_get_container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __cordl_internal_get_container() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& __cordl_internal_get_registry();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const& __cordl_internal_get_registry() const;

  constexpr void __cordl_internal_set_container(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value);

  /// @brief Method .ctor, addr 0x107253c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__AsyncSceneContext____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncSceneContext____c__DisplayClass8_0(__AsyncSceneContext____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncSceneContext____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncSceneContext____c__DisplayClass8_0(__AsyncSceneContext____c__DisplayClass8_0 const&) = delete;

  /// @brief Field registry, offset: 0x10, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* ___registry;

  /// @brief Field container, offset: 0x18, size: 0x8, def value: None
  ::Zenject::DiContainer* ___container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0, ___registry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0, ___container) == 0x18, "Offset mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<LoadInstallersAsync>d__8
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: ::AsyncSceneContext::<LoadInstallersAsync>d__8
struct CORDL_TYPE __AsyncSceneContext___LoadInstallersAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x107256c, size 0x2d8, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x1072844, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext___LoadInstallersAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext>", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncSceneContext___LoadInstallersAsync_d__8(int32_t __1__state,
                                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder,
                                                           ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this,
                                                           ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0* __8__1,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncSceneContext> __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8, 0x38>, "Size mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8, __u__1) == 0x30, "Offset mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: BGLib.AppFlow.Initialization::AsyncSceneContext
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: ::BGLib.AppFlow.Initialization::AsyncSceneContext*
class CORDL_TYPE AsyncSceneContext : public ::Zenject::SceneContext {
public:
  // Declarations
  using State = ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State;

  using _LoadInstallersAsync_d__8 = ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8;

  using _RunAsync_d__5 = ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5;

  using _Run_d__4 = ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4;

  using __c__DisplayClass8_0 = ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0;

  /// @brief Field _asyncInstallers, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__asyncInstallers,
                      put = __cordl_internal_set__asyncInstallers))::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* _asyncInstallers;

  /// @brief Field _registry, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__registry, put = __cordl_internal_set__registry))::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* _registry;

  /// @brief Field _state, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::BGLib::AppFlow::Initialization::__AsyncSceneContext__State _state;

  /// @brief Method CreateContainerForLoading, addr 0x1071b08, size 0x9c, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* CreateContainerForLoading();

  /// @brief Method CreateRegistry, addr 0x1071ba4, size 0x84, virtual false, abstract: false, final false
  inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* CreateRegistry();

  /// @brief Method InstallInstallers, addr 0x1071d1c, size 0x300, virtual true, abstract: false, final false
  inline void InstallInstallers();

  /// @brief Method LoadInstallersAsync, addr 0x1071c28, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* LoadInstallersAsync();

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext* New_ctor();

  /// @brief Method Run, addr 0x1071a74, size 0x94, virtual true, abstract: false, final false
  inline void Run();

  /// @brief Method RunAsync, addr 0x106bc68, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* RunAsync();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>*& __cordl_internal_get__asyncInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>*> const&
  __cordl_internal_get__asyncInstallers() const;

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& __cordl_internal_get__registry();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const& __cordl_internal_get__registry() const;

  constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const& __cordl_internal_get__state() const;

  constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State& __cordl_internal_get__state();

  constexpr void __cordl_internal_set__asyncInstallers(::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* value);

  constexpr void __cordl_internal_set__registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value);

  constexpr void __cordl_internal_set__state(::BGLib::AppFlow::Initialization::__AsyncSceneContext__State value);

  /// @brief Method <>n__0, addr 0x1072024, size 0x8, virtual false, abstract: false, final false
  inline void __n__0();

  /// @brief Method .ctor, addr 0x107201c, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _asyncInstallers, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>>* ____asyncInstallers;

  /// @brief Field _state, offset: 0xc0, size: 0x4, def value: None
  ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State ____state;

  /// @brief Field _registry, offset: 0xc8, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* ____registry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext, 0xd0>, "Size mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____asyncInstallers) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____state) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncSceneContext, ____registry) == 0xc8, "Offset mismatch!");

} // namespace BGLib::AppFlow::Initialization
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext__State, "BGLib.AppFlow.Initialization", "AsyncSceneContext/State");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncSceneContext);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext*, "BGLib.AppFlow.Initialization", "AsyncSceneContext");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass8_0*, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__8, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<LoadInstallersAsync>d__8");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<RunAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<Run>d__4");
