#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerEmbedPackageAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_def.hpp"
CORDL_MODULE_EXPORT(PackageManagerEmbedPackageAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class PackageManagerEmbedPackageAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic);
// Dependencies UnityEditor.Analytics.PackageManagerBaseAnalytic
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.PackageManagerEmbedPackageAnalytic
class CORDL_TYPE PackageManagerEmbedPackageAnalytic : public ::UnityEditor::Analytics::PackageManagerBaseAnalytic {
public:
  // Declarations
  /// @brief Method CreatePackageManagerEmbedPackageAnalytic, addr 0x6c59f54, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic* CreatePackageManagerEmbedPackageAnalytic();

  static inline ::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic* New_ctor();

  /// @brief Method .ctor, addr 0x6c59ec0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageManagerEmbedPackageAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerEmbedPackageAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageManagerEmbedPackageAnalytic(PackageManagerEmbedPackageAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerEmbedPackageAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageManagerEmbedPackageAnalytic(PackageManagerEmbedPackageAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic, 0x60>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::PackageManagerEmbedPackageAnalytic*, "UnityEditor.Analytics", "PackageManagerEmbedPackageAnalytic");
