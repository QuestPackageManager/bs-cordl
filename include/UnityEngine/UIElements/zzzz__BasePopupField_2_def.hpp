#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BasePopupField_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BasePopupField_2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueChoice> class BasePopupField_2_PopupTextElement;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueChoice> class BasePopupField_2___c;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class IGenericMenu;
}
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class PointerEventBase_1;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueChoice> class BasePopupField_2;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueChoice> class BasePopupField_2_PopupTextElement;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueChoice> class BasePopupField_2___c;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BasePopupField_2);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BasePopupField_2_PopupTextElement);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BasePopupField_2___c);
// Dependencies UnityEngine.UIElements.TextElement
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TValueChoice>
// Is value type: false
// CS Name: UnityEngine.UIElements.BasePopupField`2/PopupTextElement<TValueType,TValueChoice>
class CORDL_TYPE BasePopupField_2_PopupTextElement : public ::UnityEngine::UIElements::TextElement {
public:
  // Declarations
  /// @brief Method DoMeasure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  static inline ::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasePopupField_2_PopupTextElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasePopupField_2_PopupTextElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasePopupField_2_PopupTextElement(BasePopupField_2_PopupTextElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasePopupField_2_PopupTextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasePopupField_2_PopupTextElement(BasePopupField_2_PopupTextElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5504 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TValueChoice>
// Is value type: false
// CS Name: UnityEngine.UIElements.BasePopupField`2/<>c<TValueType,TValueChoice>
class CORDL_TYPE BasePopupField_2___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* __9__23_0;

  static inline ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* New_ctor();

  /// @brief Method <.ctor>b__23_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void __ctor_b__23_0(::UnityEngine::UIElements::MouseDownEvent* e);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* getStaticF___9();

  static inline ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* getStaticF___9__23_0();

  static inline void setStaticF___9(::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>* value);

  static inline void setStaticF___9__23_0(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::MouseDownEvent*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasePopupField_2___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasePopupField_2___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasePopupField_2___c(BasePopupField_2___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasePopupField_2___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasePopupField_2___c(BasePopupField_2___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5505 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1<TValueType>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TValueChoice>
// Is value type: false
// CS Name: UnityEngine.UIElements.BasePopupField`2<TValueType,TValueChoice>
class CORDL_TYPE BasePopupField_2 : public ::UnityEngine::UIElements::BaseField_1<TValueType> {
public:
  // Declarations
  using PopupTextElement = ::UnityEngine::UIElements::BasePopupField_2_PopupTextElement<TValueType, TValueChoice>;

  using __c = ::UnityEngine::UIElements::BasePopupField_2___c<TValueType, TValueChoice>;

  /// @brief Field arrowUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_arrowUssClassName, put = setStaticF_arrowUssClassName)) ::StringW arrowUssClassName;

  __declspec(property(put = set_choices)) ::System::Collections::Generic::List_1<TValueChoice>* choices;

  /// @brief Field createMenuCallback, offset 0x468, size 0x8
  __declspec(property(get = __cordl_internal_get_createMenuCallback, put = __cordl_internal_set_createMenuCallback)) ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* createMenuCallback;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_ArrowElement, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ArrowElement, put = __cordl_internal_set_m_ArrowElement)) ::UnityEngine::UIElements::VisualElement* m_ArrowElement;

  /// @brief Field m_Choices, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Choices, put = __cordl_internal_set_m_Choices)) ::System::Collections::Generic::List_1<TValueChoice>* m_Choices;

  /// @brief Field m_FormatListItemCallback, offset 0x460, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FormatListItemCallback, put = __cordl_internal_set_m_FormatListItemCallback)) ::System::Func_2<TValueChoice, ::StringW>* m_FormatListItemCallback;

  /// @brief Field m_FormatSelectedValueCallback, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FormatSelectedValueCallback,
                      put = __cordl_internal_set_m_FormatSelectedValueCallback)) ::System::Func_2<TValueChoice, ::StringW>* m_FormatSelectedValueCallback;

  /// @brief Field m_TextElement, offset 0x448, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  __declspec(property(get = get_textElement)) ::UnityEngine::UIElements::TextElement* textElement;

  /// @brief Field textUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textUssClassName, put = setStaticF_textUssClassName)) ::StringW textUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method AddMenuItems, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddMenuItems(::UnityEngine::UIElements::IGenericMenu* menu);

  /// @brief Method ContainsPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool ContainsPointer(int32_t pointerId);

  /// @brief Method GetListItemToDisplay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetListItemToDisplay(TValueType item);

  /// @brief Method GetValueToDisplay, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetValueToDisplay();

  static inline ::UnityEngine::UIElements::BasePopupField_2<TValueType, TValueChoice>* New_ctor(::StringW label);

  /// @brief Method OnNavigationSubmit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method OnPointerDownEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method OnPointerMoveEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method ProcessPointerDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void ProcessPointerDown(::UnityEngine::UIElements::PointerEventBase_1<T>* evt);

  /// @brief Method SetValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(TValueType newValue);

  /// @brief Method ShowMenu, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ShowMenu();

  /// @brief Method UpdateMixedValueContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* const& __cordl_internal_get_createMenuCallback() const;

  constexpr ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>*& __cordl_internal_get_createMenuCallback();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ArrowElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ArrowElement();

  constexpr ::System::Collections::Generic::List_1<TValueChoice>* const& __cordl_internal_get_m_Choices() const;

  constexpr ::System::Collections::Generic::List_1<TValueChoice>*& __cordl_internal_get_m_Choices();

  constexpr ::System::Func_2<TValueChoice, ::StringW>* const& __cordl_internal_get_m_FormatListItemCallback() const;

  constexpr ::System::Func_2<TValueChoice, ::StringW>*& __cordl_internal_get_m_FormatListItemCallback();

  constexpr ::System::Func_2<TValueChoice, ::StringW>* const& __cordl_internal_get_m_FormatSelectedValueCallback() const;

  constexpr ::System::Func_2<TValueChoice, ::StringW>*& __cordl_internal_get_m_FormatSelectedValueCallback();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr void __cordl_internal_set_createMenuCallback(::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* value);

  constexpr void __cordl_internal_set_m_ArrowElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Choices(::System::Collections::Generic::List_1<TValueChoice>* value);

  constexpr void __cordl_internal_set_m_FormatListItemCallback(::System::Func_2<TValueChoice, ::StringW>* value);

  constexpr void __cordl_internal_set_m_FormatSelectedValueCallback(::System::Func_2<TValueChoice, ::StringW>* value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  static inline ::StringW getStaticF_arrowUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_textUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_textElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextElement* get_textElement();

  static inline void setStaticF_arrowUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_textUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_choices, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_choices(::System::Collections::Generic::List_1<TValueChoice>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BasePopupField_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BasePopupField_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BasePopupField_2(BasePopupField_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BasePopupField_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BasePopupField_2(BasePopupField_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5506 };

  /// @brief Field m_Choices, offset: 0x440, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<TValueChoice>* ___m_Choices;

  /// @brief Field m_TextElement, offset: 0x448, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field m_ArrowElement, offset: 0x450, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_ArrowElement;

  /// @brief Field m_FormatSelectedValueCallback, offset: 0x458, size: 0x8, def value: None
  ::System::Func_2<TValueChoice, ::StringW>* ___m_FormatSelectedValueCallback;

  /// @brief Field m_FormatListItemCallback, offset: 0x460, size: 0x8, def value: None
  ::System::Func_2<TValueChoice, ::StringW>* ___m_FormatListItemCallback;

  /// @brief Field createMenuCallback, offset: 0x468, size: 0x8, def value: None
  ::System::Func_1<::UnityEngine::UIElements::IGenericMenu*>* ___createMenuCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BasePopupField_2, "UnityEngine.UIElements", "BasePopupField`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BasePopupField_2_PopupTextElement, "UnityEngine.UIElements", "BasePopupField`2/PopupTextElement");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BasePopupField_2___c, "UnityEngine.UIElements", "BasePopupField`2/<>c");
