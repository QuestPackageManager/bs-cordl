#pragma once
// IWYU pragma private; include "BGLib/AppFlow/Initialization/IInstallerRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IInstallerRegistry)
namespace Zenject {
class IInstaller;
}
// Forward declare root types
namespace BGLib::AppFlow::Initialization {
class IInstallerRegistry;
}
// Write type traits
MARK_REF_T(::BGLib::AppFlow::Initialization::IInstallerRegistry*);
DEFINE_IL2CPP_CLASS(::BGLib::AppFlow::Initialization::IInstallerRegistry*, "BGLib.AppFlow.Initialization", "IInstallerRegistry");
// Dependencies
namespace BGLib::AppFlow::Initialization {
// Is value type: false
// CS Name: BGLib.AppFlow.Initialization.IInstallerRegistry
class CORDL_TYPE IInstallerRegistry {
public:
  // Declarations
  /// @brief Method AddInstaller, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddInstaller(::Zenject::IInstaller* newInstaller);

  // Ctor Parameters [CppParam { name: "", ty: "IInstallerRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInstallerRegistry(IInstallerRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21515 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::AppFlow::Initialization
