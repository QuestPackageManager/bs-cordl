#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlStringAttributeDescription_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextInputBaseField_1)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
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
class IEventHandler;
}
namespace UnityEngine::UIElements {
class ITextElement;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
namespace UnityEngine::UIElements {
class TextEditorEventHandler;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
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
namespace UnityEngine::UIElements {
struct __DropdownMenuAction__Status;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class __TextInputBaseField_1__TextInputBase;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class __TextInputBaseField_1__UxmlTraits;
}
namespace UnityEngine::UIElements {
struct __VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType> class TextInputBaseField_1;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class __TextInputBaseField_1__TextInputBase;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class __TextInputBaseField_1__UxmlTraits;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TextInputBaseField_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 184, native_size: 184, calculated_instance_size: 184, calculated_native_size: 184, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6243)), TypeDefinitionIndex(TypeDefinitionIndex(6390)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6390), inst: 919
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(6355)) CS Name: ::TextInputBaseField`1::UxmlTraits<TValueType>*
class CORDL_TYPE __TextInputBaseField_1__UxmlTraits : public ::UnityEngine::UIElements::BaseFieldTraits_2<::StringW, ::UnityEngine::UIElements::UxmlStringAttributeDescription*> {
public:
  // Declarations
  /// @brief Field m_MaxLength, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxLength, put = __cordl_internal_set_m_MaxLength))::UnityEngine::UIElements::UxmlIntAttributeDescription* m_MaxLength;

  /// @brief Field m_Password, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Password, put = __cordl_internal_set_m_Password))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_Password;

  /// @brief Field m_MaskCharacter, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaskCharacter, put = __cordl_internal_set_m_MaskCharacter))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_MaskCharacter;

  /// @brief Field m_Text, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Text;

  /// @brief Field m_IsReadOnly, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsReadOnly, put = __cordl_internal_set_m_IsReadOnly))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsReadOnly;

  /// @brief Field m_IsDelayed, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IsDelayed, put = __cordl_internal_set_m_IsDelayed))::UnityEngine::UIElements::UxmlBoolAttributeDescription* m_IsDelayed;

  constexpr ::UnityEngine::UIElements::UxmlIntAttributeDescription*& __cordl_internal_get_m_MaxLength();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlIntAttributeDescription*> const& __cordl_internal_get_m_MaxLength() const;

  constexpr void __cordl_internal_set_m_MaxLength(::UnityEngine::UIElements::UxmlIntAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_Password();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_Password() const;

  constexpr void __cordl_internal_set_m_Password(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_MaskCharacter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_MaskCharacter() const;

  constexpr void __cordl_internal_set_m_MaskCharacter(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Text();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_Text(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IsReadOnly();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_IsReadOnly() const;

  constexpr void __cordl_internal_set_m_IsReadOnly(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_IsDelayed();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlBoolAttributeDescription*> const& __cordl_internal_get_m_IsDelayed() const;

  constexpr void __cordl_internal_set_m_IsDelayed(::UnityEngine::UIElements::UxmlBoolAttributeDescription* value);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__TextInputBaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextInputBaseField_1__UxmlTraits(__TextInputBaseField_1__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextInputBaseField_1__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextInputBaseField_1__UxmlTraits(__TextInputBaseField_1__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextInputBaseField_1__UxmlTraits();

public:
  /// @brief Field m_MaxLength, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlIntAttributeDescription* ___m_MaxLength;

  /// @brief Field m_Password, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_Password;

  /// @brief Field m_MaskCharacter, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_MaskCharacter;

  /// @brief Field m_Text, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Text;

  /// @brief Field m_IsReadOnly, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsReadOnly;

  /// @brief Field m_IsDelayed, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlBoolAttributeDescription* ___m_IsDelayed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: ::TextInputBase
// SizeInfo { instance_size: 1040, native_size: 1040, calculated_instance_size: 1040, calculated_native_size: 1040, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6003)), TypeDefinitionIndex(TypeDefinitionIndex(8995))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6356))
// CS Name: ::TextInputBaseField`1::TextInputBase<TValueType>*
class CORDL_TYPE __TextInputBaseField_1__TextInputBase : public ::UnityEngine::UIElements::VisualElement {
public:
  // Declarations
  /// @brief Field m_OriginalText, offset 0x3b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OriginalText, put = __cordl_internal_set_m_OriginalText))::StringW m_OriginalText;

  /// @brief Field <isReadOnly>k__BackingField, offset 0x3b8, size 0x1
  __declspec(property(get = __cordl_internal_get__isReadOnly_k__BackingField, put = __cordl_internal_set__isReadOnly_k__BackingField)) bool _isReadOnly_k__BackingField;

  /// @brief Field <maxLength>k__BackingField, offset 0x3bc, size 0x4
  __declspec(property(get = __cordl_internal_get__maxLength_k__BackingField, put = __cordl_internal_set__maxLength_k__BackingField)) int32_t _maxLength_k__BackingField;

  /// @brief Field <maskChar>k__BackingField, offset 0x3c0, size 0x2
  __declspec(property(get = __cordl_internal_get__maskChar_k__BackingField, put = __cordl_internal_set__maskChar_k__BackingField)) char16_t _maskChar_k__BackingField;

  /// @brief Field <isPasswordField>k__BackingField, offset 0x3c2, size 0x1
  __declspec(property(get = __cordl_internal_get__isPasswordField_k__BackingField, put = __cordl_internal_set__isPasswordField_k__BackingField)) bool _isPasswordField_k__BackingField;

  /// @brief Field <doubleClickSelectsWord>k__BackingField, offset 0x3c3, size 0x1
  __declspec(property(get = __cordl_internal_get__doubleClickSelectsWord_k__BackingField,
                      put = __cordl_internal_set__doubleClickSelectsWord_k__BackingField)) bool _doubleClickSelectsWord_k__BackingField;

  /// @brief Field <tripleClickSelectsLine>k__BackingField, offset 0x3c4, size 0x1
  __declspec(property(get = __cordl_internal_get__tripleClickSelectsLine_k__BackingField,
                      put = __cordl_internal_set__tripleClickSelectsLine_k__BackingField)) bool _tripleClickSelectsLine_k__BackingField;

  /// @brief Field <isDelayed>k__BackingField, offset 0x3c5, size 0x1
  __declspec(property(get = __cordl_internal_get__isDelayed_k__BackingField, put = __cordl_internal_set__isDelayed_k__BackingField)) bool _isDelayed_k__BackingField;

  /// @brief Field <isDragging>k__BackingField, offset 0x3c6, size 0x1
  __declspec(property(get = __cordl_internal_get__isDragging_k__BackingField, put = __cordl_internal_set__isDragging_k__BackingField)) bool _isDragging_k__BackingField;

  /// @brief Field m_TouchScreenTextFieldInitialized, offset 0x3c7, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TouchScreenTextFieldInitialized, put = __cordl_internal_set_m_TouchScreenTextFieldInitialized)) bool m_TouchScreenTextFieldInitialized;

  /// @brief Field m_HardwareKeyboardPoller, offset 0x3c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HardwareKeyboardPoller,
                      put = __cordl_internal_set_m_HardwareKeyboardPoller))::UnityEngine::UIElements::IVisualElementScheduledItem* m_HardwareKeyboardPoller;

  /// @brief Field m_SelectionColor, offset 0x3d0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_SelectionColor, put = __cordl_internal_set_m_SelectionColor))::UnityEngine::Color m_SelectionColor;

  /// @brief Field m_CursorColor, offset 0x3e0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CursorColor, put = __cordl_internal_set_m_CursorColor))::UnityEngine::Color m_CursorColor;

  /// @brief Field <editorEventHandler>k__BackingField, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get__editorEventHandler_k__BackingField,
                      put = __cordl_internal_set__editorEventHandler_k__BackingField))::UnityEngine::UIElements::TextEditorEventHandler* _editorEventHandler_k__BackingField;

  /// @brief Field <editorEngine>k__BackingField, offset 0x3f8, size 0x8
  __declspec(property(get = __cordl_internal_get__editorEngine_k__BackingField,
                      put = __cordl_internal_set__editorEngine_k__BackingField))::UnityEngine::UIElements::TextEditorEngine* _editorEngine_k__BackingField;

  /// @brief Field m_TextHandle, offset 0x400, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextHandle, put = __cordl_internal_set_m_TextHandle))::UnityEngine::UIElements::ITextHandle* m_TextHandle;

  /// @brief Field m_Text, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Text, put = __cordl_internal_set_m_Text))::StringW m_Text;

  __declspec(property(get = UnityEngine_UIElements_ITextInputField_get_isReadOnly)) bool UnityEngine_UIElements_ITextInputField_isReadOnly;

  __declspec(property(get = get_isReadOnly, put = set_isReadOnly)) bool isReadOnly;

  __declspec(property(get = get_maxLength, put = set_maxLength)) int32_t maxLength;

  __declspec(property(get = get_maskChar, put = set_maskChar)) char16_t maskChar;

  __declspec(property(get = get_isPasswordField, put = set_isPasswordField)) bool isPasswordField;

  __declspec(property(get = get_doubleClickSelectsWord, put = set_doubleClickSelectsWord)) bool doubleClickSelectsWord;

  __declspec(property(get = get_tripleClickSelectsLine, put = set_tripleClickSelectsLine)) bool tripleClickSelectsLine;

  __declspec(property(get = get_isDelayed, put = set_isDelayed)) bool isDelayed;

  __declspec(property(get = get_isDragging)) bool isDragging;

  __declspec(property(get = get_touchScreenTextField)) bool touchScreenTextField;

  __declspec(property(get = get_touchScreenTextFieldChanged)) bool touchScreenTextFieldChanged;

  __declspec(property(get = get_selectionColor))::UnityEngine::Color selectionColor;

  __declspec(property(get = get_cursorColor))::UnityEngine::Color cursorColor;

  __declspec(property(get = get_hasFocus)) bool hasFocus;

  __declspec(property(get = get_editorEventHandler, put = set_editorEventHandler))::UnityEngine::UIElements::TextEditorEventHandler* editorEventHandler;

  __declspec(property(get = get_editorEngine, put = set_editorEngine))::UnityEngine::UIElements::TextEditorEngine* editorEngine;

  __declspec(property(get = get_text, put = set_text))::StringW text;

  __declspec(property(get = UnityEngine_UIElements_ITextInputField_get_hasFocus)) bool UnityEngine_UIElements_ITextInputField_hasFocus;

  __declspec(property(get = UnityEngine_UIElements_ITextInputField_get_editorEngine))::UnityEngine::UIElements::TextEditorEngine* UnityEngine_UIElements_ITextInputField_editorEngine;

  __declspec(property(get = UnityEngine_UIElements_ITextInputField_get_isDelayed)) bool UnityEngine_UIElements_ITextInputField_isDelayed;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextInputField"
  constexpr operator ::UnityEngine::UIElements::ITextInputField*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITextInputField"
  constexpr ::UnityEngine::UIElements::ITextInputField* i___UnityEngine__UIElements__ITextInputField() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IEventHandler"
  constexpr operator ::UnityEngine::UIElements::IEventHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IEventHandler"
  constexpr ::UnityEngine::UIElements::IEventHandler* i___UnityEngine__UIElements__IEventHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::ITextElement"
  constexpr operator ::UnityEngine::UIElements::ITextElement*() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::ITextElement"
  constexpr ::UnityEngine::UIElements::ITextElement* i___UnityEngine__UIElements__ITextElement() noexcept;

  constexpr ::StringW& __cordl_internal_get_m_OriginalText();

  constexpr ::StringW const& __cordl_internal_get_m_OriginalText() const;

  constexpr void __cordl_internal_set_m_OriginalText(::StringW value);

  constexpr bool& __cordl_internal_get__isReadOnly_k__BackingField();

  constexpr bool const& __cordl_internal_get__isReadOnly_k__BackingField() const;

  constexpr void __cordl_internal_set__isReadOnly_k__BackingField(bool value);

  constexpr int32_t& __cordl_internal_get__maxLength_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__maxLength_k__BackingField() const;

  constexpr void __cordl_internal_set__maxLength_k__BackingField(int32_t value);

  constexpr char16_t& __cordl_internal_get__maskChar_k__BackingField();

  constexpr char16_t const& __cordl_internal_get__maskChar_k__BackingField() const;

  constexpr void __cordl_internal_set__maskChar_k__BackingField(char16_t value);

  constexpr bool& __cordl_internal_get__isPasswordField_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPasswordField_k__BackingField() const;

  constexpr void __cordl_internal_set__isPasswordField_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__doubleClickSelectsWord_k__BackingField();

  constexpr bool const& __cordl_internal_get__doubleClickSelectsWord_k__BackingField() const;

  constexpr void __cordl_internal_set__doubleClickSelectsWord_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__tripleClickSelectsLine_k__BackingField();

  constexpr bool const& __cordl_internal_get__tripleClickSelectsLine_k__BackingField() const;

  constexpr void __cordl_internal_set__tripleClickSelectsLine_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__isDelayed_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDelayed_k__BackingField() const;

  constexpr void __cordl_internal_set__isDelayed_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__isDragging_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDragging_k__BackingField() const;

  constexpr void __cordl_internal_set__isDragging_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get_m_TouchScreenTextFieldInitialized();

  constexpr bool const& __cordl_internal_get_m_TouchScreenTextFieldInitialized() const;

  constexpr void __cordl_internal_set_m_TouchScreenTextFieldInitialized(bool value);

  constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_HardwareKeyboardPoller();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IVisualElementScheduledItem*> const& __cordl_internal_get_m_HardwareKeyboardPoller() const;

  constexpr void __cordl_internal_set_m_HardwareKeyboardPoller(::UnityEngine::UIElements::IVisualElementScheduledItem* value);

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_SelectionColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_SelectionColor() const;

  constexpr void __cordl_internal_set_m_SelectionColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __cordl_internal_get_m_CursorColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_m_CursorColor() const;

  constexpr void __cordl_internal_set_m_CursorColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::UIElements::TextEditorEventHandler*& __cordl_internal_get__editorEventHandler_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextEditorEventHandler*> const& __cordl_internal_get__editorEventHandler_k__BackingField() const;

  constexpr void __cordl_internal_set__editorEventHandler_k__BackingField(::UnityEngine::UIElements::TextEditorEventHandler* value);

  constexpr ::UnityEngine::UIElements::TextEditorEngine*& __cordl_internal_get__editorEngine_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextEditorEngine*> const& __cordl_internal_get__editorEngine_k__BackingField() const;

  constexpr void __cordl_internal_set__editorEngine_k__BackingField(::UnityEngine::UIElements::TextEditorEngine* value);

  constexpr ::UnityEngine::UIElements::ITextHandle*& __cordl_internal_get_m_TextHandle();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITextHandle*> const& __cordl_internal_get_m_TextHandle() const;

  constexpr void __cordl_internal_set_m_TextHandle(::UnityEngine::UIElements::ITextHandle* value);

  constexpr ::StringW& __cordl_internal_get_m_Text();

  constexpr ::StringW const& __cordl_internal_get_m_Text() const;

  constexpr void __cordl_internal_set_m_Text(::StringW value);

  /// @brief Method ResetValueAndText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ResetValueAndText();

  /// @brief Method SaveValueAndText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SaveValueAndText();

  /// @brief Method RestoreValueAndText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void RestoreValueAndText();

  /// @brief Method UpdateText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateText(::StringW value);

  /// @brief Method StringToValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType StringToValue(::StringW str);

  /// @brief Method UpdateValueFromText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateValueFromText();

  /// @brief Method UnityEngine.UIElements.ITextInputField.get_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextInputField_get_isReadOnly();

  /// @brief Method get_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isReadOnly();

  /// @brief Method set_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isReadOnly(bool value);

  /// @brief Method get_maxLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_maxLength();

  /// @brief Method set_maxLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maxLength(int32_t value);

  /// @brief Method get_maskChar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline char16_t get_maskChar();

  /// @brief Method set_maskChar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maskChar(char16_t value);

  /// @brief Method get_isPasswordField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isPasswordField();

  /// @brief Method set_isPasswordField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_isPasswordField(bool value);

  /// @brief Method get_doubleClickSelectsWord, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_doubleClickSelectsWord();

  /// @brief Method set_doubleClickSelectsWord, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_doubleClickSelectsWord(bool value);

  /// @brief Method get_tripleClickSelectsLine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_tripleClickSelectsLine();

  /// @brief Method set_tripleClickSelectsLine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_tripleClickSelectsLine(bool value);

  /// @brief Method get_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isDelayed();

  /// @brief Method set_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isDelayed(bool value);

  /// @brief Method get_isDragging, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isDragging();

  /// @brief Method get_touchScreenTextField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_touchScreenTextField();

  /// @brief Method get_touchScreenTextFieldChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_touchScreenTextFieldChanged();

  /// @brief Method get_selectionColor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_selectionColor();

  /// @brief Method get_cursorColor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_cursorColor();

  /// @brief Method get_hasFocus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_hasFocus();

  /// @brief Method get_editorEventHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextEditorEventHandler* get_editorEventHandler();

  /// @brief Method set_editorEventHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_editorEventHandler(::UnityEngine::UIElements::TextEditorEventHandler* value);

  /// @brief Method get_editorEngine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextEditorEngine* get_editorEngine();

  /// @brief Method set_editorEngine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_editorEngine(::UnityEngine::UIElements::TextEditorEngine* value);

  /// @brief Method get_text, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_text();

  /// @brief Method set_text, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_text(::StringW value);

  static inline ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method InitTextEditorEventHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InitTextEditorEventHandler();

  /// @brief Method CutActionStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DropdownMenuAction__Status CutActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method CopyActionStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DropdownMenuAction__Status CopyActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method PasteActionStatus, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__DropdownMenuAction__Status PasteActionStatus(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method ProcessMenuCommand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessMenuCommand(::StringW command);

  /// @brief Method Cut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Cut(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method Copy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Copy(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method Paste, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Paste(::UnityEngine::UIElements::DropdownMenuAction* a);

  /// @brief Method OnInputCustomStyleResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnInputCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e);

  /// @brief Method OnAttachToPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* attachEvent);

  /// @brief Method SyncTextEngine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SyncTextEngine();

  /// @brief Method CullString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW CullString(::StringW s);

  /// @brief Method OnGenerateVisualContent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc);

  /// @brief Method DrawWithTextSelectionAndCursor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DrawWithTextSelectionAndCursor(::UnityEngine::UIElements::MeshGenerationContext* mgc, ::StringW newText, float_t pixelsPerPoint);

  /// @brief Method AcceptCharacter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AcceptCharacter(char16_t c);

  /// @brief Method BuildContextualMenu, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void BuildContextualMenu(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt);

  /// @brief Method OnDetectFocusChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDetectFocusChange();

  /// @brief Method OnCursorIndexChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnCursorIndexChange();

  /// @brief Method DoMeasure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::__VisualElement__MeasureMode widthMode, float_t desiredHeight,
                                          ::UnityEngine::UIElements::__VisualElement__MeasureMode heightMode);

  /// @brief Method ExecuteDefaultActionDisabledAtTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ProcessEventAtTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessEventAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method UnityEngine.UIElements.ITextInputField.get_hasFocus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextInputField_get_hasFocus();

  /// @brief Method UnityEngine.UIElements.ITextInputField.SyncTextEngine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextInputField_SyncTextEngine();

  /// @brief Method UnityEngine.UIElements.ITextInputField.AcceptCharacter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextInputField_AcceptCharacter(char16_t c);

  /// @brief Method UnityEngine.UIElements.ITextInputField.CullString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW UnityEngine_UIElements_ITextInputField_CullString(::StringW s);

  /// @brief Method UnityEngine.UIElements.ITextInputField.UpdateText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextInputField_UpdateText(::StringW value);

  /// @brief Method UnityEngine.UIElements.ITextInputField.get_editorEngine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TextEditorEngine* UnityEngine_UIElements_ITextInputField_get_editorEngine();

  /// @brief Method UnityEngine.UIElements.ITextInputField.get_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool UnityEngine_UIElements_ITextInputField_get_isDelayed();

  /// @brief Method UnityEngine.UIElements.ITextInputField.UpdateValueFromText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_ITextInputField_UpdateValueFromText();

  /// @brief Method DeferGUIStyleRectSync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void DeferGUIStyleRectSync();

  /// @brief Method OnPercentResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnPercentResolved(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method SyncGUIStyle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void SyncGUIStyle(::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* textInput, ::UnityEngine::GUIStyle* style);

  /// @brief Method IsLayoutUsingPercent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsLayoutUsingPercent(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method AssignRect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void AssignRect(::UnityEngine::RectOffset* rect, int32_t left, int32_t top, int32_t right, int32_t bottom);

  /// @brief Method <ProcessEventAtTarget>b__97_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ProcessEventAtTarget_b__97_0();

  // Ctor Parameters [CppParam { name: "", ty: "__TextInputBaseField_1__TextInputBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TextInputBaseField_1__TextInputBase(__TextInputBaseField_1__TextInputBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TextInputBaseField_1__TextInputBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TextInputBaseField_1__TextInputBase(__TextInputBaseField_1__TextInputBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextInputBaseField_1__TextInputBase();

public:
  /// @brief Field m_OriginalText, offset: 0x3b0, size: 0x8, def value: None
  ::StringW ___m_OriginalText;

  /// @brief Field <isReadOnly>k__BackingField, offset: 0x3b8, size: 0x1, def value: None
  bool ____isReadOnly_k__BackingField;

  /// @brief Field <maxLength>k__BackingField, offset: 0x3bc, size: 0x4, def value: None
  int32_t ____maxLength_k__BackingField;

  /// @brief Field <maskChar>k__BackingField, offset: 0x3c0, size: 0x2, def value: None
  char16_t ____maskChar_k__BackingField;

  /// @brief Field <isPasswordField>k__BackingField, offset: 0x3c2, size: 0x1, def value: None
  bool ____isPasswordField_k__BackingField;

  /// @brief Field <doubleClickSelectsWord>k__BackingField, offset: 0x3c3, size: 0x1, def value: None
  bool ____doubleClickSelectsWord_k__BackingField;

  /// @brief Field <tripleClickSelectsLine>k__BackingField, offset: 0x3c4, size: 0x1, def value: None
  bool ____tripleClickSelectsLine_k__BackingField;

  /// @brief Field <isDelayed>k__BackingField, offset: 0x3c5, size: 0x1, def value: None
  bool ____isDelayed_k__BackingField;

  /// @brief Field <isDragging>k__BackingField, offset: 0x3c6, size: 0x1, def value: None
  bool ____isDragging_k__BackingField;

  /// @brief Field m_TouchScreenTextFieldInitialized, offset: 0x3c7, size: 0x1, def value: None
  bool ___m_TouchScreenTextFieldInitialized;

  /// @brief Field m_HardwareKeyboardPoller, offset: 0x3c8, size: 0x8, def value: None
  ::UnityEngine::UIElements::IVisualElementScheduledItem* ___m_HardwareKeyboardPoller;

  /// @brief Field m_SelectionColor, offset: 0x3d0, size: 0x10, def value: None
  ::UnityEngine::Color ___m_SelectionColor;

  /// @brief Field m_CursorColor, offset: 0x3e0, size: 0x10, def value: None
  ::UnityEngine::Color ___m_CursorColor;

  /// @brief Field <editorEventHandler>k__BackingField, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEditorEventHandler* ____editorEventHandler_k__BackingField;

  /// @brief Field <editorEngine>k__BackingField, offset: 0x3f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEditorEngine* ____editorEngine_k__BackingField;

  /// @brief Field m_TextHandle, offset: 0x400, size: 0x8, def value: None
  ::UnityEngine::UIElements::ITextHandle* ___m_TextHandle;

  /// @brief Field m_Text, offset: 0x408, size: 0x8, def value: None
  ::StringW ___m_Text;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::TextInputBaseField`1
// SizeInfo { instance_size: 1056, native_size: 1056, calculated_instance_size: 1056, calculated_native_size: 1056, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6389)), TypeDefinitionIndex(TypeDefinitionIndex(6565)), TypeDefinitionIndex(TypeDefinitionIndex(8995)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6389), inst: 921 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6565), inst: 293 })] Self:
// TypeDefinitionIndex(TypeDefinitionIndex(6357)) CS Name: ::UnityEngine.UIElements::TextInputBaseField`1<TValueType>*
class CORDL_TYPE TextInputBaseField_1 : public ::UnityEngine::UIElements::BaseField_1<TValueType> {
public:
  // Declarations
  using TextInputBase = ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>;

  using UxmlTraits = ::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits<TValueType>;

  /// @brief Field m_VisualInputTabIndex, offset 0x404, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VisualInputTabIndex, put = __cordl_internal_set_m_VisualInputTabIndex)) int32_t m_VisualInputTabIndex;

  /// @brief Field m_TextInputBase, offset 0x408, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextInputBase,
                      put = __cordl_internal_set_m_TextInputBase))::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* m_TextInputBase;

  /// @brief Field <iTextHandle>k__BackingField, offset 0x410, size 0x8
  __declspec(property(get = __cordl_internal_get__iTextHandle_k__BackingField,
                      put = __cordl_internal_set__iTextHandle_k__BackingField))::UnityEngine::UIElements::ITextHandle* _iTextHandle_k__BackingField;

  /// @brief Field onIsReadOnlyChanged, offset 0x418, size 0x8
  __declspec(property(get = __cordl_internal_get_onIsReadOnlyChanged, put = __cordl_internal_set_onIsReadOnlyChanged))::System::Action_1<bool>* onIsReadOnlyChanged;

  /// @brief Field s_SelectionColorProperty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_SelectionColorProperty,
                             put = setStaticF_s_SelectionColorProperty))::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> s_SelectionColorProperty;

  /// @brief Field s_CursorColorProperty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_CursorColorProperty,
                             put = setStaticF_s_CursorColorProperty))::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> s_CursorColorProperty;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  /// @brief Field singleLineInputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_singleLineInputUssClassName, put = setStaticF_singleLineInputUssClassName))::StringW singleLineInputUssClassName;

  /// @brief Field multilineInputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_multilineInputUssClassName, put = setStaticF_multilineInputUssClassName))::StringW multilineInputUssClassName;

  /// @brief Field textInputUssName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textInputUssName, put = setStaticF_textInputUssName))::StringW textInputUssName;

  __declspec(property(get = get_textInputBase))::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* textInputBase;

  __declspec(property(put = set_iTextHandle))::UnityEngine::UIElements::ITextHandle* iTextHandle;

  __declspec(property(put = set_text))::StringW text;

  __declspec(property(put = set_isReadOnly)) bool isReadOnly;

  __declspec(property(put = set_isPasswordField)) bool isPasswordField;

  __declspec(property(put = set_maxLength)) int32_t maxLength;

  __declspec(property(get = get_isDelayed, put = set_isDelayed)) bool isDelayed;

  __declspec(property(put = set_maskChar)) char16_t maskChar;

  constexpr int32_t& __cordl_internal_get_m_VisualInputTabIndex();

  constexpr int32_t const& __cordl_internal_get_m_VisualInputTabIndex() const;

  constexpr void __cordl_internal_set_m_VisualInputTabIndex(int32_t value);

  constexpr ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*& __cordl_internal_get_m_TextInputBase();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>*> const& __cordl_internal_get_m_TextInputBase() const;

  constexpr void __cordl_internal_set_m_TextInputBase(::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* value);

  constexpr ::UnityEngine::UIElements::ITextHandle*& __cordl_internal_get__iTextHandle_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITextHandle*> const& __cordl_internal_get__iTextHandle_k__BackingField() const;

  constexpr void __cordl_internal_set__iTextHandle_k__BackingField(::UnityEngine::UIElements::ITextHandle* value);

  constexpr ::System::Action_1<bool>*& __cordl_internal_get_onIsReadOnlyChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> const& __cordl_internal_get_onIsReadOnlyChanged() const;

  constexpr void __cordl_internal_set_onIsReadOnlyChanged(::System::Action_1<bool>* value);

  static inline void setStaticF_s_SelectionColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value);

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> getStaticF_s_SelectionColorProperty();

  static inline void setStaticF_s_CursorColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value);

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> getStaticF_s_CursorColorProperty();

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline void setStaticF_singleLineInputUssClassName(::StringW value);

  static inline ::StringW getStaticF_singleLineInputUssClassName();

  static inline void setStaticF_multilineInputUssClassName(::StringW value);

  static inline ::StringW getStaticF_multilineInputUssClassName();

  static inline void setStaticF_textInputUssName(::StringW value);

  static inline ::StringW getStaticF_textInputUssName();

  /// @brief Method get_textInputBase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* get_textInputBase();

  /// @brief Method set_iTextHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_iTextHandle(::UnityEngine::UIElements::ITextHandle* value);

  /// @brief Method set_text, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_text(::StringW value);

  /// @brief Method set_isReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isReadOnly(bool value);

  /// @brief Method set_isPasswordField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isPasswordField(bool value);

  /// @brief Method set_maxLength, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maxLength(int32_t value);

  /// @brief Method get_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_isDelayed();

  /// @brief Method set_isDelayed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_isDelayed(bool value);

  /// @brief Method set_maskChar, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_maskChar(char16_t value);

  static inline ::UnityEngine::UIElements::TextInputBaseField_1<TValueType>* New_ctor(::StringW label, int32_t maxLength, char16_t maskChar,
                                                                                      ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* textInputBase);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength, char16_t maskChar, ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* textInputBase);

  /// @brief Method OnAttachToPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* e);

  /// @brief Method OnFieldCustomStyleResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnFieldCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e);

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method UpdateMixedValueContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  // Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextInputBaseField_1(TextInputBaseField_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextInputBaseField_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextInputBaseField_1(TextInputBaseField_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextInputBaseField_1();

public:
  /// @brief Field m_VisualInputTabIndex, offset: 0x404, size: 0x4, def value: None
  int32_t ___m_VisualInputTabIndex;

  /// @brief Field m_TextInputBase, offset: 0x408, size: 0x8, def value: None
  ::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase<TValueType>* ___m_TextInputBase;

  /// @brief Field <iTextHandle>k__BackingField, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::UIElements::ITextHandle* ____iTextHandle_k__BackingField;

  /// @brief Field onIsReadOnlyChanged, offset: 0x418, size: 0x8, def value: None
  ::System::Action_1<bool>* ___onIsReadOnlyChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextInputBaseField_1, "UnityEngine.UIElements", "TextInputBaseField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__TextInputBaseField_1__TextInputBase, "UnityEngine.UIElements", "TextInputBaseField`1/TextInputBase");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__TextInputBaseField_1__UxmlTraits, "UnityEngine.UIElements", "TextInputBaseField`1/UxmlTraits");
