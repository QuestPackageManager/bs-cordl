#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/AssetImportAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetImportAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class AssetImportAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::AssetImportAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.AssetImportAnalytic
class CORDL_TYPE AssetImportAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field package_import_choice, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_package_import_choice, put = __cordl_internal_set_package_import_choice)) int32_t package_import_choice;

  /// @brief Field package_name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_package_name, put = __cordl_internal_set_package_name)) ::StringW package_name;

  /// @brief Method CreateAssetImportAnalytic, addr 0x6c5a3a8, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::AssetImportAnalytic* CreateAssetImportAnalytic();

  static inline ::UnityEditor::Analytics::AssetImportAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_package_import_choice() const;

  constexpr int32_t& __cordl_internal_get_package_import_choice();

  constexpr ::StringW const& __cordl_internal_get_package_name() const;

  constexpr ::StringW& __cordl_internal_get_package_name();

  constexpr void __cordl_internal_set_package_import_choice(int32_t value);

  constexpr void __cordl_internal_set_package_name(::StringW value);

  /// @brief Method .ctor, addr 0x6c5a330, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetImportAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetImportAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetImportAnalytic(AssetImportAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetImportAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetImportAnalytic(AssetImportAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22599 };

  /// @brief Field package_name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___package_name;

  /// @brief Field package_import_choice, offset: 0x38, size: 0x4, def value: None
  int32_t ___package_import_choice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::AssetImportAnalytic, ___package_name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportAnalytic, ___package_import_choice) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::AssetImportAnalytic, 0x40>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::AssetImportAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::AssetImportAnalytic*, "UnityEditor.Analytics", "AssetImportAnalytic");
