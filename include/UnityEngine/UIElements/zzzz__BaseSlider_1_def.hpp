#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BaseSlider_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseSlider_1)
namespace UnityEngine::UIElements {
template <typename TValueType> struct BaseSlider_1_SliderKey;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueUxmlAttributeType> class BaseSlider_1_UxmlTraits_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ClampedDragger_1;
}
namespace UnityEngine::UIElements {
struct DeltaSpeed;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusInEvent;
}
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class IValueField_1;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType> struct BaseSlider_1_SliderKey;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class BaseSlider_1;
}
namespace UnityEngine::UIElements {
template <typename TValueType, typename TValueUxmlAttributeType> class BaseSlider_1_UxmlTraits_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::BaseSlider_1_SliderKey);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseSlider_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseSlider_1_UxmlTraits_1);
// Dependencies UnityEngine.UIElements.BaseFieldTraits`2<TValueType, TValueUxmlAttributeType>
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType, typename TValueUxmlAttributeType>
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseSlider`1/UxmlTraits`1<TValueType,TValueUxmlAttributeType>
class CORDL_TYPE BaseSlider_1_UxmlTraits_1 : public ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::BaseSlider_1_UxmlTraits_1<TValueType, TValueUxmlAttributeType>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseSlider_1_UxmlTraits_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1_UxmlTraits_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseSlider_1_UxmlTraits_1(BaseSlider_1_UxmlTraits_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1_UxmlTraits_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseSlider_1_UxmlTraits_1(BaseSlider_1_UxmlTraits_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4115 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: true
// CS Name: UnityEngine.UIElements.BaseSlider`1/SliderKey<TValueType>
struct CORDL_TYPE BaseSlider_1_SliderKey {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BaseSlider_1_SliderKey_Unwrapped
  enum struct __BaseSlider_1_SliderKey_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Lowest = static_cast<int32_t>(0x1),
    __E_LowerPage = static_cast<int32_t>(0x2),
    __E_Lower = static_cast<int32_t>(0x3),
    __E_Higher = static_cast<int32_t>(0x4),
    __E_HigherPage = static_cast<int32_t>(0x5),
    __E_Highest = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BaseSlider_1_SliderKey_Unwrapped() const noexcept {
    return static_cast<__BaseSlider_1_SliderKey_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseSlider_1_SliderKey();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BaseSlider_1_SliderKey(int32_t value__) noexcept;

  /// @brief Field Higher value: I32(4)
  static ::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType> const Higher;

  /// @brief Field HigherPage value: I32(5)
  static ::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType> const HigherPage;

  /// @brief Field Highest value: I32(6)
  static ::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType> const Highest;

  /// @brief Field Lower value: I32(3)
  static ::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType> const Lower;

  /// @brief Field LowerPage value: I32(2)
  static ::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType> const LowerPage;

  /// @brief Field Lowest value: I32(1)
  static ::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType> const Lowest;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType> const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4116 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.Rect, UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.SliderDirection
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// CS Name: UnityEngine.UIElements.BaseSlider`1<TValueType>
class CORDL_TYPE BaseSlider_1 : public ::UnityEngine::UIElements::BaseField_1<TValueType> {
public:
  // Declarations
  using SliderKey = ::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType>;

  template <typename TValueUxmlAttributeType> using UxmlTraits_1 = ::UnityEngine::UIElements::BaseSlider_1_UxmlTraits_1<TValueType, TValueUxmlAttributeType>;

  /// @brief Field <clampedDragger>k__BackingField, offset 0x578, size 0x8
  __declspec(property(get = __cordl_internal_get__clampedDragger_k__BackingField,
                      put = __cordl_internal_set__clampedDragger_k__BackingField)) ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* _clampedDragger_k__BackingField;

  /// @brief Field <clamped>k__BackingField, offset 0x575, size 0x1
  __declspec(property(get = __cordl_internal_get__clamped_k__BackingField, put = __cordl_internal_set__clamped_k__BackingField)) bool _clamped_k__BackingField;

  /// @brief Field <dragBorderElement>k__BackingField, offset 0x540, size 0x8
  __declspec(property(get = __cordl_internal_get__dragBorderElement_k__BackingField,
                      put = __cordl_internal_set__dragBorderElement_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragBorderElement_k__BackingField;

  /// @brief Field <dragContainer>k__BackingField, offset 0x528, size 0x8
  __declspec(property(get = __cordl_internal_get__dragContainer_k__BackingField,
                      put = __cordl_internal_set__dragContainer_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragContainer_k__BackingField;

  /// @brief Field <dragElement>k__BackingField, offset 0x530, size 0x8
  __declspec(property(get = __cordl_internal_get__dragElement_k__BackingField,
                      put = __cordl_internal_set__dragElement_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragElement_k__BackingField;

  /// @brief Field <fillElement>k__BackingField, offset 0x550, size 0x8
  __declspec(property(get = __cordl_internal_get__fillElement_k__BackingField,
                      put = __cordl_internal_set__fillElement_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _fillElement_k__BackingField;

  /// @brief Field <inputTextField>k__BackingField, offset 0x548, size 0x8
  __declspec(property(get = __cordl_internal_get__inputTextField_k__BackingField,
                      put = __cordl_internal_set__inputTextField_k__BackingField)) ::UnityEngine::UIElements::TextField* _inputTextField_k__BackingField;

  /// @brief Field <trackElement>k__BackingField, offset 0x538, size 0x8
  __declspec(property(get = __cordl_internal_get__trackElement_k__BackingField,
                      put = __cordl_internal_set__trackElement_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _trackElement_k__BackingField;

  __declspec(property(get = get_clamped, put = set_clamped)) bool clamped;

  __declspec(property(get = get_clampedDragger, put = set_clampedDragger)) ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* clampedDragger;

  __declspec(property(get = get_direction, put = set_direction)) ::UnityEngine::UIElements::SliderDirection direction;

  /// @brief Field directionProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_directionProperty, put = setStaticF_directionProperty)) ::UnityEngine::UIElements::BindingId directionProperty;

  __declspec(property(get = get_dragBorderElement, put = set_dragBorderElement)) ::UnityEngine::UIElements::VisualElement* dragBorderElement;

  __declspec(property(get = get_dragContainer, put = set_dragContainer)) ::UnityEngine::UIElements::VisualElement* dragContainer;

  /// @brief Field dragContainerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_dragContainerUssClassName, put = setStaticF_dragContainerUssClassName)) ::StringW dragContainerUssClassName;

  __declspec(property(get = get_dragElement, put = set_dragElement)) ::UnityEngine::UIElements::VisualElement* dragElement;

  /// @brief Field draggerBorderUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_draggerBorderUssClassName, put = setStaticF_draggerBorderUssClassName)) ::StringW draggerBorderUssClassName;

  /// @brief Field draggerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_draggerUssClassName, put = setStaticF_draggerUssClassName)) ::StringW draggerUssClassName;

  __declspec(property(get = get_fill, put = set_fill)) bool fill;

  __declspec(property(get = get_fillElement, put = set_fillElement)) ::UnityEngine::UIElements::VisualElement* fillElement;

  /// @brief Field fillProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_fillProperty, put = setStaticF_fillProperty)) ::UnityEngine::UIElements::BindingId fillProperty;

  /// @brief Field fillUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_fillUssClassName, put = setStaticF_fillUssClassName)) ::StringW fillUssClassName;

  __declspec(property(get = get_highValue, put = set_highValue)) TValueType highValue;

  /// @brief Field highValueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_highValueProperty, put = setStaticF_highValueProperty)) ::UnityEngine::UIElements::BindingId highValueProperty;

  /// @brief Field horizontalVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_horizontalVariantUssClassName, put = setStaticF_horizontalVariantUssClassName)) ::StringW horizontalVariantUssClassName;

  __declspec(property(get = get_inputTextField, put = set_inputTextField)) ::UnityEngine::UIElements::TextField* inputTextField;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  __declspec(property(get = get_inverted, put = set_inverted)) bool inverted;

  /// @brief Field invertedProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_invertedProperty, put = setStaticF_invertedProperty)) ::UnityEngine::UIElements::BindingId invertedProperty;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(get = get_lowValue, put = set_lowValue)) TValueType lowValue;

  /// @brief Field lowValueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_lowValueProperty, put = setStaticF_lowValueProperty)) ::UnityEngine::UIElements::BindingId lowValueProperty;

  /// @brief Field m_Direction, offset 0x590, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Direction, put = __cordl_internal_set_m_Direction)) ::UnityEngine::UIElements::SliderDirection m_Direction;

  /// @brief Field m_DragElementStartPos, offset 0x580, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DragElementStartPos, put = __cordl_internal_set_m_DragElementStartPos)) ::UnityEngine::Rect m_DragElementStartPos;

  /// @brief Field m_Fill, offset 0x559, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Fill, put = __cordl_internal_set_m_Fill)) bool m_Fill;

  /// @brief Field m_HighValue, offset 0x568, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighValue, put = __cordl_internal_set_m_HighValue)) TValueType m_HighValue;

  /// @brief Field m_Inverted, offset 0x594, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Inverted, put = __cordl_internal_set_m_Inverted)) bool m_Inverted;

  /// @brief Field m_IsEditingTextField, offset 0x558, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsEditingTextField, put = __cordl_internal_set_m_IsEditingTextField)) bool m_IsEditingTextField;

  /// @brief Field m_LowValue, offset 0x560, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LowValue, put = __cordl_internal_set_m_LowValue)) TValueType m_LowValue;

  /// @brief Field m_PageSize, offset 0x570, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PageSize, put = __cordl_internal_set_m_PageSize)) float_t m_PageSize;

  /// @brief Field m_ShowInputField, offset 0x574, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShowInputField, put = __cordl_internal_set_m_ShowInputField)) bool m_ShowInputField;

  /// @brief Field movableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_movableUssClassName, put = setStaticF_movableUssClassName)) ::StringW movableUssClassName;

  __declspec(property(get = get_pageSize, put = set_pageSize)) float_t pageSize;

  /// @brief Field pageSizeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_pageSizeProperty, put = setStaticF_pageSizeProperty)) ::UnityEngine::UIElements::BindingId pageSizeProperty;

  __declspec(property(get = get_range)) TValueType range;

  /// @brief Field rangeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_rangeProperty, put = setStaticF_rangeProperty)) ::UnityEngine::UIElements::BindingId rangeProperty;

  __declspec(property(get = get_showInputField, put = set_showInputField)) bool showInputField;

  /// @brief Field showInputFieldProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_showInputFieldProperty, put = setStaticF_showInputFieldProperty)) ::UnityEngine::UIElements::BindingId showInputFieldProperty;

  /// @brief Field textFieldClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_textFieldClassName, put = setStaticF_textFieldClassName)) ::StringW textFieldClassName;

  __declspec(property(get = get_trackElement, put = set_trackElement)) ::UnityEngine::UIElements::VisualElement* trackElement;

  /// @brief Field trackerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trackerUssClassName, put = setStaticF_trackerUssClassName)) ::StringW trackerUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) TValueType value;

  /// @brief Field verticalVariantUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_verticalVariantUssClassName, put = setStaticF_verticalVariantUssClassName)) ::StringW verticalVariantUssClassName;

  /// @brief Convert operator to "::UnityEngine::UIElements::IValueField_1<TValueType>"
  constexpr operator ::UnityEngine::UIElements::IValueField_1<TValueType>*() noexcept;

  /// @brief Method AdjustDragElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AdjustDragElement(float_t factor);

  /// @brief Method ApplyInputDeviceDelta, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyInputDeviceDelta(::UnityEngine::Vector3 delta, ::UnityEngine::UIElements::DeltaSpeed speed, TValueType startValue);

  /// @brief Method Clamp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValueType Clamp(TValueType value, TValueType lowBound, TValueType highBound);

  /// @brief Method ClampValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ClampValue();

  /// @brief Method ComputeValueAndDirectionFromClick, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos);

  /// @brief Method ComputeValueAndDirectionFromDrag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ComputeValueAndDirectionFromDrag(float_t sliderLength, float_t dragElementLength, float_t dragElementPos);

  /// @brief Method ComputeValueFromKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ComputeValueFromKey(::UnityEngine::UIElements::BaseSlider_1_SliderKey<TValueType> sliderKey, bool isShift);

  /// @brief Method ExecuteDefaultAction, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method GetClampedValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValueType GetClampedValue(TValueType newValue);

  /// @brief Method GetClosestPowerOfTen, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline float_t GetClosestPowerOfTen(float_t positiveNumber);

  /// @brief Method HandleEventBubbleUp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::BaseSlider_1<TValueType>* New_ctor(::StringW label, TValueType start, TValueType end, ::UnityEngine::UIElements::SliderDirection direction,
                                                                              float_t pageSize);

  /// @brief Method OnFocusIn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnFocusIn(::UnityEngine::UIElements::FocusInEvent* evt);

  /// @brief Method OnFocusOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt);

  /// @brief Method OnKeyDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method OnNavigationMove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent* evt);

  /// @brief Method OnNavigationSubmit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method OnTextFieldFocusIn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnTextFieldFocusIn(::UnityEngine::UIElements::FocusInEvent* evt);

  /// @brief Method OnTextFieldFocusOut, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt);

  /// @brief Method OnTextFieldValueChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt);

  /// @brief Method OnViewDataReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnViewDataReady();

  /// @brief Method ParseStringToValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType ParseStringToValue(::StringW previousValue, ::StringW newValue);

  /// @brief Method RegisterEditingCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterEditingCallbacks();

  /// @brief Method RoundToMultipleOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline float_t RoundToMultipleOf(float_t value, float_t roundingValue);

  /// @brief Method SameValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool SameValues(float_t a, float_t b, float_t epsilon);

  /// @brief Method SetHighValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetHighValueWithoutNotify(TValueType newHighValue);

  /// @brief Method SetSliderValueFromClick, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetSliderValueFromClick();

  /// @brief Method SetSliderValueFromDrag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetSliderValueFromDrag();

  /// @brief Method SetValueWithoutNotify, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(TValueType newValue);

  /// @brief Method SliderLerpDirectionalUnclamped, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValueType SliderLerpDirectionalUnclamped(TValueType a, TValueType b, float_t positionInterpolant);

  /// @brief Method SliderLerpUnclamped, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType SliderLerpUnclamped(TValueType a, TValueType b, float_t interpolant);

  /// @brief Method SliderNormalizeValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t SliderNormalizeValue(TValueType currentValue, TValueType lowerValue, TValueType higherValue);

  /// @brief Method SliderRange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType SliderRange();

  /// @brief Method UnityEngine.UIElements.IValueField<TValueType>.StartDragging, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IValueField_TValueType__StartDragging();

  /// @brief Method UnityEngine.UIElements.IValueField<TValueType>.StopDragging, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void UnityEngine_UIElements_IValueField_TValueType__StopDragging();

  /// @brief Method UnregisterEditingCallbacks, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterEditingCallbacks();

  /// @brief Method UpdateDragElementPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateDragElementPosition();

  /// @brief Method UpdateDragElementPosition, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method UpdateFill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateFill(float_t normalizedValue);

  /// @brief Method UpdateMixedValueContent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  /// @brief Method UpdateTextFieldValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateTextFieldValue();

  /// @brief Method UpdateTextFieldVisibility, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateTextFieldVisibility();

  constexpr ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* const& __cordl_internal_get__clampedDragger_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ClampedDragger_1<TValueType>*& __cordl_internal_get__clampedDragger_k__BackingField();

  constexpr bool const& __cordl_internal_get__clamped_k__BackingField() const;

  constexpr bool& __cordl_internal_get__clamped_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__dragBorderElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__dragBorderElement_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__dragContainer_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__dragContainer_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__dragElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__dragElement_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__fillElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__fillElement_k__BackingField();

  constexpr ::UnityEngine::UIElements::TextField* const& __cordl_internal_get__inputTextField_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::TextField*& __cordl_internal_get__inputTextField_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__trackElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__trackElement_k__BackingField();

  constexpr ::UnityEngine::UIElements::SliderDirection const& __cordl_internal_get_m_Direction() const;

  constexpr ::UnityEngine::UIElements::SliderDirection& __cordl_internal_get_m_Direction();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_DragElementStartPos() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_DragElementStartPos();

  constexpr bool const& __cordl_internal_get_m_Fill() const;

  constexpr bool& __cordl_internal_get_m_Fill();

  constexpr TValueType const& __cordl_internal_get_m_HighValue() const;

  constexpr TValueType& __cordl_internal_get_m_HighValue();

  constexpr bool const& __cordl_internal_get_m_Inverted() const;

  constexpr bool& __cordl_internal_get_m_Inverted();

  constexpr bool const& __cordl_internal_get_m_IsEditingTextField() const;

  constexpr bool& __cordl_internal_get_m_IsEditingTextField();

  constexpr TValueType const& __cordl_internal_get_m_LowValue() const;

  constexpr TValueType& __cordl_internal_get_m_LowValue();

  constexpr float_t const& __cordl_internal_get_m_PageSize() const;

  constexpr float_t& __cordl_internal_get_m_PageSize();

  constexpr bool const& __cordl_internal_get_m_ShowInputField() const;

  constexpr bool& __cordl_internal_get_m_ShowInputField();

  constexpr void __cordl_internal_set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<TValueType>* value);

  constexpr void __cordl_internal_set__clamped_k__BackingField(bool value);

  constexpr void __cordl_internal_set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__fillElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField* value);

  constexpr void __cordl_internal_set__trackElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Direction(::UnityEngine::UIElements::SliderDirection value);

  constexpr void __cordl_internal_set_m_DragElementStartPos(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_Fill(bool value);

  constexpr void __cordl_internal_set_m_HighValue(TValueType value);

  constexpr void __cordl_internal_set_m_Inverted(bool value);

  constexpr void __cordl_internal_set_m_IsEditingTextField(bool value);

  constexpr void __cordl_internal_set_m_LowValue(TValueType value);

  constexpr void __cordl_internal_set_m_PageSize(float_t value);

  constexpr void __cordl_internal_set_m_ShowInputField(bool value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, TValueType start, TValueType end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  static inline ::UnityEngine::UIElements::BindingId getStaticF_directionProperty();

  static inline ::StringW getStaticF_dragContainerUssClassName();

  static inline ::StringW getStaticF_draggerBorderUssClassName();

  static inline ::StringW getStaticF_draggerUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_fillProperty();

  static inline ::StringW getStaticF_fillUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_highValueProperty();

  static inline ::StringW getStaticF_horizontalVariantUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_invertedProperty();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_lowValueProperty();

  static inline ::StringW getStaticF_movableUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_pageSizeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_rangeProperty();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_showInputFieldProperty();

  static inline ::StringW getStaticF_textFieldClassName();

  static inline ::StringW getStaticF_trackerUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  static inline ::StringW getStaticF_verticalVariantUssClassName();

  /// @brief Method get_clamped, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_clamped();

  /// @brief Method get_clampedDragger, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* get_clampedDragger();

  /// @brief Method get_direction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::SliderDirection get_direction();

  /// @brief Method get_dragBorderElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragBorderElement();

  /// @brief Method get_dragContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragContainer();

  /// @brief Method get_dragElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragElement();

  /// @brief Method get_fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_fill();

  /// @brief Method get_fillElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_fillElement();

  /// @brief Method get_highValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValueType get_highValue();

  /// @brief Method get_inputTextField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextField* get_inputTextField();

  /// @brief Method get_inverted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_inverted();

  /// @brief Method get_lowValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValueType get_lowValue();

  /// @brief Method get_pageSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_pageSize();

  /// @brief Method get_range, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValueType get_range();

  /// @brief Method get_showInputField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_showInputField();

  /// @brief Method get_trackElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_trackElement();

  /// @brief Method get_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValueType get_value();

  /// @brief Convert to "::UnityEngine::UIElements::IValueField_1<TValueType>"
  constexpr ::UnityEngine::UIElements::IValueField_1<TValueType>* i___UnityEngine__UIElements__IValueField_1_TValueType_() noexcept;

  static inline void setStaticF_directionProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_dragContainerUssClassName(::StringW value);

  static inline void setStaticF_draggerBorderUssClassName(::StringW value);

  static inline void setStaticF_draggerUssClassName(::StringW value);

  static inline void setStaticF_fillProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_fillUssClassName(::StringW value);

  static inline void setStaticF_highValueProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_horizontalVariantUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_invertedProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_lowValueProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_movableUssClassName(::StringW value);

  static inline void setStaticF_pageSizeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_rangeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_showInputFieldProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_textFieldClassName(::StringW value);

  static inline void setStaticF_trackerUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline void setStaticF_verticalVariantUssClassName(::StringW value);

  /// @brief Method set_clamped, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_clamped(bool value);

  /// @brief Method set_clampedDragger, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<TValueType>* value);

  /// @brief Method set_direction, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_direction(::UnityEngine::UIElements::SliderDirection value);

  /// @brief Method set_dragBorderElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_dragBorderElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_dragContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_dragContainer(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_dragElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_dragElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_fill, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_fill(bool value);

  /// @brief Method set_fillElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_fillElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_highValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_highValue(TValueType value);

  /// @brief Method set_inputTextField, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_inputTextField(::UnityEngine::UIElements::TextField* value);

  /// @brief Method set_inverted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_inverted(bool value);

  /// @brief Method set_lowValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_lowValue(TValueType value);

  /// @brief Method set_pageSize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_pageSize(float_t value);

  /// @brief Method set_showInputField, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_showInputField(bool value);

  /// @brief Method set_trackElement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_trackElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_value(TValueType value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseSlider_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseSlider_1(BaseSlider_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseSlider_1(BaseSlider_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4117 };

  /// @brief Field <dragContainer>k__BackingField, offset: 0x528, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragContainer_k__BackingField;

  /// @brief Field <dragElement>k__BackingField, offset: 0x530, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragElement_k__BackingField;

  /// @brief Field <trackElement>k__BackingField, offset: 0x538, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____trackElement_k__BackingField;

  /// @brief Field <dragBorderElement>k__BackingField, offset: 0x540, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragBorderElement_k__BackingField;

  /// @brief Field <inputTextField>k__BackingField, offset: 0x548, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextField* ____inputTextField_k__BackingField;

  /// @brief Field <fillElement>k__BackingField, offset: 0x550, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____fillElement_k__BackingField;

  /// @brief Field m_IsEditingTextField, offset: 0x558, size: 0x1, def value: None
  bool ___m_IsEditingTextField;

  /// @brief Field m_Fill, offset: 0x559, size: 0x1, def value: None
  bool ___m_Fill;

  /// @brief Field m_LowValue, offset: 0x560, size: 0x8, def value: None
  TValueType ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x568, size: 0x8, def value: None
  TValueType ___m_HighValue;

  /// @brief Field m_PageSize, offset: 0x570, size: 0x4, def value: None
  float_t ___m_PageSize;

  /// @brief Field m_ShowInputField, offset: 0x574, size: 0x1, def value: None
  bool ___m_ShowInputField;

  /// @brief Field <clamped>k__BackingField, offset: 0x575, size: 0x1, def value: None
  bool ____clamped_k__BackingField;

  /// @brief Field <clampedDragger>k__BackingField, offset: 0x578, size: 0x8, def value: None
  ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* ____clampedDragger_k__BackingField;

  /// @brief Field m_DragElementStartPos, offset: 0x580, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_DragElementStartPos;

  /// @brief Field m_Direction, offset: 0x590, size: 0x4, def value: None
  ::UnityEngine::UIElements::SliderDirection ___m_Direction;

  /// @brief Field m_Inverted, offset: 0x594, size: 0x1, def value: None
  bool ___m_Inverted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::BaseSlider_1_SliderKey, "UnityEngine.UIElements", "BaseSlider`1/SliderKey");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseSlider_1, "UnityEngine.UIElements", "BaseSlider`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseSlider_1_UxmlTraits_1, "UnityEngine.UIElements", "BaseSlider`1/UxmlTraits`1");
