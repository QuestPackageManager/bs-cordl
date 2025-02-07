#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
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
struct PointerEventData_FramePressState;
}
namespace UnityEngine::EventSystems {
struct PointerEventData_InputButton;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct PenStatus;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
struct PointerEventData_FramePressState;
}
namespace UnityEngine::EventSystems {
struct PointerEventData_InputButton;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EventSystems::PointerEventData_FramePressState);
MARK_VAL_T(::UnityEngine::EventSystems::PointerEventData_InputButton);
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerEventData);
// Dependencies
namespace UnityEngine::EventSystems {
// Is value type: true
// CS Name: UnityEngine.EventSystems.PointerEventData/InputButton
struct CORDL_TYPE PointerEventData_InputButton {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PointerEventData_InputButton_Unwrapped
  enum struct __PointerEventData_InputButton_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
    __E_Middle = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PointerEventData_InputButton_Unwrapped() const noexcept {
    return static_cast<__PointerEventData_InputButton_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventData_InputButton();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PointerEventData_InputButton(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::UnityEngine::EventSystems::PointerEventData_InputButton const Left;

  /// @brief Field Middle value: I32(2)
  static ::UnityEngine::EventSystems::PointerEventData_InputButton const Middle;

  /// @brief Field Right value: I32(1)
  static ::UnityEngine::EventSystems::PointerEventData_InputButton const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15180 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData_InputButton, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerEventData_InputButton, 0x4>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies
namespace UnityEngine::EventSystems {
// Is value type: true
// CS Name: UnityEngine.EventSystems.PointerEventData/FramePressState
struct CORDL_TYPE PointerEventData_FramePressState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PointerEventData_FramePressState_Unwrapped
  enum struct __PointerEventData_FramePressState_Unwrapped : int32_t {
    __E_Pressed = static_cast<int32_t>(0x0),
    __E_Released = static_cast<int32_t>(0x1),
    __E_PressedAndReleased = static_cast<int32_t>(0x2),
    __E_NotChanged = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PointerEventData_FramePressState_Unwrapped() const noexcept {
    return static_cast<__PointerEventData_FramePressState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventData_FramePressState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PointerEventData_FramePressState(int32_t value__) noexcept;

  /// @brief Field NotChanged value: I32(3)
  static ::UnityEngine::EventSystems::PointerEventData_FramePressState const NotChanged;

  /// @brief Field Pressed value: I32(0)
  static ::UnityEngine::EventSystems::PointerEventData_FramePressState const Pressed;

  /// @brief Field PressedAndReleased value: I32(2)
  static ::UnityEngine::EventSystems::PointerEventData_FramePressState const PressedAndReleased;

  /// @brief Field Released value: I32(1)
  static ::UnityEngine::EventSystems::PointerEventData_FramePressState const Released;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15181 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData_FramePressState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerEventData_FramePressState, 0x4>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Dependencies UnityEngine.EventSystems.BaseEventData, UnityEngine.EventSystems.PointerEventData::InputButton, UnityEngine.EventSystems.RaycastResult, UnityEngine.PenStatus, UnityEngine.Vector2,
// UnityEngine.Vector3
namespace UnityEngine::EventSystems {
// Is value type: false
// CS Name: UnityEngine.EventSystems.PointerEventData
class CORDL_TYPE PointerEventData : public ::UnityEngine::EventSystems::BaseEventData {
public:
  // Declarations
  using FramePressState = ::UnityEngine::EventSystems::PointerEventData_FramePressState;

  using InputButton = ::UnityEngine::EventSystems::PointerEventData_InputButton;

  /// @brief Field <altitudeAngle>k__BackingField, offset 0x154, size 0x4
  __declspec(property(get = __cordl_internal_get__altitudeAngle_k__BackingField, put = __cordl_internal_set__altitudeAngle_k__BackingField)) float_t _altitudeAngle_k__BackingField;

  /// @brief Field <azimuthAngle>k__BackingField, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get__azimuthAngle_k__BackingField, put = __cordl_internal_set__azimuthAngle_k__BackingField)) float_t _azimuthAngle_k__BackingField;

  /// @brief Field <button>k__BackingField, offset 0x148, size 0x4
  __declspec(property(get = __cordl_internal_get__button_k__BackingField,
                      put = __cordl_internal_set__button_k__BackingField)) ::UnityEngine::EventSystems::PointerEventData_InputButton _button_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset 0x138, size 0x4
  __declspec(property(get = __cordl_internal_get__clickCount_k__BackingField, put = __cordl_internal_set__clickCount_k__BackingField)) int32_t _clickCount_k__BackingField;

  /// @brief Field <clickTime>k__BackingField, offset 0x134, size 0x4
  __declspec(property(get = __cordl_internal_get__clickTime_k__BackingField, put = __cordl_internal_set__clickTime_k__BackingField)) float_t _clickTime_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset 0x10c, size 0x8
  __declspec(property(get = __cordl_internal_get__delta_k__BackingField, put = __cordl_internal_set__delta_k__BackingField)) ::UnityEngine::Vector2 _delta_k__BackingField;

  /// @brief Field <displayIndex>k__BackingField, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get__displayIndex_k__BackingField, put = __cordl_internal_set__displayIndex_k__BackingField)) int32_t _displayIndex_k__BackingField;

  /// @brief Field <dragging>k__BackingField, offset 0x145, size 0x1
  __declspec(property(get = __cordl_internal_get__dragging_k__BackingField, put = __cordl_internal_set__dragging_k__BackingField)) bool _dragging_k__BackingField;

  /// @brief Field <eligibleForClick>k__BackingField, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get__eligibleForClick_k__BackingField, put = __cordl_internal_set__eligibleForClick_k__BackingField)) bool _eligibleForClick_k__BackingField;

  /// @brief Field <fullyExited>k__BackingField, offset 0x17c, size 0x1
  __declspec(property(get = __cordl_internal_get__fullyExited_k__BackingField, put = __cordl_internal_set__fullyExited_k__BackingField)) bool _fullyExited_k__BackingField;

  /// @brief Field <lastPress>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lastPress_k__BackingField, put = __cordl_internal_set__lastPress_k__BackingField)) ::UnityW<::UnityEngine::GameObject> _lastPress_k__BackingField;

  /// @brief Field <penStatus>k__BackingField, offset 0x168, size 0x4
  __declspec(property(get = __cordl_internal_get__penStatus_k__BackingField, put = __cordl_internal_set__penStatus_k__BackingField)) ::UnityEngine::PenStatus _penStatus_k__BackingField;

  /// @brief Field <pointerClick>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerClick_k__BackingField, put = __cordl_internal_set__pointerClick_k__BackingField)) ::UnityW<::UnityEngine::GameObject>
      _pointerClick_k__BackingField;

  /// @brief Field <pointerCurrentRaycast>k__BackingField, offset 0x50, size 0x50
  __declspec(property(get = __cordl_internal_get__pointerCurrentRaycast_k__BackingField,
                      put = __cordl_internal_set__pointerCurrentRaycast_k__BackingField)) ::UnityEngine::EventSystems::RaycastResult _pointerCurrentRaycast_k__BackingField;

  /// @brief Field <pointerDrag>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerDrag_k__BackingField, put = __cordl_internal_set__pointerDrag_k__BackingField)) ::UnityW<::UnityEngine::GameObject>
      _pointerDrag_k__BackingField;

  /// @brief Field <pointerEnter>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerEnter_k__BackingField, put = __cordl_internal_set__pointerEnter_k__BackingField)) ::UnityW<::UnityEngine::GameObject>
      _pointerEnter_k__BackingField;

  /// @brief Field <pointerId>k__BackingField, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get__pointerId_k__BackingField, put = __cordl_internal_set__pointerId_k__BackingField)) int32_t _pointerId_k__BackingField;

  /// @brief Field <pointerPressRaycast>k__BackingField, offset 0xa0, size 0x50
  __declspec(property(get = __cordl_internal_get__pointerPressRaycast_k__BackingField,
                      put = __cordl_internal_set__pointerPressRaycast_k__BackingField)) ::UnityEngine::EventSystems::RaycastResult _pointerPressRaycast_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x104, size 0x8
  __declspec(property(get = __cordl_internal_get__position_k__BackingField, put = __cordl_internal_set__position_k__BackingField)) ::UnityEngine::Vector2 _position_k__BackingField;

  /// @brief Field <pressPosition>k__BackingField, offset 0x114, size 0x8
  __declspec(property(get = __cordl_internal_get__pressPosition_k__BackingField, put = __cordl_internal_set__pressPosition_k__BackingField)) ::UnityEngine::Vector2 _pressPosition_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset 0x14c, size 0x4
  __declspec(property(get = __cordl_internal_get__pressure_k__BackingField, put = __cordl_internal_set__pressure_k__BackingField)) float_t _pressure_k__BackingField;

  /// @brief Field <radiusVariance>k__BackingField, offset 0x174, size 0x8
  __declspec(property(get = __cordl_internal_get__radiusVariance_k__BackingField, put = __cordl_internal_set__radiusVariance_k__BackingField)) ::UnityEngine::Vector2 _radiusVariance_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset 0x16c, size 0x8
  __declspec(property(get = __cordl_internal_get__radius_k__BackingField, put = __cordl_internal_set__radius_k__BackingField)) ::UnityEngine::Vector2 _radius_k__BackingField;

  /// @brief Field <rawPointerPress>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__rawPointerPress_k__BackingField, put = __cordl_internal_set__rawPointerPress_k__BackingField)) ::UnityW<::UnityEngine::GameObject>
      _rawPointerPress_k__BackingField;

  /// @brief Field <reentered>k__BackingField, offset 0x17d, size 0x1
  __declspec(property(get = __cordl_internal_get__reentered_k__BackingField, put = __cordl_internal_set__reentered_k__BackingField)) bool _reentered_k__BackingField;

  /// @brief Field <scrollDelta>k__BackingField, offset 0x13c, size 0x8
  __declspec(property(get = __cordl_internal_get__scrollDelta_k__BackingField, put = __cordl_internal_set__scrollDelta_k__BackingField)) ::UnityEngine::Vector2 _scrollDelta_k__BackingField;

  /// @brief Field <tangentialPressure>k__BackingField, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get__tangentialPressure_k__BackingField, put = __cordl_internal_set__tangentialPressure_k__BackingField)) float_t _tangentialPressure_k__BackingField;

  /// @brief Field <tilt>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__tilt_k__BackingField, put = __cordl_internal_set__tilt_k__BackingField)) ::UnityEngine::Vector2 _tilt_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get__twist_k__BackingField, put = __cordl_internal_set__twist_k__BackingField)) float_t _twist_k__BackingField;

  /// @brief Field <useDragThreshold>k__BackingField, offset 0x144, size 0x1
  __declspec(property(get = __cordl_internal_get__useDragThreshold_k__BackingField, put = __cordl_internal_set__useDragThreshold_k__BackingField)) bool _useDragThreshold_k__BackingField;

  /// @brief Field <worldNormal>k__BackingField, offset 0x128, size 0xc
  __declspec(property(get = __cordl_internal_get__worldNormal_k__BackingField, put = __cordl_internal_set__worldNormal_k__BackingField)) ::UnityEngine::Vector3 _worldNormal_k__BackingField;

  /// @brief Field <worldPosition>k__BackingField, offset 0x11c, size 0xc
  __declspec(property(get = __cordl_internal_get__worldPosition_k__BackingField, put = __cordl_internal_set__worldPosition_k__BackingField)) ::UnityEngine::Vector3 _worldPosition_k__BackingField;

  __declspec(property(get = get_altitudeAngle, put = set_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_azimuthAngle, put = set_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_button, put = set_button)) ::UnityEngine::EventSystems::PointerEventData_InputButton button;

  __declspec(property(get = get_clickCount, put = set_clickCount)) int32_t clickCount;

  __declspec(property(get = get_clickTime, put = set_clickTime)) float_t clickTime;

  __declspec(property(get = get_delta, put = set_delta)) ::UnityEngine::Vector2 delta;

  __declspec(property(get = get_displayIndex, put = set_displayIndex)) int32_t displayIndex;

  __declspec(property(get = get_dragging, put = set_dragging)) bool dragging;

  __declspec(property(get = get_eligibleForClick, put = set_eligibleForClick)) bool eligibleForClick;

  __declspec(property(get = get_enterEventCamera)) ::UnityW<::UnityEngine::Camera> enterEventCamera;

  __declspec(property(get = get_fullyExited, put = set_fullyExited)) bool fullyExited;

  /// @brief Field hovered, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_hovered, put = __cordl_internal_set_hovered)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* hovered;

  __declspec(property(get = get_lastPress, put = set_lastPress)) ::UnityW<::UnityEngine::GameObject> lastPress;

  /// @brief Field m_PointerPress, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerPress, put = __cordl_internal_set_m_PointerPress)) ::UnityW<::UnityEngine::GameObject> m_PointerPress;

  __declspec(property(get = get_penStatus, put = set_penStatus)) ::UnityEngine::PenStatus penStatus;

  __declspec(property(get = get_pointerClick, put = set_pointerClick)) ::UnityW<::UnityEngine::GameObject> pointerClick;

  __declspec(property(get = get_pointerCurrentRaycast, put = set_pointerCurrentRaycast)) ::UnityEngine::EventSystems::RaycastResult pointerCurrentRaycast;

  __declspec(property(get = get_pointerDrag, put = set_pointerDrag)) ::UnityW<::UnityEngine::GameObject> pointerDrag;

  __declspec(property(get = get_pointerEnter, put = set_pointerEnter)) ::UnityW<::UnityEngine::GameObject> pointerEnter;

  __declspec(property(get = get_pointerId, put = set_pointerId)) int32_t pointerId;

  __declspec(property(get = get_pointerPress, put = set_pointerPress)) ::UnityW<::UnityEngine::GameObject> pointerPress;

  __declspec(property(get = get_pointerPressRaycast, put = set_pointerPressRaycast)) ::UnityEngine::EventSystems::RaycastResult pointerPressRaycast;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector2 position;

  __declspec(property(get = get_pressEventCamera)) ::UnityW<::UnityEngine::Camera> pressEventCamera;

  __declspec(property(get = get_pressPosition, put = set_pressPosition)) ::UnityEngine::Vector2 pressPosition;

  __declspec(property(get = get_pressure, put = set_pressure)) float_t pressure;

  __declspec(property(get = get_radius, put = set_radius)) ::UnityEngine::Vector2 radius;

  __declspec(property(get = get_radiusVariance, put = set_radiusVariance)) ::UnityEngine::Vector2 radiusVariance;

  __declspec(property(get = get_rawPointerPress, put = set_rawPointerPress)) ::UnityW<::UnityEngine::GameObject> rawPointerPress;

  __declspec(property(get = get_reentered, put = set_reentered)) bool reentered;

  __declspec(property(get = get_scrollDelta, put = set_scrollDelta)) ::UnityEngine::Vector2 scrollDelta;

  __declspec(property(get = get_tangentialPressure, put = set_tangentialPressure)) float_t tangentialPressure;

  __declspec(property(get = get_tilt, put = set_tilt)) ::UnityEngine::Vector2 tilt;

  __declspec(property(get = get_twist, put = set_twist)) float_t twist;

  __declspec(property(get = get_useDragThreshold, put = set_useDragThreshold)) bool useDragThreshold;

  __declspec(property(get = get_worldNormal, put = set_worldNormal)) ::UnityEngine::Vector3 worldNormal;

  __declspec(property(get = get_worldPosition, put = set_worldPosition)) ::UnityEngine::Vector3 worldPosition;

  /// @brief Method IsPointerMoving, addr 0x4adad34, size 0x20, virtual false, abstract: false, final false
  inline bool IsPointerMoving();

  /// @brief Method IsScrolling, addr 0x4adad54, size 0x20, virtual false, abstract: false, final false
  inline bool IsScrolling();

  static inline ::UnityEngine::EventSystems::PointerEventData* New_ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method ToString, addr 0x4adaf18, size 0x738, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get__altitudeAngle_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__altitudeAngle_k__BackingField();

  constexpr float_t const& __cordl_internal_get__azimuthAngle_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__azimuthAngle_k__BackingField();

  constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton const& __cordl_internal_get__button_k__BackingField() const;

  constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton& __cordl_internal_get__button_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__clickCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__clickCount_k__BackingField();

  constexpr float_t const& __cordl_internal_get__clickTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__clickTime_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__delta_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__delta_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__displayIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__displayIndex_k__BackingField();

  constexpr bool const& __cordl_internal_get__dragging_k__BackingField() const;

  constexpr bool& __cordl_internal_get__dragging_k__BackingField();

  constexpr bool const& __cordl_internal_get__eligibleForClick_k__BackingField() const;

  constexpr bool& __cordl_internal_get__eligibleForClick_k__BackingField();

  constexpr bool const& __cordl_internal_get__fullyExited_k__BackingField() const;

  constexpr bool& __cordl_internal_get__fullyExited_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__lastPress_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__lastPress_k__BackingField();

  constexpr ::UnityEngine::PenStatus const& __cordl_internal_get__penStatus_k__BackingField() const;

  constexpr ::UnityEngine::PenStatus& __cordl_internal_get__penStatus_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pointerClick_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pointerClick_k__BackingField();

  constexpr ::UnityEngine::EventSystems::RaycastResult const& __cordl_internal_get__pointerCurrentRaycast_k__BackingField() const;

  constexpr ::UnityEngine::EventSystems::RaycastResult& __cordl_internal_get__pointerCurrentRaycast_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pointerDrag_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pointerDrag_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__pointerEnter_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__pointerEnter_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__pointerId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__pointerId_k__BackingField();

  constexpr ::UnityEngine::EventSystems::RaycastResult const& __cordl_internal_get__pointerPressRaycast_k__BackingField() const;

  constexpr ::UnityEngine::EventSystems::RaycastResult& __cordl_internal_get__pointerPressRaycast_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__position_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__position_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__pressPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__pressPosition_k__BackingField();

  constexpr float_t const& __cordl_internal_get__pressure_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__pressure_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radiusVariance_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__radiusVariance_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radius_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__radius_k__BackingField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__rawPointerPress_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__rawPointerPress_k__BackingField();

  constexpr bool const& __cordl_internal_get__reentered_k__BackingField() const;

  constexpr bool& __cordl_internal_get__reentered_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__scrollDelta_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__scrollDelta_k__BackingField();

  constexpr float_t const& __cordl_internal_get__tangentialPressure_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__tangentialPressure_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__tilt_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__tilt_k__BackingField();

  constexpr float_t const& __cordl_internal_get__twist_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__twist_k__BackingField();

  constexpr bool const& __cordl_internal_get__useDragThreshold_k__BackingField() const;

  constexpr bool& __cordl_internal_get__useDragThreshold_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__worldNormal_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__worldNormal_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__worldPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__worldPosition_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_hovered() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_hovered();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_PointerPress() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_PointerPress();

  constexpr void __cordl_internal_set__altitudeAngle_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__azimuthAngle_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__button_k__BackingField(::UnityEngine::EventSystems::PointerEventData_InputButton value);

  constexpr void __cordl_internal_set__clickCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__clickTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__delta_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__displayIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__dragging_k__BackingField(bool value);

  constexpr void __cordl_internal_set__eligibleForClick_k__BackingField(bool value);

  constexpr void __cordl_internal_set__fullyExited_k__BackingField(bool value);

  constexpr void __cordl_internal_set__lastPress_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__penStatus_k__BackingField(::UnityEngine::PenStatus value);

  constexpr void __cordl_internal_set__pointerClick_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__pointerCurrentRaycast_k__BackingField(::UnityEngine::EventSystems::RaycastResult value);

  constexpr void __cordl_internal_set__pointerDrag_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__pointerEnter_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__pointerId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__pointerPressRaycast_k__BackingField(::UnityEngine::EventSystems::RaycastResult value);

  constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__pressPosition_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__pressure_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__radiusVariance_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__radius_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__rawPointerPress_k__BackingField(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__reentered_k__BackingField(bool value);

  constexpr void __cordl_internal_set__scrollDelta_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__tangentialPressure_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__tilt_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__twist_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__useDragThreshold_k__BackingField(bool value);

  constexpr void __cordl_internal_set__worldNormal_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__worldPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_hovered(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set_m_PointerPress(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x4adac08, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::EventSystems::EventSystem* eventSystem);

  /// @brief Method get_altitudeAngle, addr 0x4adab58, size 0x8, virtual false, abstract: false, final false
  inline float_t get_altitudeAngle();

  /// @brief Method get_azimuthAngle, addr 0x4adab68, size 0x8, virtual false, abstract: false, final false
  inline float_t get_azimuthAngle();

  /// @brief Method get_button, addr 0x4adab28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::PointerEventData_InputButton get_button();

  /// @brief Method get_clickCount, addr 0x4adaad8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method get_clickTime, addr 0x4adaac8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_clickTime();

  /// @brief Method get_delta, addr 0x4adaa58, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_delta();

  /// @brief Method get_displayIndex, addr 0x4adaa20, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_displayIndex();

  /// @brief Method get_dragging, addr 0x4adab14, size 0x8, virtual false, abstract: false, final false
  inline bool get_dragging();

  /// @brief Method get_eligibleForClick, addr 0x4adaa0c, size 0x8, virtual false, abstract: false, final false
  inline bool get_eligibleForClick();

  /// @brief Method get_enterEventCamera, addr 0x4adad74, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_enterEventCamera();

  /// @brief Method get_fullyExited, addr 0x4adabe0, size 0x8, virtual false, abstract: false, final false
  inline bool get_fullyExited();

  /// @brief Method get_lastPress, addr 0x4ada97c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_lastPress();

  /// @brief Method get_penStatus, addr 0x4adaba0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::PenStatus get_penStatus();

  /// @brief Method get_pointerClick, addr 0x4ada9ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pointerClick();

  /// @brief Method get_pointerCurrentRaycast, addr 0x4ada9bc, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult get_pointerCurrentRaycast();

  /// @brief Method get_pointerDrag, addr 0x4ada99c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pointerDrag();

  /// @brief Method get_pointerEnter, addr 0x4ada96c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pointerEnter();

  /// @brief Method get_pointerId, addr 0x4adaa30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_pointerId();

  /// @brief Method get_pointerPress, addr 0x4adae94, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_pointerPress();

  /// @brief Method get_pointerPressRaycast, addr 0x4ada9e4, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::EventSystems::RaycastResult get_pointerPressRaycast();

  /// @brief Method get_position, addr 0x4adaa40, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_position();

  /// @brief Method get_pressEventCamera, addr 0x4adae04, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_pressEventCamera();

  /// @brief Method get_pressPosition, addr 0x4adaa70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_pressPosition();

  /// @brief Method get_pressure, addr 0x4adab38, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_radius, addr 0x4adabb0, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radius();

  /// @brief Method get_radiusVariance, addr 0x4adabc8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radiusVariance();

  /// @brief Method get_rawPointerPress, addr 0x4ada98c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_rawPointerPress();

  /// @brief Method get_reentered, addr 0x4adabf4, size 0x8, virtual false, abstract: false, final false
  inline bool get_reentered();

  /// @brief Method get_scrollDelta, addr 0x4adaae8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_scrollDelta();

  /// @brief Method get_tangentialPressure, addr 0x4adab48, size 0x8, virtual false, abstract: false, final false
  inline float_t get_tangentialPressure();

  /// @brief Method get_tilt, addr 0x4adab88, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_tilt();

  /// @brief Method get_twist, addr 0x4adab78, size 0x8, virtual false, abstract: false, final false
  inline float_t get_twist();

  /// @brief Method get_useDragThreshold, addr 0x4adab00, size 0x8, virtual false, abstract: false, final false
  inline bool get_useDragThreshold();

  /// @brief Method get_worldNormal, addr 0x4adaaa8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldNormal();

  /// @brief Method get_worldPosition, addr 0x4adaa88, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldPosition();

  /// @brief Method set_altitudeAngle, addr 0x4adab60, size 0x8, virtual false, abstract: false, final false
  inline void set_altitudeAngle(float_t value);

  /// @brief Method set_azimuthAngle, addr 0x4adab70, size 0x8, virtual false, abstract: false, final false
  inline void set_azimuthAngle(float_t value);

  /// @brief Method set_button, addr 0x4adab30, size 0x8, virtual false, abstract: false, final false
  inline void set_button(::UnityEngine::EventSystems::PointerEventData_InputButton value);

  /// @brief Method set_clickCount, addr 0x4adaae0, size 0x8, virtual false, abstract: false, final false
  inline void set_clickCount(int32_t value);

  /// @brief Method set_clickTime, addr 0x4adaad0, size 0x8, virtual false, abstract: false, final false
  inline void set_clickTime(float_t value);

  /// @brief Method set_delta, addr 0x4adaa64, size 0xc, virtual false, abstract: false, final false
  inline void set_delta(::UnityEngine::Vector2 value);

  /// @brief Method set_displayIndex, addr 0x4adaa28, size 0x8, virtual false, abstract: false, final false
  inline void set_displayIndex(int32_t value);

  /// @brief Method set_dragging, addr 0x4adab1c, size 0xc, virtual false, abstract: false, final false
  inline void set_dragging(bool value);

  /// @brief Method set_eligibleForClick, addr 0x4adaa14, size 0xc, virtual false, abstract: false, final false
  inline void set_eligibleForClick(bool value);

  /// @brief Method set_fullyExited, addr 0x4adabe8, size 0xc, virtual false, abstract: false, final false
  inline void set_fullyExited(bool value);

  /// @brief Method set_lastPress, addr 0x4ada984, size 0x8, virtual false, abstract: false, final false
  inline void set_lastPress(::UnityEngine::GameObject* value);

  /// @brief Method set_penStatus, addr 0x4adaba8, size 0x8, virtual false, abstract: false, final false
  inline void set_penStatus(::UnityEngine::PenStatus value);

  /// @brief Method set_pointerClick, addr 0x4ada9b4, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerClick(::UnityEngine::GameObject* value);

  /// @brief Method set_pointerCurrentRaycast, addr 0x4ada9cc, size 0x18, virtual false, abstract: false, final false
  inline void set_pointerCurrentRaycast(::UnityEngine::EventSystems::RaycastResult value);

  /// @brief Method set_pointerDrag, addr 0x4ada9a4, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerDrag(::UnityEngine::GameObject* value);

  /// @brief Method set_pointerEnter, addr 0x4ada974, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerEnter(::UnityEngine::GameObject* value);

  /// @brief Method set_pointerId, addr 0x4adaa38, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerId(int32_t value);

  /// @brief Method set_pointerPress, addr 0x4adae9c, size 0x7c, virtual false, abstract: false, final false
  inline void set_pointerPress(::UnityEngine::GameObject* value);

  /// @brief Method set_pointerPressRaycast, addr 0x4ada9f4, size 0x18, virtual false, abstract: false, final false
  inline void set_pointerPressRaycast(::UnityEngine::EventSystems::RaycastResult value);

  /// @brief Method set_position, addr 0x4adaa4c, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector2 value);

  /// @brief Method set_pressPosition, addr 0x4adaa7c, size 0xc, virtual false, abstract: false, final false
  inline void set_pressPosition(::UnityEngine::Vector2 value);

  /// @brief Method set_pressure, addr 0x4adab40, size 0x8, virtual false, abstract: false, final false
  inline void set_pressure(float_t value);

  /// @brief Method set_radius, addr 0x4adabbc, size 0xc, virtual false, abstract: false, final false
  inline void set_radius(::UnityEngine::Vector2 value);

  /// @brief Method set_radiusVariance, addr 0x4adabd4, size 0xc, virtual false, abstract: false, final false
  inline void set_radiusVariance(::UnityEngine::Vector2 value);

  /// @brief Method set_rawPointerPress, addr 0x4ada994, size 0x8, virtual false, abstract: false, final false
  inline void set_rawPointerPress(::UnityEngine::GameObject* value);

  /// @brief Method set_reentered, addr 0x4adabfc, size 0xc, virtual false, abstract: false, final false
  inline void set_reentered(bool value);

  /// @brief Method set_scrollDelta, addr 0x4adaaf4, size 0xc, virtual false, abstract: false, final false
  inline void set_scrollDelta(::UnityEngine::Vector2 value);

  /// @brief Method set_tangentialPressure, addr 0x4adab50, size 0x8, virtual false, abstract: false, final false
  inline void set_tangentialPressure(float_t value);

  /// @brief Method set_tilt, addr 0x4adab94, size 0xc, virtual false, abstract: false, final false
  inline void set_tilt(::UnityEngine::Vector2 value);

  /// @brief Method set_twist, addr 0x4adab80, size 0x8, virtual false, abstract: false, final false
  inline void set_twist(float_t value);

  /// @brief Method set_useDragThreshold, addr 0x4adab08, size 0xc, virtual false, abstract: false, final false
  inline void set_useDragThreshold(bool value);

  /// @brief Method set_worldNormal, addr 0x4adaab8, size 0x10, virtual false, abstract: false, final false
  inline void set_worldNormal(::UnityEngine::Vector3 value);

  /// @brief Method set_worldPosition, addr 0x4adaa98, size 0x10, virtual false, abstract: false, final false
  inline void set_worldPosition(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerEventData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerEventData(PointerEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerEventData(PointerEventData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15182 };

  /// @brief Field <pointerEnter>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____pointerEnter_k__BackingField;

  /// @brief Field m_PointerPress, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___m_PointerPress;

  /// @brief Field <lastPress>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____lastPress_k__BackingField;

  /// @brief Field <rawPointerPress>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____rawPointerPress_k__BackingField;

  /// @brief Field <pointerDrag>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____pointerDrag_k__BackingField;

  /// @brief Field <pointerClick>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____pointerClick_k__BackingField;

  /// @brief Field <pointerCurrentRaycast>k__BackingField, offset: 0x50, size: 0x50, def value: None
  ::UnityEngine::EventSystems::RaycastResult ____pointerCurrentRaycast_k__BackingField;

  /// @brief Field <pointerPressRaycast>k__BackingField, offset: 0xa0, size: 0x50, def value: None
  ::UnityEngine::EventSystems::RaycastResult ____pointerPressRaycast_k__BackingField;

  /// @brief Field hovered, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ___hovered;

  /// @brief Field <eligibleForClick>k__BackingField, offset: 0xf8, size: 0x1, def value: None
  bool ____eligibleForClick_k__BackingField;

  /// @brief Field <displayIndex>k__BackingField, offset: 0xfc, size: 0x4, def value: None
  int32_t ____displayIndex_k__BackingField;

  /// @brief Field <pointerId>k__BackingField, offset: 0x100, size: 0x4, def value: None
  int32_t ____pointerId_k__BackingField;

  /// @brief Field <position>k__BackingField, offset: 0x104, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____position_k__BackingField;

  /// @brief Field <delta>k__BackingField, offset: 0x10c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____delta_k__BackingField;

  /// @brief Field <pressPosition>k__BackingField, offset: 0x114, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____pressPosition_k__BackingField;

  /// @brief Field <worldPosition>k__BackingField, offset: 0x11c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____worldPosition_k__BackingField;

  /// @brief Field <worldNormal>k__BackingField, offset: 0x128, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____worldNormal_k__BackingField;

  /// @brief Field <clickTime>k__BackingField, offset: 0x134, size: 0x4, def value: None
  float_t ____clickTime_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset: 0x138, size: 0x4, def value: None
  int32_t ____clickCount_k__BackingField;

  /// @brief Field <scrollDelta>k__BackingField, offset: 0x13c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____scrollDelta_k__BackingField;

  /// @brief Field <useDragThreshold>k__BackingField, offset: 0x144, size: 0x1, def value: None
  bool ____useDragThreshold_k__BackingField;

  /// @brief Field <dragging>k__BackingField, offset: 0x145, size: 0x1, def value: None
  bool ____dragging_k__BackingField;

  /// @brief Field <button>k__BackingField, offset: 0x148, size: 0x4, def value: None
  ::UnityEngine::EventSystems::PointerEventData_InputButton ____button_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset: 0x14c, size: 0x4, def value: None
  float_t ____pressure_k__BackingField;

  /// @brief Field <tangentialPressure>k__BackingField, offset: 0x150, size: 0x4, def value: None
  float_t ____tangentialPressure_k__BackingField;

  /// @brief Field <altitudeAngle>k__BackingField, offset: 0x154, size: 0x4, def value: None
  float_t ____altitudeAngle_k__BackingField;

  /// @brief Field <azimuthAngle>k__BackingField, offset: 0x158, size: 0x4, def value: None
  float_t ____azimuthAngle_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset: 0x15c, size: 0x4, def value: None
  float_t ____twist_k__BackingField;

  /// @brief Field <tilt>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____tilt_k__BackingField;

  /// @brief Field <penStatus>k__BackingField, offset: 0x168, size: 0x4, def value: None
  ::UnityEngine::PenStatus ____penStatus_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset: 0x16c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____radius_k__BackingField;

  /// @brief Field <radiusVariance>k__BackingField, offset: 0x174, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____radiusVariance_k__BackingField;

  /// @brief Field <fullyExited>k__BackingField, offset: 0x17c, size: 0x1, def value: None
  bool ____fullyExited_k__BackingField;

  /// @brief Field <reentered>k__BackingField, offset: 0x17d, size: 0x1, def value: None
  bool ____reentered_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerEnter_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ___m_PointerPress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____lastPress_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____rawPointerPress_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerDrag_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerClick_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerCurrentRaycast_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerPressRaycast_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ___hovered) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____eligibleForClick_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____displayIndex_k__BackingField) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pointerId_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____position_k__BackingField) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____delta_k__BackingField) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pressPosition_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____worldPosition_k__BackingField) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____worldNormal_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____clickTime_k__BackingField) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____clickCount_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____scrollDelta_k__BackingField) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____useDragThreshold_k__BackingField) == 0x144, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____dragging_k__BackingField) == 0x145, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____button_k__BackingField) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____pressure_k__BackingField) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____tangentialPressure_k__BackingField) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____altitudeAngle_k__BackingField) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____azimuthAngle_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____twist_k__BackingField) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____tilt_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____penStatus_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____radius_k__BackingField) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____radiusVariance_k__BackingField) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____fullyExited_k__BackingField) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::EventSystems::PointerEventData, ____reentered_k__BackingField) == 0x17d, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerEventData, 0x180>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerEventData_FramePressState, "UnityEngine.EventSystems", "PointerEventData/FramePressState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerEventData_InputButton, "UnityEngine.EventSystems", "PointerEventData/InputButton");
NEED_NO_BOX(::UnityEngine::EventSystems::PointerEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerEventData*, "UnityEngine.EventSystems", "PointerEventData");
