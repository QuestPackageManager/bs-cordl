#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FontData)
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
struct HorizontalWrapMode;
}
namespace UnityEngine {
struct VerticalWrapMode;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct FontStyle;
}
// Forward declare root types
namespace UnityEngine::UI {
class FontData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::FontData);
// Type: UnityEngine.UI::FontData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15788)), TypeDefinitionIndex(TypeDefinitionIndex(15794)),
// TypeDefinitionIndex(TypeDefinitionIndex(15793)), TypeDefinitionIndex(TypeDefinitionIndex(15795))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13045)) CS Name: ::UnityEngine.UI::FontData*
class CORDL_TYPE FontData : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Font, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Font, put = __set_m_Font))::UnityEngine::Font* m_Font;

  /// @brief Field m_FontSize, offset 0x18, size 0x4
  __declspec(property(get = __get_m_FontSize, put = __set_m_FontSize)) int32_t m_FontSize;

  /// @brief Field m_FontStyle, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_FontStyle, put = __set_m_FontStyle))::UnityEngine::FontStyle m_FontStyle;

  /// @brief Field m_BestFit, offset 0x20, size 0x1
  __declspec(property(get = __get_m_BestFit, put = __set_m_BestFit)) bool m_BestFit;

  /// @brief Field m_MinSize, offset 0x24, size 0x4
  __declspec(property(get = __get_m_MinSize, put = __set_m_MinSize)) int32_t m_MinSize;

  /// @brief Field m_MaxSize, offset 0x28, size 0x4
  __declspec(property(get = __get_m_MaxSize, put = __set_m_MaxSize)) int32_t m_MaxSize;

  /// @brief Field m_Alignment, offset 0x2c, size 0x4
  __declspec(property(get = __get_m_Alignment, put = __set_m_Alignment))::UnityEngine::TextAnchor m_Alignment;

  /// @brief Field m_AlignByGeometry, offset 0x30, size 0x1
  __declspec(property(get = __get_m_AlignByGeometry, put = __set_m_AlignByGeometry)) bool m_AlignByGeometry;

  /// @brief Field m_RichText, offset 0x31, size 0x1
  __declspec(property(get = __get_m_RichText, put = __set_m_RichText)) bool m_RichText;

  /// @brief Field m_HorizontalOverflow, offset 0x34, size 0x4
  __declspec(property(get = __get_m_HorizontalOverflow, put = __set_m_HorizontalOverflow))::UnityEngine::HorizontalWrapMode m_HorizontalOverflow;

  /// @brief Field m_VerticalOverflow, offset 0x38, size 0x4
  __declspec(property(get = __get_m_VerticalOverflow, put = __set_m_VerticalOverflow))::UnityEngine::VerticalWrapMode m_VerticalOverflow;

  /// @brief Field m_LineSpacing, offset 0x3c, size 0x4
  __declspec(property(get = __get_m_LineSpacing, put = __set_m_LineSpacing)) float_t m_LineSpacing;

  __declspec(property(get = get_font, put = set_font))::UnityEngine::Font* font;

  __declspec(property(get = get_fontSize, put = set_fontSize)) int32_t fontSize;

  __declspec(property(get = get_fontStyle, put = set_fontStyle))::UnityEngine::FontStyle fontStyle;

  __declspec(property(get = get_bestFit, put = set_bestFit)) bool bestFit;

  __declspec(property(get = get_minSize, put = set_minSize)) int32_t minSize;

  __declspec(property(get = get_maxSize, put = set_maxSize)) int32_t maxSize;

  __declspec(property(get = get_alignment, put = set_alignment))::UnityEngine::TextAnchor alignment;

  __declspec(property(get = get_alignByGeometry, put = set_alignByGeometry)) bool alignByGeometry;

  __declspec(property(get = get_richText, put = set_richText)) bool richText;

  __declspec(property(get = get_horizontalOverflow, put = set_horizontalOverflow))::UnityEngine::HorizontalWrapMode horizontalOverflow;

  __declspec(property(get = get_verticalOverflow, put = set_verticalOverflow))::UnityEngine::VerticalWrapMode verticalOverflow;

  __declspec(property(get = get_lineSpacing, put = set_lineSpacing)) float_t lineSpacing;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  constexpr ::UnityEngine::Font*& __get_m_Font();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> const& __get_m_Font() const;

  constexpr void __set_m_Font(::UnityEngine::Font* value);

  constexpr int32_t& __get_m_FontSize();

  constexpr int32_t const& __get_m_FontSize() const;

  constexpr void __set_m_FontSize(int32_t value);

  constexpr ::UnityEngine::FontStyle& __get_m_FontStyle();

  constexpr ::UnityEngine::FontStyle const& __get_m_FontStyle() const;

  constexpr void __set_m_FontStyle(::UnityEngine::FontStyle value);

  constexpr bool& __get_m_BestFit();

  constexpr bool const& __get_m_BestFit() const;

  constexpr void __set_m_BestFit(bool value);

  constexpr int32_t& __get_m_MinSize();

  constexpr int32_t const& __get_m_MinSize() const;

  constexpr void __set_m_MinSize(int32_t value);

  constexpr int32_t& __get_m_MaxSize();

  constexpr int32_t const& __get_m_MaxSize() const;

  constexpr void __set_m_MaxSize(int32_t value);

  constexpr ::UnityEngine::TextAnchor& __get_m_Alignment();

  constexpr ::UnityEngine::TextAnchor const& __get_m_Alignment() const;

  constexpr void __set_m_Alignment(::UnityEngine::TextAnchor value);

  constexpr bool& __get_m_AlignByGeometry();

  constexpr bool const& __get_m_AlignByGeometry() const;

  constexpr void __set_m_AlignByGeometry(bool value);

  constexpr bool& __get_m_RichText();

  constexpr bool const& __get_m_RichText() const;

  constexpr void __set_m_RichText(bool value);

  constexpr ::UnityEngine::HorizontalWrapMode& __get_m_HorizontalOverflow();

  constexpr ::UnityEngine::HorizontalWrapMode const& __get_m_HorizontalOverflow() const;

  constexpr void __set_m_HorizontalOverflow(::UnityEngine::HorizontalWrapMode value);

  constexpr ::UnityEngine::VerticalWrapMode& __get_m_VerticalOverflow();

  constexpr ::UnityEngine::VerticalWrapMode const& __get_m_VerticalOverflow() const;

  constexpr void __set_m_VerticalOverflow(::UnityEngine::VerticalWrapMode value);

  constexpr float_t& __get_m_LineSpacing();

  constexpr float_t const& __get_m_LineSpacing() const;

  constexpr void __set_m_LineSpacing(float_t value);

  /// @brief Method get_defaultFontData addr 0x2bf2ce8 size 0x90 virtual false final false
  static inline ::UnityEngine::UI::FontData* get_defaultFontData();

  /// @brief Method get_font addr 0x2bf2d80 size 0x8 virtual false final false
  inline ::UnityEngine::Font* get_font();

  /// @brief Method set_font addr 0x2bf2d88 size 0x8 virtual false final false
  inline void set_font(::UnityEngine::Font* value);

  /// @brief Method get_fontSize addr 0x2bf2d90 size 0x8 virtual false final false
  inline int32_t get_fontSize();

  /// @brief Method set_fontSize addr 0x2bf2d98 size 0x8 virtual false final false
  inline void set_fontSize(int32_t value);

  /// @brief Method get_fontStyle addr 0x2bf2da0 size 0x8 virtual false final false
  inline ::UnityEngine::FontStyle get_fontStyle();

  /// @brief Method set_fontStyle addr 0x2bf2da8 size 0x8 virtual false final false
  inline void set_fontStyle(::UnityEngine::FontStyle value);

  /// @brief Method get_bestFit addr 0x2bf2db0 size 0x8 virtual false final false
  inline bool get_bestFit();

  /// @brief Method set_bestFit addr 0x2bf2db8 size 0xc virtual false final false
  inline void set_bestFit(bool value);

  /// @brief Method get_minSize addr 0x2bf2dc4 size 0x8 virtual false final false
  inline int32_t get_minSize();

  /// @brief Method set_minSize addr 0x2bf2dcc size 0x8 virtual false final false
  inline void set_minSize(int32_t value);

  /// @brief Method get_maxSize addr 0x2bf2dd4 size 0x8 virtual false final false
  inline int32_t get_maxSize();

  /// @brief Method set_maxSize addr 0x2bf2ddc size 0x8 virtual false final false
  inline void set_maxSize(int32_t value);

  /// @brief Method get_alignment addr 0x2bf2de4 size 0x8 virtual false final false
  inline ::UnityEngine::TextAnchor get_alignment();

  /// @brief Method set_alignment addr 0x2bf2dec size 0x8 virtual false final false
  inline void set_alignment(::UnityEngine::TextAnchor value);

  /// @brief Method get_alignByGeometry addr 0x2bf2df4 size 0x8 virtual false final false
  inline bool get_alignByGeometry();

  /// @brief Method set_alignByGeometry addr 0x2bf2dfc size 0xc virtual false final false
  inline void set_alignByGeometry(bool value);

  /// @brief Method get_richText addr 0x2bf2e08 size 0x8 virtual false final false
  inline bool get_richText();

  /// @brief Method set_richText addr 0x2bf2e10 size 0xc virtual false final false
  inline void set_richText(bool value);

  /// @brief Method get_horizontalOverflow addr 0x2bf2e1c size 0x8 virtual false final false
  inline ::UnityEngine::HorizontalWrapMode get_horizontalOverflow();

  /// @brief Method set_horizontalOverflow addr 0x2bf2e24 size 0x8 virtual false final false
  inline void set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value);

  /// @brief Method get_verticalOverflow addr 0x2bf2e2c size 0x8 virtual false final false
  inline ::UnityEngine::VerticalWrapMode get_verticalOverflow();

  /// @brief Method set_verticalOverflow addr 0x2bf2e34 size 0x8 virtual false final false
  inline void set_verticalOverflow(::UnityEngine::VerticalWrapMode value);

  /// @brief Method get_lineSpacing addr 0x2bf2e3c size 0x8 virtual false final false
  inline float_t get_lineSpacing();

  /// @brief Method set_lineSpacing addr 0x2bf2e44 size 0x8 virtual false final false
  inline void set_lineSpacing(float_t value);

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2bf2e4c size 0x4 virtual true final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();

  /// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2bf2e50 size 0x44 virtual true final true
  inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();

  static inline ::UnityEngine::UI::FontData* New_ctor();

  /// @brief Method .ctor addr 0x2bf2d78 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FontData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontData(FontData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontData(FontData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontData();

public:
  /// @brief Field m_Font, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Font* ___m_Font;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::FontData, 0x40>, "Size mismatch!");

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

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::FontData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::FontData*, "UnityEngine.UI", "FontData");
