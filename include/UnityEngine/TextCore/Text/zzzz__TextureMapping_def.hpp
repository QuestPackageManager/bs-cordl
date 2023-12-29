#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureMapping)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextureMapping;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextureMapping);
// Type: UnityEngine.TextCore.Text::TextureMapping
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13567))
// CS Name: ::UnityEngine.TextCore.Text::TextureMapping
struct CORDL_TYPE TextureMapping {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextureMapping_Unwrapped
  enum struct __TextureMapping_Unwrapped : int32_t {
    __E_Character = static_cast<int32_t>(0x0),
    __E_Line = static_cast<int32_t>(0x1),
    __E_Paragraph = static_cast<int32_t>(0x2),
    __E_MatchAspect = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextureMapping_Unwrapped() const noexcept {
    return static_cast<__TextureMapping_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextureMapping(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureMapping();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Character value: static_cast<int32_t>(0x0)
  static ::UnityEngine::TextCore::Text::TextureMapping const Character;

  /// @brief Field Line value: static_cast<int32_t>(0x1)
  static ::UnityEngine::TextCore::Text::TextureMapping const Line;

  /// @brief Field Paragraph value: static_cast<int32_t>(0x2)
  static ::UnityEngine::TextCore::Text::TextureMapping const Paragraph;

  /// @brief Field MatchAspect value: static_cast<int32_t>(0x3)
  static ::UnityEngine::TextCore::Text::TextureMapping const MatchAspect;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextureMapping, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextureMapping, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextureMapping, "UnityEngine.TextCore.Text", "TextureMapping");
