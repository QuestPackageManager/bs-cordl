#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/StyleEnumType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleEnumType)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct StyleEnumType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::StyleEnumType);
// Dependencies
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.StyleEnumType
struct CORDL_TYPE StyleEnumType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleEnumType_Unwrapped
  enum struct __StyleEnumType_Unwrapped : int32_t {
    __E_Align = static_cast<int32_t>(0x0),
    __E_BackgroundPositionKeyword = static_cast<int32_t>(0x1),
    __E_BackgroundSizeType = static_cast<int32_t>(0x2),
    __E_DisplayStyle = static_cast<int32_t>(0x3),
    __E_EasingMode = static_cast<int32_t>(0x4),
    __E_FlexDirection = static_cast<int32_t>(0x5),
    __E_FontStyle = static_cast<int32_t>(0x6),
    __E_Justify = static_cast<int32_t>(0x7),
    __E_Overflow = static_cast<int32_t>(0x8),
    __E_OverflowClipBox = static_cast<int32_t>(0x9),
    __E_OverflowInternal = static_cast<int32_t>(0xa),
    __E_Position = static_cast<int32_t>(0xb),
    __E_Repeat = static_cast<int32_t>(0xc),
    __E_RepeatXY = static_cast<int32_t>(0xd),
    __E_ScaleMode = static_cast<int32_t>(0xe),
    __E_TextAnchor = static_cast<int32_t>(0xf),
    __E_TextOverflow = static_cast<int32_t>(0x10),
    __E_TextOverflowPosition = static_cast<int32_t>(0x11),
    __E_TransformOriginOffset = static_cast<int32_t>(0x12),
    __E_Visibility = static_cast<int32_t>(0x13),
    __E_WhiteSpace = static_cast<int32_t>(0x14),
    __E_Wrap = static_cast<int32_t>(0x15),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleEnumType_Unwrapped() const noexcept {
    return static_cast<__StyleEnumType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleEnumType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleEnumType(int32_t value__) noexcept;

  /// @brief Field Align value: I32(0)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Align;

  /// @brief Field BackgroundPositionKeyword value: I32(1)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const BackgroundPositionKeyword;

  /// @brief Field BackgroundSizeType value: I32(2)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const BackgroundSizeType;

  /// @brief Field DisplayStyle value: I32(3)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const DisplayStyle;

  /// @brief Field EasingMode value: I32(4)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const EasingMode;

  /// @brief Field FlexDirection value: I32(5)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const FlexDirection;

  /// @brief Field FontStyle value: I32(6)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const FontStyle;

  /// @brief Field Justify value: I32(7)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Justify;

  /// @brief Field Overflow value: I32(8)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Overflow;

  /// @brief Field OverflowClipBox value: I32(9)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const OverflowClipBox;

  /// @brief Field OverflowInternal value: I32(10)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const OverflowInternal;

  /// @brief Field Position value: I32(11)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Position;

  /// @brief Field Repeat value: I32(12)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Repeat;

  /// @brief Field RepeatXY value: I32(13)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const RepeatXY;

  /// @brief Field ScaleMode value: I32(14)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const ScaleMode;

  /// @brief Field TextAnchor value: I32(15)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const TextAnchor;

  /// @brief Field TextOverflow value: I32(16)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const TextOverflow;

  /// @brief Field TextOverflowPosition value: I32(17)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const TextOverflowPosition;

  /// @brief Field TransformOriginOffset value: I32(18)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const TransformOriginOffset;

  /// @brief Field Visibility value: I32(19)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Visibility;

  /// @brief Field WhiteSpace value: I32(20)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const WhiteSpace;

  /// @brief Field Wrap value: I32(21)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Wrap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6447 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleEnumType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleEnumType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleEnumType, "UnityEngine.UIElements.StyleSheets", "StyleEnumType");
