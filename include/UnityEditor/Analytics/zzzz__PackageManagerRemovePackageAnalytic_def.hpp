#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerRemovePackageAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_def.hpp"
CORDL_MODULE_EXPORT(PackageManagerRemovePackageAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class PackageManagerRemovePackageAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic);
// Dependencies UnityEditor.Analytics.PackageManagerBaseAnalytic
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.PackageManagerRemovePackageAnalytic
class CORDL_TYPE PackageManagerRemovePackageAnalytic : public ::UnityEditor::Analytics::PackageManagerBaseAnalytic {
public:
  // Declarations
  /// @brief Method CreatePackageManagerRemovePackageAnalytic, addr 0x6c59d84, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic* CreatePackageManagerRemovePackageAnalytic();

  static inline ::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic* New_ctor();

  /// @brief Method .ctor, addr 0x6c59cf0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageManagerRemovePackageAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerRemovePackageAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageManagerRemovePackageAnalytic(PackageManagerRemovePackageAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerRemovePackageAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageManagerRemovePackageAnalytic(PackageManagerRemovePackageAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22592 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic, 0x60>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::PackageManagerRemovePackageAnalytic*, "UnityEditor.Analytics", "PackageManagerRemovePackageAnalytic");
