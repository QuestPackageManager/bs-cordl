#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUISkin)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine {
class GUISettings;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class __GUISkin__SkinChangedDelegate;
}
// Forward declare root types
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
class __GUISkin__SkinChangedDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUISkin);
MARK_REF_PTR_T(::UnityEngine::__GUISkin__SkinChangedDelegate);
// Type: ::SkinChangedDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::GUISkin::SkinChangedDelegate*
class CORDL_TYPE __GUISkin__SkinChangedDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x324370c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::UnityEngine::__GUISkin__SkinChangedDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x3243650, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GUISkin__SkinChangedDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GUISkin__SkinChangedDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GUISkin__SkinChangedDelegate(__GUISkin__SkinChangedDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GUISkin__SkinChangedDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GUISkin__SkinChangedDelegate(__GUISkin__SkinChangedDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GUISkin__SkinChangedDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::GUISkin
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 240, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::GUISkin*
class CORDL_TYPE GUISkin : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using SkinChangedDelegate = ::UnityEngine::__GUISkin__SkinChangedDelegate;

  __declspec(property(get = get_box, put = set_box))::UnityEngine::GUIStyle* box;

  __declspec(property(get = get_button, put = set_button))::UnityEngine::GUIStyle* button;

  /// @brief Field current, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_current, put = setStaticF_current))::UnityW<::UnityEngine::GUISkin> current;

  __declspec(property(get = get_customStyles, put = set_customStyles))::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> customStyles;

  __declspec(property(get = get_font, put = set_font))::UnityW<::UnityEngine::Font> font;

  __declspec(property(get = get_horizontalScrollbar, put = set_horizontalScrollbar))::UnityEngine::GUIStyle* horizontalScrollbar;

  __declspec(property(get = get_horizontalScrollbarLeftButton, put = set_horizontalScrollbarLeftButton))::UnityEngine::GUIStyle* horizontalScrollbarLeftButton;

  __declspec(property(get = get_horizontalScrollbarRightButton, put = set_horizontalScrollbarRightButton))::UnityEngine::GUIStyle* horizontalScrollbarRightButton;

  __declspec(property(get = get_horizontalScrollbarThumb, put = set_horizontalScrollbarThumb))::UnityEngine::GUIStyle* horizontalScrollbarThumb;

  __declspec(property(get = get_horizontalSlider, put = set_horizontalSlider))::UnityEngine::GUIStyle* horizontalSlider;

  __declspec(property(get = get_horizontalSliderThumb, put = set_horizontalSliderThumb))::UnityEngine::GUIStyle* horizontalSliderThumb;

  __declspec(property(get = get_horizontalSliderThumbExtent, put = set_horizontalSliderThumbExtent))::UnityEngine::GUIStyle* horizontalSliderThumbExtent;

  __declspec(property(get = get_label, put = set_label))::UnityEngine::GUIStyle* label;

  /// @brief Field m_CustomStyles, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CustomStyles, put = __cordl_internal_set_m_CustomStyles))::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> m_CustomStyles;

  /// @brief Field m_Font, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Font, put = __cordl_internal_set_m_Font))::UnityW<::UnityEngine::Font> m_Font;

  /// @brief Field m_ScrollView, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScrollView, put = __cordl_internal_set_m_ScrollView))::UnityEngine::GUIStyle* m_ScrollView;

  /// @brief Field m_Settings, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings))::UnityEngine::GUISettings* m_Settings;

  /// @brief Field m_SkinChanged, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_SkinChanged, put = setStaticF_m_SkinChanged))::UnityEngine::__GUISkin__SkinChangedDelegate* m_SkinChanged;

  /// @brief Field m_SliderMixed, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SliderMixed, put = __cordl_internal_set_m_SliderMixed))::UnityEngine::GUIStyle* m_SliderMixed;

  /// @brief Field m_Styles, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Styles, put = __cordl_internal_set_m_Styles))::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GUIStyle*>* m_Styles;

  /// @brief Field m_box, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_box, put = __cordl_internal_set_m_box))::UnityEngine::GUIStyle* m_box;

  /// @brief Field m_button, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_button, put = __cordl_internal_set_m_button))::UnityEngine::GUIStyle* m_button;

  /// @brief Field m_horizontalScrollbar, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_horizontalScrollbar, put = __cordl_internal_set_m_horizontalScrollbar))::UnityEngine::GUIStyle* m_horizontalScrollbar;

  /// @brief Field m_horizontalScrollbarLeftButton, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_horizontalScrollbarLeftButton, put = __cordl_internal_set_m_horizontalScrollbarLeftButton))::UnityEngine::GUIStyle* m_horizontalScrollbarLeftButton;

  /// @brief Field m_horizontalScrollbarRightButton, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_horizontalScrollbarRightButton,
                      put = __cordl_internal_set_m_horizontalScrollbarRightButton))::UnityEngine::GUIStyle* m_horizontalScrollbarRightButton;

  /// @brief Field m_horizontalScrollbarThumb, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_horizontalScrollbarThumb, put = __cordl_internal_set_m_horizontalScrollbarThumb))::UnityEngine::GUIStyle* m_horizontalScrollbarThumb;

  /// @brief Field m_horizontalSlider, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_horizontalSlider, put = __cordl_internal_set_m_horizontalSlider))::UnityEngine::GUIStyle* m_horizontalSlider;

  /// @brief Field m_horizontalSliderThumb, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_horizontalSliderThumb, put = __cordl_internal_set_m_horizontalSliderThumb))::UnityEngine::GUIStyle* m_horizontalSliderThumb;

  /// @brief Field m_horizontalSliderThumbExtent, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_horizontalSliderThumbExtent, put = __cordl_internal_set_m_horizontalSliderThumbExtent))::UnityEngine::GUIStyle* m_horizontalSliderThumbExtent;

  /// @brief Field m_label, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_label, put = __cordl_internal_set_m_label))::UnityEngine::GUIStyle* m_label;

  /// @brief Field m_textArea, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textArea, put = __cordl_internal_set_m_textArea))::UnityEngine::GUIStyle* m_textArea;

  /// @brief Field m_textField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textField, put = __cordl_internal_set_m_textField))::UnityEngine::GUIStyle* m_textField;

  /// @brief Field m_toggle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_toggle, put = __cordl_internal_set_m_toggle))::UnityEngine::GUIStyle* m_toggle;

  /// @brief Field m_verticalScrollbar, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_verticalScrollbar, put = __cordl_internal_set_m_verticalScrollbar))::UnityEngine::GUIStyle* m_verticalScrollbar;

  /// @brief Field m_verticalScrollbarDownButton, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_verticalScrollbarDownButton, put = __cordl_internal_set_m_verticalScrollbarDownButton))::UnityEngine::GUIStyle* m_verticalScrollbarDownButton;

  /// @brief Field m_verticalScrollbarThumb, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_verticalScrollbarThumb, put = __cordl_internal_set_m_verticalScrollbarThumb))::UnityEngine::GUIStyle* m_verticalScrollbarThumb;

  /// @brief Field m_verticalScrollbarUpButton, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_verticalScrollbarUpButton, put = __cordl_internal_set_m_verticalScrollbarUpButton))::UnityEngine::GUIStyle* m_verticalScrollbarUpButton;

  /// @brief Field m_verticalSlider, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_verticalSlider, put = __cordl_internal_set_m_verticalSlider))::UnityEngine::GUIStyle* m_verticalSlider;

  /// @brief Field m_verticalSliderThumb, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_verticalSliderThumb, put = __cordl_internal_set_m_verticalSliderThumb))::UnityEngine::GUIStyle* m_verticalSliderThumb;

  /// @brief Field m_verticalSliderThumbExtent, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_verticalSliderThumbExtent, put = __cordl_internal_set_m_verticalSliderThumbExtent))::UnityEngine::GUIStyle* m_verticalSliderThumbExtent;

  /// @brief Field m_window, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_window, put = __cordl_internal_set_m_window))::UnityEngine::GUIStyle* m_window;

  /// @brief Field ms_Error, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ms_Error, put = setStaticF_ms_Error))::UnityEngine::GUIStyle* ms_Error;

  __declspec(property(get = get_scrollView, put = set_scrollView))::UnityEngine::GUIStyle* scrollView;

  __declspec(property(get = get_settings))::UnityEngine::GUISettings* settings;

  __declspec(property(get = get_sliderMixed, put = set_sliderMixed))::UnityEngine::GUIStyle* sliderMixed;

  __declspec(property(get = get_textArea, put = set_textArea))::UnityEngine::GUIStyle* textArea;

  __declspec(property(get = get_textField, put = set_textField))::UnityEngine::GUIStyle* textField;

  __declspec(property(get = get_toggle, put = set_toggle))::UnityEngine::GUIStyle* toggle;

  __declspec(property(get = get_verticalScrollbar, put = set_verticalScrollbar))::UnityEngine::GUIStyle* verticalScrollbar;

  __declspec(property(get = get_verticalScrollbarDownButton, put = set_verticalScrollbarDownButton))::UnityEngine::GUIStyle* verticalScrollbarDownButton;

  __declspec(property(get = get_verticalScrollbarThumb, put = set_verticalScrollbarThumb))::UnityEngine::GUIStyle* verticalScrollbarThumb;

  __declspec(property(get = get_verticalScrollbarUpButton, put = set_verticalScrollbarUpButton))::UnityEngine::GUIStyle* verticalScrollbarUpButton;

  __declspec(property(get = get_verticalSlider, put = set_verticalSlider))::UnityEngine::GUIStyle* verticalSlider;

  __declspec(property(get = get_verticalSliderThumb, put = set_verticalSliderThumb))::UnityEngine::GUIStyle* verticalSliderThumb;

  __declspec(property(get = get_verticalSliderThumbExtent, put = set_verticalSliderThumbExtent))::UnityEngine::GUIStyle* verticalSliderThumbExtent;

  __declspec(property(get = get_window, put = set_window))::UnityEngine::GUIStyle* window;

  /// @brief Method Apply, addr 0x3242320, size 0x7c, virtual false, abstract: false, final false
  inline void Apply();

  /// @brief Method BuildStyleCache, addr 0x32426f8, size 0xb44, virtual false, abstract: false, final false
  inline void BuildStyleCache();

  /// @brief Method CleanupRoots, addr 0x324239c, size 0x4c, virtual false, abstract: false, final false
  static inline void CleanupRoots();

  /// @brief Method FindStyle, addr 0x3243508, size 0x88, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* FindStyle(::StringW styleName);

  /// @brief Method GetEnumerator, addr 0x3243590, size 0xc0, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetStyle, addr 0x324323c, size 0x2cc, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* GetStyle(::StringW styleName);

  /// @brief Method MakeCurrent, addr 0x3236a68, size 0xb4, virtual false, abstract: false, final false
  inline void MakeCurrent();

  static inline ::UnityEngine::GUISkin* New_ctor();

  /// @brief Method OnEnable, addr 0x324231c, size 0x4, virtual false, abstract: false, final false
  inline void OnEnable();

  constexpr ::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> const& __cordl_internal_get_m_CustomStyles() const;

  constexpr ::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*>& __cordl_internal_get_m_CustomStyles();

  constexpr ::UnityW<::UnityEngine::Font> const& __cordl_internal_get_m_Font() const;

  constexpr ::UnityW<::UnityEngine::Font>& __cordl_internal_get_m_Font();

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_ScrollView();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_ScrollView() const;

  constexpr ::UnityEngine::GUISettings*& __cordl_internal_get_m_Settings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUISettings*> const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_SliderMixed();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_SliderMixed() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GUIStyle*>*& __cordl_internal_get_m_Styles();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GUIStyle*>*> const& __cordl_internal_get_m_Styles() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_box();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_box() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_button();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_button() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_horizontalScrollbar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_horizontalScrollbar() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_horizontalScrollbarLeftButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_horizontalScrollbarLeftButton() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_horizontalScrollbarRightButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_horizontalScrollbarRightButton() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_horizontalScrollbarThumb();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_horizontalScrollbarThumb() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_horizontalSlider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_horizontalSlider() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_horizontalSliderThumb();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_horizontalSliderThumb() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_horizontalSliderThumbExtent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_horizontalSliderThumbExtent() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_label();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_label() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_textArea();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_textArea() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_textField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_textField() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_toggle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_toggle() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_verticalScrollbar();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_verticalScrollbar() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_verticalScrollbarDownButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_verticalScrollbarDownButton() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_verticalScrollbarThumb();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_verticalScrollbarThumb() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_verticalScrollbarUpButton();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_verticalScrollbarUpButton() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_verticalSlider();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_verticalSlider() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_verticalSliderThumb();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_verticalSliderThumb() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_verticalSliderThumbExtent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_verticalSliderThumbExtent() const;

  constexpr ::UnityEngine::GUIStyle*& __cordl_internal_get_m_window();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUIStyle*> const& __cordl_internal_get_m_window() const;

  constexpr void __cordl_internal_set_m_CustomStyles(::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> value);

  constexpr void __cordl_internal_set_m_Font(::UnityW<::UnityEngine::Font> value);

  constexpr void __cordl_internal_set_m_ScrollView(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::GUISettings* value);

  constexpr void __cordl_internal_set_m_SliderMixed(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_Styles(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GUIStyle*>* value);

  constexpr void __cordl_internal_set_m_box(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_button(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_horizontalScrollbar(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_horizontalScrollbarLeftButton(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_horizontalScrollbarRightButton(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_horizontalScrollbarThumb(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_horizontalSlider(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_horizontalSliderThumb(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_horizontalSliderThumbExtent(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_label(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_textArea(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_textField(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_toggle(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_verticalScrollbar(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_verticalScrollbarDownButton(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_verticalScrollbarThumb(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_verticalScrollbarUpButton(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_verticalSlider(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_verticalSliderThumb(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_verticalSliderThumbExtent(::UnityEngine::GUIStyle* value);

  constexpr void __cordl_internal_set_m_window(::UnityEngine::GUIStyle* value);

  /// @brief Method .ctor, addr 0x3242268, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::GUISkin> getStaticF_current();

  static inline ::UnityEngine::__GUISkin__SkinChangedDelegate* getStaticF_m_SkinChanged();

  static inline ::UnityEngine::GUIStyle* getStaticF_ms_Error();

  /// @brief Method get_box, addr 0x32371ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_box();

  /// @brief Method get_button, addr 0x32424ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_button();

  /// @brief Method get_customStyles, addr 0x324261c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> get_customStyles();

  /// @brief Method get_error, addr 0x3242634, size 0xc4, virtual false, abstract: false, final false
  static inline ::UnityEngine::GUIStyle* get_error();

  /// @brief Method get_font, addr 0x32423e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Font> get_font();

  /// @brief Method get_horizontalScrollbar, addr 0x324258c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_horizontalScrollbar();

  /// @brief Method get_horizontalScrollbarLeftButton, addr 0x32425ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_horizontalScrollbarLeftButton();

  /// @brief Method get_horizontalScrollbarRightButton, addr 0x32425bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_horizontalScrollbarRightButton();

  /// @brief Method get_horizontalScrollbarThumb, addr 0x324259c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_horizontalScrollbarThumb();

  /// @brief Method get_horizontalSlider, addr 0x324251c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_horizontalSlider();

  /// @brief Method get_horizontalSliderThumb, addr 0x324252c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_horizontalSliderThumb();

  /// @brief Method get_horizontalSliderThumbExtent, addr 0x324253c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_horizontalSliderThumbExtent();

  /// @brief Method get_label, addr 0x3236dd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_label();

  /// @brief Method get_scrollView, addr 0x324260c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_scrollView();

  /// @brief Method get_settings, addr 0x324262c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUISettings* get_settings();

  /// @brief Method get_sliderMixed, addr 0x324254c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_sliderMixed();

  /// @brief Method get_textArea, addr 0x32424dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_textArea();

  /// @brief Method get_textField, addr 0x32424cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_textField();

  /// @brief Method get_toggle, addr 0x32424fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_toggle();

  /// @brief Method get_verticalScrollbar, addr 0x32425cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_verticalScrollbar();

  /// @brief Method get_verticalScrollbarDownButton, addr 0x32425fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_verticalScrollbarDownButton();

  /// @brief Method get_verticalScrollbarThumb, addr 0x32425dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_verticalScrollbarThumb();

  /// @brief Method get_verticalScrollbarUpButton, addr 0x32425ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_verticalScrollbarUpButton();

  /// @brief Method get_verticalSlider, addr 0x324255c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_verticalSlider();

  /// @brief Method get_verticalSliderThumb, addr 0x324256c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_verticalSliderThumb();

  /// @brief Method get_verticalSliderThumbExtent, addr 0x324257c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_verticalSliderThumbExtent();

  /// @brief Method get_window, addr 0x324250c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GUIStyle* get_window();

  static inline void setStaticF_current(::UnityW<::UnityEngine::GUISkin> value);

  static inline void setStaticF_m_SkinChanged(::UnityEngine::__GUISkin__SkinChangedDelegate* value);

  static inline void setStaticF_ms_Error(::UnityEngine::GUIStyle* value);

  /// @brief Method set_box, addr 0x32424bc, size 0x8, virtual false, abstract: false, final false
  inline void set_box(::UnityEngine::GUIStyle* value);

  /// @brief Method set_button, addr 0x32424f4, size 0x8, virtual false, abstract: false, final false
  inline void set_button(::UnityEngine::GUIStyle* value);

  /// @brief Method set_customStyles, addr 0x3242624, size 0x8, virtual false, abstract: false, final false
  inline void set_customStyles(::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> value);

  /// @brief Method set_font, addr 0x32423f0, size 0xcc, virtual false, abstract: false, final false
  inline void set_font(::UnityEngine::Font* value);

  /// @brief Method set_horizontalScrollbar, addr 0x3242594, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalScrollbar(::UnityEngine::GUIStyle* value);

  /// @brief Method set_horizontalScrollbarLeftButton, addr 0x32425b4, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalScrollbarLeftButton(::UnityEngine::GUIStyle* value);

  /// @brief Method set_horizontalScrollbarRightButton, addr 0x32425c4, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalScrollbarRightButton(::UnityEngine::GUIStyle* value);

  /// @brief Method set_horizontalScrollbarThumb, addr 0x32425a4, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalScrollbarThumb(::UnityEngine::GUIStyle* value);

  /// @brief Method set_horizontalSlider, addr 0x3242524, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalSlider(::UnityEngine::GUIStyle* value);

  /// @brief Method set_horizontalSliderThumb, addr 0x3242534, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalSliderThumb(::UnityEngine::GUIStyle* value);

  /// @brief Method set_horizontalSliderThumbExtent, addr 0x3242544, size 0x8, virtual false, abstract: false, final false
  inline void set_horizontalSliderThumbExtent(::UnityEngine::GUIStyle* value);

  /// @brief Method set_label, addr 0x32424c4, size 0x8, virtual false, abstract: false, final false
  inline void set_label(::UnityEngine::GUIStyle* value);

  /// @brief Method set_scrollView, addr 0x3242614, size 0x8, virtual false, abstract: false, final false
  inline void set_scrollView(::UnityEngine::GUIStyle* value);

  /// @brief Method set_sliderMixed, addr 0x3242554, size 0x8, virtual false, abstract: false, final false
  inline void set_sliderMixed(::UnityEngine::GUIStyle* value);

  /// @brief Method set_textArea, addr 0x32424e4, size 0x8, virtual false, abstract: false, final false
  inline void set_textArea(::UnityEngine::GUIStyle* value);

  /// @brief Method set_textField, addr 0x32424d4, size 0x8, virtual false, abstract: false, final false
  inline void set_textField(::UnityEngine::GUIStyle* value);

  /// @brief Method set_toggle, addr 0x3242504, size 0x8, virtual false, abstract: false, final false
  inline void set_toggle(::UnityEngine::GUIStyle* value);

  /// @brief Method set_verticalScrollbar, addr 0x32425d4, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalScrollbar(::UnityEngine::GUIStyle* value);

  /// @brief Method set_verticalScrollbarDownButton, addr 0x3242604, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalScrollbarDownButton(::UnityEngine::GUIStyle* value);

  /// @brief Method set_verticalScrollbarThumb, addr 0x32425e4, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalScrollbarThumb(::UnityEngine::GUIStyle* value);

  /// @brief Method set_verticalScrollbarUpButton, addr 0x32425f4, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalScrollbarUpButton(::UnityEngine::GUIStyle* value);

  /// @brief Method set_verticalSlider, addr 0x3242564, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalSlider(::UnityEngine::GUIStyle* value);

  /// @brief Method set_verticalSliderThumb, addr 0x3242574, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalSliderThumb(::UnityEngine::GUIStyle* value);

  /// @brief Method set_verticalSliderThumbExtent, addr 0x3242584, size 0x8, virtual false, abstract: false, final false
  inline void set_verticalSliderThumbExtent(::UnityEngine::GUIStyle* value);

  /// @brief Method set_window, addr 0x3242514, size 0x8, virtual false, abstract: false, final false
  inline void set_window(::UnityEngine::GUIStyle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUISkin();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GUISkin", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUISkin(GUISkin&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUISkin", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUISkin(GUISkin const&) = delete;

  /// @brief Field m_Font, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Font> ___m_Font;

  /// @brief Field m_box, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_box;

  /// @brief Field m_button, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_button;

  /// @brief Field m_toggle, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_toggle;

  /// @brief Field m_label, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_label;

  /// @brief Field m_textField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_textField;

  /// @brief Field m_textArea, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_textArea;

  /// @brief Field m_window, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_window;

  /// @brief Field m_horizontalSlider, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_horizontalSlider;

  /// @brief Field m_horizontalSliderThumb, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_horizontalSliderThumb;

  /// @brief Field m_horizontalSliderThumbExtent, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_horizontalSliderThumbExtent;

  /// @brief Field m_verticalSlider, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_verticalSlider;

  /// @brief Field m_verticalSliderThumb, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_verticalSliderThumb;

  /// @brief Field m_verticalSliderThumbExtent, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_verticalSliderThumbExtent;

  /// @brief Field m_SliderMixed, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_SliderMixed;

  /// @brief Field m_horizontalScrollbar, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_horizontalScrollbar;

  /// @brief Field m_horizontalScrollbarThumb, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_horizontalScrollbarThumb;

  /// @brief Field m_horizontalScrollbarLeftButton, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_horizontalScrollbarLeftButton;

  /// @brief Field m_horizontalScrollbarRightButton, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_horizontalScrollbarRightButton;

  /// @brief Field m_verticalScrollbar, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_verticalScrollbar;

  /// @brief Field m_verticalScrollbarThumb, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_verticalScrollbarThumb;

  /// @brief Field m_verticalScrollbarUpButton, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_verticalScrollbarUpButton;

  /// @brief Field m_verticalScrollbarDownButton, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_verticalScrollbarDownButton;

  /// @brief Field m_ScrollView, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::GUIStyle* ___m_ScrollView;

  /// @brief Field m_CustomStyles, offset: 0xd8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> ___m_CustomStyles;

  /// @brief Field m_Settings, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::GUISettings* ___m_Settings;

  /// @brief Field m_Styles, offset: 0xe8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GUIStyle*>* ___m_Styles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUISkin, 0xf0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_Font) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_box) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_button) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_toggle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_label) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_textField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_textArea) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_window) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_horizontalSlider) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_horizontalSliderThumb) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_horizontalSliderThumbExtent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_verticalSlider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_verticalSliderThumb) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_verticalSliderThumbExtent) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_SliderMixed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_horizontalScrollbar) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_horizontalScrollbarThumb) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_horizontalScrollbarLeftButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_horizontalScrollbarRightButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_verticalScrollbar) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_verticalScrollbarThumb) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_verticalScrollbarUpButton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_verticalScrollbarDownButton) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_ScrollView) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_CustomStyles) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_Settings) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::GUISkin, ___m_Styles) == 0xe8, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::GUISkin);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUISkin*, "UnityEngine", "GUISkin");
NEED_NO_BOX(::UnityEngine::__GUISkin__SkinChangedDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GUISkin__SkinChangedDelegate*, "UnityEngine", "GUISkin/SkinChangedDelegate");
