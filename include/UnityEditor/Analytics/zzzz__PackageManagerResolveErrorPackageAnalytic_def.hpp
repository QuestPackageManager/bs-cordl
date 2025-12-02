#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerResolveErrorPackageAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PackageManagerResolveErrorPackageAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class PackageManagerResolveErrorPackageAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic);
// Dependencies UnityEditor.Analytics.PackageManagerBaseAnalytic
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.PackageManagerResolveErrorPackageAnalytic
class CORDL_TYPE PackageManagerResolveErrorPackageAnalytic : public ::UnityEditor::Analytics::PackageManagerBaseAnalytic {
public:
  // Declarations
  /// @brief Field action, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::StringW action;

  /// @brief Field reason, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_reason, put = __cordl_internal_set_reason)) ::StringW reason;

  /// @brief Method CreatePackageManagerResolveErrorPackageAnalytic, addr 0x6bf12a0, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic* CreatePackageManagerResolveErrorPackageAnalytic();

  static inline ::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_action() const;

  constexpr ::StringW& __cordl_internal_get_action();

  constexpr ::StringW const& __cordl_internal_get_reason() const;

  constexpr ::StringW& __cordl_internal_get_reason();

  constexpr void __cordl_internal_set_action(::StringW value);

  constexpr void __cordl_internal_set_reason(::StringW value);

  /// @brief Method .ctor, addr 0x6bf120c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageManagerResolveErrorPackageAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerResolveErrorPackageAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageManagerResolveErrorPackageAnalytic(PackageManagerResolveErrorPackageAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerResolveErrorPackageAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageManagerResolveErrorPackageAnalytic(PackageManagerResolveErrorPackageAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22569 };

  /// @brief Field reason, offset: 0x60, size: 0x8, def value: None
  ::StringW ___reason;

  /// @brief Field action, offset: 0x68, size: 0x8, def value: None
  ::StringW ___action;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic, ___reason) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic, ___action) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic, 0x70>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::PackageManagerResolveErrorPackageAnalytic*, "UnityEditor.Analytics", "PackageManagerResolveErrorPackageAnalytic");
