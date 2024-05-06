#pragma once
// IWYU pragma private; include "TMPro/TextureMappingOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureMappingOptions)
// Forward declare root types
namespace TMPro {
struct TextureMappingOptions;
}
// Write type traits
MARK_VAL_T(::TMPro::TextureMappingOptions);
// Type: TMPro::TextureMappingOptions
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// CS Name: ::TMPro::TextureMappingOptions
struct CORDL_TYPE TextureMappingOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureMappingOptions_Unwrapped
  enum struct __TextureMappingOptions_Unwrapped : int32_t {
    __E_Character = static_cast<int32_t>(0x0),
    __E_Line = static_cast<int32_t>(0x1),
    __E_Paragraph = static_cast<int32_t>(0x2),
    __E_MatchAspect = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureMappingOptions_Unwrapped() const noexcept {
    return static_cast<__TextureMappingOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureMappingOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureMappingOptions(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Character value: static_cast<int32_t>(0x0)
  static ::TMPro::TextureMappingOptions const Character;

  /// @brief Field Line value: static_cast<int32_t>(0x1)
  static ::TMPro::TextureMappingOptions const Line;

  /// @brief Field MatchAspect value: static_cast<int32_t>(0x3)
  static ::TMPro::TextureMappingOptions const MatchAspect;

  /// @brief Field Paragraph value: static_cast<int32_t>(0x2)
  static ::TMPro::TextureMappingOptions const Paragraph;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextureMappingOptions, 0x4>, "Size mismatch!");

static_assert(offsetof(::TMPro::TextureMappingOptions, value__) == 0x0, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextureMappingOptions, "TMPro", "TextureMappingOptions");
