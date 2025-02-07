#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/GearVRTrackedController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
CORDL_MODULE_EXPORT(GearVRTrackedController)
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector2Control;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class GearVRTrackedController;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::GearVRTrackedController);
// Dependencies UnityEngine.InputSystem.XR.XRController
namespace Unity::XR::Oculus::Input {
// Is value type: false
// CS Name: Unity.XR.Oculus.Input.GearVRTrackedController
class CORDL_TYPE GearVRTrackedController : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <back>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get__back_k__BackingField, put = __cordl_internal_set__back_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _back_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAcceleration_k__BackingField,
                      put = __cordl_internal_set__deviceAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField;

  /// @brief Field <deviceAngularAcceleration>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__deviceAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePosition_k__BackingField,
                      put = __cordl_internal_set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceRotation_k__BackingField,
                      put = __cordl_internal_set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadClicked_k__BackingField,
                      put = __cordl_internal_set__touchpadClicked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpadTouched_k__BackingField,
                      put = __cordl_internal_set__touchpadTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _touchpadTouched_k__BackingField;

  /// @brief Field <touchpad>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get__touchpad_k__BackingField,
                      put = __cordl_internal_set__touchpad_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _touchpad_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerPressed_k__BackingField,
                      put = __cordl_internal_set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get__trigger_k__BackingField,
                      put = __cordl_internal_set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  __declspec(property(get = get_back, put = set_back)) ::UnityEngine::InputSystem::Controls::ButtonControl* back;

  __declspec(property(get = get_deviceAcceleration, put = set_deviceAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAcceleration;

  __declspec(property(get = get_deviceAngularAcceleration, put = set_deviceAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularAcceleration;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  __declspec(property(get = get_devicePosition, put = set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_isTracked, put = set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_touchpad, put = set_touchpad)) ::UnityEngine::InputSystem::Controls::Vector2Control* touchpad;

  __declspec(property(get = get_touchpadClicked, put = set_touchpadClicked)) ::UnityEngine::InputSystem::Controls::ButtonControl* touchpadClicked;

  __declspec(property(get = get_touchpadTouched, put = set_touchpadTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* touchpadTouched;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_trigger, put = set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  /// @brief Method FinishSetup, addr 0x483d06c, size 0x2d8, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::Oculus::Input::GearVRTrackedController* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__back_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__back_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAngularAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__deviceAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__deviceAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__devicePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__devicePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__deviceRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__deviceRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__touchpadClicked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadClicked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__touchpadTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__touchpadTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__touchpad_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__touchpad_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__trigger_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField();

  constexpr void __cordl_internal_set__back_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__touchpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x483ceb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_back, addr 0x483cfbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_back();

  /// @brief Method get_deviceAcceleration, addr 0x483d04c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration();

  /// @brief Method get_deviceAngularAcceleration, addr 0x483d05c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration();

  /// @brief Method get_deviceAngularVelocity, addr 0x483d03c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method get_devicePosition, addr 0x483d01c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method get_deviceRotation, addr 0x483d02c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method get_isTracked, addr 0x483d00c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_touchpad, addr 0x483cf9c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_touchpad();

  /// @brief Method get_touchpadClicked, addr 0x483cfdc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadClicked();

  /// @brief Method get_touchpadTouched, addr 0x483cfec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_touchpadTouched();

  /// @brief Method get_trackingState, addr 0x483cffc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method get_trigger, addr 0x483cfac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method get_triggerPressed, addr 0x483cfcc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_back, addr 0x483cfc4, size 0x8, virtual false, abstract: false, final false
  inline void set_back(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_deviceAcceleration, addr 0x483d054, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceAngularAcceleration, addr 0x483d064, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceAngularVelocity, addr 0x483d044, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_devicePosition, addr 0x483d024, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceRotation, addr 0x483d034, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_isTracked, addr 0x483d014, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_touchpad, addr 0x483cfa4, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_touchpadClicked, addr 0x483cfe4, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_touchpadTouched, addr 0x483cff4, size 0x8, virtual false, abstract: false, final false
  inline void set_touchpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackingState, addr 0x483d004, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_trigger, addr 0x483cfb4, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerPressed, addr 0x483cfd4, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GearVRTrackedController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GearVRTrackedController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GearVRTrackedController(GearVRTrackedController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GearVRTrackedController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GearVRTrackedController(GearVRTrackedController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17424 };

  /// @brief Field <touchpad>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____touchpad_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <back>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____back_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <touchpadClicked>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadClicked_k__BackingField;

  /// @brief Field <touchpadTouched>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____touchpadTouched_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAcceleration_k__BackingField;

  /// @brief Field <deviceAngularAcceleration>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularAcceleration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____touchpad_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____trigger_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____back_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____triggerPressed_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____touchpadClicked_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____touchpadTouched_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____trackingState_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____isTracked_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____devicePosition_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____deviceRotation_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____deviceAngularVelocity_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____deviceAcceleration_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::GearVRTrackedController, ____deviceAngularAcceleration_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::GearVRTrackedController, 0x1f8>, "Size mismatch!");

} // namespace Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::GearVRTrackedController);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::GearVRTrackedController*, "Unity.XR.Oculus.Input", "GearVRTrackedController");
