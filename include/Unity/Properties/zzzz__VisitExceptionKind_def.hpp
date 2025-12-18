#pragma once
// IWYU pragma private; include "Unity/Properties/VisitExceptionKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VisitExceptionKind)
// Forward declare root types
namespace Unity::Properties {
struct VisitExceptionKind;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::VisitExceptionKind);
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.VisitExceptionKind
struct CORDL_TYPE VisitExceptionKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VisitExceptionKind_Unwrapped
  enum struct __VisitExceptionKind_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Internal = static_cast<int32_t>(0x1),
    __E_Visitor = static_cast<int32_t>(0x2),
    __E_All = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VisitExceptionKind_Unwrapped() const noexcept {
    return static_cast<__VisitExceptionKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VisitExceptionKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VisitExceptionKind(int32_t value__) noexcept;

  /// @brief Field All value: I32(3)
  static ::Unity::Properties::VisitExceptionKind const All;

  /// @brief Field Internal value: I32(1)
  static ::Unity::Properties::VisitExceptionKind const Internal;

  /// @brief Field None value: I32(0)
  static ::Unity::Properties::VisitExceptionKind const None;

  /// @brief Field Visitor value: I32(2)
  static ::Unity::Properties::VisitExceptionKind const Visitor;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19321 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::VisitExceptionKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::VisitExceptionKind, 0x4>, "Size mismatch!");

} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::VisitExceptionKind, "Unity.Properties", "VisitExceptionKind");
