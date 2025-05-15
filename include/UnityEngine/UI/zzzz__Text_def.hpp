#pragma once
// IWYU pragma private; include "UnityEngine/UI/Text.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Text)
namespace UnityEngine::UI {
class FontData;
}
namespace UnityEngine::UI {
class VertexHelper;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextGenerationSettings;
}
namespace UnityEngine {
class TextGenerator;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct UIVertex;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
// Forward declare root types
namespace UnityEngine::UI {
class Text;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::Text);
// Dependencies UnityEngine.UI.ILayoutElement, UnityEngine.UI.MaskableGraphic
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Text
class CORDL_TYPE Text : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  __declspec(property(get = get_alignByGeometry, put = set_alignByGeometry)) bool alignByGeometry;

  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::TextAnchor alignment;

  __declspec(property(get = get_cachedTextGenerator)) ::UnityEngine::TextGenerator* cachedTextGenerator;

  __declspec(property(get = get_cachedTextGeneratorForLayout)) ::UnityEngine::TextGenerator* cachedTextGeneratorForLayout;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_font, put = set_font)) ::UnityW<::UnityEngine::Font> font;

  __declspec(property(get = get_fontSize, put = set_fontSize)) int32_t fontSize;

  __declspec(property(get = get_fontStyle, put = set_fontStyle)) ::UnityEngine::FontStyle fontStyle;

  __declspec(property(get = get_horizontalOverflow, put = set_horizontalOverflow)) ::UnityEngine::HorizontalWrapMode horizontalOverflow;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  __declspec(property(get = get_lineSpacing, put = set_lineSpacing)) float_t lineSpacing;

  /// @brief Field m_DisableFontTextureRebuiltCallback, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableFontTextureRebuiltCallback, put = __cordl_internal_set_m_DisableFontTextureRebuiltCallback)) bool m_DisableFontTextureRebuiltCallback;

  /// @brief Field m_FontData, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontData, put = __cordl_internal_set_m_FontData)) ::UnityEngine::UI::FontData* m_FontData;

  /// @brief Field m_TempVerts, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempVerts, put = __cordl_internal_set_m_TempVerts)) ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> m_TempVerts;

  /// @brief Field m_Text, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  /// @brief Field m_TextCache, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextCache, put = __cordl_internal_set_m_TextCache)) ::UnityEngine::TextGenerator* m_TextCache;

  /// @brief Field m_TextCacheForLayout, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextCacheForLayout, put = __cordl_internal_set_m_TextCacheForLayout)) ::UnityEngine::TextGenerator* m_TextCacheForLayout;

  __declspec(property(get = get_mainTexture)) ::UnityW<::UnityEngine::Texture> mainTexture;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_resizeTextForBestFit, put = set_resizeTextForBestFit)) bool resizeTextForBestFit;

  __declspec(property(get = get_resizeTextMaxSize, put = set_resizeTextMaxSize)) int32_t resizeTextMaxSize;

  __declspec(property(get = get_resizeTextMinSize, put = set_resizeTextMinSize)) int32_t resizeTextMinSize;

  /// @brief Field s_DefaultText, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultText, put = setStaticF_s_DefaultText)) ::UnityW<::UnityEngine::Material> s_DefaultText;

  __declspec(property(get = get_supportRichText, put = set_supportRichText)) bool supportRichText;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_verticalOverflow, put = set_verticalOverflow)) ::UnityEngine::VerticalWrapMode verticalOverflow;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Method AssignDefaultFont, addr 0x4ace2e0, size 0x70, virtual false, abstract: false, final false
  inline void AssignDefaultFont();

  /// @brief Method AssignDefaultFontIfNecessary, addr 0x4ace350, size 0xbc, virtual false, abstract: false, final false
  inline void AssignDefaultFontIfNecessary();

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x4aced54, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x4aced58, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method FontTextureChanged, addr 0x4acd864, size 0x10c, virtual false, abstract: false, final false
  inline void FontTextureChanged();

  /// @brief Method GetGenerationSettings, addr 0x4ace40c, size 0x1f0, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerationSettings GetGenerationSettings(::UnityEngine::Vector2 extents);

  /// @brief Method GetTextAnchorPivot, addr 0x4ace5fc, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetTextAnchorPivot(::UnityEngine::TextAnchor anchor);

  static inline ::UnityEngine::UI::Text* New_ctor();

  /// @brief Method OnDisable, addr 0x4ace1f4, size 0x64, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4ace178, size 0x7c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPopulateMesh, addr 0x4ace668, size 0x5dc, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method UpdateGeometry, addr 0x4ace258, size 0x88, virtual true, abstract: false, final false
  inline void UpdateGeometry();

  constexpr bool const& __cordl_internal_get_m_DisableFontTextureRebuiltCallback() const;

  constexpr bool& __cordl_internal_get_m_DisableFontTextureRebuiltCallback();

  constexpr ::UnityEngine::UI::FontData* const& __cordl_internal_get_m_FontData() const;

  constexpr ::UnityEngine::UI::FontData*& __cordl_internal_get_m_FontData();

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> const& __cordl_internal_get_m_TempVerts() const;

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*>& __cordl_internal_get_m_TempVerts();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::TextGenerator* const& __cordl_internal_get_m_TextCache() const;

  constexpr ::UnityEngine::TextGenerator*& __cordl_internal_get_m_TextCache();

  constexpr ::UnityEngine::TextGenerator* const& __cordl_internal_get_m_TextCacheForLayout() const;

  constexpr ::UnityEngine::TextGenerator*& __cordl_internal_get_m_TextCacheForLayout();

  constexpr void __cordl_internal_set_m_DisableFontTextureRebuiltCallback(bool value);

  constexpr void __cordl_internal_set_m_FontData(::UnityEngine::UI::FontData* value);

  constexpr void __cordl_internal_set_m_TempVerts(::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TextCache(::UnityEngine::TextGenerator* value);

  constexpr void __cordl_internal_set_m_TextCacheForLayout(::UnityEngine::TextGenerator* value);

  /// @brief Method .ctor, addr 0x4acd51c, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_DefaultText();

  /// @brief Method get_alignByGeometry, addr 0x4acdd9c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_alignByGeometry();

  /// @brief Method get_alignment, addr 0x4acdd2c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAnchor get_alignment();

  /// @brief Method get_cachedTextGenerator, addr 0x4acd5b4, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerator* get_cachedTextGenerator();

  /// @brief Method get_cachedTextGeneratorForLayout, addr 0x4acd63c, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerator* get_cachedTextGeneratorForLayout();

  /// @brief Method get_flexibleHeight, addr 0x4acef08, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_flexibleWidth, addr 0x4acee40, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_font, addr 0x4acd848, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_font();

  /// @brief Method get_fontSize, addr 0x4acde00, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_fontSize();

  /// @brief Method get_fontStyle, addr 0x4acdfc0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::FontStyle get_fontStyle();

  /// @brief Method get_horizontalOverflow, addr 0x4acde70, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::HorizontalWrapMode get_horizontalOverflow();

  /// @brief Method get_layoutPriority, addr 0x4acef10, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  /// @brief Method get_lineSpacing, addr 0x4acdf50, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_lineSpacing();

  /// @brief Method get_mainTexture, addr 0x4acd6a0, size 0x1a8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method get_minHeight, addr 0x4acee48, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_minWidth, addr 0x4aced5c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_pixelsPerUnit, addr 0x4ace030, size 0x148, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method get_preferredHeight, addr 0x4acee50, size 0xb8, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_preferredWidth, addr 0x4aced64, size 0xdc, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_resizeTextForBestFit, addr 0x4acdbd0, size 0x1c, virtual false, abstract: false, final false
  inline bool get_resizeTextForBestFit();

  /// @brief Method get_resizeTextMaxSize, addr 0x4acdcbc, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_resizeTextMaxSize();

  /// @brief Method get_resizeTextMinSize, addr 0x4acdc4c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_resizeTextMinSize();

  /// @brief Method get_supportRichText, addr 0x4acdb54, size 0x1c, virtual false, abstract: false, final false
  inline bool get_supportRichText();

  /// @brief Method get_text, addr 0x4acda84, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_verticalOverflow, addr 0x4acdee0, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::VerticalWrapMode get_verticalOverflow();

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  static inline void setStaticF_s_DefaultText(::UnityW<::UnityEngine::Material> value);

  /// @brief Method set_alignByGeometry, addr 0x4acddb8, size 0x48, virtual false, abstract: false, final false
  inline void set_alignByGeometry(bool value);

  /// @brief Method set_alignment, addr 0x4acdd48, size 0x54, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::TextAnchor value);

  /// @brief Method set_font, addr 0x4acd970, size 0x114, virtual false, abstract: false, final false
  inline void set_font(::UnityEngine::Font* value);

  /// @brief Method set_fontSize, addr 0x4acde1c, size 0x54, virtual false, abstract: false, final false
  inline void set_fontSize(int32_t value);

  /// @brief Method set_fontStyle, addr 0x4acdfdc, size 0x54, virtual false, abstract: false, final false
  inline void set_fontStyle(::UnityEngine::FontStyle value);

  /// @brief Method set_horizontalOverflow, addr 0x4acde8c, size 0x54, virtual false, abstract: false, final false
  inline void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value);

  /// @brief Method set_lineSpacing, addr 0x4acdf6c, size 0x54, virtual false, abstract: false, final false
  inline void set_lineSpacing(float_t value);

  /// @brief Method set_resizeTextForBestFit, addr 0x4acdbec, size 0x60, virtual false, abstract: false, final false
  inline void set_resizeTextForBestFit(bool value);

  /// @brief Method set_resizeTextMaxSize, addr 0x4acdcd8, size 0x54, virtual false, abstract: false, final false
  inline void set_resizeTextMaxSize(int32_t value);

  /// @brief Method set_resizeTextMinSize, addr 0x4acdc68, size 0x54, virtual false, abstract: false, final false
  inline void set_resizeTextMinSize(int32_t value);

  /// @brief Method set_supportRichText, addr 0x4acdb70, size 0x60, virtual false, abstract: false, final false
  inline void set_supportRichText(bool value);

  /// @brief Method set_text, addr 0x4acda8c, size 0xc8, virtual true, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_verticalOverflow, addr 0x4acdefc, size 0x54, virtual false, abstract: false, final false
  inline void set_verticalOverflow(::UnityEngine::VerticalWrapMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Text();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Text", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Text(Text&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Text", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Text(Text const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15144 };

  /// @brief Field m_FontData, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UI::FontData* ___m_FontData;

  /// @brief Field m_Text, offset: 0xe0, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_TextCache, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::TextGenerator* ___m_TextCache;

  /// @brief Field m_TextCacheForLayout, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::TextGenerator* ___m_TextCacheForLayout;

  /// @brief Field m_DisableFontTextureRebuiltCallback, offset: 0xf8, size: 0x1, def value: None
  bool ___m_DisableFontTextureRebuiltCallback;

  /// @brief Field m_TempVerts, offset: 0x100, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> ___m_TempVerts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Text, ___m_FontData) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_Text) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_TextCache) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_TextCacheForLayout) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_DisableFontTextureRebuiltCallback) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_TempVerts) == 0x100, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Text, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Text);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Text*, "UnityEngine.UI", "Text");
