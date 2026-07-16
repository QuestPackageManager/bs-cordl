#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerStartServerPackageAnalytic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_def.hpp"
CORDL_MODULE_EXPORT(PackageManagerStartServerPackageAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class PackageManagerStartServerPackageAnalytic;
}
// Write type traits
MARK_REF_T(::UnityEditor::Analytics::PackageManagerStartServerPackageAnalytic*);
DEFINE_IL2CPP_CLASS(::UnityEditor::Analytics::PackageManagerStartServerPackageAnalytic*, "UnityEditor.Analytics", "PackageManagerStartServerPackageAnalytic");
// Dependencies UnityEditor.Analytics.PackageManagerBaseAnalytic
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.PackageManagerStartServerPackageAnalytic
class CORDL_TYPE PackageManagerStartServerPackageAnalytic : public ::UnityEditor::Analytics::PackageManagerBaseAnalytic {
public:
  // Declarations
  /// @brief Method CreatePackageManagerStartServerPackageAnalytic, addr 0x6e22544, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::PackageManagerStartServerPackageAnalytic* CreatePackageManagerStartServerPackageAnalytic();

  static inline ::UnityEditor::Analytics::PackageManagerStartServerPackageAnalytic* New_ctor();

  /// @brief Method .ctor, addr 0x6e224b0, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageManagerStartServerPackageAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerStartServerPackageAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageManagerStartServerPackageAnalytic(PackageManagerStartServerPackageAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerStartServerPackageAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageManagerStartServerPackageAnalytic(PackageManagerStartServerPackageAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22967 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEditor::Analytics::PackageManagerStartServerPackageAnalytic) == 0x60, "Size mismatch!");

} // namespace UnityEditor::Analytics
