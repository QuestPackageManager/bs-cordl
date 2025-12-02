#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/BuildAssetBundleAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BuildAssetBundleAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class BuildAssetBundleAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::BuildAssetBundleAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.BuildAssetBundleAnalytic
class CORDL_TYPE BuildAssetBundleAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field error, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error)) ::StringW error;

  /// @brief Field success, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_success, put = __cordl_internal_set_success)) bool success;

  /// @brief Method CreateBuildAssetBundleAnalytic, addr 0x6bf064c, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::BuildAssetBundleAnalytic* CreateBuildAssetBundleAnalytic();

  static inline ::UnityEditor::Analytics::BuildAssetBundleAnalytic* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_error() const;

  constexpr ::StringW& __cordl_internal_get_error();

  constexpr bool const& __cordl_internal_get_success() const;

  constexpr bool& __cordl_internal_get_success();

  constexpr void __cordl_internal_set_error(::StringW value);

  constexpr void __cordl_internal_set_success(bool value);

  /// @brief Method .ctor, addr 0x6bf05d4, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BuildAssetBundleAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BuildAssetBundleAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BuildAssetBundleAnalytic(BuildAssetBundleAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BuildAssetBundleAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BuildAssetBundleAnalytic(BuildAssetBundleAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22554 };

  /// @brief Field success, offset: 0x2c, size: 0x1, def value: None
  bool ___success;

  /// @brief Field error, offset: 0x30, size: 0x8, def value: None
  ::StringW ___error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::BuildAssetBundleAnalytic, ___success) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::BuildAssetBundleAnalytic, ___error) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::BuildAssetBundleAnalytic, 0x38>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::BuildAssetBundleAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::BuildAssetBundleAnalytic*, "UnityEditor.Analytics", "BuildAssetBundleAnalytic");
