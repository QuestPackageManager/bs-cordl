#pragma once
// IWYU pragma private; include "System/ParseFailureKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParseFailureKind)
// Forward declare root types
namespace System {
struct ParseFailureKind;
}
// Write type traits
MARK_VAL_T(::System::ParseFailureKind);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.ParseFailureKind
struct CORDL_TYPE ParseFailureKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ParseFailureKind_Unwrapped
  enum struct __ParseFailureKind_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ArgumentNull = static_cast<int32_t>(0x1),
    __E_Format = static_cast<int32_t>(0x2),
    __E_FormatWithParameter = static_cast<int32_t>(0x3),
    __E_FormatWithOriginalDateTime = static_cast<int32_t>(0x4),
    __E_FormatWithFormatSpecifier = static_cast<int32_t>(0x5),
    __E_FormatWithOriginalDateTimeAndParameter = static_cast<int32_t>(0x6),
    __E_FormatBadDateTimeCalendar = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ParseFailureKind_Unwrapped() const noexcept {
    return static_cast<__ParseFailureKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseFailureKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ParseFailureKind(int32_t value__) noexcept;

  /// @brief Field ArgumentNull value: I32(1)
  static ::System::ParseFailureKind const ArgumentNull;

  /// @brief Field Format value: I32(2)
  static ::System::ParseFailureKind const Format;

  /// @brief Field FormatBadDateTimeCalendar value: I32(7)
  static ::System::ParseFailureKind const FormatBadDateTimeCalendar;

  /// @brief Field FormatWithFormatSpecifier value: I32(5)
  static ::System::ParseFailureKind const FormatWithFormatSpecifier;

  /// @brief Field FormatWithOriginalDateTime value: I32(4)
  static ::System::ParseFailureKind const FormatWithOriginalDateTime;

  /// @brief Field FormatWithOriginalDateTimeAndParameter value: I32(6)
  static ::System::ParseFailureKind const FormatWithOriginalDateTimeAndParameter;

  /// @brief Field FormatWithParameter value: I32(3)
  static ::System::ParseFailureKind const FormatWithParameter;

  /// @brief Field None value: I32(0)
  static ::System::ParseFailureKind const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2399 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::ParseFailureKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ParseFailureKind, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::ParseFailureKind, "System", "ParseFailureKind");
