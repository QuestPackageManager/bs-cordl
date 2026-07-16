#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/AsyncInstaller.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncInstaller)
namespace BGLib::AppFlow::Initialization {
struct AsyncInstaller__LoadInternalAsync_d__8;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncLoader_SynchronizationStep;
}
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IInstaller;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller;
}
namespace BGLib::AppFlow::Initialization {
struct AsyncInstaller__LoadInternalAsync_d__8;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::AsyncInstaller*);
MARK_VAL_T(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncInstaller*, "BGLib.AppFlow.Initialization", "AsyncInstaller");
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8, "BGLib.AppFlow.Initialization", "AsyncInstaller/<LoadInternalAsync>d__8");
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace BGLib::AppFlow::Initialization {
// Is value type: true
// CS Name: BGLib.AppFlow.Initialization.AsyncInstaller/<LoadInternalAsync>d__8
struct CORDL_TYPE AsyncInstaller__LoadInternalAsync_d__8 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x3306aa8, size 0x26c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x3306d14, size 0x6c, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncInstaller__LoadInternalAsync_d__8();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller>",
  // modifiers: "", def_value: None }, CppParam { name: "registry", ty: "::BGLib::AppFlow::Initialization::IInstallerRegistry*", modifiers: "", def_value: None }, CppParam { name: "container", ty:
  // "::Zenject::DiContainer*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr AsyncInstaller__LoadInternalAsync_d__8(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                   ::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller> __4__this, ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry,
                                                   ::Zenject::DiContainer* container, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21499 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::BGLib::AppFlow::Initialization::AsyncInstaller> __4__this;

  /// @brief Field registry, offset: 0x28, size: 0x8, def value: None
  ::BGLib::AppFlow::Initialization::IInstallerRegistry* registry;

  /// @brief Field container, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8, registry) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8, container) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8) == 0x40, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
// Dependencies BGLib.AppFlow.Initialization.AsyncLoader
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.AsyncInstaller
class CORDL_TYPE AsyncInstaller : public ::BGLib::AppFlow::Initialization::AsyncLoader {
public:
  // Declarations
  using _LoadInternalAsync_d__8 = ::BGLib::AppFlow::Initialization::AsyncInstaller__LoadInternalAsync_d__8;

  __declspec(property(get = get_Container)) ::Zenject::DiContainer* Container;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  /// @brief Field _container, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__container, put = __cordl_internal_set__container)) ::Zenject::DiContainer* _container;

  __declspec(property(get = get_synchronizationStep)) ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep synchronizationStep;

  /// @brief Convert operator to "::Zenject::IInstaller"
  constexpr operator ::Zenject::IInstaller*() noexcept;

  /// @brief Method InstallBindings, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadInternalAsync, addr 0x33069dc, size 0xc4, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadInternalAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container,
                                                             ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::BGLib::AppFlow::Initialization::AsyncInstaller* New_ctor();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__container() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__container();

  constexpr void __cordl_internal_set__container(::Zenject::DiContainer* value);

  /// @brief Method .ctor, addr 0x3306aa0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Container, addr 0x33069cc, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::DiContainer* get_Container();

  /// @brief Method get_IsEnabled, addr 0x33069d4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsEnabled();

  /// @brief Method get_synchronizationStep, addr 0x33069c4, size 0x8, virtual true, abstract: false, final false
  inline ::BGLib::AppFlow::Initialization::AsyncLoader_SynchronizationStep get_synchronizationStep();

  /// @brief Convert to "::Zenject::IInstaller"
  constexpr ::Zenject::IInstaller* i___Zenject__IInstaller() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncInstaller(AsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncInstaller(AsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21500 };

  /// @brief Field _container, offset: 0x30, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::AppFlow::Initialization::AsyncInstaller, ____container) == 0x30, "Offset mismatch!");

static_assert(sizeof(::BGLib::AppFlow::Initialization::AsyncInstaller) == 0x38, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
