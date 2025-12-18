#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextFontWeight.hpp"
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
// Dependencies
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.TextFontWeight
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

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextFontWeight();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextFontWeight(int32_t value__) noexcept;

  /// @brief Field Black value: I32(900)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Black;

  /// @brief Field Bold value: I32(700)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Bold;

  /// @brief Field ExtraLight value: I32(200)
  static ::UnityEngine::TextCore::Text::TextFontWeight const ExtraLight;

  /// @brief Field Heavy value: I32(800)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Heavy;

  /// @brief Field Light value: I32(300)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Light;

  /// @brief Field Medium value: I32(500)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Medium;

  /// @brief Field Regular value: I32(400)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Regular;

  /// @brief Field SemiBold value: I32(600)
  static ::UnityEngine::TextCore::Text::TextFontWeight const SemiBold;

  /// @brief Field Thin value: I32(100)
  static ::UnityEngine::TextCore::Text::TextFontWeight const Thin;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17191 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextFontWeight, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextFontWeight, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextFontWeight, "UnityEngine.TextCore.Text", "TextFontWeight");
