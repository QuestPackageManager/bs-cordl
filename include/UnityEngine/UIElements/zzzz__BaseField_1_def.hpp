#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseField_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEditableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__INotifyValueChanged_1_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BaseField_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Action;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class BaseField_1_UxmlTraits;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class Label;
}
namespace UnityEngine::UIElements {
class UxmlStringAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType> class BaseField_1;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class BaseField_1_UxmlTraits;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseField_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseField_1_UxmlTraits);
// Dependencies UnityEngine.UIElements.BindableElement::UxmlTraits
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseField`1/UxmlTraits<TValueType>
class CORDL_TYPE BaseField_1_UxmlTraits : public ::UnityEngine::UIElements::BindableElement_UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Label, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Label, put = __cordl_internal_set_m_Label)) ::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Label;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>* New_ctor();

  /// @brief Method ParseChoiceList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* ParseChoiceList(::StringW choicesFromBag);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription* const& __cordl_internal_get_m_Label() const;

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Label();

  constexpr void __cordl_internal_set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseField_1_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseField_1_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseField_1_UxmlTraits(BaseField_1_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseField_1_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseField_1_UxmlTraits(BaseField_1_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5601 };

  /// @brief Field m_Label, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Label;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.PropertyName, UnityEngine.UIElements.BindableElement, UnityEngine.UIElements.CustomStyleProperty`1<T>, UnityEngine.UIElements.IEditableElement,
// UnityEngine.UIElements.INotifyValueChanged`1<T>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseField`1<TValueType>
class CORDL_TYPE BaseField_1 : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::BaseField_1_UxmlTraits<TValueType>;

  __declspec(property(get = UnityEngine_UIElements_IEditableElement_get_editingEnded)) ::System::Action* UnityEngine_UIElements_IEditableElement_editingEnded;

  __declspec(property(get = UnityEngine_UIElements_IEditableElement_get_editingStarted)) ::System::Action* UnityEngine_UIElements_IEditableElement_editingStarted;

  /// @brief Field <UnityEngine.UIElements.IEditableElement.editingEnded>k__BackingField, offset 0x438, size 0x8
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField)) ::System::Action* _UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IEditableElement.editingStarted>k__BackingField, offset 0x430, size 0x8
  __declspec(property(
      get = __cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField,
      put = __cordl_internal_set__UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField)) ::System::Action* _UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField;

  /// @brief Field <labelElement>k__BackingField, offset 0x400, size 0x8
  __declspec(property(get = __cordl_internal_get__labelElement_k__BackingField,
                      put = __cordl_internal_set__labelElement_k__BackingField)) ::UnityEngine::UIElements::Label* _labelElement_k__BackingField;

  /// @brief Field alignedFieldUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_alignedFieldUssClassName, put = setStaticF_alignedFieldUssClassName)) ::StringW alignedFieldUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field inspectorFieldUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inspectorFieldUssClassName, put = setStaticF_inspectorFieldUssClassName)) ::StringW inspectorFieldUssClassName;

  __declspec(property(get = get_label, put = set_label)) ::StringW label;

  /// @brief Field labelDraggerVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelDraggerVariantUssClassName, put = setStaticF_labelDraggerVariantUssClassName)) ::StringW labelDraggerVariantUssClassName;

  __declspec(property(get = get_labelElement, put = set_labelElement)) ::UnityEngine::UIElements::Label* labelElement;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  /// @brief Field m_CachedContextWidthElement, offset 0x420, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedContextWidthElement,
                      put = __cordl_internal_set_m_CachedContextWidthElement)) ::UnityEngine::UIElements::VisualElement* m_CachedContextWidthElement;

  /// @brief Field m_CachedInspectorElement, offset 0x428, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedInspectorElement, put = __cordl_internal_set_m_CachedInspectorElement)) ::UnityEngine::UIElements::VisualElement* m_CachedInspectorElement;

  /// @brief Field m_LabelBaseMinWidth, offset 0x3e0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LabelBaseMinWidth, put = __cordl_internal_set_m_LabelBaseMinWidth)) float_t m_LabelBaseMinWidth;

  /// @brief Field m_LabelExtraContextWidth, offset 0x3e4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LabelExtraContextWidth, put = __cordl_internal_set_m_LabelExtraContextWidth)) float_t m_LabelExtraContextWidth;

  /// @brief Field m_LabelExtraPadding, offset 0x3dc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LabelExtraPadding, put = __cordl_internal_set_m_LabelExtraPadding)) float_t m_LabelExtraPadding;

  /// @brief Field m_LabelWidthRatio, offset 0x3d8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LabelWidthRatio, put = __cordl_internal_set_m_LabelWidthRatio)) float_t m_LabelWidthRatio;

  /// @brief Field m_MixedValueLabel, offset 0x410, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MixedValueLabel, put = __cordl_internal_set_m_MixedValueLabel)) ::UnityEngine::UIElements::Label* m_MixedValueLabel;

  /// @brief Field m_ShowMixedValue, offset 0x408, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowMixedValue, put = __cordl_internal_set_m_ShowMixedValue)) bool m_ShowMixedValue;

  /// @brief Field m_SkipValidation, offset 0x418, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SkipValidation, put = __cordl_internal_set_m_SkipValidation)) bool m_SkipValidation;

  /// @brief Field m_Value, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) TValueType m_Value;

  /// @brief Field m_VisualInput, offset 0x3e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualInput, put = __cordl_internal_set_m_VisualInput)) ::UnityEngine::UIElements::VisualElement* m_VisualInput;

  __declspec(property(get = get_mixedValueLabel)) ::UnityEngine::UIElements::Label* mixedValueLabel;

  /// @brief Field mixedValueLabelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_mixedValueLabelUssClassName, put = setStaticF_mixedValueLabelUssClassName)) ::StringW mixedValueLabelUssClassName;

  /// @brief Field mixedValueString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_mixedValueString, put = setStaticF_mixedValueString)) ::StringW mixedValueString;

  /// @brief Field noLabelVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_noLabelVariantUssClassName, put = setStaticF_noLabelVariantUssClassName)) ::StringW noLabelVariantUssClassName;

  /// @brief Field onValidateValue, offset 0x3f8, size 0x8
  __declspec(property(get = __cordl_internal_get_onValidateValue, put = __cordl_internal_set_onValidateValue)) ::System::Func_2<TValueType, TValueType>* onValidateValue;

  __declspec(property(get = get_rawValue, put = set_rawValue)) TValueType rawValue;

  /// @brief Field s_LabelBaseMinWidthProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LabelBaseMinWidthProperty, put = setStaticF_s_LabelBaseMinWidthProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<float_t>
      s_LabelBaseMinWidthProperty;

  /// @brief Field s_LabelExtraContextWidthProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LabelExtraContextWidthProperty, put = setStaticF_s_LabelExtraContextWidthProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<float_t>
      s_LabelExtraContextWidthProperty;

  /// @brief Field s_LabelExtraPaddingProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LabelExtraPaddingProperty, put = setStaticF_s_LabelExtraPaddingProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<float_t>
      s_LabelExtraPaddingProperty;

  /// @brief Field s_LabelWidthRatioProperty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_LabelWidthRatioProperty, put = setStaticF_s_LabelWidthRatioProperty)) ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> s_LabelWidthRatioProperty;

  /// @brief Field serializedPropertyCopyName, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_serializedPropertyCopyName, put = setStaticF_serializedPropertyCopyName)) ::UnityEngine::PropertyName serializedPropertyCopyName;

  __declspec(property(get = get_showMixedValue, put = set_showMixedValue)) bool showMixedValue;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) TValueType value;

  __declspec(property(get = get_visualInput, put = set_visualInput)) ::UnityEngine::UIElements::VisualElement* visualInput;

  /// @brief Convert operator to "::UnityEngine::UIElements::IEditableElement"
  constexpr operator ::UnityEngine::UIElements::IEditableElement*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>*() noexcept;

  /// @brief Method AlignLabel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AlignLabel();

  /// @brief Method EndEditing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void EndEditing(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method EqualsCurrentValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool EqualsCurrentValue(TValueType value);

  /// @brief Method GetTooltipRect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rect GetTooltipRect();

  static inline ::UnityEngine::UIElements::BaseField_1<TValueType>* New_ctor(::StringW label);

  static inline ::UnityEngine::UIElements::BaseField_1<TValueType>* New_ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput);

  /// @brief Method OnAttachToPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* e);

  /// @brief Method OnCustomStyleResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt);

  /// @brief Method OnDetachFromPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent* e);

  /// @brief Method OnInspectorFieldGeometryChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method OnViewDataReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method RegisterEditingCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterEditingCallbacks();

  /// @brief Method SetValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(TValueType newValue);

  /// @brief Method StartEditing, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void StartEditing(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method UnityEngine.UIElements.IEditableElement.get_editingEnded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Action* UnityEngine_UIElements_IEditableElement_get_editingEnded();

  /// @brief Method UnityEngine.UIElements.IEditableElement.get_editingStarted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Action* UnityEngine_UIElements_IEditableElement_get_editingStarted();

  /// @brief Method UnregisterEditingCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterEditingCallbacks();

  /// @brief Method UpdateMixedValueContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  /// @brief Method ValidatedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValueType ValidatedValue(TValueType value);

  constexpr ::System::Action* const& __cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField();

  constexpr ::System::Action* const& __cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField() const;

  constexpr ::System::Action*& __cordl_internal_get__UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get__labelElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get__labelElement_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CachedContextWidthElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CachedContextWidthElement();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CachedInspectorElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CachedInspectorElement();

  constexpr float_t const& __cordl_internal_get_m_LabelBaseMinWidth() const;

  constexpr float_t& __cordl_internal_get_m_LabelBaseMinWidth();

  constexpr float_t const& __cordl_internal_get_m_LabelExtraContextWidth() const;

  constexpr float_t& __cordl_internal_get_m_LabelExtraContextWidth();

  constexpr float_t const& __cordl_internal_get_m_LabelExtraPadding() const;

  constexpr float_t& __cordl_internal_get_m_LabelExtraPadding();

  constexpr float_t const& __cordl_internal_get_m_LabelWidthRatio() const;

  constexpr float_t& __cordl_internal_get_m_LabelWidthRatio();

  constexpr ::UnityEngine::UIElements::Label* const& __cordl_internal_get_m_MixedValueLabel() const;

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_MixedValueLabel();

  constexpr bool const& __cordl_internal_get_m_ShowMixedValue() const;

  constexpr bool& __cordl_internal_get_m_ShowMixedValue();

  constexpr bool const& __cordl_internal_get_m_SkipValidation() const;

  constexpr bool& __cordl_internal_get_m_SkipValidation();

  constexpr TValueType const& __cordl_internal_get_m_Value() const;

  constexpr TValueType& __cordl_internal_get_m_Value();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_VisualInput() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_VisualInput();

  constexpr ::System::Func_2<TValueType, TValueType>* const& __cordl_internal_get_onValidateValue() const;

  constexpr ::System::Func_2<TValueType, TValueType>*& __cordl_internal_get_onValidateValue();

  constexpr void __cordl_internal_set__UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField(::System::Action* value);

  constexpr void __cordl_internal_set__labelElement_k__BackingField(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_CachedContextWidthElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_LabelBaseMinWidth(float_t value);

  constexpr void __cordl_internal_set_m_LabelExtraContextWidth(float_t value);

  constexpr void __cordl_internal_set_m_LabelExtraPadding(float_t value);

  constexpr void __cordl_internal_set_m_LabelWidthRatio(float_t value);

  constexpr void __cordl_internal_set_m_MixedValueLabel(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_ShowMixedValue(bool value);

  constexpr void __cordl_internal_set_m_SkipValidation(bool value);

  constexpr void __cordl_internal_set_m_Value(TValueType value);

  constexpr void __cordl_internal_set_m_VisualInput(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_onValidateValue(::System::Func_2<TValueType, TValueType>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput);

  /// @brief Method add_onValidateValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void add_onValidateValue(::System::Func_2<TValueType, TValueType>* value);

  static inline ::StringW getStaticF_alignedFieldUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_inspectorFieldUssClassName();

  static inline ::StringW getStaticF_labelDraggerVariantUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_mixedValueLabelUssClassName();

  static inline ::StringW getStaticF_mixedValueString();

  static inline ::StringW getStaticF_noLabelVariantUssClassName();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelBaseMinWidthProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelExtraContextWidthProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelExtraPaddingProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelWidthRatioProperty();

  static inline ::UnityEngine::PropertyName getStaticF_serializedPropertyCopyName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_label, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW get_label();

  /// @brief Method get_labelElement, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::Label* get_labelElement();

  /// @brief Method get_mixedValueLabel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Label* get_mixedValueLabel();

  /// @brief Method get_rawValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValueType get_rawValue();

  /// @brief Method get_showMixedValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_showMixedValue();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType get_value();

  /// @brief Method get_visualInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_visualInput();

  /// @brief Convert to "::UnityEngine::UIElements::IEditableElement"
  constexpr ::UnityEngine::UIElements::IEditableElement* i___UnityEngine__UIElements__IEditableElement() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>* i___UnityEngine__UIElements__INotifyValueChanged_1_TValueType_() noexcept;

  /// @brief Method remove_onValidateValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void remove_onValidateValue(::System::Func_2<TValueType, TValueType>* value);

  static inline void setStaticF_alignedFieldUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_inspectorFieldUssClassName(::StringW value);

  static inline void setStaticF_labelDraggerVariantUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_mixedValueLabelUssClassName(::StringW value);

  static inline void setStaticF_mixedValueString(::StringW value);

  static inline void setStaticF_noLabelVariantUssClassName(::StringW value);

  static inline void setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value);

  static inline void setStaticF_s_LabelExtraContextWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value);

  static inline void setStaticF_s_LabelExtraPaddingProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value);

  static inline void setStaticF_s_LabelWidthRatioProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value);

  static inline void setStaticF_serializedPropertyCopyName(::UnityEngine::PropertyName value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_label, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_label(::StringW value);

  /// @brief Method set_labelElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_labelElement(::UnityEngine::UIElements::Label* value);

  /// @brief Method set_rawValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_rawValue(TValueType value);

  /// @brief Method set_showMixedValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void set_showMixedValue(bool value);

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_value(TValueType value);

  /// @brief Method set_visualInput, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_visualInput(::UnityEngine::UIElements::VisualElement* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseField_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseField_1(BaseField_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseField_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseField_1(BaseField_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5602 };

  /// @brief Field m_LabelWidthRatio, offset: 0x3d8, size: 0x4, def value: None
  float_t ___m_LabelWidthRatio;

  /// @brief Field m_LabelExtraPadding, offset: 0x3dc, size: 0x4, def value: None
  float_t ___m_LabelExtraPadding;

  /// @brief Field m_LabelBaseMinWidth, offset: 0x3e0, size: 0x4, def value: None
  float_t ___m_LabelBaseMinWidth;

  /// @brief Field m_LabelExtraContextWidth, offset: 0x3e4, size: 0x4, def value: None
  float_t ___m_LabelExtraContextWidth;

  /// @brief Field m_VisualInput, offset: 0x3e8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_VisualInput;

  /// @brief Field m_Value, offset: 0x3f0, size: 0x8, def value: None
  TValueType ___m_Value;

  /// @brief Field onValidateValue, offset: 0x3f8, size: 0x8, def value: None
  ::System::Func_2<TValueType, TValueType>* ___onValidateValue;

  /// @brief Field <labelElement>k__BackingField, offset: 0x400, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ____labelElement_k__BackingField;

  /// @brief Field m_ShowMixedValue, offset: 0x408, size: 0x1, def value: None
  bool ___m_ShowMixedValue;

  /// @brief Field m_MixedValueLabel, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_MixedValueLabel;

  /// @brief Field m_SkipValidation, offset: 0x418, size: 0x1, def value: None
  bool ___m_SkipValidation;

  /// @brief Field m_CachedContextWidthElement, offset: 0x420, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CachedContextWidthElement;

  /// @brief Field m_CachedInspectorElement, offset: 0x428, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CachedInspectorElement;

  /// @brief Field <UnityEngine.UIElements.IEditableElement.editingStarted>k__BackingField, offset: 0x430, size: 0x8, def value: None
  ::System::Action* ____UnityEngine_UIElements_IEditableElement_editingStarted_k__BackingField;

  /// @brief Field <UnityEngine.UIElements.IEditableElement.editingEnded>k__BackingField, offset: 0x438, size: 0x8, def value: None
  ::System::Action* ____UnityEngine_UIElements_IEditableElement_editingEnded_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseField_1, "UnityEngine.UIElements", "BaseField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseField_1_UxmlTraits, "UnityEngine.UIElements", "BaseField`1/UxmlTraits");
