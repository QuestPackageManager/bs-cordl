#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/TestAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TestAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class TestAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::TestAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.TestAnalytic
class CORDL_TYPE TestAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field param, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param)) int32_t param;

  /// @brief Method CreateTestAnalytic, addr 0x6c5a6d8, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::TestAnalytic* CreateTestAnalytic();

  static inline ::UnityEditor::Analytics::TestAnalytic* New_ctor();

  constexpr int32_t const& __cordl_internal_get_param() const;

  constexpr int32_t& __cordl_internal_get_param();

  constexpr void __cordl_internal_set_param(int32_t value);

  /// @brief Method .ctor, addr 0x6c5a660, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TestAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TestAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TestAnalytic(TestAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TestAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TestAnalytic(TestAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22603 };

  /// @brief Field param, offset: 0x2c, size: 0x4, def value: None
  int32_t ___param;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::TestAnalytic, ___param) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::TestAnalytic, 0x30>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::TestAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::TestAnalytic*, "UnityEditor.Analytics", "TestAnalytic");
