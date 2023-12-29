#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerationSettings)
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct TextGenerationSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextGenerationSettings);
// Type: UnityEngine::TextGenerationSettings
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 105, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(15795)), TypeDefinitionIndex(TypeDefinitionIndex(10170)),
// TypeDefinitionIndex(TypeDefinitionIndex(15793)), TypeDefinitionIndex(TypeDefinitionIndex(15794)), TypeDefinitionIndex(TypeDefinitionIndex(15788))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15790)) CS Name: ::UnityEngine::TextGenerationSettings
struct CORDL_TYPE TextGenerationSettings {
public:
  // Declarations
  /// @brief Method CompareColors addr 0x2be4708 size 0x138 virtual false final false
  inline bool CompareColors(::UnityEngine::Color left, ::UnityEngine::Color right);

  /// @brief Method CompareVector2 addr 0x2be4840 size 0xc8 virtual false final false
  inline bool CompareVector2(::UnityEngine::Vector2 left, ::UnityEngine::Vector2 right);

  /// @brief Method Equals addr 0x2be4908 size 0x220 virtual false final false
  inline bool Equals(::UnityEngine::TextGenerationSettings other);

  // Ctor Parameters [CppParam { name: "font", ty: "::UnityEngine::Font*", modifiers: "", def_value: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None },
  // CppParam { name: "fontSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineSpacing", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "richText", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "scaleFactor", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "fontStyle", ty: "::UnityEngine::FontStyle", modifiers:
  // "", def_value: None }, CppParam { name: "textAnchor", ty: "::UnityEngine::TextAnchor", modifiers: "", def_value: None }, CppParam { name: "alignByGeometry", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "resizeTextForBestFit", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resizeTextMinSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "resizeTextMaxSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "updateBounds", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "verticalOverflow", ty:
  // "::UnityEngine::VerticalWrapMode", modifiers: "", def_value: None }, CppParam { name: "horizontalOverflow", ty: "::UnityEngine::HorizontalWrapMode", modifiers: "", def_value: None }, CppParam {
  // name: "generationExtents", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pivot", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam {
  // name: "generateOutOfBounds", ty: "bool", modifiers: "", def_value: None }]
  constexpr TextGenerationSettings(::UnityEngine::Font* font, ::UnityEngine::Color color, int32_t fontSize, float_t lineSpacing, bool richText, float_t scaleFactor, ::UnityEngine::FontStyle fontStyle,
                                   ::UnityEngine::TextAnchor textAnchor, bool alignByGeometry, bool resizeTextForBestFit, int32_t resizeTextMinSize, int32_t resizeTextMaxSize, bool updateBounds,
                                   ::UnityEngine::VerticalWrapMode verticalOverflow, ::UnityEngine::HorizontalWrapMode horizontalOverflow, ::UnityEngine::Vector2 generationExtents,
                                   ::UnityEngine::Vector2 pivot, bool generateOutOfBounds) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGenerationSettings();

  /// @brief Field font, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Font* font;

  /// @brief Field color, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::Color color;

  /// @brief Field fontSize, offset: 0x18, size: 0x4, def value: None
  int32_t fontSize;

  /// @brief Field lineSpacing, offset: 0x1c, size: 0x4, def value: None
  float_t lineSpacing;

  /// @brief Field richText, offset: 0x20, size: 0x1, def value: None
  bool richText;

  /// @brief Field scaleFactor, offset: 0x24, size: 0x4, def value: None
  float_t scaleFactor;

  /// @brief Field fontStyle, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::FontStyle fontStyle;

  /// @brief Field textAnchor, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::TextAnchor textAnchor;

  /// @brief Field alignByGeometry, offset: 0x30, size: 0x1, def value: None
  bool alignByGeometry;

  /// @brief Field resizeTextForBestFit, offset: 0x31, size: 0x1, def value: None
  bool resizeTextForBestFit;

  /// @brief Field resizeTextMinSize, offset: 0x34, size: 0x4, def value: None
  int32_t resizeTextMinSize;

  /// @brief Field resizeTextMaxSize, offset: 0x38, size: 0x4, def value: None
  int32_t resizeTextMaxSize;

  /// @brief Field updateBounds, offset: 0x3c, size: 0x1, def value: None
  bool updateBounds;

  /// @brief Field verticalOverflow, offset: 0x40, size: 0x4, def value: None
  ::UnityEngine::VerticalWrapMode verticalOverflow;

  /// @brief Field horizontalOverflow, offset: 0x44, size: 0x4, def value: None
  ::UnityEngine::HorizontalWrapMode horizontalOverflow;

  /// @brief Field generationExtents, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 generationExtents;

  /// @brief Field pivot, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 pivot;

  /// @brief Field generateOutOfBounds, offset: 0x58, size: 0x1, def value: None
  bool generateOutOfBounds;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextGenerationSettings, 0x60>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, font) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, color) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, fontSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, lineSpacing) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, richText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, scaleFactor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, fontStyle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, textAnchor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, alignByGeometry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, resizeTextForBestFit) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, resizeTextMinSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, resizeTextMaxSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, updateBounds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, verticalOverflow) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, horizontalOverflow) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, generationExtents) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, pivot) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextGenerationSettings, generateOutOfBounds) == 0x58, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextGenerationSettings, "UnityEngine", "TextGenerationSettings");
