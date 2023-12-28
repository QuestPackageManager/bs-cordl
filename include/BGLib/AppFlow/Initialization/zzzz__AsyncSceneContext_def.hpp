#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_def.hpp"
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
struct __AsyncSceneContext___Run_d__4;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace BGLib::AppFlow::Initialization {
class AsyncInstallerRegistry;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncSceneContext____c__DisplayClass6_0;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___LoadInstallersAsync_d__6;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___RunAsync_d__5;
}
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext__State;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext__State;
}
namespace BGLib::AppFlow::Initialization {
class AsyncSceneContext;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncSceneContext____c__DisplayClass6_0;
}
namespace BGLib::AppFlow::Initialization {
struct __AsyncSceneContext___LoadInstallersAsync_d__6;
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
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0);
MARK_VAL_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6);
MARK_VAL_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5);
MARK_VAL_T(::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15424))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __AsyncSceneContext__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NotInitialized value: static_cast<int32_t>(0x0)
  static ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const NotInitialized;

  /// @brief Field Initializing value: static_cast<int32_t>(0x1)
  static ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const Initializing;

  /// @brief Field Initialized value: static_cast<int32_t>(0x2)
  static ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const Initialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext__State, 0x4>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<Run>d__4
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3393)), TypeDefinitionIndex(TypeDefinitionIndex(3400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15425))
// CS Name: ::AsyncSceneContext::<Run>d__4
struct CORDL_TYPE __AsyncSceneContext___Run_d__4 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe242dc size 0x178 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe24454 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::AppFlow::Initialization::AsyncSceneContext*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncSceneContext___Run_d__4(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::BGLib::AppFlow::Initialization::AsyncSceneContext* __4__this,
                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext___Run_d__4();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncSceneContext* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4, 0x38>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<RunAsync>d__5
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3401)), TypeDefinitionIndex(TypeDefinitionIndex(3394)), TypeDefinitionIndex(TypeDefinitionIndex(15423)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3394), inst: 874 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15426)) CS Name: ::AsyncSceneContext::<RunAsync>d__5
struct CORDL_TYPE __AsyncSceneContext___RunAsync_d__5 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe24460 size 0x380 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe247e0 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::BGLib::AppFlow::Initialization::AsyncSceneContext*",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "",
  // def_value: None }]
  constexpr __AsyncSceneContext___RunAsync_d__5(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                ::BGLib::AppFlow::Initialization::AsyncSceneContext* __4__this,
                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext___RunAsync_d__5();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncSceneContext* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5, 0x30>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15427))
// CS Name: ::AsyncSceneContext::<>c__DisplayClass6_0*
class CORDL_TYPE __AsyncSceneContext____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field registry, offset 0x10, size 0x8
  __declspec(property(get = __get_registry, put = __set_registry))::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* registry;

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& __get_registry();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const& __get_registry() const;

  constexpr void __set_registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value);

  static inline ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0xe247ec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <LoadInstallersAsync>b__0 addr 0xe247f4 size 0x28 virtual false final false
  inline ::System::Threading::Tasks::Task* _LoadInstallersAsync_b__0(::BGLib::AppFlow::Initialization::AsyncInstaller* r);

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncSceneContext____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncSceneContext____c__DisplayClass6_0(__AsyncSceneContext____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncSceneContext____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncSceneContext____c__DisplayClass6_0(__AsyncSceneContext____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext____c__DisplayClass6_0();

public:
  /// @brief Field registry, offset: 0x10, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* ___registry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: ::<LoadInstallersAsync>d__6
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15423)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(3393)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 874 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(15428)) CS Name:
// ::AsyncSceneContext::<LoadInstallersAsync>d__6
struct CORDL_TYPE __AsyncSceneContext___LoadInstallersAsync_d__6 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0xe2481c size 0x334 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0xe24b50 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::BGLib::AppFlow::Initialization::AsyncSceneContext*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __AsyncSceneContext___LoadInstallersAsync_d__6(int32_t __1__state,
                                                           ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder,
                                                           ::BGLib::AppFlow::Initialization::AsyncSceneContext* __4__this,
                                                           ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0* __8__1,
                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AsyncSceneContext___LoadInstallersAsync_d__6();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncSceneContext* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6, 0x38>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Type: BGLib.AppFlow.Initialization::AsyncSceneContext
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11126)), TypeDefinitionIndex(TypeDefinitionIndex(15424))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15429))
// CS Name: ::BGLib.AppFlow.Initialization::AsyncSceneContext*
class CORDL_TYPE AsyncSceneContext : public ::Zenject::SceneContext {
public:
  // Declarations
  using _LoadInstallersAsync_d__6 = ::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6;

  using __c__DisplayClass6_0 = ::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0;

  using _RunAsync_d__5 = ::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5;

  using _Run_d__4 = ::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4;

  using State = ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State;

  /// @brief Field _asyncInstallers, offset 0xb8, size 0x8
  __declspec(property(get = __get__asyncInstallers, put = __set__asyncInstallers))::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>* _asyncInstallers;

  /// @brief Field _state, offset 0xc0, size 0x4
  __declspec(property(get = __get__state, put = __set__state))::BGLib::AppFlow::Initialization::__AsyncSceneContext__State _state;

  /// @brief Field _registry, offset 0xc8, size 0x8
  __declspec(property(get = __get__registry, put = __set__registry))::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* _registry;

  constexpr ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>*& __get__asyncInstallers();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>*> const& __get__asyncInstallers() const;

  constexpr void __set__asyncInstallers(::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>* value);

  constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State& __get__state();

  constexpr ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State const& __get__state() const;

  constexpr void __set__state(::BGLib::AppFlow::Initialization::__AsyncSceneContext__State value);

  constexpr ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*& __get__registry();

  constexpr ::cordl_internals::to_const_pointer<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*> const& __get__registry() const;

  constexpr void __set__registry(::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* value);

  /// @brief Method Run addr 0xe23e44 size 0x94 virtual true final false
  inline void Run();

  /// @brief Method RunAsync addr 0xe1e204 size 0xc8 virtual false final false
  inline ::System::Threading::Tasks::Task* RunAsync();

  /// @brief Method LoadInstallersAsync addr 0xe23ed8 size 0xf4 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>* LoadInstallersAsync();

  /// @brief Method InstallInstallers addr 0xe23fcc size 0x300 virtual true final false
  inline void InstallInstallers();

  static inline ::BGLib::AppFlow::Initialization::AsyncSceneContext* New_ctor();

  /// @brief Method .ctor addr 0xe242cc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <>n__0 addr 0xe242d4 size 0x8 virtual false final false
  inline void __n__0();

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncSceneContext(AsyncSceneContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncSceneContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncSceneContext(AsyncSceneContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncSceneContext();

public:
  /// @brief Field _asyncInstallers, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::BGLib::AppFlow::Initialization::AsyncInstaller*>* ____asyncInstallers;

  /// @brief Field _state, offset: 0xc0, size: 0x4, def value: None
  ::BGLib::AppFlow::Initialization::__AsyncSceneContext__State ____state;

  /// @brief Field _registry, offset: 0xc8, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* ____registry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncSceneContext, 0xd0>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext__State, "BGLib.AppFlow.Initialization", "AsyncSceneContext/State");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncSceneContext);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncSceneContext*, "BGLib.AppFlow.Initialization", "AsyncSceneContext");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext____c__DisplayClass6_0*, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<>c__DisplayClass6_0");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext___LoadInstallersAsync_d__6, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<LoadInstallersAsync>d__6");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext___RunAsync_d__5, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<RunAsync>d__5");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncSceneContext___Run_d__4, "BGLib.AppFlow.Initialization", "AsyncSceneContext/<Run>d__4");
