#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IPointerEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IPointerEvent)
namespace UnityEngine {
struct EventModifiers;
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
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IPointerEvent);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IPointerEvent
class CORDL_TYPE IPointerEvent {
public:
  // Declarations
  __declspec(property(get = get_actionKey)) bool actionKey;

  __declspec(property(get = get_altKey)) bool altKey;

  __declspec(property(get = get_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_button)) int32_t button;

  __declspec(property(get = get_clickCount)) int32_t clickCount;

  __declspec(property(get = get_commandKey)) bool commandKey;

  __declspec(property(get = get_ctrlKey)) bool ctrlKey;

  __declspec(property(get = get_deltaPosition)) ::UnityEngine::Vector3 deltaPosition;

  __declspec(property(get = get_deltaTime)) float_t deltaTime;

  __declspec(property(get = get_isPrimary)) bool isPrimary;

  __declspec(property(get = get_localPosition)) ::UnityEngine::Vector3 localPosition;

  __declspec(property(get = get_modifiers)) ::UnityEngine::EventModifiers modifiers;

  __declspec(property(get = get_penStatus)) ::UnityEngine::PenStatus penStatus;

  __declspec(property(get = get_pointerId)) int32_t pointerId;

  __declspec(property(get = get_pointerType)) ::StringW pointerType;

  __declspec(property(get = get_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_pressedButtons)) int32_t pressedButtons;

  __declspec(property(get = get_pressure)) float_t pressure;

  __declspec(property(get = get_radius)) ::UnityEngine::Vector2 radius;

  __declspec(property(get = get_radiusVariance)) ::UnityEngine::Vector2 radiusVariance;

  __declspec(property(get = get_shiftKey)) bool shiftKey;

  __declspec(property(get = get_tangentialPressure)) float_t tangentialPressure;

  __declspec(property(get = get_tilt)) ::UnityEngine::Vector2 tilt;

  __declspec(property(get = get_twist)) float_t twist;

  /// @brief Method get_actionKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_actionKey();

  /// @brief Method get_altKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_altKey();

  /// @brief Method get_altitudeAngle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_altitudeAngle();

  /// @brief Method get_azimuthAngle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_azimuthAngle();

  /// @brief Method get_button, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_button();

  /// @brief Method get_clickCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_clickCount();

  /// @brief Method get_commandKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_commandKey();

  /// @brief Method get_ctrlKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_ctrlKey();

  /// @brief Method get_deltaPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_deltaPosition();

  /// @brief Method get_deltaTime, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_deltaTime();

  /// @brief Method get_isPrimary, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isPrimary();

  /// @brief Method get_localPosition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localPosition();

  /// @brief Method get_modifiers, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::EventModifiers get_modifiers();

  /// @brief Method get_penStatus, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::PenStatus get_penStatus();

  /// @brief Method get_pointerId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_pointerId();

  /// @brief Method get_pointerType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_pointerType();

  /// @brief Method get_position, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_pressedButtons, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_pressedButtons();

  /// @brief Method get_pressure, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_pressure();

  /// @brief Method get_radius, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radius();

  /// @brief Method get_radiusVariance, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_radiusVariance();

  /// @brief Method get_shiftKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_shiftKey();

  /// @brief Method get_tangentialPressure, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_tangentialPressure();

  /// @brief Method get_tilt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_tilt();

  /// @brief Method get_twist, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_twist();

  // Ctor Parameters [CppParam { name: "", ty: "IPointerEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPointerEvent(IPointerEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5905 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IPointerEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPointerEvent*, "UnityEngine.UIElements", "IPointerEvent");
