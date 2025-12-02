#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
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
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
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
class IExperimentalFeatures;
}
namespace UnityEngine::UIElements {
template <typename T> class INotifyValueChanged_1;
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

  /// @brief Method .ctor, addr 0x6a7da58, size 0x68, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5100 };

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
  /// @brief Field m_DisplayTooltipWhenElided, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayTooltipWhenElided,
                      put = __cordl_internal_set_m_DisplayTooltipWhenElided)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_DisplayTooltipWhenElided;

  /// @brief Field m_EmojiFallbackSupport, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmojiFallbackSupport,
                      put = __cordl_internal_set_m_EmojiFallbackSupport)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_EmojiFallbackSupport;

  /// @brief Field m_EnableRichText, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EnableRichText, put = __cordl_internal_set_m_EnableRichText)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_EnableRichText;

  /// @brief Field m_ParseEscapeSequences, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ParseEscapeSequences,
                      put = __cordl_internal_set_m_ParseEscapeSequences)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_ParseEscapeSequences;

  /// @brief Field m_SelectLineByTripleClick, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectLineByTripleClick,
                      put = __cordl_internal_set_m_SelectLineByTripleClick)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_SelectLineByTripleClick;

  /// @brief Field m_SelectWordByDoubleClick, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectWordByDoubleClick,
                      put = __cordl_internal_set_m_SelectWordByDoubleClick)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_SelectWordByDoubleClick;

  /// @brief Field m_Selectable, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Selectable, put = __cordl_internal_set_m_Selectable)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Selectable;

  /// @brief Field m_Text, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Method Init, addr 0x6a7dac0, size 0x3e0, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::TextElement_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_DisplayTooltipWhenElided() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_DisplayTooltipWhenElided();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_EmojiFallbackSupport() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_EmojiFallbackSupport();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_EnableRichText() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_EnableRichText();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ParseEscapeSequences() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ParseEscapeSequences();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_SelectLineByTripleClick() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_SelectLineByTripleClick();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_SelectWordByDoubleClick() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_SelectWordByDoubleClick();

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_Selectable() const;

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Selectable();

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Text() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr void __cordl_internal_set_m_DisplayTooltipWhenElided(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_EmojiFallbackSupport(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_EnableRichText(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_ParseEscapeSequences(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SelectLineByTripleClick(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_SelectWordByDoubleClick(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Selectable(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6a7dea0, size 0x250, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5101 };

  /// @brief Field m_Text, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_EnableRichText, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_EnableRichText;

  /// @brief Field m_EmojiFallbackSupport, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_EmojiFallbackSupport;

  /// @brief Field m_ParseEscapeSequences, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_ParseEscapeSequences;

  /// @brief Field m_Selectable, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Selectable;

  /// @brief Field m_SelectWordByDoubleClick, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_SelectWordByDoubleClick;

  /// @brief Field m_SelectLineByTripleClick, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_SelectLineByTripleClick;

  /// @brief Field m_DisplayTooltipWhenElided, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_DisplayTooltipWhenElided;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_Text) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_EnableRichText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_EmojiFallbackSupport) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_ParseEscapeSequences) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_Selectable) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_SelectWordByDoubleClick) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_SelectLineByTripleClick) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement_UxmlTraits, ___m_DisplayTooltipWhenElided) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextElement_UxmlTraits, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Color, UnityEngine.TouchScreenKeyboardType, UnityEngine.UIElements.BindableElement, UnityEngine.UIElements.BindingId
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TextElement
class CORDL_TYPE TextElement : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlFactory = ::UnityEngine::UIElements::TextElement_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::TextElement_UxmlTraits;

  __declspec(property(get = get_OnPlaceholderChanged, put = set_OnPlaceholderChanged)) ::System::Action* OnPlaceholderChanged;

  __declspec(property(get = UnityEngine_UIElements_INotifyValueChanged_System_String__get_value,
                      put = UnityEngine_UIElements_INotifyValueChanged_System_String__set_value)) ::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__value;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_AcceptCharacter,
                      put = UnityEngine_UIElements_ITextEdition_set_AcceptCharacter)) ::System::Func_2<char16_t, bool>* UnityEngine_UIElements_ITextEdition_AcceptCharacter;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_GetDefaultValueType,
                      put = UnityEngine_UIElements_ITextEdition_set_GetDefaultValueType)) ::System::Func_1<::StringW>* UnityEngine_UIElements_ITextEdition_GetDefaultValueType;

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

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_hidePlaceholderOnFocus,
                      put = UnityEngine_UIElements_ITextEdition_set_hidePlaceholderOnFocus)) bool UnityEngine_UIElements_ITextEdition_hidePlaceholderOnFocus;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_isDelayed, put = UnityEngine_UIElements_ITextEdition_set_isDelayed)) bool UnityEngine_UIElements_ITextEdition_isDelayed;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_isPassword, put = UnityEngine_UIElements_ITextEdition_set_isPassword)) bool UnityEngine_UIElements_ITextEdition_isPassword;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_isReadOnly, put = UnityEngine_UIElements_ITextEdition_set_isReadOnly)) bool UnityEngine_UIElements_ITextEdition_isReadOnly;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_keyboardType,
                      put = UnityEngine_UIElements_ITextEdition_set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType UnityEngine_UIElements_ITextEdition_keyboardType;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_maskChar, put = UnityEngine_UIElements_ITextEdition_set_maskChar)) char16_t UnityEngine_UIElements_ITextEdition_maskChar;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_maxLength, put = UnityEngine_UIElements_ITextEdition_set_maxLength)) int32_t UnityEngine_UIElements_ITextEdition_maxLength;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_multiline, put = UnityEngine_UIElements_ITextEdition_set_multiline)) bool UnityEngine_UIElements_ITextEdition_multiline;

  __declspec(property(get = UnityEngine_UIElements_ITextEdition_get_placeholder, put = UnityEngine_UIElements_ITextEdition_set_placeholder)) ::StringW UnityEngine_UIElements_ITextEdition_placeholder;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_cursorColor,
                      put = UnityEngine_UIElements_ITextSelection_set_cursorColor)) ::UnityEngine::Color UnityEngine_UIElements_ITextSelection_cursorColor;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_cursorIndex,
                      put = UnityEngine_UIElements_ITextSelection_set_cursorIndex)) int32_t UnityEngine_UIElements_ITextSelection_cursorIndex;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_cursorPosition)) ::UnityEngine::Vector2 UnityEngine_UIElements_ITextSelection_cursorPosition;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_cursorWidth)) float_t UnityEngine_UIElements_ITextSelection_cursorWidth;

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_doubleClickSelectsWord,
                      put = UnityEngine_UIElements_ITextSelection_set_doubleClickSelectsWord)) bool UnityEngine_UIElements_ITextSelection_doubleClickSelectsWord;

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

  __declspec(property(get = UnityEngine_UIElements_ITextSelection_get_tripleClickSelectsLine,
                      put = UnityEngine_UIElements_ITextSelection_set_tripleClickSelectsLine)) bool UnityEngine_UIElements_ITextSelection_tripleClickSelectsLine;

  /// @brief Field <OnPlaceholderChanged>k__BackingField, offset 0x548, size 0x8
  __declspec(property(get = __cordl_internal_get__OnPlaceholderChanged_k__BackingField,
                      put = __cordl_internal_set__OnPlaceholderChanged_k__BackingField)) ::System::Action* _OnPlaceholderChanged_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.AcceptCharacter>k__BackingField, offset 0x520, size 0x8
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField)) ::System::Func_2<char16_t, bool>*
      _UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.GetDefaultValueType>k__BackingField, offset 0x550, size 0x8
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_GetDefaultValueType_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_GetDefaultValueType_k__BackingField)) ::System::Func_1<::StringW>*
      _UnityEngine_UIElements_ITextEdition_GetDefaultValueType_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.MoveFocusToCompositeRoot>k__BackingField, offset 0x540, size 0x8
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField)) ::System::Action*
      _UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateScrollOffset>k__BackingField, offset 0x528, size 0x8
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField)) ::System::Action_1<bool>*
      _UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateTextFromValue>k__BackingField, offset 0x538, size 0x8
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField)) ::System::Action* _UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateValueFromText>k__BackingField, offset 0x530, size 0x8
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField)) ::System::Action* _UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.isDelayed>k__BackingField, offset 0x518, size 0x1
  __declspec(property(get = __cordl_internal_get__UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField,
                      put = __cordl_internal_set__UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField)) bool _UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField;

  /// @brief Field <editingManipulator>k__BackingField, offset 0x4e0, size 0x8
  __declspec(property(get = __cordl_internal_get__editingManipulator_k__BackingField,
                      put = __cordl_internal_set__editingManipulator_k__BackingField)) ::UnityEngine::UIElements::TextEditingManipulator* _editingManipulator_k__BackingField;

  /// @brief Field <isElided>k__BackingField, offset 0x4cc, size 0x1
  __declspec(property(get = __cordl_internal_get__isElided_k__BackingField, put = __cordl_internal_set__isElided_k__BackingField)) bool _isElided_k__BackingField;

  /// @brief Field <uitkTextHandle>k__BackingField, offset 0x4b8, size 0x8
  __declspec(property(get = __cordl_internal_get__uitkTextHandle_k__BackingField,
                      put = __cordl_internal_set__uitkTextHandle_k__BackingField)) ::UnityEngine::UIElements::UITKTextHandle* _uitkTextHandle_k__BackingField;

  __declspec(property(get = get_autoCorrection, put = set_autoCorrection)) bool autoCorrection;

  /// @brief Field autoCorrectionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_autoCorrectionProperty, put = setStaticF_autoCorrectionProperty)) ::UnityEngine::UIElements::BindingId autoCorrectionProperty;

  __declspec(property(get = get_cursorColor, put = set_cursorColor)) ::UnityEngine::Color cursorColor;

  /// @brief Field cursorColorProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_cursorColorProperty, put = setStaticF_cursorColorProperty)) ::UnityEngine::UIElements::BindingId cursorColorProperty;

  __declspec(property(get = get_cursorIndex, put = set_cursorIndex)) int32_t cursorIndex;

  /// @brief Field cursorIndexProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_cursorIndexProperty, put = setStaticF_cursorIndexProperty)) ::UnityEngine::UIElements::BindingId cursorIndexProperty;

  __declspec(property(get = get_cursorPosition)) ::UnityEngine::Vector2 cursorPosition;

  /// @brief Field cursorPositionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_cursorPositionProperty, put = setStaticF_cursorPositionProperty)) ::UnityEngine::UIElements::BindingId cursorPositionProperty;

  __declspec(property(get = get_displayTooltipWhenElided, put = set_displayTooltipWhenElided)) bool displayTooltipWhenElided;

  /// @brief Field displayTooltipWhenElidedProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_displayTooltipWhenElidedProperty, put = setStaticF_displayTooltipWhenElidedProperty)) ::UnityEngine::UIElements::BindingId displayTooltipWhenElidedProperty;

  __declspec(property(get = get_doubleClickSelectsWord, put = set_doubleClickSelectsWord)) bool doubleClickSelectsWord;

  /// @brief Field doubleClickSelectsWordProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_doubleClickSelectsWordProperty, put = setStaticF_doubleClickSelectsWordProperty)) ::UnityEngine::UIElements::BindingId doubleClickSelectsWordProperty;

  __declspec(property(get = get_editingManipulator, put = set_editingManipulator)) ::UnityEngine::UIElements::TextEditingManipulator* editingManipulator;

  __declspec(property(get = get_edition)) ::UnityEngine::UIElements::ITextEdition* edition;

  __declspec(property(get = get_effectiveMaskChar)) char16_t effectiveMaskChar;

  /// @brief Field elidedText, offset 0x4d0, size 0x8
  __declspec(property(get = __cordl_internal_get_elidedText, put = __cordl_internal_set_elidedText)) ::StringW elidedText;

  __declspec(property(get = get_emojiFallbackSupport, put = set_emojiFallbackSupport)) bool emojiFallbackSupport;

  /// @brief Field emojiFallbackSupportProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_emojiFallbackSupportProperty, put = setStaticF_emojiFallbackSupportProperty)) ::UnityEngine::UIElements::BindingId emojiFallbackSupportProperty;

  __declspec(property(get = get_enableRichText, put = set_enableRichText)) bool enableRichText;

  /// @brief Field enableRichTextProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_enableRichTextProperty, put = setStaticF_enableRichTextProperty)) ::UnityEngine::UIElements::BindingId enableRichTextProperty;

  __declspec(property(get = get_hasFocus)) bool hasFocus;

  __declspec(property(get = get_hideMobileInput, put = set_hideMobileInput)) bool hideMobileInput;

  /// @brief Field hideMobileInputProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_hideMobileInputProperty, put = setStaticF_hideMobileInputProperty)) ::UnityEngine::UIElements::BindingId hideMobileInputProperty;

  __declspec(property(get = get_isElided, put = set_isElided)) bool isElided;

  /// @brief Field isElidedProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_isElidedProperty, put = setStaticF_isElidedProperty)) ::UnityEngine::UIElements::BindingId isElidedProperty;

  /// @brief Field isInputField, offset 0x4e8, size 0x1
  __declspec(property(get = __cordl_internal_get_isInputField, put = __cordl_internal_set_isInputField)) bool isInputField;

  __declspec(property(get = get_isPassword, put = set_isPassword)) bool isPassword;

  /// @brief Field isPasswordProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_isPasswordProperty, put = setStaticF_isPasswordProperty)) ::UnityEngine::UIElements::BindingId isPasswordProperty;

  __declspec(property(get = get_isReadOnly, put = set_isReadOnly)) bool isReadOnly;

  /// @brief Field isReadOnlyProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_isReadOnlyProperty, put = setStaticF_isReadOnlyProperty)) ::UnityEngine::UIElements::BindingId isReadOnlyProperty;

  __declspec(property(get = get_isSelectable, put = set_isSelectable)) bool isSelectable;

  /// @brief Field isSelectableProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_isSelectableProperty, put = setStaticF_isSelectableProperty)) ::UnityEngine::UIElements::BindingId isSelectableProperty;

  /// @brief Field k_EllipsisText, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_EllipsisText, put = setStaticF_k_EllipsisText)) ::StringW k_EllipsisText;

  __declspec(property(get = get_keyboardType, put = set_keyboardType)) ::UnityEngine::TouchScreenKeyboardType keyboardType;

  /// @brief Field keyboardTypeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_keyboardTypeProperty, put = setStaticF_keyboardTypeProperty)) ::UnityEngine::UIElements::BindingId keyboardTypeProperty;

  /// @brief Field m_AutoCorrection, offset 0x56c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AutoCorrection, put = __cordl_internal_set_m_AutoCorrection)) bool m_AutoCorrection;

  /// @brief Field m_CursorColor, offset 0x590, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CursorColor, put = __cordl_internal_set_m_CursorColor)) ::UnityEngine::Color m_CursorColor;

  /// @brief Field m_CursorWidth, offset 0x5a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CursorWidth, put = __cordl_internal_set_m_CursorWidth)) float_t m_CursorWidth;

  /// @brief Field m_DisplayTooltipWhenElided, offset 0x4cb, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DisplayTooltipWhenElided, put = __cordl_internal_set_m_DisplayTooltipWhenElided)) bool m_DisplayTooltipWhenElided;

  /// @brief Field m_DoubleClickSelectsWord, offset 0x579, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DoubleClickSelectsWord, put = __cordl_internal_set_m_DoubleClickSelectsWord)) bool m_DoubleClickSelectsWord;

  /// @brief Field m_EmojiFallbackSupport, offset 0x4c9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EmojiFallbackSupport, put = __cordl_internal_set_m_EmojiFallbackSupport)) bool m_EmojiFallbackSupport;

  /// @brief Field m_EnableRichText, offset 0x4c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRichText, put = __cordl_internal_set_m_EnableRichText)) bool m_EnableRichText;

  /// @brief Field m_HideMobileInput, offset 0x504, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HideMobileInput, put = __cordl_internal_set_m_HideMobileInput)) bool m_HideMobileInput;

  /// @brief Field m_HidePlaceholderTextOnFocus, offset 0x56b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HidePlaceholderTextOnFocus, put = __cordl_internal_set_m_HidePlaceholderTextOnFocus)) bool m_HidePlaceholderTextOnFocus;

  /// @brief Field m_IsPassword, offset 0x56a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsPassword, put = __cordl_internal_set_m_IsPassword)) bool m_IsPassword;

  /// @brief Field m_IsReadOnly, offset 0x505, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly)) bool m_IsReadOnly;

  /// @brief Field m_IsSelectable, offset 0x578, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsSelectable, put = __cordl_internal_set_m_IsSelectable)) bool m_IsSelectable;

  /// @brief Field m_KeyboardType, offset 0x500, size 0x4
  __declspec(property(get = __cordl_internal_get_m_KeyboardType, put = __cordl_internal_set_m_KeyboardType)) ::UnityEngine::TouchScreenKeyboardType m_KeyboardType;

  /// @brief Field m_MaskChar, offset 0x568, size 0x2
  __declspec(property(get = __cordl_internal_get_m_MaskChar, put = __cordl_internal_set_m_MaskChar)) char16_t m_MaskChar;

  /// @brief Field m_MaxLength, offset 0x508, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxLength, put = __cordl_internal_set_m_MaxLength)) int32_t m_MaxLength;

  /// @brief Field m_Multiline, offset 0x4e9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Multiline, put = __cordl_internal_set_m_Multiline)) bool m_Multiline;

  /// @brief Field m_OriginalText, offset 0x560, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalText, put = __cordl_internal_set_m_OriginalText)) ::StringW m_OriginalText;

  /// @brief Field m_ParseEscapeSequences, offset 0x4ca, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ParseEscapeSequences, put = __cordl_internal_set_m_ParseEscapeSequences)) bool m_ParseEscapeSequences;

  /// @brief Field m_PlaceholderText, offset 0x510, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PlaceholderText, put = __cordl_internal_set_m_PlaceholderText)) ::StringW m_PlaceholderText;

  /// @brief Field m_RenderedText, offset 0x558, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderedText, put = __cordl_internal_set_m_RenderedText)) ::StringW m_RenderedText;

  /// @brief Field m_SelectAllOnFocus, offset 0x57b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SelectAllOnFocus, put = __cordl_internal_set_m_SelectAllOnFocus)) bool m_SelectAllOnFocus;

  /// @brief Field m_SelectAllOnMouseUp, offset 0x57c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SelectAllOnMouseUp, put = __cordl_internal_set_m_SelectAllOnMouseUp)) bool m_SelectAllOnMouseUp;

  /// @brief Field m_SelectingManipulator, offset 0x570, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SelectingManipulator,
                      put = __cordl_internal_set_m_SelectingManipulator)) ::UnityEngine::UIElements::TextSelectingManipulator* m_SelectingManipulator;

  /// @brief Field m_SelectionColor, offset 0x580, size 0x10
  __declspec(property(get = __cordl_internal_get_m_SelectionColor, put = __cordl_internal_set_m_SelectionColor)) ::UnityEngine::Color m_SelectionColor;

  /// @brief Field m_Text, offset 0x4c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text)) ::StringW m_Text;

  /// @brief Field m_TouchScreenKeyboard, offset 0x4f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TouchScreenKeyboard, put = __cordl_internal_set_m_TouchScreenKeyboard)) ::UnityEngine::TouchScreenKeyboard* m_TouchScreenKeyboard;

  /// @brief Field m_TripleClickSelectsLine, offset 0x57a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TripleClickSelectsLine, put = __cordl_internal_set_m_TripleClickSelectsLine)) bool m_TripleClickSelectsLine;

  /// @brief Field m_WasElided, offset 0x4d8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_WasElided, put = __cordl_internal_set_m_WasElided)) bool m_WasElided;

  __declspec(property(get = get_maskChar, put = set_maskChar)) char16_t maskChar;

  /// @brief Field maskCharProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_maskCharProperty, put = setStaticF_maskCharProperty)) ::UnityEngine::UIElements::BindingId maskCharProperty;

  __declspec(property(get = get_maxLength, put = set_maxLength)) int32_t maxLength;

  /// @brief Field maxLengthProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_maxLengthProperty, put = setStaticF_maxLengthProperty)) ::UnityEngine::UIElements::BindingId maxLengthProperty;

  /// @brief Field onIsReadOnlyChanged, offset 0x4f8, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsReadOnlyChanged, put = __cordl_internal_set_onIsReadOnlyChanged)) ::System::Action_1<bool>* onIsReadOnlyChanged;

  __declspec(property(get = get_originalText)) ::StringW originalText;

  __declspec(property(get = get_parseEscapeSequences, put = set_parseEscapeSequences)) bool parseEscapeSequences;

  /// @brief Field parseEscapeSequencesProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_parseEscapeSequencesProperty, put = setStaticF_parseEscapeSequencesProperty)) ::UnityEngine::UIElements::BindingId parseEscapeSequencesProperty;

  __declspec(property(get = get_renderedText)) ::UnityEngine::TextCore::Text::RenderedText renderedText;

  __declspec(property(get = get_selectAllOnFocus, put = set_selectAllOnFocus)) bool selectAllOnFocus;

  /// @brief Field selectAllOnFocusProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectAllOnFocusProperty, put = setStaticF_selectAllOnFocusProperty)) ::UnityEngine::UIElements::BindingId selectAllOnFocusProperty;

  __declspec(property(get = get_selectAllOnMouseUp, put = set_selectAllOnMouseUp)) bool selectAllOnMouseUp;

  /// @brief Field selectAllOnMouseUpProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectAllOnMouseUpProperty, put = setStaticF_selectAllOnMouseUpProperty)) ::UnityEngine::UIElements::BindingId selectAllOnMouseUpProperty;

  __declspec(property(get = get_selectIndex, put = set_selectIndex)) int32_t selectIndex;

  /// @brief Field selectIndexProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectIndexProperty, put = setStaticF_selectIndexProperty)) ::UnityEngine::UIElements::BindingId selectIndexProperty;

  /// @brief Field selectableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_selectableUssClassName, put = setStaticF_selectableUssClassName)) ::StringW selectableUssClassName;

  __declspec(property(get = get_selectingManipulator)) ::UnityEngine::UIElements::TextSelectingManipulator* selectingManipulator;

  __declspec(property(get = get_selection)) ::UnityEngine::UIElements::ITextSelection* selection;

  __declspec(property(get = get_selectionColor, put = set_selectionColor)) ::UnityEngine::Color selectionColor;

  /// @brief Field selectionColorProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectionColorProperty, put = setStaticF_selectionColorProperty)) ::UnityEngine::UIElements::BindingId selectionColorProperty;

  /// @brief Field selectionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_selectionProperty, put = setStaticF_selectionProperty)) ::UnityEngine::UIElements::BindingId selectionProperty;

  __declspec(property(get = get_showPlaceholderText)) bool showPlaceholderText;

  __declspec(property(get = get_text, put = set_text)) ::StringW text;

  /// @brief Field textProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_textProperty, put = setStaticF_textProperty)) ::UnityEngine::UIElements::BindingId textProperty;

  __declspec(property(get = get_tripleClickSelectsLine, put = set_tripleClickSelectsLine)) bool tripleClickSelectsLine;

  /// @brief Field tripleClickSelectsLineProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_tripleClickSelectsLineProperty, put = setStaticF_tripleClickSelectsLineProperty)) ::UnityEngine::UIElements::BindingId tripleClickSelectsLineProperty;

  __declspec(property(get = get_uitkTextHandle, put = set_uitkTextHandle)) ::UnityEngine::UIElements::UITKTextHandle* uitkTextHandle;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) ::StringW value;

  /// @brief Field valueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_valueProperty, put = setStaticF_valueProperty)) ::UnityEngine::UIElements::BindingId valueProperty;

  /// @brief Convert operator to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr operator ::UnityEngine::UIElements::IExperimentalFeatures*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextEdition"
  constexpr operator ::UnityEngine::UIElements::ITextEdition*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextSelection"
  constexpr operator ::UnityEngine::UIElements::ITextSelection*() noexcept;

  /// @brief Method BuildContextualMenu, addr 0x6a79078, size 0x3a0, virtual false, abstract: false, final false
  inline void BuildContextualMenu(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt);

  /// @brief Method Copy, addr 0x6a78fe0, size 0x4c, virtual false, abstract: false, final false
  inline void Copy(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method CopyActionStatus, addr 0x6a7954c, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenuAction_Status CopyActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method Cut, addr 0x6a78f94, size 0x4c, virtual false, abstract: false, final false
  inline void Cut(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method CutActionStatus, addr 0x6a79418, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenuAction_Status CutActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method DoMeasure, addr 0x6a77fb4, size 0x64, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  /// @brief Method DrawCaret, addr 0x6a76b54, size 0x3cc, virtual false, abstract: false, final false
  inline void DrawCaret(Il2CppObject* mgc);

  /// @brief Method DrawHighlighting, addr 0x6a76f20, size 0xa84, virtual false, abstract: false, final false
  inline void DrawHighlighting(Il2CppObject* mgc);

  /// @brief Method DrawNativeHighlighting, addr 0x6a766f8, size 0x45c, virtual false, abstract: false, final false
  inline void DrawNativeHighlighting(Il2CppObject* mgc);

  /// @brief Method ElideText, addr 0x6a77a50, size 0x510, virtual false, abstract: false, final false
  inline ::StringW ElideText(::StringW drawText, ::StringW ellipsisText, float_t width, ::UnityEngine::UIElements::TextOverflowPosition textOverflowPosition);

  /// @brief Method GetDefaultValueType, addr 0x6a75e20, size 0x44, virtual false, abstract: false, final false
  inline ::StringW GetDefaultValueType();

  /// @brief Method GetLastCharacterAt, addr 0x6a7c674, size 0x140, virtual false, abstract: false, final false
  inline int32_t GetLastCharacterAt(int32_t lineIndex);

  /// @brief Method HandleEventBubbleUp, addr 0x6a796c8, size 0x358, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method MeasureTextSize, addr 0x6a77f60, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 MeasureTextSize(::StringW textToMeasure, float_t width, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t height,
                                                ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode);

  static inline ::UnityEngine::UIElements::TextElement* New_ctor();

  /// @brief Method OnDetachFromPanel, addr 0x6a75f94, size 0x30, virtual false, abstract: false, final false
  inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* detachEvent);

  /// @brief Method OnGenerateTextOver, addr 0x6a74864, size 0x218, virtual false, abstract: false, final false
  inline void OnGenerateTextOver(Il2CppObject* mgc);

  /// @brief Method OnGenerateVisualContent, addr 0x6a7640c, size 0x2ec, virtual false, abstract: false, final false
  inline void OnGenerateVisualContent(Il2CppObject* mgc);

  /// @brief Method OnGeometryChanged, addr 0x6a75e74, size 0x4, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method Paste, addr 0x6a7902c, size 0x4c, virtual false, abstract: false, final false
  inline void Paste(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method PasteActionStatus, addr 0x6a79680, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenuAction_Status PasteActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method ProcessMenuCommand, addr 0x6a78e20, size 0x174, virtual false, abstract: false, final false
  inline void ProcessMenuCommand(::StringW command);

  /// @brief Method SetRenderedText, addr 0x6a78630, size 0x8, virtual false, abstract: false, final false
  inline void SetRenderedText(::StringW value);

  /// @brief Method ShouldElide, addr 0x6a779a4, size 0x40, virtual false, abstract: false, final false
  inline bool ShouldElide();

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.SetValueWithoutNotify, addr 0x6a78488, size 0x1a8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_INotifyValueChanged_System_String__SetValueWithoutNotify(::StringW newValue);

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.get_value, addr 0x6a78018, size 0x20, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_UIElements_INotifyValueChanged_System_String__get_value();

  /// @brief Method UnityEngine.UIElements.INotifyValueChanged<System.String>.set_value, addr 0x6a78038, size 0x30c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_INotifyValueChanged_System_String__set_value(::StringW value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.CullString, addr 0x6a7a18c, size 0xec, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_UIElements_ITextEdition_CullString(::StringW s);

  /// @brief Method UnityEngine.UIElements.ITextEdition.RestoreValueAndText, addr 0x6a79e9c, size 0x14, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_RestoreValueAndText();

  /// @brief Method UnityEngine.UIElements.ITextEdition.SaveValueAndText, addr 0x6a79e78, size 0x24, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_SaveValueAndText();

  /// @brief Method UnityEngine.UIElements.ITextEdition.UpdateText, addr 0x6a79f20, size 0x26c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_UpdateText(::StringW value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_AcceptCharacter, addr 0x6a79eb0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Func_2<char16_t, bool>* UnityEngine_UIElements_ITextEdition_get_AcceptCharacter();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_GetDefaultValueType, addr 0x6a79f10, size 0x8, virtual true, abstract: false, final true
  inline ::System::Func_1<::StringW>* UnityEngine_UIElements_ITextEdition_get_GetDefaultValueType();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_MoveFocusToCompositeRoot, addr 0x6a79ef0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action* UnityEngine_UIElements_ITextEdition_get_MoveFocusToCompositeRoot();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_UpdateScrollOffset, addr 0x6a79ec0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action_1<bool>* UnityEngine_UIElements_ITextEdition_get_UpdateScrollOffset();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_UpdateTextFromValue, addr 0x6a79ee0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action* UnityEngine_UIElements_ITextEdition_get_UpdateTextFromValue();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_UpdateValueFromText, addr 0x6a79ed0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Action* UnityEngine_UIElements_ITextEdition_get_UpdateValueFromText();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_autoCorrection, addr 0x6a7a7e0, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_autoCorrection();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_hideMobileInput, addr 0x6a7891c, size 0x68, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_hideMobileInput();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_hidePlaceholderOnFocus, addr 0x6a7a7d0, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_hidePlaceholderOnFocus();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_isDelayed, addr 0x6a79e68, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_isDelayed();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_isPassword, addr 0x6a7a5bc, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_isPassword();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_isReadOnly, addr 0x6a78b98, size 0x1c, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_isReadOnly();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_keyboardType, addr 0x6a78728, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::TouchScreenKeyboardType UnityEngine_UIElements_ITextEdition_get_keyboardType();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_maskChar, addr 0x6a7a278, size 0x8, virtual true, abstract: false, final true
  inline char16_t UnityEngine_UIElements_ITextEdition_get_maskChar();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_maxLength, addr 0x6a79a20, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_ITextEdition_get_maxLength();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_multiline, addr 0x6a78648, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextEdition_get_multiline();

  /// @brief Method UnityEngine.UIElements.ITextEdition.get_placeholder, addr 0x6a79cbc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_UIElements_ITextEdition_get_placeholder();

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_AcceptCharacter, addr 0x6a79eb8, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_AcceptCharacter(::System::Func_2<char16_t, bool>* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_GetDefaultValueType, addr 0x6a79f18, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_GetDefaultValueType(::System::Func_1<::StringW>* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_MoveFocusToCompositeRoot, addr 0x6a79ef8, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_MoveFocusToCompositeRoot(::System::Action* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_UpdateScrollOffset, addr 0x6a79ec8, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_UpdateScrollOffset(::System::Action_1<bool>* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_UpdateTextFromValue, addr 0x6a79ee8, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_UpdateTextFromValue(::System::Action* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_UpdateValueFromText, addr 0x6a79ed8, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_UpdateValueFromText(::System::Action* value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_autoCorrection, addr 0x6a7a7e8, size 0x94, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_autoCorrection(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_hideMobileInput, addr 0x6a78984, size 0xbc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_hideMobileInput(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_hidePlaceholderOnFocus, addr 0x6a7a7d8, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_hidePlaceholderOnFocus(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_isDelayed, addr 0x6a79e70, size 0x8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_isDelayed(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_isPassword, addr 0x6a7a5c4, size 0xb4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_isPassword(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_isReadOnly, addr 0x6a78bb4, size 0x114, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_isReadOnly(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_keyboardType, addr 0x6a78730, size 0x94, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_maskChar, addr 0x6a7a280, size 0x12c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_maskChar(char16_t value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_maxLength, addr 0x6a79a28, size 0x13c, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_maxLength(int32_t value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_multiline, addr 0x6a78650, size 0xd8, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_multiline(bool value);

  /// @brief Method UnityEngine.UIElements.ITextEdition.set_placeholder, addr 0x6a79cc4, size 0x1a4, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextEdition_set_placeholder(::StringW value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.HasSelection, addr 0x6a7b608, size 0xe0, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_HasSelection();

  /// @brief Method UnityEngine.UIElements.ITextSelection.SelectAll, addr 0x6a7b470, size 0xcc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_SelectAll();

  /// @brief Method UnityEngine.UIElements.ITextSelection.SelectNone, addr 0x6a7b53c, size 0xcc, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_SelectNone();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_cursorColor, addr 0x6a7c3c8, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_ITextSelection_get_cursorColor();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_cursorIndex, addr 0x6a7ac20, size 0xd0, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_ITextSelection_get_cursorIndex();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_cursorPosition, addr 0x6a7beb8, size 0xfc, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 UnityEngine_UIElements_ITextSelection_get_cursorPosition();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_cursorWidth, addr 0x6a7c66c, size 0x8, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_ITextSelection_get_cursorWidth();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_doubleClickSelectsWord, addr 0x6a7b6e8, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_doubleClickSelectsWord();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_isSelectable, addr 0x6a7a9dc, size 0x20, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_isSelectable();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_lineHeightAtCursorPosition, addr 0x6a7c058, size 0xcc, virtual true, abstract: false, final true
  inline float_t UnityEngine_UIElements_ITextSelection_get_lineHeightAtCursorPosition();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_selectAllOnFocus, addr 0x6a7bad0, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_selectAllOnFocus();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_selectAllOnMouseUp, addr 0x6a7bcc4, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_selectAllOnMouseUp();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_selectIndex, addr 0x6a7b048, size 0xd0, virtual true, abstract: false, final true
  inline int32_t UnityEngine_UIElements_ITextSelection_get_selectIndex();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_selectionColor, addr 0x6a7c124, size 0x14, virtual true, abstract: false, final true
  inline ::UnityEngine::Color UnityEngine_UIElements_ITextSelection_get_selectionColor();

  /// @brief Method UnityEngine.UIElements.ITextSelection.get_tripleClickSelectsLine, addr 0x6a7b8dc, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextSelection_get_tripleClickSelectsLine();

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_cursorColor, addr 0x6a7c3dc, size 0x118, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_cursorColor(::UnityEngine::Color value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_cursorIndex, addr 0x6a7acf0, size 0x200, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_cursorIndex(int32_t value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_doubleClickSelectsWord, addr 0x6a7b6f0, size 0x94, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_doubleClickSelectsWord(bool value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_isSelectable, addr 0x6a7a9fc, size 0xd0, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_isSelectable(bool value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_selectAllOnFocus, addr 0x6a7bad8, size 0x94, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_selectAllOnFocus(bool value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_selectAllOnMouseUp, addr 0x6a7bccc, size 0x94, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_selectAllOnMouseUp(bool value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_selectIndex, addr 0x6a7b118, size 0x200, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_selectIndex(int32_t value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_selectionColor, addr 0x6a7c138, size 0x118, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_selectionColor(::UnityEngine::Color value);

  /// @brief Method UnityEngine.UIElements.ITextSelection.set_tripleClickSelectsLine, addr 0x6a7b8e4, size 0x94, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextSelection_set_tripleClickSelectsLine(bool value);

  /// @brief Method UpdateTooltip, addr 0x6a779e4, size 0x6c, virtual false, abstract: false, final false
  inline void UpdateTooltip();

  /// @brief Method UpdateVisibleText, addr 0x6a75e78, size 0x11c, virtual false, abstract: false, final false
  inline void UpdateVisibleText();

  constexpr ::System::Action* const& __cordl_internal_get__OnPlaceholderChanged_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__OnPlaceholderChanged_k__BackingField();

  constexpr ::System::Func_2<char16_t, bool>* const& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField() const;

  constexpr ::System::Func_2<char16_t, bool>*& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField();

  constexpr ::System::Func_1<::StringW>* const& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_GetDefaultValueType_k__BackingField() const;

  constexpr ::System::Func_1<::StringW>*& __cordl_internal_get__UnityEngine_UIElements_ITextEdition_GetDefaultValueType_k__BackingField();

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

  constexpr ::UnityEngine::UIElements::TextEditingManipulator* const& __cordl_internal_get__editingManipulator_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::TextEditingManipulator*& __cordl_internal_get__editingManipulator_k__BackingField();

  constexpr bool const& __cordl_internal_get__isElided_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isElided_k__BackingField();

  constexpr ::UnityEngine::UIElements::UITKTextHandle* const& __cordl_internal_get__uitkTextHandle_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UITKTextHandle*& __cordl_internal_get__uitkTextHandle_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get_elidedText() const;

  constexpr ::StringW& __cordl_internal_get_elidedText();

  constexpr bool const& __cordl_internal_get_isInputField() const;

  constexpr bool& __cordl_internal_get_isInputField();

  constexpr bool const& __cordl_internal_get_m_AutoCorrection() const;

  constexpr bool& __cordl_internal_get_m_AutoCorrection();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_CursorColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_CursorColor();

  constexpr float_t const& __cordl_internal_get_m_CursorWidth() const;

  constexpr float_t& __cordl_internal_get_m_CursorWidth();

  constexpr bool const& __cordl_internal_get_m_DisplayTooltipWhenElided() const;

  constexpr bool& __cordl_internal_get_m_DisplayTooltipWhenElided();

  constexpr bool const& __cordl_internal_get_m_DoubleClickSelectsWord() const;

  constexpr bool& __cordl_internal_get_m_DoubleClickSelectsWord();

  constexpr bool const& __cordl_internal_get_m_EmojiFallbackSupport() const;

  constexpr bool& __cordl_internal_get_m_EmojiFallbackSupport();

  constexpr bool const& __cordl_internal_get_m_EnableRichText() const;

  constexpr bool& __cordl_internal_get_m_EnableRichText();

  constexpr bool const& __cordl_internal_get_m_HideMobileInput() const;

  constexpr bool& __cordl_internal_get_m_HideMobileInput();

  constexpr bool const& __cordl_internal_get_m_HidePlaceholderTextOnFocus() const;

  constexpr bool& __cordl_internal_get_m_HidePlaceholderTextOnFocus();

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

  constexpr ::StringW const& __cordl_internal_get_m_PlaceholderText() const;

  constexpr ::StringW& __cordl_internal_get_m_PlaceholderText();

  constexpr ::StringW const& __cordl_internal_get_m_RenderedText() const;

  constexpr ::StringW& __cordl_internal_get_m_RenderedText();

  constexpr bool const& __cordl_internal_get_m_SelectAllOnFocus() const;

  constexpr bool& __cordl_internal_get_m_SelectAllOnFocus();

  constexpr bool const& __cordl_internal_get_m_SelectAllOnMouseUp() const;

  constexpr bool& __cordl_internal_get_m_SelectAllOnMouseUp();

  constexpr ::UnityEngine::UIElements::TextSelectingManipulator* const& __cordl_internal_get_m_SelectingManipulator() const;

  constexpr ::UnityEngine::UIElements::TextSelectingManipulator*& __cordl_internal_get_m_SelectingManipulator();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_SelectionColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_SelectionColor();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::UnityEngine::TouchScreenKeyboard* const& __cordl_internal_get_m_TouchScreenKeyboard() const;

  constexpr ::UnityEngine::TouchScreenKeyboard*& __cordl_internal_get_m_TouchScreenKeyboard();

  constexpr bool const& __cordl_internal_get_m_TripleClickSelectsLine() const;

  constexpr bool& __cordl_internal_get_m_TripleClickSelectsLine();

  constexpr bool const& __cordl_internal_get_m_WasElided() const;

  constexpr bool& __cordl_internal_get_m_WasElided();

  constexpr ::System::Action_1<bool>* const& __cordl_internal_get_onIsReadOnlyChanged() const;

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_onIsReadOnlyChanged();

  constexpr void __cordl_internal_set__OnPlaceholderChanged_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField(::System::Func_2<char16_t, bool>* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_GetDefaultValueType_k__BackingField(::System::Func_1<::StringW>* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField(::System::Action_1<bool>* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__editingManipulator_k__BackingField(::UnityEngine::UIElements::TextEditingManipulator* value);

  constexpr void __cordl_internal_set__isElided_k__BackingField(bool value);

  constexpr void __cordl_internal_set__uitkTextHandle_k__BackingField(::UnityEngine::UIElements::UITKTextHandle* value);

  constexpr void __cordl_internal_set_elidedText(::StringW value);

  constexpr void __cordl_internal_set_isInputField(bool value);

  constexpr void __cordl_internal_set_m_AutoCorrection(bool value);

  constexpr void __cordl_internal_set_m_CursorColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_CursorWidth(float_t value);

  constexpr void __cordl_internal_set_m_DisplayTooltipWhenElided(bool value);

  constexpr void __cordl_internal_set_m_DoubleClickSelectsWord(bool value);

  constexpr void __cordl_internal_set_m_EmojiFallbackSupport(bool value);

  constexpr void __cordl_internal_set_m_EnableRichText(bool value);

  constexpr void __cordl_internal_set_m_HideMobileInput(bool value);

  constexpr void __cordl_internal_set_m_HidePlaceholderTextOnFocus(bool value);

  constexpr void __cordl_internal_set_m_IsPassword(bool value);

  constexpr void __cordl_internal_set_m_IsReadOnly(bool value);

  constexpr void __cordl_internal_set_m_IsSelectable(bool value);

  constexpr void __cordl_internal_set_m_KeyboardType(::UnityEngine::TouchScreenKeyboardType value);

  constexpr void __cordl_internal_set_m_MaskChar(char16_t value);

  constexpr void __cordl_internal_set_m_MaxLength(int32_t value);

  constexpr void __cordl_internal_set_m_Multiline(bool value);

  constexpr void __cordl_internal_set_m_OriginalText(::StringW value);

  constexpr void __cordl_internal_set_m_ParseEscapeSequences(bool value);

  constexpr void __cordl_internal_set_m_PlaceholderText(::StringW value);

  constexpr void __cordl_internal_set_m_RenderedText(::StringW value);

  constexpr void __cordl_internal_set_m_SelectAllOnFocus(bool value);

  constexpr void __cordl_internal_set_m_SelectAllOnMouseUp(bool value);

  constexpr void __cordl_internal_set_m_SelectingManipulator(::UnityEngine::UIElements::TextSelectingManipulator* value);

  constexpr void __cordl_internal_set_m_SelectionColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  constexpr void __cordl_internal_set_m_TouchScreenKeyboard(::UnityEngine::TouchScreenKeyboard* value);

  constexpr void __cordl_internal_set_m_TripleClickSelectsLine(bool value);

  constexpr void __cordl_internal_set_m_WasElided(bool value);

  constexpr void __cordl_internal_set_onIsReadOnlyChanged(::System::Action_1<bool>* value);

  /// @brief Method .ctor, addr 0x6a75a54, size 0x3cc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_autoCorrectionProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_cursorColorProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_cursorIndexProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_cursorPositionProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_displayTooltipWhenElidedProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_doubleClickSelectsWordProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_emojiFallbackSupportProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_enableRichTextProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_hideMobileInputProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_isElidedProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_isPasswordProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_isReadOnlyProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_isSelectableProperty();

  static inline ::StringW getStaticF_k_EllipsisText();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_keyboardTypeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_maskCharProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_maxLengthProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_parseEscapeSequencesProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectAllOnFocusProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectAllOnMouseUpProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectIndexProperty();

  static inline ::StringW getStaticF_selectableUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectionColorProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_selectionProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_textProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_tripleClickSelectsLineProperty();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_valueProperty();

  /// @brief Method get_OnPlaceholderChanged, addr 0x6a79f00, size 0x8, virtual false, abstract: false, final false
  inline ::System::Action* get_OnPlaceholderChanged();

  /// @brief Method get_autoCorrection, addr 0x6a7a87c, size 0xa4, virtual false, abstract: false, final false
  inline bool get_autoCorrection();

  /// @brief Method get_cursorColor, addr 0x6a7c4f4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_cursorColor();

  /// @brief Method get_cursorIndex, addr 0x6a7aef0, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_cursorIndex();

  /// @brief Method get_cursorPosition, addr 0x6a7bfb4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_cursorPosition();

  /// @brief Method get_displayTooltipWhenElided, addr 0x6a7633c, size 0x8, virtual false, abstract: false, final false
  inline bool get_displayTooltipWhenElided();

  /// @brief Method get_doubleClickSelectsWord, addr 0x6a7b784, size 0xa4, virtual false, abstract: false, final false
  inline bool get_doubleClickSelectsWord();

  /// @brief Method get_editingManipulator, addr 0x6a78638, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextEditingManipulator* get_editingManipulator();

  /// @brief Method get_edition, addr 0x6a6fca8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextEdition* get_edition();

  /// @brief Method get_effectiveMaskChar, addr 0x6a7a504, size 0xb8, virtual false, abstract: false, final false
  inline char16_t get_effectiveMaskChar();

  /// @brief Method get_emojiFallbackSupport, addr 0x6a761c4, size 0x8, virtual false, abstract: false, final false
  inline bool get_emojiFallbackSupport();

  /// @brief Method get_enableRichText, addr 0x6a76108, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableRichText();

  /// @brief Method get_hasFocus, addr 0x6a71b9c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_hasFocus();

  /// @brief Method get_hideMobileInput, addr 0x6a78a40, size 0xa4, virtual false, abstract: false, final false
  inline bool get_hideMobileInput();

  /// @brief Method get_isElided, addr 0x6a763fc, size 0x8, virtual false, abstract: false, final false
  inline bool get_isElided();

  /// @brief Method get_isPassword, addr 0x6a7a678, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isPassword();

  /// @brief Method get_isReadOnly, addr 0x6a78cc8, size 0xa4, virtual false, abstract: false, final false
  inline bool get_isReadOnly();

  /// @brief Method get_isSelectable, addr 0x6a7aacc, size 0xa0, virtual false, abstract: false, final false
  inline bool get_isSelectable();

  /// @brief Method get_keyboardType, addr 0x6a787c4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::TouchScreenKeyboardType get_keyboardType();

  /// @brief Method get_maskChar, addr 0x6a7a3ac, size 0xa4, virtual false, abstract: false, final false
  inline char16_t get_maskChar();

  /// @brief Method get_maxLength, addr 0x6a79b64, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_maxLength();

  /// @brief Method get_originalText, addr 0x6a7a9d4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_originalText();

  /// @brief Method get_parseEscapeSequences, addr 0x6a76280, size 0x8, virtual false, abstract: false, final false
  inline bool get_parseEscapeSequences();

  /// @brief Method get_renderedText, addr 0x6a6db24, size 0x190, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::RenderedText get_renderedText();

  /// @brief Method get_selectAllOnFocus, addr 0x6a7bb6c, size 0xa4, virtual false, abstract: false, final false
  inline bool get_selectAllOnFocus();

  /// @brief Method get_selectAllOnMouseUp, addr 0x6a7bd60, size 0xa4, virtual false, abstract: false, final false
  inline bool get_selectAllOnMouseUp();

  /// @brief Method get_selectIndex, addr 0x6a7b318, size 0xa4, virtual false, abstract: false, final false
  inline int32_t get_selectIndex();

  /// @brief Method get_selectingManipulator, addr 0x6a6f8d0, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextSelectingManipulator* get_selectingManipulator();

  /// @brief Method get_selection, addr 0x6a72c54, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextSelection* get_selection();

  /// @brief Method get_selectionColor, addr 0x6a7c250, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectionColor();

  /// @brief Method get_showPlaceholderText, addr 0x6a6f31c, size 0x104, virtual false, abstract: false, final false
  inline bool get_showPlaceholderText();

  /// @brief Method get_text, addr 0x6a75fc4, size 0x98, virtual true, abstract: false, final false
  inline ::StringW get_text();

  /// @brief Method get_tripleClickSelectsLine, addr 0x6a7b978, size 0xa4, virtual false, abstract: false, final false
  inline bool get_tripleClickSelectsLine();

  /// @brief Method get_uitkTextHandle, addr 0x6a75e64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UITKTextHandle* get_uitkTextHandle();

  /// @brief Method get_value, addr 0x6a78344, size 0x98, virtual false, abstract: false, final false
  inline ::StringW get_value();

  /// @brief Convert to "::UnityEngine::UIElements::IExperimentalFeatures"
  constexpr ::UnityEngine::UIElements::IExperimentalFeatures* i___UnityEngine__UIElements__IExperimentalFeatures() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<::StringW>* i___UnityEngine__UIElements__INotifyValueChanged_1___StringW_() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITextEdition"
  constexpr ::UnityEngine::UIElements::ITextEdition* i___UnityEngine__UIElements__ITextEdition() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITextSelection"
  constexpr ::UnityEngine::UIElements::ITextSelection* i___UnityEngine__UIElements__ITextSelection() noexcept;

  static inline void setStaticF_autoCorrectionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_cursorColorProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_cursorIndexProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_cursorPositionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_displayTooltipWhenElidedProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_doubleClickSelectsWordProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_emojiFallbackSupportProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_enableRichTextProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_hideMobileInputProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_isElidedProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_isPasswordProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_isReadOnlyProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_isSelectableProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_k_EllipsisText(::StringW value);

  static inline void setStaticF_keyboardTypeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_maskCharProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_maxLengthProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_parseEscapeSequencesProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_selectAllOnFocusProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_selectAllOnMouseUpProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_selectIndexProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_selectableUssClassName(::StringW value);

  static inline void setStaticF_selectionColorProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_selectionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_textProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_tripleClickSelectsLineProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_valueProperty(::UnityEngine::UIElements::BindingId value);

  /// @brief Method set_OnPlaceholderChanged, addr 0x6a79f08, size 0x8, virtual false, abstract: false, final false
  inline void set_OnPlaceholderChanged(::System::Action* value);

  /// @brief Method set_autoCorrection, addr 0x6a7a920, size 0xb4, virtual false, abstract: false, final false
  inline void set_autoCorrection(bool value);

  /// @brief Method set_cursorColor, addr 0x6a7c598, size 0xd4, virtual false, abstract: false, final false
  inline void set_cursorColor(::UnityEngine::Color value);

  /// @brief Method set_cursorIndex, addr 0x6a7af94, size 0xb4, virtual false, abstract: false, final false
  inline void set_cursorIndex(int32_t value);

  /// @brief Method set_displayTooltipWhenElided, addr 0x6a76344, size 0xb8, virtual false, abstract: false, final false
  inline void set_displayTooltipWhenElided(bool value);

  /// @brief Method set_doubleClickSelectsWord, addr 0x6a7b828, size 0xb4, virtual false, abstract: false, final false
  inline void set_doubleClickSelectsWord(bool value);

  /// @brief Method set_editingManipulator, addr 0x6a78640, size 0x8, virtual false, abstract: false, final false
  inline void set_editingManipulator(::UnityEngine::UIElements::TextEditingManipulator* value);

  /// @brief Method set_emojiFallbackSupport, addr 0x6a761cc, size 0xb4, virtual false, abstract: false, final false
  inline void set_emojiFallbackSupport(bool value);

  /// @brief Method set_enableRichText, addr 0x6a76110, size 0xb4, virtual false, abstract: false, final false
  inline void set_enableRichText(bool value);

  /// @brief Method set_hideMobileInput, addr 0x6a78ae4, size 0xb4, virtual false, abstract: false, final false
  inline void set_hideMobileInput(bool value);

  /// @brief Method set_isElided, addr 0x6a76404, size 0x8, virtual false, abstract: false, final false
  inline void set_isElided(bool value);

  /// @brief Method set_isPassword, addr 0x6a7a71c, size 0xb4, virtual false, abstract: false, final false
  inline void set_isPassword(bool value);

  /// @brief Method set_isReadOnly, addr 0x6a78d6c, size 0xb4, virtual false, abstract: false, final false
  inline void set_isReadOnly(bool value);

  /// @brief Method set_isSelectable, addr 0x6a7ab6c, size 0xb4, virtual false, abstract: false, final false
  inline void set_isSelectable(bool value);

  /// @brief Method set_keyboardType, addr 0x6a78868, size 0xb4, virtual false, abstract: false, final false
  inline void set_keyboardType(::UnityEngine::TouchScreenKeyboardType value);

  /// @brief Method set_maskChar, addr 0x6a7a450, size 0xb4, virtual false, abstract: false, final false
  inline void set_maskChar(char16_t value);

  /// @brief Method set_maxLength, addr 0x6a79c08, size 0xb4, virtual false, abstract: false, final false
  inline void set_maxLength(int32_t value);

  /// @brief Method set_parseEscapeSequences, addr 0x6a76288, size 0xb4, virtual false, abstract: false, final false
  inline void set_parseEscapeSequences(bool value);

  /// @brief Method set_selectAllOnFocus, addr 0x6a7bc10, size 0xb4, virtual false, abstract: false, final false
  inline void set_selectAllOnFocus(bool value);

  /// @brief Method set_selectAllOnMouseUp, addr 0x6a7be04, size 0xb4, virtual false, abstract: false, final false
  inline void set_selectAllOnMouseUp(bool value);

  /// @brief Method set_selectIndex, addr 0x6a7b3bc, size 0xb4, virtual false, abstract: false, final false
  inline void set_selectIndex(int32_t value);

  /// @brief Method set_selectionColor, addr 0x6a7c2f4, size 0xd4, virtual false, abstract: false, final false
  inline void set_selectionColor(::UnityEngine::Color value);

  /// @brief Method set_text, addr 0x6a7605c, size 0xac, virtual true, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_tripleClickSelectsLine, addr 0x6a7ba1c, size 0xb4, virtual false, abstract: false, final false
  inline void set_tripleClickSelectsLine(bool value);

  /// @brief Method set_uitkTextHandle, addr 0x6a75e6c, size 0x8, virtual false, abstract: false, final false
  inline void set_uitkTextHandle(::UnityEngine::UIElements::UITKTextHandle* value);

  /// @brief Method set_value, addr 0x6a783dc, size 0xac, virtual false, abstract: false, final false
  inline void set_value(::StringW value);

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

  /// @brief Field ZeroWidthSpace offset 0xffffffff size 0x8
  static constexpr ::ConstString ZeroWidthSpace{ u"\u{200b}" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5102 };

  /// @brief Field <uitkTextHandle>k__BackingField, offset: 0x4b8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UITKTextHandle* ____uitkTextHandle_k__BackingField;

  /// @brief Field m_Text, offset: 0x4c0, size: 0x8, def value: None
  ::StringW ___m_Text;

  /// @brief Field m_EnableRichText, offset: 0x4c8, size: 0x1, def value: None
  bool ___m_EnableRichText;

  /// @brief Field m_EmojiFallbackSupport, offset: 0x4c9, size: 0x1, def value: None
  bool ___m_EmojiFallbackSupport;

  /// @brief Field m_ParseEscapeSequences, offset: 0x4ca, size: 0x1, def value: None
  bool ___m_ParseEscapeSequences;

  /// @brief Field m_DisplayTooltipWhenElided, offset: 0x4cb, size: 0x1, def value: None
  bool ___m_DisplayTooltipWhenElided;

  /// @brief Field <isElided>k__BackingField, offset: 0x4cc, size: 0x1, def value: None
  bool ____isElided_k__BackingField;

  /// @brief Field elidedText, offset: 0x4d0, size: 0x8, def value: None
  ::StringW ___elidedText;

  /// @brief Field m_WasElided, offset: 0x4d8, size: 0x1, def value: None
  bool ___m_WasElided;

  /// @brief Field <editingManipulator>k__BackingField, offset: 0x4e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEditingManipulator* ____editingManipulator_k__BackingField;

  /// @brief Field isInputField, offset: 0x4e8, size: 0x1, def value: None
  bool ___isInputField;

  /// @brief Field m_Multiline, offset: 0x4e9, size: 0x1, def value: None
  bool ___m_Multiline;

  /// @brief Field m_TouchScreenKeyboard, offset: 0x4f0, size: 0x8, def value: None
  ::UnityEngine::TouchScreenKeyboard* ___m_TouchScreenKeyboard;

  /// @brief Field onIsReadOnlyChanged, offset: 0x4f8, size: 0x8, def value: None
  ::System::Action_1<bool>* ___onIsReadOnlyChanged;

  /// @brief Field m_KeyboardType, offset: 0x500, size: 0x4, def value: None
  ::UnityEngine::TouchScreenKeyboardType ___m_KeyboardType;

  /// @brief Field m_HideMobileInput, offset: 0x504, size: 0x1, def value: None
  bool ___m_HideMobileInput;

  /// @brief Field m_IsReadOnly, offset: 0x505, size: 0x1, def value: None
  bool ___m_IsReadOnly;

  /// @brief Field m_MaxLength, offset: 0x508, size: 0x4, def value: None
  int32_t ___m_MaxLength;

  /// @brief Field m_PlaceholderText, offset: 0x510, size: 0x8, def value: None
  ::StringW ___m_PlaceholderText;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.isDelayed>k__BackingField, offset: 0x518, size: 0x1, def value: None
  bool ____UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.AcceptCharacter>k__BackingField, offset: 0x520, size: 0x8, def value: None
  ::System::Func_2<char16_t, bool>* ____UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateScrollOffset>k__BackingField, offset: 0x528, size: 0x8, def value: None
  ::System::Action_1<bool>* ____UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateValueFromText>k__BackingField, offset: 0x530, size: 0x8, def value: None
  ::System::Action* ____UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.UpdateTextFromValue>k__BackingField, offset: 0x538, size: 0x8, def value: None
  ::System::Action* ____UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.MoveFocusToCompositeRoot>k__BackingField, offset: 0x540, size: 0x8, def value: None
  ::System::Action* ____UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField;

  /// @brief Field <OnPlaceholderChanged>k__BackingField, offset: 0x548, size: 0x8, def value: None
  ::System::Action* ____OnPlaceholderChanged_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.ITextEdition.GetDefaultValueType>k__BackingField, offset: 0x550, size: 0x8, def value: None
  ::System::Func_1<::StringW>* ____UnityEngine_UIElements_ITextEdition_GetDefaultValueType_k__BackingField;

  /// @brief Field m_RenderedText, offset: 0x558, size: 0x8, def value: None
  ::StringW ___m_RenderedText;

  /// @brief Field m_OriginalText, offset: 0x560, size: 0x8, def value: None
  ::StringW ___m_OriginalText;

  /// @brief Field m_MaskChar, offset: 0x568, size: 0x2, def value: None
  char16_t ___m_MaskChar;

  /// @brief Field m_IsPassword, offset: 0x56a, size: 0x1, def value: None
  bool ___m_IsPassword;

  /// @brief Field m_HidePlaceholderTextOnFocus, offset: 0x56b, size: 0x1, def value: None
  bool ___m_HidePlaceholderTextOnFocus;

  /// @brief Field m_AutoCorrection, offset: 0x56c, size: 0x1, def value: None
  bool ___m_AutoCorrection;

  /// @brief Field m_SelectingManipulator, offset: 0x570, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextSelectingManipulator* ___m_SelectingManipulator;

  /// @brief Field m_IsSelectable, offset: 0x578, size: 0x1, def value: None
  bool ___m_IsSelectable;

  /// @brief Field m_DoubleClickSelectsWord, offset: 0x579, size: 0x1, def value: None
  bool ___m_DoubleClickSelectsWord;

  /// @brief Field m_TripleClickSelectsLine, offset: 0x57a, size: 0x1, def value: None
  bool ___m_TripleClickSelectsLine;

  /// @brief Field m_SelectAllOnFocus, offset: 0x57b, size: 0x1, def value: None
  bool ___m_SelectAllOnFocus;

  /// @brief Field m_SelectAllOnMouseUp, offset: 0x57c, size: 0x1, def value: None
  bool ___m_SelectAllOnMouseUp;

  /// @brief Field m_SelectionColor, offset: 0x580, size: 0x10, def value: None
  ::UnityEngine::Color ___m_SelectionColor;

  /// @brief Field m_CursorColor, offset: 0x590, size: 0x10, def value: None
  ::UnityEngine::Color ___m_CursorColor;

  /// @brief Field m_CursorWidth, offset: 0x5a0, size: 0x4, def value: None
  float_t ___m_CursorWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____uitkTextHandle_k__BackingField) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_Text) == 0x4c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_EnableRichText) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_EmojiFallbackSupport) == 0x4c9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_ParseEscapeSequences) == 0x4ca, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_DisplayTooltipWhenElided) == 0x4cb, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____isElided_k__BackingField) == 0x4cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___elidedText) == 0x4d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_WasElided) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____editingManipulator_k__BackingField) == 0x4e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___isInputField) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_Multiline) == 0x4e9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_TouchScreenKeyboard) == 0x4f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___onIsReadOnlyChanged) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_KeyboardType) == 0x500, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_HideMobileInput) == 0x504, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_IsReadOnly) == 0x505, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_MaxLength) == 0x508, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_PlaceholderText) == 0x510, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_isDelayed_k__BackingField) == 0x518, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_AcceptCharacter_k__BackingField) == 0x520, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_UpdateScrollOffset_k__BackingField) == 0x528, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_UpdateValueFromText_k__BackingField) == 0x530, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_UpdateTextFromValue_k__BackingField) == 0x538, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_MoveFocusToCompositeRoot_k__BackingField) == 0x540, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____OnPlaceholderChanged_k__BackingField) == 0x548, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ____UnityEngine_UIElements_ITextEdition_GetDefaultValueType_k__BackingField) == 0x550, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_RenderedText) == 0x558, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_OriginalText) == 0x560, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_MaskChar) == 0x568, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_IsPassword) == 0x56a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_HidePlaceholderTextOnFocus) == 0x56b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_AutoCorrection) == 0x56c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_SelectingManipulator) == 0x570, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_IsSelectable) == 0x578, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_DoubleClickSelectsWord) == 0x579, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_TripleClickSelectsLine) == 0x57a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_SelectAllOnFocus) == 0x57b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_SelectAllOnMouseUp) == 0x57c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_SelectionColor) == 0x580, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_CursorColor) == 0x590, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextElement, ___m_CursorWidth) == 0x5a0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextElement, 0x5a8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextElement*, "UnityEngine.UIElements", "TextElement");
NEED_NO_BOX(::UnityEngine::UIElements::TextElement_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextElement_UxmlFactory*, "UnityEngine.UIElements", "TextElement/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::TextElement_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextElement_UxmlTraits*, "UnityEngine.UIElements", "TextElement/UxmlTraits");
