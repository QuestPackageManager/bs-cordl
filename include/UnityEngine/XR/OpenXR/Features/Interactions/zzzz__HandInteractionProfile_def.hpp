#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/HandInteractionProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandInteractionProfile)
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
class Vector3Control;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandInteractionProfile_HandInteraction;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandInteractionProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HandInteractionProfile_HandInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction);
// Dependencies UnityEngine.InputSystem.XR.XRController
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HandInteractionProfile/HandInteraction
class CORDL_TYPE HandInteractionProfile_HandInteraction : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <devicePose>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePose_k__BackingField,
                      put = __cordl_internal_set__devicePose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePosition_k__BackingField,
                      put = __cordl_internal_set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceRotation_k__BackingField,
                      put = __cordl_internal_set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <graspFirm>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__graspFirm_k__BackingField,
                      put = __cordl_internal_set__graspFirm_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _graspFirm_k__BackingField;

  /// @brief Field <graspReady>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__graspReady_k__BackingField,
                      put = __cordl_internal_set__graspReady_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _graspReady_k__BackingField;

  /// @brief Field <graspValue>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__graspValue_k__BackingField,
                      put = __cordl_internal_set__graspValue_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _graspValue_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <pinchPose>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__pinchPose_k__BackingField,
                      put = __cordl_internal_set__pinchPose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pinchPose_k__BackingField;

  /// @brief Field <pinchPosition>k__BackingField, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get__pinchPosition_k__BackingField,
                      put = __cordl_internal_set__pinchPosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _pinchPosition_k__BackingField;

  /// @brief Field <pinchReady>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__pinchReady_k__BackingField,
                      put = __cordl_internal_set__pinchReady_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _pinchReady_k__BackingField;

  /// @brief Field <pinchRotation>k__BackingField, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get__pinchRotation_k__BackingField,
                      put = __cordl_internal_set__pinchRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _pinchRotation_k__BackingField;

  /// @brief Field <pinchTouched>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__pinchTouched_k__BackingField,
                      put = __cordl_internal_set__pinchTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _pinchTouched_k__BackingField;

  /// @brief Field <pinchValue>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__pinchValue_k__BackingField,
                      put = __cordl_internal_set__pinchValue_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _pinchValue_k__BackingField;

  /// @brief Field <pointerActivateReady>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerActivateReady_k__BackingField,
                      put = __cordl_internal_set__pointerActivateReady_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _pointerActivateReady_k__BackingField;

  /// @brief Field <pointerActivateValue>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerActivateValue_k__BackingField,
                      put = __cordl_internal_set__pointerActivateValue_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _pointerActivateValue_k__BackingField;

  /// @brief Field <pointerActivated>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerActivated_k__BackingField,
                      put = __cordl_internal_set__pointerActivated_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _pointerActivated_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPosition_k__BackingField,
                      put = __cordl_internal_set__pointerPosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerRotation_k__BackingField,
                      put = __cordl_internal_set__pointerRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__pointer_k__BackingField,
                      put = __cordl_internal_set__pointer_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <pokePose>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__pokePose_k__BackingField,
                      put = __cordl_internal_set__pokePose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pokePose_k__BackingField;

  /// @brief Field <pokePosition>k__BackingField, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get__pokePosition_k__BackingField,
                      put = __cordl_internal_set__pokePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _pokePosition_k__BackingField;

  /// @brief Field <pokeRotation>k__BackingField, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get__pokeRotation_k__BackingField,
                      put = __cordl_internal_set__pokeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _pokeRotation_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  __declspec(property(get = get_devicePose, put = set_devicePose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_devicePosition, put = set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_graspFirm, put = set_graspFirm)) ::UnityEngine::InputSystem::Controls::ButtonControl* graspFirm;

  __declspec(property(get = get_graspReady, put = set_graspReady)) ::UnityEngine::InputSystem::Controls::ButtonControl* graspReady;

  __declspec(property(get = get_graspValue, put = set_graspValue)) ::UnityEngine::InputSystem::Controls::AxisControl* graspValue;

  __declspec(property(get = get_isTracked, put = set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_pinchPose, put = set_pinchPose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pinchPose;

  __declspec(property(get = get_pinchPosition, put = set_pinchPosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* pinchPosition;

  __declspec(property(get = get_pinchReady, put = set_pinchReady)) ::UnityEngine::InputSystem::Controls::ButtonControl* pinchReady;

  __declspec(property(get = get_pinchRotation, put = set_pinchRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* pinchRotation;

  __declspec(property(get = get_pinchTouched, put = set_pinchTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* pinchTouched;

  __declspec(property(get = get_pinchValue, put = set_pinchValue)) ::UnityEngine::InputSystem::Controls::AxisControl* pinchValue;

  __declspec(property(get = get_pointer, put = set_pointer)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_pointerActivateReady, put = set_pointerActivateReady)) ::UnityEngine::InputSystem::Controls::ButtonControl* pointerActivateReady;

  __declspec(property(get = get_pointerActivateValue, put = set_pointerActivateValue)) ::UnityEngine::InputSystem::Controls::AxisControl* pointerActivateValue;

  __declspec(property(get = get_pointerActivated, put = set_pointerActivated)) ::UnityEngine::InputSystem::Controls::ButtonControl* pointerActivated;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_pokePose, put = set_pokePose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pokePose;

  __declspec(property(get = get_pokePosition, put = set_pokePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* pokePosition;

  __declspec(property(get = get_pokeRotation, put = set_pokeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* pokeRotation;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  /// @brief Method FinishSetup, addr 0x6832108, size 0x4bc, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction* New_ctor();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__devicePose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__devicePose_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__devicePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__devicePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__deviceRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__deviceRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__graspFirm_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__graspFirm_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__graspReady_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__graspReady_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__graspValue_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__graspValue_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pinchPose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pinchPose_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__pinchPosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__pinchPosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__pinchReady_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__pinchReady_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__pinchRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__pinchRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__pinchTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__pinchTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__pinchValue_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__pinchValue_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__pointerActivateReady_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__pointerActivateReady_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__pointerActivateValue_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__pointerActivateValue_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__pointerActivated_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__pointerActivated_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__pointerPosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__pointerPosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__pointerRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__pointerRotation_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pointer_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pointer_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pokePose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pokePose_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__pokePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__pokePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__pokeRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__pokeRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr void __cordl_internal_set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__graspFirm_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__graspReady_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__graspValue_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pinchPose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__pinchPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__pinchReady_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pinchRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__pinchTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pinchValue_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__pointerActivateReady_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pointerActivateValue_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__pointerActivated_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__pokePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__pokePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__pokeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method .ctor, addr 0x68325c4, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_devicePose, addr 0x6831f98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method get_devicePosition, addr 0x6832088, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method get_deviceRotation, addr 0x6832098, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method get_graspFirm, addr 0x6832048, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_graspFirm();

  /// @brief Method get_graspReady, addr 0x6832058, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_graspReady();

  /// @brief Method get_graspValue, addr 0x6832038, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_graspValue();

  /// @brief Method get_isTracked, addr 0x6832068, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_pinchPose, addr 0x6831fc8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pinchPose();

  /// @brief Method get_pinchPosition, addr 0x68320e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pinchPosition();

  /// @brief Method get_pinchReady, addr 0x6831ff8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_pinchReady();

  /// @brief Method get_pinchRotation, addr 0x68320f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pinchRotation();

  /// @brief Method get_pinchTouched, addr 0x6831fe8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_pinchTouched();

  /// @brief Method get_pinchValue, addr 0x6831fd8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_pinchValue();

  /// @brief Method get_pointer, addr 0x6831fa8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method get_pointerActivateReady, addr 0x6832028, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_pointerActivateReady();

  /// @brief Method get_pointerActivateValue, addr 0x6832008, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_pointerActivateValue();

  /// @brief Method get_pointerActivated, addr 0x6832018, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_pointerActivated();

  /// @brief Method get_pointerPosition, addr 0x68320a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method get_pointerRotation, addr 0x68320b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method get_pokePose, addr 0x6831fb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pokePose();

  /// @brief Method get_pokePosition, addr 0x68320c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pokePosition();

  /// @brief Method get_pokeRotation, addr 0x68320d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pokeRotation();

  /// @brief Method get_trackingState, addr 0x6832078, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_devicePose, addr 0x6831fa0, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_devicePosition, addr 0x6832090, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceRotation, addr 0x68320a0, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_graspFirm, addr 0x6832050, size 0x8, virtual false, abstract: false, final false
  inline void set_graspFirm(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_graspReady, addr 0x6832060, size 0x8, virtual false, abstract: false, final false
  inline void set_graspReady(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_graspValue, addr 0x6832040, size 0x8, virtual false, abstract: false, final false
  inline void set_graspValue(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_isTracked, addr 0x6832070, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pinchPose, addr 0x6831fd0, size 0x8, virtual false, abstract: false, final false
  inline void set_pinchPose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pinchPosition, addr 0x68320f0, size 0x8, virtual false, abstract: false, final false
  inline void set_pinchPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_pinchReady, addr 0x6832000, size 0x8, virtual false, abstract: false, final false
  inline void set_pinchReady(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pinchRotation, addr 0x6832100, size 0x8, virtual false, abstract: false, final false
  inline void set_pinchRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_pinchTouched, addr 0x6831ff0, size 0x8, virtual false, abstract: false, final false
  inline void set_pinchTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pinchValue, addr 0x6831fe0, size 0x8, virtual false, abstract: false, final false
  inline void set_pinchValue(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_pointer, addr 0x6831fb0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pointerActivateReady, addr 0x6832030, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerActivateReady(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pointerActivateValue, addr 0x6832010, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerActivateValue(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_pointerActivated, addr 0x6832020, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerActivated(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pointerPosition, addr 0x68320b0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_pointerRotation, addr 0x68320c0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_pokePose, addr 0x6831fc0, size 0x8, virtual false, abstract: false, final false
  inline void set_pokePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pokePosition, addr 0x68320d0, size 0x8, virtual false, abstract: false, final false
  inline void set_pokePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_pokeRotation, addr 0x68320e0, size 0x8, virtual false, abstract: false, final false
  inline void set_pokeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_trackingState, addr 0x6832080, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandInteractionProfile_HandInteraction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandInteractionProfile_HandInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandInteractionProfile_HandInteraction(HandInteractionProfile_HandInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandInteractionProfile_HandInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandInteractionProfile_HandInteraction(HandInteractionProfile_HandInteraction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18541 };

  /// @brief Field <devicePose>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <pokePose>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pokePose_k__BackingField;

  /// @brief Field <pinchPose>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pinchPose_k__BackingField;

  /// @brief Field <pinchValue>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____pinchValue_k__BackingField;

  /// @brief Field <pinchTouched>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____pinchTouched_k__BackingField;

  /// @brief Field <pinchReady>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____pinchReady_k__BackingField;

  /// @brief Field <pointerActivateValue>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____pointerActivateValue_k__BackingField;

  /// @brief Field <pointerActivated>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____pointerActivated_k__BackingField;

  /// @brief Field <pointerActivateReady>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____pointerActivateReady_k__BackingField;

  /// @brief Field <graspValue>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____graspValue_k__BackingField;

  /// @brief Field <graspFirm>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____graspFirm_k__BackingField;

  /// @brief Field <graspReady>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____graspReady_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  /// @brief Field <pokePosition>k__BackingField, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pokePosition_k__BackingField;

  /// @brief Field <pokeRotation>k__BackingField, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pokeRotation_k__BackingField;

  /// @brief Field <pinchPosition>k__BackingField, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pinchPosition_k__BackingField;

  /// @brief Field <pinchRotation>k__BackingField, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pinchRotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____devicePose_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pointer_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pokePose_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pinchPose_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pinchValue_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pinchTouched_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pinchReady_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pointerActivateValue_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pointerActivated_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pointerActivateReady_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____graspValue_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____graspFirm_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____graspReady_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____isTracked_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____trackingState_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____devicePosition_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____deviceRotation_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pointerPosition_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pointerRotation_k__BackingField) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pokePosition_k__BackingField) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pokeRotation_k__BackingField) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pinchPosition_k__BackingField) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, ____pinchRotation_k__BackingField) == 0x258, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction, 0x260>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HandInteractionProfile
class CORDL_TYPE HandInteractionProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using HandInteraction = ::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction;

  /// @brief Method GetDeviceLayoutName, addr 0x68303f0, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x68301cc, size 0x6c, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x6830434, size 0x1b08, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x6830238, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x6830380, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x6831f3c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HandInteractionProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HandInteractionProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HandInteractionProfile(HandInteractionProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HandInteractionProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HandInteractionProfile(HandInteractionProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18542 };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field extensionString offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionString{ u"XR_EXT_hand_interaction" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.handinteraction" };

  /// @brief Field graspReady offset 0xffffffff size 0x8
  static constexpr ::ConstString graspReady{ u"/input/grasp_ext/ready_ext" };

  /// @brief Field graspValue offset 0xffffffff size 0x8
  static constexpr ::ConstString graspValue{ u"/input/grasp_ext/value" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"Hand Interaction OpenXR" };

  /// @brief Field pinch offset 0xffffffff size 0x8
  static constexpr ::ConstString pinch{ u"/input/pinch_ext/pose" };

  /// @brief Field pinchReady offset 0xffffffff size 0x8
  static constexpr ::ConstString pinchReady{ u"/input/pinch_ext/ready_ext" };

  /// @brief Field pinchValue offset 0xffffffff size 0x8
  static constexpr ::ConstString pinchValue{ u"/input/pinch_ext/value" };

  /// @brief Field pointerActivateReady offset 0xffffffff size 0x8
  static constexpr ::ConstString pointerActivateReady{ u"/input/aim_activate_ext/ready_ext" };

  /// @brief Field pointerActivateValue offset 0xffffffff size 0x8
  static constexpr ::ConstString pointerActivateValue{ u"/input/aim_activate_ext/value" };

  /// @brief Field poke offset 0xffffffff size 0x8
  static constexpr ::ConstString poke{ u"/input/poke_ext/pose" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/ext/hand_interaction_ext" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "HandInteractionProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HandInteractionProfile_HandInteraction*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "HandInteractionProfile/HandInteraction");
