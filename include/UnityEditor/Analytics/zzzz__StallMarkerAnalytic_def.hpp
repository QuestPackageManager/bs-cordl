#pragma once
// IWYU pragma private; include "UnityEditor/Analytics/StallMarkerAnalytic.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Analytics/zzzz__AnalyticsEventBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StallMarkerAnalytic)
// Forward declare root types
namespace UnityEditor::Analytics {
class StallMarkerAnalytic;
}
// Write type traits
MARK_REF_PTR_T(::UnityEditor::Analytics::StallMarkerAnalytic);
// Dependencies UnityEngine.Analytics.AnalyticsEventBase
namespace UnityEditor::Analytics {
// Is value type: false
// CS Name: UnityEditor.Analytics.StallMarkerAnalytic
class CORDL_TYPE StallMarkerAnalytic : public ::UnityEngine::Analytics::AnalyticsEventBase {
public:
  // Declarations
  /// @brief Field Duration, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Duration, put = __cordl_internal_set_Duration)) double_t Duration;

  /// @brief Field HasProgressMarkup, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_HasProgressMarkup, put = __cordl_internal_set_HasProgressMarkup)) bool HasProgressMarkup;

  /// @brief Field Name, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Method CreateStallMarkerAnalytic, addr 0x6bf1788, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEditor::Analytics::StallMarkerAnalytic* CreateStallMarkerAnalytic();

  static inline ::UnityEditor::Analytics::StallMarkerAnalytic* New_ctor();

  constexpr double_t const& __cordl_internal_get_Duration() const;

  constexpr double_t& __cordl_internal_get_Duration();

  constexpr bool const& __cordl_internal_get_HasProgressMarkup() const;

  constexpr bool& __cordl_internal_get_HasProgressMarkup();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr void __cordl_internal_set_Duration(double_t value);

  constexpr void __cordl_internal_set_HasProgressMarkup(bool value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  /// @brief Method .ctor, addr 0x6bf1710, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StallMarkerAnalytic();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StallMarkerAnalytic", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StallMarkerAnalytic(StallMarkerAnalytic&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StallMarkerAnalytic", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StallMarkerAnalytic(StallMarkerAnalytic const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22575 };

  /// @brief Field Name, offset: 0x30, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field HasProgressMarkup, offset: 0x38, size: 0x1, def value: None
  bool ___HasProgressMarkup;

  /// @brief Field Duration, offset: 0x40, size: 0x8, def value: None
  double_t ___Duration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEditor::Analytics::StallMarkerAnalytic, ___Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::StallMarkerAnalytic, ___HasProgressMarkup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEditor::Analytics::StallMarkerAnalytic, ___Duration) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEditor::Analytics::StallMarkerAnalytic, 0x48>, "Size mismatch!");

} // namespace UnityEditor::Analytics
NEED_NO_BOX(::UnityEditor::Analytics::StallMarkerAnalytic);
DEFINE_IL2CPP_ARG_TYPE(::UnityEditor::Analytics::StallMarkerAnalytic*, "UnityEditor.Analytics", "StallMarkerAnalytic");
