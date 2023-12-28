#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__MinMaxSlider_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MinMaxSlider)
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
template <typename T> class ClampedDragger_1;
}
namespace UnityEngine::UIElements {
class __MinMaxSlider__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __MinMaxSlider__UxmlTraits;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct __MinMaxSlider__DragState;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __MinMaxSlider__DragState;
}
namespace UnityEngine::UIElements {
class MinMaxSlider;
}
namespace UnityEngine::UIElements {
class __MinMaxSlider__UxmlFactory;
}
namespace UnityEngine::UIElements {
class __MinMaxSlider__UxmlTraits;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__MinMaxSlider__DragState);
MARK_REF_PTR_T(::UnityEngine::UIElements::MinMaxSlider);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory);
MARK_REF_PTR_T(::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits);
// Type: ::UxmlTraits
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 160, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7129)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7129), inst: 411 }),
// TypeDefinitionIndex(TypeDefinitionIndex(10243))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7106)) CS Name: ::MinMaxSlider::UxmlTraits*
class CORDL_TYPE __MinMaxSlider__UxmlTraits : public ::UnityEngine::UIElements::__BaseField_1__UxmlTraits<::UnityEngine::Vector2> {
public:
  // Declarations
  /// @brief Field m_MinValue, offset 0x80, size 0x8
  __declspec(property(get = __get_m_MinValue, put = __set_m_MinValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_MinValue;

  /// @brief Field m_MaxValue, offset 0x88, size 0x8
  __declspec(property(get = __get_m_MaxValue, put = __set_m_MaxValue))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_MaxValue;

  /// @brief Field m_LowLimit, offset 0x90, size 0x8
  __declspec(property(get = __get_m_LowLimit, put = __set_m_LowLimit))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_LowLimit;

  /// @brief Field m_HighLimit, offset 0x98, size 0x8
  __declspec(property(get = __get_m_HighLimit, put = __set_m_HighLimit))::UnityEngine::UIElements::UxmlFloatAttributeDescription* m_HighLimit;

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_MinValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_MinValue() const;

  constexpr void __set_m_MinValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_MaxValue();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_MaxValue() const;

  constexpr void __set_m_MaxValue(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_LowLimit();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_LowLimit() const;

  constexpr void __set_m_LowLimit(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __get_m_HighLimit();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UxmlFloatAttributeDescription*> const& __get_m_HighLimit() const;

  constexpr void __set_m_HighLimit(::UnityEngine::UIElements::UxmlFloatAttributeDescription* value);

  /// @brief Method Init addr 0x2e36c9c size 0x1bc virtual true final false
  inline void Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc);

  static inline ::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits* New_ctor();

  /// @brief Method .ctor addr 0x2e36e58 size 0x170 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MinMaxSlider__UxmlTraits", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MinMaxSlider__UxmlTraits(__MinMaxSlider__UxmlTraits&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MinMaxSlider__UxmlTraits", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MinMaxSlider__UxmlTraits(__MinMaxSlider__UxmlTraits const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MinMaxSlider__UxmlTraits();

public:
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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::DragState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7107))
// CS Name: ::MinMaxSlider::DragState
struct CORDL_TYPE __MinMaxSlider__DragState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MinMaxSlider__DragState_Unwrapped
  enum struct ____MinMaxSlider__DragState_Unwrapped : int32_t {
    __E_NoThumb = static_cast<int32_t>(0x0),
    __E_MinThumb = static_cast<int32_t>(0x1),
    __E_MiddleThumb = static_cast<int32_t>(0x2),
    __E_MaxThumb = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MinMaxSlider__DragState_Unwrapped() const noexcept {
    return static_cast<____MinMaxSlider__DragState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MinMaxSlider__DragState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MinMaxSlider__DragState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field NoThumb value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__MinMaxSlider__DragState const NoThumb;

  /// @brief Field MinThumb value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__MinMaxSlider__DragState const MinThumb;

  /// @brief Field MiddleThumb value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__MinMaxSlider__DragState const MiddleThumb;

  /// @brief Field MaxThumb value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__MinMaxSlider__DragState const MaxThumb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MinMaxSlider__DragState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::MinMaxSlider
// SizeInfo { instance_size: 1128, native_size: -1, calculated_instance_size: 1128, calculated_native_size: 1124, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10165)), TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(7107)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 411 }), TypeDefinitionIndex(TypeDefinitionIndex(7130))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7108)) CS
// Name: ::UnityEngine.UIElements::MinMaxSlider*
class CORDL_TYPE MinMaxSlider : public ::UnityEngine::UIElements::BaseField_1<::UnityEngine::Vector2> {
public:
  // Declarations
  using DragState = ::UnityEngine::UIElements::__MinMaxSlider__DragState;

  using UxmlTraits = ::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits;

  using UxmlFactory = ::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory;

  /// @brief Field <dragElement>k__BackingField, offset 0x408, size 0x8
  __declspec(property(get = __get__dragElement_k__BackingField, put = __set__dragElement_k__BackingField))::UnityEngine::UIElements::VisualElement* _dragElement_k__BackingField;

  /// @brief Field <dragMinThumb>k__BackingField, offset 0x410, size 0x8
  __declspec(property(get = __get__dragMinThumb_k__BackingField, put = __set__dragMinThumb_k__BackingField))::UnityEngine::UIElements::VisualElement* _dragMinThumb_k__BackingField;

  /// @brief Field <dragMaxThumb>k__BackingField, offset 0x418, size 0x8
  __declspec(property(get = __get__dragMaxThumb_k__BackingField, put = __set__dragMaxThumb_k__BackingField))::UnityEngine::UIElements::VisualElement* _dragMaxThumb_k__BackingField;

  /// @brief Field <clampedDragger>k__BackingField, offset 0x420, size 0x8
  __declspec(property(get = __get__clampedDragger_k__BackingField, put = __set__clampedDragger_k__BackingField))::UnityEngine::UIElements::ClampedDragger_1<float_t>* _clampedDragger_k__BackingField;

  /// @brief Field m_DragElementStartPos, offset 0x428, size 0x8
  __declspec(property(get = __get_m_DragElementStartPos, put = __set_m_DragElementStartPos))::UnityEngine::Vector2 m_DragElementStartPos;

  /// @brief Field m_ValueStartPos, offset 0x430, size 0x8
  __declspec(property(get = __get_m_ValueStartPos, put = __set_m_ValueStartPos))::UnityEngine::Vector2 m_ValueStartPos;

  /// @brief Field m_DragMinThumbRect, offset 0x438, size 0x10
  __declspec(property(get = __get_m_DragMinThumbRect, put = __set_m_DragMinThumbRect))::UnityEngine::Rect m_DragMinThumbRect;

  /// @brief Field m_DragMaxThumbRect, offset 0x448, size 0x10
  __declspec(property(get = __get_m_DragMaxThumbRect, put = __set_m_DragMaxThumbRect))::UnityEngine::Rect m_DragMaxThumbRect;

  /// @brief Field m_DragState, offset 0x458, size 0x4
  __declspec(property(get = __get_m_DragState, put = __set_m_DragState))::UnityEngine::UIElements::__MinMaxSlider__DragState m_DragState;

  /// @brief Field m_MinLimit, offset 0x45c, size 0x4
  __declspec(property(get = __get_m_MinLimit, put = __set_m_MinLimit)) float_t m_MinLimit;

  /// @brief Field m_MaxLimit, offset 0x460, size 0x4
  __declspec(property(get = __get_m_MaxLimit, put = __set_m_MaxLimit)) float_t m_MaxLimit;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  /// @brief Field trackerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_trackerUssClassName, put = setStaticF_trackerUssClassName))::StringW trackerUssClassName;

  /// @brief Field draggerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draggerUssClassName, put = setStaticF_draggerUssClassName))::StringW draggerUssClassName;

  /// @brief Field minThumbUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_minThumbUssClassName, put = setStaticF_minThumbUssClassName))::StringW minThumbUssClassName;

  /// @brief Field maxThumbUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_maxThumbUssClassName, put = setStaticF_maxThumbUssClassName))::StringW maxThumbUssClassName;

  __declspec(property(get = get_dragElement, put = set_dragElement))::UnityEngine::UIElements::VisualElement* dragElement;

  __declspec(property(get = get_dragMinThumb, put = set_dragMinThumb))::UnityEngine::UIElements::VisualElement* dragMinThumb;

  __declspec(property(get = get_dragMaxThumb, put = set_dragMaxThumb))::UnityEngine::UIElements::VisualElement* dragMaxThumb;

  __declspec(property(get = get_clampedDragger, put = set_clampedDragger))::UnityEngine::UIElements::ClampedDragger_1<float_t>* clampedDragger;

  __declspec(property(get = get_minValue, put = set_minValue)) float_t minValue;

  __declspec(property(get = get_maxValue, put = set_maxValue)) float_t maxValue;

  __declspec(property(get = get_value, put = set_value))::UnityEngine::Vector2 value;

  __declspec(property(get = get_lowLimit, put = set_lowLimit)) float_t lowLimit;

  __declspec(property(get = get_highLimit, put = set_highLimit)) float_t highLimit;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__dragElement_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__dragElement_k__BackingField() const;

  constexpr void __set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__dragMinThumb_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__dragMinThumb_k__BackingField() const;

  constexpr void __set__dragMinThumb_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__dragMaxThumb_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__dragMaxThumb_k__BackingField() const;

  constexpr void __set__dragMaxThumb_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::ClampedDragger_1<float_t>*& __get__clampedDragger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClampedDragger_1<float_t>*> const& __get__clampedDragger_k__BackingField() const;

  constexpr void __set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<float_t>* value);

  constexpr ::UnityEngine::Vector2& __get_m_DragElementStartPos();

  constexpr ::UnityEngine::Vector2 const& __get_m_DragElementStartPos() const;

  constexpr void __set_m_DragElementStartPos(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_ValueStartPos();

  constexpr ::UnityEngine::Vector2 const& __get_m_ValueStartPos() const;

  constexpr void __set_m_ValueStartPos(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Rect& __get_m_DragMinThumbRect();

  constexpr ::UnityEngine::Rect const& __get_m_DragMinThumbRect() const;

  constexpr void __set_m_DragMinThumbRect(::UnityEngine::Rect value);

  constexpr ::UnityEngine::Rect& __get_m_DragMaxThumbRect();

  constexpr ::UnityEngine::Rect const& __get_m_DragMaxThumbRect() const;

  constexpr void __set_m_DragMaxThumbRect(::UnityEngine::Rect value);

  constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState& __get_m_DragState();

  constexpr ::UnityEngine::UIElements::__MinMaxSlider__DragState const& __get_m_DragState() const;

  constexpr void __set_m_DragState(::UnityEngine::UIElements::__MinMaxSlider__DragState value);

  constexpr float_t& __get_m_MinLimit();

  constexpr float_t const& __get_m_MinLimit() const;

  constexpr void __set_m_MinLimit(float_t value);

  constexpr float_t& __get_m_MaxLimit();

  constexpr float_t const& __get_m_MaxLimit() const;

  constexpr void __set_m_MaxLimit(float_t value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline void setStaticF_trackerUssClassName(::StringW value);

  static inline ::StringW getStaticF_trackerUssClassName();

  static inline void setStaticF_draggerUssClassName(::StringW value);

  static inline ::StringW getStaticF_draggerUssClassName();

  static inline void setStaticF_minThumbUssClassName(::StringW value);

  static inline ::StringW getStaticF_minThumbUssClassName();

  static inline void setStaticF_maxThumbUssClassName(::StringW value);

  static inline ::StringW getStaticF_maxThumbUssClassName();

  /// @brief Method get_dragElement addr 0x2e34090 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragElement();

  /// @brief Method set_dragElement addr 0x2e34098 size 0x8 virtual false final false
  inline void set_dragElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_dragMinThumb addr 0x2e340a0 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragMinThumb();

  /// @brief Method set_dragMinThumb addr 0x2e340a8 size 0x8 virtual false final false
  inline void set_dragMinThumb(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_dragMaxThumb addr 0x2e340b0 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragMaxThumb();

  /// @brief Method set_dragMaxThumb addr 0x2e340b8 size 0x8 virtual false final false
  inline void set_dragMaxThumb(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_clampedDragger addr 0x2e340c0 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::ClampedDragger_1<float_t>* get_clampedDragger();

  /// @brief Method set_clampedDragger addr 0x2e340c8 size 0x8 virtual false final false
  inline void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<float_t>* value);

  /// @brief Method get_minValue addr 0x2e340d0 size 0x10 virtual false final false
  inline float_t get_minValue();

  /// @brief Method set_minValue addr 0x2e340e0 size 0xa8 virtual false final false
  inline void set_minValue(float_t value);

  /// @brief Method get_maxValue addr 0x2e341c0 size 0x20 virtual false final false
  inline float_t get_maxValue();

  /// @brief Method set_maxValue addr 0x2e341e0 size 0xa8 virtual false final false
  inline void set_maxValue(float_t value);

  /// @brief Method get_value addr 0x2e34288 size 0x48 virtual true final false
  inline ::UnityEngine::Vector2 get_value();

  /// @brief Method set_value addr 0x2e342d0 size 0x8c virtual true final false
  inline void set_value(::UnityEngine::Vector2 value);

  /// @brief Method SetValueWithoutNotify addr 0x2e3435c size 0x94 virtual true final false
  inline void SetValueWithoutNotify(::UnityEngine::Vector2 newValue);

  /// @brief Method get_lowLimit addr 0x2e358cc size 0x8 virtual false final false
  inline float_t get_lowLimit();

  /// @brief Method set_lowLimit addr 0x2e358d4 size 0x170 virtual false final false
  inline void set_lowLimit(float_t value);

  /// @brief Method get_highLimit addr 0x2e35a44 size 0x8 virtual false final false
  inline float_t get_highLimit();

  /// @brief Method set_highLimit addr 0x2e35a4c size 0x170 virtual false final false
  inline void set_highLimit(float_t value);

  static inline ::UnityEngine::UIElements::MinMaxSlider* New_ctor();

  /// @brief Method .ctor addr 0x2e35bbc size 0x20 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MinMaxSlider* New_ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit);

  /// @brief Method .ctor addr 0x2e35bdc size 0x528 virtual false final false
  inline void _ctor(::StringW label, float_t minValue, float_t maxValue, float_t minLimit, float_t maxLimit);

  /// @brief Method ClampValues addr 0x2e34188 size 0x38 virtual false final false
  inline ::UnityEngine::Vector2 ClampValues(::UnityEngine::Vector2 valueToClamp);

  /// @brief Method UpdateDragElementPosition addr 0x2e36104 size 0x94 virtual false final false
  inline void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method UpdateDragElementPosition addr 0x2e343f0 size 0x14dc virtual false final false
  inline void UpdateDragElementPosition();

  /// @brief Method SliderLerpUnclamped addr 0x2e361a8 size 0x10 virtual false final false
  inline float_t SliderLerpUnclamped(float_t a, float_t b, float_t interpolant);

  /// @brief Method SliderNormalizeValue addr 0x2e36198 size 0x10 virtual false final false
  inline float_t SliderNormalizeValue(float_t currentValue, float_t lowerValue, float_t higherValue);

  /// @brief Method ComputeValueFromPosition addr 0x2e361b8 size 0x1c0 virtual false final false
  inline float_t ComputeValueFromPosition(float_t positionToConvert);

  /// @brief Method ExecuteDefaultAction addr 0x2e36378 size 0x10c virtual true final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method SetSliderValueFromDrag addr 0x2e36484 size 0x94 virtual false final false
  inline void SetSliderValueFromDrag();

  /// @brief Method SetSliderValueFromClick addr 0x2e366bc size 0x354 virtual false final false
  inline void SetSliderValueFromClick();

  /// @brief Method ComputeValueDragStateNoThumb addr 0x2e36a10 size 0xa0 virtual false final false
  inline void ComputeValueDragStateNoThumb(float_t lowLimitPosition, float_t highLimitPosition, float_t dragElementPos);

  /// @brief Method ComputeValueFromDraggingThumb addr 0x2e36518 size 0x1a4 virtual false final false
  inline void ComputeValueFromDraggingThumb(float_t dragElementStartPos, float_t dragElementEndPos);

  /// @brief Method UpdateMixedValueContent addr 0x2e36ab0 size 0x4 virtual true final false
  inline void UpdateMixedValueContent();

  // Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MinMaxSlider(MinMaxSlider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MinMaxSlider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MinMaxSlider(MinMaxSlider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MinMaxSlider();

public:
  /// @brief Field <dragElement>k__BackingField, offset: 0x408, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragElement_k__BackingField;

  /// @brief Field <dragMinThumb>k__BackingField, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragMinThumb_k__BackingField;

  /// @brief Field <dragMaxThumb>k__BackingField, offset: 0x418, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragMaxThumb_k__BackingField;

  /// @brief Field <clampedDragger>k__BackingField, offset: 0x420, size: 0x8, def value: None
  ::UnityEngine::UIElements::ClampedDragger_1<float_t>* ____clampedDragger_k__BackingField;

  /// @brief Field m_DragElementStartPos, offset: 0x428, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_DragElementStartPos;

  /// @brief Field m_ValueStartPos, offset: 0x430, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_ValueStartPos;

  /// @brief Field m_DragMinThumbRect, offset: 0x438, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_DragMinThumbRect;

  /// @brief Field m_DragMaxThumbRect, offset: 0x448, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_DragMaxThumbRect;

  /// @brief Field m_DragState, offset: 0x458, size: 0x4, def value: None
  ::UnityEngine::UIElements::__MinMaxSlider__DragState ___m_DragState;

  /// @brief Field m_MinLimit, offset: 0x45c, size: 0x4, def value: None
  float_t ___m_MinLimit;

  /// @brief Field m_MaxLimit, offset: 0x460, size: 0x4, def value: None
  float_t ___m_MaxLimit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MinMaxSlider, 0x468>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: ::UxmlFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6997)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6997), inst: 5268 }),
// TypeDefinitionIndex(TypeDefinitionIndex(7108)), TypeDefinitionIndex(TypeDefinitionIndex(7106))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7105)) CS Name: ::MinMaxSlider::UxmlFactory*
class CORDL_TYPE __MinMaxSlider__UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::MinMaxSlider*, ::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits*> {
public:
  // Declarations
  static inline ::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory* New_ctor();

  /// @brief Method .ctor addr 0x2e36c54 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MinMaxSlider__UxmlFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MinMaxSlider__UxmlFactory(__MinMaxSlider__UxmlFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MinMaxSlider__UxmlFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MinMaxSlider__UxmlFactory(__MinMaxSlider__UxmlFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MinMaxSlider__UxmlFactory();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MinMaxSlider__DragState, "UnityEngine.UIElements", "MinMaxSlider/DragState");
NEED_NO_BOX(::UnityEngine::UIElements::MinMaxSlider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MinMaxSlider*, "UnityEngine.UIElements", "MinMaxSlider");
NEED_NO_BOX(::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MinMaxSlider__UxmlFactory*, "UnityEngine.UIElements", "MinMaxSlider/UxmlFactory");
NEED_NO_BOX(::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__MinMaxSlider__UxmlTraits*, "UnityEngine.UIElements", "MinMaxSlider/UxmlTraits");
