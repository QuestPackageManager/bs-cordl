#pragma once
// IWYU pragma private; include "UnityEngine/GUIStyle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUIStyle)
namespace System {
struct IntPtr;
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
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUIStyle);
// Type: UnityEngine::GUIStyle
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUIStyle*
class CORDL_TYPE GUIStyle : public ::System::Object {
public:
  // Declarations
  __declspec(property(put = set_alignment))::UnityEngine::TextAnchor alignment;

  __declspec(property(get = get_border))::UnityEngine::RectOffset* border;

  __declspec(property(put = set_clipping))::UnityEngine::TextClipping clipping;

  __declspec(property(get = get_fixedHeight)) float_t fixedHeight;

  __declspec(property(get = get_fixedWidth)) float_t fixedWidth;

  __declspec(property(get = get_font, put = set_font))::UnityW<::UnityEngine::Font> font;

  __declspec(property(put = set_fontSize)) int32_t fontSize;

  __declspec(property(put = set_fontStyle))::UnityEngine::FontStyle fontStyle;

  __declspec(property(get = get_lineHeight)) float_t lineHeight;

  /// @brief Field m_Active, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Active, put = __cordl_internal_set_m_Active))::UnityEngine::GUIStyleState* m_Active;

  /// @brief Field m_Border, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Border, put = __cordl_internal_set_m_Border))::UnityEngine::RectOffset* m_Border;

  /// @brief Field m_Focused, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Focused, put = __cordl_internal_set_m_Focused))::UnityEngine::GUIStyleState* m_Focused;

  /// @brief Field m_Hover, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Hover, put = __cordl_internal_set_m_Hover))::UnityEngine::GUIStyleState* m_Hover;

  /// @brief Field m_Margin, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Margin, put = __cordl_internal_set_m_Margin))::UnityEngine::RectOffset* m_Margin;

  /// @brief Field m_Name, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  /// @brief Field m_Normal, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Normal, put = __cordl_internal_set_m_Normal))::UnityEngine::GUIStyleState* m_Normal;

  /// @brief Field m_OnActive, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnActive, put = __cordl_internal_set_m_OnActive))::UnityEngine::GUIStyleState* m_OnActive;

  /// @brief Field m_OnFocused, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnFocused, put = __cordl_internal_set_m_OnFocused))::UnityEngine::GUIStyleState* m_OnFocused;

  /// @brief Field m_OnHover, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnHover, put = __cordl_internal_set_m_OnHover))::UnityEngine::GUIStyleState* m_OnHover;

  /// @brief Field m_OnNormal, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnNormal, put = __cordl_internal_set_m_OnNormal))::UnityEngine::GUIStyleState* m_OnNormal;

  /// @brief Field m_Overflow, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Overflow, put = __cordl_internal_set_m_Overflow))::UnityEngine::RectOffset* m_Overflow;

  /// @brief Field m_Padding, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Padding, put = __cordl_internal_set_m_Padding))::UnityEngine::RectOffset* m_Padding;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr))::System::IntPtr m_Ptr;

  __declspec(property(get = get_margin))::UnityEngine::RectOffset* margin;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_normal))::UnityEngine::GUIStyleState* normal;

  __declspec(property(get = get_padding))::UnityEngine::RectOffset* padding;

  __declspec(property(get = get_rawName, put = set_rawName))::StringW rawName;

  __declspec(property(put = set_richText)) bool richText;

  /// @brief Field s_None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_None, put = setStaticF_s_None))::UnityEngine::GUIStyle* s_None;

  /// @brief Field showKeyboardFocus, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_showKeyboardFocus, put = setStaticF_showKeyboardFocus)) bool showKeyboardFocus;

  __declspec(property(get = get_stretchHeight, put = set_stretchHeight)) bool stretchHeight;

  __declspec(property(get = get_stretchWidth)) bool stretchWidth;

  __declspec(property(put = set_wordWrap)) bool wordWrap;

  /// @brief Method CalcHeight, addr 0x34787f0, size 0x54, virtual false, abstract: false, final false
  inline float_t CalcHeight(::UnityEngine::GUIContent* content, float_t width);

  /// @brief Method CalcSize, addr 0x34787ec, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalcSize(::UnityEngine::GUIContent* content);

  /// @brief Method Draw, addr 0x34786b4, size 0xa0, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on, bool hover);

  /// @brief Method Draw, addr 0x3478690, size 0x24, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

  /// @brief Method Draw, addr 0x347867c, size 0x14, virtual false, abstract: false, final false
  inline void Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

  /// @brief Method Finalize, addr 0x34781fc, size 0x144, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetCursorPixelPosition, addr 0x34787e4, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetCursorPixelPosition(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t cursorStringIndex);

  /// @brief Method GetCursorStringIndex, addr 0x34787e8, size 0x4, virtual false, abstract: false, final false
  inline int32_t GetCursorStringIndex(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 cursorPixelPosition);

  /// @brief Method GetRectOffsetPtr, addr 0x3477954, size 0x44, virtual false, abstract: false, final false
  inline ::System::IntPtr GetRectOffsetPtr(int32_t idx);

  /// @brief Method GetStyleStatePtr, addr 0x3477910, size 0x44, virtual false, abstract: false, final false
  inline ::System::IntPtr GetStyleStatePtr(int32_t idx);

  /// @brief Method Internal_CalcHeight, addr 0x3477ef4, size 0x54, virtual false, abstract: false, final false
  inline float_t Internal_CalcHeight(::UnityEngine::GUIContent* content, float_t width);

  /// @brief Method Internal_CalcSize, addr 0x3477e44, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Internal_CalcSize(::UnityEngine::GUIContent* content);

  /// @brief Method Internal_CalcSize_Injected, addr 0x3477ea0, size 0x54, virtual false, abstract: false, final false
  inline void Internal_CalcSize_Injected(::UnityEngine::GUIContent* content, ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method Internal_Copy, addr 0x3477890, size 0x44, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Copy(::UnityEngine::GUIStyle* self, ::UnityEngine::GUIStyle* other);

  /// @brief Method Internal_Create, addr 0x3477854, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create(::UnityEngine::GUIStyle* self);

  /// @brief Method Internal_Destroy, addr 0x34778d4, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr self);

  /// @brief Method Internal_Draw, addr 0x34779d4, size 0x8c, virtual false, abstract: false, final false
  inline void Internal_Draw(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

  /// @brief Method Internal_Draw2, addr 0x3477ae4, size 0x74, virtual false, abstract: false, final false
  inline void Internal_Draw2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on);

  /// @brief Method Internal_Draw2_Injected, addr 0x3477b58, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_Draw2_Injected(ByRef<::UnityEngine::Rect> position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on);

  /// @brief Method Internal_Draw_Injected, addr 0x3477a60, size 0x84, virtual false, abstract: false, final false
  inline void Internal_Draw_Injected(ByRef<::UnityEngine::Rect> screenRect, ::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

  /// @brief Method Internal_GetCursorPixelPosition, addr 0x3477bc4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 Internal_GetCursorPixelPosition(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t cursorStringIndex);

  /// @brief Method Internal_GetCursorPixelPosition_Injected, addr 0x3477c38, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_GetCursorPixelPosition_Injected(ByRef<::UnityEngine::Rect> position, ::UnityEngine::GUIContent* content, int32_t cursorStringIndex, ByRef<::UnityEngine::Vector2> ret);

  /// @brief Method Internal_GetCursorStringIndex, addr 0x3477ca4, size 0x64, virtual false, abstract: false, final false
  inline int32_t Internal_GetCursorStringIndex(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 cursorPixelPosition);

  /// @brief Method Internal_GetCursorStringIndex_Injected, addr 0x3477d08, size 0x5c, virtual false, abstract: false, final false
  inline int32_t Internal_GetCursorStringIndex_Injected(ByRef<::UnityEngine::Rect> position, ::UnityEngine::GUIContent* content, ByRef<::UnityEngine::Vector2> cursorPixelPosition);

  /// @brief Method Internal_GetLineHeight, addr 0x3477998, size 0x3c, virtual false, abstract: false, final false
  static inline float_t Internal_GetLineHeight(::System::IntPtr target);

  /// @brief Method Internal_GetSelectedRenderedText, addr 0x3477d64, size 0x74, virtual false, abstract: false, final false
  inline ::StringW Internal_GetSelectedRenderedText(::UnityEngine::Rect localPosition, ::UnityEngine::GUIContent* mContent, int32_t selectIndex, int32_t cursorIndex);

  /// @brief Method Internal_GetSelectedRenderedText_Injected, addr 0x3477dd8, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW Internal_GetSelectedRenderedText_Injected(ByRef<::UnityEngine::Rect> localPosition, ::UnityEngine::GUIContent* mContent, int32_t selectIndex, int32_t cursorIndex);

  /// @brief Method IsTooltipActive, addr 0x3478018, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsTooltipActive(::StringW tooltip);

  static inline ::UnityEngine::GUIStyle* New_ctor();

  static inline ::UnityEngine::GUIStyle* New_ctor(::UnityEngine::GUIStyle* other);

  /// @brief Method SetDefaultFont, addr 0x3478054, size 0x3c, virtual false, abstract: false, final false
  static inline void SetDefaultFont(::UnityEngine::Font* font);

  /// @brief Method SetMouseTooltip, addr 0x3477f48, size 0x8c, virtual false, abstract: false, final false
  static inline void SetMouseTooltip(::StringW tooltip, ::UnityEngine::Rect screenRect);

  /// @brief Method SetMouseTooltip_Injected, addr 0x3477fd4, size 0x44, virtual false, abstract: false, final false
  static inline void SetMouseTooltip_Injected(::StringW tooltip, ByRef<::UnityEngine::Rect> screenRect);

  /// @brief Method ToString, addr 0x3478844, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Active();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyleState*> const& __cordl_internal_get_m_Active() const;

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Border();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectOffset*> const& __cordl_internal_get_m_Border() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Focused();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyleState*> const& __cordl_internal_get_m_Focused() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Hover();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyleState*> const& __cordl_internal_get_m_Hover() const;

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Margin();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectOffset*> const& __cordl_internal_get_m_Margin() const;

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_Normal();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyleState*> const& __cordl_internal_get_m_Normal() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnActive();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyleState*> const& __cordl_internal_get_m_OnActive() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnFocused();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyleState*> const& __cordl_internal_get_m_OnFocused() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnHover();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyleState*> const& __cordl_internal_get_m_OnHover() const;

  constexpr ::UnityEngine::GUIStyleState*& __cordl_internal_get_m_OnNormal();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyleState*> const& __cordl_internal_get_m_OnNormal() const;

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Overflow();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectOffset*> const& __cordl_internal_get_m_Overflow() const;

  constexpr ::UnityEngine::RectOffset*& __cordl_internal_get_m_Padding();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectOffset*> const& __cordl_internal_get_m_Padding() const;

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

  /// @brief Method .ctor, addr 0x3478090, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3478118, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GUIStyle* other);

  static inline ::UnityEngine::GUIStyle* getStaticF_s_None();

  static inline bool getStaticF_showKeyboardFocus();

  /// @brief Method get_border, addr 0x3478430, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectOffset* get_border();

  /// @brief Method get_fixedHeight, addr 0x3476fd4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_fixedHeight();

  /// @brief Method get_fixedWidth, addr 0x3476df0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_fixedWidth();

  /// @brief Method get_font, addr 0x3477580, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_font();

  /// @brief Method get_lineHeight, addr 0x3478580, size 0xfc, virtual false, abstract: false, final false
  inline float_t get_lineHeight();

  /// @brief Method get_margin, addr 0x3476e2c, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectOffset* get_margin();

  /// @brief Method get_name, addr 0x3478340, size 0x4c, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_none, addr 0x3478754, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUIStyle* get_none();

  /// @brief Method get_normal, addr 0x34783d4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyleState* get_normal();

  /// @brief Method get_padding, addr 0x34784d8, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::RectOffset* get_padding();

  /// @brief Method get_rawName, addr 0x3477500, size 0x3c, virtual false, abstract: false, final false
  inline ::StringW get_rawName();

  /// @brief Method get_stretchHeight, addr 0x3477708, size 0x3c, virtual false, abstract: false, final false
  inline bool get_stretchHeight();

  /// @brief Method get_stretchWidth, addr 0x34776cc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_stretchWidth();

  static inline void setStaticF_s_None(::UnityEngine::GUIStyle* value);

  static inline void setStaticF_showKeyboardFocus(bool value);

  /// @brief Method set_alignment, addr 0x3477600, size 0x44, virtual false, abstract: false, final false
  inline void set_alignment(::UnityEngine::TextAnchor value);

  /// @brief Method set_clipping, addr 0x3477688, size 0x44, virtual false, abstract: false, final false
  inline void set_clipping(::UnityEngine::TextClipping value);

  /// @brief Method set_font, addr 0x34775bc, size 0x44, virtual false, abstract: false, final false
  inline void set_font(::UnityEngine::Font* value);

  /// @brief Method set_fontSize, addr 0x3477788, size 0x44, virtual false, abstract: false, final false
  inline void set_fontSize(int32_t value);

  /// @brief Method set_fontStyle, addr 0x34777cc, size 0x44, virtual false, abstract: false, final false
  inline void set_fontStyle(::UnityEngine::FontStyle value);

  /// @brief Method set_name, addr 0x347838c, size 0x48, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_rawName, addr 0x347753c, size 0x44, virtual false, abstract: false, final false
  inline void set_rawName(::StringW value);

  /// @brief Method set_richText, addr 0x3477810, size 0x44, virtual false, abstract: false, final false
  inline void set_richText(bool value);

  /// @brief Method set_stretchHeight, addr 0x3477744, size 0x44, virtual false, abstract: false, final false
  inline void set_stretchHeight(bool value);

  /// @brief Method set_wordWrap, addr 0x3477644, size 0x44, virtual false, abstract: false, final false
  inline void set_wordWrap(bool value);

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUIStyle, 0x80>, "Size mismatch!");

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

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUIStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUIStyle*, "UnityEngine", "GUIStyle");
