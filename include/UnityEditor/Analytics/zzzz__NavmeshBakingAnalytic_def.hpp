#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/NavmeshBakingAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NavmeshBakingAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class NavmeshBakingAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::NavmeshBakingAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.NavmeshBakingAnalytic
class CORDL_TYPE NavmeshBakingAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field bake_at_runtime, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_bake_at_runtime, put = __cordl_internal_set_bake_at_runtime)) bool bake_at_runtime;

  /// @brief Field height_meshes_count, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_height_meshes_count, put = __cordl_internal_set_height_meshes_count)) int32_t height_meshes_count;

  /// @brief Field new_nav_api, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_new_nav_api, put = __cordl_internal_set_new_nav_api)) bool new_nav_api;

  /// @brief Field offmesh_links_count, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_offmesh_links_count, put = __cordl_internal_set_offmesh_links_count)) int32_t offmesh_links_count;

  /// @brief Method CreateNavmeshBakingAnalytic, addr 0x6c598cc, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::NavmeshBakingAnalytic* CreateNavmeshBakingAnalytic();

  static inline ::UnityEditor::Analytics::NavmeshBakingAnalytic* New_ctor();

  constexpr bool const& __cordl_internal_get_bake_at_runtime() const;

  constexpr bool& __cordl_internal_get_bake_at_runtime();

  constexpr int32_t const& __cordl_internal_get_height_meshes_count() const;

  constexpr int32_t& __cordl_internal_get_height_meshes_count();

  constexpr bool const& __cordl_internal_get_new_nav_api() const;

  constexpr bool& __cordl_internal_get_new_nav_api();

  constexpr int32_t const& __cordl_internal_get_offmesh_links_count() const;

  constexpr int32_t& __cordl_internal_get_offmesh_links_count();

  constexpr void __cordl_internal_set_bake_at_runtime(bool value);

  constexpr void __cordl_internal_set_height_meshes_count(int32_t value);

  constexpr void __cordl_internal_set_new_nav_api(bool value);

  constexpr void __cordl_internal_set_offmesh_links_count(int32_t value);

  /// @brief Method .ctor, addr 0x6c59854, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavmeshBakingAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavmeshBakingAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavmeshBakingAnalytic(NavmeshBakingAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavmeshBakingAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavmeshBakingAnalytic(NavmeshBakingAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22586 };

  /// @brief Field new_nav_api, offset: 0x2c, size: 0x1, def value: None
  bool ___new_nav_api;

  /// @brief Field bake_at_runtime, offset: 0x2d, size: 0x1, def value: None
  bool ___bake_at_runtime;

  /// @brief Field height_meshes_count, offset: 0x30, size: 0x4, def value: None
  int32_t ___height_meshes_count;

  /// @brief Field offmesh_links_count, offset: 0x34, size: 0x4, def value: None
  int32_t ___offmesh_links_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::NavmeshBakingAnalytic, ___new_nav_api) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::NavmeshBakingAnalytic, ___bake_at_runtime) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::NavmeshBakingAnalytic, ___height_meshes_count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::NavmeshBakingAnalytic, ___offmesh_links_count) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::NavmeshBakingAnalytic, 0x38>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::NavmeshBakingAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::NavmeshBakingAnalytic*, "UnityEditor.Analytics", "NavmeshBakingAnalytic");
