#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextInputBaseField_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextInputBaseField_1)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class ITextEdition;
}
namespace UnityEngine::UIElements {
class ITextSelection;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class TextInputBaseField_1_TextInputBase;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class TextInputBaseField_1_UxmlTraits;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template <typename T> class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlIntAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct TouchScreenKeyboardType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType> class TextInputBaseField_1;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class TextInputBaseField_1_TextInputBase;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class TextInputBaseField_1_UxmlTraits;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TextInputBaseField_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits);
// Dependencies UnityEngine.UIElements.BaseFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: UnityEngine.UIElements.TextInputBaseField`1/UxmlTraits<TValueType>
class CORDL_TYPE TextInputBaseField_1_UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<::StringW, ::UnityEngine::UIElements::UxmlStringAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_AutoCorrection, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AutoCorrection, put = __cordl_internal_set_m_AutoCorrection)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_AutoCorrection;

  /// @brief Field m_HideMobileInput, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HideMobileInput, put = __cordl_internal_set_m_HideMobileInput)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_HideMobileInput;

  /// @brief Field m_IsDelayed, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsDelayed, put = __cordl_internal_set_m_IsDelayed)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsDelayed;

  /// @brief Field m_IsReadOnly, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsReadOnly;

  /// @brief Field m_KeyboardType, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyboardType,
                      put = __cordl_internal_set_m_KeyboardType)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* m_KeyboardType;

  /// @brief Field m_MaskCharacter, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaskCharacter, put = __cordl_internal_set_m_MaskCharacter)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_MaskCharacter;

  /// @brief Field m_MaxLength, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxLength, put = __cordl_internal_set_m_MaxLength)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_MaxLength;

  /// @brief Field m_Password, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Password, put = __cordl_internal_set_m_Password)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Password;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_AutoCorrection() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_AutoCorrection();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_HideMobileInput() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_HideMobileInput();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_IsDelayed() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IsDelayed();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_IsReadOnly() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IsReadOnly();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* const& __cordl_internal_get_m_KeyboardType() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>*& __cordl_internal_get_m_KeyboardType();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_MaskCharacter() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_MaskCharacter();

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription* const& __cordl_internal_get_m_MaxLength() const;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_MaxLength();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Password() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Password();

  constexpr void __cordl_internal_set_m_AutoCorrection(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_HideMobileInput(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_KeyboardType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* value);

  constexpr void __cordl_internal_set_m_MaskCharacter(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_MaxLength(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Password(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInputBaseField_1_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInputBaseField_1_UxmlTraits(TextInputBaseField_1_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInputBaseField_1_UxmlTraits(TextInputBaseField_1_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5613 };

  /// @brief Field m_MaxLength, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_MaxLength;

  /// @brief Field m_Password, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Password;

  /// @brief Field m_MaskCharacter, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_MaskCharacter;

  /// @brief Field m_IsReadOnly, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsReadOnly;

  /// @brief Field m_IsDelayed, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsDelayed;

  /// @brief Field m_HideMobileInput, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_HideMobileInput;

  /// @brief Field m_KeyboardType, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* ___m_KeyboardType;

  /// @brief Field m_AutoCorrection, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_AutoCorrection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.ScrollerVisibility, UnityEngine.UIElements.VisualElement, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: UnityEngine.UIElements.TextInputBaseField`1/TextInputBase<TValueType>
class CORDL_TYPE TextInputBaseField_1_TextInputBase : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  /// @brief Field <isDragging>k__BackingField, offset 0x3e0, size 0x1
  __declspec(property(get = __cordl_internal_get__isDragging_k__BackingField, put = __cordl_internal_set__isDragging_k__BackingField)) bool _isDragging_k__BackingField;

  /// @brief Field <textElement>k__BackingField, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get__textElement_k__BackingField,
                      put = __cordl_internal_set__textElement_k__BackingField)) ::UnityEngine::UIElements::TextElement* _textElement_k__BackingField;

  /// @brief Field horizontalVariantInnerTextElementUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_horizontalVariantInnerTextElementUssClassName,
                      put = setStaticF_horizontalVariantInnerTextElementUssClassName)) ::StringW horizontalVariantInnerTextElementUssClassName;

  /// @brief Field innerComponentsModifierName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_innerComponentsModifierName, put = setStaticF_innerComponentsModifierName)) ::StringW innerComponentsModifierName;

  /// @brief Field innerContentContainerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_innerContentContainerUssClassName, put = setStaticF_innerContentContainerUssClassName)) ::StringW innerContentContainerUssClassName;

  /// @brief Field innerScrollviewUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_innerScrollviewUssClassName, put = setStaticF_innerScrollviewUssClassName)) ::StringW innerScrollviewUssClassName;

  /// @brief Field innerTextElementUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_innerTextElementUssClassName, put = setStaticF_innerTextElementUssClassName)) ::StringW innerTextElementUssClassName;

  /// @brief Field innerTextElementWithScrollViewUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_innerTextElementWithScrollViewUssClassName, put = setStaticF_innerTextElementWithScrollViewUssClassName)) ::StringW innerTextElementWithScrollViewUssClassName;

  /// @brief Field innerViewportUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_innerViewportUssClassName, put = setStaticF_innerViewportUssClassName)) ::StringW innerViewportUssClassName;

  __declspec(property(put = set_isDragging)) bool isDragging;

  __declspec(property(get = get_isPasswordField, put = set_isPasswordField)) bool isPasswordField;

  __declspec(property(get = get_isReadOnly)) bool isReadOnly;

  /// @brief Field lastCursorPos, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_lastCursorPos, put = __cordl_internal_set_lastCursorPos)) ::UnityEngine::Vector2 lastCursorPos;

  /// @brief Field m_ScrollViewWasClamped, offset 0x3ec, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ScrollViewWasClamped, put = __cordl_internal_set_m_ScrollViewWasClamped)) bool m_ScrollViewWasClamped;

  /// @brief Field m_VerticalScrollerVisibility, offset 0x3f8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VerticalScrollerVisibility,
                      put = __cordl_internal_set_m_VerticalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility m_VerticalScrollerVisibility;

  __declspec(property(put = set_maskChar)) char16_t maskChar;

  __declspec(property(put = set_maxLength)) int32_t maxLength;

  /// @brief Field multilineContainer, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get_multilineContainer, put = __cordl_internal_set_multilineContainer)) ::UnityEngine::UIElements::VisualElement* multilineContainer;

  __declspec(property(get = get_originalText)) ::StringW originalText;

  /// @brief Field scrollOffset, offset 0x3e4, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollOffset, put = __cordl_internal_set_scrollOffset)) ::UnityEngine::Vector2 scrollOffset;

  /// @brief Field scrollView, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollView, put = __cordl_internal_set_scrollView)) ::UnityEngine::UIElements::ScrollView* scrollView;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_textEdition)) ::UnityEngine::UIElements::ITextEdition* textEdition;

  __declspec(property(get = get_textElement, put = set_textElement)) ::UnityEngine::UIElements::TextElement* textElement;

  __declspec(property(get = get_textSelection)) ::UnityEngine::UIElements::ITextSelection* textSelection;

  /// @brief Field verticalHorizontalVariantInnerTextElementUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalHorizontalVariantInnerTextElementUssClassName,
                      put = setStaticF_verticalHorizontalVariantInnerTextElementUssClassName)) ::StringW verticalHorizontalVariantInnerTextElementUssClassName;

  /// @brief Field verticalVariantInnerTextElementUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalVariantInnerTextElementUssClassName,
                      put = setStaticF_verticalVariantInnerTextElementUssClassName)) ::StringW verticalVariantInnerTextElementUssClassName;

  /// @brief Method AcceptCharacter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AcceptCharacter(char16_t c);

  /// @brief Method GetScrollOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetScrollOffset(float_t xOffset, float_t yOffset, float_t contentViewportWidth, bool isBackspace, bool widthChanged);

  /// @brief Method MakeSureScrollViewDoesNotLeakEvents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MakeSureScrollViewDoesNotLeakEvents(::UnityEngine::UIElements::ChangeEvent_1<float_t>* evt);

  /// @brief Method MoveFocusToCompositeRoot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MoveFocusToCompositeRoot();

  static inline ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* New_ctor();

  /// @brief Method OnInputCustomStyleResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnInputCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e);

  /// @brief Method RemoveMultilineComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveMultilineComponents();

  /// @brief Method RemoveSingleLineComponents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RemoveSingleLineComponents();

  /// @brief Method ScrollViewOnGeometryChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ScrollViewOnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method SelectAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SelectAll();

  /// @brief Method SelectNone, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SelectNone();

  /// @brief Method SetMultiline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetMultiline();

  /// @brief Method SetMultilineContainerStyle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetMultilineContainerStyle();

  /// @brief Method SetScrollViewMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetScrollViewMode();

  /// @brief Method SetSingleLine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetSingleLine();

  /// @brief Method StringToValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType StringToValue(::StringW str);

  /// @brief Method TextElementOnGeometryChangedEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void TextElementOnGeometryChangedEvent(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method UpdateScrollOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateScrollOffset(bool isBackspace);

  /// @brief Method UpdateScrollOffset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateScrollOffset(bool isBackspace, bool widthChanged);

  /// @brief Method UpdateTextFromValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateTextFromValue();

  /// @brief Method UpdateValueFromText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateValueFromText();

  constexpr bool const& __cordl_internal_get__isDragging_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDragging_k__BackingField();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get__textElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get__textElement_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_lastCursorPos() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_lastCursorPos();

  constexpr bool const& __cordl_internal_get_m_ScrollViewWasClamped() const;

  constexpr bool& __cordl_internal_get_m_ScrollViewWasClamped();

  constexpr ::UnityEngine::UIElements::ScrollerVisibility const& __cordl_internal_get_m_VerticalScrollerVisibility() const;

  constexpr ::UnityEngine::UIElements::ScrollerVisibility& __cordl_internal_get_m_VerticalScrollerVisibility();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_multilineContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_multilineContainer();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scrollOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scrollOffset();

  constexpr ::UnityEngine::UIElements::ScrollView* const& __cordl_internal_get_scrollView() const;

  constexpr ::UnityEngine::UIElements::ScrollView*& __cordl_internal_get_scrollView();

  constexpr void __cordl_internal_set__isDragging_k__BackingField(bool value);

  constexpr void __cordl_internal_set__textElement_k__BackingField(::UnityEngine::UIElements::TextElement* value);

  constexpr void __cordl_internal_set_lastCursorPos(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_ScrollViewWasClamped(bool value);

  constexpr void __cordl_internal_set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

  constexpr void __cordl_internal_set_multilineContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_scrollOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_scrollView(::UnityEngine::UIElements::ScrollView* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_horizontalVariantInnerTextElementUssClassName();

  static inline ::StringW getStaticF_innerComponentsModifierName();

  static inline ::StringW getStaticF_innerContentContainerUssClassName();

  static inline ::StringW getStaticF_innerScrollviewUssClassName();

  static inline ::StringW getStaticF_innerTextElementUssClassName();

  static inline ::StringW getStaticF_innerTextElementWithScrollViewUssClassName();

  static inline ::StringW getStaticF_innerViewportUssClassName();

  static inline ::StringW getStaticF_verticalHorizontalVariantInnerTextElementUssClassName();

  static inline ::StringW getStaticF_verticalVariantInnerTextElementUssClassName();

  /// @brief Method get_isPasswordField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isPasswordField();

  /// @brief Method get_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isReadOnly();

  /// @brief Method get_originalText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_originalText();

  /// @brief Method get_text, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_textEdition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextEdition* get_textEdition();

  /// @brief Method get_textElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextElement* get_textElement();

  /// @brief Method get_textSelection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextSelection* get_textSelection();

  static inline void setStaticF_horizontalVariantInnerTextElementUssClassName(::StringW value);

  static inline void setStaticF_innerComponentsModifierName(::StringW value);

  static inline void setStaticF_innerContentContainerUssClassName(::StringW value);

  static inline void setStaticF_innerScrollviewUssClassName(::StringW value);

  static inline void setStaticF_innerTextElementUssClassName(::StringW value);

  static inline void setStaticF_innerTextElementWithScrollViewUssClassName(::StringW value);

  static inline void setStaticF_innerViewportUssClassName(::StringW value);

  static inline void setStaticF_verticalHorizontalVariantInnerTextElementUssClassName(::StringW value);

  static inline void setStaticF_verticalVariantInnerTextElementUssClassName(::StringW value);

  /// @brief Method set_isDragging, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isDragging(bool value);

  /// @brief Method set_isPasswordField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_isPasswordField(bool value);

  /// @brief Method set_maskChar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maskChar(char16_t value);

  /// @brief Method set_maxLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maxLength(int32_t value);

  /// @brief Method set_text, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_textElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_textElement(::UnityEngine::UIElements::TextElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInputBaseField_1_TextInputBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1_TextInputBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInputBaseField_1_TextInputBase(TextInputBaseField_1_TextInputBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1_TextInputBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInputBaseField_1_TextInputBase(TextInputBaseField_1_TextInputBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5614 };

  /// @brief Field <textElement>k__BackingField, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ____textElement_k__BackingField;

  /// @brief Field scrollView, offset: 0x3d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ScrollView* ___scrollView;

  /// @brief Field multilineContainer, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___multilineContainer;

  /// @brief Field <isDragging>k__BackingField, offset: 0x3e0, size: 0x1, def value: None
  bool ____isDragging_k__BackingField;

  /// @brief Field scrollOffset, offset: 0x3e4, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scrollOffset;

  /// @brief Field m_ScrollViewWasClamped, offset: 0x3ec, size: 0x1, def value: None
  bool ___m_ScrollViewWasClamped;

  /// @brief Field lastCursorPos, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___lastCursorPos;

  /// @brief Field m_VerticalScrollerVisibility, offset: 0x3f8, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollerVisibility ___m_VerticalScrollerVisibility;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.CustomStyleProperty`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: UnityEngine.UIElements.TextInputBaseField`1<TValueType>
class CORDL_TYPE TextInputBaseField_1 : public ::UnityEngine::UIElements::BaseField_1<TValueType> {
public:
  // Declarations
  using TextInputBase = ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>;

  using UxmlTraits = ::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>;

  __declspec(property(put = set_autoCorrection)) bool autoCorrection;

  __declspec(property(put = set_hideMobileInput)) bool hideMobileInput;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  __declspec(property(get = get_isDelayed, put = set_isDelayed)) bool isDelayed;

  __declspec(property(put = set_isPasswordField)) bool isPasswordField;

  __declspec(property(get = get_isReadOnly, put = set_isReadOnly)) bool isReadOnly;

  __declspec(property(put = set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType keyboardType;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_TextInputBase, offset 0x448, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextInputBase,
                      put = __cordl_internal_set_m_TextInputBase)) ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* m_TextInputBase;

  /// @brief Field m_VisualInputTabIndex, offset 0x440, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VisualInputTabIndex, put = __cordl_internal_set_m_VisualInputTabIndex)) int32_t m_VisualInputTabIndex;

  __declspec(property(put = set_maskChar)) char16_t maskChar;

  __declspec(property(put = set_maxLength)) int32_t maxLength;

  /// @brief Field multilineContainerClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_multilineContainerClassName, put = setStaticF_multilineContainerClassName)) ::StringW multilineContainerClassName;

  /// @brief Field multilineInputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_multilineInputUssClassName, put = setStaticF_multilineInputUssClassName)) ::StringW multilineInputUssClassName;

  /// @brief Field multilineInputWithScrollViewUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_multilineInputWithScrollViewUssClassName, put = setStaticF_multilineInputWithScrollViewUssClassName)) ::StringW multilineInputWithScrollViewUssClassName;

  /// @brief Field onIsReadOnlyChanged, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsReadOnlyChanged, put = __cordl_internal_set_onIsReadOnlyChanged)) ::System::Action_1<bool>* onIsReadOnlyChanged;

  /// @brief Field s_CursorColorProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CursorColorProperty, put = setStaticF_s_CursorColorProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> s_CursorColorProperty;

  /// @brief Field s_SelectionColorProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SelectionColorProperty, put = setStaticF_s_SelectionColorProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>
      s_SelectionColorProperty;

  /// @brief Field singleLineInputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_singleLineInputUssClassName, put = setStaticF_singleLineInputUssClassName)) ::StringW singleLineInputUssClassName;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_textEdition)) ::UnityEngine::UIElements::ITextEdition* textEdition;

  __declspec(property(get = get_textInputBase)) ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* textInputBase;

  /// @brief Field textInputUssName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textInputUssName, put = setStaticF_textInputUssName)) ::StringW textInputUssName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>* New_ctor(::StringW label, int32_t maxLength, char16_t maskChar,
                                                                                      ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* textInputBase);

  /// @brief Method OnFieldCustomStyleResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e);

  /// @brief Method StringToValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType StringToValue(::StringW str);

  /// @brief Method UpdateMixedValueContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  /// @brief Method UpdateTextFromValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateTextFromValue();

  /// @brief Method UpdateValueFromText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateValueFromText();

  /// @brief Method ValueToString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ValueToString(TValueType value);

  constexpr ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* const& __cordl_internal_get_m_TextInputBase() const;

  constexpr ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*& __cordl_internal_get_m_TextInputBase();

  constexpr int32_t const& __cordl_internal_get_m_VisualInputTabIndex() const;

  constexpr int32_t& __cordl_internal_get_m_VisualInputTabIndex();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onIsReadOnlyChanged() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_onIsReadOnlyChanged();

  constexpr void __cordl_internal_set_m_TextInputBase(::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* value);

  constexpr void __cordl_internal_set_m_VisualInputTabIndex(int32_t value);

  constexpr void __cordl_internal_set_onIsReadOnlyChanged(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength, char16_t maskChar, ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* textInputBase);

  /// @brief Method add_onIsReadOnlyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_onIsReadOnlyChanged(::System::Action_1<bool>* value);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_multilineContainerClassName();

  static inline ::StringW getStaticF_multilineInputUssClassName();

  static inline ::StringW getStaticF_multilineInputWithScrollViewUssClassName();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> getStaticF_s_CursorColorProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> getStaticF_s_SelectionColorProperty();

  static inline ::StringW getStaticF_singleLineInputUssClassName();

  static inline ::StringW getStaticF_textInputUssName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isDelayed();

  /// @brief Method get_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isReadOnly();

  /// @brief Method get_text, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_textEdition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextEdition* get_textEdition();

  /// @brief Method get_textInputBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* get_textInputBase();

  /// @brief Method remove_onIsReadOnlyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_onIsReadOnlyChanged(::System::Action_1<bool>* value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_multilineContainerClassName(::StringW value);

  static inline void setStaticF_multilineInputUssClassName(::StringW value);

  static inline void setStaticF_multilineInputWithScrollViewUssClassName(::StringW value);

  static inline void setStaticF_s_CursorColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value);

  static inline void setStaticF_s_SelectionColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value);

  static inline void setStaticF_singleLineInputUssClassName(::StringW value);

  static inline void setStaticF_textInputUssName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_autoCorrection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_autoCorrection(bool value);

  /// @brief Method set_hideMobileInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_hideMobileInput(bool value);

  /// @brief Method set_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isDelayed(bool value);

  /// @brief Method set_isPasswordField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isPasswordField(bool value);

  /// @brief Method set_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isReadOnly(bool value);

  /// @brief Method set_keyboardType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method set_maskChar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maskChar(char16_t value);

  /// @brief Method set_maxLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maxLength(int32_t value);

  /// @brief Method set_text, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInputBaseField_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInputBaseField_1(TextInputBaseField_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInputBaseField_1(TextInputBaseField_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5615 };

  /// @brief Field m_VisualInputTabIndex, offset: 0x440, size: 0x4, def value: None
  int32_t ___m_VisualInputTabIndex;

  /// @brief Field m_TextInputBase, offset: 0x448, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* ___m_TextInputBase;

  /// @brief Field onIsReadOnlyChanged, offset: 0x450, size: 0x8, def value: None
  ::System::Action_1<bool>* ___onIsReadOnlyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextInputBaseField_1, "UnityEngine.UIElements", "TextInputBaseField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase, "UnityEngine.UIElements", "TextInputBaseField`1/TextInputBase");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits, "UnityEngine.UIElements", "TextInputBaseField`1/UxmlTraits");
