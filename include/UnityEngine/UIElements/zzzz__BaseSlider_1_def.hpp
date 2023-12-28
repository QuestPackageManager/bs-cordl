#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseField_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BaseSlider_1)
namespace UnityEngine::UIElements {
class TextField;
}
namespace UnityEngine::UIElements {
template <typename T> class ClampedDragger_1;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
template <typename TValueType> struct __BaseSlider_1__SliderKey;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace UnityEngine::UIElements {
struct SliderDirection;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename TValueType> struct __BaseSlider_1__SliderKey;
}
namespace UnityEngine::UIElements {
template <typename TValueType> class BaseSlider_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::UIElements::__BaseSlider_1__SliderKey);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::BaseSlider_1);
// Type: ::SliderKey
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7100), inst: 2686 }), TypeDefinitionIndex(TypeDefinitionIndex(7100))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7100))
// CS Name: ::BaseSlider`1::SliderKey<TValueType>
struct CORDL_TYPE __BaseSlider_1__SliderKey {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BaseSlider_1__SliderKey_Unwrapped
  enum struct ____BaseSlider_1__SliderKey_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Lowest = static_cast<int32_t>(0x1),
    __E_LowerPage = static_cast<int32_t>(0x2),
    __E_Lower = static_cast<int32_t>(0x3),
    __E_Higher = static_cast<int32_t>(0x4),
    __E_HigherPage = static_cast<int32_t>(0x5),
    __E_Highest = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BaseSlider_1__SliderKey_Unwrapped() const noexcept {
    return static_cast<____BaseSlider_1__SliderKey_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BaseSlider_1__SliderKey(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BaseSlider_1__SliderKey();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> const None;

  /// @brief Field Lowest value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> const Lowest;

  /// @brief Field LowerPage value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> const LowerPage;

  /// @brief Field Lower value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> const Lower;

  /// @brief Field Higher value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> const Higher;

  /// @brief Field HigherPage value: static_cast<int32_t>(0x5)
  static ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> const HigherPage;

  /// @brief Field Highest value: static_cast<int32_t>(0x6)
  static ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> const Highest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::BaseSlider`1
// SizeInfo { instance_size: 1120, native_size: 1117, calculated_instance_size: 1120, calculated_native_size: 1117, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// cpp template
template <typename TValueType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7130)), TypeDefinitionIndex(TypeDefinitionIndex(7099)), TypeDefinitionIndex(TypeDefinitionIndex(10165)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7130), inst: 918 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(7101)) CS Name:
// ::UnityEngine.UIElements::BaseSlider`1<TValueType>*
class CORDL_TYPE BaseSlider_1 : public ::UnityEngine::UIElements::BaseField_1<TValueType> {
public:
  // Declarations
  using SliderKey = ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>;

  /// @brief Field <dragContainer>k__BackingField, offset 0x408, size 0x8
  __declspec(property(get = __get__dragContainer_k__BackingField, put = __set__dragContainer_k__BackingField))::UnityEngine::UIElements::VisualElement* _dragContainer_k__BackingField;

  /// @brief Field <dragElement>k__BackingField, offset 0x410, size 0x8
  __declspec(property(get = __get__dragElement_k__BackingField, put = __set__dragElement_k__BackingField))::UnityEngine::UIElements::VisualElement* _dragElement_k__BackingField;

  /// @brief Field <dragBorderElement>k__BackingField, offset 0x418, size 0x8
  __declspec(property(get = __get__dragBorderElement_k__BackingField, put = __set__dragBorderElement_k__BackingField))::UnityEngine::UIElements::VisualElement* _dragBorderElement_k__BackingField;

  /// @brief Field <inputTextField>k__BackingField, offset 0x420, size 0x8
  __declspec(property(get = __get__inputTextField_k__BackingField, put = __set__inputTextField_k__BackingField))::UnityEngine::UIElements::TextField* _inputTextField_k__BackingField;

  /// @brief Field m_LowValue, offset 0x428, size 0x8
  __declspec(property(get = __get_m_LowValue, put = __set_m_LowValue)) TValueType m_LowValue;

  /// @brief Field m_HighValue, offset 0x430, size 0x8
  __declspec(property(get = __get_m_HighValue, put = __set_m_HighValue)) TValueType m_HighValue;

  /// @brief Field m_PageSize, offset 0x438, size 0x4
  __declspec(property(get = __get_m_PageSize, put = __set_m_PageSize)) float_t m_PageSize;

  /// @brief Field m_ShowInputField, offset 0x43c, size 0x1
  __declspec(property(get = __get_m_ShowInputField, put = __set_m_ShowInputField)) bool m_ShowInputField;

  /// @brief Field <clamped>k__BackingField, offset 0x43d, size 0x1
  __declspec(property(get = __get__clamped_k__BackingField, put = __set__clamped_k__BackingField)) bool _clamped_k__BackingField;

  /// @brief Field <clampedDragger>k__BackingField, offset 0x440, size 0x8
  __declspec(property(get = __get__clampedDragger_k__BackingField,
                      put = __set__clampedDragger_k__BackingField))::UnityEngine::UIElements::ClampedDragger_1<TValueType>* _clampedDragger_k__BackingField;

  /// @brief Field m_DragElementStartPos, offset 0x448, size 0x10
  __declspec(property(get = __get_m_DragElementStartPos, put = __set_m_DragElementStartPos))::UnityEngine::Rect m_DragElementStartPos;

  /// @brief Field m_Direction, offset 0x458, size 0x4
  __declspec(property(get = __get_m_Direction, put = __set_m_Direction))::UnityEngine::UIElements::SliderDirection m_Direction;

  /// @brief Field m_Inverted, offset 0x45c, size 0x1
  __declspec(property(get = __get_m_Inverted, put = __set_m_Inverted)) bool m_Inverted;

  /// @brief Field ussClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ussClassName, put = setStaticF_ussClassName))::StringW ussClassName;

  /// @brief Field labelUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_labelUssClassName, put = setStaticF_labelUssClassName))::StringW labelUssClassName;

  /// @brief Field inputUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_inputUssClassName, put = setStaticF_inputUssClassName))::StringW inputUssClassName;

  /// @brief Field horizontalVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_horizontalVariantUssClassName, put = setStaticF_horizontalVariantUssClassName))::StringW horizontalVariantUssClassName;

  /// @brief Field verticalVariantUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_verticalVariantUssClassName, put = setStaticF_verticalVariantUssClassName))::StringW verticalVariantUssClassName;

  /// @brief Field dragContainerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dragContainerUssClassName, put = setStaticF_dragContainerUssClassName))::StringW dragContainerUssClassName;

  /// @brief Field trackerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_trackerUssClassName, put = setStaticF_trackerUssClassName))::StringW trackerUssClassName;

  /// @brief Field draggerUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draggerUssClassName, put = setStaticF_draggerUssClassName))::StringW draggerUssClassName;

  /// @brief Field draggerBorderUssClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_draggerBorderUssClassName, put = setStaticF_draggerBorderUssClassName))::StringW draggerBorderUssClassName;

  /// @brief Field textFieldClassName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_textFieldClassName, put = setStaticF_textFieldClassName))::StringW textFieldClassName;

  __declspec(property(get = get_dragContainer, put = set_dragContainer))::UnityEngine::UIElements::VisualElement* dragContainer;

  __declspec(property(get = get_dragElement, put = set_dragElement))::UnityEngine::UIElements::VisualElement* dragElement;

  __declspec(property(get = get_dragBorderElement, put = set_dragBorderElement))::UnityEngine::UIElements::VisualElement* dragBorderElement;

  __declspec(property(get = get_inputTextField, put = set_inputTextField))::UnityEngine::UIElements::TextField* inputTextField;

  __declspec(property(get = get_lowValue, put = set_lowValue)) TValueType lowValue;

  __declspec(property(get = get_highValue, put = set_highValue)) TValueType highValue;

  __declspec(property(get = get_pageSize, put = set_pageSize)) float_t pageSize;

  __declspec(property(get = get_showInputField, put = set_showInputField)) bool showInputField;

  __declspec(property(get = get_clamped, put = set_clamped)) bool clamped;

  __declspec(property(get = get_clampedDragger, put = set_clampedDragger))::UnityEngine::UIElements::ClampedDragger_1<TValueType>* clampedDragger;

  __declspec(property(get = get_value, put = set_value)) TValueType value;

  __declspec(property(get = get_direction, put = set_direction))::UnityEngine::UIElements::SliderDirection direction;

  __declspec(property(get = get_inverted, put = set_inverted)) bool inverted;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__dragContainer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__dragContainer_k__BackingField() const;

  constexpr void __set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__dragElement_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__dragElement_k__BackingField() const;

  constexpr void __set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__dragBorderElement_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__dragBorderElement_k__BackingField() const;

  constexpr void __set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::TextField*& __get__inputTextField_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextField*> const& __get__inputTextField_k__BackingField() const;

  constexpr void __set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField* value);

  constexpr TValueType& __get_m_LowValue();

  constexpr TValueType const& __get_m_LowValue() const;

  constexpr void __set_m_LowValue(TValueType value);

  constexpr TValueType& __get_m_HighValue();

  constexpr TValueType const& __get_m_HighValue() const;

  constexpr void __set_m_HighValue(TValueType value);

  constexpr float_t& __get_m_PageSize();

  constexpr float_t const& __get_m_PageSize() const;

  constexpr void __set_m_PageSize(float_t value);

  constexpr bool& __get_m_ShowInputField();

  constexpr bool const& __get_m_ShowInputField() const;

  constexpr void __set_m_ShowInputField(bool value);

  constexpr bool& __get__clamped_k__BackingField();

  constexpr bool const& __get__clamped_k__BackingField() const;

  constexpr void __set__clamped_k__BackingField(bool value);

  constexpr ::UnityEngine::UIElements::ClampedDragger_1<TValueType>*& __get__clampedDragger_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*> const& __get__clampedDragger_k__BackingField() const;

  constexpr void __set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<TValueType>* value);

  constexpr ::UnityEngine::Rect& __get_m_DragElementStartPos();

  constexpr ::UnityEngine::Rect const& __get_m_DragElementStartPos() const;

  constexpr void __set_m_DragElementStartPos(::UnityEngine::Rect value);

  constexpr ::UnityEngine::UIElements::SliderDirection& __get_m_Direction();

  constexpr ::UnityEngine::UIElements::SliderDirection const& __get_m_Direction() const;

  constexpr void __set_m_Direction(::UnityEngine::UIElements::SliderDirection value);

  constexpr bool& __get_m_Inverted();

  constexpr bool const& __get_m_Inverted() const;

  constexpr void __set_m_Inverted(bool value);

  static inline void setStaticF_ussClassName(::StringW value);

  static inline ::StringW getStaticF_ussClassName();

  static inline void setStaticF_labelUssClassName(::StringW value);

  static inline ::StringW getStaticF_labelUssClassName();

  static inline void setStaticF_inputUssClassName(::StringW value);

  static inline ::StringW getStaticF_inputUssClassName();

  static inline void setStaticF_horizontalVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_horizontalVariantUssClassName();

  static inline void setStaticF_verticalVariantUssClassName(::StringW value);

  static inline ::StringW getStaticF_verticalVariantUssClassName();

  static inline void setStaticF_dragContainerUssClassName(::StringW value);

  static inline ::StringW getStaticF_dragContainerUssClassName();

  static inline void setStaticF_trackerUssClassName(::StringW value);

  static inline ::StringW getStaticF_trackerUssClassName();

  static inline void setStaticF_draggerUssClassName(::StringW value);

  static inline ::StringW getStaticF_draggerUssClassName();

  static inline void setStaticF_draggerBorderUssClassName(::StringW value);

  static inline ::StringW getStaticF_draggerBorderUssClassName();

  static inline void setStaticF_textFieldClassName(::StringW value);

  static inline ::StringW getStaticF_textFieldClassName();

  /// @brief Method get_dragContainer addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragContainer();

  /// @brief Method set_dragContainer addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_dragContainer(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_dragElement addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragElement();

  /// @brief Method set_dragElement addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_dragElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_dragBorderElement addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::VisualElement* get_dragBorderElement();

  /// @brief Method set_dragBorderElement addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_dragBorderElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_inputTextField addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::TextField* get_inputTextField();

  /// @brief Method set_inputTextField addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_inputTextField(::UnityEngine::UIElements::TextField* value);

  /// @brief Method get_lowValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValueType get_lowValue();

  /// @brief Method set_lowValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_lowValue(TValueType value);

  /// @brief Method get_highValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValueType get_highValue();

  /// @brief Method set_highValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_highValue(TValueType value);

  /// @brief Method SetHighValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SetHighValueWithoutNotify(TValueType newHighValue);

  /// @brief Method get_pageSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_pageSize();

  /// @brief Method set_pageSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_pageSize(float_t value);

  /// @brief Method get_showInputField addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_showInputField();

  /// @brief Method set_showInputField addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_showInputField(bool value);

  /// @brief Method get_clamped addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_clamped();

  /// @brief Method set_clamped addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_clamped(bool value);

  /// @brief Method get_clampedDragger addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* get_clampedDragger();

  /// @brief Method set_clampedDragger addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<TValueType>* value);

  /// @brief Method Clamp addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValueType Clamp(TValueType value, TValueType lowBound, TValueType highBound);

  /// @brief Method GetClampedValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValueType GetClampedValue(TValueType newValue);

  /// @brief Method get_value addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TValueType get_value();

  /// @brief Method set_value addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void set_value(TValueType value);

  /// @brief Method SetValueWithoutNotify addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SetValueWithoutNotify(TValueType newValue);

  /// @brief Method get_direction addr 0x0 size 0xffffffffffffffff virtual false final false
  inline ::UnityEngine::UIElements::SliderDirection get_direction();

  /// @brief Method set_direction addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_direction(::UnityEngine::UIElements::SliderDirection value);

  /// @brief Method get_inverted addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_inverted();

  /// @brief Method set_inverted addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void set_inverted(bool value);

  static inline ::UnityEngine::UIElements::BaseSlider_1<TValueType>* New_ctor(::StringW label, TValueType start, TValueType end, ::UnityEngine::UIElements::SliderDirection direction,
                                                                              float_t pageSize);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::StringW label, TValueType start, TValueType end, ::UnityEngine::UIElements::SliderDirection direction, float_t pageSize);

  /// @brief Method GetClosestPowerOfTen addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline float_t GetClosestPowerOfTen(float_t positiveNumber);

  /// @brief Method RoundToMultipleOf addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline float_t RoundToMultipleOf(float_t value, float_t roundingValue);

  /// @brief Method ClampValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ClampValue();

  /// @brief Method SliderLerpUnclamped addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TValueType SliderLerpUnclamped(TValueType a, TValueType b, float_t interpolant);

  /// @brief Method SliderNormalizeValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t SliderNormalizeValue(TValueType currentValue, TValueType lowerValue, TValueType higherValue);

  /// @brief Method ParseStringToValue addr 0x0 size 0xffffffffffffffff virtual true final false
  inline TValueType ParseStringToValue(::StringW stringValue);

  /// @brief Method ComputeValueFromKey addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ComputeValueFromKey(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType> sliderKey, bool isShift);

  /// @brief Method SliderLerpDirectionalUnclamped addr 0x0 size 0xffffffffffffffff virtual false final false
  inline TValueType SliderLerpDirectionalUnclamped(TValueType a, TValueType b, float_t positionInterpolant);

  /// @brief Method SetSliderValueFromDrag addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SetSliderValueFromDrag();

  /// @brief Method ComputeValueAndDirectionFromDrag addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ComputeValueAndDirectionFromDrag(float_t sliderLength, float_t dragElementLength, float_t dragElementPos);

  /// @brief Method SetSliderValueFromClick addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void SetSliderValueFromClick();

  /// @brief Method OnKeyDown addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method ComputeValueAndDirectionFromClick addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ComputeValueAndDirectionFromClick(float_t sliderLength, float_t dragElementLength, float_t dragElementPos, float_t dragElementLastPos);

  /// @brief Method AdjustDragElement addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void AdjustDragElement(float_t factor);

  /// @brief Method UpdateDragElementPosition addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnViewDataReady addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void OnViewDataReady();

  /// @brief Method SameValues addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool SameValues(float_t a, float_t b, float_t epsilon);

  /// @brief Method UpdateDragElementPosition addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void UpdateDragElementPosition();

  /// @brief Method ExecuteDefaultAction addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method UpdateTextFieldVisibility addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void UpdateTextFieldVisibility();

  /// @brief Method UpdateTextFieldValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void UpdateTextFieldValue();

  /// @brief Method OnTextFieldFocusOut addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent* evt);

  /// @brief Method OnTextFieldValueChange addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW>* evt);

  /// @brief Method UpdateMixedValueContent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void UpdateMixedValueContent();

  // Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseSlider_1(BaseSlider_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseSlider_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseSlider_1(BaseSlider_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseSlider_1();

public:
  /// @brief Field <dragContainer>k__BackingField, offset: 0x408, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragContainer_k__BackingField;

  /// @brief Field <dragElement>k__BackingField, offset: 0x410, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragElement_k__BackingField;

  /// @brief Field <dragBorderElement>k__BackingField, offset: 0x418, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____dragBorderElement_k__BackingField;

  /// @brief Field <inputTextField>k__BackingField, offset: 0x420, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextField* ____inputTextField_k__BackingField;

  /// @brief Field m_LowValue, offset: 0x428, size: 0x8, def value: None
  TValueType ___m_LowValue;

  /// @brief Field m_HighValue, offset: 0x430, size: 0x8, def value: None
  TValueType ___m_HighValue;

  /// @brief Field m_PageSize, offset: 0x438, size: 0x4, def value: None
  float_t ___m_PageSize;

  /// @brief Field m_ShowInputField, offset: 0x43c, size: 0x1, def value: None
  bool ___m_ShowInputField;

  /// @brief Field <clamped>k__BackingField, offset: 0x43d, size: 0x1, def value: None
  bool ____clamped_k__BackingField;

  /// @brief Field <clampedDragger>k__BackingField, offset: 0x440, size: 0x8, def value: None
  ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* ____clampedDragger_k__BackingField;

  /// @brief Field m_DragElementStartPos, offset: 0x448, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_DragElementStartPos;

  /// @brief Field m_Direction, offset: 0x458, size: 0x4, def value: None
  ::UnityEngine::UIElements::SliderDirection ___m_Direction;

  /// @brief Field m_Inverted, offset: 0x45c, size: 0x1, def value: None
  bool ___m_Inverted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::UIElements::__BaseSlider_1__SliderKey, "UnityEngine.UIElements", "BaseSlider`1/SliderKey");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::BaseSlider_1, "UnityEngine.UIElements", "BaseSlider`1");
