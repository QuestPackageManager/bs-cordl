#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerEventData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__InputButton;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__InputButton;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::__PointerEventData__FramePressState);
MARK_VAL_T(::UnityEngine::EventSystems::__PointerEventData__InputButton);
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerEventData);
// Type: ::InputButton
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13166))
// CS Name: ::PointerEventData::InputButton
struct CORDL_TYPE __PointerEventData__InputButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PointerEventData__InputButton_Unwrapped
  enum struct ____PointerEventData__InputButton_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Middle = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PointerEventData__InputButton_Unwrapped() const noexcept {
    return static_cast<____PointerEventData__InputButton_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PointerEventData__InputButton(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerEventData__InputButton();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::UnityEngine::EventSystems::__PointerEventData__InputButton const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::UnityEngine::EventSystems::__PointerEventData__InputButton const Right;

  /// @brief Field Middle value: static_cast<int32_t>(0x2)
  static ::UnityEngine::EventSystems::__PointerEventData__InputButton const Middle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PointerEventData__InputButton, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__PointerEventData__InputButton, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
// Type: ::FramePressState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13167))
// CS Name: ::PointerEventData::FramePressState
struct CORDL_TYPE __PointerEventData__FramePressState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PointerEventData__FramePressState_Unwrapped
  enum struct ____PointerEventData__FramePressState_Unwrapped : int32_t {
    __E_Pressed = static_cast<int32_t>(0x0),
    __E_Released = static_cast<int32_t>(0x1),
    __E_PressedAndReleased = static_cast<int32_t>(0x2),
    __E_NotChanged = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PointerEventData__FramePressState_Unwrapped() const noexcept {
    return static_cast<____PointerEventData__FramePressState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PointerEventData__FramePressState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerEventData__FramePressState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Pressed value: static_cast<int32_t>(0x0)
  static ::UnityEngine::EventSystems::__PointerEventData__FramePressState const Pressed;

  /// @brief Field Released value: static_cast<int32_t>(0x1)
  static ::UnityEngine::EventSystems::__PointerEventData__FramePressState const Released;

  /// @brief Field PressedAndReleased value: static_cast<int32_t>(0x2)
  static ::UnityEngine::EventSystems::__PointerEventData__FramePressState const PressedAndReleased;

  /// @brief Field NotChanged value: static_cast<int32_t>(0x3)
  static ::UnityEngine::EventSystems::__PointerEventData__FramePressState const NotChanged;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PointerEventData__FramePressState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::__PointerEventData__FramePressState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::PointerEventData
// SizeInfo { instance_size: 352, native_size: -1, calculated_instance_size: 352, calculated_native_size: 350, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13165)), TypeDefinitionIndex(TypeDefinitionIndex(13213)), TypeDefinitionIndex(TypeDefinitionIndex(10243)),
// TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(13166))} Self: TypeDefinitionIndex(TypeDefinitionIndex(13168)) CS Name:
// ::UnityEngine.EventSystems::PointerEventData*
class CORDL_TYPE PointerEventData : public ::UnityEngine::EventSystems::BaseEventData {
public:
  // Declarations
  using FramePressState = ::UnityEngine::EventSystems::__PointerEventData__FramePressState;

  using InputButton = ::UnityEngine::EventSystems::__PointerEventData__InputButton;

  /// @brief Field <pointerEnter>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__pointerEnter_k__BackingField, put = __set__pointerEnter_k__BackingField))::UnityEngine::GameObject* _pointerEnter_k__BackingField;

  /// @brief Field m_PointerPress, offset 0x28, size 0x8
  __declspec(property(get = __get_m_PointerPress, put = __set_m_PointerPress))::UnityEngine::GameObject* m_PointerPress;

  /// @brief Field <lastPress>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__lastPress_k__BackingField, put = __set__lastPress_k__BackingField))::UnityEngine::GameObject* _lastPress_k__BackingField;

  /// @brief Field <rawPointerPress>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__rawPointerPress_k__BackingField, put = __set__rawPointerPress_k__BackingField))::UnityEngine::GameObject* _rawPointerPress_k__BackingField;

  /// @brief Field <pointerDrag>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __get__pointerDrag_k__BackingField, put = __set__pointerDrag_k__BackingField))::UnityEngine::GameObject* _pointerDrag_k__BackingField;

  /// @brief Field <pointerClick>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __get__pointerClick_k__BackingField, put = __set__pointerClick_k__BackingField))::UnityEngine::GameObject* _pointerClick_k__BackingField;

  /// @brief Field <pointerCurrentRaycast>k__BackingField, offset 0x50, size 0x48
  __declspec(property(get = __get__pointerCurrentRaycast_k__BackingField,
                      put = __set__pointerCurrentRaycast_k__BackingField))::UnityEngine::EventSystems::RaycastResult _pointerCurrentRaycast_k__BackingField;

  /// @brief Field <pointerPressRaycast>k__BackingField, offset 0x98, size 0x48
  __declspec(property(get = __get__pointerPressRaycast_k__BackingField,
                      put = __set__pointerPressRaycast_k__BackingField))::UnityEngine::EventSystems::RaycastResult _pointerPressRaycast_k__BackingField;

  /// @brief Field hovered, offset 0xe0, size 0x8
  __declspec(property(get = __get_hovered, put = __set_hovered))::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* hovered;

  /// @brief Field <eligibleForClick>k__BackingField, offset 0xe8, size 0x1
  __declspec(property(get = __get__eligibleForClick_k__BackingField, put = __set__eligibleForClick_k__BackingField)) bool _eligibleForClick_k__BackingField;

  /// @brief Field <pointerId>k__BackingField, offset 0xec, size 0x4
  __declspec(property(get = __get__pointerId_k__BackingField, put = __set__pointerId_k__BackingField)) int32_t _pointerId_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0xf0, size 0x8
  __declspec(property(get = __get__position_k__BackingField, put = __set__position_k__BackingField))::UnityEngine::Vector2 _position_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __get__delta_k__BackingField, put = __set__delta_k__BackingField))::UnityEngine::Vector2 _delta_k__BackingField;

  /// @brief Field <pressPosition>k__BackingField, offset 0x100, size 0x8
  __declspec(property(get = __get__pressPosition_k__BackingField, put = __set__pressPosition_k__BackingField))::UnityEngine::Vector2 _pressPosition_k__BackingField;

  /// @brief Field <worldPosition>k__BackingField, offset 0x108, size 0xc
  __declspec(property(get = __get__worldPosition_k__BackingField, put = __set__worldPosition_k__BackingField))::UnityEngine::Vector3 _worldPosition_k__BackingField;

  /// @brief Field <worldNormal>k__BackingField, offset 0x114, size 0xc
  __declspec(property(get = __get__worldNormal_k__BackingField, put = __set__worldNormal_k__BackingField))::UnityEngine::Vector3 _worldNormal_k__BackingField;

  /// @brief Field <clickTime>k__BackingField, offset 0x120, size 0x4
  __declspec(property(get = __get__clickTime_k__BackingField, put = __set__clickTime_k__BackingField)) float_t _clickTime_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset 0x124, size 0x4
  __declspec(property(get = __get__clickCount_k__BackingField, put = __set__clickCount_k__BackingField)) int32_t _clickCount_k__BackingField;

  /// @brief Field <scrollDelta>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __get__scrollDelta_k__BackingField, put = __set__scrollDelta_k__BackingField))::UnityEngine::Vector2 _scrollDelta_k__BackingField;

  /// @brief Field <useDragThreshold>k__BackingField, offset 0x130, size 0x1
  __declspec(property(get = __get__useDragThreshold_k__BackingField, put = __set__useDragThreshold_k__BackingField)) bool _useDragThreshold_k__BackingField;

  /// @brief Field <dragging>k__BackingField, offset 0x131, size 0x1
  __declspec(property(get = __get__dragging_k__BackingField, put = __set__dragging_k__BackingField)) bool _dragging_k__BackingField;

  /// @brief Field <button>k__BackingField, offset 0x134, size 0x4
  __declspec(property(get = __get__button_k__BackingField, put = __set__button_k__BackingField))::UnityEngine::EventSystems::__PointerEventData__InputButton _button_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset 0x138, size 0x4
  __declspec(property(get = __get__pressure_k__BackingField, put = __set__pressure_k__BackingField)) float_t _pressure_k__BackingField;

  /// @brief Field <tangentialPressure>k__BackingField, offset 0x13c, size 0x4
  __declspec(property(get = __get__tangentialPressure_k__BackingField, put = __set__tangentialPressure_k__BackingField)) float_t _tangentialPressure_k__BackingField;

  /// @brief Field <altitudeAngle>k__BackingField, offset 0x140, size 0x4
  __declspec(property(get = __get__altitudeAngle_k__BackingField, put = __set__altitudeAngle_k__BackingField)) float_t _altitudeAngle_k__BackingField;

  /// @brief Field <azimuthAngle>k__BackingField, offset 0x144, size 0x4
  __declspec(property(get = __get__azimuthAngle_k__BackingField, put = __set__azimuthAngle_k__BackingField)) float_t _azimuthAngle_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset 0x148, size 0x4
  __declspec(property(get = __get__twist_k__BackingField, put = __set__twist_k__BackingField)) float_t _twist_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset 0x14c, size 0x8
  __declspec(property(get = __get__radius_k__BackingField, put = __set__radius_k__BackingField))::UnityEngine::Vector2 _radius_k__BackingField;

  /// @brief Field <radiusVariance>k__BackingField, offset 0x154, size 0x8
  __declspec(property(get = __get__radiusVariance_k__BackingField, put = __set__radiusVariance_k__BackingField))::UnityEngine::Vector2 _radiusVariance_k__BackingField;

  /// @brief Field <fullyExited>k__BackingField, offset 0x15c, size 0x1
  __declspec(property(get = __get__fullyExited_k__BackingField, put = __set__fullyExited_k__BackingField)) bool _fullyExited_k__BackingField;

  /// @brief Field <reentered>k__BackingField, offset 0x15d, size 0x1
  __declspec(property(get = __get__reentered_k__BackingField, put = __set__reentered_k__BackingField)) bool _reentered_k__BackingField;

  __declspec(property(get = get_pointerEnter, put = set_pointerEnter))::UnityEngine::GameObject* pointerEnter;

  __declspec(property(get = get_lastPress, put = set_lastPress))::UnityEngine::GameObject* lastPress;

  __declspec(property(get = get_rawPointerPress, put = set_rawPointerPress))::UnityEngine::GameObject* rawPointerPress;

  __declspec(property(get = get_pointerDrag, put = set_pointerDrag))::UnityEngine::GameObject* pointerDrag;

  __declspec(property(get = get_pointerClick, put = set_pointerClick))::UnityEngine::GameObject* pointerClick;

  __declspec(property(get = get_pointerCurrentRaycast, put = set_pointerCurrentRaycast))::UnityEngine::EventSystems::RaycastResult pointerCurrentRaycast;

  __declspec(property(get = get_pointerPressRaycast, put = set_pointerPressRaycast))::UnityEngine::EventSystems::RaycastResult pointerPressRaycast;

  __declspec(property(get = get_eligibleForClick, put = set_eligibleForClick)) bool eligibleForClick;

  __declspec(property(get = get_pointerId, put = set_pointerId)) int32_t pointerId;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector2 position;

  __declspec(property(get = get_delta, put = set_delta))::UnityEngine::Vector2 delta;

  __declspec(property(get = get_pressPosition, put = set_pressPosition))::UnityEngine::Vector2 pressPosition;

  __declspec(property(get = get_worldPosition, put = set_worldPosition))::UnityEngine::Vector3 worldPosition;

  __declspec(property(get = get_worldNormal, put = set_worldNormal))::UnityEngine::Vector3 worldNormal;

  __declspec(property(get = get_clickTime, put = set_clickTime)) float_t clickTime;

  __declspec(property(get = get_clickCount, put = set_clickCount)) int32_t clickCount;

  __declspec(property(get = get_scrollDelta, put = set_scrollDelta))::UnityEngine::Vector2 scrollDelta;

  __declspec(property(get = get_useDragThreshold, put = set_useDragThreshold)) bool useDragThreshold;

  __declspec(property(get = get_dragging, put = set_dragging)) bool dragging;

  __declspec(property(get = get_button, put = set_button))::UnityEngine::EventSystems::__PointerEventData__InputButton button;

  __declspec(property(get = get_pressure, put = set_pressure)) float_t pressure;

  __declspec(property(get = get_tangentialPressure, put = set_tangentialPressure)) float_t tangentialPressure;

  __declspec(property(get = get_altitudeAngle, put = set_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_azimuthAngle, put = set_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_twist, put = set_twist)) float_t twist;

  __declspec(property(get = get_radius, put = set_radius))::UnityEngine::Vector2 radius;

  __declspec(property(get = get_radiusVariance, put = set_radiusVariance))::UnityEngine::Vector2 radiusVariance;

  __declspec(property(get = get_fullyExited, put = set_fullyExited)) bool fullyExited;

  __declspec(property(get = get_reentered, put = set_reentered)) bool reentered;

  __declspec(property(get = get_enterEventCamera))::UnityEngine::Camera* enterEventCamera;

  __declspec(property(get = get_pressEventCamera))::UnityEngine::Camera* pressEventCamera;

  __declspec(property(get = get_pointerPress, put = set_pointerPress))::UnityEngine::GameObject* pointerPress;

  constexpr ::UnityEngine::GameObject*& __get__pointerEnter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__pointerEnter_k__BackingField() const;

  constexpr void __set__pointerEnter_k__BackingField(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_m_PointerPress();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_m_PointerPress() const;

  constexpr void __set_m_PointerPress(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__lastPress_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__lastPress_k__BackingField() const;

  constexpr void __set__lastPress_k__BackingField(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__rawPointerPress_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__rawPointerPress_k__BackingField() const;

  constexpr void __set__rawPointerPress_k__BackingField(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__pointerDrag_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__pointerDrag_k__BackingField() const;

  constexpr void __set__pointerDrag_k__BackingField(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__pointerClick_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__pointerClick_k__BackingField() const;

  constexpr void __set__pointerClick_k__BackingField(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::EventSystems::RaycastResult& __get__pointerCurrentRaycast_k__BackingField();

  constexpr ::UnityEngine::EventSystems::RaycastResult const& __get__pointerCurrentRaycast_k__BackingField() const;

  constexpr void __set__pointerCurrentRaycast_k__BackingField(::UnityEngine::EventSystems::RaycastResult value);

  constexpr ::UnityEngine::EventSystems::RaycastResult& __get__pointerPressRaycast_k__BackingField();

  constexpr ::UnityEngine::EventSystems::RaycastResult const& __get__pointerPressRaycast_k__BackingField() const;

  constexpr void __set__pointerPressRaycast_k__BackingField(::UnityEngine::EventSystems::RaycastResult value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& __get_hovered();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> const& __get_hovered() const;

  constexpr void __set_hovered(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value);

  constexpr bool& __get__eligibleForClick_k__BackingField();

  constexpr bool const& __get__eligibleForClick_k__BackingField() const;

  constexpr void __set__eligibleForClick_k__BackingField(bool value);

  constexpr int32_t& __get__pointerId_k__BackingField();

  constexpr int32_t const& __get__pointerId_k__BackingField() const;

  constexpr void __set__pointerId_k__BackingField(int32_t value);

  constexpr ::UnityEngine::Vector2& __get__position_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__position_k__BackingField() const;

  constexpr void __set__position_k__BackingField(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__delta_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__delta_k__BackingField() const;

  constexpr void __set__delta_k__BackingField(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__pressPosition_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__pressPosition_k__BackingField() const;

  constexpr void __set__pressPosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector3& __get__worldPosition_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__worldPosition_k__BackingField() const;

  constexpr void __set__worldPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr ::UnityEngine::Vector3& __get__worldNormal_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __get__worldNormal_k__BackingField() const;

  constexpr void __set__worldNormal_k__BackingField(::UnityEngine::Vector3 value);

  constexpr float_t& __get__clickTime_k__BackingField();

  constexpr float_t const& __get__clickTime_k__BackingField() const;

  constexpr void __set__clickTime_k__BackingField(float_t value);

  constexpr int32_t& __get__clickCount_k__BackingField();

  constexpr int32_t const& __get__clickCount_k__BackingField() const;

  constexpr void __set__clickCount_k__BackingField(int32_t value);

  constexpr ::UnityEngine::Vector2& __get__scrollDelta_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__scrollDelta_k__BackingField() const;

  constexpr void __set__scrollDelta_k__BackingField(::UnityEngine::Vector2 value);

  constexpr bool& __get__useDragThreshold_k__BackingField();

  constexpr bool const& __get__useDragThreshold_k__BackingField() const;

  constexpr void __set__useDragThreshold_k__BackingField(bool value);

  constexpr bool& __get__dragging_k__BackingField();

  constexpr bool const& __get__dragging_k__BackingField() const;

  constexpr void __set__dragging_k__BackingField(bool value);

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton& __get__button_k__BackingField();

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton const& __get__button_k__BackingField() const;

  constexpr void __set__button_k__BackingField(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  constexpr float_t& __get__pressure_k__BackingField();

  constexpr float_t const& __get__pressure_k__BackingField() const;

  constexpr void __set__pressure_k__BackingField(float_t value);

  constexpr float_t& __get__tangentialPressure_k__BackingField();

  constexpr float_t const& __get__tangentialPressure_k__BackingField() const;

  constexpr void __set__tangentialPressure_k__BackingField(float_t value);

  constexpr float_t& __get__altitudeAngle_k__BackingField();

  constexpr float_t const& __get__altitudeAngle_k__BackingField() const;

  constexpr void __set__altitudeAngle_k__BackingField(float_t value);

  constexpr float_t& __get__azimuthAngle_k__BackingField();

  constexpr float_t const& __get__azimuthAngle_k__BackingField() const;

  constexpr void __set__azimuthAngle_k__BackingField(float_t value);

  constexpr float_t& __get__twist_k__BackingField();

  constexpr float_t const& __get__twist_k__BackingField() const;

  constexpr void __set__twist_k__BackingField(float_t value);

  constexpr ::UnityEngine::Vector2& __get__radius_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__radius_k__BackingField() const;

  constexpr void __set__radius_k__BackingField(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__radiusVariance_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __get__radiusVariance_k__BackingField() const;

  constexpr void __set__radiusVariance_k__BackingField(::UnityEngine::Vector2 value);

  constexpr bool& __get__fullyExited_k__BackingField();

  constexpr bool const& __get__fullyExited_k__BackingField() const;

  constexpr void __set__fullyExited_k__BackingField(bool value);

  constexpr bool& __get__reentered_k__BackingField();

  constexpr bool const& __get__reentered_k__BackingField() const;

  constexpr void __set__reentered_k__BackingField(bool value);

  /// @brief Method get_pointerEnter, addr 0x2d956c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_pointerEnter();

  /// @brief Method set_pointerEnter, addr 0x2d956cc, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerEnter(::UnityEngine::GameObject* value);

  /// @brief Method get_lastPress, addr 0x2d956d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_lastPress();

  /// @brief Method set_lastPress, addr 0x2d956dc, size 0x8, virtual false, abstract: false, final false
  inline void set_lastPress(::UnityEngine::GameObject* value);

  /// @brief Method get_rawPointerPress, addr 0x2d956e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_rawPointerPress();

  /// @brief Method set_rawPointerPress, addr 0x2d956ec, size 0x8, virtual false, abstract: false, final false
  inline void set_rawPointerPress(::UnityEngine::GameObject* value);

  /// @brief Method get_pointerDrag, addr 0x2d956f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_pointerDrag();

  /// @brief Method set_pointerDrag, addr 0x2d956fc, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerDrag(::UnityEngine::GameObject* value);

  /// @brief Method get_pointerClick, addr 0x2d95704, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_pointerClick();

  /// @brief Method set_pointerClick, addr 0x2d9570c, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerClick(::UnityEngine::GameObject* value);

  /// @brief Method get_pointerCurrentRaycast, addr 0x2d95714, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult get_pointerCurrentRaycast();

  /// @brief Method set_pointerCurrentRaycast, addr 0x2d95724, size 0x18, virtual false, abstract: false, final false
  inline void set_pointerCurrentRaycast(::UnityEngine::EventSystems::RaycastResult value);

  /// @brief Method get_pointerPressRaycast, addr 0x2d9573c, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult get_pointerPressRaycast();

  /// @brief Method set_pointerPressRaycast, addr 0x2d9574c, size 0x18, virtual false, abstract: false, final false
  inline void set_pointerPressRaycast(::UnityEngine::EventSystems::RaycastResult value);

  /// @brief Method get_eligibleForClick, addr 0x2d95764, size 0x8, virtual false, abstract: false, final false
  inline bool get_eligibleForClick();

  /// @brief Method set_eligibleForClick, addr 0x2d9576c, size 0xc, virtual false, abstract: false, final false
  inline void set_eligibleForClick(bool value);

  /// @brief Method get_pointerId, addr 0x2d95778, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pointerId();

  /// @brief Method set_pointerId, addr 0x2d95780, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerId(int32_t value);

  /// @brief Method get_position, addr 0x2d95788, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method set_position, addr 0x2d95790, size 0x8, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method get_delta, addr 0x2d95798, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_delta();

  /// @brief Method set_delta, addr 0x2d957a0, size 0x8, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::Vector2 value);

  /// @brief Method get_pressPosition, addr 0x2d957a8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pressPosition();

  /// @brief Method set_pressPosition, addr 0x2d957b4, size 0xc, virtual false, abstract: false, final false
  inline void set_pressPosition(::UnityEngine::Vector2 value);

  /// @brief Method get_worldPosition, addr 0x2d957c0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldPosition();

  /// @brief Method set_worldPosition, addr 0x2d957d0, size 0x10, virtual false, abstract: false, final false
  inline void set_worldPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_worldNormal, addr 0x2d957e0, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldNormal();

  /// @brief Method set_worldNormal, addr 0x2d957f0, size 0x10, virtual false, abstract: false, final false
  inline void set_worldNormal(::UnityEngine::Vector3 value);

  /// @brief Method get_clickTime, addr 0x2d95800, size 0x8, virtual false, abstract: false, final false
  inline float_t get_clickTime();

  /// @brief Method set_clickTime, addr 0x2d95808, size 0x8, virtual false, abstract: false, final false
  inline void set_clickTime(float_t value);

  /// @brief Method get_clickCount, addr 0x2d95810, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method set_clickCount, addr 0x2d95818, size 0x8, virtual false, abstract: false, final false
  inline void set_clickCount(int32_t value);

  /// @brief Method get_scrollDelta, addr 0x2d95820, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scrollDelta();

  /// @brief Method set_scrollDelta, addr 0x2d9582c, size 0xc, virtual false, abstract: false, final false
  inline void set_scrollDelta(::UnityEngine::Vector2 value);

  /// @brief Method get_useDragThreshold, addr 0x2d95838, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDragThreshold();

  /// @brief Method set_useDragThreshold, addr 0x2d95840, size 0xc, virtual false, abstract: false, final false
  inline void set_useDragThreshold(bool value);

  /// @brief Method get_dragging, addr 0x2d9584c, size 0x8, virtual false, abstract: false, final false
  inline bool get_dragging();

  /// @brief Method set_dragging, addr 0x2d95854, size 0xc, virtual false, abstract: false, final false
  inline void set_dragging(bool value);

  /// @brief Method get_button, addr 0x2d95860, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::__PointerEventData__InputButton get_button();

  /// @brief Method set_button, addr 0x2d95868, size 0x8, virtual false, abstract: false, final false
  inline void set_button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  /// @brief Method get_pressure, addr 0x2d95870, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method set_pressure, addr 0x2d95878, size 0x8, virtual false, abstract: false, final false
  inline void set_pressure(float_t value);

  /// @brief Method get_tangentialPressure, addr 0x2d95880, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tangentialPressure();

  /// @brief Method set_tangentialPressure, addr 0x2d95888, size 0x8, virtual false, abstract: false, final false
  inline void set_tangentialPressure(float_t value);

  /// @brief Method get_altitudeAngle, addr 0x2d95890, size 0x8, virtual false, abstract: false, final false
  inline float_t get_altitudeAngle();

  /// @brief Method set_altitudeAngle, addr 0x2d95898, size 0x8, virtual false, abstract: false, final false
  inline void set_altitudeAngle(float_t value);

  /// @brief Method get_azimuthAngle, addr 0x2d958a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_azimuthAngle();

  /// @brief Method set_azimuthAngle, addr 0x2d958a8, size 0x8, virtual false, abstract: false, final false
  inline void set_azimuthAngle(float_t value);

  /// @brief Method get_twist, addr 0x2d958b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_twist();

  /// @brief Method set_twist, addr 0x2d958b8, size 0x8, virtual false, abstract: false, final false
  inline void set_twist(float_t value);

  /// @brief Method get_radius, addr 0x2d958c0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radius();

  /// @brief Method set_radius, addr 0x2d958cc, size 0xc, virtual false, abstract: false, final false
  inline void set_radius(::UnityEngine::Vector2 value);

  /// @brief Method get_radiusVariance, addr 0x2d958d8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radiusVariance();

  /// @brief Method set_radiusVariance, addr 0x2d958e4, size 0xc, virtual false, abstract: false, final false
  inline void set_radiusVariance(::UnityEngine::Vector2 value);

  /// @brief Method get_fullyExited, addr 0x2d958f0, size 0x8, virtual false, abstract: false, final false
  inline bool get_fullyExited();

  /// @brief Method set_fullyExited, addr 0x2d958f8, size 0xc, virtual false, abstract: false, final false
  inline void set_fullyExited(bool value);

  /// @brief Method get_reentered, addr 0x2d95904, size 0x8, virtual false, abstract: false, final false
  inline bool get_reentered();

  /// @brief Method set_reentered, addr 0x2d9590c, size 0xc, virtual false, abstract: false, final false
  inline void set_reentered(bool value);

  static inline ::UnityEngine::EventSystems::PointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method .ctor, addr 0x2d95918, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method IsPointerMoving, addr 0x2d95a44, size 0x1c, virtual false, abstract: false, final false
  inline bool IsPointerMoving();

  /// @brief Method IsScrolling, addr 0x2d95a60, size 0x20, virtual false, abstract: false, final false
  inline bool IsScrolling();

  /// @brief Method get_enterEventCamera, addr 0x2d95a80, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera* get_enterEventCamera();

  /// @brief Method get_pressEventCamera, addr 0x2d95b10, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Camera* get_pressEventCamera();

  /// @brief Method get_pointerPress, addr 0x2d95ba0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::GameObject* get_pointerPress();

  /// @brief Method set_pointerPress, addr 0x2d95ba8, size 0x7c, virtual false, abstract: false, final false
  inline void set_pointerPress(::UnityEngine::GameObject* value);

  /// @brief Method ToString, addr 0x2d95c24, size 0x5e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEventData(PointerEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEventData(PointerEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventData();

public:
  /// @brief Field <pointerEnter>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____pointerEnter_k__BackingField;

  /// @brief Field m_PointerPress, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___m_PointerPress;

  /// @brief Field <lastPress>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____lastPress_k__BackingField;

  /// @brief Field <rawPointerPress>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____rawPointerPress_k__BackingField;

  /// @brief Field <pointerDrag>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____pointerDrag_k__BackingField;

  /// @brief Field <pointerClick>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____pointerClick_k__BackingField;

  /// @brief Field <pointerCurrentRaycast>k__BackingField, offset: 0x50, size: 0x48, def value: None
  ::UnityEngine::EventSystems::RaycastResult ____pointerCurrentRaycast_k__BackingField;

  /// @brief Field <pointerPressRaycast>k__BackingField, offset: 0x98, size: 0x48, def value: None
  ::UnityEngine::EventSystems::RaycastResult ____pointerPressRaycast_k__BackingField;

  /// @brief Field hovered, offset: 0xe0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ___hovered;

  /// @brief Field <eligibleForClick>k__BackingField, offset: 0xe8, size: 0x1, def value: None
  bool ____eligibleForClick_k__BackingField;

  /// @brief Field <pointerId>k__BackingField, offset: 0xec, size: 0x4, def value: None
  int32_t ____pointerId_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____position_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____delta_k__BackingField;

  /// @brief Field <pressPosition>k__BackingField, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____pressPosition_k__BackingField;

  /// @brief Field <worldPosition>k__BackingField, offset: 0x108, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____worldPosition_k__BackingField;

  /// @brief Field <worldNormal>k__BackingField, offset: 0x114, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____worldNormal_k__BackingField;

  /// @brief Field <clickTime>k__BackingField, offset: 0x120, size: 0x4, def value: None
  float_t ____clickTime_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset: 0x124, size: 0x4, def value: None
  int32_t ____clickCount_k__BackingField;

  /// @brief Field <scrollDelta>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____scrollDelta_k__BackingField;

  /// @brief Field <useDragThreshold>k__BackingField, offset: 0x130, size: 0x1, def value: None
  bool ____useDragThreshold_k__BackingField;

  /// @brief Field <dragging>k__BackingField, offset: 0x131, size: 0x1, def value: None
  bool ____dragging_k__BackingField;

  /// @brief Field <button>k__BackingField, offset: 0x134, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__InputButton ____button_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset: 0x138, size: 0x4, def value: None
  float_t ____pressure_k__BackingField;

  /// @brief Field <tangentialPressure>k__BackingField, offset: 0x13c, size: 0x4, def value: None
  float_t ____tangentialPressure_k__BackingField;

  /// @brief Field <altitudeAngle>k__BackingField, offset: 0x140, size: 0x4, def value: None
  float_t ____altitudeAngle_k__BackingField;

  /// @brief Field <azimuthAngle>k__BackingField, offset: 0x144, size: 0x4, def value: None
  float_t ____azimuthAngle_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset: 0x148, size: 0x4, def value: None
  float_t ____twist_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0x14c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____radius_k__BackingField;

  /// @brief Field <radiusVariance>k__BackingField, offset: 0x154, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____radiusVariance_k__BackingField;

  /// @brief Field <fullyExited>k__BackingField, offset: 0x15c, size: 0x1, def value: None
  bool ____fullyExited_k__BackingField;

  /// @brief Field <reentered>k__BackingField, offset: 0x15d, size: 0x1, def value: None
  bool ____reentered_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerEventData, 0x160>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerEnter_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ___m_PointerPress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____lastPress_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____rawPointerPress_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerDrag_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerClick_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerCurrentRaycast_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerPressRaycast_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ___hovered) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____eligibleForClick_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerId_k__BackingField) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____position_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____delta_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pressPosition_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____worldPosition_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____worldNormal_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____clickTime_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____clickCount_k__BackingField) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____scrollDelta_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____useDragThreshold_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____dragging_k__BackingField) == 0x131, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____button_k__BackingField) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pressure_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____tangentialPressure_k__BackingField) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____altitudeAngle_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____azimuthAngle_k__BackingField) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____twist_k__BackingField) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____radius_k__BackingField) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____radiusVariance_k__BackingField) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____fullyExited_k__BackingField) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____reentered_k__BackingField) == 0x15d, "Offset mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PointerEventData__FramePressState, "UnityEngine.EventSystems", "PointerEventData/FramePressState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PointerEventData__InputButton, "UnityEngine.EventSystems", "PointerEventData/InputButton");
NEED_NO_BOX(::UnityEngine::EventSystems::PointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerEventData*, "UnityEngine.EventSystems", "PointerEventData");
