#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/AssetImportStatusAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetImportStatusAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class AssetImportStatusAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::AssetImportStatusAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.AssetImportStatusAnalytic
class CORDL_TYPE AssetImportStatusAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field error_message, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_error_message, put = __cordl_internal_set_error_message)) ::StringW error_message;

  /// @brief Field package_import_status, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_package_import_status, put = __cordl_internal_set_package_import_status)) int32_t package_import_status;

  /// @brief Field package_items_count, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_package_items_count, put = __cordl_internal_set_package_items_count)) int32_t package_items_count;

  /// @brief Field package_name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_package_name, put = __cordl_internal_set_package_name)) ::StringW package_name;

  /// @brief Field project_assets_count, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_project_assets_count, put = __cordl_internal_set_project_assets_count)) int32_t project_assets_count;

  /// @brief Field selected_asset_extensions, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_selected_asset_extensions, put = __cordl_internal_set_selected_asset_extensions)) ::ArrayW<::StringW, ::Array<::StringW>*> selected_asset_extensions;

  /// @brief Field selected_changed_assets_count, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_selected_changed_assets_count, put = __cordl_internal_set_selected_changed_assets_count)) int32_t selected_changed_assets_count;

  /// @brief Field selected_new_assets_count, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_selected_new_assets_count, put = __cordl_internal_set_selected_new_assets_count)) int32_t selected_new_assets_count;

  /// @brief Field unchanged_assets_count, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_unchanged_assets_count, put = __cordl_internal_set_unchanged_assets_count)) int32_t unchanged_assets_count;

  /// @brief Field unselected_assets_count, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_unselected_assets_count, put = __cordl_internal_set_unselected_assets_count)) int32_t unselected_assets_count;

  /// @brief Method CreateAssetImportStatusAnalytic, addr 0x6bf1458, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::AssetImportStatusAnalytic* CreateAssetImportStatusAnalytic();

  static inline ::UnityEditor::Analytics::AssetImportStatusAnalytic* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_error_message() const;

  constexpr ::StringW& __cordl_internal_get_error_message();

  constexpr int32_t const& __cordl_internal_get_package_import_status() const;

  constexpr int32_t& __cordl_internal_get_package_import_status();

  constexpr int32_t const& __cordl_internal_get_package_items_count() const;

  constexpr int32_t& __cordl_internal_get_package_items_count();

  constexpr ::StringW const& __cordl_internal_get_package_name() const;

  constexpr ::StringW& __cordl_internal_get_package_name();

  constexpr int32_t const& __cordl_internal_get_project_assets_count() const;

  constexpr int32_t& __cordl_internal_get_project_assets_count();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_selected_asset_extensions() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_selected_asset_extensions();

  constexpr int32_t const& __cordl_internal_get_selected_changed_assets_count() const;

  constexpr int32_t& __cordl_internal_get_selected_changed_assets_count();

  constexpr int32_t const& __cordl_internal_get_selected_new_assets_count() const;

  constexpr int32_t& __cordl_internal_get_selected_new_assets_count();

  constexpr int32_t const& __cordl_internal_get_unchanged_assets_count() const;

  constexpr int32_t& __cordl_internal_get_unchanged_assets_count();

  constexpr int32_t const& __cordl_internal_get_unselected_assets_count() const;

  constexpr int32_t& __cordl_internal_get_unselected_assets_count();

  constexpr void __cordl_internal_set_error_message(::StringW value);

  constexpr void __cordl_internal_set_package_import_status(int32_t value);

  constexpr void __cordl_internal_set_package_items_count(int32_t value);

  constexpr void __cordl_internal_set_package_name(::StringW value);

  constexpr void __cordl_internal_set_project_assets_count(int32_t value);

  constexpr void __cordl_internal_set_selected_asset_extensions(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_selected_changed_assets_count(int32_t value);

  constexpr void __cordl_internal_set_selected_new_assets_count(int32_t value);

  constexpr void __cordl_internal_set_unchanged_assets_count(int32_t value);

  constexpr void __cordl_internal_set_unselected_assets_count(int32_t value);

  /// @brief Method .ctor, addr 0x6bf13dc, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetImportStatusAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetImportStatusAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetImportStatusAnalytic(AssetImportStatusAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetImportStatusAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetImportStatusAnalytic(AssetImportStatusAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22571 };

  /// @brief Field package_name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___package_name;

  /// @brief Field package_items_count, offset: 0x38, size: 0x4, def value: None
  int32_t ___package_items_count;

  /// @brief Field package_import_status, offset: 0x3c, size: 0x4, def value: None
  int32_t ___package_import_status;

  /// @brief Field error_message, offset: 0x40, size: 0x8, def value: None
  ::StringW ___error_message;

  /// @brief Field project_assets_count, offset: 0x48, size: 0x4, def value: None
  int32_t ___project_assets_count;

  /// @brief Field unselected_assets_count, offset: 0x4c, size: 0x4, def value: None
  int32_t ___unselected_assets_count;

  /// @brief Field selected_new_assets_count, offset: 0x50, size: 0x4, def value: None
  int32_t ___selected_new_assets_count;

  /// @brief Field selected_changed_assets_count, offset: 0x54, size: 0x4, def value: None
  int32_t ___selected_changed_assets_count;

  /// @brief Field unchanged_assets_count, offset: 0x58, size: 0x4, def value: None
  int32_t ___unchanged_assets_count;

  /// @brief Field selected_asset_extensions, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___selected_asset_extensions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___package_name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___package_items_count) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___package_import_status) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___error_message) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___project_assets_count) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___unselected_assets_count) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___selected_new_assets_count) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___selected_changed_assets_count) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___unchanged_assets_count) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetImportStatusAnalytic, ___selected_asset_extensions) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::AssetImportStatusAnalytic, 0x68>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::AssetImportStatusAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::AssetImportStatusAnalytic*, "UnityEditor.Analytics", "AssetImportStatusAnalytic");
