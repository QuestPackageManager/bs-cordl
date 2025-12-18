#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/HTCViveControllerProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HTCViveControllerProfile)
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
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HTCViveControllerProfile_ViveController;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HTCViveControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HTCViveControllerProfile_ViveController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController);
// Dependencies UnityEngine.InputSystem.XR.XRControllerWithRumble
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HTCViveControllerProfile/ViveController
class CORDL_TYPE HTCViveControllerProfile_ViveController : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
public:
  // Declarations
  /// @brief Field <devicePose>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePose_k__BackingField,
                      put = __cordl_internal_set__devicePose_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePosition_k__BackingField,
                      put = __cordl_internal_set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceRotation_k__BackingField,
                      put = __cordl_internal_set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get__gripPressed_k__BackingField,
                      put = __cordl_internal_set__gripPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__grip_k__BackingField, put = __cordl_internal_set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get__haptic_k__BackingField, put = __cordl_internal_set__haptic_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::HapticControl* _haptic_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _menu_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerPosition_k__BackingField,
                      put = __cordl_internal_set__pointerPosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get__pointerRotation_k__BackingField,
                      put = __cordl_internal_set__pointerRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__pointer_k__BackingField,
                      put = __cordl_internal_set__pointer_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <select>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__select_k__BackingField,
                      put = __cordl_internal_set__select_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _select_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <trackpadClicked>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadClicked_k__BackingField,
                      put = __cordl_internal_set__trackpadClicked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadClicked_k__BackingField;

  /// @brief Field <trackpadTouched>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpadTouched_k__BackingField,
                      put = __cordl_internal_set__trackpadTouched_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _trackpadTouched_k__BackingField;

  /// @brief Field <trackpad>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackpad_k__BackingField,
                      put = __cordl_internal_set__trackpad_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _trackpad_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerPressed_k__BackingField,
                      put = __cordl_internal_set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__trigger_k__BackingField,
                      put = __cordl_internal_set__trigger_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _trigger_k__BackingField;

  __declspec(property(get = get_devicePose, put = set_devicePose)) ::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_devicePosition, put = set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_grip, put = set_grip)) ::UnityEngine::InputSystem::Controls::AxisControl* grip;

  __declspec(property(get = get_gripPressed, put = set_gripPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* gripPressed;

  __declspec(property(get = get_haptic, put = set_haptic)) ::UnityEngine::XR::OpenXR::Input::HapticControl* haptic;

  __declspec(property(get = get_isTracked, put = set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_menu, put = set_menu)) ::UnityEngine::InputSystem::Controls::ButtonControl* menu;

  __declspec(property(get = get_pointer, put = set_pointer)) ::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  __declspec(property(get = get_select, put = set_select)) ::UnityEngine::InputSystem::Controls::ButtonControl* select;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_trackpad, put = set_trackpad)) ::UnityEngine::InputSystem::Controls::Vector2Control* trackpad;

  __declspec(property(get = get_trackpadClicked, put = set_trackpadClicked)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadClicked;

  __declspec(property(get = get_trackpadTouched, put = set_trackpadTouched)) ::UnityEngine::InputSystem::Controls::ButtonControl* trackpadTouched;

  __declspec(property(get = get_trigger, put = set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  /// @brief Method FinishSetup, addr 0x6836828, size 0x418, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController* New_ctor();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__devicePose_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__devicePose_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__devicePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__devicePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__deviceRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__deviceRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__gripPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__gripPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__grip_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__grip_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl* const& __cordl_internal_get__haptic_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::HapticControl*& __cordl_internal_get__haptic_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__pointerPosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__pointerPosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__pointerRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__pointerRotation_k__BackingField();

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl* const& __cordl_internal_get__pointer_k__BackingField() const;

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __cordl_internal_get__pointer_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__select_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__select_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadClicked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadClicked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__trackpadTouched_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__trackpadTouched_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__trackpad_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__trackpad_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__triggerPressed_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__triggerPressed_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl* const& __cordl_internal_get__trigger_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __cordl_internal_get__trigger_k__BackingField();

  constexpr void __cordl_internal_set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__gripPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__grip_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr void __cordl_internal_set__haptic_k__BackingField(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr void __cordl_internal_set__select_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__trackpadClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpadTouched_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trackpad_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x6836c40, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_devicePose, addr 0x6836798, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method get_devicePosition, addr 0x68367d8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method get_deviceRotation, addr 0x68367e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method get_grip, addr 0x6836718, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method get_gripPressed, addr 0x6836728, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method get_haptic, addr 0x6836818, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic();

  /// @brief Method get_isTracked, addr 0x68367b8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_menu, addr 0x6836738, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method get_pointer, addr 0x68367a8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method get_pointerPosition, addr 0x68367f8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method get_pointerRotation, addr 0x6836808, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method get_select, addr 0x6836708, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_select();

  /// @brief Method get_trackingState, addr 0x68367c8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method get_trackpad, addr 0x6836768, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_trackpad();

  /// @brief Method get_trackpadClicked, addr 0x6836778, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadClicked();

  /// @brief Method get_trackpadTouched, addr 0x6836788, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_trackpadTouched();

  /// @brief Method get_trigger, addr 0x6836748, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method get_triggerPressed, addr 0x6836758, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_devicePose, addr 0x68367a0, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_devicePosition, addr 0x68367e0, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceRotation, addr 0x68367f0, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_grip, addr 0x6836720, size 0x8, virtual false, abstract: false, final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_gripPressed, addr 0x6836730, size 0x8, virtual false, abstract: false, final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_haptic, addr 0x6836820, size 0x8, virtual false, abstract: false, final false
  inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method set_isTracked, addr 0x68367c0, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_menu, addr 0x6836740, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pointer, addr 0x68367b0, size 0x8, virtual false, abstract: false, final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pointerPosition, addr 0x6836800, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_pointerRotation, addr 0x6836810, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_select, addr 0x6836710, size 0x8, virtual false, abstract: false, final false
  inline void set_select(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackingState, addr 0x68367d0, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_trackpad, addr 0x6836770, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpad(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_trackpadClicked, addr 0x6836780, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackpadTouched, addr 0x6836790, size 0x8, virtual false, abstract: false, final false
  inline void set_trackpadTouched(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trigger, addr 0x6836750, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerPressed, addr 0x6836760, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HTCViveControllerProfile_ViveController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HTCViveControllerProfile_ViveController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HTCViveControllerProfile_ViveController(HTCViveControllerProfile_ViveController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HTCViveControllerProfile_ViveController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HTCViveControllerProfile_ViveController(HTCViveControllerProfile_ViveController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18545 };

  /// @brief Field <select>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____select_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <trackpad>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____trackpad_k__BackingField;

  /// @brief Field <trackpadClicked>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadClicked_k__BackingField;

  /// @brief Field <trackpadTouched>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____trackpadTouched_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::HapticControl* ____haptic_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____select_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____grip_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____gripPressed_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____menu_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____trigger_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____triggerPressed_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____trackpad_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____trackpadClicked_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____trackpadTouched_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____devicePose_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____pointer_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____isTracked_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____trackingState_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____devicePosition_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____deviceRotation_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____pointerPosition_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____pointerRotation_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, ____haptic_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController, 0x238>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HTCViveControllerProfile
class CORDL_TYPE HTCViveControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using ViveController = ::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController;

  /// @brief Method GetDeviceLayoutName, addr 0x6834c88, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile* New_ctor();

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x6834ccc, size 0x19e0, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x6834ad0, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x6834c18, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x68366ac, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HTCViveControllerProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HTCViveControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HTCViveControllerProfile(HTCViveControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HTCViveControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HTCViveControllerProfile(HTCViveControllerProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18546 };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.htcvive" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field haptic offset 0xffffffff size 0x8
  static constexpr ::ConstString haptic{ u"/output/haptic" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"HTC Vive Controller OpenXR" };

  /// @brief Field menu offset 0xffffffff size 0x8
  static constexpr ::ConstString menu{ u"/input/menu/click" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/htc/vive_controller" };

  /// @brief Field squeeze offset 0xffffffff size 0x8
  static constexpr ::ConstString squeeze{ u"/input/squeeze/click" };

  /// @brief Field system offset 0xffffffff size 0x8
  static constexpr ::ConstString system{ u"/input/system/click" };

  /// @brief Field trackpad offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpad{ u"/input/trackpad" };

  /// @brief Field trackpadClick offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadClick{ u"/input/trackpad/click" };

  /// @brief Field trackpadTouch offset 0xffffffff size 0x8
  static constexpr ::ConstString trackpadTouch{ u"/input/trackpad/touch" };

  /// @brief Field trigger offset 0xffffffff size 0x8
  static constexpr ::ConstString trigger{ u"/input/trigger/value" };

  /// @brief Field triggerClick offset 0xffffffff size 0x8
  static constexpr ::ConstString triggerClick{ u"/input/trigger/click" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "HTCViveControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HTCViveControllerProfile_ViveController*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "HTCViveControllerProfile/ViveController");
