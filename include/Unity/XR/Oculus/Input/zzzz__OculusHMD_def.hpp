#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(OculusHMD)
namespace UnityEngine::InputSystem::Controls {
class IntegerControl;
}
namespace UnityEngine::InputSystem::Controls {
class QuaternionControl;
}
namespace UnityEngine::InputSystem::Controls {
class Vector3Control;
}
namespace UnityEngine::InputSystem::Controls {
class ButtonControl;
}
// Forward declare root types
namespace Unity::XR::Oculus::Input {
class OculusHMD;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::OculusHMD);
// Type: Unity.XR.Oculus.Input::OculusHMD
// SizeInfo { instance_size: 608, native_size: -1, calculated_instance_size: 608, calculated_native_size: 608, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Unity::XR::Oculus::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6324))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15153))
// CS Name: ::Unity.XR.Oculus.Input::OculusHMD*
class CORDL_TYPE OculusHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Field <userPresence>k__BackingField, offset 0x1a8, size 0x8
  __declspec(property(get = __get__userPresence_k__BackingField, put = __set__userPresence_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1b0, size 0x8
  __declspec(property(get = __get__trackingState_k__BackingField, put = __set__trackingState_k__BackingField))::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x1b8, size 0x8
  __declspec(property(get = __get__isTracked_k__BackingField, put = __set__isTracked_k__BackingField))::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __get__devicePosition_k__BackingField, put = __set__devicePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __get__deviceRotation_k__BackingField,
                      put = __set__deviceRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __get__deviceAngularVelocity_k__BackingField,
                      put = __set__deviceAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __get__deviceAcceleration_k__BackingField,
                      put = __set__deviceAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField;

  /// @brief Field <deviceAngularAcceleration>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __get__deviceAngularAcceleration_k__BackingField,
                      put = __set__deviceAngularAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField;

  /// @brief Field <leftEyePosition>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __get__leftEyePosition_k__BackingField,
                      put = __set__leftEyePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __get__leftEyeRotation_k__BackingField,
                      put = __set__leftEyeRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField;

  /// @brief Field <leftEyeAngularVelocity>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __get__leftEyeAngularVelocity_k__BackingField,
                      put = __set__leftEyeAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularVelocity_k__BackingField;

  /// @brief Field <leftEyeAcceleration>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __get__leftEyeAcceleration_k__BackingField,
                      put = __set__leftEyeAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAcceleration_k__BackingField;

  /// @brief Field <leftEyeAngularAcceleration>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __get__leftEyeAngularAcceleration_k__BackingField,
                      put = __set__leftEyeAngularAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularAcceleration_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __get__rightEyePosition_k__BackingField,
                      put = __set__rightEyePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __get__rightEyeRotation_k__BackingField,
                      put = __set__rightEyeRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField;

  /// @brief Field <rightEyeAngularVelocity>k__BackingField, offset 0x220, size 0x8
  __declspec(property(get = __get__rightEyeAngularVelocity_k__BackingField,
                      put = __set__rightEyeAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularVelocity_k__BackingField;

  /// @brief Field <rightEyeAcceleration>k__BackingField, offset 0x228, size 0x8
  __declspec(property(get = __get__rightEyeAcceleration_k__BackingField,
                      put = __set__rightEyeAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAcceleration_k__BackingField;

  /// @brief Field <rightEyeAngularAcceleration>k__BackingField, offset 0x230, size 0x8
  __declspec(property(get = __get__rightEyeAngularAcceleration_k__BackingField,
                      put = __set__rightEyeAngularAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularAcceleration_k__BackingField;

  /// @brief Field <centerEyePosition>k__BackingField, offset 0x238, size 0x8
  __declspec(property(get = __get__centerEyePosition_k__BackingField,
                      put = __set__centerEyePosition_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyePosition_k__BackingField;

  /// @brief Field <centerEyeRotation>k__BackingField, offset 0x240, size 0x8
  __declspec(property(get = __get__centerEyeRotation_k__BackingField,
                      put = __set__centerEyeRotation_k__BackingField))::UnityEngine::InputSystem::Controls::QuaternionControl* _centerEyeRotation_k__BackingField;

  /// @brief Field <centerEyeAngularVelocity>k__BackingField, offset 0x248, size 0x8
  __declspec(property(get = __get__centerEyeAngularVelocity_k__BackingField,
                      put = __set__centerEyeAngularVelocity_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularVelocity_k__BackingField;

  /// @brief Field <centerEyeAcceleration>k__BackingField, offset 0x250, size 0x8
  __declspec(property(get = __get__centerEyeAcceleration_k__BackingField,
                      put = __set__centerEyeAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAcceleration_k__BackingField;

  /// @brief Field <centerEyeAngularAcceleration>k__BackingField, offset 0x258, size 0x8
  __declspec(property(get = __get__centerEyeAngularAcceleration_k__BackingField,
                      put = __set__centerEyeAngularAcceleration_k__BackingField))::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularAcceleration_k__BackingField;

  __declspec(property(get = get_userPresence, put = set_userPresence))::UnityEngine::InputSystem::Controls::ButtonControl* userPresence;

  __declspec(property(get = get_trackingState, put = set_trackingState))::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_isTracked, put = set_isTracked))::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_devicePosition, put = set_devicePosition))::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  __declspec(property(get = get_deviceAcceleration, put = set_deviceAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAcceleration;

  __declspec(property(get = get_deviceAngularAcceleration, put = set_deviceAngularAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularAcceleration;

  __declspec(property(get = get_leftEyePosition, put = set_leftEyePosition))::UnityEngine::InputSystem::Controls::Vector3Control* leftEyePosition;

  __declspec(property(get = get_leftEyeRotation, put = set_leftEyeRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* leftEyeRotation;

  __declspec(property(get = get_leftEyeAngularVelocity, put = set_leftEyeAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAngularVelocity;

  __declspec(property(get = get_leftEyeAcceleration, put = set_leftEyeAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAcceleration;

  __declspec(property(get = get_leftEyeAngularAcceleration, put = set_leftEyeAngularAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAngularAcceleration;

  __declspec(property(get = get_rightEyePosition, put = set_rightEyePosition))::UnityEngine::InputSystem::Controls::Vector3Control* rightEyePosition;

  __declspec(property(get = get_rightEyeRotation, put = set_rightEyeRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* rightEyeRotation;

  __declspec(property(get = get_rightEyeAngularVelocity, put = set_rightEyeAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAngularVelocity;

  __declspec(property(get = get_rightEyeAcceleration, put = set_rightEyeAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAcceleration;

  __declspec(property(get = get_rightEyeAngularAcceleration, put = set_rightEyeAngularAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAngularAcceleration;

  __declspec(property(get = get_centerEyePosition, put = set_centerEyePosition))::UnityEngine::InputSystem::Controls::Vector3Control* centerEyePosition;

  __declspec(property(get = get_centerEyeRotation, put = set_centerEyeRotation))::UnityEngine::InputSystem::Controls::QuaternionControl* centerEyeRotation;

  __declspec(property(get = get_centerEyeAngularVelocity, put = set_centerEyeAngularVelocity))::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAngularVelocity;

  __declspec(property(get = get_centerEyeAcceleration, put = set_centerEyeAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAcceleration;

  __declspec(property(get = get_centerEyeAngularAcceleration, put = set_centerEyeAngularAcceleration))::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAngularAcceleration;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__userPresence_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__userPresence_k__BackingField() const;

  constexpr void __set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __get__trackingState_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::IntegerControl*> const& __get__trackingState_k__BackingField() const;

  constexpr void __set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __get__isTracked_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& __get__isTracked_k__BackingField() const;

  constexpr void __set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__devicePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__devicePosition_k__BackingField() const;

  constexpr void __set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__deviceRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__deviceRotation_k__BackingField() const;

  constexpr void __set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceAngularVelocity_k__BackingField() const;

  constexpr void __set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceAcceleration_k__BackingField() const;

  constexpr void __set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__deviceAngularAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__deviceAngularAcceleration_k__BackingField() const;

  constexpr void __set__deviceAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__leftEyePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__leftEyePosition_k__BackingField() const;

  constexpr void __set__leftEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__leftEyeRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__leftEyeRotation_k__BackingField() const;

  constexpr void __set__leftEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__leftEyeAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__leftEyeAngularVelocity_k__BackingField() const;

  constexpr void __set__leftEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__leftEyeAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__leftEyeAcceleration_k__BackingField() const;

  constexpr void __set__leftEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__leftEyeAngularAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__leftEyeAngularAcceleration_k__BackingField() const;

  constexpr void __set__leftEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__rightEyePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__rightEyePosition_k__BackingField() const;

  constexpr void __set__rightEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__rightEyeRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__rightEyeRotation_k__BackingField() const;

  constexpr void __set__rightEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__rightEyeAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__rightEyeAngularVelocity_k__BackingField() const;

  constexpr void __set__rightEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__rightEyeAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__rightEyeAcceleration_k__BackingField() const;

  constexpr void __set__rightEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__rightEyeAngularAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__rightEyeAngularAcceleration_k__BackingField() const;

  constexpr void __set__rightEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__centerEyePosition_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__centerEyePosition_k__BackingField() const;

  constexpr void __set__centerEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __get__centerEyeRotation_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::QuaternionControl*> const& __get__centerEyeRotation_k__BackingField() const;

  constexpr void __set__centerEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__centerEyeAngularVelocity_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__centerEyeAngularVelocity_k__BackingField() const;

  constexpr void __set__centerEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__centerEyeAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__centerEyeAcceleration_k__BackingField() const;

  constexpr void __set__centerEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __get__centerEyeAngularAcceleration_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::Vector3Control*> const& __get__centerEyeAngularAcceleration_k__BackingField() const;

  constexpr void __set__centerEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_userPresence, addr 0x2c7bda0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence();

  /// @brief Method set_userPresence, addr 0x2c7bda8, size 0x8, virtual false, abstract: false, final false
  inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_trackingState, addr 0x2c7bdb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method set_trackingState, addr 0x2c7bdb8, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method get_isTracked, addr 0x2c7bdc0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method set_isTracked, addr 0x2c7bdc8, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method get_devicePosition, addr 0x2c7bdd0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method set_devicePosition, addr 0x2c7bdd8, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceRotation, addr 0x2c7bde0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method set_deviceRotation, addr 0x2c7bde8, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_deviceAngularVelocity, addr 0x2c7bdf0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method set_deviceAngularVelocity, addr 0x2c7bdf8, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceAcceleration, addr 0x2c7be00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration();

  /// @brief Method set_deviceAcceleration, addr 0x2c7be08, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_deviceAngularAcceleration, addr 0x2c7be10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration();

  /// @brief Method set_deviceAngularAcceleration, addr 0x2c7be18, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_leftEyePosition, addr 0x2c7be20, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition();

  /// @brief Method set_leftEyePosition, addr 0x2c7be28, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_leftEyeRotation, addr 0x2c7be30, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation();

  /// @brief Method set_leftEyeRotation, addr 0x2c7be38, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_leftEyeAngularVelocity, addr 0x2c7be40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularVelocity();

  /// @brief Method set_leftEyeAngularVelocity, addr 0x2c7be48, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_leftEyeAcceleration, addr 0x2c7be50, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAcceleration();

  /// @brief Method set_leftEyeAcceleration, addr 0x2c7be58, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_leftEyeAngularAcceleration, addr 0x2c7be60, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularAcceleration();

  /// @brief Method set_leftEyeAngularAcceleration, addr 0x2c7be68, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_rightEyePosition, addr 0x2c7be70, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition();

  /// @brief Method set_rightEyePosition, addr 0x2c7be78, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_rightEyeRotation, addr 0x2c7be80, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation();

  /// @brief Method set_rightEyeRotation, addr 0x2c7be88, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_rightEyeAngularVelocity, addr 0x2c7be90, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularVelocity();

  /// @brief Method set_rightEyeAngularVelocity, addr 0x2c7be98, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_rightEyeAcceleration, addr 0x2c7bea0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAcceleration();

  /// @brief Method set_rightEyeAcceleration, addr 0x2c7bea8, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_rightEyeAngularAcceleration, addr 0x2c7beb0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularAcceleration();

  /// @brief Method set_rightEyeAngularAcceleration, addr 0x2c7beb8, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_centerEyePosition, addr 0x2c7bec0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyePosition();

  /// @brief Method set_centerEyePosition, addr 0x2c7bec8, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_centerEyeRotation, addr 0x2c7bed0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_centerEyeRotation();

  /// @brief Method set_centerEyeRotation, addr 0x2c7bed8, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method get_centerEyeAngularVelocity, addr 0x2c7bee0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularVelocity();

  /// @brief Method set_centerEyeAngularVelocity, addr 0x2c7bee8, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_centerEyeAcceleration, addr 0x2c7bef0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAcceleration();

  /// @brief Method set_centerEyeAcceleration, addr 0x2c7bef8, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method get_centerEyeAngularAcceleration, addr 0x2c7bf00, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularAcceleration();

  /// @brief Method set_centerEyeAngularAcceleration, addr 0x2c7bf08, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method FinishSetup, addr 0x2c7bf10, size 0x440, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::Oculus::Input::OculusHMD* New_ctor();

  /// @brief Method .ctor, addr 0x2c7c350, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OculusHMD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusHMD(OculusHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusHMD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusHMD(OculusHMD const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusHMD();

public:
  /// @brief Field <userPresence>k__BackingField, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____userPresence_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAcceleration_k__BackingField;

  /// @brief Field <deviceAngularAcceleration>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularAcceleration_k__BackingField;

  /// @brief Field <leftEyePosition>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____leftEyeRotation_k__BackingField;

  /// @brief Field <leftEyeAngularVelocity>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAngularVelocity_k__BackingField;

  /// @brief Field <leftEyeAcceleration>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAcceleration_k__BackingField;

  /// @brief Field <leftEyeAngularAcceleration>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAngularAcceleration_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____rightEyeRotation_k__BackingField;

  /// @brief Field <rightEyeAngularVelocity>k__BackingField, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAngularVelocity_k__BackingField;

  /// @brief Field <rightEyeAcceleration>k__BackingField, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAcceleration_k__BackingField;

  /// @brief Field <rightEyeAngularAcceleration>k__BackingField, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAngularAcceleration_k__BackingField;

  /// @brief Field <centerEyePosition>k__BackingField, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyePosition_k__BackingField;

  /// @brief Field <centerEyeRotation>k__BackingField, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____centerEyeRotation_k__BackingField;

  /// @brief Field <centerEyeAngularVelocity>k__BackingField, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAngularVelocity_k__BackingField;

  /// @brief Field <centerEyeAcceleration>k__BackingField, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAcceleration_k__BackingField;

  /// @brief Field <centerEyeAngularAcceleration>k__BackingField, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAngularAcceleration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::OculusHMD, 0x260>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____userPresence_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____trackingState_k__BackingField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____isTracked_k__BackingField) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____devicePosition_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceRotation_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAngularVelocity_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAcceleration_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAngularAcceleration_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyePosition_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeRotation_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAngularVelocity_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAcceleration_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAngularAcceleration_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyePosition_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeRotation_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAngularVelocity_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAcceleration_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAngularAcceleration_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyePosition_k__BackingField) == 0x238, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeRotation_k__BackingField) == 0x240, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAngularVelocity_k__BackingField) == 0x248, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAcceleration_k__BackingField) == 0x250, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAngularAcceleration_k__BackingField) == 0x258, "Offset mismatch!");

} // namespace Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusHMD);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusHMD*, "Unity.XR.Oculus.Input", "OculusHMD");
