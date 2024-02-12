#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__MaskableGraphic_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Text)
namespace UnityEngine::UI {
class FontData;
}
namespace UnityEngine::UI {
class ILayoutElement;
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
// Type: UnityEngine.UI::Text
// SizeInfo { instance_size: 256, native_size: -1, calculated_instance_size: 256, calculated_native_size: 256, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12997))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13026))
// CS Name: ::UnityEngine.UI::Text*
class CORDL_TYPE Text : public ::UnityEngine::UI::MaskableGraphic {
public:
  // Declarations
  /// @brief Field m_FontData, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FontData, put = __cordl_internal_set_m_FontData))::UnityEngine::UI::FontData* m_FontData;

  /// @brief Field m_Text, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::StringW m_Text;

  /// @brief Field m_TextCache, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextCache, put = __cordl_internal_set_m_TextCache))::UnityEngine::TextGenerator* m_TextCache;

  /// @brief Field m_TextCacheForLayout, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextCacheForLayout, put = __cordl_internal_set_m_TextCacheForLayout))::UnityEngine::TextGenerator* m_TextCacheForLayout;

  /// @brief Field m_DisableFontTextureRebuiltCallback, offset 0xf0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisableFontTextureRebuiltCallback, put = __cordl_internal_set_m_DisableFontTextureRebuiltCallback)) bool m_DisableFontTextureRebuiltCallback;

  /// @brief Field m_TempVerts, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempVerts, put = __cordl_internal_set_m_TempVerts))::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> m_TempVerts;

  /// @brief Field s_DefaultText, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultText, put = setStaticF_s_DefaultText))::UnityW<::UnityEngine::Material> s_DefaultText;

  __declspec(property(get = get_cachedTextGenerator))::UnityEngine::TextGenerator* cachedTextGenerator;

  __declspec(property(get = get_cachedTextGeneratorForLayout))::UnityEngine::TextGenerator* cachedTextGeneratorForLayout;

  __declspec(property(get = get_mainTexture))::UnityW<::UnityEngine::Texture> mainTexture;

  __declspec(property(get = get_font, put = set_font))::UnityW<::UnityEngine::Font> font;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = get_supportRichText, put = set_supportRichText)) bool supportRichText;

  __declspec(property(get = get_resizeTextForBestFit, put = set_resizeTextForBestFit)) bool resizeTextForBestFit;

  __declspec(property(get = get_resizeTextMinSize, put = set_resizeTextMinSize)) int32_t resizeTextMinSize;

  __declspec(property(get = get_resizeTextMaxSize, put = set_resizeTextMaxSize)) int32_t resizeTextMaxSize;

  __declspec(property(get = get_alignment, put = set_alignment))::UnityEngine::TextAnchor alignment;

  __declspec(property(get = get_alignByGeometry, put = set_alignByGeometry)) bool alignByGeometry;

  __declspec(property(get = get_fontSize, put = set_fontSize)) int32_t fontSize;

  __declspec(property(get = get_horizontalOverflow, put = set_horizontalOverflow))::UnityEngine::HorizontalWrapMode horizontalOverflow;

  __declspec(property(get = get_verticalOverflow, put = set_verticalOverflow))::UnityEngine::VerticalWrapMode verticalOverflow;

  __declspec(property(get = get_lineSpacing, put = set_lineSpacing)) float_t lineSpacing;

  __declspec(property(get = get_fontStyle, put = set_fontStyle))::UnityEngine::FontStyle fontStyle;

  __declspec(property(get = get_pixelsPerUnit)) float_t pixelsPerUnit;

  __declspec(property(get = get_minWidth)) float_t minWidth;

  __declspec(property(get = get_preferredWidth)) float_t preferredWidth;

  __declspec(property(get = get_flexibleWidth)) float_t flexibleWidth;

  __declspec(property(get = get_minHeight)) float_t minHeight;

  __declspec(property(get = get_preferredHeight)) float_t preferredHeight;

  __declspec(property(get = get_flexibleHeight)) float_t flexibleHeight;

  __declspec(property(get = get_layoutPriority)) int32_t layoutPriority;

  /// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
  constexpr operator ::UnityEngine::UI::ILayoutElement*() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutElement"
  constexpr ::UnityEngine::UI::ILayoutElement* i___UnityEngine__UI__ILayoutElement() noexcept;

  constexpr ::UnityEngine::UI::FontData*& __cordl_internal_get_m_FontData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::FontData*> const& __cordl_internal_get_m_FontData() const;

  constexpr void __cordl_internal_set_m_FontData(::UnityEngine::UI::FontData* value);

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr ::UnityEngine::TextGenerator*& __cordl_internal_get_m_TextCache();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextGenerator*> const& __cordl_internal_get_m_TextCache() const;

  constexpr void __cordl_internal_set_m_TextCache(::UnityEngine::TextGenerator* value);

  constexpr ::UnityEngine::TextGenerator*& __cordl_internal_get_m_TextCacheForLayout();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextGenerator*> const& __cordl_internal_get_m_TextCacheForLayout() const;

  constexpr void __cordl_internal_set_m_TextCacheForLayout(::UnityEngine::TextGenerator* value);

  constexpr bool& __cordl_internal_get_m_DisableFontTextureRebuiltCallback();

  constexpr bool const& __cordl_internal_get_m_DisableFontTextureRebuiltCallback() const;

  constexpr void __cordl_internal_set_m_DisableFontTextureRebuiltCallback(bool value);

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*>& __cordl_internal_get_m_TempVerts();

  constexpr ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> const& __cordl_internal_get_m_TempVerts() const;

  constexpr void __cordl_internal_set_m_TempVerts(::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> value);

  static inline void setStaticF_s_DefaultText(::UnityW<::UnityEngine::Material> value);

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_DefaultText();

  static inline ::UnityEngine::UI::Text* New_ctor();

  /// @brief Method .ctor, addr 0x2da7f28, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cachedTextGenerator, addr 0x2da7fc0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerator* get_cachedTextGenerator();

  /// @brief Method get_cachedTextGeneratorForLayout, addr 0x2da8058, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerator* get_cachedTextGeneratorForLayout();

  /// @brief Method get_mainTexture, addr 0x2da80c4, size 0x1a8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_mainTexture();

  /// @brief Method FontTextureChanged, addr 0x2da8288, size 0x10c, virtual false, abstract: false, final false
  inline void FontTextureChanged();

  /// @brief Method get_font, addr 0x2da826c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_font();

  /// @brief Method set_font, addr 0x2da8394, size 0x10c, virtual false, abstract: false, final false
  inline void set_font(::UnityEngine::Font* value);

  /// @brief Method get_text, addr 0x2da84a0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x2da84a8, size 0xc8, virtual true, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method get_supportRichText, addr 0x2da8570, size 0x1c, virtual false, abstract: false, final false
  inline bool get_supportRichText();

  /// @brief Method set_supportRichText, addr 0x2da858c, size 0x60, virtual false, abstract: false, final false
  inline void set_supportRichText(bool value);

  /// @brief Method get_resizeTextForBestFit, addr 0x2da85ec, size 0x1c, virtual false, abstract: false, final false
  inline bool get_resizeTextForBestFit();

  /// @brief Method set_resizeTextForBestFit, addr 0x2da8608, size 0x60, virtual false, abstract: false, final false
  inline void set_resizeTextForBestFit(bool value);

  /// @brief Method get_resizeTextMinSize, addr 0x2da8668, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_resizeTextMinSize();

  /// @brief Method set_resizeTextMinSize, addr 0x2da8684, size 0x54, virtual false, abstract: false, final false
  inline void set_resizeTextMinSize(int32_t value);

  /// @brief Method get_resizeTextMaxSize, addr 0x2da86d8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_resizeTextMaxSize();

  /// @brief Method set_resizeTextMaxSize, addr 0x2da86f4, size 0x54, virtual false, abstract: false, final false
  inline void set_resizeTextMaxSize(int32_t value);

  /// @brief Method get_alignment, addr 0x2da8748, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAnchor get_alignment();

  /// @brief Method set_alignment, addr 0x2da8764, size 0x54, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::TextAnchor value);

  /// @brief Method get_alignByGeometry, addr 0x2da87b8, size 0x1c, virtual false, abstract: false, final false
  inline bool get_alignByGeometry();

  /// @brief Method set_alignByGeometry, addr 0x2da87d4, size 0x48, virtual false, abstract: false, final false
  inline void set_alignByGeometry(bool value);

  /// @brief Method get_fontSize, addr 0x2da881c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_fontSize();

  /// @brief Method set_fontSize, addr 0x2da8838, size 0x54, virtual false, abstract: false, final false
  inline void set_fontSize(int32_t value);

  /// @brief Method get_horizontalOverflow, addr 0x2da888c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::HorizontalWrapMode get_horizontalOverflow();

  /// @brief Method set_horizontalOverflow, addr 0x2da88a8, size 0x54, virtual false, abstract: false, final false
  inline void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value);

  /// @brief Method get_verticalOverflow, addr 0x2da88fc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::VerticalWrapMode get_verticalOverflow();

  /// @brief Method set_verticalOverflow, addr 0x2da8918, size 0x54, virtual false, abstract: false, final false
  inline void set_verticalOverflow(::UnityEngine::VerticalWrapMode value);

  /// @brief Method get_lineSpacing, addr 0x2da896c, size 0x1c, virtual false, abstract: false, final false
  inline float_t get_lineSpacing();

  /// @brief Method set_lineSpacing, addr 0x2da8988, size 0x54, virtual false, abstract: false, final false
  inline void set_lineSpacing(float_t value);

  /// @brief Method get_fontStyle, addr 0x2da89dc, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::FontStyle get_fontStyle();

  /// @brief Method set_fontStyle, addr 0x2da89f8, size 0x54, virtual false, abstract: false, final false
  inline void set_fontStyle(::UnityEngine::FontStyle value);

  /// @brief Method get_pixelsPerUnit, addr 0x2da8a4c, size 0x148, virtual false, abstract: false, final false
  inline float_t get_pixelsPerUnit();

  /// @brief Method OnEnable, addr 0x2da8b94, size 0x7c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2da8c10, size 0x64, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method UpdateGeometry, addr 0x2da8c74, size 0x88, virtual true, abstract: false, final false
  inline void UpdateGeometry();

  /// @brief Method AssignDefaultFont, addr 0x2da8cfc, size 0x70, virtual false, abstract: false, final false
  inline void AssignDefaultFont();

  /// @brief Method AssignDefaultFontIfNecessary, addr 0x2da8d6c, size 0xbc, virtual false, abstract: false, final false
  inline void AssignDefaultFontIfNecessary();

  /// @brief Method GetGenerationSettings, addr 0x2da8e28, size 0x1ec, virtual false, abstract: false, final false
  inline ::UnityEngine::TextGenerationSettings GetGenerationSettings(::UnityEngine::Vector2 extents);

  /// @brief Method GetTextAnchorPivot, addr 0x2da9014, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetTextAnchorPivot(::UnityEngine::TextAnchor anchor);

  /// @brief Method OnPopulateMesh, addr 0x2da9080, size 0x5f0, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill);

  /// @brief Method CalculateLayoutInputHorizontal, addr 0x2da9780, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputHorizontal();

  /// @brief Method CalculateLayoutInputVertical, addr 0x2da9784, size 0x4, virtual true, abstract: false, final false
  inline void CalculateLayoutInputVertical();

  /// @brief Method get_minWidth, addr 0x2da9788, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minWidth();

  /// @brief Method get_preferredWidth, addr 0x2da9790, size 0xdc, virtual true, abstract: false, final false
  inline float_t get_preferredWidth();

  /// @brief Method get_flexibleWidth, addr 0x2da986c, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleWidth();

  /// @brief Method get_minHeight, addr 0x2da9874, size 0x8, virtual true, abstract: false, final false
  inline float_t get_minHeight();

  /// @brief Method get_preferredHeight, addr 0x2da987c, size 0xc8, virtual true, abstract: false, final false
  inline float_t get_preferredHeight();

  /// @brief Method get_flexibleHeight, addr 0x2da9944, size 0x8, virtual true, abstract: false, final false
  inline float_t get_flexibleHeight();

  /// @brief Method get_layoutPriority, addr 0x2da994c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_layoutPriority();

  // Ctor Parameters [CppParam { name: "", ty: "Text", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Text(Text&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Text", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Text(Text const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Text();

public:
  /// @brief Field m_FontData, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UI::FontData* ___m_FontData;

  /// @brief Field m_Text, offset: 0xd8, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_TextCache, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::TextGenerator* ___m_TextCache;

  /// @brief Field m_TextCacheForLayout, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::TextGenerator* ___m_TextCacheForLayout;

  /// @brief Field m_DisableFontTextureRebuiltCallback, offset: 0xf0, size: 0x1, def value: None
  bool ___m_DisableFontTextureRebuiltCallback;

  /// @brief Field m_TempVerts, offset: 0xf8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIVertex, ::Array<::UnityEngine::UIVertex>*> ___m_TempVerts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Text, 0x100>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_FontData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_Text) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_TextCache) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_TextCacheForLayout) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_DisableFontTextureRebuiltCallback) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Text, ___m_TempVerts) == 0xf8, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::Text);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Text*, "UnityEngine.UI", "Text");
