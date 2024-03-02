#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindableElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseField_1)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class INotifyValueChanged_1;
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
namespace UnityEngine::UIElements {
template <typename TValueType> class __BaseField_1__UxmlTraits;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType> class BaseField_1;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class __BaseField_1__UxmlTraits;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseField_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__BaseField_1__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 128, native_size: 128, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: ::BaseField`1::UxmlTraits<TValueType>*
class CORDL_TYPE __BaseField_1__UxmlTraits : public ::UnityEngine::UIElements::__BindableElement__UxmlTraits {
public:
  // Declarations
  /// @brief Field m_Label, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Label, put = __cordl_internal_set_m_Label))::UnityEngine::UIElements::UxmlStringAttributeDescription* m_Label;

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>* New_ctor();

  /// @brief Method ParseChoiceList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::StringW>* ParseChoiceList(::StringW choicesFromBag);

  constexpr ::UnityEngine::UIElements::UxmlStringAttributeDescription*& __cordl_internal_get_m_Label();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlStringAttributeDescription*> const& __cordl_internal_get_m_Label() const;

  constexpr void __cordl_internal_set_m_Label(::UnityEngine::UIElements::UxmlStringAttributeDescription* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseField_1__UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BaseField_1__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BaseField_1__UxmlTraits(__BaseField_1__UxmlTraits const&) = delete;

  /// @brief Field m_Label, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlStringAttributeDescription* ___m_Label;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseField`1
// SizeInfo { instance_size: 1032, native_size: 1028, calculated_instance_size: 1032, calculated_native_size: 1028, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: ::UnityEngine.UIElements::BaseField`1<TValueType>*
class CORDL_TYPE BaseField_1 : public ::UnityEngine::UIElements::BindableElement {
public:
  // Declarations
  using UxmlTraits = ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<TValueType>;

  /// @brief Field <labelElement>k__BackingField, offset 0x3e0, size 0x8
  __declspec(property(get = __cordl_internal_get__labelElement_k__BackingField,
                      put = __cordl_internal_set__labelElement_k__BackingField))::UnityEngine::UIElements::Label* _labelElement_k__BackingField;

  /// @brief Field alignedFieldUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_alignedFieldUssClassName, put = setStaticF_alignedFieldUssClassName))::StringW alignedFieldUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  /// @brief Field inspectorFieldUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inspectorFieldUssClassName, put = setStaticF_inspectorFieldUssClassName))::StringW inspectorFieldUssClassName;

  __declspec(property(get = get_label, put = set_label))::StringW label;

  /// @brief Field labelDraggerVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelDraggerVariantUssClassName, put = setStaticF_labelDraggerVariantUssClassName))::StringW labelDraggerVariantUssClassName;

  __declspec(property(get = get_labelElement, put = set_labelElement))::UnityEngine::UIElements::Label* labelElement;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field m_CachedInspectorElement, offset 0x3f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CachedInspectorElement, put = __cordl_internal_set_m_CachedInspectorElement))::UnityEngine::UIElements::VisualElement* m_CachedInspectorElement;

  /// @brief Field m_CachedListAndFoldoutDepth, offset 0x400, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CachedListAndFoldoutDepth, put = __cordl_internal_set_m_CachedListAndFoldoutDepth)) int32_t m_CachedListAndFoldoutDepth;

  /// @brief Field m_LabelBaseMinWidth, offset 0x3c8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LabelBaseMinWidth, put = __cordl_internal_set_m_LabelBaseMinWidth)) float_t m_LabelBaseMinWidth;

  /// @brief Field m_LabelExtraPadding, offset 0x3c4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LabelExtraPadding, put = __cordl_internal_set_m_LabelExtraPadding)) float_t m_LabelExtraPadding;

  /// @brief Field m_LabelWidthRatio, offset 0x3c0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LabelWidthRatio, put = __cordl_internal_set_m_LabelWidthRatio)) float_t m_LabelWidthRatio;

  /// @brief Field m_MixedValueLabel, offset 0x3f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MixedValueLabel, put = __cordl_internal_set_m_MixedValueLabel))::UnityEngine::UIElements::Label* m_MixedValueLabel;

  /// @brief Field m_ShowMixedValue, offset 0x3e8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowMixedValue, put = __cordl_internal_set_m_ShowMixedValue)) bool m_ShowMixedValue;

  /// @brief Field m_Value, offset 0x3d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Value, put = __cordl_internal_set_m_Value)) TValueType m_Value;

  /// @brief Field m_VisualInput, offset 0x3d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualInput, put = __cordl_internal_set_m_VisualInput))::UnityEngine::UIElements::VisualElement* m_VisualInput;

  __declspec(property(get = get_mixedValueLabel))::UnityEngine::UIElements::Label* mixedValueLabel;

  /// @brief Field mixedValueLabelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mixedValueLabelUssClassName, put = setStaticF_mixedValueLabelUssClassName))::StringW mixedValueLabelUssClassName;

  /// @brief Field mixedValueString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_mixedValueString, put = setStaticF_mixedValueString))::StringW mixedValueString;

  /// @brief Field noLabelVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_noLabelVariantUssClassName, put = setStaticF_noLabelVariantUssClassName))::StringW noLabelVariantUssClassName;

  __declspec(property(get = get_rawValue, put = set_rawValue)) TValueType rawValue;

  /// @brief Field s_LabelBaseMinWidthProperty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LabelBaseMinWidthProperty,
                             put = setStaticF_s_LabelBaseMinWidthProperty))::UnityEngine::UIElements::CustomStyleProperty_1<float_t> s_LabelBaseMinWidthProperty;

  /// @brief Field s_LabelExtraPaddingProperty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LabelExtraPaddingProperty,
                             put = setStaticF_s_LabelExtraPaddingProperty))::UnityEngine::UIElements::CustomStyleProperty_1<float_t> s_LabelExtraPaddingProperty;

  /// @brief Field s_LabelWidthRatioProperty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LabelWidthRatioProperty,
                             put = setStaticF_s_LabelWidthRatioProperty))::UnityEngine::UIElements::CustomStyleProperty_1<float_t> s_LabelWidthRatioProperty;

  /// @brief Field serializedPropertyCopyName, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_serializedPropertyCopyName, put = setStaticF_serializedPropertyCopyName))::UnityEngine::PropertyName serializedPropertyCopyName;

  __declspec(property(get = get_showMixedValue)) bool showMixedValue;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) TValueType value;

  __declspec(property(get = get_visualInput, put = set_visualInput))::UnityEngine::UIElements::VisualElement* visualInput;

  /// @brief Convert operator to "::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>"
  constexpr operator ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>*() noexcept;

  /// @brief Method AlignLabel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AlignLabel();

  /// @brief Method GetTooltipRect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rect GetTooltipRect();

  static inline ::UnityEngine::UIElements::BaseField_1<TValueType>* New_ctor(::StringW label);

  static inline ::UnityEngine::UIElements::BaseField_1<TValueType>* New_ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput);

  /// @brief Method OnAttachToPanel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent* e);

  /// @brief Method OnCustomStyleResolved, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* evt);

  /// @brief Method OnInspectorFieldGeometryChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnInspectorFieldGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* e);

  /// @brief Method OnViewDataReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method SetValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(TValueType newValue);

  /// @brief Method UpdateMixedValueContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get__labelElement_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& __cordl_internal_get__labelElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CachedInspectorElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_CachedInspectorElement() const;

  constexpr int32_t const& __cordl_internal_get_m_CachedListAndFoldoutDepth() const;

  constexpr int32_t& __cordl_internal_get_m_CachedListAndFoldoutDepth();

  constexpr float_t const& __cordl_internal_get_m_LabelBaseMinWidth() const;

  constexpr float_t& __cordl_internal_get_m_LabelBaseMinWidth();

  constexpr float_t const& __cordl_internal_get_m_LabelExtraPadding() const;

  constexpr float_t& __cordl_internal_get_m_LabelExtraPadding();

  constexpr float_t const& __cordl_internal_get_m_LabelWidthRatio() const;

  constexpr float_t& __cordl_internal_get_m_LabelWidthRatio();

  constexpr ::UnityEngine::UIElements::Label*& __cordl_internal_get_m_MixedValueLabel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Label*> const& __cordl_internal_get_m_MixedValueLabel() const;

  constexpr bool const& __cordl_internal_get_m_ShowMixedValue() const;

  constexpr bool& __cordl_internal_get_m_ShowMixedValue();

  constexpr TValueType const& __cordl_internal_get_m_Value() const;

  constexpr TValueType& __cordl_internal_get_m_Value();

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_VisualInput();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __cordl_internal_get_m_VisualInput() const;

  constexpr void __cordl_internal_set__labelElement_k__BackingField(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_CachedInspectorElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_CachedListAndFoldoutDepth(int32_t value);

  constexpr void __cordl_internal_set_m_LabelBaseMinWidth(float_t value);

  constexpr void __cordl_internal_set_m_LabelExtraPadding(float_t value);

  constexpr void __cordl_internal_set_m_LabelWidthRatio(float_t value);

  constexpr void __cordl_internal_set_m_MixedValueLabel(::UnityEngine::UIElements::Label* value);

  constexpr void __cordl_internal_set_m_ShowMixedValue(bool value);

  constexpr void __cordl_internal_set_m_Value(TValueType value);

  constexpr void __cordl_internal_set_m_VisualInput(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, ::UnityEngine::UIElements::VisualElement* visualInput);

  static inline ::StringW getStaticF_alignedFieldUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_inspectorFieldUssClassName();

  static inline ::StringW getStaticF_labelDraggerVariantUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_mixedValueLabelUssClassName();

  static inline ::StringW getStaticF_mixedValueString();

  static inline ::StringW getStaticF_noLabelVariantUssClassName();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelBaseMinWidthProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelExtraPaddingProperty();

  static inline ::UnityEngine::UIElements::CustomStyleProperty_1<float_t> getStaticF_s_LabelWidthRatioProperty();

  static inline ::UnityEngine::PropertyName getStaticF_serializedPropertyCopyName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_label, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_label();

  /// @brief Method get_labelElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
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

  /// @brief Convert to "::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>"
  constexpr ::UnityEngine::UIElements::INotifyValueChanged_1<TValueType>* i___UnityEngine__UIElements__INotifyValueChanged_1_TValueType_() noexcept;

  static inline void setStaticF_alignedFieldUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_inspectorFieldUssClassName(::StringW value);

  static inline void setStaticF_labelDraggerVariantUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_mixedValueLabelUssClassName(::StringW value);

  static inline void setStaticF_mixedValueString(::StringW value);

  static inline void setStaticF_noLabelVariantUssClassName(::StringW value);

  static inline void setStaticF_s_LabelBaseMinWidthProperty(::UnityEngine::UIElements::CustomStyleProperty_1<float_t> value);

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

  /// @brief Field m_LabelWidthRatio, offset: 0x3c0, size: 0x4, def value: None
  float_t ___m_LabelWidthRatio;

  /// @brief Field m_LabelExtraPadding, offset: 0x3c4, size: 0x4, def value: None
  float_t ___m_LabelExtraPadding;

  /// @brief Field m_LabelBaseMinWidth, offset: 0x3c8, size: 0x4, def value: None
  float_t ___m_LabelBaseMinWidth;

  /// @brief Field m_VisualInput, offset: 0x3d0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_VisualInput;

  /// @brief Field m_Value, offset: 0x3d8, size: 0x8, def value: None
  TValueType ___m_Value;

  /// @brief Field <labelElement>k__BackingField, offset: 0x3e0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ____labelElement_k__BackingField;

  /// @brief Field m_ShowMixedValue, offset: 0x3e8, size: 0x1, def value: None
  bool ___m_ShowMixedValue;

  /// @brief Field m_MixedValueLabel, offset: 0x3f0, size: 0x8, def value: None
  ::UnityEngine::UIElements::Label* ___m_MixedValueLabel;

  /// @brief Field m_CachedInspectorElement, offset: 0x3f8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CachedInspectorElement;

  /// @brief Field m_CachedListAndFoldoutDepth, offset: 0x400, size: 0x4, def value: None
  int32_t ___m_CachedListAndFoldoutDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseField_1, "UnityEngine.UIElements", "BaseField`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__BaseField_1__UxmlTraits, "UnityEngine.UIElements", "BaseField`1/UxmlTraits");
