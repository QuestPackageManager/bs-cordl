#pragma once
// IWYU pragma private; include "Zenject/Installer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InstallerBase_def.hpp"
CORDL_MODULE_EXPORT(Installer)
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class Installer;
}
// Write type traits
MARK_REF_T(::Zenject::Installer*);
DEFINE_IL2CPP_CLASS(::Zenject::Installer*, "Zenject", "Installer");
// Dependencies Zenject.InstallerBase
namespace Zenject {
// Is value type: false
// CS Name: Zenject.Installer
class CORDL_TYPE Installer : public ::Zenject::InstallerBase {
public:
  // Declarations
  static inline ::Zenject::Installer* New_ctor();

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e723fc, size 0x148, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e723f4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Installer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Installer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Installer(Installer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Installer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Installer(Installer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Zenject::Installer) == 0x18, "Size mismatch!");

} // namespace Zenject
