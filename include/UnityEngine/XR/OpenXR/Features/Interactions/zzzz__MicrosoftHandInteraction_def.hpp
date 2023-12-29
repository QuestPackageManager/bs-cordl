#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRController_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
CORDL_MODULE_EXPORT(MicrosoftHandInteraction)
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __MicrosoftHandInteraction__HoloLensHand;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
namespace UnityEngine::XR::OpenXR::Input {
class PoseControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class MicrosoftHandInteraction;
}
namespace UnityEngine::XR::OpenXR::Features::Interactions {
class __MicrosoftHandInteraction__HoloLensHand;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand);
// Type: ::HoloLensHand
// SizeInfo { instance_size: 472, native_size: -1, calculated_instance_size: 472, calculated_native_size: 472, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6411))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14456))
// CS Name: ::MicrosoftHandInteraction::HoloLensHand*
class CORDL_TYPE __MicrosoftHandInteraction__HoloLensHand : public ::UnityEngine::InputSystem::XR::XRController {
public:
  // Declarations
  /// @brief Field <select>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __get__select_k__BackingField, put = __set__select_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _select_k__BackingField;

  /// @brief Field <selectPressed>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __get__selectPressed_k__BackingField, put = __set__selectPressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _selectPressed_k__BackingField;

  /// @brief Field <squeeze>k__BackingField, offset 0x188, size 0x8
  __declspec(property(get = __get__squeeze_k__BackingField, put = __set__squeeze_k__BackingField))::UnityEngine::InputSystem::Controls::AxisControl* _squeeze_k__BackingField;

  /// @brief Field <squeezePressed>k__BackingField, offset 0x190, size 0x8
  __declspec(property(get = __get__squeezePressed_k__BackingField, put = __set__squeezePressed_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _squeezePressed_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset 0x198, size 0x8
  __declspec(property(get = __get__devicePose_k__BackingField, put = __set__devicePose_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset 0x1a0, size 0x8
  __declspec(property(get = __get__pointer_k__BackingField, put = __set__pointer_k__BackingField))::UnityEngine::XR::OpenXR::Input::PoseControl* _pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__isTracked_k__BackingField, put = __set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__trackingState_k__BackingField, put = __set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__devicePosition_k__BackingField, put = __set__devicePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__deviceRotation_k__BackingField,
                      put = __set__deviceRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__pointerPosition_k__BackingField,
                      put = __set__pointerPosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __get__pointerRotation_k__BackingField,
                      put = __set__pointerRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _pointerRotation_k__BackingField;

  __declspec(property(get = get_select, put = set_select))::UnityEngine::InputSystem::Controls::AxisControl* select;

  __declspec(property(get = get_selectPressed, put = set_selectPressed))::UnityEngine::InputSystem::Controls::ButtonControl* selectPressed;

  __declspec(property(get = get_squeeze, put = set_squeeze))::UnityEngine::InputSystem::Controls::AxisControl* squeeze;

  __declspec(property(get = get_squeezePressed, put = set_squeezePressed))::UnityEngine::InputSystem::Controls::ButtonControl* squeezePressed;

  __declspec(property(get = get_devicePose, put = set_devicePose))::UnityEngine::XR::OpenXR::Input::PoseControl* devicePose;

  __declspec(property(get = get_pointer, put = set_pointer))::UnityEngine::XR::OpenXR::Input::PoseControl* pointer;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_devicePosition, put = set_devicePosition))::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_pointerPosition, put = set_pointerPosition))::UnityEngine::InputSystem::Controls::Vector3Control* pointerPosition;

  __declspec(property(get = get_pointerRotation, put = set_pointerRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* pointerRotation;

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__select_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__select_k__BackingField() const;

  constexpr void __set__select_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__selectPressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__selectPressed_k__BackingField() const;

  constexpr void __set__selectPressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::AxisControl*& __get__squeeze_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AxisControl*> const& __get__squeeze_k__BackingField() const;

  constexpr void __set__squeeze_k__BackingField(::UnityEngine::InputSystem::Controls::AxisControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__squeezePressed_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__squeezePressed_k__BackingField() const;

  constexpr void __set__squeezePressed_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __get__devicePose_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::PoseControl*> const& __get__devicePose_k__BackingField() const;

  constexpr void __set__devicePose_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr ::UnityEngine::XR::OpenXR::Input::PoseControl*& __get__pointer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::XR::OpenXR::Input::PoseControl*> const& __get__pointer_k__BackingField() const;

  constexpr void __set__pointer_k__BackingField(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__isTracked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__isTracked_k__BackingField() const;

  constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__trackingState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__trackingState_k__BackingField() const;

  constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__devicePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__devicePosition_k__BackingField() const;

  constexpr void __set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__deviceRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__deviceRotation_k__BackingField() const;

  constexpr void __set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__pointerPosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__pointerPosition_k__BackingField() const;

  constexpr void __set__pointerPosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__pointerRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__pointerRotation_k__BackingField() const;

  constexpr void __set__pointerRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_select addr 0x2b0b6c4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_select();

  /// @brief Method set_select addr 0x2b0b6cc size 0x8 virtual false final false
  inline void set_select(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_selectPressed addr 0x2b0b6d4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_selectPressed();

  /// @brief Method set_selectPressed addr 0x2b0b6dc size 0x8 virtual false final false
  inline void set_selectPressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_squeeze addr 0x2b0b6e4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::AxisControl* get_squeeze();

  /// @brief Method set_squeeze addr 0x2b0b6ec size 0x8 virtual false final false
  inline void set_squeeze(::UnityEngine::InputSystem::Controls::AxisControl* value);

  /// @brief Method get_squeezePressed addr 0x2b0b6f4 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_squeezePressed();

  /// @brief Method set_squeezePressed addr 0x2b0b6fc size 0x8 virtual false final false
  inline void set_squeezePressed(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_devicePose addr 0x2b0b704 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_devicePose();

  /// @brief Method set_devicePose addr 0x2b0b70c size 0x8 virtual false final false
  inline void set_devicePose(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_pointer addr 0x2b0b714 size 0x8 virtual false final false
  inline ::UnityEngine::XR::OpenXR::Input::PoseControl* get_pointer();

  /// @brief Method set_pointer addr 0x2b0b71c size 0x8 virtual false final false
  inline void set_pointer(::UnityEngine::XR::OpenXR::Input::PoseControl* value);

  /// @brief Method get_isTracked addr 0x2b0b724 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method set_isTracked addr 0x2b0b72c size 0x8 virtual false final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackingState addr 0x2b0b734 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_trackingState addr 0x2b0b73c size 0x8 virtual false final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_devicePosition addr 0x2b0b744 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method set_devicePosition addr 0x2b0b74c size 0x8 virtual false final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceRotation addr 0x2b0b754 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method set_deviceRotation addr 0x2b0b75c size 0x8 virtual false final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_pointerPosition addr 0x2b0b764 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_pointerPosition();

  /// @brief Method set_pointerPosition addr 0x2b0b76c size 0x8 virtual false final false
  inline void set_pointerPosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_pointerRotation addr 0x2b0b774 size 0x8 virtual false final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_pointerRotation();

  /// @brief Method set_pointerRotation addr 0x2b0b77c size 0x8 virtual false final false
  inline void set_pointerRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method FinishSetup addr 0x2b0b784 size 0x2b0 virtual true final false
  inline void FinishSetup();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand* New_ctor();

  /// @brief Method .ctor addr 0x2b0ba34 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MicrosoftHandInteraction__HoloLensHand", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MicrosoftHandInteraction__HoloLensHand(__MicrosoftHandInteraction__HoloLensHand&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MicrosoftHandInteraction__HoloLensHand", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MicrosoftHandInteraction__HoloLensHand(__MicrosoftHandInteraction__HoloLensHand const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MicrosoftHandInteraction__HoloLensHand();

public:
  /// @brief Field <select>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____select_k__BackingField;

  /// @brief Field <selectPressed>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____selectPressed_k__BackingField;

  /// @brief Field <squeeze>k__BackingField, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::AxisControl* ____squeeze_k__BackingField;

  /// @brief Field <squeezePressed>k__BackingField, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____squeezePressed_k__BackingField;

  /// @brief Field <devicePose>k__BackingField, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____devicePose_k__BackingField;

  /// @brief Field <pointer>k__BackingField, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::XR::OpenXR::Input::PoseControl* ____pointer_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <pointerPosition>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____pointerPosition_k__BackingField;

  /// @brief Field <pointerRotation>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____pointerRotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, 0x1d8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____select_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____selectPressed_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____squeeze_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____squeezePressed_k__BackingField) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____devicePose_k__BackingField) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____pointer_k__BackingField) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____isTracked_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____trackingState_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____devicePosition_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____deviceRotation_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____pointerPosition_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand, ____pointerRotation_k__BackingField) == 0x1d0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
// Type: UnityEngine.XR.OpenXR.Features.Interactions::MicrosoftHandInteraction
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features::Interactions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14448))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14457))
// CS Name: ::UnityEngine.XR.OpenXR.Features.Interactions::MicrosoftHandInteraction*
class CORDL_TYPE MicrosoftHandInteraction : public ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature {
public:
  // Declarations
  using HoloLensHand = ::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand;

  /// @brief Method RegisterDeviceLayout addr 0x2b0a55c size 0x140 virtual true final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout addr 0x2b0a69c size 0x68 virtual true final false
  inline void UnregisterDeviceLayout();

  /// @brief Method RegisterActionMapsWithRuntime addr 0x2b0a704 size 0xfb8 virtual true final false
  inline void RegisterActionMapsWithRuntime();

  static inline ::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction* New_ctor();

  /// @brief Method .ctor addr 0x2b0b6bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MicrosoftHandInteraction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MicrosoftHandInteraction(MicrosoftHandInteraction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MicrosoftHandInteraction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MicrosoftHandInteraction(MicrosoftHandInteraction const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MicrosoftHandInteraction();

public:
  /// @brief Field featureId offset 0xffffffff size 0x8
  static constexpr ::ConstString featureId{ u"com.unity.openxr.feature.input.handtracking" };

  /// @brief Field extensionString offset 0xffffffff size 0x8
  static constexpr ::ConstString extensionString{ u"XR_MSFT_hand_interaction" };

  /// @brief Field profile offset 0xffffffff size 0x8
  static constexpr ::ConstString profile{ u"/interaction_profiles/microsoft/hand_interaction" };

  /// @brief Field select offset 0xffffffff size 0x8
  static constexpr ::ConstString select{ u"/input/select/value" };

  /// @brief Field squeeze offset 0xffffffff size 0x8
  static constexpr ::ConstString squeeze{ u"/input/squeeze/value" };

  /// @brief Field grip offset 0xffffffff size 0x8
  static constexpr ::ConstString grip{ u"/input/grip/pose" };

  /// @brief Field aim offset 0xffffffff size 0x8
  static constexpr ::ConstString aim{ u"/input/aim/pose" };

  /// @brief Field kDeviceLocalizedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kDeviceLocalizedName{ u"HoloLens Hand OpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features::Interactions
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::MicrosoftHandInteraction*, "UnityEngine.XR.OpenXR.Features.Interactions", "MicrosoftHandInteraction");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::Interactions::__MicrosoftHandInteraction__HoloLensHand*, "UnityEngine.XR.OpenXR.Features.Interactions",
                       "MicrosoftHandInteraction/HoloLensHand");
