#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerTestAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_def.hpp"
CORDL_MODULE_EXPORT(PackageManagerTestAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class PackageManagerTestAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::PackageManagerTestAnalytic);
// Dependencies UnityEditor.Analytics.PackageManagerBaseAnalytic
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.PackageManagerTestAnalytic
class CORDL_TYPE PackageManagerTestAnalytic : public ::UnityEditor::Analytics::PackageManagerBaseAnalytic {
public:
  // Declarations
  /// @brief Method CreatePackageManagerTestAnalytic, addr 0x6bf0e18, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::PackageManagerTestAnalytic* CreatePackageManagerTestAnalytic();

  static inline ::UnityEditor::Analytics::PackageManagerTestAnalytic* New_ctor();

  /// @brief Method .ctor, addr 0x6bf0d84, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageManagerTestAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerTestAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageManagerTestAnalytic(PackageManagerTestAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerTestAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageManagerTestAnalytic(PackageManagerTestAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22564 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::PackageManagerTestAnalytic, 0x60>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::PackageManagerTestAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::PackageManagerTestAnalytic*, "UnityEditor.Analytics", "PackageManagerTestAnalytic");
