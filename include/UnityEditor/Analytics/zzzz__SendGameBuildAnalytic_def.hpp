#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/SendGameBuildAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SendGameBuildAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class SendGameBuildAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::SendGameBuildAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.SendGameBuildAnalytic
class CORDL_TYPE SendGameBuildAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field navmesh_count, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_navmesh_count, put = __cordl_internal_set_navmesh_count)) int32_t navmesh_count;

  /// @brief Method CreateSendGameBuildAnalytic, addr 0x6c59a64, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::SendGameBuildAnalytic* CreateSendGameBuildAnalytic();

  static inline ::UnityEditor::Analytics::SendGameBuildAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_navmesh_count() const;

  constexpr int32_t& __cordl_internal_get_navmesh_count();

  constexpr void __cordl_internal_set_navmesh_count(int32_t value);

  /// @brief Method .ctor, addr 0x6c599ec, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SendGameBuildAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SendGameBuildAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SendGameBuildAnalytic(SendGameBuildAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SendGameBuildAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SendGameBuildAnalytic(SendGameBuildAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22588 };

  /// @brief Field navmesh_count, offset: 0x2c, size: 0x4, def value: None
  int32_t ___navmesh_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::SendGameBuildAnalytic, ___navmesh_count) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::SendGameBuildAnalytic, 0x30>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::SendGameBuildAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::SendGameBuildAnalytic*, "UnityEditor.Analytics", "SendGameBuildAnalytic");
