#pragma once
// IWYU pragma private; include "TMPro/TMP_TextElementType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_TextElementType)
// Forward declare root types
namespace TMPro {
struct TMP_TextElementType;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_TextElementType);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.TMP_TextElementType
struct CORDL_TYPE TMP_TextElementType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TMP_TextElementType_Unwrapped
  enum struct __TMP_TextElementType_Unwrapped : int32_t {
    __E_Character = static_cast<int32_t>(0x0),
    __E_Sprite = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TMP_TextElementType_Unwrapped() const noexcept {
    return static_cast<__TMP_TextElementType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_TextElementType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TMP_TextElementType(int32_t value__) noexcept;

  /// @brief Field Character value: I32(0)
  static ::TMPro::TMP_TextElementType const Character;

  /// @brief Field Sprite value: I32(1)
  static ::TMPro::TMP_TextElementType const Sprite;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14550 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::TMP_TextElementType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::TMP_TextElementType, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextElementType, "TMPro", "TMP_TextElementType");
