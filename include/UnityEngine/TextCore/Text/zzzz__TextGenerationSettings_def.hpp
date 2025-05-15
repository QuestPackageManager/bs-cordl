#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerationSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextInputSource_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextWrappingMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextureMapping_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__VertexSortingOrder_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerationSettings)
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class SpriteAsset;
}
namespace UnityEngine::TextCore::Text {
class TextColorGradient;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
namespace UnityEngine::TextCore::Text {
class TextStyleSheet;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextGenerationSettings);
// Dependencies System.IEquatable`1<T>, System.Object, UnityEngine.Color, UnityEngine.Rect, UnityEngine.TextCore.Text.FontStyles, UnityEngine.TextCore.Text.TextAlignment,
// UnityEngine.TextCore.Text.TextFontWeight, UnityEngine.TextCore.Text.TextInputSource, UnityEngine.TextCore.Text.TextOverflowMode, UnityEngine.TextCore.Text.TextWrappingMode,
// UnityEngine.TextCore.Text.TextureMapping, UnityEngine.TextCore.Text.VertexSortingOrder, UnityEngine.Vector4
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextGenerationSettings
class CORDL_TYPE TextGenerationSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field autoSize, offset 0xa8, size 0x1
  __declspec(property(get = __cordl_internal_get_autoSize, put = __cordl_internal_set_autoSize)) bool autoSize;

  /// @brief Field charWidthMaxAdj, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_charWidthMaxAdj, put = __cordl_internal_set_charWidthMaxAdj)) float_t charWidthMaxAdj;

  /// @brief Field characterSpacing, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_characterSpacing, put = __cordl_internal_set_characterSpacing)) float_t characterSpacing;

  /// @brief Field color, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field enableKerning, offset 0xb4, size 0x1
  __declspec(property(get = __cordl_internal_get_enableKerning, put = __cordl_internal_set_enableKerning)) bool enableKerning;

  /// @brief Field extraPadding, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_extraPadding, put = __cordl_internal_set_extraPadding)) float_t extraPadding;

  /// @brief Field firstVisibleCharacter, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_firstVisibleCharacter, put = __cordl_internal_set_firstVisibleCharacter)) int32_t firstVisibleCharacter;

  /// @brief Field fontAsset, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_fontAsset, put = __cordl_internal_set_fontAsset)) ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief Field fontColorGradient, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_fontColorGradient, put = __cordl_internal_set_fontColorGradient)) ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> fontColorGradient;

  /// @brief Field fontColorGradientPreset, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_fontColorGradientPreset, put = __cordl_internal_set_fontColorGradientPreset)) ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>
      fontColorGradientPreset;

  /// @brief Field fontSize, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_fontSize, put = __cordl_internal_set_fontSize)) float_t fontSize;

  /// @brief Field fontSizeMax, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_fontSizeMax, put = __cordl_internal_set_fontSizeMax)) float_t fontSizeMax;

  /// @brief Field fontSizeMin, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_fontSizeMin, put = __cordl_internal_set_fontSizeMin)) float_t fontSizeMin;

  /// @brief Field fontStyle, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_fontStyle, put = __cordl_internal_set_fontStyle)) ::UnityEngine::TextCore::Text::FontStyles fontStyle;

  /// @brief Field fontWeight, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_fontWeight, put = __cordl_internal_set_fontWeight)) ::UnityEngine::TextCore::Text::TextFontWeight fontWeight;

  /// @brief Field geometrySortingOrder, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_geometrySortingOrder, put = __cordl_internal_set_geometrySortingOrder)) ::UnityEngine::TextCore::Text::VertexSortingOrder geometrySortingOrder;

  /// @brief Field horizontalMapping, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_horizontalMapping, put = __cordl_internal_set_horizontalMapping)) ::UnityEngine::TextCore::Text::TextureMapping horizontalMapping;

  /// @brief Field inputSource, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_inputSource, put = __cordl_internal_set_inputSource)) ::UnityEngine::TextCore::Text::TextInputSource inputSource;

  /// @brief Field inverseYAxis, offset 0x104, size 0x1
  __declspec(property(get = __cordl_internal_get_inverseYAxis, put = __cordl_internal_set_inverseYAxis)) bool inverseYAxis;

  /// @brief Field isOrthographic, offset 0xbd, size 0x1
  __declspec(property(get = __cordl_internal_get_isOrthographic, put = __cordl_internal_set_isOrthographic)) bool isOrthographic;

  /// @brief Field isRightToLeft, offset 0xb6, size 0x1
  __declspec(property(get = __cordl_internal_get_isRightToLeft, put = __cordl_internal_set_isRightToLeft)) bool isRightToLeft;

  /// @brief Field lineSpacing, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_lineSpacing, put = __cordl_internal_set_lineSpacing)) float_t lineSpacing;

  /// @brief Field lineSpacingMax, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get_lineSpacingMax, put = __cordl_internal_set_lineSpacingMax)) float_t lineSpacingMax;

  /// @brief Field margins, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_margins, put = __cordl_internal_set_margins)) ::UnityEngine::Vector4 margins;

  /// @brief Field material, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field maxVisibleCharacters, offset 0xd8, size 0x4
  __declspec(property(get = __cordl_internal_get_maxVisibleCharacters, put = __cordl_internal_set_maxVisibleCharacters)) int32_t maxVisibleCharacters;

  /// @brief Field maxVisibleLines, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_maxVisibleLines, put = __cordl_internal_set_maxVisibleLines)) int32_t maxVisibleLines;

  /// @brief Field maxVisibleWords, offset 0xdc, size 0x4
  __declspec(property(get = __cordl_internal_get_maxVisibleWords, put = __cordl_internal_set_maxVisibleWords)) int32_t maxVisibleWords;

  /// @brief Field overflowMode, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_overflowMode, put = __cordl_internal_set_overflowMode)) ::UnityEngine::TextCore::Text::TextOverflowMode overflowMode;

  /// @brief Field overrideRichTextColors, offset 0xa1, size 0x1
  __declspec(property(get = __cordl_internal_get_overrideRichTextColors, put = __cordl_internal_set_overrideRichTextColors)) bool overrideRichTextColors;

  /// @brief Field pageToDisplay, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_pageToDisplay, put = __cordl_internal_set_pageToDisplay)) int32_t pageToDisplay;

  /// @brief Field paragraphSpacing, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get_paragraphSpacing, put = __cordl_internal_set_paragraphSpacing)) float_t paragraphSpacing;

  /// @brief Field parseControlCharacters, offset 0xbc, size 0x1
  __declspec(property(get = __cordl_internal_get_parseControlCharacters, put = __cordl_internal_set_parseControlCharacters)) bool parseControlCharacters;

  /// @brief Field richText, offset 0xb5, size 0x1
  __declspec(property(get = __cordl_internal_get_richText, put = __cordl_internal_set_richText)) bool richText;

  /// @brief Field scale, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_scale, put = __cordl_internal_set_scale)) float_t scale;

  /// @brief Field screenRect, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_screenRect, put = __cordl_internal_set_screenRect)) ::UnityEngine::Rect screenRect;

  /// @brief Field shouldConvertToLinearSpace, offset 0xa2, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldConvertToLinearSpace, put = __cordl_internal_set_shouldConvertToLinearSpace)) bool shouldConvertToLinearSpace;

  /// @brief Field spriteAsset, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_spriteAsset, put = __cordl_internal_set_spriteAsset)) ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> spriteAsset;

  /// @brief Field styleSheet, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_styleSheet, put = __cordl_internal_set_styleSheet)) ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> styleSheet;

  /// @brief Field tagNoParsing, offset 0xbe, size 0x1
  __declspec(property(get = __cordl_internal_get_tagNoParsing, put = __cordl_internal_set_tagNoParsing)) bool tagNoParsing;

  /// @brief Field text, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::StringW text;

  /// @brief Field textAlignment, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_textAlignment, put = __cordl_internal_set_textAlignment)) ::UnityEngine::TextCore::Text::TextAlignment textAlignment;

  /// @brief Field textSettings, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_textSettings, put = __cordl_internal_set_textSettings)) ::UnityW<::UnityEngine::TextCore::Text::TextSettings> textSettings;

  /// @brief Field textWrappingMode, offset 0xd4, size 0x4
  __declspec(property(get = __cordl_internal_get_textWrappingMode, put = __cordl_internal_set_textWrappingMode)) ::UnityEngine::TextCore::Text::TextWrappingMode textWrappingMode;

  /// @brief Field tintSprites, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_tintSprites, put = __cordl_internal_set_tintSprites)) bool tintSprites;

  /// @brief Field useMaxVisibleDescender, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get_useMaxVisibleDescender, put = __cordl_internal_set_useMaxVisibleDescender)) bool useMaxVisibleDescender;

  /// @brief Field uvLineOffset, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_uvLineOffset, put = __cordl_internal_set_uvLineOffset)) float_t uvLineOffset;

  /// @brief Field verticalMapping, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_verticalMapping, put = __cordl_internal_set_verticalMapping)) ::UnityEngine::TextCore::Text::TextureMapping verticalMapping;

  /// @brief Field wordSpacing, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_wordSpacing, put = __cordl_internal_set_wordSpacing)) float_t wordSpacing;

  /// @brief Field wordWrap, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_wordWrap, put = __cordl_internal_set_wordWrap)) bool wordWrap;

  /// @brief Field wordWrappingRatio, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_wordWrappingRatio, put = __cordl_internal_set_wordWrappingRatio)) float_t wordWrappingRatio;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*() noexcept;

  /// @brief Method Equals, addr 0x49335a8, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4933100, size 0x4a8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextCore::Text::TextGenerationSettings* other);

  /// @brief Method GetHashCode, addr 0x49336b4, size 0x4d0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TextCore::Text::TextGenerationSettings* New_ctor();

  /// @brief Method ToString, addr 0x4933b8c, size 0x1aa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr bool const& __cordl_internal_get_autoSize() const;

  constexpr bool& __cordl_internal_get_autoSize();

  constexpr float_t const& __cordl_internal_get_charWidthMaxAdj() const;

  constexpr float_t& __cordl_internal_get_charWidthMaxAdj();

  constexpr float_t const& __cordl_internal_get_characterSpacing() const;

  constexpr float_t& __cordl_internal_get_characterSpacing();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr bool const& __cordl_internal_get_enableKerning() const;

  constexpr bool& __cordl_internal_get_enableKerning();

  constexpr float_t const& __cordl_internal_get_extraPadding() const;

  constexpr float_t& __cordl_internal_get_extraPadding();

  constexpr int32_t const& __cordl_internal_get_firstVisibleCharacter() const;

  constexpr int32_t& __cordl_internal_get_firstVisibleCharacter();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset> const& __cordl_internal_get_fontAsset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset>& __cordl_internal_get_fontAsset();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> const& __cordl_internal_get_fontColorGradient() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>& __cordl_internal_get_fontColorGradient();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> const& __cordl_internal_get_fontColorGradientPreset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient>& __cordl_internal_get_fontColorGradientPreset();

  constexpr float_t const& __cordl_internal_get_fontSize() const;

  constexpr float_t& __cordl_internal_get_fontSize();

  constexpr float_t const& __cordl_internal_get_fontSizeMax() const;

  constexpr float_t& __cordl_internal_get_fontSizeMax();

  constexpr float_t const& __cordl_internal_get_fontSizeMin() const;

  constexpr float_t& __cordl_internal_get_fontSizeMin();

  constexpr ::UnityEngine::TextCore::Text::FontStyles const& __cordl_internal_get_fontStyle() const;

  constexpr ::UnityEngine::TextCore::Text::FontStyles& __cordl_internal_get_fontStyle();

  constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& __cordl_internal_get_fontWeight() const;

  constexpr ::UnityEngine::TextCore::Text::TextFontWeight& __cordl_internal_get_fontWeight();

  constexpr ::UnityEngine::TextCore::Text::VertexSortingOrder const& __cordl_internal_get_geometrySortingOrder() const;

  constexpr ::UnityEngine::TextCore::Text::VertexSortingOrder& __cordl_internal_get_geometrySortingOrder();

  constexpr ::UnityEngine::TextCore::Text::TextureMapping const& __cordl_internal_get_horizontalMapping() const;

  constexpr ::UnityEngine::TextCore::Text::TextureMapping& __cordl_internal_get_horizontalMapping();

  constexpr ::UnityEngine::TextCore::Text::TextInputSource const& __cordl_internal_get_inputSource() const;

  constexpr ::UnityEngine::TextCore::Text::TextInputSource& __cordl_internal_get_inputSource();

  constexpr bool const& __cordl_internal_get_inverseYAxis() const;

  constexpr bool& __cordl_internal_get_inverseYAxis();

  constexpr bool const& __cordl_internal_get_isOrthographic() const;

  constexpr bool& __cordl_internal_get_isOrthographic();

  constexpr bool const& __cordl_internal_get_isRightToLeft() const;

  constexpr bool& __cordl_internal_get_isRightToLeft();

  constexpr float_t const& __cordl_internal_get_lineSpacing() const;

  constexpr float_t& __cordl_internal_get_lineSpacing();

  constexpr float_t const& __cordl_internal_get_lineSpacingMax() const;

  constexpr float_t& __cordl_internal_get_lineSpacingMax();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_margins() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_margins();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_maxVisibleCharacters() const;

  constexpr int32_t& __cordl_internal_get_maxVisibleCharacters();

  constexpr int32_t const& __cordl_internal_get_maxVisibleLines() const;

  constexpr int32_t& __cordl_internal_get_maxVisibleLines();

  constexpr int32_t const& __cordl_internal_get_maxVisibleWords() const;

  constexpr int32_t& __cordl_internal_get_maxVisibleWords();

  constexpr ::UnityEngine::TextCore::Text::TextOverflowMode const& __cordl_internal_get_overflowMode() const;

  constexpr ::UnityEngine::TextCore::Text::TextOverflowMode& __cordl_internal_get_overflowMode();

  constexpr bool const& __cordl_internal_get_overrideRichTextColors() const;

  constexpr bool& __cordl_internal_get_overrideRichTextColors();

  constexpr int32_t const& __cordl_internal_get_pageToDisplay() const;

  constexpr int32_t& __cordl_internal_get_pageToDisplay();

  constexpr float_t const& __cordl_internal_get_paragraphSpacing() const;

  constexpr float_t& __cordl_internal_get_paragraphSpacing();

  constexpr bool const& __cordl_internal_get_parseControlCharacters() const;

  constexpr bool& __cordl_internal_get_parseControlCharacters();

  constexpr bool const& __cordl_internal_get_richText() const;

  constexpr bool& __cordl_internal_get_richText();

  constexpr float_t const& __cordl_internal_get_scale() const;

  constexpr float_t& __cordl_internal_get_scale();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_screenRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_screenRect();

  constexpr bool const& __cordl_internal_get_shouldConvertToLinearSpace() const;

  constexpr bool& __cordl_internal_get_shouldConvertToLinearSpace();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> const& __cordl_internal_get_spriteAsset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset>& __cordl_internal_get_spriteAsset();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> const& __cordl_internal_get_styleSheet() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet>& __cordl_internal_get_styleSheet();

  constexpr bool const& __cordl_internal_get_tagNoParsing() const;

  constexpr bool& __cordl_internal_get_tagNoParsing();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr ::UnityEngine::TextCore::Text::TextAlignment const& __cordl_internal_get_textAlignment() const;

  constexpr ::UnityEngine::TextCore::Text::TextAlignment& __cordl_internal_get_textAlignment();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextSettings> const& __cordl_internal_get_textSettings() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextSettings>& __cordl_internal_get_textSettings();

  constexpr ::UnityEngine::TextCore::Text::TextWrappingMode const& __cordl_internal_get_textWrappingMode() const;

  constexpr ::UnityEngine::TextCore::Text::TextWrappingMode& __cordl_internal_get_textWrappingMode();

  constexpr bool const& __cordl_internal_get_tintSprites() const;

  constexpr bool& __cordl_internal_get_tintSprites();

  constexpr bool const& __cordl_internal_get_useMaxVisibleDescender() const;

  constexpr bool& __cordl_internal_get_useMaxVisibleDescender();

  constexpr float_t const& __cordl_internal_get_uvLineOffset() const;

  constexpr float_t& __cordl_internal_get_uvLineOffset();

  constexpr ::UnityEngine::TextCore::Text::TextureMapping const& __cordl_internal_get_verticalMapping() const;

  constexpr ::UnityEngine::TextCore::Text::TextureMapping& __cordl_internal_get_verticalMapping();

  constexpr float_t const& __cordl_internal_get_wordSpacing() const;

  constexpr float_t& __cordl_internal_get_wordSpacing();

  constexpr bool const& __cordl_internal_get_wordWrap() const;

  constexpr bool& __cordl_internal_get_wordWrap();

  constexpr float_t const& __cordl_internal_get_wordWrappingRatio() const;

  constexpr float_t& __cordl_internal_get_wordWrappingRatio();

  constexpr void __cordl_internal_set_autoSize(bool value);

  constexpr void __cordl_internal_set_charWidthMaxAdj(float_t value);

  constexpr void __cordl_internal_set_characterSpacing(float_t value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_enableKerning(bool value);

  constexpr void __cordl_internal_set_extraPadding(float_t value);

  constexpr void __cordl_internal_set_firstVisibleCharacter(int32_t value);

  constexpr void __cordl_internal_set_fontAsset(::UnityW<::UnityEngine::TextCore::Text::FontAsset> value);

  constexpr void __cordl_internal_set_fontColorGradient(::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> value);

  constexpr void __cordl_internal_set_fontColorGradientPreset(::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> value);

  constexpr void __cordl_internal_set_fontSize(float_t value);

  constexpr void __cordl_internal_set_fontSizeMax(float_t value);

  constexpr void __cordl_internal_set_fontSizeMin(float_t value);

  constexpr void __cordl_internal_set_fontStyle(::UnityEngine::TextCore::Text::FontStyles value);

  constexpr void __cordl_internal_set_fontWeight(::UnityEngine::TextCore::Text::TextFontWeight value);

  constexpr void __cordl_internal_set_geometrySortingOrder(::UnityEngine::TextCore::Text::VertexSortingOrder value);

  constexpr void __cordl_internal_set_horizontalMapping(::UnityEngine::TextCore::Text::TextureMapping value);

  constexpr void __cordl_internal_set_inputSource(::UnityEngine::TextCore::Text::TextInputSource value);

  constexpr void __cordl_internal_set_inverseYAxis(bool value);

  constexpr void __cordl_internal_set_isOrthographic(bool value);

  constexpr void __cordl_internal_set_isRightToLeft(bool value);

  constexpr void __cordl_internal_set_lineSpacing(float_t value);

  constexpr void __cordl_internal_set_lineSpacingMax(float_t value);

  constexpr void __cordl_internal_set_margins(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_maxVisibleCharacters(int32_t value);

  constexpr void __cordl_internal_set_maxVisibleLines(int32_t value);

  constexpr void __cordl_internal_set_maxVisibleWords(int32_t value);

  constexpr void __cordl_internal_set_overflowMode(::UnityEngine::TextCore::Text::TextOverflowMode value);

  constexpr void __cordl_internal_set_overrideRichTextColors(bool value);

  constexpr void __cordl_internal_set_pageToDisplay(int32_t value);

  constexpr void __cordl_internal_set_paragraphSpacing(float_t value);

  constexpr void __cordl_internal_set_parseControlCharacters(bool value);

  constexpr void __cordl_internal_set_richText(bool value);

  constexpr void __cordl_internal_set_scale(float_t value);

  constexpr void __cordl_internal_set_screenRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_shouldConvertToLinearSpace(bool value);

  constexpr void __cordl_internal_set_spriteAsset(::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> value);

  constexpr void __cordl_internal_set_styleSheet(::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> value);

  constexpr void __cordl_internal_set_tagNoParsing(bool value);

  constexpr void __cordl_internal_set_text(::StringW value);

  constexpr void __cordl_internal_set_textAlignment(::UnityEngine::TextCore::Text::TextAlignment value);

  constexpr void __cordl_internal_set_textSettings(::UnityW<::UnityEngine::TextCore::Text::TextSettings> value);

  constexpr void __cordl_internal_set_textWrappingMode(::UnityEngine::TextCore::Text::TextWrappingMode value);

  constexpr void __cordl_internal_set_tintSprites(bool value);

  constexpr void __cordl_internal_set_useMaxVisibleDescender(bool value);

  constexpr void __cordl_internal_set_uvLineOffset(float_t value);

  constexpr void __cordl_internal_set_verticalMapping(::UnityEngine::TextCore::Text::TextureMapping value);

  constexpr void __cordl_internal_set_wordSpacing(float_t value);

  constexpr void __cordl_internal_set_wordWrap(bool value);

  constexpr void __cordl_internal_set_wordWrappingRatio(float_t value);

  /// @brief Method .ctor, addr 0x4935634, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* i___System__IEquatable_1___UnityEngine__TextCore__Text__TextGenerationSettings__() noexcept;

  /// @brief Method op_Equality, addr 0x4933b84, size 0x8, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::TextCore::Text::TextGenerationSettings* left, ::UnityEngine::TextCore::Text::TextGenerationSettings* right);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGenerationSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextGenerationSettings(TextGenerationSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextGenerationSettings(TextGenerationSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15265 };

  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field screenRect, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rect ___screenRect;

  /// @brief Field margins, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___margins;

  /// @brief Field scale, offset: 0x38, size: 0x4, def value: None
  float_t ___scale;

  /// @brief Field fontAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> ___fontAsset;

  /// @brief Field material, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field spriteAsset, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::SpriteAsset> ___spriteAsset;

  /// @brief Field styleSheet, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::TextStyleSheet> ___styleSheet;

  /// @brief Field fontStyle, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles ___fontStyle;

  /// @brief Field textSettings, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::TextSettings> ___textSettings;

  /// @brief Field textAlignment, offset: 0x70, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextAlignment ___textAlignment;

  /// @brief Field overflowMode, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextOverflowMode ___overflowMode;

  /// @brief Field wordWrap, offset: 0x78, size: 0x1, def value: None
  bool ___wordWrap;

  /// @brief Field wordWrappingRatio, offset: 0x7c, size: 0x4, def value: None
  float_t ___wordWrappingRatio;

  /// @brief Field color, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field fontColorGradient, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> ___fontColorGradient;

  /// @brief Field fontColorGradientPreset, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::TextColorGradient> ___fontColorGradientPreset;

  /// @brief Field tintSprites, offset: 0xa0, size: 0x1, def value: None
  bool ___tintSprites;

  /// @brief Field overrideRichTextColors, offset: 0xa1, size: 0x1, def value: None
  bool ___overrideRichTextColors;

  /// @brief Field shouldConvertToLinearSpace, offset: 0xa2, size: 0x1, def value: None
  bool ___shouldConvertToLinearSpace;

  /// @brief Field fontSize, offset: 0xa4, size: 0x4, def value: None
  float_t ___fontSize;

  /// @brief Field autoSize, offset: 0xa8, size: 0x1, def value: None
  bool ___autoSize;

  /// @brief Field fontSizeMin, offset: 0xac, size: 0x4, def value: None
  float_t ___fontSizeMin;

  /// @brief Field fontSizeMax, offset: 0xb0, size: 0x4, def value: None
  float_t ___fontSizeMax;

  /// @brief Field enableKerning, offset: 0xb4, size: 0x1, def value: None
  bool ___enableKerning;

  /// @brief Field richText, offset: 0xb5, size: 0x1, def value: None
  bool ___richText;

  /// @brief Field isRightToLeft, offset: 0xb6, size: 0x1, def value: None
  bool ___isRightToLeft;

  /// @brief Field extraPadding, offset: 0xb8, size: 0x4, def value: None
  float_t ___extraPadding;

  /// @brief Field parseControlCharacters, offset: 0xbc, size: 0x1, def value: None
  bool ___parseControlCharacters;

  /// @brief Field isOrthographic, offset: 0xbd, size: 0x1, def value: None
  bool ___isOrthographic;

  /// @brief Field tagNoParsing, offset: 0xbe, size: 0x1, def value: None
  bool ___tagNoParsing;

  /// @brief Field characterSpacing, offset: 0xc0, size: 0x4, def value: None
  float_t ___characterSpacing;

  /// @brief Field wordSpacing, offset: 0xc4, size: 0x4, def value: None
  float_t ___wordSpacing;

  /// @brief Field lineSpacing, offset: 0xc8, size: 0x4, def value: None
  float_t ___lineSpacing;

  /// @brief Field paragraphSpacing, offset: 0xcc, size: 0x4, def value: None
  float_t ___paragraphSpacing;

  /// @brief Field lineSpacingMax, offset: 0xd0, size: 0x4, def value: None
  float_t ___lineSpacingMax;

  /// @brief Field textWrappingMode, offset: 0xd4, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextWrappingMode ___textWrappingMode;

  /// @brief Field maxVisibleCharacters, offset: 0xd8, size: 0x4, def value: None
  int32_t ___maxVisibleCharacters;

  /// @brief Field maxVisibleWords, offset: 0xdc, size: 0x4, def value: None
  int32_t ___maxVisibleWords;

  /// @brief Field maxVisibleLines, offset: 0xe0, size: 0x4, def value: None
  int32_t ___maxVisibleLines;

  /// @brief Field firstVisibleCharacter, offset: 0xe4, size: 0x4, def value: None
  int32_t ___firstVisibleCharacter;

  /// @brief Field useMaxVisibleDescender, offset: 0xe8, size: 0x1, def value: None
  bool ___useMaxVisibleDescender;

  /// @brief Field fontWeight, offset: 0xec, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextFontWeight ___fontWeight;

  /// @brief Field pageToDisplay, offset: 0xf0, size: 0x4, def value: None
  int32_t ___pageToDisplay;

  /// @brief Field horizontalMapping, offset: 0xf4, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextureMapping ___horizontalMapping;

  /// @brief Field verticalMapping, offset: 0xf8, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextureMapping ___verticalMapping;

  /// @brief Field uvLineOffset, offset: 0xfc, size: 0x4, def value: None
  float_t ___uvLineOffset;

  /// @brief Field geometrySortingOrder, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::VertexSortingOrder ___geometrySortingOrder;

  /// @brief Field inverseYAxis, offset: 0x104, size: 0x1, def value: None
  bool ___inverseYAxis;

  /// @brief Field charWidthMaxAdj, offset: 0x108, size: 0x4, def value: None
  float_t ___charWidthMaxAdj;

  /// @brief Field inputSource, offset: 0x10c, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextInputSource ___inputSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___text) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___screenRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___margins) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___scale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontAsset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___spriteAsset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___styleSheet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontStyle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___textSettings) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___textAlignment) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___overflowMode) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___wordWrap) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___wordWrappingRatio) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___color) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontColorGradient) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontColorGradientPreset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___tintSprites) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___overrideRichTextColors) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___shouldConvertToLinearSpace) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontSize) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___autoSize) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontSizeMin) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontSizeMax) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___enableKerning) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___richText) == 0xb5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___isRightToLeft) == 0xb6, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___extraPadding) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___parseControlCharacters) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___isOrthographic) == 0xbd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___tagNoParsing) == 0xbe, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___characterSpacing) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___wordSpacing) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___lineSpacing) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___paragraphSpacing) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___lineSpacingMax) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___textWrappingMode) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___maxVisibleCharacters) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___maxVisibleWords) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___maxVisibleLines) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___firstVisibleCharacter) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___useMaxVisibleDescender) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontWeight) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___pageToDisplay) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___horizontalMapping) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___verticalMapping) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___uvLineOffset) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___geometrySortingOrder) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___inverseYAxis) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___charWidthMaxAdj) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___inputSource) == 0x10c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextGenerationSettings, 0x110>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGenerationSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGenerationSettings*, "UnityEngine.TextCore.Text", "TextGenerationSettings");
