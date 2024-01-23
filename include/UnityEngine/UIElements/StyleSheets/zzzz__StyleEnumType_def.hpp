#pragma once
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
// Type: UnityEngine.UIElements.StyleSheets::StyleEnumType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7486))
// CS Name: ::UnityEngine.UIElements.StyleSheets::StyleEnumType
struct CORDL_TYPE StyleEnumType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StyleEnumType_Unwrapped
  enum struct __StyleEnumType_Unwrapped : int32_t {
    __E_Align = static_cast<int32_t>(0x0),
    __E_DisplayStyle = static_cast<int32_t>(0x1),
    __E_EasingMode = static_cast<int32_t>(0x2),
    __E_FlexDirection = static_cast<int32_t>(0x3),
    __E_FontStyle = static_cast<int32_t>(0x4),
    __E_Justify = static_cast<int32_t>(0x5),
    __E_Overflow = static_cast<int32_t>(0x6),
    __E_OverflowClipBox = static_cast<int32_t>(0x7),
    __E_OverflowInternal = static_cast<int32_t>(0x8),
    __E_Position = static_cast<int32_t>(0x9),
    __E_ScaleMode = static_cast<int32_t>(0xa),
    __E_TextAnchor = static_cast<int32_t>(0xb),
    __E_TextOverflow = static_cast<int32_t>(0xc),
    __E_TextOverflowPosition = static_cast<int32_t>(0xd),
    __E_TransformOriginOffset = static_cast<int32_t>(0xe),
    __E_Visibility = static_cast<int32_t>(0xf),
    __E_WhiteSpace = static_cast<int32_t>(0x10),
    __E_Wrap = static_cast<int32_t>(0x11),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StyleEnumType_Unwrapped() const noexcept {
    return static_cast<__StyleEnumType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StyleEnumType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleEnumType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Align value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Align;

  /// @brief Field DisplayStyle value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const DisplayStyle;

  /// @brief Field EasingMode value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const EasingMode;

  /// @brief Field FlexDirection value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const FlexDirection;

  /// @brief Field FontStyle value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const FontStyle;

  /// @brief Field Justify value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Justify;

  /// @brief Field Overflow value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Overflow;

  /// @brief Field OverflowClipBox value: static_cast<int32_t>(0x7)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const OverflowClipBox;

  /// @brief Field OverflowInternal value: static_cast<int32_t>(0x8)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const OverflowInternal;

  /// @brief Field Position value: static_cast<int32_t>(0x9)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Position;

  /// @brief Field ScaleMode value: static_cast<int32_t>(0xa)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const ScaleMode;

  /// @brief Field TextAnchor value: static_cast<int32_t>(0xb)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const TextAnchor;

  /// @brief Field TextOverflow value: static_cast<int32_t>(0xc)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const TextOverflow;

  /// @brief Field TextOverflowPosition value: static_cast<int32_t>(0xd)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const TextOverflowPosition;

  /// @brief Field TransformOriginOffset value: static_cast<int32_t>(0xe)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const TransformOriginOffset;

  /// @brief Field Visibility value: static_cast<int32_t>(0xf)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Visibility;

  /// @brief Field WhiteSpace value: static_cast<int32_t>(0x10)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const WhiteSpace;

  /// @brief Field Wrap value: static_cast<int32_t>(0x11)
  static ::UnityEngine::UIElements::StyleSheets::StyleEnumType const Wrap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::StyleEnumType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::StyleEnumType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleEnumType, "UnityEngine.UIElements.StyleSheets", "StyleEnumType");
