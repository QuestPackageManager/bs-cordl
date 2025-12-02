#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MinMaxSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MinMaxSlider)
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
template <typename T> class ClampedDragger_1;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusInEvent;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
struct MinMaxSlider_DragState;
}
namespace UnityEngine::UIElements {
class MinMaxSlider_UxmlFactory;
}
namespace UnityEngine::UIElements {
class MinMaxSlider_UxmlTraits;
}
namespace UnityEngine::UIElements {
class NavigationMoveEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct MinMaxSlider_DragState;
}
namespace UnityEngine::UIElements {
class MinMaxSlider;
}
namespace UnityEngine::UIElements {
class MinMaxSlider_UxmlFactory;
}
namespace UnityEngine::UIElements {
class MinMaxSlider_UxmlTraits;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::MinMaxSlider_DragState);
MARK_REF_PTR_T(::UnityEngine::UIElements::MinMaxSlider);
MARK_REF_PTR_T(::UnityEngine::UIElements::MinMaxSlider_UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits);
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MinMaxSlider/UxmlFactory
class CORDL_TYPE MinMaxSlider_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::MinMaxSlider*, ::UnityEngine::UIElements::MinMaxSlider_UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::MinMaxSlider_UxmlFactory* New_ctor();

  /// @brief Method .ctor, addr 0x6b1f270, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MinMaxSlider_UxmlFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider_UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MinMaxSlider_UxmlFactory(MinMaxSlider_UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider_UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MinMaxSlider_UxmlFactory(MinMaxSlider_UxmlFactory const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4246 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MinMaxSlider_UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1::UxmlTraits<TValueType>, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MinMaxSlider/UxmlTraits
class CORDL_TYPE MinMaxSlider_UxmlTraits : public ::UnityEngine::UIElements::BaseField_1_UxmlTraits<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field m_HighLimit, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighLimit, put = __cordl_internal_set_m_HighLimit)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighLimit;

  /// @brief Field m_LowLimit, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LowLimit, put = __cordl_internal_set_m_LowLimit)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowLimit;

  /// @brief Field m_MaxValue, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxValue, put = __cordl_internal_set_m_MaxValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_MaxValue;

  /// @brief Field m_MinValue, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MinValue, put = __cordl_internal_set_m_MinValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_MinValue;

  /// @brief Method Init, addr 0x6b1f488, size 0x208, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::MinMaxSlider_UxmlTraits* New_ctor();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_HighLimit() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_HighLimit();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_LowLimit() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_LowLimit();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_MaxValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_MaxValue();

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_MinValue() const;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_MinValue();

  constexpr void __cordl_internal_set_m_HighLimit(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_LowLimit(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_MaxValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr void __cordl_internal_set_m_MinValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method .ctor, addr 0x6b1f2d8, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MinMaxSlider_UxmlTraits();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider_UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MinMaxSlider_UxmlTraits(MinMaxSlider_UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider_UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MinMaxSlider_UxmlTraits(MinMaxSlider_UxmlTraits const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4247 };

  /// @brief Field m_MinValue, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_MinValue;

  /// @brief Field m_MaxValue, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_MaxValue;

  /// @brief Field m_LowLimit, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_LowLimit;

  /// @brief Field m_HighLimit, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HighLimit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, ___m_MinValue) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, ___m_MaxValue) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, ___m_LowLimit) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, ___m_HighLimit) == 0xb0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.MinMaxSlider/DragState
struct CORDL_TYPE MinMaxSlider_DragState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MinMaxSlider_DragState_Unwrapped
  enum struct __MinMaxSlider_DragState_Unwrapped : int32_t {
    __E_MinThumb = static_cast<int32_t>(0x0),
    __E_MaxThumb = static_cast<int32_t>(0x1),
    __E_MiddleThumb = static_cast<int32_t>(0x2),
    __E_NoThumb = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MinMaxSlider_DragState_Unwrapped() const noexcept {
    return static_cast<__MinMaxSlider_DragState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MinMaxSlider_DragState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MinMaxSlider_DragState(int32_t value__) noexcept;

  /// @brief Field MaxThumb value: I32(1)
  static ::UnityEngine::UIElements::MinMaxSlider_DragState const MaxThumb;

  /// @brief Field MiddleThumb value: I32(2)
  static ::UnityEngine::UIElements::MinMaxSlider_DragState const MiddleThumb;

  /// @brief Field MinThumb value: I32(0)
  static ::UnityEngine::UIElements::MinMaxSlider_DragState const MinThumb;

  /// @brief Field NoThumb value: I32(3)
  static ::UnityEngine::UIElements::MinMaxSlider_DragState const NoThumb;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4248 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_DragState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MinMaxSlider_DragState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.BindingId, UnityEngine.UIElements.MinMaxSlider::DragState, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MinMaxSlider
class CORDL_TYPE MinMaxSlider : public ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Vector2> {
public:
  // Declarations
  using DragState = ::UnityEngine::UIElements::MinMaxSlider_DragState;

  using UxmlFactory = ::UnityEngine::UIElements::MinMaxSlider_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::MinMaxSlider_UxmlTraits;

  /// @brief Field <clampedDragger>k__BackingField, offset 0x540, size 0x8
  __declspec(property(get = __cordl_internal_get__clampedDragger_k__BackingField,
                      put = __cordl_internal_set__clampedDragger_k__BackingField)) ::UnityEngine::UIElements::ClampedDragger_1<float_t>* _clampedDragger_k__BackingField;

  /// @brief Field <dragElement>k__BackingField, offset 0x528, size 0x8
  __declspec(property(get = __cordl_internal_get__dragElement_k__BackingField,
                      put = __cordl_internal_set__dragElement_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragElement_k__BackingField;

  /// @brief Field <dragMaxThumb>k__BackingField, offset 0x538, size 0x8
  __declspec(property(get = __cordl_internal_get__dragMaxThumb_k__BackingField,
                      put = __cordl_internal_set__dragMaxThumb_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragMaxThumb_k__BackingField;

  /// @brief Field <dragMinThumb>k__BackingField, offset 0x530, size 0x8
  __declspec(property(get = __cordl_internal_get__dragMinThumb_k__BackingField,
                      put = __cordl_internal_set__dragMinThumb_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragMinThumb_k__BackingField;

  __declspec(property(get = get_clampedDragger, put = set_clampedDragger)) ::UnityEngine::UIElements::ClampedDragger_1<float_t>* clampedDragger;

  __declspec(property(get = get_dragElement, put = set_dragElement)) ::UnityEngine::UIElements::VisualElement* dragElement;

  __declspec(property(get = get_dragMaxThumb, put = set_dragMaxThumb)) ::UnityEngine::UIElements::VisualElement* dragMaxThumb;

  __declspec(property(get = get_dragMinThumb, put = set_dragMinThumb)) ::UnityEngine::UIElements::VisualElement* dragMinThumb;

  /// @brief Field draggerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_draggerUssClassName, put = setStaticF_draggerUssClassName)) ::StringW draggerUssClassName;

  __declspec(property(get = get_highLimit, put = set_highLimit)) float_t highLimit;

  /// @brief Field highLimitProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_highLimitProperty, put = setStaticF_highLimitProperty)) ::UnityEngine::UIElements::BindingId highLimitProperty;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(get = get_lowLimit, put = set_lowLimit)) float_t lowLimit;

  /// @brief Field lowLimitProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_lowLimitProperty, put = setStaticF_lowLimitProperty)) ::UnityEngine::UIElements::BindingId lowLimitProperty;

  /// @brief Field m_DragElementStartPos, offset 0x548, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragElementStartPos, put = __cordl_internal_set_m_DragElementStartPos)) ::UnityEngine::Vector2 m_DragElementStartPos;

  /// @brief Field m_DragState, offset 0x558, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragState, put = __cordl_internal_set_m_DragState)) ::UnityEngine::UIElements::MinMaxSlider_DragState m_DragState;

  /// @brief Field m_MaxLimit, offset 0x560, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxLimit, put = __cordl_internal_set_m_MaxLimit)) float_t m_MaxLimit;

  /// @brief Field m_MinLimit, offset 0x55c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinLimit, put = __cordl_internal_set_m_MinLimit)) float_t m_MinLimit;

  /// @brief Field m_ValueStartPos, offset 0x550, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueStartPos, put = __cordl_internal_set_m_ValueStartPos)) ::UnityEngine::Vector2 m_ValueStartPos;

  /// @brief Field maxThumbUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_maxThumbUssClassName, put = setStaticF_maxThumbUssClassName)) ::StringW maxThumbUssClassName;

  __declspec(property(get = get_maxValue, put = set_maxValue)) float_t maxValue;

  /// @brief Field maxValueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_maxValueProperty, put = setStaticF_maxValueProperty)) ::UnityEngine::UIElements::BindingId maxValueProperty;

  /// @brief Field minThumbUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_minThumbUssClassName, put = setStaticF_minThumbUssClassName)) ::StringW minThumbUssClassName;

  __declspec(property(get = get_minValue, put = set_minValue)) float_t minValue;

  /// @brief Field minValueProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_minValueProperty, put = setStaticF_minValueProperty)) ::UnityEngine::UIElements::BindingId minValueProperty;

  /// @brief Field movableUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_movableUssClassName, put = setStaticF_movableUssClassName)) ::StringW movableUssClassName;

  __declspec(property(get = get_range)) float_t range;

  /// @brief Field rangeProperty, offset 0xffffffff, size 0x98
  __declspec(property(get = getStaticF_rangeProperty, put = setStaticF_rangeProperty)) ::UnityEngine::UIElements::BindingId rangeProperty;

  /// @brief Field trackerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trackerUssClassName, put = setStaticF_trackerUssClassName)) ::StringW trackerUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::Vector2 value;

  /// @brief Method ClampValues, addr 0x6b1c2c8, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ClampValues(::UnityEngine::Vector2 valueToClamp);

  /// @brief Method ComputeValueFromDraggingThumb, addr 0x6b1e718, size 0x1a0, virtual false, abstract: false, final false
  inline void ComputeValueFromDraggingThumb(float_t dragElementStartPos, float_t dragElementEndPos);

  /// @brief Method ComputeValueFromKey, addr 0x6b1e124, size 0x564, virtual false, abstract: false, final false
  inline void ComputeValueFromKey(bool leftDirection, bool isShift, ::UnityEngine::UIElements::MinMaxSlider_DragState moveState);

  /// @brief Method ComputeValueFromPosition, addr 0x6b1dc8c, size 0x78, virtual false, abstract: false, final false
  inline float_t ComputeValueFromPosition(float_t positionToConvert);

  /// @brief Method GetNavigationState, addr 0x6b1de34, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MinMaxSlider_DragState GetNavigationState();

  /// @brief Method HandleEventBubbleUp, addr 0x6b1dd04, size 0x130, virtual true, abstract: false, final false
  inline void HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::MinMaxSlider* New_ctor();

  static inline ::UnityEngine::UIElements::MinMaxSlider* New_ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit);

  /// @brief Method OnBlur, addr 0x6b1e02c, size 0x8, virtual false, abstract: false, final false
  inline void OnBlur(::UnityEngine::UIElements::BlurEvent* evt);

  /// @brief Method OnFocusIn, addr 0x6b1e000, size 0x2c, virtual false, abstract: false, final false
  inline void OnFocusIn(::UnityEngine::UIElements::FocusInEvent* evt);

  /// @brief Method OnNavigationMove, addr 0x6b1e058, size 0xcc, virtual false, abstract: false, final false
  inline void OnNavigationMove(::UnityEngine::UIElements::NavigationMoveEvent* evt);

  /// @brief Method OnNavigationSubmit, addr 0x6b1e034, size 0x24, virtual false, abstract: false, final false
  inline void OnNavigationSubmit(::UnityEngine::UIElements::NavigationSubmitEvent* evt);

  /// @brief Method RegisterEditingCallbacks, addr 0x6b1eb28, size 0x140, virtual true, abstract: false, final false
  inline void RegisterEditingCallbacks();

  /// @brief Method SetNavigationState, addr 0x6b1deec, size 0x114, virtual false, abstract: false, final false
  inline void SetNavigationState(::UnityEngine::UIElements::MinMaxSlider_DragState newState);

  /// @brief Method SetSliderValueFromClick, addr 0x6b1e8b8, size 0x26c, virtual false, abstract: false, final false
  inline void SetSliderValueFromClick();

  /// @brief Method SetSliderValueFromDrag, addr 0x6b1e688, size 0x90, virtual false, abstract: false, final false
  inline void SetSliderValueFromDrag();

  /// @brief Method SetValueWithoutNotify, addr 0x6b1c58c, size 0x98, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::UnityEngine::Vector2 newValue);

  /// @brief Method SliderLerpUnclamped, addr 0x6b1dc7c, size 0x10, virtual false, abstract: false, final false
  inline float_t SliderLerpUnclamped(float_t a, float_t b, float_t interpolant);

  /// @brief Method SliderNormalizeValue, addr 0x6b1dc6c, size 0x10, virtual false, abstract: false, final false
  inline float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue);

  /// @brief Method UnregisterEditingCallbacks, addr 0x6b1ec68, size 0x140, virtual true, abstract: false, final false
  inline void UnregisterEditingCallbacks();

  /// @brief Method UpdateDragElementPosition, addr 0x6b1c624, size 0xa24, virtual false, abstract: false, final false
  inline void UpdateDragElementPosition();

  /// @brief Method UpdateDragElementPosition, addr 0x6b1dc34, size 0x38, virtual false, abstract: false, final false
  inline void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method UpdateMixedValueContent, addr 0x6b1eb24, size 0x4, virtual true, abstract: false, final false
  inline void UpdateMixedValueContent();

  constexpr ::UnityEngine::UIElements::ClampedDragger_1<float_t>* const& __cordl_internal_get__clampedDragger_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ClampedDragger_1<float_t>*& __cordl_internal_get__clampedDragger_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__dragElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__dragElement_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__dragMaxThumb_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__dragMaxThumb_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__dragMinThumb_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__dragMinThumb_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_DragElementStartPos() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_DragElementStartPos();

  constexpr ::UnityEngine::UIElements::MinMaxSlider_DragState const& __cordl_internal_get_m_DragState() const;

  constexpr ::UnityEngine::UIElements::MinMaxSlider_DragState& __cordl_internal_get_m_DragState();

  constexpr float_t const& __cordl_internal_get_m_MaxLimit() const;

  constexpr float_t& __cordl_internal_get_m_MaxLimit();

  constexpr float_t const& __cordl_internal_get_m_MinLimit() const;

  constexpr float_t& __cordl_internal_get_m_MinLimit();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ValueStartPos() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ValueStartPos();

  constexpr void __cordl_internal_set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<float_t>* value);

  constexpr void __cordl_internal_set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__dragMaxThumb_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__dragMinThumb_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragElementStartPos(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_DragState(::UnityEngine::UIElements::MinMaxSlider_DragState value);

  constexpr void __cordl_internal_set_m_MaxLimit(float_t value);

  constexpr void __cordl_internal_set_m_MinLimit(float_t value);

  constexpr void __cordl_internal_set_m_ValueStartPos(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x6b1d408, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6b1d428, size 0x80c, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit);

  static inline ::StringW getStaticF_draggerUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_highLimitProperty();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_lowLimitProperty();

  static inline ::StringW getStaticF_maxThumbUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_maxValueProperty();

  static inline ::StringW getStaticF_minThumbUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_minValueProperty();

  static inline ::StringW getStaticF_movableUssClassName();

  static inline ::UnityEngine::UIElements::BindingId getStaticF_rangeProperty();

  static inline ::StringW getStaticF_trackerUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_clampedDragger, addr 0x6b1c118, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ClampedDragger_1<float_t>* get_clampedDragger();

  /// @brief Method get_dragElement, addr 0x6b1c0e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragElement();

  /// @brief Method get_dragMaxThumb, addr 0x6b1c108, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragMaxThumb();

  /// @brief Method get_dragMinThumb, addr 0x6b1c0f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragMinThumb();

  /// @brief Method get_highLimit, addr 0x6b1d0b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_highLimit();

  /// @brief Method get_lowLimit, addr 0x6b1d0b8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lowLimit();

  /// @brief Method get_maxValue, addr 0x6b1c300, size 0x20, virtual false, abstract: false, final false
  inline float_t get_maxValue();

  /// @brief Method get_minValue, addr 0x6b1c128, size 0x10, virtual false, abstract: false, final false
  inline float_t get_minValue();

  /// @brief Method get_range, addr 0x6b1d048, size 0x68, virtual false, abstract: false, final false
  inline float_t get_range();

  /// @brief Method get_value, addr 0x6b1c4b4, size 0x48, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_value();

  static inline void setStaticF_draggerUssClassName(::StringW value);

  static inline void setStaticF_highLimitProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_lowLimitProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_maxThumbUssClassName(::StringW value);

  static inline void setStaticF_maxValueProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_minThumbUssClassName(::StringW value);

  static inline void setStaticF_minValueProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_movableUssClassName(::StringW value);

  static inline void setStaticF_rangeProperty(::UnityEngine::UIElements::BindingId value);

  static inline void setStaticF_trackerUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_clampedDragger, addr 0x6b1c120, size 0x8, virtual false, abstract: false, final false
  inline void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<float_t>* value);

  /// @brief Method set_dragElement, addr 0x6b1c0f0, size 0x8, virtual false, abstract: false, final false
  inline void set_dragElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_dragMaxThumb, addr 0x6b1c110, size 0x8, virtual false, abstract: false, final false
  inline void set_dragMaxThumb(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_dragMinThumb, addr 0x6b1c100, size 0x8, virtual false, abstract: false, final false
  inline void set_dragMinThumb(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_highLimit, addr 0x6b1d264, size 0x1a4, virtual false, abstract: false, final false
  inline void set_highLimit(float_t value);

  /// @brief Method set_lowLimit, addr 0x6b1d0c0, size 0x1a4, virtual false, abstract: false, final false
  inline void set_lowLimit(float_t value);

  /// @brief Method set_maxValue, addr 0x6b1c320, size 0x194, virtual false, abstract: false, final false
  inline void set_maxValue(float_t value);

  /// @brief Method set_minValue, addr 0x6b1c138, size 0x190, virtual false, abstract: false, final false
  inline void set_minValue(float_t value);

  /// @brief Method set_value, addr 0x6b1c4fc, size 0x90, virtual true, abstract: false, final false
  inline void set_value(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MinMaxSlider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MinMaxSlider(MinMaxSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MinMaxSlider(MinMaxSlider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4249 };

  /// @brief Field <dragElement>k__BackingField, offset: 0x528, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragElement_k__BackingField;

  /// @brief Field <dragMinThumb>k__BackingField, offset: 0x530, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragMinThumb_k__BackingField;

  /// @brief Field <dragMaxThumb>k__BackingField, offset: 0x538, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragMaxThumb_k__BackingField;

  /// @brief Field <clampedDragger>k__BackingField, offset: 0x540, size: 0x8, def value: None
  ::UnityEngine::UIElements::ClampedDragger_1<float_t>* ____clampedDragger_k__BackingField;

  /// @brief Field m_DragElementStartPos, offset: 0x548, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_DragElementStartPos;

  /// @brief Field m_ValueStartPos, offset: 0x550, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ValueStartPos;

  /// @brief Field m_DragState, offset: 0x558, size: 0x4, def value: None
  ::UnityEngine::UIElements::MinMaxSlider_DragState ___m_DragState;

  /// @brief Field m_MinLimit, offset: 0x55c, size: 0x4, def value: None
  float_t ___m_MinLimit;

  /// @brief Field m_MaxLimit, offset: 0x560, size: 0x4, def value: None
  float_t ___m_MaxLimit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ____dragElement_k__BackingField) == 0x528, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ____dragMinThumb_k__BackingField) == 0x530, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ____dragMaxThumb_k__BackingField) == 0x538, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ____clampedDragger_k__BackingField) == 0x540, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_DragElementStartPos) == 0x548, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_ValueStartPos) == 0x550, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_DragState) == 0x558, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_MinLimit) == 0x55c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_MaxLimit) == 0x560, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MinMaxSlider, 0x568>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider_DragState, "UnityEngine.UIElements", "MinMaxSlider/DragState");
NEED_NO_BOX(::UnityEngine::UIElements::MinMaxSlider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider*, "UnityEngine.UIElements", "MinMaxSlider");
NEED_NO_BOX(::UnityEngine::UIElements::MinMaxSlider_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider_UxmlFactory*, "UnityEngine.UIElements", "MinMaxSlider/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits*, "UnityEngine.UIElements", "MinMaxSlider/UxmlTraits");
