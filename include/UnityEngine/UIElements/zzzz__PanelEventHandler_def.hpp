#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PanelEventHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__PenStatus_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelEventHandler)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class EventSystem;
}
namespace UnityEngine::EventSystems {
class ICancelHandler;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class IScrollHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class IRuntimePanelComponent;
}
namespace UnityEngine::UIElements {
struct NavigationDeviceType;
}
namespace UnityEngine::UIElements {
struct NavigationMoveEvent_Direction;
}
namespace UnityEngine::UIElements {
struct PanelEventHandler_PointerEventType;
}
namespace UnityEngine::UIElements {
class PanelEventHandler_PointerEvent;
}
namespace UnityEngine::UIElements {
class UIDocument;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct EventModifiers;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct PenStatus;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct PanelEventHandler_PointerEventType;
}
namespace UnityEngine::UIElements {
class PanelEventHandler;
}
namespace UnityEngine::UIElements {
class PanelEventHandler_PointerEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::PanelEventHandler_PointerEventType);
MARK_REF_T(::UnityEngine::UIElements::PanelEventHandler*);
MARK_REF_T(::UnityEngine::UIElements::PanelEventHandler_PointerEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelEventHandler_PointerEventType, "UnityEngine.UIElements", "PanelEventHandler/PointerEventType");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelEventHandler*, "UnityEngine.UIElements", "PanelEventHandler");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PanelEventHandler_PointerEvent*, "UnityEngine.UIElements", "PanelEventHandler/PointerEvent");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.PanelEventHandler/PointerEventType
struct CORDL_TYPE PanelEventHandler_PointerEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PanelEventHandler_PointerEventType_Unwrapped
  enum struct __PanelEventHandler_PointerEventType_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Down = static_cast<int32_t>(0x1),
    __E_Up = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PanelEventHandler_PointerEventType_Unwrapped() const noexcept {
    return static_cast<__PanelEventHandler_PointerEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelEventHandler_PointerEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr PanelEventHandler_PointerEventType(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::UnityEngine::UIElements::PanelEventHandler_PointerEventType const Default;

  /// @brief Field Down value: I32(1)
  static ::UnityEngine::UIElements::PanelEventHandler_PointerEventType const Down;

  /// @brief Field Up value: I32(2)
  static ::UnityEngine::UIElements::PanelEventHandler_PointerEventType const Up;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18035 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEventType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelEventHandler_PointerEventType) == 0x4, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object, UnityEngine.EventModifiers, UnityEngine.PenStatus, UnityEngine.Ray, UnityEngine.Vector2, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelEventHandler/PointerEvent
class CORDL_TYPE PanelEventHandler_PointerEvent : public ::System::Object {
public:
  // Declarations
  /// @brief Field <altitudeAngle>k__BackingField, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__altitudeAngle_k__BackingField, put = __cordl_internal_set__altitudeAngle_k__BackingField)) float_t _altitudeAngle_k__BackingField;

  /// @brief Field <azimuthAngle>k__BackingField, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get__azimuthAngle_k__BackingField, put = __cordl_internal_set__azimuthAngle_k__BackingField)) float_t _azimuthAngle_k__BackingField;

  /// @brief Field <button>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__button_k__BackingField, put = __cordl_internal_set__button_k__BackingField)) int32_t _button_k__BackingField;

  /// @brief Field <clickCount>k__BackingField, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__clickCount_k__BackingField, put = __cordl_internal_set__clickCount_k__BackingField)) int32_t _clickCount_k__BackingField;

  /// @brief Field <deltaPosition>k__BackingField, offset 0x44, size 0xc
  __declspec(property(get = __cordl_internal_get__deltaPosition_k__BackingField, put = __cordl_internal_set__deltaPosition_k__BackingField)) ::UnityEngine::Vector3 _deltaPosition_k__BackingField;

  /// @brief Field <deltaTime>k__BackingField, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__deltaTime_k__BackingField, put = __cordl_internal_set__deltaTime_k__BackingField)) float_t _deltaTime_k__BackingField;

  /// @brief Field <document>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__document_k__BackingField, put = __cordl_internal_set__document_k__BackingField)) ::UnityW<::UnityEngine::UIElements::UIDocument>
      _document_k__BackingField;

  /// @brief Field <elementTarget>k__BackingField, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__elementTarget_k__BackingField,
                      put = __cordl_internal_set__elementTarget_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _elementTarget_k__BackingField;

  /// @brief Field <elementUnderPointer>k__BackingField, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__elementUnderPointer_k__BackingField,
                      put = __cordl_internal_set__elementUnderPointer_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _elementUnderPointer_k__BackingField;

  /// @brief Field <isPrimary>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isPrimary_k__BackingField, put = __cordl_internal_set__isPrimary_k__BackingField)) bool _isPrimary_k__BackingField;

  /// @brief Field <localPosition>k__BackingField, offset 0x38, size 0xc
  __declspec(property(get = __cordl_internal_get__localPosition_k__BackingField, put = __cordl_internal_set__localPosition_k__BackingField)) ::UnityEngine::Vector3 _localPosition_k__BackingField;

  /// @brief Field <modifiers>k__BackingField, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__modifiers_k__BackingField, put = __cordl_internal_set__modifiers_k__BackingField)) ::UnityEngine::EventModifiers _modifiers_k__BackingField;

  /// @brief Field <penStatus>k__BackingField, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get__penStatus_k__BackingField, put = __cordl_internal_set__penStatus_k__BackingField)) ::UnityEngine::PenStatus _penStatus_k__BackingField;

  /// @brief Field <pointerId>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__pointerId_k__BackingField, put = __cordl_internal_set__pointerId_k__BackingField)) int32_t _pointerId_k__BackingField;

  /// @brief Field <pointerType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerType_k__BackingField, put = __cordl_internal_set__pointerType_k__BackingField)) ::StringW _pointerType_k__BackingField;

  /// @brief Field <position>k__BackingField, offset 0x2c, size 0xc
  __declspec(property(get = __cordl_internal_get__position_k__BackingField, put = __cordl_internal_set__position_k__BackingField)) ::UnityEngine::Vector3 _position_k__BackingField;

  /// @brief Field <pressedButtons>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__pressedButtons_k__BackingField, put = __cordl_internal_set__pressedButtons_k__BackingField)) int32_t _pressedButtons_k__BackingField;

  /// @brief Field <pressure>k__BackingField, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__pressure_k__BackingField, put = __cordl_internal_set__pressure_k__BackingField)) float_t _pressure_k__BackingField;

  /// @brief Field <radiusVariance>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__radiusVariance_k__BackingField, put = __cordl_internal_set__radiusVariance_k__BackingField)) ::UnityEngine::Vector2 _radiusVariance_k__BackingField;

  /// @brief Field <radius>k__BackingField, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__radius_k__BackingField, put = __cordl_internal_set__radius_k__BackingField)) ::UnityEngine::Vector2 _radius_k__BackingField;

  /// @brief Field <screenDelta>k__BackingField, offset 0x98, size 0xc
  __declspec(property(get = __cordl_internal_get__screenDelta_k__BackingField, put = __cordl_internal_set__screenDelta_k__BackingField)) ::UnityEngine::Vector3 _screenDelta_k__BackingField;

  /// @brief Field <screenPosition>k__BackingField, offset 0x8c, size 0xc
  __declspec(property(get = __cordl_internal_get__screenPosition_k__BackingField, put = __cordl_internal_set__screenPosition_k__BackingField)) ::UnityEngine::Vector3 _screenPosition_k__BackingField;

  /// @brief Field <tangentialPressure>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__tangentialPressure_k__BackingField, put = __cordl_internal_set__tangentialPressure_k__BackingField)) float_t _tangentialPressure_k__BackingField;

  /// @brief Field <tilt>k__BackingField, offset 0x6c, size 0x8
  __declspec(property(get = __cordl_internal_get__tilt_k__BackingField, put = __cordl_internal_set__tilt_k__BackingField)) ::UnityEngine::Vector2 _tilt_k__BackingField;

  /// @brief Field <twist>k__BackingField, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__twist_k__BackingField, put = __cordl_internal_set__twist_k__BackingField)) float_t _twist_k__BackingField;

  /// @brief Field <worldRay>k__BackingField, offset 0xa4, size 0x18
  __declspec(property(get = __cordl_internal_get__worldRay_k__BackingField, put = __cordl_internal_set__worldRay_k__BackingField)) ::UnityEngine::Ray _worldRay_k__BackingField;

  __declspec(property(get = get_actionKey)) bool actionKey;

  __declspec(property(get = get_altKey)) bool altKey;

  __declspec(property(get = get_altitudeAngle, put = set_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_azimuthAngle, put = set_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_button, put = set_button)) int32_t button;

  __declspec(property(get = get_clickCount, put = set_clickCount)) int32_t clickCount;

  __declspec(property(get = get_commandKey)) bool commandKey;

  __declspec(property(get = get_ctrlKey)) bool ctrlKey;

  __declspec(property(get = get_deltaPosition, put = set_deltaPosition)) ::UnityEngine::Vector3 deltaPosition;

  __declspec(property(get = get_deltaTime, put = set_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_document, put = set_document)) ::UnityW<::UnityEngine::UIElements::UIDocument> document;

  __declspec(property(get = get_elementTarget, put = set_elementTarget)) ::UnityEngine::UIElements::VisualElement* elementTarget;

  __declspec(property(get = get_elementUnderPointer, put = set_elementUnderPointer)) ::UnityEngine::UIElements::VisualElement* elementUnderPointer;

  __declspec(property(get = get_isPrimary, put = set_isPrimary)) bool isPrimary;

  __declspec(property(get = get_localPosition, put = set_localPosition)) ::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_modifiers, put = set_modifiers)) ::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_penStatus, put = set_penStatus)) ::UnityEngine::PenStatus penStatus;

  __declspec(property(get = get_pointerId, put = set_pointerId)) int32_t pointerId;

  __declspec(property(get = get_pointerType, put = set_pointerType)) ::StringW pointerType;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_pressedButtons, put = set_pressedButtons)) int32_t pressedButtons;

  __declspec(property(get = get_pressure, put = set_pressure)) float_t pressure;

  __declspec(property(get = get_radius, put = set_radius)) ::UnityEngine::Vector2 radius;

  __declspec(property(get = get_radiusVariance, put = set_radiusVariance)) ::UnityEngine::Vector2 radiusVariance;

  __declspec(property(get = get_screenDelta, put = set_screenDelta)) ::UnityEngine::Vector3 screenDelta;

  __declspec(property(get = get_screenPosition, put = set_screenPosition)) ::UnityEngine::Vector3 screenPosition;

  __declspec(property(get = get_shiftKey)) bool shiftKey;

  __declspec(property(get = get_tangentialPressure, put = set_tangentialPressure)) float_t tangentialPressure;

  __declspec(property(get = get_tilt, put = set_tilt)) ::UnityEngine::Vector2 tilt;

  __declspec(property(get = get_twist, put = set_twist)) float_t twist;

  __declspec(property(get = get_worldRay, put = set_worldRay)) ::UnityEngine::Ray worldRay;

  /// @brief Convert operator to "::UnityEngine::UIElements::IPointerEvent"
  constexpr operator ::UnityEngine::UIElements::IPointerEvent*() noexcept;

  /// @brief Method ComputeTarget, addr 0x72b020c, size 0x22c, virtual false, abstract: false, final false
  inline bool ComputeTarget(::UnityEngine::UIElements::BaseRuntimePanel* panel);

  /// @brief Method GetPanelPosition, addr 0x72b0820, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPanelPosition(::UnityEngine::UIElements::VisualElement* pickedElement, ::UnityEngine::UIElements::UIDocument* document, ::UnityEngine::Ray worldRay);

  static inline ::UnityEngine::UIElements::PanelEventHandler_PointerEvent* New_ctor();

  /// @brief Method Read, addr 0x72afc74, size 0x598, virtual false, abstract: false, final false
  inline void Read(::UnityEngine::UIElements::PanelEventHandler* self, ::UnityEngine::EventSystems::PointerEventData* eventData,
                   ::UnityEngine::UIElements::PanelEventHandler_PointerEventType eventType);

  /// [CompilerGenerated]
  /// @brief Method <Read>g__InRange|114_0, addr 0x72b080c, size 0x14, virtual false, abstract: false, final false
  static inline bool _Read_g__InRange_114_0(int32_t i, int32_t start, int32_t count);

  constexpr float_t const& __cordl_internal_get__altitudeAngle_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__altitudeAngle_k__BackingField();

  constexpr float_t const& __cordl_internal_get__azimuthAngle_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__azimuthAngle_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__button_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__button_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__clickCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__clickCount_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__deltaPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__deltaPosition_k__BackingField();

  constexpr float_t const& __cordl_internal_get__deltaTime_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__deltaTime_k__BackingField();

  constexpr ::UnityW<::UnityEngine::UIElements::UIDocument> const& __cordl_internal_get__document_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::UIElements::UIDocument>& __cordl_internal_get__document_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__elementTarget_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__elementTarget_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__elementUnderPointer_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__elementUnderPointer_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPrimary_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPrimary_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__localPosition_k__BackingField();

  constexpr ::UnityEngine::EventModifiers const& __cordl_internal_get__modifiers_k__BackingField() const;

  constexpr ::UnityEngine::EventModifiers& __cordl_internal_get__modifiers_k__BackingField();

  constexpr ::UnityEngine::PenStatus const& __cordl_internal_get__penStatus_k__BackingField() const;

  constexpr ::UnityEngine::PenStatus& __cordl_internal_get__penStatus_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__pointerId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__pointerId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__pointerType_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__pointerType_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__position_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__position_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__pressedButtons_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__pressedButtons_k__BackingField();

  constexpr float_t const& __cordl_internal_get__pressure_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__pressure_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radiusVariance_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__radiusVariance_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__radius_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__radius_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__screenDelta_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__screenDelta_k__BackingField();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__screenPosition_k__BackingField() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__screenPosition_k__BackingField();

  constexpr float_t const& __cordl_internal_get__tangentialPressure_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__tangentialPressure_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__tilt_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__tilt_k__BackingField();

  constexpr float_t const& __cordl_internal_get__twist_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__twist_k__BackingField();

  constexpr ::UnityEngine::Ray const& __cordl_internal_get__worldRay_k__BackingField() const;

  constexpr ::UnityEngine::Ray& __cordl_internal_get__worldRay_k__BackingField();

  constexpr void __cordl_internal_set__altitudeAngle_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__azimuthAngle_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__button_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__clickCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__deltaPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__deltaTime_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__document_k__BackingField(::UnityW<::UnityEngine::UIElements::UIDocument> value);

  constexpr void __cordl_internal_set__elementTarget_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__elementUnderPointer_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__isPrimary_k__BackingField(bool value);

  constexpr void __cordl_internal_set__localPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__modifiers_k__BackingField(::UnityEngine::EventModifiers value);

  constexpr void __cordl_internal_set__penStatus_k__BackingField(::UnityEngine::PenStatus value);

  constexpr void __cordl_internal_set__pointerId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__pointerType_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__position_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__pressedButtons_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__pressure_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__radiusVariance_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__radius_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__screenDelta_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__screenPosition_k__BackingField(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__tangentialPressure_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__tilt_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__twist_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__worldRay_k__BackingField(::UnityEngine::Ray value);

  /// @brief Method .ctor, addr 0x72b0530, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_actionKey, addr 0x72b06c0, size 0xc4, virtual true, abstract: false, final true
  inline bool get_actionKey();

  /// @brief Method get_altKey, addr 0x72b06b4, size 0xc, virtual true, abstract: false, final true
  inline bool get_altKey();

  /// [CompilerGenerated]
  /// @brief Method get_altitudeAngle, addr 0x72b0610, size 0x8, virtual true, abstract: false, final true
  inline float_t get_altitudeAngle();

  /// [CompilerGenerated]
  /// @brief Method get_azimuthAngle, addr 0x72b0620, size 0x8, virtual true, abstract: false, final true
  inline float_t get_azimuthAngle();

  /// [CompilerGenerated]
  /// @brief Method get_button, addr 0x72b0568, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_button();

  /// [CompilerGenerated]
  /// @brief Method get_clickCount, addr 0x72b05e0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_clickCount();

  /// @brief Method get_commandKey, addr 0x72b06a8, size 0xc, virtual true, abstract: false, final true
  inline bool get_commandKey();

  /// @brief Method get_ctrlKey, addr 0x72b069c, size 0xc, virtual true, abstract: false, final true
  inline bool get_ctrlKey();

  /// [CompilerGenerated]
  /// @brief Method get_deltaPosition, addr 0x72b05b8, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_deltaPosition();

  /// [CompilerGenerated]
  /// @brief Method get_deltaTime, addr 0x72b05d0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_deltaTime();

  /// [CompilerGenerated]
  /// @brief Method get_document, addr 0x72b07dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::UIDocument> get_document();

  /// [CompilerGenerated]
  /// @brief Method get_elementTarget, addr 0x72b07ec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_elementTarget();

  /// [CompilerGenerated]
  /// @brief Method get_elementUnderPointer, addr 0x72b07fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_elementUnderPointer();

  /// [CompilerGenerated]
  /// @brief Method get_isPrimary, addr 0x72b0558, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPrimary();

  /// [CompilerGenerated]
  /// @brief Method get_localPosition, addr 0x72b05a0, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_localPosition();

  /// [CompilerGenerated]
  /// @brief Method get_modifiers, addr 0x72b0680, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// [CompilerGenerated]
  /// @brief Method get_penStatus, addr 0x72b0650, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::PenStatus get_penStatus();

  /// [CompilerGenerated]
  /// @brief Method get_pointerId, addr 0x72b0538, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_pointerId();

  /// [CompilerGenerated]
  /// @brief Method get_pointerType, addr 0x72b0548, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_pointerType();

  /// [CompilerGenerated]
  /// @brief Method get_position, addr 0x72b0588, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector3 get_position();

  /// [CompilerGenerated]
  /// @brief Method get_pressedButtons, addr 0x72b0578, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_pressedButtons();

  /// [CompilerGenerated]
  /// @brief Method get_pressure, addr 0x72b05f0, size 0x8, virtual true, abstract: false, final true
  inline float_t get_pressure();

  /// [CompilerGenerated]
  /// @brief Method get_radius, addr 0x72b0660, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_radius();

  /// [CompilerGenerated]
  /// @brief Method get_radiusVariance, addr 0x72b0670, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_radiusVariance();

  /// [CompilerGenerated]
  /// @brief Method get_screenDelta, addr 0x72b079c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_screenDelta();

  /// [CompilerGenerated]
  /// @brief Method get_screenPosition, addr 0x72b0784, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_screenPosition();

  /// @brief Method get_shiftKey, addr 0x72b0690, size 0xc, virtual true, abstract: false, final true
  inline bool get_shiftKey();

  /// [CompilerGenerated]
  /// @brief Method get_tangentialPressure, addr 0x72b0600, size 0x8, virtual true, abstract: false, final true
  inline float_t get_tangentialPressure();

  /// [CompilerGenerated]
  /// @brief Method get_tilt, addr 0x72b0640, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_tilt();

  /// [CompilerGenerated]
  /// @brief Method get_twist, addr 0x72b0630, size 0x8, virtual true, abstract: false, final true
  inline float_t get_twist();

  /// [CompilerGenerated]
  /// @brief Method get_worldRay, addr 0x72b07b4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Ray get_worldRay();

  /// @brief Convert to "::UnityEngine::UIElements::IPointerEvent"
  constexpr ::UnityEngine::UIElements::IPointerEvent* i___UnityEngine__UIElements__IPointerEvent() noexcept;

  /// [CompilerGenerated]
  /// @brief Method set_altitudeAngle, addr 0x72b0618, size 0x8, virtual false, abstract: false, final false
  inline void set_altitudeAngle(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_azimuthAngle, addr 0x72b0628, size 0x8, virtual false, abstract: false, final false
  inline void set_azimuthAngle(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_button, addr 0x72b0570, size 0x8, virtual false, abstract: false, final false
  inline void set_button(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_clickCount, addr 0x72b05e8, size 0x8, virtual false, abstract: false, final false
  inline void set_clickCount(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_deltaPosition, addr 0x72b05c4, size 0xc, virtual false, abstract: false, final false
  inline void set_deltaPosition(::UnityEngine::Vector3 value);

  /// [CompilerGenerated]
  /// @brief Method set_deltaTime, addr 0x72b05d8, size 0x8, virtual false, abstract: false, final false
  inline void set_deltaTime(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_document, addr 0x72b07e4, size 0x8, virtual false, abstract: false, final false
  inline void set_document(::UnityEngine::UIElements::UIDocument* value);

  /// [CompilerGenerated]
  /// @brief Method set_elementTarget, addr 0x72b07f4, size 0x8, virtual false, abstract: false, final false
  inline void set_elementTarget(::UnityEngine::UIElements::VisualElement* value);

  /// [CompilerGenerated]
  /// @brief Method set_elementUnderPointer, addr 0x72b0804, size 0x8, virtual false, abstract: false, final false
  inline void set_elementUnderPointer(::UnityEngine::UIElements::VisualElement* value);

  /// [CompilerGenerated]
  /// @brief Method set_isPrimary, addr 0x72b0560, size 0x8, virtual false, abstract: false, final false
  inline void set_isPrimary(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_localPosition, addr 0x72b05ac, size 0xc, virtual false, abstract: false, final false
  inline void set_localPosition(::UnityEngine::Vector3 value);

  /// [CompilerGenerated]
  /// @brief Method set_modifiers, addr 0x72b0688, size 0x8, virtual false, abstract: false, final false
  inline void set_modifiers(::UnityEngine::EventModifiers value);

  /// [CompilerGenerated]
  /// @brief Method set_penStatus, addr 0x72b0658, size 0x8, virtual false, abstract: false, final false
  inline void set_penStatus(::UnityEngine::PenStatus value);

  /// [CompilerGenerated]
  /// @brief Method set_pointerId, addr 0x72b0540, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerId(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_pointerType, addr 0x72b0550, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerType(::StringW value);

  /// [CompilerGenerated]
  /// @brief Method set_position, addr 0x72b0594, size 0xc, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// [CompilerGenerated]
  /// @brief Method set_pressedButtons, addr 0x72b0580, size 0x8, virtual false, abstract: false, final false
  inline void set_pressedButtons(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_pressure, addr 0x72b05f8, size 0x8, virtual false, abstract: false, final false
  inline void set_pressure(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_radius, addr 0x72b0668, size 0x8, virtual false, abstract: false, final false
  inline void set_radius(::UnityEngine::Vector2 value);

  /// [CompilerGenerated]
  /// @brief Method set_radiusVariance, addr 0x72b0678, size 0x8, virtual false, abstract: false, final false
  inline void set_radiusVariance(::UnityEngine::Vector2 value);

  /// [CompilerGenerated]
  /// @brief Method set_screenDelta, addr 0x72b07a8, size 0xc, virtual false, abstract: false, final false
  inline void set_screenDelta(::UnityEngine::Vector3 value);

  /// [CompilerGenerated]
  /// @brief Method set_screenPosition, addr 0x72b0790, size 0xc, virtual false, abstract: false, final false
  inline void set_screenPosition(::UnityEngine::Vector3 value);

  /// [CompilerGenerated]
  /// @brief Method set_tangentialPressure, addr 0x72b0608, size 0x8, virtual false, abstract: false, final false
  inline void set_tangentialPressure(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_tilt, addr 0x72b0648, size 0x8, virtual false, abstract: false, final false
  inline void set_tilt(::UnityEngine::Vector2 value);

  /// [CompilerGenerated]
  /// @brief Method set_twist, addr 0x72b0638, size 0x8, virtual false, abstract: false, final false
  inline void set_twist(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_worldRay, addr 0x72b07c8, size 0x14, virtual false, abstract: false, final false
  inline void set_worldRay(::UnityEngine::Ray value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelEventHandler_PointerEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelEventHandler_PointerEvent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelEventHandler_PointerEvent(PanelEventHandler_PointerEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelEventHandler_PointerEvent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelEventHandler_PointerEvent(PanelEventHandler_PointerEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18036 };

  /// [CompilerGenerated]
  /// @brief Field <pointerId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____pointerId_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <pointerType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____pointerType_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <isPrimary>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isPrimary_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <button>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____button_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <pressedButtons>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____pressedButtons_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <position>k__BackingField, offset: 0x2c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____position_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <localPosition>k__BackingField, offset: 0x38, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____localPosition_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <deltaPosition>k__BackingField, offset: 0x44, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____deltaPosition_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <deltaTime>k__BackingField, offset: 0x50, size: 0x4, def value: None
  float_t ____deltaTime_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <clickCount>k__BackingField, offset: 0x54, size: 0x4, def value: None
  int32_t ____clickCount_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <pressure>k__BackingField, offset: 0x58, size: 0x4, def value: None
  float_t ____pressure_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <tangentialPressure>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  float_t ____tangentialPressure_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <altitudeAngle>k__BackingField, offset: 0x60, size: 0x4, def value: None
  float_t ____altitudeAngle_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <azimuthAngle>k__BackingField, offset: 0x64, size: 0x4, def value: None
  float_t ____azimuthAngle_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <twist>k__BackingField, offset: 0x68, size: 0x4, def value: None
  float_t ____twist_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <tilt>k__BackingField, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____tilt_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <penStatus>k__BackingField, offset: 0x74, size: 0x4, def value: None
  ::UnityEngine::PenStatus ____penStatus_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <radius>k__BackingField, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____radius_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <radiusVariance>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____radiusVariance_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <modifiers>k__BackingField, offset: 0x88, size: 0x4, def value: None
  ::UnityEngine::EventModifiers ____modifiers_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <screenPosition>k__BackingField, offset: 0x8c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____screenPosition_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <screenDelta>k__BackingField, offset: 0x98, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____screenDelta_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <worldRay>k__BackingField, offset: 0xa4, size: 0x18, def value: None
  ::UnityEngine::Ray ____worldRay_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <document>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::UIDocument> ____document_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <elementTarget>k__BackingField, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____elementTarget_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <elementUnderPointer>k__BackingField, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____elementUnderPointer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____pointerId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____pointerType_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____isPrimary_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____button_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____pressedButtons_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____position_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____localPosition_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____deltaPosition_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____deltaTime_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____clickCount_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____pressure_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____tangentialPressure_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____altitudeAngle_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____azimuthAngle_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____twist_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____tilt_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____penStatus_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____radius_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____radiusVariance_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____modifiers_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____screenPosition_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____screenDelta_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____worldRay_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____document_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____elementTarget_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent, ____elementUnderPointer_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelEventHandler_PointerEvent) == 0xd8, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [AddComponentMenu("UI Toolkit/Panel Event Handler (UI Toolkit)")]
// Dependencies UnityEngine.EventModifiers, UnityEngine.EventSystems.UIBehaviour, UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PanelEventHandler
class CORDL_TYPE PanelEventHandler : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using PointerEvent = ::UnityEngine::UIElements::PanelEventHandler_PointerEvent;

  using PointerEventType = ::UnityEngine::UIElements::PanelEventHandler_PointerEventType;

  __declspec(property(get = get_currentFocusedElement)) ::UnityEngine::UIElements::Focusable* currentFocusedElement;

  __declspec(property(get = get_eventSystem)) ::UnityW<::UnityEngine::EventSystems::EventSystem> eventSystem;

  __declspec(property(get = get_isCurrentFocusedPanel)) bool isCurrentFocusedPanel;

  /// @brief Field m_ContainedPointers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContainedPointers,
                      put = __cordl_internal_set_m_ContainedPointers)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerEventData*>* m_ContainedPointers;

  /// @brief Field m_Event, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Event, put = __cordl_internal_set_m_Event)) ::UnityEngine::Event* m_Event;

  /// @brief Field m_LastClickTime, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastClickTime, put = __cordl_internal_set_m_LastClickTime)) float_t m_LastClickTime;

  /// @brief Field m_Panel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel)) ::UnityEngine::UIElements::BaseRuntimePanel* m_Panel;

  /// @brief Field m_PointerEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerEvent, put = __cordl_internal_set_m_PointerEvent)) ::UnityEngine::UIElements::PanelEventHandler_PointerEvent* m_PointerEvent;

  /// @brief Field m_Selecting, offset 0x3c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Selecting, put = __cordl_internal_set_m_Selecting)) bool m_Selecting;

  __declspec(property(get = get_panel, put = set_panel)) ::UnityEngine::UIElements::IPanel* panel;

  /// @brief Field s_Modifiers, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_Modifiers, put = setStaticF_s_Modifiers)) ::UnityEngine::EventModifiers s_Modifiers;

  __declspec(property(get = get_selectableGameObject)) ::UnityW<::UnityEngine::GameObject> selectableGameObject;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr operator ::UnityEngine::EventSystems::IMoveHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerMoveHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerMoveHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IRuntimePanelComponent"
  constexpr operator ::UnityEngine::UIElements::IRuntimePanelComponent*() noexcept;

  /// @brief Method GetDeviceType, addr 0x72aed30, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::NavigationDeviceType GetDeviceType(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method LateUpdate, addr 0x72af624, size 0x8, virtual false, abstract: false, final false
  inline void LateUpdate();

  static inline ::UnityEngine::UIElements::PanelEventHandler* New_ctor();

  /// @brief Method OnCancel, addr 0x72aee0c, size 0x1d0, virtual true, abstract: false, final true
  inline void OnCancel(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDeselect, addr 0x72adcc0, size 0x30, virtual true, abstract: false, final true
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDisable, addr 0x72adba8, size 0x4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnElementBlur, addr 0x72adca4, size 0x4, virtual false, abstract: false, final false
  inline void OnElementBlur(::UnityEngine::UIElements::BlurEvent* e);

  /// @brief Method OnElementFocus, addr 0x72adbb8, size 0xc0, virtual false, abstract: false, final false
  inline void OnElementFocus(::UnityEngine::UIElements::FocusEvent* e);

  /// @brief Method OnEnable, addr 0x72adba0, size 0x4, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnMove, addr 0x72aefdc, size 0x208, virtual true, abstract: false, final true
  inline void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData);

  /// @brief Method OnPanelDestroyed, addr 0x72adbb0, size 0x8, virtual false, abstract: false, final false
  inline void OnPanelDestroyed();

  /// @brief Method OnPointerClick, addr 0x72aeb20, size 0x40, virtual true, abstract: false, final true
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x72ae200, size 0x2d4, virtual true, abstract: false, final true
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x72aea2c, size 0xf4, virtual true, abstract: false, final true
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x72ae6b4, size 0x378, virtual true, abstract: false, final true
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerMove, addr 0x72adcf0, size 0x194, virtual true, abstract: false, final true
  inline void OnPointerMove(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x72adfe8, size 0x218, virtual true, abstract: false, final true
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnScroll, addr 0x72af1e4, size 0x1d0, virtual true, abstract: false, final true
  inline void OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelect, addr 0x72adca8, size 0x18, virtual true, abstract: false, final true
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnSubmit, addr 0x72aeb60, size 0x1d0, virtual true, abstract: false, final true
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method ProcessImguiEvents, addr 0x72ae4d4, size 0x14c, virtual false, abstract: false, final false
  inline void ProcessImguiEvents(::UnityEngine::UIElements::Focusable* target);

  /// @brief Method ProcessKeyboardEvent, addr 0x72af62c, size 0x80, virtual false, abstract: false, final false
  inline void ProcessKeyboardEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::Focusable* target);

  /// @brief Method ProcessTabEvent, addr 0x72af6ac, size 0x64, virtual false, abstract: false, final false
  inline void ProcessTabEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::Focusable* target);

  /// @brief Method ReadPointerData, addr 0x72ade84, size 0x108, virtual false, abstract: false, final false
  inline bool ReadPointerData(::UnityEngine::UIElements::PanelEventHandler_PointerEvent* pe, ::UnityEngine::EventSystems::PointerEventData* eventData,
                              ::UnityEngine::UIElements::PanelEventHandler_PointerEventType eventType);

  /// @brief Method RegisterCallbacks, addr 0x72ad798, size 0x208, virtual false, abstract: false, final false
  inline void RegisterCallbacks();

  /// @brief Method SendEvent, addr 0x72af3b4, size 0x1c, virtual false, abstract: false, final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::Event* sourceEvent);

  /// @brief Method SendEvent, addr 0x72adf8c, size 0x5c, virtual false, abstract: false, final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::EventSystems::BaseEventData* sourceEventData);

  /// @brief Method SendKeyDownEvent, addr 0x72af8ec, size 0x1dc, virtual false, abstract: false, final false
  inline void SendKeyDownEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::Focusable* target);

  /// @brief Method SendKeyUpEvent, addr 0x72af710, size 0x1dc, virtual false, abstract: false, final false
  inline void SendKeyUpEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::Focusable* target);

  /// @brief Method SendTabEvent, addr 0x72afac8, size 0x1ac, virtual false, abstract: false, final false
  inline void SendTabEvent(::UnityEngine::Event* e, ::UnityEngine::UIElements::NavigationMoveEvent_Direction direction, ::UnityEngine::UIElements::Focusable* target);

  /// @brief Method UnregisterCallbacks, addr 0x72ad590, size 0x208, virtual false, abstract: false, final false
  inline void UnregisterCallbacks();

  /// @brief Method Update, addr 0x72af3d0, size 0x5c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdatePointerEventTarget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TPointerEvent>
    requires(::cordl_internals::type_constraint<TPointerEvent, ::UnityEngine::UIElements::PointerEventBase_1<TPointerEvent>*> && ::cordl_internals::default_constructor_constraint<TPointerEvent>)
  inline void UpdatePointerEventTarget(TPointerEvent e, ::UnityEngine::UIElements::PanelEventHandler_PointerEvent* eventData);

  /// @brief Method UpdateWorldSpacePointers, addr 0x72af42c, size 0x1f8, virtual false, abstract: false, final false
  inline void UpdateWorldSpacePointers();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_m_ContainedPointers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_m_ContainedPointers();

  constexpr ::UnityEngine::Event* const& __cordl_internal_get_m_Event() const;

  constexpr ::UnityEngine::Event*& __cordl_internal_get_m_Event();

  constexpr float_t const& __cordl_internal_get_m_LastClickTime() const;

  constexpr float_t& __cordl_internal_get_m_LastClickTime();

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel* const& __cordl_internal_get_m_Panel() const;

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_Panel();

  constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEvent* const& __cordl_internal_get_m_PointerEvent() const;

  constexpr ::UnityEngine::UIElements::PanelEventHandler_PointerEvent*& __cordl_internal_get_m_PointerEvent();

  constexpr bool const& __cordl_internal_get_m_Selecting() const;

  constexpr bool& __cordl_internal_get_m_Selecting();

  constexpr void __cordl_internal_set_m_ContainedPointers(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr void __cordl_internal_set_m_Event(::UnityEngine::Event* value);

  constexpr void __cordl_internal_set_m_LastClickTime(float_t value);

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  constexpr void __cordl_internal_set_m_PointerEvent(::UnityEngine::UIElements::PanelEventHandler_PointerEvent* value);

  constexpr void __cordl_internal_set_m_Selecting(bool value);

  /// @brief Method .ctor, addr 0x72b0438, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::EventModifiers getStaticF_s_Modifiers();

  /// @brief Method get_currentFocusedElement, addr 0x72adb68, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Focusable* get_currentFocusedElement();

  /// @brief Method get_eventSystem, addr 0x72ad9b8, size 0xe4, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::EventSystems::EventSystem> get_eventSystem();

  /// @brief Method get_isCurrentFocusedPanel, addr 0x72ada9c, size 0xcc, virtual false, abstract: false, final false
  inline bool get_isCurrentFocusedPanel();

  /// @brief Method get_panel, addr 0x72ad4d4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IPanel* get_panel();

  /// @brief Method get_selectableGameObject, addr 0x72ad9a0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_selectableGameObject();

  /// @brief Convert to "::UnityEngine::EventSystems::ICancelHandler"
  constexpr ::UnityEngine::EventSystems::ICancelHandler* i___UnityEngine__EventSystems__ICancelHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr ::UnityEngine::EventSystems::IMoveHandler* i___UnityEngine__EventSystems__IMoveHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerMoveHandler"
  constexpr ::UnityEngine::EventSystems::IPointerMoveHandler* i___UnityEngine__EventSystems__IPointerMoveHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IScrollHandler"
  constexpr ::UnityEngine::EventSystems::IScrollHandler* i___UnityEngine__EventSystems__IScrollHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IRuntimePanelComponent"
  constexpr ::UnityEngine::UIElements::IRuntimePanelComponent* i___UnityEngine__UIElements__IRuntimePanelComponent() noexcept;

  static inline void setStaticF_s_Modifiers(::UnityEngine::EventModifiers value);

  /// @brief Method set_panel, addr 0x72ad4dc, size 0xb4, virtual true, abstract: false, final true
  inline void set_panel(::UnityEngine::UIElements::IPanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelEventHandler", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelEventHandler(PanelEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelEventHandler", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelEventHandler(PanelEventHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18037 };

  /// @brief Field m_Panel, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_Panel;

  /// @brief Field m_PointerEvent, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::PanelEventHandler_PointerEvent* ___m_PointerEvent;

  /// @brief Field m_ContainedPointers, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerEventData*>* ___m_ContainedPointers;

  /// @brief Field m_LastClickTime, offset: 0x38, size: 0x4, def value: None
  float_t ___m_LastClickTime;

  /// @brief Field m_Selecting, offset: 0x3c, size: 0x1, def value: None
  bool ___m_Selecting;

  /// @brief Field m_Event, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Event* ___m_Event;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_Panel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_PointerEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_ContainedPointers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_LastClickTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_Selecting) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelEventHandler, ___m_Event) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PanelEventHandler) == 0x48, "Size mismatch!");

} // namespace UnityEngine::UIElements
