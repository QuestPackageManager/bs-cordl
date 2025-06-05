#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IExperimentalFeatures_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextEdition_def.hpp"
#include "UnityEngine/UIElements/zzzz__ITextSelection_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TouchScreenKeyboardType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextElement)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
struct DropdownMenuAction_Status;
}
namespace UnityEngine::UIElements {
class DropdownMenuAction;
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
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
class TextEditingManipulator;
}
namespace UnityEngine::UIElements {
class TextElement_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TextElement_UxmlTraits;
}
namespace UnityEngine::UIElements {
struct TextOverflowPosition;
}
namespace UnityEngine::UIElements {
class TextSelectingManipulator;
}
namespace UnityEngine::UIElements {
class UITKTextHandle;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
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
class TouchScreenKeyboard;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class TextElement_UxmlFactory;
}
namespace UnityEngine::UIElements {
class TextElement_UxmlTraits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextElement);
MARK_REF_PTR_T(::UnityEngine::UIElements::TextElement_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::TextElement_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextElement/UxmlFactory
class CORDL_TYPE TextElement_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::TextElement*, ::UnityEngine::UIElements::TextElement_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::TextElement_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x4a9acb4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextElement_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextElement_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextElement_UxmlFactory(TextElement_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextElement_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextElement_UxmlFactory(TextElement_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6203 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextElement_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BindableElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextElement/UxmlTraits
class CORDL_TYPE TextElement_UxmlTraits : public ::UnityEngine::UIElements::BindableElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_DisplayTooltipWhenElided, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayTooltipWhenElided,
                      put = __cordl_internal_set_m_DisplayTooltipWhenElided)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_DisplayTooltipWhenElided;

  /// @brief Field m_EnableRichText, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnableRichText, put = __cordl_internal_set_m_EnableRichText)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_EnableRichText;

  /// @brief Field m_ParseEscapeSequences, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParseEscapeSequences,
                      put = __cordl_internal_set_m_ParseEscapeSequences)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ParseEscapeSequences;

  /// @brief Field m_Text, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x4a9acfc, size 0x1e0, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TextElement_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_DisplayTooltipWhenElided() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_DisplayTooltipWhenElided();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_EnableRichText() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_EnableRichText();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ParseEscapeSequences() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ParseEscapeSequences();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_DisplayTooltipWhenElided(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_EnableRichText(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ParseEscapeSequences(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x4a9aedc, size 0x148, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextElement_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextElement_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextElement_UxmlTraits(TextElement_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextElement_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextElement_UxmlTraits(TextElement_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6204 };

  /// @brief Field m_Text, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_EnableRichText, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_EnableRichText;

  /// @brief Field m_ParseEscapeSequences, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ParseEscapeSequences;

  /// @brief Field m_DisplayTooltipWhenElided, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_DisplayTooltipWhenElided;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_Text) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_EnableRichText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_ParseEscapeSequences) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_DisplayTooltipWhenElided) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextElement_UxmlTraits, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.TouchScreenKeyboardType, UnityEngine.UIElements.BindableElement, UnityEngine.UIElements.IExperimentalFeatures,
// UnityEngine.UIElements.INotifyValueChanged`1<T>, UnityEngine.UIElements.ITextEdition, UnityEngine.UIElements.ITextSelection
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextElement
class CORDL_TYPE TextElement : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::TextElement_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TextElement_UxmlTraits;

  __declspec(property(get = UnityEngine_UIElements_INotifyValueChanged_System_String__get_value,
                      put = UnityEngine_UIElements_INotifyValueChanged_System_String__set_value)) ::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__value;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_AcceptCharacter,
                      put = UnityEngine_UIElements_ITextEdition_set_AcceptCharacter)) ::System::Func_2<char16_t, bool>* UnityEngine_UIElements_ITextEdition_AcceptCharacter;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_MoveFocusToCompositeRoot,
                      put = UnityEngine_UIElements_ITextEdition_set_MoveFocusToCompositeRoot)) ::System::Action* UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_UpdateScrollOffset,
                      put = UnityEngine_UIElements_ITextEdition_set_UpdateScrollOffset)) ::System::Action_1<bool>* UnityEngine_UIElements_ITextEdition_UpdateScrollOffset;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_UpdateTextFromValue,
                      put = UnityEngine_UIElements_ITextEdition_set_UpdateTextFromValue)) ::System::Action* UnityEngine_UIElements_ITextEdition_UpdateTextFromValue;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_UpdateValueFromText,
                      put = UnityEngine_UIElements_ITextEdition_set_UpdateValueFromText)) ::System::Action* UnityEngine_UIElements_ITextEdition_UpdateValueFromText;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_autoCorrection,
                      put = UnityEngine_UIElements_ITextEdition_set_autoCorrection)) bool UnityEngine_UIElements_ITextEdition_autoCorrection;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_hideMobileInput,
                      put = UnityEngine_UIElements_ITextEdition_set_hideMobileInput)) bool UnityEngine_UIElements_ITextEdition_hideMobileInput;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_isDelayed, put = UnityEngine_UIElements_ITextEdition_set_isDelayed)) bool UnityEngine_UIElements_ITextEdition_isDelayed;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_isPassword, put = UnityEngine_UIElements_ITextEdition_set_isPassword)) bool UnityEngine_UIElements_ITextEdition_isPassword;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_isReadOnly, put = UnityEngine_UIElements_ITextEdition_set_isReadOnly)) bool UnityEngine_UIElements_ITextEdition_isReadOnly;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_keyboardType,
                      put = UnityEngine_UIElements_ITextEdition_set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType UnityEngine_UIElements_ITextEdition_keyboardType;

  __declspec(property(put = UnityEngine_UIElements_ITextEdition_set_maskChar)) char16_t UnityEngine_UIElements_ITextEdition_maskChar;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_maxLength, put = UnityEngine_UIElements_ITextEdition_set_maxLength)) int32_t UnityEngine_UIElements_ITextEdition_maxLength;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_multiline, put = UnityEngine_UIElements_ITextEdition_set_multiline)) bool UnityEngine_UIElements_ITextEdition_multiline;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_cursorColor,
                      put = UnityEngine_UIElements_ITextSelection_set_cursorColor)) ::UnityEngine::Color UnityEngine_UIElements_ITextSelection_cursorColor;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_cursorIndex,
                      put = UnityEngine_UIElements_ITextSelection_set_cursorIndex)) int32_t UnityEngine_UIElements_ITextSelection_cursorIndex;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_cursorPosition)) ::UnityEngine::Vector2 UnityEngine_UIElements_ITextSelection_cursorPosition;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_cursorWidth)) float_t UnityEngine_UIElements_ITextSelection_cursorWidth;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_doubleClickSelectsWord)) bool UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_isSelectable,
                      put = UnityEngine_UIElements_ITextSelection_set_isSelectable)) bool UnityEngine_UIElements_ITextSelection_isSelectable;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_lineHeightAtCursorPosition)) float_t UnityEngine_UIElements_ITextSelection_lineHeightAtCursorPosition;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_selectAllOnFocus,
                      put = UnityEngine_UIElements_ITextSelection_set_selectAllOnFocus)) bool UnityEngine_UIElements_ITextSelection_selectAllOnFocus;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_selectAllOnMouseUp,
                      put = UnityEngine_UIElements_ITextSelection_set_selectAllOnMouseUp)) bool UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_selectIndex,
                      put = UnityEngine_UIElements_ITextSelection_set_selectIndex)) int32_t UnityEngine_UIElements_ITextSelection_selectIndex;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_selectionColor,
                      put = UnityEngine_UIElements_ITextSelection_set_selectionColor)) ::UnityEngine::Color UnityEngine_UIElements_ITextSelection_selectionColor;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_tripleClickSelectsLine)) bool UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.AcceptCharacter>k__BackingField, offset 0x428, size 0x8
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField)) ::System::Func_2<char16_t, bool>*
      _UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.MoveFocusToCompositeRoot>k__BackingField, offset 0x448, size 0x8
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField)) ::System::Action*
      _UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateScrollOffset>k__BackingField, offset 0x430, size 0x8
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField)) ::System::Action_1<bool>*
      _UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateTextFromValue>k__BackingField, offset 0x440, size 0x8
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField)) ::System::Action* _UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateValueFromText>k__BackingField, offset 0x438, size 0x8
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField)) ::System::Action* _UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.isDelayed>k__BackingField, offset 0x424, size 0x1
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField)) bool _UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextSelection.doubleClickSelectsWord>k__BackingField, offset 0x471, size 0x1
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord_k__BackingField)) bool _UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextSelection.selectAllOnFocus>k__BackingField, offset 0x473, size 0x1
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextSelection_selectAllOnFocus_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextSelection_selectAllOnFocus_k__BackingField)) bool _UnityEngine_UIElements_ITextSelection_selectAllOnFocus_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextSelection.selectAllOnMouseUp>k__BackingField, offset 0x474, size 0x1
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp_k__BackingField)) bool _UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextSelection.tripleClickSelectsLine>k__BackingField, offset 0x472, size 0x1
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine_k__BackingField)) bool _UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine_k__BackingField;

  /// @brief Field <isElided>k__BackingField, offset 0x3eb, size 0x1
  __declspec(property(get = __cordl_internal_get__isElided_k__BackingField, put = __cordl_internal_set__isElided_k__BackingField)) bool _isElided_k__BackingField;

  /// @brief Field <uitkTextHandle>k__BackingField, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get__uitkTextHandle_k__BackingField,
                      put = __cordl_internal_set__uitkTextHandle_k__BackingField)) ::UnityEngine::UIElements::UITKTextHandle* _uitkTextHandle_k__BackingField;

  __declspec(property(get = get_displayTooltipWhenElided, put = set_displayTooltipWhenElided)) bool displayTooltipWhenElided;

  /// @brief Field editingManipulator, offset 0x400, size 0x8
  __declspec(property(get = __cordl_internal_get_editingManipulator, put = __cordl_internal_set_editingManipulator)) ::UnityEngine::UIElements::TextEditingManipulator* editingManipulator;

  __declspec(property(get = get_edition)) ::UnityEngine::UIElements::ITextEdition* edition;

  __declspec(property(get = get_effectiveMaskChar)) char16_t effectiveMaskChar;

  /// @brief Field elidedText, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_elidedText, put = __cordl_internal_set_elidedText)) ::StringW elidedText;

  __declspec(property(get = get_enableRichText, put = set_enableRichText)) bool enableRichText;

  __declspec(property(get = get_hasFocus)) bool hasFocus;

  __declspec(property(get = get_isElided, put = set_isElided)) bool isElided;

  /// @brief Field k_EllipsisText, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EllipsisText, put = setStaticF_k_EllipsisText)) ::StringW k_EllipsisText;

  /// @brief Field m_AutoCorrection, offset 0x463, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AutoCorrection, put = __cordl_internal_set_m_AutoCorrection)) bool m_AutoCorrection;

  /// @brief Field m_CursorColor, offset 0x488, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CursorColor, put = __cordl_internal_set_m_CursorColor)) ::UnityEngine::Color m_CursorColor;

  /// @brief Field m_CursorWidth, offset 0x498, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorWidth, put = __cordl_internal_set_m_CursorWidth)) float_t m_CursorWidth;

  /// @brief Field m_DisplayTooltipWhenElided, offset 0x3ea, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisplayTooltipWhenElided, put = __cordl_internal_set_m_DisplayTooltipWhenElided)) bool m_DisplayTooltipWhenElided;

  /// @brief Field m_EnableRichText, offset 0x3e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRichText, put = __cordl_internal_set_m_EnableRichText)) bool m_EnableRichText;

  /// @brief Field m_HideMobileInput, offset 0x41c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HideMobileInput, put = __cordl_internal_set_m_HideMobileInput)) bool m_HideMobileInput;

  /// @brief Field m_IsPassword, offset 0x462, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPassword, put = __cordl_internal_set_m_IsPassword)) bool m_IsPassword;

  /// @brief Field m_IsReadOnly, offset 0x41d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly)) bool m_IsReadOnly;

  /// @brief Field m_IsSelectable, offset 0x470, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsSelectable, put = __cordl_internal_set_m_IsSelectable)) bool m_IsSelectable;

  /// @brief Field m_KeyboardType, offset 0x418, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardType, put = __cordl_internal_set_m_KeyboardType)) ::UnityEngine::TouchScreenKeyboardType m_KeyboardType;

  /// @brief Field m_MaskChar, offset 0x460, size 0x2
  __declspec(property(get = __cordl_internal_get_m_MaskChar, put = __cordl_internal_set_m_MaskChar)) char16_t m_MaskChar;

  /// @brief Field m_MaxLength, offset 0x420, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxLength, put = __cordl_internal_set_m_MaxLength)) int32_t m_MaxLength;

  /// @brief Field m_Multiline, offset 0x408, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Multiline, put = __cordl_internal_set_m_Multiline)) bool m_Multiline;

  /// @brief Field m_OriginalText, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalText, put = __cordl_internal_set_m_OriginalText)) ::StringW m_OriginalText;

  /// @brief Field m_ParseEscapeSequences, offset 0x3e9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ParseEscapeSequences, put = __cordl_internal_set_m_ParseEscapeSequences)) bool m_ParseEscapeSequences;

  /// @brief Field m_RenderedText, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderedText, put = __cordl_internal_set_m_RenderedText)) ::StringW m_RenderedText;

  /// @brief Field m_SelectingManipulator, offset 0x468, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectingManipulator,
                      put = __cordl_internal_set_m_SelectingManipulator)) ::UnityEngine::UIElements::TextSelectingManipulator* m_SelectingManipulator;

  /// @brief Field m_SelectionColor, offset 0x478, size 0x10
  __declspec(property(get = __cordl_internal_get_m_SelectionColor, put = __cordl_internal_set_m_SelectionColor)) ::UnityEngine::Color m_SelectionColor;

  /// @brief Field m_Text, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  /// @brief Field m_TouchScreenKeyboard, offset 0x410, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TouchScreenKeyboard, put = __cordl_internal_set_m_TouchScreenKeyboard)) ::UnityEngine::TouchScreenKeyboard* m_TouchScreenKeyboard;

  /// @brief Field m_WasElided, offset 0x3f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WasElided, put = __cordl_internal_set_m_WasElided)) bool m_WasElided;

  __declspec(property(get = get_originalText)) ::StringW originalText;

  __declspec(property(get = get_parseEscapeSequences, put = set_parseEscapeSequences)) bool parseEscapeSequences;

  __declspec(property(get = get_renderedText, put = set_renderedText)) ::StringW renderedText;

  __declspec(property(get = get_selectingManipulator)) ::UnityEngine::UIElements::TextSelectingManipulator* selectingManipulator;

  __declspec(property(get = get_selection)) ::UnityEngine::UIElements::ITextSelection* selection;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  __declspec(property(get = get_uitkTextHandle, put = set_uitkTextHandle)) ::UnityEngine::UIElements::UITKTextHandle* uitkTextHandle;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr operator ::UnityEngine::UIElements::IExperimentalFeatures*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextEdition"
  constexpr operator ::UnityEngine::UIElements::ITextEdition*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextSelection"
  constexpr operator ::UnityEngine::UIElements::ITextSelection*() noexcept;

  /// @brief Method BuildContextualMenu, addr 0x4a99184, size 0x380, virtual false, abstract: false, final false
  inline void BuildContextualMenu(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt);

  /// @brief Method Copy, addr 0x4a990f4, size 0x48, virtual false, abstract: false, final false
  inline void Copy(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method CopyActionStatus, addr 0x4a99640, size 0x140, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenuAction_Status CopyActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method Cut, addr 0x4a990ac, size 0x48, virtual false, abstract: false, final false
  inline void Cut(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method CutActionStatus, addr 0x4a99504, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenuAction_Status CutActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method DoMeasure, addr 0x4a9870c, size 0x4c, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  /// @brief Method DrawCaret, addr 0x4a97e5c, size 0x44c, virtual false, abstract: false, final false
  inline void DrawCaret(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method DrawHighlighting, addr 0x4a972ec, size 0xb70, virtual false, abstract: false, final false
  inline void DrawHighlighting(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method ElideText, addr 0x4a982a8, size 0x460, virtual false, abstract: false, final false
  inline ::StringW ElideText(::StringW drawText, ::StringW ellipsisText, float_t width, ::UnityEngine::UIElements::TextOverflowPosition textOverflowPosition);

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x4a997dc, size 0x360, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method GetLastCharacterAt, addr 0x4a9aacc, size 0x15c, virtual false, abstract: false, final false
  inline int32_t GetLastCharacterAt(int32_t lineIndex);

  /// @brief Method MeasureTextSize, addr 0x4a98708, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 MeasureTextSize(::StringW textToMeasure, float_t width, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  static inline ::UnityEngine::UIElements::TextElement* New_ctor();

  /// @brief Method OnGenerateVisualContent, addr 0x4a96ff8, size 0x23c, virtual false, abstract: false, final false
  inline void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method OnGeometryChanged, addr 0x4a96cfc, size 0x4, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method Paste, addr 0x4a9913c, size 0x48, virtual false, abstract: false, final false
  inline void Paste(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method PasteActionStatus, addr 0x4a99780, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenuAction_Status PasteActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method ProcessMenuCommand, addr 0x4a98f00, size 0x1ac, virtual false, abstract: false, final false
  inline void ProcessMenuCommand(::StringW command);

  /// @brief Method ShouldElide, addr 0x4a97234, size 0x4c, virtual false, abstract: false, final false
  inline bool ShouldElide();

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.SetValueWithoutNotify, addr 0x4a98aa8, size 0x130, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_INotifyValueChanged_System_String__SetValueWithoutNotify(::StringW newValue);

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.get_value, addr 0x4a98758, size 0x54, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__get_value();

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.set_value, addr 0x4a987ac, size 0x2fc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_INotifyValueChanged_System_String__set_value(::StringW value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.CullString, addr 0x4a99f88, size 0xdc, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_UIElements_ITextEdition_CullString(::StringW s);

  /// @brief Method UnityEngine.UIElements.ITextEdition.RestoreValueAndText, addr 0x4a99c58, size 0x14, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_RestoreValueAndText();

  /// @brief Method UnityEngine.UIElements.ITextEdition.SaveValueAndText, addr 0x4a99c34, size 0x24, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_SaveValueAndText();

  /// @brief Method UnityEngine.UIElements.ITextEdition.UpdateText, addr 0x4a99cbc, size 0x2cc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_UpdateText(::StringW value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_AcceptCharacter, addr 0x4a99c6c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Func_2<char16_t, bool>* UnityEngine_UIElements_ITextEdition_get_AcceptCharacter();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_MoveFocusToCompositeRoot, addr 0x4a99cac, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action* UnityEngine_UIElements_ITextEdition_get_MoveFocusToCompositeRoot();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_UpdateScrollOffset, addr 0x4a99c7c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action_1<bool>* UnityEngine_UIElements_ITextEdition_get_UpdateScrollOffset();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_UpdateTextFromValue, addr 0x4a99c9c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action* UnityEngine_UIElements_ITextEdition_get_UpdateTextFromValue();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_UpdateValueFromText, addr 0x4a99c8c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action* UnityEngine_UIElements_ITextEdition_get_UpdateValueFromText();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_autoCorrection, addr 0x4a9a210, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_autoCorrection();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_hideMobileInput, addr 0x4a98d1c, size 0x98, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_hideMobileInput();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_isDelayed, addr 0x4a99c20, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_isDelayed();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_isPassword, addr 0x4a9a1e4, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_isPassword();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_isReadOnly, addr 0x4a98e50, size 0x2c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_isReadOnly();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_keyboardType, addr 0x4a98d0c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::TouchScreenKeyboardType UnityEngine_UIElements_ITextEdition_get_keyboardType();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_maxLength, addr 0x4a99b3c, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_ITextEdition_get_maxLength();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_multiline, addr 0x4a98c38, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_multiline();

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_AcceptCharacter, addr 0x4a99c74, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_AcceptCharacter(::System::Func_2<char16_t, bool>* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_MoveFocusToCompositeRoot, addr 0x4a99cb4, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_MoveFocusToCompositeRoot(::System::Action* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_UpdateScrollOffset, addr 0x4a99c84, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_UpdateScrollOffset(::System::Action_1<bool>* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_UpdateTextFromValue, addr 0x4a99ca4, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_UpdateTextFromValue(::System::Action* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_UpdateValueFromText, addr 0x4a99c94, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_UpdateValueFromText(::System::Action* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_autoCorrection, addr 0x4a9a218, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_autoCorrection(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_hideMobileInput, addr 0x4a98db4, size 0x9c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_hideMobileInput(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_isDelayed, addr 0x4a99c28, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_isDelayed(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_isPassword, addr 0x4a9a1ec, size 0x24, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_isPassword(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_isReadOnly, addr 0x4a98e7c, size 0x84, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_isReadOnly(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_keyboardType, addr 0x4a98d14, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_maskChar, addr 0x4a9a064, size 0xcc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_maskChar(char16_t value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_maxLength, addr 0x4a99b44, size 0xdc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_maxLength(int32_t value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_multiline, addr 0x4a98c40, size 0xcc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_multiline(bool value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.HasSelection, addr 0x4a9a730, size 0xcc, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_HasSelection();

  /// @brief Method UnityEngine.UIElements.ITextSelection.SelectAll, addr 0x4a9a5a0, size 0xc8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_SelectAll();

  /// @brief Method UnityEngine.UIElements.ITextSelection.SelectNone, addr 0x4a9a668, size 0xc8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_SelectNone();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_cursorColor, addr 0x4a9aa48, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_ITextSelection_get_cursorColor();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_cursorIndex, addr 0x4a9a268, size 0xcc, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_ITextSelection_get_cursorIndex();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_cursorPosition, addr 0x4a9a834, size 0xe4, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 UnityEngine_UIElements_ITextSelection_get_cursorPosition();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_cursorWidth, addr 0x4a9aac4, size 0x8, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_ITextSelection_get_cursorWidth();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_doubleClickSelectsWord, addr 0x4a9a7fc, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_doubleClickSelectsWord();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_isSelectable, addr 0x4a9a22c, size 0x20, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_isSelectable();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_lineHeightAtCursorPosition, addr 0x4a9a918, size 0xb4, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_ITextSelection_get_lineHeightAtCursorPosition();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_selectAllOnFocus, addr 0x4a9a80c, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_selectAllOnFocus();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_selectAllOnMouseUp, addr 0x4a9a820, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_selectAllOnMouseUp();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_selectIndex, addr 0x4a9a404, size 0xcc, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_ITextSelection_get_selectIndex();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_selectionColor, addr 0x4a9a9cc, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_ITextSelection_get_selectionColor();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_tripleClickSelectsLine, addr 0x4a9a804, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_tripleClickSelectsLine();

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_cursorColor, addr 0x4a9aa5c, size 0x68, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_cursorColor(::UnityEngine::Color value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_cursorIndex, addr 0x4a9a334, size 0xd0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_cursorIndex(int32_t value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_isSelectable, addr 0x4a9a24c, size 0x1c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_isSelectable(bool value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_selectAllOnFocus, addr 0x4a9a814, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_selectAllOnFocus(bool value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_selectAllOnMouseUp, addr 0x4a9a828, size 0xc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_selectAllOnMouseUp(bool value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_selectIndex, addr 0x4a9a4d0, size 0xd0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_selectIndex(int32_t value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_selectionColor, addr 0x4a9a9e0, size 0x68, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_selectionColor(::UnityEngine::Color value);

  /// @brief Method UpdateTooltip, addr 0x4a97280, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateTooltip();

  /// @brief Method UpdateVisibleText, addr 0x4a96d00, size 0x118, virtual false, abstract: false, final false
  inline void UpdateVisibleText();

  constexpr ::System::Func_2<char16_t, bool>* const& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField() const;

  constexpr ::System::Func_2<char16_t, bool>*& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField();

  constexpr bool const& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField();

  constexpr bool const& __cordl_internal_get__UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord_k__BackingField();

  constexpr bool const& __cordl_internal_get__UnityEngine_UIElements_ITextSelection_selectAllOnFocus_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UnityEngine_UIElements_ITextSelection_selectAllOnFocus_k__BackingField();

  constexpr bool const& __cordl_internal_get__UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp_k__BackingField();

  constexpr bool const& __cordl_internal_get__UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine_k__BackingField() const;

  constexpr bool& __cordl_internal_get__UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine_k__BackingField();

  constexpr bool const& __cordl_internal_get__isElided_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isElided_k__BackingField();

  constexpr ::UnityEngine::UIElements::UITKTextHandle* const& __cordl_internal_get__uitkTextHandle_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UITKTextHandle*& __cordl_internal_get__uitkTextHandle_k__BackingField();

  constexpr ::UnityEngine::UIElements::TextEditingManipulator* const& __cordl_internal_get_editingManipulator() const;

  constexpr ::UnityEngine::UIElements::TextEditingManipulator*& __cordl_internal_get_editingManipulator();

  constexpr ::StringW const& __cordl_internal_get_elidedText() const;

  constexpr ::StringW& __cordl_internal_get_elidedText();

  constexpr bool const& __cordl_internal_get_m_AutoCorrection() const;

  constexpr bool& __cordl_internal_get_m_AutoCorrection();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_CursorColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_CursorColor();

  constexpr float_t const& __cordl_internal_get_m_CursorWidth() const;

  constexpr float_t& __cordl_internal_get_m_CursorWidth();

  constexpr bool const& __cordl_internal_get_m_DisplayTooltipWhenElided() const;

  constexpr bool& __cordl_internal_get_m_DisplayTooltipWhenElided();

  constexpr bool const& __cordl_internal_get_m_EnableRichText() const;

  constexpr bool& __cordl_internal_get_m_EnableRichText();

  constexpr bool const& __cordl_internal_get_m_HideMobileInput() const;

  constexpr bool& __cordl_internal_get_m_HideMobileInput();

  constexpr bool const& __cordl_internal_get_m_IsPassword() const;

  constexpr bool& __cordl_internal_get_m_IsPassword();

  constexpr bool const& __cordl_internal_get_m_IsReadOnly() const;

  constexpr bool& __cordl_internal_get_m_IsReadOnly();

  constexpr bool const& __cordl_internal_get_m_IsSelectable() const;

  constexpr bool& __cordl_internal_get_m_IsSelectable();

  constexpr ::UnityEngine::TouchScreenKeyboardType const& __cordl_internal_get_m_KeyboardType() const;

  constexpr ::UnityEngine::TouchScreenKeyboardType& __cordl_internal_get_m_KeyboardType();

  constexpr char16_t const& __cordl_internal_get_m_MaskChar() const;

  constexpr char16_t& __cordl_internal_get_m_MaskChar();

  constexpr int32_t const& __cordl_internal_get_m_MaxLength() const;

  constexpr int32_t& __cordl_internal_get_m_MaxLength();

  constexpr bool const& __cordl_internal_get_m_Multiline() const;

  constexpr bool& __cordl_internal_get_m_Multiline();

  constexpr ::StringW const& __cordl_internal_get_m_OriginalText() const;

  constexpr ::StringW& __cordl_internal_get_m_OriginalText();

  constexpr bool const& __cordl_internal_get_m_ParseEscapeSequences() const;

  constexpr bool& __cordl_internal_get_m_ParseEscapeSequences();

  constexpr ::StringW const& __cordl_internal_get_m_RenderedText() const;

  constexpr ::StringW& __cordl_internal_get_m_RenderedText();

  constexpr ::UnityEngine::UIElements::TextSelectingManipulator* const& __cordl_internal_get_m_SelectingManipulator() const;

  constexpr ::UnityEngine::UIElements::TextSelectingManipulator*& __cordl_internal_get_m_SelectingManipulator();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_SelectionColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_SelectionColor();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::TouchScreenKeyboard* const& __cordl_internal_get_m_TouchScreenKeyboard() const;

  constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get_m_TouchScreenKeyboard();

  constexpr bool const& __cordl_internal_get_m_WasElided() const;

  constexpr bool& __cordl_internal_get_m_WasElided();

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField(::System::Func_2<char16_t, bool>* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextSelection_selectAllOnFocus_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp_k__BackingField(bool value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isElided_k__BackingField(bool value);

  constexpr void __cordl_internal_set__uitkTextHandle_k__BackingField(::UnityEngine::UIElements::UITKTextHandle* value);

  constexpr void __cordl_internal_set_editingManipulator(::UnityEngine::UIElements::TextEditingManipulator* value);

  constexpr void __cordl_internal_set_elidedText(::StringW value);

  constexpr void __cordl_internal_set_m_AutoCorrection(bool value);

  constexpr void __cordl_internal_set_m_CursorColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_CursorWidth(float_t value);

  constexpr void __cordl_internal_set_m_DisplayTooltipWhenElided(bool value);

  constexpr void __cordl_internal_set_m_EnableRichText(bool value);

  constexpr void __cordl_internal_set_m_HideMobileInput(bool value);

  constexpr void __cordl_internal_set_m_IsPassword(bool value);

  constexpr void __cordl_internal_set_m_IsReadOnly(bool value);

  constexpr void __cordl_internal_set_m_IsSelectable(bool value);

  constexpr void __cordl_internal_set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType value);

  constexpr void __cordl_internal_set_m_MaskChar(char16_t value);

  constexpr void __cordl_internal_set_m_MaxLength(int32_t value);

  constexpr void __cordl_internal_set_m_Multiline(bool value);

  constexpr void __cordl_internal_set_m_OriginalText(::StringW value);

  constexpr void __cordl_internal_set_m_ParseEscapeSequences(bool value);

  constexpr void __cordl_internal_set_m_RenderedText(::StringW value);

  constexpr void __cordl_internal_set_m_SelectingManipulator(::UnityEngine::UIElements::TextSelectingManipulator* value);

  constexpr void __cordl_internal_set_m_SelectionColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TouchScreenKeyboard(::UnityEngine::TouchScreenKeyboard* value);

  constexpr void __cordl_internal_set_m_WasElided(bool value);

  /// @brief Method .ctor, addr 0x4a96ad4, size 0x218, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_k_EllipsisText();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_displayTooltipWhenElided, addr 0x4a96fa4, size 0x8, virtual false, abstract: false, final false
  inline bool get_displayTooltipWhenElided();

  /// @brief Method get_edition, addr 0x4a9235c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextEdition* get_edition();

  /// @brief Method get_effectiveMaskChar, addr 0x4a9a130, size 0xb4, virtual false, abstract: false, final false
  inline char16_t get_effectiveMaskChar();

  /// @brief Method get_enableRichText, addr 0x4a96f54, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableRichText();

  /// @brief Method get_hasFocus, addr 0x4a92cb4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasFocus();

  /// @brief Method get_isElided, addr 0x4a96fe4, size 0x8, virtual false, abstract: false, final false
  inline bool get_isElided();

  /// @brief Method get_originalText, addr 0x4a9a224, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_originalText();

  /// @brief Method get_parseEscapeSequences, addr 0x4a96f7c, size 0x8, virtual false, abstract: false, final false
  inline bool get_parseEscapeSequences();

  /// @brief Method get_renderedText, addr 0x4a962d0, size 0xe4, virtual false, abstract: false, final false
  inline ::StringW get_renderedText();

  /// @brief Method get_selectingManipulator, addr 0x4a920cc, size 0x64, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextSelectingManipulator* get_selectingManipulator();

  /// @brief Method get_selection, addr 0x4a93bcc, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextSelection* get_selection();

  /// @brief Method get_text, addr 0x4a96e18, size 0x94, virtual true, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_uitkTextHandle, addr 0x4a96cec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UITKTextHandle* get_uitkTextHandle();

  /// @brief Convert to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr ::UnityEngine::UIElements::IExperimentalFeatures* i___UnityEngine__UIElements__IExperimentalFeatures() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>* i___UnityEngine__UIElements__INotifyValueChanged_1___StringW_() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITextEdition"
  constexpr ::UnityEngine::UIElements::ITextEdition* i___UnityEngine__UIElements__ITextEdition() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITextSelection"
  constexpr ::UnityEngine::UIElements::ITextSelection* i___UnityEngine__UIElements__ITextSelection() noexcept;

  static inline void setStaticF_k_EllipsisText(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_displayTooltipWhenElided, addr 0x4a96fac, size 0x38, virtual false, abstract: false, final false
  inline void set_displayTooltipWhenElided(bool value);

  /// @brief Method set_enableRichText, addr 0x4a96f5c, size 0x20, virtual false, abstract: false, final false
  inline void set_enableRichText(bool value);

  /// @brief Method set_isElided, addr 0x4a96fec, size 0xc, virtual false, abstract: false, final false
  inline void set_isElided(bool value);

  /// @brief Method set_parseEscapeSequences, addr 0x4a96f84, size 0x20, virtual false, abstract: false, final false
  inline void set_parseEscapeSequences(bool value);

  /// @brief Method set_renderedText, addr 0x4a98bd8, size 0x60, virtual false, abstract: false, final false
  inline void set_renderedText(::StringW value);

  /// @brief Method set_text, addr 0x4a96eac, size 0xa8, virtual true, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_uitkTextHandle, addr 0x4a96cf4, size 0x8, virtual false, abstract: false, final false
  inline void set_uitkTextHandle(::UnityEngine::UIElements::UITKTextHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextElement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextElement(TextElement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextElement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextElement(TextElement const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6205 };

  /// @brief Field <uitkTextHandle>k__BackingField, offset: 0x3d8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UITKTextHandle* ____uitkTextHandle_k__BackingField;

  /// @brief Field m_Text, offset: 0x3e0, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_EnableRichText, offset: 0x3e8, size: 0x1, def value: None
  bool ___m_EnableRichText;

  /// @brief Field m_ParseEscapeSequences, offset: 0x3e9, size: 0x1, def value: None
  bool ___m_ParseEscapeSequences;

  /// @brief Field m_DisplayTooltipWhenElided, offset: 0x3ea, size: 0x1, def value: None
  bool ___m_DisplayTooltipWhenElided;

  /// @brief Field <isElided>k__BackingField, offset: 0x3eb, size: 0x1, def value: None
  bool ____isElided_k__BackingField;

  /// @brief Field elidedText, offset: 0x3f0, size: 0x8, def value: None
  ::StringW ___elidedText;

  /// @brief Field m_WasElided, offset: 0x3f8, size: 0x1, def value: None
  bool ___m_WasElided;

  /// @brief Field editingManipulator, offset: 0x400, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEditingManipulator* ___editingManipulator;

  /// @brief Field m_Multiline, offset: 0x408, size: 0x1, def value: None
  bool ___m_Multiline;

  /// @brief Field m_TouchScreenKeyboard, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::TouchScreenKeyboard* ___m_TouchScreenKeyboard;

  /// @brief Field m_KeyboardType, offset: 0x418, size: 0x4, def value: None
  ::UnityEngine::TouchScreenKeyboardType ___m_KeyboardType;

  /// @brief Field m_HideMobileInput, offset: 0x41c, size: 0x1, def value: None
  bool ___m_HideMobileInput;

  /// @brief Field m_IsReadOnly, offset: 0x41d, size: 0x1, def value: None
  bool ___m_IsReadOnly;

  /// @brief Field m_MaxLength, offset: 0x420, size: 0x4, def value: None
  int32_t ___m_MaxLength;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.isDelayed>k__BackingField, offset: 0x424, size: 0x1, def value: None
  bool ____UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.AcceptCharacter>k__BackingField, offset: 0x428, size: 0x8, def value: None
  ::System::Func_2<char16_t, bool>* ____UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateScrollOffset>k__BackingField, offset: 0x430, size: 0x8, def value: None
  ::System::Action_1<bool>* ____UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateValueFromText>k__BackingField, offset: 0x438, size: 0x8, def value: None
  ::System::Action* ____UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateTextFromValue>k__BackingField, offset: 0x440, size: 0x8, def value: None
  ::System::Action* ____UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.MoveFocusToCompositeRoot>k__BackingField, offset: 0x448, size: 0x8, def value: None
  ::System::Action* ____UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField;

  /// @brief Field m_RenderedText, offset: 0x450, size: 0x8, def value: None
  ::StringW ___m_RenderedText;

  /// @brief Field m_OriginalText, offset: 0x458, size: 0x8, def value: None
  ::StringW ___m_OriginalText;

  /// @brief Field m_MaskChar, offset: 0x460, size: 0x2, def value: None
  char16_t ___m_MaskChar;

  /// @brief Field m_IsPassword, offset: 0x462, size: 0x1, def value: None
  bool ___m_IsPassword;

  /// @brief Field m_AutoCorrection, offset: 0x463, size: 0x1, def value: None
  bool ___m_AutoCorrection;

  /// @brief Field m_SelectingManipulator, offset: 0x468, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextSelectingManipulator* ___m_SelectingManipulator;

  /// @brief Field m_IsSelectable, offset: 0x470, size: 0x1, def value: None
  bool ___m_IsSelectable;

  /// @brief Field <UnityEngine.UIElements.ITextSelection.doubleClickSelectsWord>k__BackingField, offset: 0x471, size: 0x1, def value: None
  bool ____UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextSelection.tripleClickSelectsLine>k__BackingField, offset: 0x472, size: 0x1, def value: None
  bool ____UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextSelection.selectAllOnFocus>k__BackingField, offset: 0x473, size: 0x1, def value: None
  bool ____UnityEngine_UIElements_ITextSelection_selectAllOnFocus_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextSelection.selectAllOnMouseUp>k__BackingField, offset: 0x474, size: 0x1, def value: None
  bool ____UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp_k__BackingField;

  /// @brief Field m_SelectionColor, offset: 0x478, size: 0x10, def value: None
  ::UnityEngine::Color ___m_SelectionColor;

  /// @brief Field m_CursorColor, offset: 0x488, size: 0x10, def value: None
  ::UnityEngine::Color ___m_CursorColor;

  /// @brief Field m_CursorWidth, offset: 0x498, size: 0x4, def value: None
  float_t ___m_CursorWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____uitkTextHandle_k__BackingField) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_Text) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_EnableRichText) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_ParseEscapeSequences) == 0x3e9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_DisplayTooltipWhenElided) == 0x3ea, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____isElided_k__BackingField) == 0x3eb, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___elidedText) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_WasElided) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___editingManipulator) == 0x400, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_Multiline) == 0x408, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_TouchScreenKeyboard) == 0x410, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_KeyboardType) == 0x418, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_HideMobileInput) == 0x41c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_IsReadOnly) == 0x41d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_MaxLength) == 0x420, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField) == 0x424, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField) == 0x428, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField) == 0x430, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField) == 0x438, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_RenderedText) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_OriginalText) == 0x458, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_MaskChar) == 0x460, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_IsPassword) == 0x462, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_AutoCorrection) == 0x463, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_SelectingManipulator) == 0x468, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_IsSelectable) == 0x470, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord_k__BackingField) == 0x471, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine_k__BackingField) == 0x472, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextSelection_selectAllOnFocus_k__BackingField) == 0x473, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextSelection_selectAllOnMouseUp_k__BackingField) == 0x474, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_SelectionColor) == 0x478, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_CursorColor) == 0x488, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_CursorWidth) == 0x498, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextElement, 0x4a0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextElement*, "UnityEngine.UIElements", "TextElement");
NEED_NO_BOX(::UnityEngine::UIElements::TextElement_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextElement_UxmlFactory*, "UnityEngine.UIElements", "TextElement/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TextElement_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextElement_UxmlTraits*, "UnityEngine.UIElements", "TextElement/UxmlTraits");
