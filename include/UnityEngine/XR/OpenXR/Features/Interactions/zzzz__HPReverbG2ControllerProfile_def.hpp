#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Features/Interactions/HPReverbG2ControllerProfile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRControllerWithRumble_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HPReverbG2ControllerProfile)
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
class HPReverbG2ControllerProfile_ReverbG2Controller;
}
namespace UnityEngine::XR::OpenXR::Input {
class HapticControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HPReverbG2ControllerProfile;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class HPReverbG2ControllerProfile_ReverbG2Controller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller);
// Dependencies UnityEngine.InputSystem.XR.XRControllerWithRumble
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HPReverbG2ControllerProfile/ReverbG2Controller
class CORDL_TYPE HPReverbG2ControllerProfile_ReverbG2Controller : public ::UnityEngine::InputSystem::XR::XRControllerWithRumble {
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

  /// @brief Field <gripPressed>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__gripPressed_k__BackingField,
                      put = __cordl_internal_set__gripPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _gripPressed_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__grip_k__BackingField, put = __cordl_internal_set__grip_k__BackingField)) ::UnityEngine::InputSystem::Controls::AxisControl* _grip_k__BackingField;

  /// @brief Field <haptic>k__BackingField, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get__haptic_k__BackingField, put = __cordl_internal_set__haptic_k__BackingField)) ::UnityEngine::XR::OpenXR::Input::HapticControl* _haptic_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset 0x1b8, size 0x8
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

  /// @brief Field <primaryButton>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get__primaryButton_k__BackingField,
                      put = __cordl_internal_set__primaryButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _primaryButton_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get__secondaryButton_k__BackingField,
                      put = __cordl_internal_set__secondaryButton_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _secondaryButton_k__BackingField;

  /// @brief Field <thumbstickClicked>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstickClicked_k__BackingField,
                      put = __cordl_internal_set__thumbstickClicked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _thumbstickClicked_k__BackingField;

  /// @brief Field <thumbstick>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__thumbstick_k__BackingField,
                      put = __cordl_internal_set__thumbstick_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector2Control* _thumbstick_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerPressed_k__BackingField,
                      put = __cordl_internal_set__triggerPressed_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _triggerPressed_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset 0x1d0, size 0x8
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

  __declspec(property(get = get_primaryButton, put = set_primaryButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* primaryButton;

  __declspec(property(get = get_secondaryButton, put = set_secondaryButton)) ::UnityEngine::InputSystem::Controls::ButtonControl* secondaryButton;

  __declspec(property(get = get_thumbstick, put = set_thumbstick)) ::UnityEngine::InputSystem::Controls::Vector2Control* thumbstick;

  __declspec(property(get = get_thumbstickClicked, put = set_thumbstickClicked)) ::UnityEngine::InputSystem::Controls::ButtonControl* thumbstickClicked;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_trigger, put = set_trigger)) ::UnityEngine::InputSystem::Controls::AxisControl* trigger;

  __declspec(property(get = get_triggerPressed, put = set_triggerPressed)) ::UnityEngine::InputSystem::Controls::ButtonControl* triggerPressed;

  /// @brief Method FinishSetup, addr 0x68346a0, size 0x410, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller* New_ctor();

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

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__primaryButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__primaryButton_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__secondaryButton_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__secondaryButton_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__thumbstickClicked_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__thumbstickClicked_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control* const& __cordl_internal_get__thumbstick_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector2Control*& __cordl_internal_get__thumbstick_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

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

  constexpr void __cordl_internal_set__primaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__secondaryButton_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbstickClicked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__thumbstick_k__BackingField(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__triggerPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__trigger_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method .ctor, addr 0x6834ab0, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_devicePose, addr 0x6834610, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method get_devicePosition, addr 0x6834650, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method get_deviceRotation, addr 0x6834660, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method get_grip, addr 0x68345b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_grip();

  /// @brief Method get_gripPressed, addr 0x68345c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_gripPressed();

  /// @brief Method get_haptic, addr 0x6834690, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::HapticControl* get_haptic();

  /// @brief Method get_isTracked, addr 0x6834630, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_menu, addr 0x68345a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_menu();

  /// @brief Method get_pointer, addr 0x6834620, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method get_pointerPosition, addr 0x6834670, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method get_pointerRotation, addr 0x6834680, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method get_primaryButton, addr 0x6834580, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_primaryButton();

  /// @brief Method get_secondaryButton, addr 0x6834590, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_secondaryButton();

  /// @brief Method get_thumbstick, addr 0x68345f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector2Control* get_thumbstick();

  /// @brief Method get_thumbstickClicked, addr 0x6834600, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_thumbstickClicked();

  /// @brief Method get_trackingState, addr 0x6834640, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method get_trigger, addr 0x68345d0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_trigger();

  /// @brief Method get_triggerPressed, addr 0x68345e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_triggerPressed();

  /// @brief Method set_devicePose, addr 0x6834618, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_devicePosition, addr 0x6834658, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceRotation, addr 0x6834668, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_grip, addr 0x68345b8, size 0x8, virtual false, abstract: false, final false
  inline void set_grip(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_gripPressed, addr 0x68345c8, size 0x8, virtual false, abstract: false, final false
  inline void set_gripPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_haptic, addr 0x6834698, size 0x8, virtual false, abstract: false, final false
  inline void set_haptic(::UnityEngine::XR::OpenXR::Input::HapticControl* value);

  /// @brief Method set_isTracked, addr 0x6834638, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_menu, addr 0x68345a8, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_pointer, addr 0x6834628, size 0x8, virtual false, abstract: false, final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method set_pointerPosition, addr 0x6834678, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_pointerRotation, addr 0x6834688, size 0x8, virtual false, abstract: false, final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_primaryButton, addr 0x6834588, size 0x8, virtual false, abstract: false, final false
  inline void set_primaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_secondaryButton, addr 0x6834598, size 0x8, virtual false, abstract: false, final false
  inline void set_secondaryButton(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_thumbstick, addr 0x68345f8, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstick(::UnityEngine::InputSystem::Controls::Vector2Control* value);

  /// @brief Method set_thumbstickClicked, addr 0x6834608, size 0x8, virtual false, abstract: false, final false
  inline void set_thumbstickClicked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_trackingState, addr 0x6834648, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_trigger, addr 0x68345d8, size 0x8, virtual false, abstract: false, final false
  inline void set_trigger(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method set_triggerPressed, addr 0x68345e8, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HPReverbG2ControllerProfile_ReverbG2Controller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HPReverbG2ControllerProfile_ReverbG2Controller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HPReverbG2ControllerProfile_ReverbG2Controller(HPReverbG2ControllerProfile_ReverbG2Controller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HPReverbG2ControllerProfile_ReverbG2Controller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HPReverbG2ControllerProfile_ReverbG2Controller(HPReverbG2ControllerProfile_ReverbG2Controller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18543 };

  /// @brief Field <primaryButton>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____primaryButton_k__BackingField;

  /// @brief Field <secondaryButton>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____secondaryButton_k__BackingField;

  /// @brief Field <menu>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____menu_k__BackingField;

  /// @brief Field <grip>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____grip_k__BackingField;

  /// @brief Field <gripPressed>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____gripPressed_k__BackingField;

  /// @brief Field <trigger>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____trigger_k__BackingField;

  /// @brief Field <triggerPressed>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____triggerPressed_k__BackingField;

  /// @brief Field <thumbstick>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector2Control* ____thumbstick_k__BackingField;

  /// @brief Field <thumbstickClicked>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____thumbstickClicked_k__BackingField;

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
static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____primaryButton_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____secondaryButton_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____menu_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____grip_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____gripPressed_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____trigger_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____triggerPressed_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____thumbstick_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____thumbstickClicked_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____devicePose_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____pointer_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____isTracked_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____trackingState_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____devicePosition_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____deviceRotation_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____pointerPosition_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____pointerRotation_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, ____haptic_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller, 0x238>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Dependencies UnityEngine.XR.OpenXR.Features.OpenXRInteractionFeature
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Features.Interactions.HPReverbG2ControllerProfile
class CORDL_TYPE HPReverbG2ControllerProfile : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using ReverbG2Controller = ::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller;

  /// @brief Method GetDeviceLayoutName, addr 0x6832808, size 0x44, virtual true, abstract: false, final false
  inline ::StringW GetDeviceLayoutName();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile* New_ctor();

  /// @brief Method OnInstanceCreate, addr 0x68325e4, size 0x6c, virtual true, abstract: false, final false
  inline bool OnInstanceCreate(uint64_t instance);

  /// @brief Method RegisterActionMapsWithRuntime, addr 0x683284c, size 0x1cd8, virtual true, abstract: false, final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method RegisterDeviceLayout, addr 0x6832650, size 0x148, virtual true, abstract: false, final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout, addr 0x6832798, size 0x70, virtual true, abstract: false, final false
  inline void UnregisterDeviceLayout();

  /// @brief Method .ctor, addr 0x6834524, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HPReverbG2ControllerProfile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HPReverbG2ControllerProfile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HPReverbG2ControllerProfile(HPReverbG2ControllerProfile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HPReverbG2ControllerProfile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HPReverbG2ControllerProfile(HPReverbG2ControllerProfile const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18544 };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field buttonA offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonA{ u"/input/a/click" };

  /// @brief Field buttonB offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonB{ u"/input/b/click" };

  /// @brief Field buttonX offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonX{ u"/input/x/click" };

  /// @brief Field buttonY offset 0xffffffff size 0x8
  static constexpr ::ConstString buttonY{ u"/input/y/click" };

  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.hpreverb" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field haptic offset 0xffffffff size 0x8
  static constexpr ::ConstString haptic{ u"/output/haptic" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"HP Reverb G2 Controller OpenXR" };

  /// @brief Field menu offset 0xffffffff size 0x8
  static constexpr ::ConstString menu{ u"/input/menu/click" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/hp/mixed_reality_controller" };

  /// @brief Field squeeze offset 0xffffffff size 0x8
  static constexpr ::ConstString squeeze{ u"/input/squeeze/value" };

  /// @brief Field thumbstick offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstick{ u"/input/thumbstick" };

  /// @brief Field thumbstickClick offset 0xffffffff size 0x8
  static constexpr ::ConstString thumbstickClick{ u"/input/thumbstick/click" };

  /// @brief Field trigger offset 0xffffffff size 0x8
  static constexpr ::ConstString trigger{ u"/input/trigger/value" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile*, "UnityEngine.XR.OpenXR.Features.Interactions", "HPReverbG2ControllerProfile");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::HPReverbG2ControllerProfile_ReverbG2Controller*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "HPReverbG2ControllerProfile/ReverbG2Controller");
