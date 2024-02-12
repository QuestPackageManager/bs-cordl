#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
CORDL_MODULE_EXPORT(OculusTrackingReference)
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
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusTrackingReference;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::OculusTrackingReference);
// Type: Unity.XR.Oculus.Input::OculusTrackingReference
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(5498))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15195))
// CS Name: ::Unity.XR.Oculus.Input::OculusTrackingReference*
class CORDL_TYPE OculusTrackingReference : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  /// @brief Field <trackingState>k__BackingField, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePosition_k__BackingField,
                      put = __cordl_internal_set__devicePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceRotation_k__BackingField,
                      put = __cordl_internal_set__deviceRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_devicePosition, put = set_devicePosition))::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__isTracked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __cordl_internal_get__isTracked_k__BackingField() const;

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__devicePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __cordl_internal_get__devicePosition_k__BackingField() const;

  constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__deviceRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __cordl_internal_get__deviceRotation_k__BackingField() const;

  constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_trackingState, addr 0x2c79434, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_trackingState, addr 0x2c7943c, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_isTracked, addr 0x2c79444, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method set_isTracked, addr 0x2c7944c, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_devicePosition, addr 0x2c79454, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method set_devicePosition, addr 0x2c7945c, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceRotation, addr 0x2c79464, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method set_deviceRotation, addr 0x2c7946c, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method FinishSetup, addr 0x2c79474, size 0x148, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::Oculus::Input::OculusTrackingReference* New_ctor();

  /// @brief Method .ctor, addr 0x2c795bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusTrackingReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusTrackingReference(OculusTrackingReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusTrackingReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusTrackingReference(OculusTrackingReference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusTrackingReference();

public:
  /// @brief Field <trackingState>k__BackingField, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::OculusTrackingReference, 0x178>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusTrackingReference, ____trackingState_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusTrackingReference, ____isTracked_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusTrackingReference, ____devicePosition_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusTrackingReference, ____deviceRotation_k__BackingField) == 0x170, "Offset mismatch!");

} // namespace Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusTrackingReference);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusTrackingReference*, "Unity.XR.Oculus.Input", "OculusTrackingReference");
