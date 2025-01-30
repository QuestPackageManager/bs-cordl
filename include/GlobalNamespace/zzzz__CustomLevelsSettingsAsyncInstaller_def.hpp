#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomLevelsSettingsAsyncInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomLevelsSettingsAsyncInstaller)
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller_IInstallerRegistry;
}
namespace GlobalNamespace {
struct CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2;
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
class CustomLevelsSettingsAsyncInstaller;
}
namespace GlobalNamespace {
struct CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller);
MARK_VAL_T(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2);
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.IAsyncStateMachine
namespace GlobalNamespace {
// Is value type: true
// CS Name: CustomLevelsSettingsAsyncInstaller/<LoadResourcesBeforeInstallAsync>d__2
struct CORDL_TYPE CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x2715da8, size 0x158, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x2715f00, size 0x68, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "container", ty: "::Zenject::DiContainer*", modifiers: "", def_value: None },
  // CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller>", modifiers: "", def_value: None }]
  constexpr CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                                     ::Zenject::DiContainer* container,
                                                                                     ::UnityW<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller> __4__this) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17776 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field container, offset: 0x20, size: 0x8, def value: None
  ::Zenject::DiContainer* container;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller> __4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2, container) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2, __4__this) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies BGLib.AppFlow.Initialization.AsyncInstaller
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomLevelsSettingsAsyncInstaller
class CORDL_TYPE CustomLevelsSettingsAsyncInstaller : public ::BGLib::AppFlow::Initialization::AsyncInstaller {
public:
  // Declarations
  using _LoadResourcesBeforeInstallAsync_d__2 = ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2;

  /// @brief Field _customLevelsEnabled, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__customLevelsEnabled, put = __cordl_internal_set__customLevelsEnabled)) bool _customLevelsEnabled;

  /// @brief Method InstallBindings, addr 0x2715ce4, size 0xbc, virtual true, abstract: false, final false
  inline void InstallBindings();

  /// @brief Method LoadResourcesBeforeInstall, addr 0x2715bb0, size 0x64, virtual true, abstract: false, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x2715c14, size 0xd0, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::AsyncInstaller_IInstallerRegistry* registry, ::Zenject::DiContainer* container);

  static inline ::GlobalNamespace::CustomLevelsSettingsAsyncInstaller* New_ctor();

  constexpr bool const& __cordl_internal_get__customLevelsEnabled() const;

  constexpr bool& __cordl_internal_get__customLevelsEnabled();

  constexpr void __cordl_internal_set__customLevelsEnabled(bool value);

  /// @brief Method .ctor, addr 0x2715da0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLevelsSettingsAsyncInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelsSettingsAsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomLevelsSettingsAsyncInstaller(CustomLevelsSettingsAsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelsSettingsAsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomLevelsSettingsAsyncInstaller(CustomLevelsSettingsAsyncInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17777 };

  /// @brief Field _customLevelsEnabled, offset: 0x28, size: 0x1, def value: None
  bool ____customLevelsEnabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller, ____customLevelsEnabled) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLevelsSettingsAsyncInstaller, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller*, "", "CustomLevelsSettingsAsyncInstaller");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLevelsSettingsAsyncInstaller__LoadResourcesBeforeInstallAsync_d__2, "", "CustomLevelsSettingsAsyncInstaller/<LoadResourcesBeforeInstallAsync>d__2");
