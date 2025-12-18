#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/PackageManagerResolvePackageAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEditor/Analytics/zzzz__PackageManagerBaseAnalytic_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PackageManagerResolvePackageAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class PackageManagerResolvePackageAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic);
// Dependencies UnityEditor.Analytics.PackageManagerBaseAnalytic
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.PackageManagerResolvePackageAnalytic
class CORDL_TYPE PackageManagerResolvePackageAnalytic : public ::UnityEditor::Analytics::PackageManagerBaseAnalytic {
public:
  // Declarations
  /// @brief Field package_registries, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_package_registries, put = __cordl_internal_set_package_registries)) ::ArrayW<::StringW, ::Array<::StringW>*> package_registries;

  /// @brief Field package_signatures, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_package_signatures, put = __cordl_internal_set_package_signatures)) ::ArrayW<::StringW, ::Array<::StringW>*> package_signatures;

  /// @brief Field package_sources, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_package_sources, put = __cordl_internal_set_package_sources)) ::ArrayW<::StringW, ::Array<::StringW>*> package_sources;

  /// @brief Field package_types, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_package_types, put = __cordl_internal_set_package_types)) ::ArrayW<::StringW, ::Array<::StringW>*> package_types;

  /// @brief Field packages, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_packages, put = __cordl_internal_set_packages)) ::ArrayW<::StringW, ::Array<::StringW>*> packages;

  /// @brief Method CreatePackageManagerResolvePackageAnalytic, addr 0x6c59e6c, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic* CreatePackageManagerResolvePackageAnalytic();

  static inline ::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_package_registries() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_package_registries();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_package_signatures() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_package_signatures();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_package_sources() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_package_sources();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_package_types() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_package_types();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_packages() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_packages();

  constexpr void __cordl_internal_set_package_registries(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_package_signatures(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_package_sources(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_package_types(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_packages(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x6c59dd8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PackageManagerResolvePackageAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerResolvePackageAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PackageManagerResolvePackageAnalytic(PackageManagerResolvePackageAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PackageManagerResolvePackageAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PackageManagerResolvePackageAnalytic(PackageManagerResolvePackageAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22593 };

  /// @brief Field packages, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___packages;

  /// @brief Field package_registries, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___package_registries;

  /// @brief Field package_signatures, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___package_signatures;

  /// @brief Field package_sources, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___package_sources;

  /// @brief Field package_types, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___package_types;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic, ___packages) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic, ___package_registries) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic, ___package_signatures) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic, ___package_sources) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic, ___package_types) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic, 0x88>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::PackageManagerResolvePackageAnalytic*, "UnityEditor.Analytics", "PackageManagerResolvePackageAnalytic");
