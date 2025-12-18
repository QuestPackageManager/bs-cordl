#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/ProjectSettingsInformationAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectSettingsInformationAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class ProjectSettingsInformationAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::ProjectSettingsInformationAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.ProjectSettingsInformationAnalytic
class CORDL_TYPE ProjectSettingsInformationAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field agent_types_count, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_agent_types_count, put = __cordl_internal_set_agent_types_count)) int32_t agent_types_count;

  /// @brief Field areas_count, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_areas_count, put = __cordl_internal_set_areas_count)) int32_t areas_count;

  /// @brief Method CreateProjectSettingsInformationAnalytic, addr 0x6c59998, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic* CreateProjectSettingsInformationAnalytic();

  static inline ::UnityEditor::Analytics::ProjectSettingsInformationAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_agent_types_count() const;

  constexpr int32_t& __cordl_internal_get_agent_types_count();

  constexpr int32_t const& __cordl_internal_get_areas_count() const;

  constexpr int32_t& __cordl_internal_get_areas_count();

  constexpr void __cordl_internal_set_agent_types_count(int32_t value);

  constexpr void __cordl_internal_set_areas_count(int32_t value);

  /// @brief Method .ctor, addr 0x6c59920, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectSettingsInformationAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProjectSettingsInformationAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectSettingsInformationAnalytic(ProjectSettingsInformationAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectSettingsInformationAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectSettingsInformationAnalytic(ProjectSettingsInformationAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22587 };

  /// @brief Field agent_types_count, offset: 0x2c, size: 0x4, def value: None
  int32_t ___agent_types_count;

  /// @brief Field areas_count, offset: 0x30, size: 0x4, def value: None
  int32_t ___areas_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::ProjectSettingsInformationAnalytic, ___agent_types_count) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::ProjectSettingsInformationAnalytic, ___areas_count) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::ProjectSettingsInformationAnalytic, 0x38>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::ProjectSettingsInformationAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::ProjectSettingsInformationAnalytic*, "UnityEditor.Analytics", "ProjectSettingsInformationAnalytic");
