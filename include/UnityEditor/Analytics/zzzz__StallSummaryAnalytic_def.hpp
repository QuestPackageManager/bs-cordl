#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/StallSummaryAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StallSummaryAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class StallSummaryAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::StallSummaryAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.StallSummaryAnalytic
class CORDL_TYPE StallSummaryAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field Duration, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Duration, put = __cordl_internal_set_Duration)) double_t Duration;

  /// @brief Method CreateStallSummaryAnalytic, addr 0x6c5a540, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::StallSummaryAnalytic* CreateStallSummaryAnalytic();

  static inline ::UnityEditor::Analytics::StallSummaryAnalytic* New_ctor();

  constexpr double_t const& __cordl_internal_get_Duration() const;

  constexpr double_t& __cordl_internal_get_Duration();

  constexpr void __cordl_internal_set_Duration(double_t value);

  /// @brief Method .ctor, addr 0x6c5a4c8, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StallSummaryAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StallSummaryAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StallSummaryAnalytic(StallSummaryAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StallSummaryAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StallSummaryAnalytic(StallSummaryAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22601 };

  /// @brief Field Duration, offset: 0x30, size: 0x8, def value: None
  double_t ___Duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::StallSummaryAnalytic, ___Duration) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::StallSummaryAnalytic, 0x38>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::StallSummaryAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::StallSummaryAnalytic*, "UnityEditor.Analytics", "StallSummaryAnalytic");
