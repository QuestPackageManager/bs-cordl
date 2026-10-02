#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontStyles_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__RenderedText_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAlignment_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextFontWeight_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextOverflowMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextWrappingMode_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerationSettings)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct OTL_FeatureTag;
}
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
namespace UnityEngine::TextCore::Text {
class TextSettings;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::Text::TextGenerationSettings*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextGenerationSettings*, "UnityEngine.TextCore.Text", "TextGenerationSettings");
// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
// Dependencies System.Object, UnityEngine.Color, UnityEngine.Rect, UnityEngine.TextCore.Text.FontStyles, UnityEngine.TextCore.Text.RenderedText, UnityEngine.TextCore.Text.TextAlignment,
// UnityEngine.TextCore.Text.TextFontWeight, UnityEngine.TextCore.Text.TextOverflowMode, UnityEngine.TextCore.Text.TextWrappingMode
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextGenerationSettings
class CORDL_TYPE TextGenerationSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field IsEditorTextRenderingModeBitmap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IsEditorTextRenderingModeBitmap, put = setStaticF_IsEditorTextRenderingModeBitmap)) ::System::Func_1<bool>* IsEditorTextRenderingModeBitmap;

  /// @brief Field IsEditorTextRenderingModeRaster, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IsEditorTextRenderingModeRaster, put = setStaticF_IsEditorTextRenderingModeRaster)) ::System::Func_1<bool>* IsEditorTextRenderingModeRaster;

  /// @brief Field characterSpacing, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_characterSpacing, put = __cordl_internal_set_characterSpacing)) float_t characterSpacing;

  /// @brief Field color, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  /// @brief Field emojiFallbackSupport, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_emojiFallbackSupport, put = __cordl_internal_set_emojiFallbackSupport)) bool emojiFallbackSupport;

  /// @brief Field extraPadding, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_extraPadding, put = __cordl_internal_set_extraPadding)) float_t extraPadding;

  /// @brief Field fontAsset, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_fontAsset, put = __cordl_internal_set_fontAsset)) ::UnityW<::UnityEngine::TextCore::Text::FontAsset> fontAsset;

  /// @brief Field fontFeatures, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_fontFeatures, put = setStaticF_fontFeatures)) ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>* fontFeatures;

  /// @brief Field fontSize, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_fontSize, put = __cordl_internal_set_fontSize)) int32_t fontSize;

  /// @brief Field fontStyle, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_fontStyle, put = __cordl_internal_set_fontStyle)) ::UnityEngine::TextCore::Text::FontStyles fontStyle;

  /// @brief Field fontWeight, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_fontWeight, put = __cordl_internal_set_fontWeight)) ::UnityEngine::TextCore::Text::TextFontWeight fontWeight;

  /// @brief Field isIMGUI, offset 0xa0, size 0x1
  __declspec(property(get = __cordl_internal_get_isIMGUI, put = __cordl_internal_set_isIMGUI)) bool isIMGUI;

  /// @brief Field isPlaceholder, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get_isPlaceholder, put = __cordl_internal_set_isPlaceholder)) bool isPlaceholder;

  /// @brief Field isRightToLeft, offset 0x82, size 0x1
  __declspec(property(get = __cordl_internal_get_isRightToLeft, put = __cordl_internal_set_isRightToLeft)) bool isRightToLeft;

  /// @brief Field m_CachedRenderedText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedRenderedText, put = __cordl_internal_set_m_CachedRenderedText)) ::StringW m_CachedRenderedText;

  /// @brief Field m_RenderedText, offset 0x10, size 0x20
  __declspec(property(get = __cordl_internal_get_m_RenderedText, put = __cordl_internal_set_m_RenderedText)) ::UnityEngine::TextCore::Text::RenderedText m_RenderedText;

  /// @brief Field overflowMode, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_overflowMode, put = __cordl_internal_set_overflowMode)) ::UnityEngine::TextCore::Text::TextOverflowMode overflowMode;

  /// @brief Field paragraphSpacing, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_paragraphSpacing, put = __cordl_internal_set_paragraphSpacing)) float_t paragraphSpacing;

  /// @brief Field parseControlCharacters, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_parseControlCharacters, put = __cordl_internal_set_parseControlCharacters)) bool parseControlCharacters;

  /// @brief Field pixelsPerPoint, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_pixelsPerPoint, put = __cordl_internal_set_pixelsPerPoint)) float_t pixelsPerPoint;

  __declspec(property(get = get_renderedText, put = set_renderedText)) ::UnityEngine::TextCore::Text::RenderedText renderedText;

  /// @brief Field richText, offset 0x81, size 0x1
  __declspec(property(get = __cordl_internal_get_richText, put = __cordl_internal_set_richText)) bool richText;

  /// @brief Field screenRect, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_screenRect, put = __cordl_internal_set_screenRect)) ::UnityEngine::Rect screenRect;

  /// @brief Field shouldConvertToLinearSpace, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_shouldConvertToLinearSpace, put = __cordl_internal_set_shouldConvertToLinearSpace)) bool shouldConvertToLinearSpace;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field textAlignment, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_textAlignment, put = __cordl_internal_set_textAlignment)) ::UnityEngine::TextCore::Text::TextAlignment textAlignment;

  /// @brief Field textSettings, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_textSettings, put = __cordl_internal_set_textSettings)) ::UnityW<::UnityEngine::TextCore::Text::TextSettings> textSettings;

  /// @brief Field textWrappingMode, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_textWrappingMode, put = __cordl_internal_set_textWrappingMode)) ::UnityEngine::TextCore::Text::TextWrappingMode textWrappingMode;

  /// @brief Field wordSpacing, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_wordSpacing, put = __cordl_internal_set_wordSpacing)) float_t wordSpacing;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>*() noexcept;

  /// @brief Method Equals, addr 0x7058e20, size 0xf4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x7058a00, size 0x39c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextCore::Text::TextGenerationSettings* other);

  /// @brief Method GetHashCode, addr 0x7058f14, size 0x2b0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::UnityEngine::TextCore::Text::TextGenerationSettings* New_ctor();

  /// @brief Method ToString, addr 0x7059200, size 0xd58, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_characterSpacing() const;

  constexpr float_t& __cordl_internal_get_characterSpacing();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr bool const& __cordl_internal_get_emojiFallbackSupport() const;

  constexpr bool& __cordl_internal_get_emojiFallbackSupport();

  constexpr float_t const& __cordl_internal_get_extraPadding() const;

  constexpr float_t& __cordl_internal_get_extraPadding();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset> const& __cordl_internal_get_fontAsset() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::FontAsset>& __cordl_internal_get_fontAsset();

  constexpr int32_t const& __cordl_internal_get_fontSize() const;

  constexpr int32_t& __cordl_internal_get_fontSize();

  constexpr ::UnityEngine::TextCore::Text::FontStyles const& __cordl_internal_get_fontStyle() const;

  constexpr ::UnityEngine::TextCore::Text::FontStyles& __cordl_internal_get_fontStyle();

  constexpr ::UnityEngine::TextCore::Text::TextFontWeight const& __cordl_internal_get_fontWeight() const;

  constexpr ::UnityEngine::TextCore::Text::TextFontWeight& __cordl_internal_get_fontWeight();

  constexpr bool const& __cordl_internal_get_isIMGUI() const;

  constexpr bool& __cordl_internal_get_isIMGUI();

  constexpr bool const& __cordl_internal_get_isPlaceholder() const;

  constexpr bool& __cordl_internal_get_isPlaceholder();

  constexpr bool const& __cordl_internal_get_isRightToLeft() const;

  constexpr bool& __cordl_internal_get_isRightToLeft();

  constexpr ::StringW const& __cordl_internal_get_m_CachedRenderedText() const;

  constexpr ::StringW& __cordl_internal_get_m_CachedRenderedText();

  constexpr ::UnityEngine::TextCore::Text::RenderedText const& __cordl_internal_get_m_RenderedText() const;

  constexpr ::UnityEngine::TextCore::Text::RenderedText& __cordl_internal_get_m_RenderedText();

  constexpr ::UnityEngine::TextCore::Text::TextOverflowMode const& __cordl_internal_get_overflowMode() const;

  constexpr ::UnityEngine::TextCore::Text::TextOverflowMode& __cordl_internal_get_overflowMode();

  constexpr float_t const& __cordl_internal_get_paragraphSpacing() const;

  constexpr float_t& __cordl_internal_get_paragraphSpacing();

  constexpr bool const& __cordl_internal_get_parseControlCharacters() const;

  constexpr bool& __cordl_internal_get_parseControlCharacters();

  constexpr float_t const& __cordl_internal_get_pixelsPerPoint() const;

  constexpr float_t& __cordl_internal_get_pixelsPerPoint();

  constexpr bool const& __cordl_internal_get_richText() const;

  constexpr bool& __cordl_internal_get_richText();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_screenRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_screenRect();

  constexpr bool const& __cordl_internal_get_shouldConvertToLinearSpace() const;

  constexpr bool& __cordl_internal_get_shouldConvertToLinearSpace();

  constexpr ::UnityEngine::TextCore::Text::TextAlignment const& __cordl_internal_get_textAlignment() const;

  constexpr ::UnityEngine::TextCore::Text::TextAlignment& __cordl_internal_get_textAlignment();

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextSettings> const& __cordl_internal_get_textSettings() const;

  constexpr ::UnityW<::UnityEngine::TextCore::Text::TextSettings>& __cordl_internal_get_textSettings();

  constexpr ::UnityEngine::TextCore::Text::TextWrappingMode const& __cordl_internal_get_textWrappingMode() const;

  constexpr ::UnityEngine::TextCore::Text::TextWrappingMode& __cordl_internal_get_textWrappingMode();

  constexpr float_t const& __cordl_internal_get_wordSpacing() const;

  constexpr float_t& __cordl_internal_get_wordSpacing();

  constexpr void __cordl_internal_set_characterSpacing(float_t value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_emojiFallbackSupport(bool value);

  constexpr void __cordl_internal_set_extraPadding(float_t value);

  constexpr void __cordl_internal_set_fontAsset(::UnityW<::UnityEngine::TextCore::Text::FontAsset> value);

  constexpr void __cordl_internal_set_fontSize(int32_t value);

  constexpr void __cordl_internal_set_fontStyle(::UnityEngine::TextCore::Text::FontStyles value);

  constexpr void __cordl_internal_set_fontWeight(::UnityEngine::TextCore::Text::TextFontWeight value);

  constexpr void __cordl_internal_set_isIMGUI(bool value);

  constexpr void __cordl_internal_set_isPlaceholder(bool value);

  constexpr void __cordl_internal_set_isRightToLeft(bool value);

  constexpr void __cordl_internal_set_m_CachedRenderedText(::StringW value);

  constexpr void __cordl_internal_set_m_RenderedText(::UnityEngine::TextCore::Text::RenderedText value);

  constexpr void __cordl_internal_set_overflowMode(::UnityEngine::TextCore::Text::TextOverflowMode value);

  constexpr void __cordl_internal_set_paragraphSpacing(float_t value);

  constexpr void __cordl_internal_set_parseControlCharacters(bool value);

  constexpr void __cordl_internal_set_pixelsPerPoint(float_t value);

  constexpr void __cordl_internal_set_richText(bool value);

  constexpr void __cordl_internal_set_screenRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_shouldConvertToLinearSpace(bool value);

  constexpr void __cordl_internal_set_textAlignment(::UnityEngine::TextCore::Text::TextAlignment value);

  constexpr void __cordl_internal_set_textSettings(::UnityW<::UnityEngine::TextCore::Text::TextSettings> value);

  constexpr void __cordl_internal_set_textWrappingMode(::UnityEngine::TextCore::Text::TextWrappingMode value);

  constexpr void __cordl_internal_set_wordSpacing(float_t value);

  /// @brief Method .ctor, addr 0x70589b0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Func_1<bool>* getStaticF_IsEditorTextRenderingModeBitmap();

  static inline ::System::Func_1<bool>* getStaticF_IsEditorTextRenderingModeRaster();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>* getStaticF_fontFeatures();

  /// @brief Method get_renderedText, addr 0x7058800, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::RenderedText get_renderedText();

  /// @brief Method get_text, addr 0x705881c, size 0x34, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::Text::TextGenerationSettings*>* i___System__IEquatable_1___UnityEngine__TextCore__Text__TextGenerationSettings__() noexcept;

  /// @brief Method op_Inequality, addr 0x70591c4, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::TextCore::Text::TextGenerationSettings* left, ::UnityEngine::TextCore::Text::TextGenerationSettings* right);

  static inline void setStaticF_IsEditorTextRenderingModeBitmap(::System::Func_1<bool>* value);

  static inline void setStaticF_IsEditorTextRenderingModeRaster(::System::Func_1<bool>* value);

  static inline void setStaticF_fontFeatures(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::OTL_FeatureTag>* value);

  /// @brief Method set_renderedText, addr 0x705880c, size 0x10, virtual false, abstract: false, final false
  inline void set_renderedText(::UnityEngine::TextCore::Text::RenderedText value);

  /// @brief Method set_text, addr 0x705892c, size 0x40, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGenerationSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationSettings", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextGenerationSettings(TextGenerationSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationSettings", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextGenerationSettings(TextGenerationSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17846 };

  /// @brief Field autoSize offset 0xffffffff size 0x1
  static constexpr bool autoSize{ false };

  /// @brief Field charWidthMaxAdj offset 0xffffffff size 0x4
  static constexpr float_t charWidthMaxAdj{ static_cast<float_t>(0.0f) };

  /// @brief Field firstVisibleCharacter offset 0xffffffff size 0x4
  static constexpr int32_t firstVisibleCharacter{ static_cast<int32_t>(0x0) };

  /// @brief Field fontSizeMax offset 0xffffffff size 0x4
  static constexpr float_t fontSizeMax{ static_cast<float_t>(0.0f) };

  /// @brief Field fontSizeMin offset 0xffffffff size 0x4
  static constexpr float_t fontSizeMin{ static_cast<float_t>(0.0f) };

  /// @brief Field lineSpacing offset 0xffffffff size 0x4
  static constexpr float_t lineSpacing{ static_cast<float_t>(0.0f) };

  /// @brief Field lineSpacingMax offset 0xffffffff size 0x4
  static constexpr float_t lineSpacingMax{ static_cast<float_t>(0.0f) };

  /// @brief Field maxVisibleCharacters offset 0xffffffff size 0x4
  static constexpr int32_t maxVisibleCharacters{ static_cast<int32_t>(0x1869f) };

  /// @brief Field maxVisibleLines offset 0xffffffff size 0x4
  static constexpr int32_t maxVisibleLines{ static_cast<int32_t>(0x1869f) };

  /// @brief Field maxVisibleWords offset 0xffffffff size 0x4
  static constexpr int32_t maxVisibleWords{ static_cast<int32_t>(0x1869f) };

  /// @brief Field tagNoParsing offset 0xffffffff size 0x1
  static constexpr bool tagNoParsing{ false };

  /// @brief Field useMaxVisibleDescender offset 0xffffffff size 0x1
  static constexpr bool useMaxVisibleDescender{ false };

  /// @brief Field wordWrappingRatio offset 0xffffffff size 0x4
  static constexpr float_t wordWrappingRatio{ static_cast<float_t>(0.4f) };

  /// @brief Field m_RenderedText, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::TextCore::Text::RenderedText ___m_RenderedText;

  /// @brief Field m_CachedRenderedText, offset: 0x30, size: 0x8, def value: None
  ::StringW ___m_CachedRenderedText;

  /// @brief Field screenRect, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rect ___screenRect;

  /// @brief Field fontAsset, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::FontAsset> ___fontAsset;

  /// @brief Field fontStyle, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::FontStyles ___fontStyle;

  /// @brief Field textSettings, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::TextCore::Text::TextSettings> ___textSettings;

  /// @brief Field textAlignment, offset: 0x60, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextAlignment ___textAlignment;

  /// @brief Field overflowMode, offset: 0x64, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextOverflowMode ___overflowMode;

  /// @brief Field color, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  /// @brief Field shouldConvertToLinearSpace, offset: 0x78, size: 0x1, def value: None
  bool ___shouldConvertToLinearSpace;

  /// @brief Field fontSize, offset: 0x7c, size: 0x4, def value: None
  int32_t ___fontSize;

  /// @brief Field emojiFallbackSupport, offset: 0x80, size: 0x1, def value: None
  bool ___emojiFallbackSupport;

  /// @brief Field richText, offset: 0x81, size: 0x1, def value: None
  bool ___richText;

  /// @brief Field isRightToLeft, offset: 0x82, size: 0x1, def value: None
  bool ___isRightToLeft;

  /// @brief Field extraPadding, offset: 0x84, size: 0x4, def value: None
  float_t ___extraPadding;

  /// @brief Field parseControlCharacters, offset: 0x88, size: 0x1, def value: None
  bool ___parseControlCharacters;

  /// @brief Field isPlaceholder, offset: 0x89, size: 0x1, def value: None
  bool ___isPlaceholder;

  /// @brief Field characterSpacing, offset: 0x8c, size: 0x4, def value: None
  float_t ___characterSpacing;

  /// @brief Field wordSpacing, offset: 0x90, size: 0x4, def value: None
  float_t ___wordSpacing;

  /// @brief Field paragraphSpacing, offset: 0x94, size: 0x4, def value: None
  float_t ___paragraphSpacing;

  /// @brief Field textWrappingMode, offset: 0x98, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextWrappingMode ___textWrappingMode;

  /// @brief Field fontWeight, offset: 0x9c, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::TextFontWeight ___fontWeight;

  /// @brief Field isIMGUI, offset: 0xa0, size: 0x1, def value: None
  bool ___isIMGUI;

  /// @brief Field pixelsPerPoint, offset: 0xa4, size: 0x4, def value: None
  float_t ___pixelsPerPoint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___m_RenderedText) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___m_CachedRenderedText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___screenRect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontAsset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontStyle) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___textSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___textAlignment) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___overflowMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___color) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___shouldConvertToLinearSpace) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontSize) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___emojiFallbackSupport) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___richText) == 0x81, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___isRightToLeft) == 0x82, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___extraPadding) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___parseControlCharacters) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___isPlaceholder) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___characterSpacing) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___wordSpacing) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___paragraphSpacing) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___textWrappingMode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___fontWeight) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___isIMGUI) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextGenerationSettings, ___pixelsPerPoint) == 0xa4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::TextGenerationSettings) == 0xa8, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
