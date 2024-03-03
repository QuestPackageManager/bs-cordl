#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextElementType)
// Forward declare root types
namespace TMPro {
struct TextElementType;
}
// Write type traits
MARK_VAL_T(::TMPro::TextElementType);
// Type: TMPro::TextElementType
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::TextElementType
struct CORDL_TYPE TextElementType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __TextElementType_Unwrapped
  enum struct __TextElementType_Unwrapped : uint8_t {
    __E_Character = static_cast<uint8_t>(0x1u),
    __E_Sprite = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextElementType_Unwrapped() const noexcept {
    return static_cast<__TextElementType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextElementType();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TextElementType(uint8_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  /// @brief Field Character value: static_cast<uint8_t>(0x1u)
  static ::TMPro::TextElementType const Character;

  /// @brief Field Sprite value: static_cast<uint8_t>(0x2u)
  static ::TMPro::TextElementType const Sprite;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextElementType, 0x1>, "Size mismatch!");

static_assert(offsetof(::TMPro::TextElementType, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextElementType, "TMPro", "TextElementType");
