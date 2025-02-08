#pragma once
// IWYU pragma private; include "JetBrains/Annotations/AssertionConditionType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssertionConditionType)
// Forward declare root types
namespace JetBrains::Annotations {
struct AssertionConditionType;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::AssertionConditionType);
// Dependencies
namespace JetBrains::Annotations {
// Is value type: true
// CS Name: JetBrains.Annotations.AssertionConditionType
struct CORDL_TYPE AssertionConditionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AssertionConditionType_Unwrapped
  enum struct __AssertionConditionType_Unwrapped : int32_t {
    __E_IS_TRUE = static_cast<int32_t>(0x0),
    __E_IS_FALSE = static_cast<int32_t>(0x1),
    __E_IS_NULL = static_cast<int32_t>(0x2),
    __E_IS_NOT_NULL = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AssertionConditionType_Unwrapped() const noexcept {
    return static_cast<__AssertionConditionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AssertionConditionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AssertionConditionType(int32_t value__) noexcept;

  /// @brief Field IS_FALSE value: I32(1)
  static ::JetBrains::Annotations::AssertionConditionType const IS_FALSE;

  /// @brief Field IS_NOT_NULL value: I32(3)
  static ::JetBrains::Annotations::AssertionConditionType const IS_NOT_NULL;

  /// @brief Field IS_NULL value: I32(2)
  static ::JetBrains::Annotations::AssertionConditionType const IS_NULL;

  /// @brief Field IS_TRUE value: I32(0)
  static ::JetBrains::Annotations::AssertionConditionType const IS_TRUE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18497 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::AssertionConditionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AssertionConditionType, 0x4>, "Size mismatch!");

} // namespace JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AssertionConditionType, "JetBrains.Annotations", "AssertionConditionType");
