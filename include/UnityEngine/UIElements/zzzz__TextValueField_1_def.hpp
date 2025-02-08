#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TextValueField_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__IValueField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextInputBaseField_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextValueField_1)
namespace UnityEngine::UIElements {
class BaseFieldMouseDragger;
}
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class TextValueField_1_TextValueInput;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType> class TextValueField_1;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class TextValueField_1_TextValueInput;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TextValueField_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::TextValueField_1_TextValueInput);
// Dependencies UnityEngine.UIElements.TextInputBaseField`1::TextInputBase<TValueType>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: UnityEngine.UIElements.TextValueField`1/TextValueInput<TValueType>
class CORDL_TYPE TextValueField_1_TextValueInput : public ::UnityEngine::UIElements::TextInputBaseField_1_TextInputBase<TValueType> {
public:
  // Declarations
  /// @brief Field <formatString>k__BackingField, offset 0x400, size 0x8
  __declspec(property(get = __cordl_internal_get__formatString_k__BackingField, put = __cordl_internal_set__formatString_k__BackingField)) ::StringW _formatString_k__BackingField;

  __declspec(property(get = get_allowedCharacters)) ::StringW allowedCharacters;

  __declspec(property(get = get_formatString, put = set_formatString)) ::StringW formatString;

  __declspec(property(get = get_textValueFieldParent)) ::UnityEngine::UIElements::TextValueField_1<TValueType>* textValueFieldParent;

  /// @brief Method AcceptCharacter, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AcceptCharacter(char16_t c);

  /// @brief Method ApplyInputDeviceDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, TValueType startValue);

  static inline ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* New_ctor();

  /// @brief Method StartDragging, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void StartDragging();

  /// @brief Method StopDragging, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void StopDragging();

  /// @brief Method StringToValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType StringToValue(::StringW str);

  /// @brief Method ValueToString, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ValueToString(TValueType value);

  constexpr ::StringW const& __cordl_internal_get__formatString_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__formatString_k__BackingField();

  constexpr void __cordl_internal_set__formatString_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_allowedCharacters, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_allowedCharacters();

  /// @brief Method get_formatString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_formatString();

  /// @brief Method get_textValueFieldParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextValueField_1<TValueType>* get_textValueFieldParent();

  /// @brief Method set_formatString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_formatString(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextValueField_1_TextValueInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextValueField_1_TextValueInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextValueField_1_TextValueInput(TextValueField_1_TextValueInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextValueField_1_TextValueInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextValueField_1_TextValueInput(TextValueField_1_TextValueInput const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5703 };

  /// @brief Field <formatString>k__BackingField, offset: 0x400, size: 0x8, def value: None
  ::StringW ____formatString_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.IValueField`1<T>, UnityEngine.UIElements.TextInputBaseField`1<TValueType>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: UnityEngine.UIElements.TextValueField`1<TValueType>
class CORDL_TYPE TextValueField_1 : public ::UnityEngine::UIElements::TextInputBaseField_1<TValueType> {
public:
  // Declarations
  using TextValueInput = ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>;

  __declspec(property(get = get_formatString)) ::StringW formatString;

  /// @brief Field m_Dragger, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dragger, put = __cordl_internal_set_m_Dragger)) ::UnityEngine::UIElements::BaseFieldMouseDragger* m_Dragger;

  /// @brief Field m_ForceUpdateDisplay, offset 0x461, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceUpdateDisplay, put = __cordl_internal_set_m_ForceUpdateDisplay)) bool m_ForceUpdateDisplay;

  /// @brief Field m_UpdateTextFromValue, offset 0x460, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UpdateTextFromValue, put = __cordl_internal_set_m_UpdateTextFromValue)) bool m_UpdateTextFromValue;

  __declspec(property(get = get_textValueInput)) ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* textValueInput;

  __declspec(property(get = get_value, put = set_value)) TValueType value;

  /// @brief Convert operator to "::UnityEngine::UIElements::IValueField_1<TValueType>"
  constexpr operator ::UnityEngine::UIElements::IValueField_1<TValueType>*() noexcept;

  /// @brief Method AddLabelDragger, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDraggerType> inline void AddLabelDragger();

  /// @brief Method ApplyInputDeviceDelta, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, TValueType startValue);

  /// @brief Method CanTryParse, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CanTryParse(::StringW textString);

  /// @brief Method EnableLabelDragger, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EnableLabelDragger(bool enable);

  /// @brief Method ExecuteDefaultAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TextValueField_1<TValueType>* New_ctor(::StringW label, int32_t maxLength,
                                                                                  ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* textValueInput);

  /// @brief Method OnIsReadOnlyChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnIsReadOnlyChanged(bool newValue);

  /// @brief Method OnViewDataReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method RegisterEditingCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterEditingCallbacks();

  /// @brief Method SetValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(TValueType newValue);

  /// @brief Method StartDragging, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void StartDragging();

  /// @brief Method StopDragging, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void StopDragging();

  /// @brief Method UnregisterEditingCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterEditingCallbacks();

  /// @brief Method UpdateTextFromValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateTextFromValue();

  /// @brief Method UpdateValueFromText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateValueFromText();

  constexpr ::UnityEngine::UIElements::BaseFieldMouseDragger* const& __cordl_internal_get_m_Dragger() const;

  constexpr ::UnityEngine::UIElements::BaseFieldMouseDragger*& __cordl_internal_get_m_Dragger();

  constexpr bool const& __cordl_internal_get_m_ForceUpdateDisplay() const;

  constexpr bool& __cordl_internal_get_m_ForceUpdateDisplay();

  constexpr bool const& __cordl_internal_get_m_UpdateTextFromValue() const;

  constexpr bool& __cordl_internal_get_m_UpdateTextFromValue();

  constexpr void __cordl_internal_set_m_Dragger(::UnityEngine::UIElements::BaseFieldMouseDragger* value);

  constexpr void __cordl_internal_set_m_ForceUpdateDisplay(bool value);

  constexpr void __cordl_internal_set_m_UpdateTextFromValue(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, int32_t maxLength, ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* textValueInput);

  /// @brief Method get_formatString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_formatString();

  /// @brief Method get_textValueInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextValueField_1_TextValueInput<TValueType>* get_textValueInput();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType get_value();

  /// @brief Convert to "::UnityEngine::UIElements::IValueField_1<TValueType>"
  constexpr ::UnityEngine::UIElements::IValueField_1<TValueType>* i___UnityEngine__UIElements__IValueField_1_TValueType_() noexcept;

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_value(TValueType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextValueField_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextValueField_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextValueField_1(TextValueField_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextValueField_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextValueField_1(TextValueField_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5704 };

  /// @brief Field m_Dragger, offset: 0x458, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseFieldMouseDragger* ___m_Dragger;

  /// @brief Field m_UpdateTextFromValue, offset: 0x460, size: 0x1, def value: None
  bool ___m_UpdateTextFromValue;

  /// @brief Field m_ForceUpdateDisplay, offset: 0x461, size: 0x1, def value: None
  bool ___m_ForceUpdateDisplay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextValueField_1, "UnityEngine.UIElements", "TextValueField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::TextValueField_1_TextValueInput, "UnityEngine.UIElements", "TextValueField`1/TextValueInput");
