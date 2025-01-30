#pragma once
// IWYU pragma private; include "TMPro/TagValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TagValueType)
// Forward declare root types
namespace TMPro {
struct TagValueType;
}
// Write type traits
MARK_VAL_T(::TMPro::TagValueType);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TagValueType
struct CORDL_TYPE TagValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TagValueType_Unwrapped
  enum struct __TagValueType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_NumericalValue = static_cast<int32_t>(0x1),
    __E_StringValue = static_cast<int32_t>(0x2),
    __E_ColorValue = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TagValueType_Unwrapped() const noexcept {
    return static_cast<__TagValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TagValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TagValueType(int32_t value__) noexcept;

  /// @brief Field ColorValue value: I32(4)
  static ::TMPro::TagValueType const ColorValue;

  /// @brief Field None value: I32(0)
  static ::TMPro::TagValueType const None;

  /// @brief Field NumericalValue value: I32(1)
  static ::TMPro::TagValueType const NumericalValue;

  /// @brief Field StringValue value: I32(2)
  static ::TMPro::TagValueType const StringValue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14529 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TagValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TagValueType, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TagValueType, "TMPro", "TagValueType");
