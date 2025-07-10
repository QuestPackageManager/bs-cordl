#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MinMaxSlider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MinMaxSlider)
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

  /// @brief Method .ctor, addr 0x49f62f0, size 0x48, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5633 };

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
  /// @brief Field m_HighLimit, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HighLimit, put = __cordl_internal_set_m_HighLimit)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighLimit;

  /// @brief Field m_LowLimit, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LowLimit, put = __cordl_internal_set_m_LowLimit)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowLimit;

  /// @brief Field m_MaxValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxValue, put = __cordl_internal_set_m_MaxValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_MaxValue;

  /// @brief Field m_MinValue, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MinValue, put = __cordl_internal_set_m_MinValue)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_MinValue;

  /// @brief Method Init, addr 0x49f64c0, size 0x1d4, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x49f6338, size 0x188, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5634 };

  /// @brief Field m_MinValue, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_MinValue;

  /// @brief Field m_MaxValue, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_MaxValue;

  /// @brief Field m_LowLimit, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_LowLimit;

  /// @brief Field m_HighLimit, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UxmlFloatAttributeDescription* ___m_HighLimit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, ___m_MinValue) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, ___m_MaxValue) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, ___m_LowLimit) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, ___m_HighLimit) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MinMaxSlider_UxmlTraits, 0xa0>, "Size mismatch!");

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
    __E_NoThumb = static_cast<int32_t>(0x0),
    __E_MinThumb = static_cast<int32_t>(0x1),
    __E_MiddleThumb = static_cast<int32_t>(0x2),
    __E_MaxThumb = static_cast<int32_t>(0x3),
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

  /// @brief Field MaxThumb value: I32(3)
  static ::UnityEngine::UIElements::MinMaxSlider_DragState const MaxThumb;

  /// @brief Field MiddleThumb value: I32(2)
  static ::UnityEngine::UIElements::MinMaxSlider_DragState const MiddleThumb;

  /// @brief Field MinThumb value: I32(1)
  static ::UnityEngine::UIElements::MinMaxSlider_DragState const MinThumb;

  /// @brief Field NoThumb value: I32(0)
  static ::UnityEngine::UIElements::MinMaxSlider_DragState const NoThumb;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5635 };

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
// Dependencies UnityEngine.Rect, UnityEngine.UIElements.BaseField`1<TValueType>, UnityEngine.UIElements.MinMaxSlider::DragState, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MinMaxSlider
class CORDL_TYPE MinMaxSlider : public ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Vector2> {
public:
  // Declarations
  using DragState = ::UnityEngine::UIElements::MinMaxSlider_DragState;

  using UxmlFactory = ::UnityEngine::UIElements::MinMaxSlider_UxmlFactory;

  using UxmlTraits = ::UnityEngine::UIElements::MinMaxSlider_UxmlTraits;

  /// @brief Field <clampedDragger>k__BackingField, offset 0x458, size 0x8
  __declspec(property(get = __cordl_internal_get__clampedDragger_k__BackingField,
                      put = __cordl_internal_set__clampedDragger_k__BackingField)) ::UnityEngine::UIElements::ClampedDragger_1<float_t>* _clampedDragger_k__BackingField;

  /// @brief Field <dragElement>k__BackingField, offset 0x440, size 0x8
  __declspec(property(get = __cordl_internal_get__dragElement_k__BackingField,
                      put = __cordl_internal_set__dragElement_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragElement_k__BackingField;

  /// @brief Field <dragMaxThumb>k__BackingField, offset 0x450, size 0x8
  __declspec(property(get = __cordl_internal_get__dragMaxThumb_k__BackingField,
                      put = __cordl_internal_set__dragMaxThumb_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragMaxThumb_k__BackingField;

  /// @brief Field <dragMinThumb>k__BackingField, offset 0x448, size 0x8
  __declspec(property(get = __cordl_internal_get__dragMinThumb_k__BackingField,
                      put = __cordl_internal_set__dragMinThumb_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _dragMinThumb_k__BackingField;

  __declspec(property(get = get_clampedDragger, put = set_clampedDragger)) ::UnityEngine::UIElements::ClampedDragger_1<float_t>* clampedDragger;

  __declspec(property(get = get_dragElement, put = set_dragElement)) ::UnityEngine::UIElements::VisualElement* dragElement;

  __declspec(property(get = get_dragMaxThumb, put = set_dragMaxThumb)) ::UnityEngine::UIElements::VisualElement* dragMaxThumb;

  __declspec(property(get = get_dragMinThumb, put = set_dragMinThumb)) ::UnityEngine::UIElements::VisualElement* dragMinThumb;

  /// @brief Field draggerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_draggerUssClassName, put = setStaticF_draggerUssClassName)) ::StringW draggerUssClassName;

  __declspec(property(get = get_highLimit, put = set_highLimit)) float_t highLimit;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName)) ::StringW inputUssClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName)) ::StringW labelUssClassName;

  __declspec(property(get = get_lowLimit, put = set_lowLimit)) float_t lowLimit;

  /// @brief Field m_DragElementStartPos, offset 0x460, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragElementStartPos, put = __cordl_internal_set_m_DragElementStartPos)) ::UnityEngine::Vector2 m_DragElementStartPos;

  /// @brief Field m_DragMaxThumbRect, offset 0x480, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DragMaxThumbRect, put = __cordl_internal_set_m_DragMaxThumbRect)) ::UnityEngine::Rect m_DragMaxThumbRect;

  /// @brief Field m_DragMinThumbRect, offset 0x470, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DragMinThumbRect, put = __cordl_internal_set_m_DragMinThumbRect)) ::UnityEngine::Rect m_DragMinThumbRect;

  /// @brief Field m_DragState, offset 0x490, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DragState, put = __cordl_internal_set_m_DragState)) ::UnityEngine::UIElements::MinMaxSlider_DragState m_DragState;

  /// @brief Field m_MaxLimit, offset 0x498, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxLimit, put = __cordl_internal_set_m_MaxLimit)) float_t m_MaxLimit;

  /// @brief Field m_MinLimit, offset 0x494, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinLimit, put = __cordl_internal_set_m_MinLimit)) float_t m_MinLimit;

  /// @brief Field m_ValueStartPos, offset 0x468, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ValueStartPos, put = __cordl_internal_set_m_ValueStartPos)) ::UnityEngine::Vector2 m_ValueStartPos;

  /// @brief Field maxThumbUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_maxThumbUssClassName, put = setStaticF_maxThumbUssClassName)) ::StringW maxThumbUssClassName;

  __declspec(property(get = get_maxValue, put = set_maxValue)) float_t maxValue;

  /// @brief Field minThumbUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_minThumbUssClassName, put = setStaticF_minThumbUssClassName)) ::StringW minThumbUssClassName;

  __declspec(property(get = get_minValue, put = set_minValue)) float_t minValue;

  /// @brief Field trackerUssClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trackerUssClassName, put = setStaticF_trackerUssClassName)) ::StringW trackerUssClassName;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName)) ::StringW ussClassName;

  __declspec(property(get = get_value, put = set_value)) ::UnityEngine::Vector2 value;

  /// @brief Method ClampValues, addr 0x49f37bc, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 ClampValues(::UnityEngine::Vector2 valueToClamp);

  /// @brief Method ComputeValueFromDraggingThumb, addr 0x49f5ad4, size 0x1a4, virtual false, abstract: false, final false
  inline void ComputeValueFromDraggingThumb(float_t dragElementStartPos, float_t dragElementEndPos);

  /// @brief Method ComputeValueFromPosition, addr 0x49f5794, size 0x1a0, virtual false, abstract: false, final false
  inline float_t ComputeValueFromPosition(float_t positionToConvert);

  /// @brief Method ExecuteDefaultAction, addr 0x49f5934, size 0x10c, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::MinMaxSlider* New_ctor();

  static inline ::UnityEngine::UIElements::MinMaxSlider* New_ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit);

  /// @brief Method RegisterEditingCallbacks, addr 0x49f5ea0, size 0x158, virtual true, abstract: false, final false
  inline void RegisterEditingCallbacks();

  /// @brief Method SetSliderValueFromClick, addr 0x49f5c78, size 0x224, virtual false, abstract: false, final false
  inline void SetSliderValueFromClick();

  /// @brief Method SetSliderValueFromDrag, addr 0x49f5a40, size 0x94, virtual false, abstract: false, final false
  inline void SetSliderValueFromDrag();

  /// @brief Method SetValueWithoutNotify, addr 0x49f3990, size 0x94, virtual true, abstract: false, final false
  inline void SetValueWithoutNotify(::UnityEngine::Vector2 newValue);

  /// @brief Method SliderLerpUnclamped, addr 0x49f50fc, size 0x10, virtual false, abstract: false, final false
  inline float_t SliderLerpUnclamped(float_t a, float_t b, float_t interpolant);

  /// @brief Method SliderNormalizeValue, addr 0x49f50ec, size 0x10, virtual false, abstract: false, final false
  inline float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue);

  /// @brief Method UnregisterEditingCallbacks, addr 0x49f5ff8, size 0x158, virtual true, abstract: false, final false
  inline void UnregisterEditingCallbacks();

  /// @brief Method UpdateDragElementPosition, addr 0x49f3a24, size 0xe18, virtual false, abstract: false, final false
  inline void UpdateDragElementPosition();

  /// @brief Method UpdateDragElementPosition, addr 0x49f50ac, size 0x40, virtual false, abstract: false, final false
  inline void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method UpdateDragThumbsRect, addr 0x49f510c, size 0x688, virtual false, abstract: false, final false
  inline void UpdateDragThumbsRect();

  /// @brief Method UpdateMixedValueContent, addr 0x49f5e9c, size 0x4, virtual true, abstract: false, final false
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

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_DragMaxThumbRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_DragMaxThumbRect();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_DragMinThumbRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_DragMinThumbRect();

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

  constexpr void __cordl_internal_set_m_DragMaxThumbRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_DragMinThumbRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_DragState(::UnityEngine::UIElements::MinMaxSlider_DragState value);

  constexpr void __cordl_internal_set_m_MaxLimit(float_t value);

  constexpr void __cordl_internal_set_m_MinLimit(float_t value);

  constexpr void __cordl_internal_set_m_ValueStartPos(::UnityEngine::Vector2 value);

  /// @brief Method .ctor, addr 0x49f4b14, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x49f4b34, size 0x578, virtual false, abstract: false, final false
  inline void _ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit);

  static inline ::StringW getStaticF_draggerUssClassName();

  static inline ::StringW getStaticF_inputUssClassName();

  static inline ::StringW getStaticF_labelUssClassName();

  static inline ::StringW getStaticF_maxThumbUssClassName();

  static inline ::StringW getStaticF_minThumbUssClassName();

  static inline ::StringW getStaticF_trackerUssClassName();

  static inline ::StringW getStaticF_ussClassName();

  /// @brief Method get_clampedDragger, addr 0x49f36f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ClampedDragger_1<float_t>* get_clampedDragger();

  /// @brief Method get_dragElement, addr 0x49f36c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragElement();

  /// @brief Method get_dragMaxThumb, addr 0x49f36e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragMaxThumb();

  /// @brief Method get_dragMinThumb, addr 0x49f36d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragMinThumb();

  /// @brief Method get_highLimit, addr 0x49f49a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_highLimit();

  /// @brief Method get_lowLimit, addr 0x49f483c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lowLimit();

  /// @brief Method get_maxValue, addr 0x49f37f4, size 0x20, virtual false, abstract: false, final false
  inline float_t get_maxValue();

  /// @brief Method get_minValue, addr 0x49f3704, size 0x10, virtual false, abstract: false, final false
  inline float_t get_minValue();

  /// @brief Method get_value, addr 0x49f38bc, size 0x48, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_value();

  static inline void setStaticF_draggerUssClassName(::StringW value);

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline void setStaticF_maxThumbUssClassName(::StringW value);

  static inline void setStaticF_minThumbUssClassName(::StringW value);

  static inline void setStaticF_trackerUssClassName(::StringW value);

  static inline void setStaticF_ussClassName(::StringW value);

  /// @brief Method set_clampedDragger, addr 0x49f36fc, size 0x8, virtual false, abstract: false, final false
  inline void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<float_t>* value);

  /// @brief Method set_dragElement, addr 0x49f36cc, size 0x8, virtual false, abstract: false, final false
  inline void set_dragElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_dragMaxThumb, addr 0x49f36ec, size 0x8, virtual false, abstract: false, final false
  inline void set_dragMaxThumb(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_dragMinThumb, addr 0x49f36dc, size 0x8, virtual false, abstract: false, final false
  inline void set_dragMinThumb(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_highLimit, addr 0x49f49b0, size 0x164, virtual false, abstract: false, final false
  inline void set_highLimit(float_t value);

  /// @brief Method set_lowLimit, addr 0x49f4844, size 0x164, virtual false, abstract: false, final false
  inline void set_lowLimit(float_t value);

  /// @brief Method set_maxValue, addr 0x49f3814, size 0xa8, virtual false, abstract: false, final false
  inline void set_maxValue(float_t value);

  /// @brief Method set_minValue, addr 0x49f3714, size 0xa8, virtual false, abstract: false, final false
  inline void set_minValue(float_t value);

  /// @brief Method set_value, addr 0x49f3904, size 0x8c, virtual true, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5636 };

  /// @brief Field <dragElement>k__BackingField, offset: 0x440, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragElement_k__BackingField;

  /// @brief Field <dragMinThumb>k__BackingField, offset: 0x448, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragMinThumb_k__BackingField;

  /// @brief Field <dragMaxThumb>k__BackingField, offset: 0x450, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragMaxThumb_k__BackingField;

  /// @brief Field <clampedDragger>k__BackingField, offset: 0x458, size: 0x8, def value: None
  ::UnityEngine::UIElements::ClampedDragger_1<float_t>* ____clampedDragger_k__BackingField;

  /// @brief Field m_DragElementStartPos, offset: 0x460, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_DragElementStartPos;

  /// @brief Field m_ValueStartPos, offset: 0x468, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ValueStartPos;

  /// @brief Field m_DragMinThumbRect, offset: 0x470, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_DragMinThumbRect;

  /// @brief Field m_DragMaxThumbRect, offset: 0x480, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_DragMaxThumbRect;

  /// @brief Field m_DragState, offset: 0x490, size: 0x4, def value: None
  ::UnityEngine::UIElements::MinMaxSlider_DragState ___m_DragState;

  /// @brief Field m_MinLimit, offset: 0x494, size: 0x4, def value: None
  float_t ___m_MinLimit;

  /// @brief Field m_MaxLimit, offset: 0x498, size: 0x4, def value: None
  float_t ___m_MaxLimit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ____dragElement_k__BackingField) == 0x440, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ____dragMinThumb_k__BackingField) == 0x448, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ____dragMaxThumb_k__BackingField) == 0x450, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ____clampedDragger_k__BackingField) == 0x458, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_DragElementStartPos) == 0x460, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_ValueStartPos) == 0x468, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_DragMinThumbRect) == 0x470, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_DragMaxThumbRect) == 0x480, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_DragState) == 0x490, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_MinLimit) == 0x494, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::MinMaxSlider, ___m_MaxLimit) == 0x498, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MinMaxSlider, 0x4a0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider_DragState, "UnityEngine.UIElements", "MinMaxSlider/DragState");
NEED_NO_BOX(::UnityEngine::UIElements::MinMaxSlider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider*, "UnityEngine.UIElements", "MinMaxSlider");
NEED_NO_BOX(::UnityEngine::UIElements::MinMaxSlider_UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider_UxmlFactory*, "UnityEngine.UIElements", "MinMaxSlider/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider_UxmlTraits*, "UnityEngine.UIElements", "MinMaxSlider/UxmlTraits");
