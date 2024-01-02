#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextFontWeight)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct TextFontWeight;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::TextFontWeight);
// Type: UnityEngine.TextCore.Text::TextFontWeight
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13677))
// CS Name: ::UnityEngine.TextCore.Text::TextFontWeight
struct CORDL_TYPE TextFontWeight {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextFontWeight_Unwrapped
  enum struct __TextFontWeight_Unwrapped : int32_t {
    __E_Thin = static_cast<int32_t>(0x64),
    __E_ExtraLight = static_cast<int32_t>(0xc8),
    __E_Light = static_cast<int32_t>(0x12c),
    __E_Regular = static_cast<int32_t>(0x190),
    __E_Medium = static_cast<int32_t>(0x1f4),
    __E_SemiBold = static_cast<int32_t>(0x258),
    __E_Bold = static_cast<int32_t>(0x2bc),
    __E_Heavy = static_cast<int32_t>(0x320),
    __E_Black = static_cast<int32_t>(0x384),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextFontWeight_Unwrapped() const noexcept {
    return static_cast<__TextFontWeight_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextFontWeight(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextFontWeight();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Thin value: static_cast<int32_t>(0x64)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Thin;

  /// @brief Field ExtraLight value: static_cast<int32_t>(0xc8)
  static ::UnityEngine::TextCore::Text::TextFontWeight const ExtraLight;

  /// @brief Field Light value: static_cast<int32_t>(0x12c)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Light;

  /// @brief Field Regular value: static_cast<int32_t>(0x190)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Regular;

  /// @brief Field Medium value: static_cast<int32_t>(0x1f4)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Medium;

  /// @brief Field SemiBold value: static_cast<int32_t>(0x258)
  static ::UnityEngine::TextCore::Text::TextFontWeight const SemiBold;

  /// @brief Field Bold value: static_cast<int32_t>(0x2bc)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Bold;

  /// @brief Field Heavy value: static_cast<int32_t>(0x320)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Heavy;

  /// @brief Field Black value: static_cast<int32_t>(0x384)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Black;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextFontWeight, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextFontWeight, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextFontWeight, "UnityEngine.TextCore.Text", "TextFontWeight");
