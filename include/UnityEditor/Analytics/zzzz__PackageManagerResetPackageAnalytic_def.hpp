#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerResetPackageAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_def.hpp"
CORDL_MODULE_EXPORT(PackageManagerResetPackageAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class PackageManagerResetPackageAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::PackageManagerResetPackageAnalytic);
// Dependencies UnityEditor.Analytics.PackageManagerBaseAnalytic
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.PackageManagerResetPackageAnalytic
class CORDL_TYPE PackageManagerResetPackageAnalytic : public ::UnityEditor::Analytics::PackageManagerBaseAnalytic {
public:
  // Declarations
  /// @brief Method CreatePackageManagerResetPackageAnalytic, addr 0x6bf11b8, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::PackageManagerResetPackageAnalytic* CreatePackageManagerResetPackageAnalytic();

  static inline ::UnityEditor::Analytics::PackageManagerResetPackageAnalytic* New_ctor();

  /// @brief Method .ctor, addr 0x6bf1124, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageManagerResetPackageAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerResetPackageAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageManagerResetPackageAnalytic(PackageManagerResetPackageAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerResetPackageAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageManagerResetPackageAnalytic(PackageManagerResetPackageAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22568 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::PackageManagerResetPackageAnalytic, 0x60>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::PackageManagerResetPackageAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::PackageManagerResetPackageAnalytic*, "UnityEditor.Analytics", "PackageManagerResetPackageAnalytic");
