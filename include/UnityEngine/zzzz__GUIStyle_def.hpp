#pragma once
// IWYU pragma private; include "UnityEngine/GUIStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIStyle)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfoBindings;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyleState;
}
namespace UnityEngine {
class GUIStyle_BindingsMarshaller;
}
namespace UnityEngine {
struct ImagePosition;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct TextClipping;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class GUIStyle_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIStyle);
MARK_REF_PTR_T(::UnityEngine::GUIStyle_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIStyle/BindingsMarshaller
class CORDL_TYPE GUIStyle_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6917db8, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::GUIStyle* guiStyle);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIStyle_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIStyle_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIStyle_BindingsMarshaller(GUIStyle_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIStyle_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIStyle_BindingsMarshaller(GUIStyle_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19579 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIStyle_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.GUIStyle
class CORDL_TYPE GUIStyle : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::GUIStyle_BindingsMarshaller;

  __declspec(property(get = get_alignment, put = set_alignment)) ::UnityEngine::TextAnchor alignment;

  __declspec(property(get = get_clipping)) ::UnityEngine::TextClipping clipping;

  __declspec(property(get = get_contentOffset)) ::UnityEngine::Vector2 contentOffset;

  __declspec(property(get = get_fixedHeight)) float_t fixedHeight;

  __declspec(property(get = get_fixedWidth)) float_t fixedWidth;

  __declspec(property(get = get_font)) ::UnityW<::UnityEngine::Font> font;

  __declspec(property(get = get_fontSize)) int32_t fontSize;

  __declspec(property(get = get_fontStyle)) ::UnityEngine::FontStyle fontStyle;

  __declspec(property(get = get_imagePosition)) ::UnityEngine::ImagePosition imagePosition;

  __declspec(property(get = get_isHeightDependantOnWidth)) bool isHeightDependantOnWidth;

  __declspec(property(get = get_lineHeight)) float_t lineHeight;

  /// @brief Field m_Active, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active)) ::UnityEngine::GUIStyleState* m_Active;

  /// @brief Field m_Border, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Border, put = __cordl_internal_set_m_Border)) ::UnityEngine::RectOffset* m_Border;

  /// @brief Field m_Focused, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Focused, put = __cordl_internal_set_m_Focused)) ::UnityEngine::GUIStyleState* m_Focused;

  /// @brief Field m_Hover, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hover, put = __cordl_internal_set_m_Hover)) ::UnityEngine::GUIStyleState* m_Hover;

  /// @brief Field m_Margin, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Margin, put = __cordl_internal_set_m_Margin)) ::UnityEngine::RectOffset* m_Margin;

  /// @brief Field m_Name, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name)) ::StringW m_Name;

  /// @brief Field m_Normal, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Normal, put = __cordl_internal_set_m_Normal)) ::UnityEngine::GUIStyleState* m_Normal;

  /// @brief Field m_OnActive, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnActive, put = __cordl_internal_set_m_OnActive)) ::UnityEngine::GUIStyleState* m_OnActive;

  /// @brief Field m_OnFocused, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnFocused, put = __cordl_internal_set_m_OnFocused)) ::UnityEngine::GUIStyleState* m_OnFocused;

  /// @brief Field m_OnHover, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHover, put = __cordl_internal_set_m_OnHover)) ::UnityEngine::GUIStyleState* m_OnHover;

  /// @brief Field m_OnNormal, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnNormal, put = __cordl_internal_set_m_OnNormal)) ::UnityEngine::GUIStyleState* m_OnNormal;

  /// @brief Field m_Overflow, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Overflow, put = __cordl_internal_set_m_Overflow)) ::UnityEngine::RectOffset* m_Overflow;

  /// @brief Field m_Padding, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Padding, put = __cordl_internal_set_m_Padding)) ::UnityEngine::RectOffset* m_Padding;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_margin)) ::UnityEngine::RectOffset* margin;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_normal)) ::UnityEngine::GUIStyleState* normal;

  __declspec(property(get = get_padding)) ::UnityEngine::RectOffset* padding;

  __declspec(property(get = get_rawName, put = set_rawName)) ::StringW rawName;

  __declspec(property(get = get_richText)) bool richText;

  /// @brief Field s_None, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_None, put = setStaticF_s_None)) ::UnityEngine::GUIStyle* s_None;

  /// @brief Field showKeyboardFocus, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_showKeyboardFocus, put = setStaticF_showKeyboardFocus)) bool showKeyboardFocus;

  __declspec(property(get = get_stretchHeight, put = set_stretchHeight)) bool stretchHeight;

  __declspec(property(get = get_stretchWidth, put = set_stretchWidth)) bool stretchWidth;

  __declspec(property(get = get_wordWrap)) bool wordWrap;

  /// @brief Method CalcHeight, addr 0x6917648, size 0x4, virtual false, abstract: false, final false
  inline float_t CalcHeight(::UnityEngine::GUIContent* content, float_t width);

  /// @brief Method CalcMinMaxWidth, addr 0x6917750, size 0x28, virtual false, abstract: false, final false
  inline void CalcMinMaxWidth(::UnityEngine::GUIContent* content, ::ByRef<float_t> minWidth, ::ByRef<float_t> maxWidth);

  /// @brief Method CalcSizeWithConstraints, addr 0x6913124, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalcSizeWithConstraints(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 constraints);

  /// @brief Method Draw, addr 0x690ea44, size 0x14, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlID);

  /// @brief Method Draw, addr 0x690e23c, size 0xd4, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on, bool hover);

  /// @brief Method Draw, addr 0x6917214, size 0x24, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

  /// @brief Method Draw, addr 0x690e310, size 0x4, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

  /// @brief Method EmptyManagedCache, addr 0x6917c68, size 0x50, virtual false, abstract: false, final false
  static inline void EmptyManagedCache();

  /// @brief Method Finalize, addr 0x6916eb4, size 0xbc, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCursorPixelPosition, addr 0x6917368, size 0x1b0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetCursorPixelPosition(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t cursorStringIndex);

  /// @brief Method GetDefaultFont, addr 0x6916d14, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Font> GetDefaultFont();

  /// @brief Method GetDefaultFont_Injected, addr 0x6916e50, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetDefaultFont_Injected();

  /// @brief Method GetDimensions, addr 0x6917c18, size 0x30, virtual false, abstract: false, final false
  static inline void GetDimensions(::UnityEngine::GUIStyle* style, ::UnityEngine::Color color, ::StringW content, ::UnityEngine::Rect rect, ::ByRef<::UnityEngine::Vector2> dimensions);

  /// @brief Method GetLineHeight, addr 0x6917c48, size 0x20, virtual false, abstract: false, final false
  static inline void GetLineHeight(::UnityEngine::GUIStyle* style, ::ByRef<float_t> lineHeight);

  /// @brief Method GetMeshInfo, addr 0x6917844, size 0x2a4, virtual false, abstract: false, final false
  static inline void GetMeshInfo(::UnityEngine::GUIStyle* style, ::UnityEngine::Color color, ::StringW content, ::UnityEngine::Rect rect,
                                 ::ByRef<::ArrayW<::UnityEngine::TextCore::Text::MeshInfoBindings, ::Array<::UnityEngine::TextCore::Text::MeshInfoBindings>*>> meshInfos,
                                 ::ByRef<::UnityEngine::Vector2> dimensions, ::ByRef<int32_t> generationId);

  /// @brief Method GetPreferredSize, addr 0x691764c, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetPreferredSize(::StringW content, ::UnityEngine::Rect rect);

  /// @brief Method GetRectOffsetPtr, addr 0x6916454, size 0xa4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetRectOffsetPtr(int32_t idx);

  /// @brief Method GetRectOffsetPtr_Injected, addr 0x69164f8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetRectOffsetPtr_Injected(::System::IntPtr _unity_self, int32_t idx);

  /// @brief Method GetStyleStatePtr, addr 0x691636c, size 0xa4, virtual false, abstract: false, final false
  inline ::System::IntPtr GetStyleStatePtr(int32_t idx);

  /// @brief Method GetStyleStatePtr_Injected, addr 0x6916410, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetStyleStatePtr_Injected(::System::IntPtr _unity_self, int32_t idx);

  /// @brief Method Internal_CalcHeight, addr 0x691690c, size 0xb4, virtual false, abstract: false, final false
  inline float_t Internal_CalcHeight(::UnityEngine::GUIContent* content, float_t width);

  /// @brief Method Internal_CalcHeight_Injected, addr 0x69169c0, size 0x54, virtual false, abstract: false, final false
  static inline float_t Internal_CalcHeight_Injected(::System::IntPtr _unity_self, ::UnityEngine::GUIContent* content, float_t width);

  /// @brief Method Internal_CalcMinMaxWidth, addr 0x6916a14, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Internal_CalcMinMaxWidth(::UnityEngine::GUIContent* content);

  /// @brief Method Internal_CalcMinMaxWidth_Injected, addr 0x6916ac8, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_CalcMinMaxWidth_Injected(::System::IntPtr _unity_self, ::UnityEngine::GUIContent* content, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method Internal_CalcSizeWithConstraints, addr 0x69167ec, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Internal_CalcSizeWithConstraints(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 maxSize);

  /// @brief Method Internal_CalcSizeWithConstraints_Injected, addr 0x69168b0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_CalcSizeWithConstraints_Injected(::System::IntPtr _unity_self, ::UnityEngine::GUIContent* content, ::ByRef<::UnityEngine::Vector2> maxSize,
                                                               ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method Internal_Create, addr 0x69162f4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create(::UnityEngine::GUIStyle* self);

  /// @brief Method Internal_Destroy, addr 0x6916330, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr self);

  /// @brief Method Internal_DestroyTextGenerator, addr 0x6916e78, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_DestroyTextGenerator(int32_t meshInfoId);

  /// @brief Method Internal_Draw, addr 0x691653c, size 0xec, virtual false, abstract: false, final false
  inline void Internal_Draw(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

  /// @brief Method Internal_Draw2, addr 0x69166ac, size 0xd4, virtual false, abstract: false, final false
  inline void Internal_Draw2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on);

  /// @brief Method Internal_Draw2_Injected, addr 0x6916780, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_Draw2_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rect> position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on);

  /// @brief Method Internal_Draw_Injected, addr 0x6916628, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_Draw_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rect> screenRect, ::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on,
                                            bool hasKeyboardFocus);

  /// @brief Method Internal_GetTextRectOffset, addr 0x6916b1c, size 0xd0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Internal_GetTextRectOffset(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 textSize);

  /// @brief Method Internal_GetTextRectOffset_Injected, addr 0x6916bec, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_GetTextRectOffset_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rect> screenRect, ::UnityEngine::GUIContent* content,
                                                         ::ByRef<::UnityEngine::Vector2> textSize, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method IsTooltipActive, addr 0x690e364, size 0x15c, virtual false, abstract: false, final false
  static inline bool IsTooltipActive(::StringW tooltip);

  /// @brief Method IsTooltipActive_Injected, addr 0x6916c9c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsTooltipActive_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> tooltip);

  static inline ::UnityEngine::GUIStyle* New_ctor();

  /// @brief Method SetDefaultFont, addr 0x6913b7c, size 0xa8, virtual false, abstract: false, final false
  static inline void SetDefaultFont(::UnityEngine::Font* font);

  /// @brief Method SetDefaultFont_Injected, addr 0x6916cd8, size 0x3c, virtual false, abstract: false, final false
  static inline void SetDefaultFont_Injected(::System::IntPtr font);

  /// @brief Method SetMouseTooltip, addr 0x690e4c0, size 0x158, virtual false, abstract: false, final false
  static inline void SetMouseTooltip(::StringW tooltip, ::UnityEngine::Rect screenRect);

  /// @brief Method SetMouseTooltip_Injected, addr 0x6916c58, size 0x44, virtual false, abstract: false, final false
  static inline void SetMouseTooltip_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> tooltip, ::ByRef<::UnityEngine::Rect> screenRect);

  /// @brief Method ToString, addr 0x6917778, size 0xcc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_Active() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Active();

  constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get_m_Border() const;

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Border();

  constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_Focused() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Focused();

  constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_Hover() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Hover();

  constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get_m_Margin() const;

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Margin();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_Normal() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Normal();

  constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_OnActive() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnActive();

  constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_OnFocused() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnFocused();

  constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_OnHover() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnHover();

  constexpr ::UnityEngine::GUIStyleState* const& __cordl_internal_get_m_OnNormal() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnNormal();

  constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get_m_Overflow() const;

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Overflow();

  constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get_m_Padding() const;

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Padding();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Active(::UnityEngine::GUIStyleState* value);

  constexpr void __cordl_internal_set_m_Border(::UnityEngine::RectOffset* value);

  constexpr void __cordl_internal_set_m_Focused(::UnityEngine::GUIStyleState* value);

  constexpr void __cordl_internal_set_m_Hover(::UnityEngine::GUIStyleState* value);

  constexpr void __cordl_internal_set_m_Margin(::UnityEngine::RectOffset* value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_Normal(::UnityEngine::GUIStyleState* value);

  constexpr void __cordl_internal_set_m_OnActive(::UnityEngine::GUIStyleState* value);

  constexpr void __cordl_internal_set_m_OnFocused(::UnityEngine::GUIStyleState* value);

  constexpr void __cordl_internal_set_m_OnHover(::UnityEngine::GUIStyleState* value);

  constexpr void __cordl_internal_set_m_OnNormal(::UnityEngine::GUIStyleState* value);

  constexpr void __cordl_internal_set_m_Overflow(::UnityEngine::RectOffset* value);

  constexpr void __cordl_internal_set_m_Padding(::UnityEngine::RectOffset* value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x69133c8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::GUIStyle* getStaticF_s_None();

  static inline bool getStaticF_showKeyboardFocus();

  /// @brief Method get_alignment, addr 0x6915874, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::TextAnchor get_alignment();

  /// @brief Method get_alignment_Injected, addr 0x6915908, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextAnchor get_alignment_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_clipping, addr 0x6915afc, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::TextClipping get_clipping();

  /// @brief Method get_clipping_Injected, addr 0x6915b90, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextClipping get_clipping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_contentOffset, addr 0x6915bcc, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_contentOffset();

  /// @brief Method get_contentOffset_Injected, addr 0x6915c78, size 0x44, virtual false, abstract: false, final false
  static inline void get_contentOffset_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method get_fixedHeight, addr 0x6915d8c, size 0x94, virtual false, abstract: false, final false
  inline float_t get_fixedHeight();

  /// @brief Method get_fixedHeight_Injected, addr 0x6915e20, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_fixedHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fixedWidth, addr 0x6915cbc, size 0x94, virtual false, abstract: false, final false
  inline float_t get_fixedWidth();

  /// @brief Method get_fixedWidth_Injected, addr 0x6915d50, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_fixedWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_font, addr 0x6915604, size 0x164, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_font();

  /// @brief Method get_fontSize, addr 0x6916084, size 0x94, virtual false, abstract: false, final false
  inline int32_t get_fontSize();

  /// @brief Method get_fontSize_Injected, addr 0x6916118, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_fontSize_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_fontStyle, addr 0x6916154, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::FontStyle get_fontStyle();

  /// @brief Method get_fontStyle_Injected, addr 0x69161e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::FontStyle get_fontStyle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_font_Injected, addr 0x6915768, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_font_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_imagePosition, addr 0x69157a4, size 0x94, virtual false, abstract: false, final false
  inline ::UnityEngine::ImagePosition get_imagePosition();

  /// @brief Method get_imagePosition_Injected, addr 0x6915838, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ImagePosition get_imagePosition_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isHeightDependantOnWidth, addr 0x6913008, size 0x40, virtual false, abstract: false, final false
  inline bool get_isHeightDependantOnWidth();

  /// @brief Method get_lineHeight, addr 0x6917050, size 0xdc, virtual false, abstract: false, final false
  inline float_t get_lineHeight();

  /// @brief Method get_margin, addr 0x6916f70, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::RectOffset* get_margin();

  /// @brief Method get_name, addr 0x6914b74, size 0x24, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_none, addr 0x690e9b8, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUIStyle* get_none();

  /// @brief Method get_normal, addr 0x6914c3c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyleState* get_normal();

  /// @brief Method get_padding, addr 0x6916fe0, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::RectOffset* get_padding();

  /// @brief Method get_rawName, addr 0x69152b8, size 0x148, virtual false, abstract: false, final false
  inline ::StringW get_rawName();

  /// @brief Method get_rawName_Injected, addr 0x6915400, size 0x44, virtual false, abstract: false, final false
  static inline void get_rawName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_richText, addr 0x6916224, size 0x94, virtual false, abstract: false, final false
  inline bool get_richText();

  /// @brief Method get_richText_Injected, addr 0x69162b8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_richText_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stretchHeight, addr 0x6915f70, size 0x94, virtual false, abstract: false, final false
  inline bool get_stretchHeight();

  /// @brief Method get_stretchHeight_Injected, addr 0x6916004, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_stretchHeight_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_stretchWidth, addr 0x6915e5c, size 0x94, virtual false, abstract: false, final false
  inline bool get_stretchWidth();

  /// @brief Method get_stretchWidth_Injected, addr 0x6915ef0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_stretchWidth_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_wordWrap, addr 0x6915a2c, size 0x94, virtual false, abstract: false, final false
  inline bool get_wordWrap();

  /// @brief Method get_wordWrap_Injected, addr 0x6915ac0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_wordWrap_Injected(::System::IntPtr _unity_self);

  static inline void setStaticF_s_None(::UnityEngine::GUIStyle* value);

  static inline void setStaticF_showKeyboardFocus(bool value);

  /// @brief Method set_alignment, addr 0x6915944, size 0xa4, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::TextAnchor value);

  /// @brief Method set_alignment_Injected, addr 0x69159e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_alignment_Injected(::System::IntPtr _unity_self, ::UnityEngine::TextAnchor value);

  /// @brief Method set_name, addr 0x6913e64, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_rawName, addr 0x6915444, size 0x17c, virtual false, abstract: false, final false
  inline void set_rawName(::StringW value);

  /// @brief Method set_rawName_Injected, addr 0x69155c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_rawName_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

  /// @brief Method set_stretchHeight, addr 0x6914b98, size 0xa4, virtual false, abstract: false, final false
  inline void set_stretchHeight(bool value);

  /// @brief Method set_stretchHeight_Injected, addr 0x6916040, size 0x44, virtual false, abstract: false, final false
  static inline void set_stretchHeight_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_stretchWidth, addr 0x6913448, size 0xa4, virtual false, abstract: false, final false
  inline void set_stretchWidth(bool value);

  /// @brief Method set_stretchWidth_Injected, addr 0x6915f2c, size 0x44, virtual false, abstract: false, final false
  static inline void set_stretchWidth_Injected(::System::IntPtr _unity_self, bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUIStyle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUIStyle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUIStyle(GUIStyle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUIStyle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUIStyle(GUIStyle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19580 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_Normal, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GUIStyleState* ___m_Normal;

  /// @brief Field m_Hover, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GUIStyleState* ___m_Hover;

  /// @brief Field m_Active, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GUIStyleState* ___m_Active;

  /// @brief Field m_Focused, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GUIStyleState* ___m_Focused;

  /// @brief Field m_OnNormal, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GUIStyleState* ___m_OnNormal;

  /// @brief Field m_OnHover, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GUIStyleState* ___m_OnHover;

  /// @brief Field m_OnActive, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GUIStyleState* ___m_OnActive;

  /// @brief Field m_OnFocused, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GUIStyleState* ___m_OnFocused;

  /// @brief Field m_Border, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::RectOffset* ___m_Border;

  /// @brief Field m_Padding, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::RectOffset* ___m_Padding;

  /// @brief Field m_Margin, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::RectOffset* ___m_Margin;

  /// @brief Field m_Overflow, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::RectOffset* ___m_Overflow;

  /// @brief Field m_Name, offset: 0x78, size: 0x8, def value: None
  ::StringW ___m_Name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Normal) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Hover) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Active) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Focused) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_OnNormal) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_OnHover) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_OnActive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_OnFocused) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Border) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Padding) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Margin) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Overflow) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUIStyle, ___m_Name) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIStyle, 0x80>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIStyle*, "UnityEngine", "GUIStyle");
NEED_NO_BOX(::UnityEngine::GUIStyle_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIStyle_BindingsMarshaller*, "UnityEngine", "GUIStyle/BindingsMarshaller");
