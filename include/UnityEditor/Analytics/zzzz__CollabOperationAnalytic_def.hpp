#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/CollabOperationAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CollabOperationAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class CollabOperationAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::CollabOperationAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.CollabOperationAnalytic
class CORDL_TYPE CollabOperationAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field category, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_category, put = __cordl_internal_set_category)) ::StringW category;

  /// @brief Field duration, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) int64_t duration;

  /// @brief Field operation, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_operation, put = __cordl_internal_set_operation)) ::StringW operation;

  /// @brief Field result, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result)) ::StringW result;

  /// @brief Field start_ts, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_start_ts, put = __cordl_internal_set_start_ts)) int64_t start_ts;

  /// @brief Method CreateCollabOperationAnalytic, addr 0x6bf0718, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::CollabOperationAnalytic* CreateCollabOperationAnalytic();

  static inline ::UnityEditor::Analytics::CollabOperationAnalytic* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_category() const;

  constexpr ::StringW& __cordl_internal_get_category();

  constexpr int64_t const& __cordl_internal_get_duration() const;

  constexpr int64_t& __cordl_internal_get_duration();

  constexpr ::StringW const& __cordl_internal_get_operation() const;

  constexpr ::StringW& __cordl_internal_get_operation();

  constexpr ::StringW const& __cordl_internal_get_result() const;

  constexpr ::StringW& __cordl_internal_get_result();

  constexpr int64_t const& __cordl_internal_get_start_ts() const;

  constexpr int64_t& __cordl_internal_get_start_ts();

  constexpr void __cordl_internal_set_category(::StringW value);

  constexpr void __cordl_internal_set_duration(int64_t value);

  constexpr void __cordl_internal_set_operation(::StringW value);

  constexpr void __cordl_internal_set_result(::StringW value);

  constexpr void __cordl_internal_set_start_ts(int64_t value);

  /// @brief Method .ctor, addr 0x6bf06a0, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CollabOperationAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CollabOperationAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CollabOperationAnalytic(CollabOperationAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CollabOperationAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CollabOperationAnalytic(CollabOperationAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22555 };

  /// @brief Field category, offset: 0x30, size: 0x8, def value: None
  ::StringW ___category;

  /// @brief Field operation, offset: 0x38, size: 0x8, def value: None
  ::StringW ___operation;

  /// @brief Field result, offset: 0x40, size: 0x8, def value: None
  ::StringW ___result;

  /// @brief Field start_ts, offset: 0x48, size: 0x8, def value: None
  int64_t ___start_ts;

  /// @brief Field duration, offset: 0x50, size: 0x8, def value: None
  int64_t ___duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::CollabOperationAnalytic, ___category) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::CollabOperationAnalytic, ___operation) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::CollabOperationAnalytic, ___result) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::CollabOperationAnalytic, ___start_ts) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::CollabOperationAnalytic, ___duration) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::CollabOperationAnalytic, 0x58>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::CollabOperationAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::CollabOperationAnalytic*, "UnityEditor.Analytics", "CollabOperationAnalytic");
