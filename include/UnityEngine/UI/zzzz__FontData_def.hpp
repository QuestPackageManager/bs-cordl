#pragma once
// IWYU pragma private; include "UnityEngine/UI/FontData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FontData)
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
struct TextAnchor;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
// Forward declare root types
namespace UnityEngine::UI {
class FontData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::FontData);
// Dependencies System.Object, UnityEngine.FontStyle, UnityEngine.HorizontalWrapMode, UnityEngine.ISerializationCallbackReceiver, UnityEngine.TextAnchor, UnityEngine.VerticalWrapMode
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.FontData
class CORDL_TYPE FontData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_alignByGeometry, put = set_alignByGeometry)) bool alignByGeometry;

  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::TextAnchor alignment;

  __declspec(property(get = get_bestFit, put = set_bestFit)) bool bestFit;

  __declspec(property(get = get_font, put = set_font)) ::UnityW<::UnityEngine::Font> font;

  __declspec(property(get = get_fontSize, put = set_fontSize)) int32_t fontSize;

  __declspec(property(get = get_fontStyle, put = set_fontStyle)) ::UnityEngine::FontStyle fontStyle;

  __declspec(property(get = get_horizontalOverflow, put = set_horizontalOverflow)) ::UnityEngine::HorizontalWrapMode horizontalOverflow;

  __declspec(property(get = get_lineSpacing, put = set_lineSpacing)) float_t lineSpacing;

  /// @brief Field m_AlignByGeometry, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AlignByGeometry, put = __cordl_internal_set_m_AlignByGeometry)) bool m_AlignByGeometry;

  /// @brief Field m_Alignment, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Alignment, put = __cordl_internal_set_m_Alignment)) ::UnityEngine::TextAnchor m_Alignment;

  /// @brief Field m_BestFit, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BestFit, put = __cordl_internal_set_m_BestFit)) bool m_BestFit;

  /// @brief Field m_Font, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Font, put = __cordl_internal_set_m_Font)) ::UnityW<::UnityEngine::Font> m_Font;

  /// @brief Field m_FontSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontSize, put = __cordl_internal_set_m_FontSize)) int32_t m_FontSize;

  /// @brief Field m_FontStyle, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FontStyle, put = __cordl_internal_set_m_FontStyle)) ::UnityEngine::FontStyle m_FontStyle;

  /// @brief Field m_HorizontalOverflow, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HorizontalOverflow, put = __cordl_internal_set_m_HorizontalOverflow)) ::UnityEngine::HorizontalWrapMode m_HorizontalOverflow;

  /// @brief Field m_LineSpacing, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LineSpacing, put = __cordl_internal_set_m_LineSpacing)) float_t m_LineSpacing;

  /// @brief Field m_MaxSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxSize, put = __cordl_internal_set_m_MaxSize)) int32_t m_MaxSize;

  /// @brief Field m_MinSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinSize, put = __cordl_internal_set_m_MinSize)) int32_t m_MinSize;

  /// @brief Field m_RichText, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RichText, put = __cordl_internal_set_m_RichText)) bool m_RichText;

  /// @brief Field m_VerticalOverflow, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VerticalOverflow, put = __cordl_internal_set_m_VerticalOverflow)) ::UnityEngine::VerticalWrapMode m_VerticalOverflow;

  __declspec(property(get = get_maxSize, put = set_maxSize)) int32_t maxSize;

  __declspec(property(get = get_minSize, put = set_minSize)) int32_t minSize;

  __declspec(property(get = get_richText, put = set_richText)) bool richText;

  __declspec(property(get = get_verticalOverflow, put = set_verticalOverflow)) ::UnityEngine::VerticalWrapMode verticalOverflow;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  static inline ::UnityEngine::UI::FontData* New_ctor();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x4961a98, size 0x44, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x4961a94, size 0x4, virtual true, abstract: false, final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  constexpr bool const& __cordl_internal_get_m_AlignByGeometry() const;

  constexpr bool& __cordl_internal_get_m_AlignByGeometry();

  constexpr ::UnityEngine::TextAnchor const& __cordl_internal_get_m_Alignment() const;

  constexpr ::UnityEngine::TextAnchor& __cordl_internal_get_m_Alignment();

  constexpr bool const& __cordl_internal_get_m_BestFit() const;

  constexpr bool& __cordl_internal_get_m_BestFit();

  constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_m_Font() const;

  constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_m_Font();

  constexpr int32_t const& __cordl_internal_get_m_FontSize() const;

  constexpr int32_t& __cordl_internal_get_m_FontSize();

  constexpr ::UnityEngine::FontStyle const& __cordl_internal_get_m_FontStyle() const;

  constexpr ::UnityEngine::FontStyle& __cordl_internal_get_m_FontStyle();

  constexpr ::UnityEngine::HorizontalWrapMode const& __cordl_internal_get_m_HorizontalOverflow() const;

  constexpr ::UnityEngine::HorizontalWrapMode& __cordl_internal_get_m_HorizontalOverflow();

  constexpr float_t const& __cordl_internal_get_m_LineSpacing() const;

  constexpr float_t& __cordl_internal_get_m_LineSpacing();

  constexpr int32_t const& __cordl_internal_get_m_MaxSize() const;

  constexpr int32_t& __cordl_internal_get_m_MaxSize();

  constexpr int32_t const& __cordl_internal_get_m_MinSize() const;

  constexpr int32_t& __cordl_internal_get_m_MinSize();

  constexpr bool const& __cordl_internal_get_m_RichText() const;

  constexpr bool& __cordl_internal_get_m_RichText();

  constexpr ::UnityEngine::VerticalWrapMode const& __cordl_internal_get_m_VerticalOverflow() const;

  constexpr ::UnityEngine::VerticalWrapMode& __cordl_internal_get_m_VerticalOverflow();

  constexpr void __cordl_internal_set_m_AlignByGeometry(bool value);

  constexpr void __cordl_internal_set_m_Alignment(::UnityEngine::TextAnchor value);

  constexpr void __cordl_internal_set_m_BestFit(bool value);

  constexpr void __cordl_internal_set_m_Font(::UnityW<::UnityEngine::Font> value);

  constexpr void __cordl_internal_set_m_FontSize(int32_t value);

  constexpr void __cordl_internal_set_m_FontStyle(::UnityEngine::FontStyle value);

  constexpr void __cordl_internal_set_m_HorizontalOverflow(::UnityEngine::HorizontalWrapMode value);

  constexpr void __cordl_internal_set_m_LineSpacing(float_t value);

  constexpr void __cordl_internal_set_m_MaxSize(int32_t value);

  constexpr void __cordl_internal_set_m_MinSize(int32_t value);

  constexpr void __cordl_internal_set_m_RichText(bool value);

  constexpr void __cordl_internal_set_m_VerticalOverflow(::UnityEngine::VerticalWrapMode value);

  /// @brief Method .ctor, addr 0x49619c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_alignByGeometry, addr 0x4961a3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_alignByGeometry();

  /// @brief Method get_alignment, addr 0x4961a2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAnchor get_alignment();

  /// @brief Method get_bestFit, addr 0x49619f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_bestFit();

  /// @brief Method get_defaultFontData, addr 0x4961930, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::FontData* get_defaultFontData();

  /// @brief Method get_font, addr 0x49619c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_font();

  /// @brief Method get_fontSize, addr 0x49619d8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_fontSize();

  /// @brief Method get_fontStyle, addr 0x49619e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::FontStyle get_fontStyle();

  /// @brief Method get_horizontalOverflow, addr 0x4961a64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::HorizontalWrapMode get_horizontalOverflow();

  /// @brief Method get_lineSpacing, addr 0x4961a84, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lineSpacing();

  /// @brief Method get_maxSize, addr 0x4961a1c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxSize();

  /// @brief Method get_minSize, addr 0x4961a0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_minSize();

  /// @brief Method get_richText, addr 0x4961a50, size 0x8, virtual false, abstract: false, final false
  inline bool get_richText();

  /// @brief Method get_verticalOverflow, addr 0x4961a74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::VerticalWrapMode get_verticalOverflow();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Method set_alignByGeometry, addr 0x4961a44, size 0xc, virtual false, abstract: false, final false
  inline void set_alignByGeometry(bool value);

  /// @brief Method set_alignment, addr 0x4961a34, size 0x8, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::TextAnchor value);

  /// @brief Method set_bestFit, addr 0x4961a00, size 0xc, virtual false, abstract: false, final false
  inline void set_bestFit(bool value);

  /// @brief Method set_font, addr 0x49619d0, size 0x8, virtual false, abstract: false, final false
  inline void set_font(::UnityEngine::Font* value);

  /// @brief Method set_fontSize, addr 0x49619e0, size 0x8, virtual false, abstract: false, final false
  inline void set_fontSize(int32_t value);

  /// @brief Method set_fontStyle, addr 0x49619f0, size 0x8, virtual false, abstract: false, final false
  inline void set_fontStyle(::UnityEngine::FontStyle value);

  /// @brief Method set_horizontalOverflow, addr 0x4961a6c, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value);

  /// @brief Method set_lineSpacing, addr 0x4961a8c, size 0x8, virtual false, abstract: false, final false
  inline void set_lineSpacing(float_t value);

  /// @brief Method set_maxSize, addr 0x4961a24, size 0x8, virtual false, abstract: false, final false
  inline void set_maxSize(int32_t value);

  /// @brief Method set_minSize, addr 0x4961a14, size 0x8, virtual false, abstract: false, final false
  inline void set_minSize(int32_t value);

  /// @brief Method set_richText, addr 0x4961a58, size 0xc, virtual false, abstract: false, final false
  inline void set_richText(bool value);

  /// @brief Method set_verticalOverflow, addr 0x4961a7c, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalOverflow(::UnityEngine::VerticalWrapMode value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FontData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontData(FontData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontData(FontData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15056 };

  /// @brief Field m_Font, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> ___m_Font;

  /// @brief Field m_FontSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_FontSize;

  /// @brief Field m_FontStyle, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::FontStyle ___m_FontStyle;

  /// @brief Field m_BestFit, offset: 0x20, size: 0x1, def value: None
  bool ___m_BestFit;

  /// @brief Field m_MinSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_MinSize;

  /// @brief Field m_MaxSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_MaxSize;

  /// @brief Field m_Alignment, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::TextAnchor ___m_Alignment;

  /// @brief Field m_AlignByGeometry, offset: 0x30, size: 0x1, def value: None
  bool ___m_AlignByGeometry;

  /// @brief Field m_RichText, offset: 0x31, size: 0x1, def value: None
  bool ___m_RichText;

  /// @brief Field m_HorizontalOverflow, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::HorizontalWrapMode ___m_HorizontalOverflow;

  /// @brief Field m_VerticalOverflow, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::VerticalWrapMode ___m_VerticalOverflow;

  /// @brief Field m_LineSpacing, offset: 0x3c, size: 0x4, def value: None
  float_t ___m_LineSpacing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::FontData, ___m_Font) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_FontSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_FontStyle) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_BestFit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_MinSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_MaxSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_Alignment) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_AlignByGeometry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_RichText) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_HorizontalOverflow) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_VerticalOverflow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::FontData, ___m_LineSpacing) == 0x3c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::FontData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::FontData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::FontData*, "UnityEngine.UI", "FontData");
