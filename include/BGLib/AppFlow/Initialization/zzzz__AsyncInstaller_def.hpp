#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(AsyncInstaller)
namespace System::Threading::Tasks {
class Task;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
namespace Zenject {
class MonoInstaller;
}
namespace Zenject {
class ScriptableObjectInstaller;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class AsyncInstaller;
}
namespace BGLib::AppFlow::Initialization {
class __AsyncInstaller__IInstallerRegistry;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::AsyncInstaller);
MARK_REF_PTR_T(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry);
// Type: ::IInstallerRegistry
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15421))
// CS Name: ::AsyncInstaller::IInstallerRegistry*
class CORDL_TYPE __AsyncInstaller__IInstallerRegistry {
public:
  // Declarations
  /// @brief Method AddMonoInstaller, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddMonoInstaller(::Zenject::MonoInstaller* newMonoInstaller);

  /// @brief Method AddScriptableObjectInstaller, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void AddScriptableObjectInstaller(::Zenject::ScriptableObjectInstaller* newScriptableObjectInstaller);

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncInstaller__IInstallerRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __AsyncInstaller__IInstallerRegistry(__AsyncInstaller__IInstallerRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__AsyncInstaller__IInstallerRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __AsyncInstaller__IInstallerRegistry(__AsyncInstaller__IInstallerRegistry const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
// Type: BGLib.AppFlow.Initialization::AsyncInstaller
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15422))
// CS Name: ::BGLib.AppFlow.Initialization::AsyncInstaller*
class CORDL_TYPE AsyncInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  using IInstallerRegistry = ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry;

  /// @brief Method LoadResourcesBeforeInstall, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void LoadResourcesBeforeInstall(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  /// @brief Method LoadResourcesBeforeInstallAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* LoadResourcesBeforeInstallAsync(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry);

  static inline ::BGLib::AppFlow::Initialization::AsyncInstaller* New_ctor();

  /// @brief Method .ctor, addr 0xe23c2c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncInstaller(AsyncInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncInstaller(AsyncInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncInstaller();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::AppFlow::Initialization::AsyncInstaller, 0x20>, "Size mismatch!");

} // namespace BGLib::AppFlow::Initialization
NEED_NO_BOX(::BGLib::AppFlow::Initialization::AsyncInstaller);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::AsyncInstaller*, "BGLib.AppFlow.Initialization", "AsyncInstaller");
NEED_NO_BOX(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*, "BGLib.AppFlow.Initialization", "AsyncInstaller/IInstallerRegistry");
