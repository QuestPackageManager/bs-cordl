#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextInputBaseField_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
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
class IDelayedField;
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
struct ScrollerVisibility;
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
struct Color;
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
  /// @brief Field m_AutoCorrection, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AutoCorrection, put = __cordl_internal_set_m_AutoCorrection)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_AutoCorrection;

  /// @brief Field m_EmojiFallbackSupport, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmojiFallbackSupport,
                      put = __cordl_internal_set_m_EmojiFallbackSupport)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_EmojiFallbackSupport;

  /// @brief Field m_HideMobileInput, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HideMobileInput, put = __cordl_internal_set_m_HideMobileInput)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_HideMobileInput;

  /// @brief Field m_HidePlaceholderOnFocus, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HidePlaceholderOnFocus,
                      put = __cordl_internal_set_m_HidePlaceholderOnFocus)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_HidePlaceholderOnFocus;

  /// @brief Field m_IsDelayed, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsDelayed, put = __cordl_internal_set_m_IsDelayed)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsDelayed;

  /// @brief Field m_IsReadOnly, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsReadOnly;

  /// @brief Field m_KeyboardType, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_KeyboardType,
                      put = __cordl_internal_set_m_KeyboardType)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* m_KeyboardType;

  /// @brief Field m_MaskCharacter, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaskCharacter, put = __cordl_internal_set_m_MaskCharacter)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_MaskCharacter;

  /// @brief Field m_MaxLength, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxLength, put = __cordl_internal_set_m_MaxLength)) ::UnityEngine::UIElements::UxmlIntAttributeDescription* m_MaxLength;

  /// @brief Field m_Password, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Password, put = __cordl_internal_set_m_Password)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Password;

  /// @brief Field m_PlaceholderText, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PlaceholderText, put = __cordl_internal_set_m_PlaceholderText)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_PlaceholderText;

  /// @brief Field m_SelectAllOnFocus, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectAllOnFocus, put = __cordl_internal_set_m_SelectAllOnFocus)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_SelectAllOnFocus;

  /// @brief Field m_SelectAllOnMouseUp, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectAllOnMouseUp, put = __cordl_internal_set_m_SelectAllOnMouseUp)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_SelectAllOnMouseUp;

  /// @brief Field m_SelectLineByTripleClick, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectLineByTripleClick,
                      put = __cordl_internal_set_m_SelectLineByTripleClick)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_SelectLineByTripleClick;

  /// @brief Field m_SelectWordByDoubleClick, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectWordByDoubleClick,
                      put = __cordl_internal_set_m_SelectWordByDoubleClick)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_SelectWordByDoubleClick;

  /// @brief Field m_VerticalScrollerVisibility, offset 0xd8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_VerticalScrollerVisibility,
      put = __cordl_internal_set_m_VerticalScrollerVisibility)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* m_VerticalScrollerVisibility;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits<TValueType>* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_AutoCorrection() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_AutoCorrection();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_EmojiFallbackSupport() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_EmojiFallbackSupport();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_HideMobileInput() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_HideMobileInput();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_HidePlaceholderOnFocus() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_HidePlaceholderOnFocus();

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

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_PlaceholderText() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_PlaceholderText();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_SelectAllOnFocus() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_SelectAllOnFocus();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_SelectAllOnMouseUp() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_SelectAllOnMouseUp();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_SelectLineByTripleClick() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_SelectLineByTripleClick();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_SelectWordByDoubleClick() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_SelectWordByDoubleClick();

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* const& __cordl_internal_get_m_VerticalScrollerVisibility() const;

  constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*& __cordl_internal_get_m_VerticalScrollerVisibility();

  constexpr void __cordl_internal_set_m_AutoCorrection(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_EmojiFallbackSupport(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_HideMobileInput(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_HidePlaceholderOnFocus(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_KeyboardType(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* value);

  constexpr void __cordl_internal_set_m_MaskCharacter(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_MaxLength(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Password(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_PlaceholderText(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SelectAllOnFocus(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SelectAllOnMouseUp(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SelectLineByTripleClick(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SelectWordByDoubleClick(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4228 };

  /// @brief Field m_MaxLength, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_MaxLength;

  /// @brief Field m_Password, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Password;

  /// @brief Field m_MaskCharacter, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_MaskCharacter;

  /// @brief Field m_PlaceholderText, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_PlaceholderText;

  /// @brief Field m_HidePlaceholderOnFocus, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_HidePlaceholderOnFocus;

  /// @brief Field m_IsReadOnly, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsReadOnly;

  /// @brief Field m_IsDelayed, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsDelayed;

  /// @brief Field m_VerticalScrollerVisibility, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* ___m_VerticalScrollerVisibility;

  /// @brief Field m_SelectAllOnMouseUp, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_SelectAllOnMouseUp;

  /// @brief Field m_SelectAllOnFocus, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_SelectAllOnFocus;

  /// @brief Field m_SelectWordByDoubleClick, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_SelectWordByDoubleClick;

  /// @brief Field m_SelectLineByTripleClick, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_SelectLineByTripleClick;

  /// @brief Field m_EmojiFallbackSupport, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_EmojiFallbackSupport;

  /// @brief Field m_HideMobileInput, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_HideMobileInput;

  /// @brief Field m_KeyboardType, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::TouchScreenKeyboardType>* ___m_KeyboardType;

  /// @brief Field m_AutoCorrection, offset: 0x118, size: 0x8, def value: None
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
  /// @brief Field <isDragging>k__BackingField, offset 0x4c0, size 0x1
  __declspec(property(get = __cordl_internal_get__isDragging_k__BackingField, put = __cordl_internal_set__isDragging_k__BackingField)) bool _isDragging_k__BackingField;

  /// @brief Field <textElement>k__BackingField, offset 0x4a8, size 0x8
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

  /// @brief Field lastCursorPos, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get_lastCursorPos, put = __cordl_internal_set_lastCursorPos)) ::UnityEngine::Vector2 lastCursorPos;

  /// @brief Field m_ScrollViewWasClamped, offset 0x4cc, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ScrollViewWasClamped, put = __cordl_internal_set_m_ScrollViewWasClamped)) bool m_ScrollViewWasClamped;

  /// @brief Field multilineContainer, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get_multilineContainer, put = __cordl_internal_set_multilineContainer)) ::UnityEngine::UIElements::VisualElement* multilineContainer;

  __declspec(property(get = get_originalText)) ::StringW originalText;

  /// @brief Field scrollOffset, offset 0x4c4, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollOffset, put = __cordl_internal_set_scrollOffset)) ::UnityEngine::Vector2 scrollOffset;

  /// @brief Field scrollView, offset 0x4b0, size 0x8
  __declspec(property(get = __cordl_internal_get_scrollView, put = __cordl_internal_set_scrollView)) ::UnityEngine::UIElements::ScrollView* scrollView;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_textEdition)) ::UnityEngine::UIElements::ITextEdition* textEdition;

  __declspec(property(get = get_textElement, put = set_textElement)) ::UnityEngine::UIElements::TextElement* textElement;

  __declspec(property(get = get_textSelection)) ::UnityEngine::UIElements::ITextSelection* textSelection;

  /// @brief Field verticalHorizontalVariantInnerTextElementUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalHorizontalVariantInnerTextElementUssClassName,
                      put = setStaticF_verticalHorizontalVariantInnerTextElementUssClassName)) ::StringW verticalHorizontalVariantInnerTextElementUssClassName;

  /// @brief Field verticalScrollerVisibility, offset 0x4d8, size 0x4
  __declspec(property(get = __cordl_internal_get_verticalScrollerVisibility,
                      put = __cordl_internal_set_verticalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility verticalScrollerVisibility;

  /// @brief Field verticalVariantInnerTextElementUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalVariantInnerTextElementUssClassName,
                      put = setStaticF_verticalVariantInnerTextElementUssClassName)) ::StringW verticalVariantInnerTextElementUssClassName;

  /// @brief Method AcceptCharacter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AcceptCharacter(char16_t c);

  /// @brief Method GetDefaultValueType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW GetDefaultValueType();

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

  /// @brief Method SetMultiline, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetMultiline();

  /// @brief Method SetMultilineContainerStyle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetMultilineContainerStyle();

  /// @brief Method SetScrollViewMode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetScrollViewMode();

  /// @brief Method SetSingleLine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetSingleLine();

  /// @brief Method SetVerticalScrollerVisibility, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool SetVerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility sv);

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

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_multilineContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_multilineContainer();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scrollOffset() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_scrollOffset();

  constexpr ::UnityEngine::UIElements::ScrollView* const& __cordl_internal_get_scrollView() const;

  constexpr ::UnityEngine::UIElements::ScrollView*& __cordl_internal_get_scrollView();

  constexpr ::UnityEngine::UIElements::ScrollerVisibility const& __cordl_internal_get_verticalScrollerVisibility() const;

  constexpr ::UnityEngine::UIElements::ScrollerVisibility& __cordl_internal_get_verticalScrollerVisibility();

  constexpr void __cordl_internal_set__isDragging_k__BackingField(bool value);

  constexpr void __cordl_internal_set__textElement_k__BackingField(::UnityEngine::UIElements::TextElement* value);

  constexpr void __cordl_internal_set_lastCursorPos(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_ScrollViewWasClamped(bool value);

  constexpr void __cordl_internal_set_multilineContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_scrollOffset(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_scrollView(::UnityEngine::UIElements::ScrollView* value);

  constexpr void __cordl_internal_set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4229 };

  /// @brief Field <textElement>k__BackingField, offset: 0x4a8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ____textElement_k__BackingField;

  /// @brief Field scrollView, offset: 0x4b0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ScrollView* ___scrollView;

  /// @brief Field multilineContainer, offset: 0x4b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___multilineContainer;

  /// @brief Field <isDragging>k__BackingField, offset: 0x4c0, size: 0x1, def value: None
  bool ____isDragging_k__BackingField;

  /// @brief Field scrollOffset, offset: 0x4c4, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___scrollOffset;

  /// @brief Field m_ScrollViewWasClamped, offset: 0x4cc, size: 0x1, def value: None
  bool ___m_ScrollViewWasClamped;

  /// @brief Field lastCursorPos, offset: 0x4d0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___lastCursorPos;

  /// @brief Field verticalScrollerVisibility, offset: 0x4d8, size: 0x4, def value: None
  ::UnityEngine::UIElements::ScrollerVisibility ___verticalScrollerVisibility;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.CustomStyleProperty`1<T>
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

  __declspec(property(get = get_autoCorrection, put = set_autoCorrection)) bool autoCorrection;

  /// @brief Field autoCorrectionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_autoCorrectionProperty, put = setStaticF_autoCorrectionProperty)) ::UnityEngine::UIElements::BindingId autoCorrectionProperty;

  __declspec(property(get = get_cursorColor)) ::UnityEngine::Color cursorColor;

  /// @brief Field cursorColorProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_cursorColorProperty, put = setStaticF_cursorColorProperty)) ::UnityEngine::UIElements::BindingId cursorColorProperty;

  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  /// @brief Field cursorIndexProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_cursorIndexProperty, put = setStaticF_cursorIndexProperty)) ::UnityEngine::UIElements::BindingId cursorIndexProperty;

  __declspec(property(get = get_cursorPosition)) ::UnityEngine::Vector2 cursorPosition;

  /// @brief Field cursorPositionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_cursorPositionProperty, put = setStaticF_cursorPositionProperty)) ::UnityEngine::UIElements::BindingId cursorPositionProperty;

  __declspec(property(get = get_doubleClickSelectsWord, put = set_doubleClickSelectsWord)) bool doubleClickSelectsWord;

  /// @brief Field doubleClickSelectsWordProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_doubleClickSelectsWordProperty, put = setStaticF_doubleClickSelectsWordProperty)) ::UnityEngine::UIElements::BindingId doubleClickSelectsWordProperty;

  __declspec(property(get = get_emojiFallbackSupport, put = set_emojiFallbackSupport)) bool emojiFallbackSupport;

  /// @brief Field emojiFallbackSupportProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_emojiFallbackSupportProperty, put = setStaticF_emojiFallbackSupportProperty)) ::UnityEngine::UIElements::BindingId emojiFallbackSupportProperty;

  __declspec(property(get = get_hideMobileInput, put = set_hideMobileInput)) bool hideMobileInput;

  /// @brief Field hideMobileInputProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_hideMobileInputProperty, put = setStaticF_hideMobileInputProperty)) ::UnityEngine::UIElements::BindingId hideMobileInputProperty;

  __declspec(property(get = get_hidePlaceholderOnFocus, put = set_hidePlaceholderOnFocus)) bool hidePlaceholderOnFocus;

  /// @brief Field hidePlaceholderOnFocusProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_hidePlaceholderOnFocusProperty, put = setStaticF_hidePlaceholderOnFocusProperty)) ::UnityEngine::UIElements::BindingId hidePlaceholderOnFocusProperty;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  __declspec(property(get = get_isDelayed, put = set_isDelayed)) bool isDelayed;

  /// @brief Field isDelayedProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_isDelayedProperty, put = setStaticF_isDelayedProperty)) ::UnityEngine::UIElements::BindingId isDelayedProperty;

  __declspec(property(get = get_isPasswordField, put = set_isPasswordField)) bool isPasswordField;

  /// @brief Field isPasswordFieldProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_isPasswordFieldProperty, put = setStaticF_isPasswordFieldProperty)) ::UnityEngine::UIElements::BindingId isPasswordFieldProperty;

  __declspec(property(get = get_isReadOnly, put = set_isReadOnly)) bool isReadOnly;

  /// @brief Field isReadOnlyProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_isReadOnlyProperty, put = setStaticF_isReadOnlyProperty)) ::UnityEngine::UIElements::BindingId isReadOnlyProperty;

  __declspec(property(get = get_keyboardType, put = set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType keyboardType;

  /// @brief Field keyboardTypeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_keyboardTypeProperty, put = setStaticF_keyboardTypeProperty)) ::UnityEngine::UIElements::BindingId keyboardTypeProperty;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_TextInputBase, offset 0x528, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextInputBase,
                      put = __cordl_internal_set_m_TextInputBase)) ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* m_TextInputBase;

  __declspec(property(get = get_maskChar, put = set_maskChar)) char16_t maskChar;

  /// @brief Field maskCharProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_maskCharProperty, put = setStaticF_maskCharProperty)) ::UnityEngine::UIElements::BindingId maskCharProperty;

  __declspec(property(get = get_maxLength, put = set_maxLength)) int32_t maxLength;

  /// @brief Field maxLengthProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_maxLengthProperty, put = setStaticF_maxLengthProperty)) ::UnityEngine::UIElements::BindingId maxLengthProperty;

  /// @brief Field multilineContainerClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_multilineContainerClassName, put = setStaticF_multilineContainerClassName)) ::StringW multilineContainerClassName;

  /// @brief Field multilineInputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_multilineInputUssClassName, put = setStaticF_multilineInputUssClassName)) ::StringW multilineInputUssClassName;

  /// @brief Field multilineInputWithScrollViewUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_multilineInputWithScrollViewUssClassName, put = setStaticF_multilineInputWithScrollViewUssClassName)) ::StringW multilineInputWithScrollViewUssClassName;

  __declspec(property(get = get_onIsReadOnlyChanged, put = set_onIsReadOnlyChanged)) ::System::Action_1<bool>* onIsReadOnlyChanged;

  __declspec(property(put = set_password)) bool password;

  __declspec(property(get = get_placeholderText, put = set_placeholderText)) ::StringW placeholderText;

  /// @brief Field placeholderTextProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_placeholderTextProperty, put = setStaticF_placeholderTextProperty)) ::UnityEngine::UIElements::BindingId placeholderTextProperty;

  /// @brief Field placeholderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_placeholderUssClassName, put = setStaticF_placeholderUssClassName)) ::StringW placeholderUssClassName;

  __declspec(property(put = set_readOnly)) bool readOnly;

  /// @brief Field s_CursorColorProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CursorColorProperty, put = setStaticF_s_CursorColorProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> s_CursorColorProperty;

  /// @brief Field s_SelectionColorProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_SelectionColorProperty, put = setStaticF_s_SelectionColorProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>
      s_SelectionColorProperty;

  __declspec(property(get = get_selectAllOnFocus, put = set_selectAllOnFocus)) bool selectAllOnFocus;

  /// @brief Field selectAllOnFocusProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectAllOnFocusProperty, put = setStaticF_selectAllOnFocusProperty)) ::UnityEngine::UIElements::BindingId selectAllOnFocusProperty;

  __declspec(property(get = get_selectAllOnMouseUp, put = set_selectAllOnMouseUp)) bool selectAllOnMouseUp;

  /// @brief Field selectAllOnMouseUpProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectAllOnMouseUpProperty, put = setStaticF_selectAllOnMouseUpProperty)) ::UnityEngine::UIElements::BindingId selectAllOnMouseUpProperty;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  /// @brief Field selectIndexProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectIndexProperty, put = setStaticF_selectIndexProperty)) ::UnityEngine::UIElements::BindingId selectIndexProperty;

  __declspec(property(get = get_selectionColor)) ::UnityEngine::Color selectionColor;

  /// @brief Field selectionColorProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectionColorProperty, put = setStaticF_selectionColorProperty)) ::UnityEngine::UIElements::BindingId selectionColorProperty;

  /// @brief Field singleLineInputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_singleLineInputUssClassName, put = setStaticF_singleLineInputUssClassName)) ::StringW singleLineInputUssClassName;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_textEdition)) ::UnityEngine::UIElements::ITextEdition* textEdition;

  /// @brief Field textEditionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_textEditionProperty, put = setStaticF_textEditionProperty)) ::UnityEngine::UIElements::BindingId textEditionProperty;

  __declspec(property(get = get_textInputBase)) ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* textInputBase;

  /// @brief Field textInputUssName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textInputUssName, put = setStaticF_textInputUssName)) ::StringW textInputUssName;

  __declspec(property(get = get_textSelection)) ::UnityEngine::UIElements::ITextSelection* textSelection;

  /// @brief Field textSelectionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_textSelectionProperty, put = setStaticF_textSelectionProperty)) ::UnityEngine::UIElements::BindingId textSelectionProperty;

  __declspec(property(get = get_tripleClickSelectsLine, put = set_tripleClickSelectsLine)) bool tripleClickSelectsLine;

  /// @brief Field tripleClickSelectsLineProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_tripleClickSelectsLineProperty, put = setStaticF_tripleClickSelectsLineProperty)) ::UnityEngine::UIElements::BindingId tripleClickSelectsLineProperty;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_verticalScrollerVisibility, put = set_verticalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility verticalScrollerVisibility;

  /// @brief Field verticalScrollerVisibilityProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_verticalScrollerVisibilityProperty,
                      put = setStaticF_verticalScrollerVisibilityProperty)) ::UnityEngine::UIElements::BindingId verticalScrollerVisibilityProperty;

  /// @brief Convert operator to "::UnityEngine::UIElements::IDelayedField"
  constexpr operator ::UnityEngine::UIElements::IDelayedField*() noexcept;

  /// @brief Method HandleEventBubbleUp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>* New_ctor(::StringW label, int32_t maxLength, char16_t maskChar,
                                                                                      ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* textInputBase);

  /// @brief Method OnFieldCustomStyleResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e);

  /// @brief Method OnPlaceholderChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnPlaceholderChanged();

  /// @brief Method StringToValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType StringToValue(::StringW str);

  /// @brief Method UpdateMixedValueContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  /// @brief Method UpdatePlaceholderClassList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdatePlaceholderClassList(::UnityEngine::UIElements::ChangeEvent_1<TValueType>* evt);

  /// @brief Method UpdateTextFromValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateTextFromValue();

  /// @brief Method UpdateValueFromText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateValueFromText();

  /// @brief Method ValueToString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ValueToString(TValueType value);

  constexpr ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* const& __cordl_internal_get_m_TextInputBase() const;

  constexpr ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>*& __cordl_internal_get_m_TextInputBase();

  constexpr void __cordl_internal_set_m_TextInputBase(::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength, char16_t maskChar, ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* textInputBase);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_autoCorrectionProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_cursorColorProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_cursorIndexProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_cursorPositionProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_doubleClickSelectsWordProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_emojiFallbackSupportProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_hideMobileInputProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_hidePlaceholderOnFocusProperty();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_isDelayedProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_isPasswordFieldProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_isReadOnlyProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_keyboardTypeProperty();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_maskCharProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_maxLengthProperty();

  static inline ::StringW getStaticF_multilineContainerClassName();

  static inline ::StringW getStaticF_multilineInputUssClassName();

  static inline ::StringW getStaticF_multilineInputWithScrollViewUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_placeholderTextProperty();

  static inline ::StringW getStaticF_placeholderUssClassName();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> getStaticF_s_CursorColorProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> getStaticF_s_SelectionColorProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectAllOnFocusProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectAllOnMouseUpProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectIndexProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectionColorProperty();

  static inline ::StringW getStaticF_singleLineInputUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_textEditionProperty();

  static inline ::StringW getStaticF_textInputUssName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_textSelectionProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_tripleClickSelectsLineProperty();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_verticalScrollerVisibilityProperty();

  /// @brief Method get_autoCorrection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_autoCorrection();

  /// @brief Method get_cursorColor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_cursorColor();

  /// @brief Method get_cursorIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_cursorPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_cursorPosition();

  /// @brief Method get_doubleClickSelectsWord, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_doubleClickSelectsWord();

  /// @brief Method get_emojiFallbackSupport, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_emojiFallbackSupport();

  /// @brief Method get_hideMobileInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_hideMobileInput();

  /// @brief Method get_hidePlaceholderOnFocus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_hidePlaceholderOnFocus();

  /// @brief Method get_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_isDelayed();

  /// @brief Method get_isPasswordField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isPasswordField();

  /// @brief Method get_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isReadOnly();

  /// @brief Method get_keyboardType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboardType get_keyboardType();

  /// @brief Method get_maskChar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline char16_t get_maskChar();

  /// @brief Method get_maxLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_maxLength();

  /// @brief Method get_onIsReadOnlyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Action_1<bool>* get_onIsReadOnlyChanged();

  /// @brief Method get_placeholderText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_placeholderText();

  /// @brief Method get_selectAllOnFocus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_selectAllOnFocus();

  /// @brief Method get_selectAllOnMouseUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_selectAllOnMouseUp();

  /// @brief Method get_selectIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_selectionColor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectionColor();

  /// @brief Method get_text, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_textEdition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextEdition* get_textEdition();

  /// @brief Method get_textInputBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* get_textInputBase();

  /// @brief Method get_textSelection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextSelection* get_textSelection();

  /// @brief Method get_tripleClickSelectsLine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_tripleClickSelectsLine();

  /// @brief Method get_verticalScrollerVisibility, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ScrollerVisibility get_verticalScrollerVisibility();

  /// @brief Convert to "::UnityEngine::UIElements::IDelayedField"
  constexpr ::UnityEngine::UIElements::IDelayedField* i___UnityEngine__UIElements__IDelayedField() noexcept;

  static inline void setStaticF_autoCorrectionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_cursorColorProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_cursorIndexProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_cursorPositionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_doubleClickSelectsWordProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_emojiFallbackSupportProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_hideMobileInputProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_hidePlaceholderOnFocusProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_isDelayedProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_isPasswordFieldProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_isReadOnlyProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_keyboardTypeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_maskCharProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_maxLengthProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_multilineContainerClassName(::StringW value);

  static inline void setStaticF_multilineInputUssClassName(::StringW value);

  static inline void setStaticF_multilineInputWithScrollViewUssClassName(::StringW value);

  static inline void setStaticF_placeholderTextProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_placeholderUssClassName(::StringW value);

  static inline void setStaticF_s_CursorColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value);

  static inline void setStaticF_s_SelectionColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value);

  static inline void setStaticF_selectAllOnFocusProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_selectAllOnMouseUpProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_selectIndexProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_selectionColorProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_singleLineInputUssClassName(::StringW value);

  static inline void setStaticF_textEditionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_textInputUssName(::StringW value);

  static inline void setStaticF_textSelectionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_tripleClickSelectsLineProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_verticalScrollerVisibilityProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_autoCorrection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_autoCorrection(bool value);

  /// @brief Method set_cursorIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_doubleClickSelectsWord, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_doubleClickSelectsWord(bool value);

  /// @brief Method set_emojiFallbackSupport, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_emojiFallbackSupport(bool value);

  /// @brief Method set_hideMobileInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_hideMobileInput(bool value);

  /// @brief Method set_hidePlaceholderOnFocus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_hidePlaceholderOnFocus(bool value);

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

  /// @brief Method set_onIsReadOnlyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_onIsReadOnlyChanged(::System::Action_1<bool>* value);

  /// @brief Method set_password, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_password(bool value);

  /// @brief Method set_placeholderText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_placeholderText(::StringW value);

  /// @brief Method set_readOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_readOnly(bool value);

  /// @brief Method set_selectAllOnFocus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_selectAllOnFocus(bool value);

  /// @brief Method set_selectAllOnMouseUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_selectAllOnMouseUp(bool value);

  /// @brief Method set_selectIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method set_text, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_tripleClickSelectsLine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_tripleClickSelectsLine(bool value);

  /// @brief Method set_verticalScrollerVisibility, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4230 };

  /// @brief Field m_TextInputBase, offset: 0x528, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType>* ___m_TextInputBase;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextInputBaseField_1, "UnityEngine.UIElements", "TextInputBaseField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase, "UnityEngine.UIElements", "TextInputBaseField`1/TextInputBase");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextInputBaseField_1_UxmlTraits, "UnityEngine.UIElements", "TextInputBaseField`1/UxmlTraits");
