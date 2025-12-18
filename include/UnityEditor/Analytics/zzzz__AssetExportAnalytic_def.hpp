#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/AssetExportAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetExportAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class AssetExportAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::AssetExportAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.AssetExportAnalytic
class CORDL_TYPE AssetExportAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field asset_extensions, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_asset_extensions, put = __cordl_internal_set_asset_extensions)) ::ArrayW<::StringW, ::Array<::StringW>*> asset_extensions;

  /// @brief Field error_message, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_error_message, put = __cordl_internal_set_error_message)) ::StringW error_message;

  /// @brief Field include_upm_dependencies, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_include_upm_dependencies, put = __cordl_internal_set_include_upm_dependencies)) bool include_upm_dependencies;

  /// @brief Field items_count, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_items_count, put = __cordl_internal_set_items_count)) int32_t items_count;

  /// @brief Field package_name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_package_name, put = __cordl_internal_set_package_name)) ::StringW package_name;

  /// @brief Method CreateAssetExportAnalytic, addr 0x6c5a474, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::AssetExportAnalytic* CreateAssetExportAnalytic();

  static inline ::UnityEditor::Analytics::AssetExportAnalytic* New_ctor();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get_asset_extensions() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get_asset_extensions();

  constexpr ::StringW const& __cordl_internal_get_error_message() const;

  constexpr ::StringW& __cordl_internal_get_error_message();

  constexpr bool const& __cordl_internal_get_include_upm_dependencies() const;

  constexpr bool& __cordl_internal_get_include_upm_dependencies();

  constexpr int32_t const& __cordl_internal_get_items_count() const;

  constexpr int32_t& __cordl_internal_get_items_count();

  constexpr ::StringW const& __cordl_internal_get_package_name() const;

  constexpr ::StringW& __cordl_internal_get_package_name();

  constexpr void __cordl_internal_set_asset_extensions(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set_error_message(::StringW value);

  constexpr void __cordl_internal_set_include_upm_dependencies(bool value);

  constexpr void __cordl_internal_set_items_count(int32_t value);

  constexpr void __cordl_internal_set_package_name(::StringW value);

  /// @brief Method .ctor, addr 0x6c5a3fc, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssetExportAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssetExportAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssetExportAnalytic(AssetExportAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssetExportAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssetExportAnalytic(AssetExportAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22600 };

  /// @brief Field package_name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___package_name;

  /// @brief Field error_message, offset: 0x38, size: 0x8, def value: None
  ::StringW ___error_message;

  /// @brief Field items_count, offset: 0x40, size: 0x4, def value: None
  int32_t ___items_count;

  /// @brief Field asset_extensions, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ___asset_extensions;

  /// @brief Field include_upm_dependencies, offset: 0x50, size: 0x1, def value: None
  bool ___include_upm_dependencies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::AssetExportAnalytic, ___package_name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetExportAnalytic, ___error_message) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetExportAnalytic, ___items_count) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetExportAnalytic, ___asset_extensions) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::AssetExportAnalytic, ___include_upm_dependencies) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::AssetExportAnalytic, 0x58>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::AssetExportAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::AssetExportAnalytic*, "UnityEditor.Analytics", "AssetExportAnalytic");
