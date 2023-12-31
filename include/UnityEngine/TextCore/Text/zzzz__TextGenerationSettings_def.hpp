#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
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
// Type: UnityEngine.TextCore.Text::TextGenerationSettings
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 252, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(13677)), TypeDefinitionIndex(TypeDefinitionIndex(13729)),
// TypeDefinitionIndex(TypeDefinitionIndex(13718)), TypeDefinitionIndex(TypeDefinitionIndex(10165)), TypeDefinitionIndex(TypeDefinitionIndex(13687)), TypeDefinitionIndex(TypeDefinitionIndex(13688)),
// TypeDefinitionIndex(TypeDefinitionIndex(13719)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10246))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(13689)) CS Name: ::UnityEngine.TextCore.Text::TextGenerationSettings*
class CORDL_TYPE TextGenerationSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field text, offset 0x10, size 0x8
  __declspec(property(get = __get_text, put = __set_text))::StringW text;

  /// @brief Field screenRect, offset 0x18, size 0x10
  __declspec(property(get = __get_screenRect, put = __set_screenRect))::UnityEngine::Rect screenRect;

  /// @brief Field margins, offset 0x28, size 0x10
  __declspec(property(get = __get_margins, put = __set_margins))::UnityEngine::Vector4 margins;

  /// @brief Field scale, offset 0x38, size 0x4
  __declspec(property(get = __get_scale, put = __set_scale)) float_t scale;

  /// @brief Field fontAsset, offset 0x40, size 0x8
  __declspec(property(get = __get_fontAsset, put = __set_fontAsset))::UnityEngine::TextCore::Text::FontAsset* fontAsset;

  /// @brief Field material, offset 0x48, size 0x8
  __declspec(property(get = __get_material, put = __set_material))::UnityEngine::Material* material;

  /// @brief Field spriteAsset, offset 0x50, size 0x8
  __declspec(property(get = __get_spriteAsset, put = __set_spriteAsset))::UnityEngine::TextCore::Text::SpriteAsset* spriteAsset;

  /// @brief Field styleSheet, offset 0x58, size 0x8
  __declspec(property(get = __get_styleSheet, put = __set_styleSheet))::UnityEngine::TextCore::Text::TextStyleSheet* styleSheet;

  /// @brief Field fontStyle, offset 0x60, size 0x4
  __declspec(property(get = __get_fontStyle, put = __set_fontStyle))::UnityEngine::TextCore::Text::FontStyles fontStyle;

  /// @brief Field textSettings, offset 0x68, size 0x8
  __declspec(property(get = __get_textSettings, put = __set_textSettings))::UnityEngine::TextCore::Text::TextSettings* textSettings;

  /// @brief Field textAlignment, offset 0x70, size 0x4
  __declspec(property(get = __get_textAlignment, put = __set_textAlignment))::UnityEngine::TextCore::Text::TextAlignment textAlignment;

  /// @brief Field overflowMode, offset 0x74, size 0x4
  __declspec(property(get = __get_overflowMode, put = __set_overflowMode))::UnityEngine::TextCore::Text::TextOverflowMode overflowMode;

  /// @brief Field wordWrap, offset 0x78, size 0x1
  __declspec(property(get = __get_wordWrap, put = __set_wordWrap)) bool wordWrap;

  /// @brief Field wordWrappingRatio, offset 0x7c, size 0x4
  __declspec(property(get = __get_wordWrappingRatio, put = __set_wordWrappingRatio)) float_t wordWrappingRatio;

  /// @brief Field color, offset 0x80, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  /// @brief Field fontColorGradient, offset 0x90, size 0x8
  __declspec(property(get = __get_fontColorGradient, put = __set_fontColorGradient))::UnityEngine::TextCore::Text::TextColorGradient* fontColorGradient;

  /// @brief Field tintSprites, offset 0x98, size 0x1
  __declspec(property(get = __get_tintSprites, put = __set_tintSprites)) bool tintSprites;

  /// @brief Field overrideRichTextColors, offset 0x99, size 0x1
  __declspec(property(get = __get_overrideRichTextColors, put = __set_overrideRichTextColors)) bool overrideRichTextColors;

  /// @brief Field fontSize, offset 0x9c, size 0x4
  __declspec(property(get = __get_fontSize, put = __set_fontSize)) float_t fontSize;

  /// @brief Field autoSize, offset 0xa0, size 0x1
  __declspec(property(get = __get_autoSize, put = __set_autoSize)) bool autoSize;

  /// @brief Field fontSizeMin, offset 0xa4, size 0x4
  __declspec(property(get = __get_fontSizeMin, put = __set_fontSizeMin)) float_t fontSizeMin;

  /// @brief Field fontSizeMax, offset 0xa8, size 0x4
  __declspec(property(get = __get_fontSizeMax, put = __set_fontSizeMax)) float_t fontSizeMax;

  /// @brief Field enableKerning, offset 0xac, size 0x1
  __declspec(property(get = __get_enableKerning, put = __set_enableKerning)) bool enableKerning;

  /// @brief Field richText, offset 0xad, size 0x1
  __declspec(property(get = __get_richText, put = __set_richText)) bool richText;

  /// @brief Field isRightToLeft, offset 0xae, size 0x1
  __declspec(property(get = __get_isRightToLeft, put = __set_isRightToLeft)) bool isRightToLeft;

  /// @brief Field extraPadding, offset 0xaf, size 0x1
  __declspec(property(get = __get_extraPadding, put = __set_extraPadding)) bool extraPadding;

  /// @brief Field parseControlCharacters, offset 0xb0, size 0x1
  __declspec(property(get = __get_parseControlCharacters, put = __set_parseControlCharacters)) bool parseControlCharacters;

  /// @brief Field characterSpacing, offset 0xb4, size 0x4
  __declspec(property(get = __get_characterSpacing, put = __set_characterSpacing)) float_t characterSpacing;

  /// @brief Field wordSpacing, offset 0xb8, size 0x4
  __declspec(property(get = __get_wordSpacing, put = __set_wordSpacing)) float_t wordSpacing;

  /// @brief Field lineSpacing, offset 0xbc, size 0x4
  __declspec(property(get = __get_lineSpacing, put = __set_lineSpacing)) float_t lineSpacing;

  /// @brief Field paragraphSpacing, offset 0xc0, size 0x4
  __declspec(property(get = __get_paragraphSpacing, put = __set_paragraphSpacing)) float_t paragraphSpacing;

  /// @brief Field lineSpacingMax, offset 0xc4, size 0x4
  __declspec(property(get = __get_lineSpacingMax, put = __set_lineSpacingMax)) float_t lineSpacingMax;

  /// @brief Field maxVisibleCharacters, offset 0xc8, size 0x4
  __declspec(property(get = __get_maxVisibleCharacters, put = __set_maxVisibleCharacters)) int32_t maxVisibleCharacters;

  /// @brief Field maxVisibleWords, offset 0xcc, size 0x4
  __declspec(property(get = __get_maxVisibleWords, put = __set_maxVisibleWords)) int32_t maxVisibleWords;

  /// @brief Field maxVisibleLines, offset 0xd0, size 0x4
  __declspec(property(get = __get_maxVisibleLines, put = __set_maxVisibleLines)) int32_t maxVisibleLines;

  /// @brief Field firstVisibleCharacter, offset 0xd4, size 0x4
  __declspec(property(get = __get_firstVisibleCharacter, put = __set_firstVisibleCharacter)) int32_t firstVisibleCharacter;

  /// @brief Field useMaxVisibleDescender, offset 0xd8, size 0x1
  __declspec(property(get = __get_useMaxVisibleDescender, put = __set_useMaxVisibleDescender)) bool useMaxVisibleDescender;

  /// @brief Field fontWeight, offset 0xdc, size 0x4
  __declspec(property(get = __get_fontWeight, put = __set_fontWeight))::UnityEngine::TextCore::Text::TextFontWeight fontWeight;

  /// @brief Field pageToDisplay, offset 0xe0, size 0x4
  __declspec(property(get = __get_pageToDisplay, put = __set_pageToDisplay)) int32_t pageToDisplay;

  /// @brief Field horizontalMapping, offset 0xe4, size 0x4
  __declspec(property(get = __get_horizontalMapping, put = __set_horizontalMapping))::UnityEngine::TextCore::Text::TextureMapping horizontalMapping;

  /// @brief Field verticalMapping, offset 0xe8, size 0x4
  __declspec(property(get = __get_verticalMapping, put = __set_verticalMapping))::UnityEngine::TextCore::Text::TextureMapping verticalMapping;

  /// @brief Field uvLineOffset, offset 0xec, size 0x4
  __declspec(property(get = __get_uvLineOffset, put = __set_uvLineOffset)) float_t uvLineOffset;

  /// @brief Field geometrySortingOrder, offset 0xf0, size 0x4
  __declspec(property(get = __get_geometrySortingOrder, put = __set_geometrySortingOrder))::UnityEngine::TextCore::Text::VertexSortingOrder geometrySortingOrder;

  /// @brief Field inverseYAxis, offset 0xf4, size 0x1
  __declspec(property(get = __get_inverseYAxis, put = __set_inverseYAxis)) bool inverseYAxis;

  /// @brief Field charWidthMaxAdj, offset 0xf8, size 0x4
  __declspec(property(get = __get_charWidthMaxAdj, put = __set_charWidthMaxAdj)) float_t charWidthMaxAdj;

  constexpr ::StringW& __get_text();

  constexpr ::StringW const& __get_text() const;

  constexpr void __set_text(::StringW value);

  constexpr ::UnityEngine::Rect& __get_screenRect();

  constexpr ::UnityEngine::Rect const& __get_screenRect() const;

  constexpr void __set_screenRect(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Vector4& __get_margins();

  constexpr ::UnityEngine::Vector4 const& __get_margins() const;

  constexpr void __set_margins(::UnityEngine::Vector4 value);

  constexpr float_t& __get_scale();

  constexpr float_t const& __get_scale() const;

  constexpr void __set_scale(float_t value);

  constexpr ::UnityEngine::TextCore::Text::FontAsset*& __get_fontAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontAsset*> const& __get_fontAsset() const;

  constexpr void __set_fontAsset(::UnityEngine::TextCore::Text::FontAsset* value);

  constexpr ::UnityEngine::Material*& __get_material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get_material() const;

  constexpr void __set_material(::UnityEngine::Material* value);

  constexpr ::UnityEngine::TextCore::Text::SpriteAsset*& __get_spriteAsset();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::SpriteAsset*> const& __get_spriteAsset() const;

  constexpr void __set_spriteAsset(::UnityEngine::TextCore::Text::SpriteAsset* value);

  constexpr ::UnityEngine::TextCore::Text::TextStyleSheet*& __get_styleSheet();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextStyleSheet*> const& __get_styleSheet() const;

  constexpr void __set_styleSheet(::UnityEngine::TextCore::Text::TextStyleSheet* value);

  constexpr ::UnityEngine::TextCore::Text::FontStyles& __get_fontStyle();

  constexpr ::UnityEngine::TextCore::Text::FontStyles const& __get_fontStyle() const;

  constexpr void __set_fontStyle(::UnityEngine::TextCore::Text::FontStyles value);

  constexpr ::UnityEngine::TextCore::Text::TextSettings*& __get_textSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextSettings*> const& __get_textSettings() const;

  constexpr void __set_textSettings(::UnityEngine::TextCore::Text::TextSettings* value);

  constexpr ::UnityEngine::TextCore::Text::TextAlignment& __get_textAlignment();

  constexpr ::UnityEngine::TextCore::Text::TextAlignment const& __get_textAlignment() const;

  constexpr void __set_textAlignment(::UnityEngine::TextCore::Text::TextAlignment value);

  constexpr ::UnityEngine::TextCore::Text::TextOverflowMode& __get_overflowMode();

  constexpr ::UnityEngine::TextCore::Text::TextOverflowMode const& __get_overflowMode() const;

  constexpr void __set_overflowMode(::UnityEngine::TextCore::Text::TextOverflowMode value);

  constexpr bool& __get_wordWrap();

  constexpr bool const& __get_wordWrap() const;

  constexpr void __set_wordWrap(bool value);

  constexpr float_t& __get_wordWrappingRatio();

  constexpr float_t const& __get_wordWrappingRatio() const;

  constexpr void __set_wordWrappingRatio(float_t value);

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  constexpr ::UnityEngine::TextCore::Text::TextColorGradient*& __get_fontColorGradient();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextColorGradient*> const& __get_fontColorGradient() const;

  constexpr void __set_fontColorGradient(::UnityEngine::TextCore::Text::TextColorGradient* value);

  constexpr bool& __get_tintSprites();

  constexpr bool const& __get_tintSprites() const;

  constexpr void __set_tintSprites(bool value);

  constexpr bool& __get_overrideRichTextColors();

  constexpr bool const& __get_overrideRichTextColors() const;

  constexpr void __set_overrideRichTextColors(bool value);

  constexpr float_t& __get_fontSize();

  constexpr float_t const& __get_fontSize() const;

  constexpr void __set_fontSize(float_t value);

  constexpr bool& __get_autoSize();

  constexpr bool const& __get_autoSize() const;

  constexpr void __set_autoSize(bool value);

  constexpr float_t& __get_fontSizeMin();

  constexpr float_t const& __get_fontSizeMin() const;

  constexpr void __set_fontSizeMin(float_t value);

  constexpr float_t& __get_fontSizeMax();

  constexpr float_t const& __get_fontSizeMax() const;

  constexpr void __set_fontSizeMax(float_t value);

  constexpr bool& __get_enableKerning();

  constexpr bool const& __get_enableKerning() const;

  constexpr void __set_enableKerning(bool value);

  constexpr bool& __get_richText();

  constexpr bool const& __get_richText() const;

  constexpr void __set_richText(bool value);

  constexpr bool& __get_isRightToLeft();

  constexpr bool const& __get_isRightToLeft() const;

  constexpr void __set_isRightToLeft(bool value);

  constexpr bool& __get_extraPadding();

  constexpr bool const& __get_extraPadding() const;

  constexpr void __set_extraPadding(bool value);

  constexpr bool& __get_parseControlCharacters();

  constexpr bool const& __get_parseControlCharacters() const;

  constexpr void __set_parseControlCharacters(bool value);

  constexpr float_t& __get_characterSpacing();

  constexpr float_t const& __get_characterSpacing() const;

  constexpr void __set_characterSpacing(float_t value);

  constexpr float_t& __get_wordSpacing();

  constexpr float_t const& __get_wordSpacing() const;

  constexpr void __set_wordSpacing(float_t value);

  constexpr float_t& __get_lineSpacing();

  constexpr float_t const& __get_lineSpacing() const;

  constexpr void __set_lineSpacing(float_t value);

  constexpr float_t& __get_paragraphSpacing();

  constexpr float_t const& __get_paragraphSpacing() const;

  constexpr void __set_paragraphSpacing(float_t value);

  constexpr float_t& __get_lineSpacingMax();

  constexpr float_t const& __get_lineSpacingMax() const;

  constexpr void __set_lineSpacingMax(float_t value);

  constexpr int32_t& __get_maxVisibleCharacters();

  constexpr int32_t const& __get_maxVisibleCharacters() const;

  constexpr void __set_maxVisibleCharacters(int32_t value);

  constexpr int32_t& __get_maxVisibleWords();

  constexpr int32_t const& __get_maxVisibleWords() const;

  constexpr void __set_maxVisibleWords(int32_t value);

  constexpr int32_t& __get_maxVisibleLines();

  constexpr int32_t const& __get_maxVisibleLines() const;

  constexpr void __set_maxVisibleLines(int32_t value);

  constexpr int32_t& __get_firstVisibleCharacter();

  constexpr int32_t const& __get_firstVisibleCharacter() const;

  constexpr void __set_firstVisibleCharacter(int32_t value);

  constexpr bool& __get_useMaxVisibleDescender();

  constexpr bool const& __get_useMaxVisibleDescender() const;

  constexpr void __set_useMaxVisibleDescender(bool value);

  constexpr ::UnityEngine::TextCore::Text::TextFontWeight& __get_fontWeight();

  constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& __get_fontWeight() const;

  constexpr void __set_fontWeight(::UnityEngine::TextCore::Text::TextFontWeight value);

  constexpr int32_t& __get_pageToDisplay();

  constexpr int32_t const& __get_pageToDisplay() const;

  constexpr void __set_pageToDisplay(int32_t value);

  constexpr ::UnityEngine::TextCore::Text::TextureMapping& __get_horizontalMapping();

  constexpr ::UnityEngine::TextCore::Text::TextureMapping const& __get_horizontalMapping() const;

  constexpr void __set_horizontalMapping(::UnityEngine::TextCore::Text::TextureMapping value);

  constexpr ::UnityEngine::TextCore::Text::TextureMapping& __get_verticalMapping();

  constexpr ::UnityEngine::TextCore::Text::TextureMapping const& __get_verticalMapping() const;

  constexpr void __set_verticalMapping(::UnityEngine::TextCore::Text::TextureMapping value);

  constexpr float_t& __get_uvLineOffset();

  constexpr float_t const& __get_uvLineOffset() const;

  constexpr void __set_uvLineOffset(float_t value);

  constexpr ::UnityEngine::TextCore::Text::VertexSortingOrder& __get_geometrySortingOrder();

  constexpr ::UnityEngine::TextCore::Text::VertexSortingOrder const& __get_geometrySortingOrder() const;

  constexpr void __set_geometrySortingOrder(::UnityEngine::TextCore::Text::VertexSortingOrder value);

  constexpr bool& __get_inverseYAxis();

  constexpr bool const& __get_inverseYAxis() const;

  constexpr void __set_inverseYAxis(bool value);

  constexpr float_t& __get_charWidthMaxAdj();

  constexpr float_t const& __get_charWidthMaxAdj() const;

  constexpr void __set_charWidthMaxAdj(float_t value);

  /// @brief Method Equals, addr 0x2d40874, size 0x3b4, virtual false, abstract: false, final false
  inline bool Equals(::UnityEngine::TextCore::Text::TextGenerationSettings* other);

  /// @brief Method Equals, addr 0x2d40c28, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2d40cf0, size 0x56c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TextCore::Text::TextGenerationSettings* New_ctor();

  /// @brief Method .ctor, addr 0x2d4125c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextGenerationSettings(TextGenerationSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextGenerationSettings(TextGenerationSettings const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGenerationSettings();

public:
  /// @brief Field text, offset: 0x10, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field screenRect, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rect ___screenRect;

  /// @brief Field margins, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___margins;

  /// @brief Field scale, offset: 0x38, size: 0x4, def value: None
  float_t ___scale;

  /// @brief Field fontAsset, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::FontAsset* ___fontAsset;

  /// @brief Field material, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Material* ___material;

  /// @brief Field spriteAsset, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::SpriteAsset* ___spriteAsset;

  /// @brief Field styleSheet, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextStyleSheet* ___styleSheet;

  /// @brief Field fontStyle, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles ___fontStyle;

  /// @brief Field textSettings, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextSettings* ___textSettings;

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
  ::UnityEngine::TextCore::Text::TextColorGradient* ___fontColorGradient;

  /// @brief Field tintSprites, offset: 0x98, size: 0x1, def value: None
  bool ___tintSprites;

  /// @brief Field overrideRichTextColors, offset: 0x99, size: 0x1, def value: None
  bool ___overrideRichTextColors;

  /// @brief Field fontSize, offset: 0x9c, size: 0x4, def value: None
  float_t ___fontSize;

  /// @brief Field autoSize, offset: 0xa0, size: 0x1, def value: None
  bool ___autoSize;

  /// @brief Field fontSizeMin, offset: 0xa4, size: 0x4, def value: None
  float_t ___fontSizeMin;

  /// @brief Field fontSizeMax, offset: 0xa8, size: 0x4, def value: None
  float_t ___fontSizeMax;

  /// @brief Field enableKerning, offset: 0xac, size: 0x1, def value: None
  bool ___enableKerning;

  /// @brief Field richText, offset: 0xad, size: 0x1, def value: None
  bool ___richText;

  /// @brief Field isRightToLeft, offset: 0xae, size: 0x1, def value: None
  bool ___isRightToLeft;

  /// @brief Field extraPadding, offset: 0xaf, size: 0x1, def value: None
  bool ___extraPadding;

  /// @brief Field parseControlCharacters, offset: 0xb0, size: 0x1, def value: None
  bool ___parseControlCharacters;

  /// @brief Field characterSpacing, offset: 0xb4, size: 0x4, def value: None
  float_t ___characterSpacing;

  /// @brief Field wordSpacing, offset: 0xb8, size: 0x4, def value: None
  float_t ___wordSpacing;

  /// @brief Field lineSpacing, offset: 0xbc, size: 0x4, def value: None
  float_t ___lineSpacing;

  /// @brief Field paragraphSpacing, offset: 0xc0, size: 0x4, def value: None
  float_t ___paragraphSpacing;

  /// @brief Field lineSpacingMax, offset: 0xc4, size: 0x4, def value: None
  float_t ___lineSpacingMax;

  /// @brief Field maxVisibleCharacters, offset: 0xc8, size: 0x4, def value: None
  int32_t ___maxVisibleCharacters;

  /// @brief Field maxVisibleWords, offset: 0xcc, size: 0x4, def value: None
  int32_t ___maxVisibleWords;

  /// @brief Field maxVisibleLines, offset: 0xd0, size: 0x4, def value: None
  int32_t ___maxVisibleLines;

  /// @brief Field firstVisibleCharacter, offset: 0xd4, size: 0x4, def value: None
  int32_t ___firstVisibleCharacter;

  /// @brief Field useMaxVisibleDescender, offset: 0xd8, size: 0x1, def value: None
  bool ___useMaxVisibleDescender;

  /// @brief Field fontWeight, offset: 0xdc, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextFontWeight ___fontWeight;

  /// @brief Field pageToDisplay, offset: 0xe0, size: 0x4, def value: None
  int32_t ___pageToDisplay;

  /// @brief Field horizontalMapping, offset: 0xe4, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextureMapping ___horizontalMapping;

  /// @brief Field verticalMapping, offset: 0xe8, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextureMapping ___verticalMapping;

  /// @brief Field uvLineOffset, offset: 0xec, size: 0x4, def value: None
  float_t ___uvLineOffset;

  /// @brief Field geometrySortingOrder, offset: 0xf0, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::VertexSortingOrder ___geometrySortingOrder;

  /// @brief Field inverseYAxis, offset: 0xf4, size: 0x1, def value: None
  bool ___inverseYAxis;

  /// @brief Field charWidthMaxAdj, offset: 0xf8, size: 0x4, def value: None
  float_t ___charWidthMaxAdj;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextGenerationSettings, 0x100>, "Size mismatch!");

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

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___tintSprites) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___overrideRichTextColors) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___autoSize) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontSizeMin) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontSizeMax) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___enableKerning) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___richText) == 0xad, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___isRightToLeft) == 0xae, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___extraPadding) == 0xaf, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___parseControlCharacters) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___characterSpacing) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___wordSpacing) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___lineSpacing) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___paragraphSpacing) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___lineSpacingMax) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___maxVisibleCharacters) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___maxVisibleWords) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___maxVisibleLines) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___firstVisibleCharacter) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___useMaxVisibleDescender) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontWeight) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___pageToDisplay) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___horizontalMapping) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___verticalMapping) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___uvLineOffset) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___geometrySortingOrder) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___inverseYAxis) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___charWidthMaxAdj) == 0xf8, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGenerationSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGenerationSettings*, "UnityEngine.TextCore.Text", "TextGenerationSettings");
