#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Input/OculusHMD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
CORDL_MODULE_EXPORT(OculusHMD)
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
class OculusHMD;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::Input::OculusHMD);
// Dependencies UnityEngine.InputSystem.XR.XRHMD
namespace Unity::XR::Oculus::Input {
// Is value type: false
// CS Name: Unity.XR.Oculus.Input.OculusHMD
class CORDL_TYPE OculusHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
  // Declarations
  /// @brief Field <centerEyeAcceleration>k__BackingField, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeAcceleration_k__BackingField,
                      put = __cordl_internal_set__centerEyeAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAcceleration_k__BackingField;

  /// @brief Field <centerEyeAngularAcceleration>k__BackingField, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__centerEyeAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularAcceleration_k__BackingField;

  /// @brief Field <centerEyeAngularVelocity>k__BackingField, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__centerEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyeAngularVelocity_k__BackingField;

  /// @brief Field <centerEyePosition>k__BackingField, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyePosition_k__BackingField,
                      put = __cordl_internal_set__centerEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _centerEyePosition_k__BackingField;

  /// @brief Field <centerEyeRotation>k__BackingField, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeRotation_k__BackingField,
                      put = __cordl_internal_set__centerEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _centerEyeRotation_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAcceleration_k__BackingField,
                      put = __cordl_internal_set__deviceAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAcceleration_k__BackingField;

  /// @brief Field <deviceAngularAcceleration>k__BackingField, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__deviceAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularAcceleration_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__deviceAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _deviceAngularVelocity_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get__devicePosition_k__BackingField,
                      put = __cordl_internal_set__devicePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get__deviceRotation_k__BackingField,
                      put = __cordl_internal_set__deviceRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _deviceRotation_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get__isTracked_k__BackingField,
                      put = __cordl_internal_set__isTracked_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _isTracked_k__BackingField;

  /// @brief Field <leftEyeAcceleration>k__BackingField, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeAcceleration_k__BackingField,
                      put = __cordl_internal_set__leftEyeAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAcceleration_k__BackingField;

  /// @brief Field <leftEyeAngularAcceleration>k__BackingField, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__leftEyeAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularAcceleration_k__BackingField;

  /// @brief Field <leftEyeAngularVelocity>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__leftEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyeAngularVelocity_k__BackingField;

  /// @brief Field <leftEyePosition>k__BackingField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyePosition_k__BackingField,
                      put = __cordl_internal_set__leftEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get__leftEyeRotation_k__BackingField,
                      put = __cordl_internal_set__leftEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _leftEyeRotation_k__BackingField;

  /// @brief Field <rightEyeAcceleration>k__BackingField, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeAcceleration_k__BackingField,
                      put = __cordl_internal_set__rightEyeAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAcceleration_k__BackingField;

  /// @brief Field <rightEyeAngularAcceleration>k__BackingField, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeAngularAcceleration_k__BackingField,
                      put = __cordl_internal_set__rightEyeAngularAcceleration_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularAcceleration_k__BackingField;

  /// @brief Field <rightEyeAngularVelocity>k__BackingField, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeAngularVelocity_k__BackingField,
                      put = __cordl_internal_set__rightEyeAngularVelocity_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyeAngularVelocity_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyePosition_k__BackingField,
                      put = __cordl_internal_set__rightEyePosition_k__BackingField)) ::UnityEngine::InputSystem::Controls::Vector3Control* _rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get__rightEyeRotation_k__BackingField,
                      put = __cordl_internal_set__rightEyeRotation_k__BackingField)) ::UnityEngine::InputSystem::Controls::QuaternionControl* _rightEyeRotation_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get__trackingState_k__BackingField,
                      put = __cordl_internal_set__trackingState_k__BackingField)) ::UnityEngine::InputSystem::Controls::IntegerControl* _trackingState_k__BackingField;

  /// @brief Field <userPresence>k__BackingField, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get__userPresence_k__BackingField,
                      put = __cordl_internal_set__userPresence_k__BackingField)) ::UnityEngine::InputSystem::Controls::ButtonControl* _userPresence_k__BackingField;

  __declspec(property(get = get_centerEyeAcceleration, put = set_centerEyeAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAcceleration;

  __declspec(property(get = get_centerEyeAngularAcceleration, put = set_centerEyeAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAngularAcceleration;

  __declspec(property(get = get_centerEyeAngularVelocity, put = set_centerEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyeAngularVelocity;

  __declspec(property(get = get_centerEyePosition, put = set_centerEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* centerEyePosition;

  __declspec(property(get = get_centerEyeRotation, put = set_centerEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* centerEyeRotation;

  __declspec(property(get = get_deviceAcceleration, put = set_deviceAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAcceleration;

  __declspec(property(get = get_deviceAngularAcceleration, put = set_deviceAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularAcceleration;

  __declspec(property(get = get_deviceAngularVelocity, put = set_deviceAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* deviceAngularVelocity;

  __declspec(property(get = get_devicePosition, put = set_devicePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* devicePosition;

  __declspec(property(get = get_deviceRotation, put = set_deviceRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* deviceRotation;

  __declspec(property(get = get_isTracked, put = set_isTracked)) ::UnityEngine::InputSystem::Controls::ButtonControl* isTracked;

  __declspec(property(get = get_leftEyeAcceleration, put = set_leftEyeAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAcceleration;

  __declspec(property(get = get_leftEyeAngularAcceleration, put = set_leftEyeAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAngularAcceleration;

  __declspec(property(get = get_leftEyeAngularVelocity, put = set_leftEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyeAngularVelocity;

  __declspec(property(get = get_leftEyePosition, put = set_leftEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* leftEyePosition;

  __declspec(property(get = get_leftEyeRotation, put = set_leftEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* leftEyeRotation;

  __declspec(property(get = get_rightEyeAcceleration, put = set_rightEyeAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAcceleration;

  __declspec(property(get = get_rightEyeAngularAcceleration, put = set_rightEyeAngularAcceleration)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAngularAcceleration;

  __declspec(property(get = get_rightEyeAngularVelocity, put = set_rightEyeAngularVelocity)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyeAngularVelocity;

  __declspec(property(get = get_rightEyePosition, put = set_rightEyePosition)) ::UnityEngine::InputSystem::Controls::Vector3Control* rightEyePosition;

  __declspec(property(get = get_rightEyeRotation, put = set_rightEyeRotation)) ::UnityEngine::InputSystem::Controls::QuaternionControl* rightEyeRotation;

  __declspec(property(get = get_trackingState, put = set_trackingState)) ::UnityEngine::InputSystem::Controls::IntegerControl* trackingState;

  __declspec(property(get = get_userPresence, put = set_userPresence)) ::UnityEngine::InputSystem::Controls::ButtonControl* userPresence;

  /// @brief Method FinishSetup, addr 0x48379e4, size 0x440, virtual true, abstract: false, final false
  inline void FinishSetup();

  static inline ::Unity::XR::Oculus::Input::OculusHMD* New_ctor();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyeAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyeAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyeAngularAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyeAngularAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__centerEyePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__centerEyePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__centerEyeRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__centerEyeRotation_k__BackingField();

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

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyeAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyeAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyeAngularAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyeAngularAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__leftEyePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__leftEyePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__leftEyeRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__leftEyeRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyeAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyeAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyeAngularAcceleration_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyeAngularAcceleration_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyeAngularVelocity_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyeAngularVelocity_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control* const& __cordl_internal_get__rightEyePosition_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::Vector3Control*& __cordl_internal_get__rightEyePosition_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl* const& __cordl_internal_get__rightEyeRotation_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::QuaternionControl*& __cordl_internal_get__rightEyeRotation_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl* const& __cordl_internal_get__trackingState_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::IntegerControl*& __cordl_internal_get__trackingState_k__BackingField();

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl* const& __cordl_internal_get__userPresence_k__BackingField() const;

  constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& __cordl_internal_get__userPresence_k__BackingField();

  constexpr void __cordl_internal_set__centerEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__centerEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__centerEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__centerEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__centerEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__deviceAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__devicePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__deviceRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__isTracked_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  constexpr void __cordl_internal_set__leftEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__leftEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__rightEyeAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeAngularAcceleration_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeAngularVelocity_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyePosition_k__BackingField(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  constexpr void __cordl_internal_set__rightEyeRotation_k__BackingField(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  constexpr void __cordl_internal_set__trackingState_k__BackingField(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  constexpr void __cordl_internal_set__userPresence_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method .ctor, addr 0x4837e24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_centerEyeAcceleration, addr 0x48379c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAcceleration();

  /// @brief Method get_centerEyeAngularAcceleration, addr 0x48379d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularAcceleration();

  /// @brief Method get_centerEyeAngularVelocity, addr 0x48379b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyeAngularVelocity();

  /// @brief Method get_centerEyePosition, addr 0x4837994, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_centerEyePosition();

  /// @brief Method get_centerEyeRotation, addr 0x48379a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_centerEyeRotation();

  /// @brief Method get_deviceAcceleration, addr 0x48378d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAcceleration();

  /// @brief Method get_deviceAngularAcceleration, addr 0x48378e4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularAcceleration();

  /// @brief Method get_deviceAngularVelocity, addr 0x48378c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_deviceAngularVelocity();

  /// @brief Method get_devicePosition, addr 0x48378a4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_devicePosition();

  /// @brief Method get_deviceRotation, addr 0x48378b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_deviceRotation();

  /// @brief Method get_isTracked, addr 0x4837894, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_isTracked();

  /// @brief Method get_leftEyeAcceleration, addr 0x4837924, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAcceleration();

  /// @brief Method get_leftEyeAngularAcceleration, addr 0x4837934, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularAcceleration();

  /// @brief Method get_leftEyeAngularVelocity, addr 0x4837914, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyeAngularVelocity();

  /// @brief Method get_leftEyePosition, addr 0x48378f4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_leftEyePosition();

  /// @brief Method get_leftEyeRotation, addr 0x4837904, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_leftEyeRotation();

  /// @brief Method get_rightEyeAcceleration, addr 0x4837974, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAcceleration();

  /// @brief Method get_rightEyeAngularAcceleration, addr 0x4837984, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularAcceleration();

  /// @brief Method get_rightEyeAngularVelocity, addr 0x4837964, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyeAngularVelocity();

  /// @brief Method get_rightEyePosition, addr 0x4837944, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::Vector3Control* get_rightEyePosition();

  /// @brief Method get_rightEyeRotation, addr 0x4837954, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::QuaternionControl* get_rightEyeRotation();

  /// @brief Method get_trackingState, addr 0x4837884, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::IntegerControl* get_trackingState();

  /// @brief Method get_userPresence, addr 0x4837874, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Controls::ButtonControl* get_userPresence();

  /// @brief Method set_centerEyeAcceleration, addr 0x48379cc, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_centerEyeAngularAcceleration, addr 0x48379dc, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_centerEyeAngularVelocity, addr 0x48379bc, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_centerEyePosition, addr 0x483799c, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_centerEyeRotation, addr 0x48379ac, size 0x8, virtual false, abstract: false, final false
  inline void set_centerEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_deviceAcceleration, addr 0x48378dc, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceAngularAcceleration, addr 0x48378ec, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceAngularVelocity, addr 0x48378cc, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_devicePosition, addr 0x48378ac, size 0x8, virtual false, abstract: false, final false
  inline void set_devicePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_deviceRotation, addr 0x48378bc, size 0x8, virtual false, abstract: false, final false
  inline void set_deviceRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_isTracked, addr 0x483789c, size 0x8, virtual false, abstract: false, final false
  inline void set_isTracked(::UnityEngine::InputSystem::Controls::ButtonControl* value);

  /// @brief Method set_leftEyeAcceleration, addr 0x483792c, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyeAngularAcceleration, addr 0x483793c, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyeAngularVelocity, addr 0x483791c, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyePosition, addr 0x48378fc, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_leftEyeRotation, addr 0x483790c, size 0x8, virtual false, abstract: false, final false
  inline void set_leftEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_rightEyeAcceleration, addr 0x483797c, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rightEyeAngularAcceleration, addr 0x483798c, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAngularAcceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rightEyeAngularVelocity, addr 0x483796c, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeAngularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rightEyePosition, addr 0x483794c, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyePosition(::UnityEngine::InputSystem::Controls::Vector3Control* value);

  /// @brief Method set_rightEyeRotation, addr 0x483795c, size 0x8, virtual false, abstract: false, final false
  inline void set_rightEyeRotation(::UnityEngine::InputSystem::Controls::QuaternionControl* value);

  /// @brief Method set_trackingState, addr 0x483788c, size 0x8, virtual false, abstract: false, final false
  inline void set_trackingState(::UnityEngine::InputSystem::Controls::IntegerControl* value);

  /// @brief Method set_userPresence, addr 0x483787c, size 0x8, virtual false, abstract: false, final false
  inline void set_userPresence(::UnityEngine::InputSystem::Controls::ButtonControl* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusHMD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusHMD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusHMD(OculusHMD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusHMD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusHMD(OculusHMD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17425 };

  /// @brief Field <userPresence>k__BackingField, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____userPresence_k__BackingField;

  /// @brief Field <trackingState>k__BackingField, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::IntegerControl* ____trackingState_k__BackingField;

  /// @brief Field <isTracked>k__BackingField, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::ButtonControl* ____isTracked_k__BackingField;

  /// @brief Field <devicePosition>k__BackingField, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____devicePosition_k__BackingField;

  /// @brief Field <deviceRotation>k__BackingField, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____deviceRotation_k__BackingField;

  /// @brief Field <deviceAngularVelocity>k__BackingField, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularVelocity_k__BackingField;

  /// @brief Field <deviceAcceleration>k__BackingField, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAcceleration_k__BackingField;

  /// @brief Field <deviceAngularAcceleration>k__BackingField, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____deviceAngularAcceleration_k__BackingField;

  /// @brief Field <leftEyePosition>k__BackingField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyePosition_k__BackingField;

  /// @brief Field <leftEyeRotation>k__BackingField, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____leftEyeRotation_k__BackingField;

  /// @brief Field <leftEyeAngularVelocity>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAngularVelocity_k__BackingField;

  /// @brief Field <leftEyeAcceleration>k__BackingField, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAcceleration_k__BackingField;

  /// @brief Field <leftEyeAngularAcceleration>k__BackingField, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____leftEyeAngularAcceleration_k__BackingField;

  /// @brief Field <rightEyePosition>k__BackingField, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyePosition_k__BackingField;

  /// @brief Field <rightEyeRotation>k__BackingField, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____rightEyeRotation_k__BackingField;

  /// @brief Field <rightEyeAngularVelocity>k__BackingField, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAngularVelocity_k__BackingField;

  /// @brief Field <rightEyeAcceleration>k__BackingField, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAcceleration_k__BackingField;

  /// @brief Field <rightEyeAngularAcceleration>k__BackingField, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____rightEyeAngularAcceleration_k__BackingField;

  /// @brief Field <centerEyePosition>k__BackingField, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyePosition_k__BackingField;

  /// @brief Field <centerEyeRotation>k__BackingField, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::QuaternionControl* ____centerEyeRotation_k__BackingField;

  /// @brief Field <centerEyeAngularVelocity>k__BackingField, offset: 0x260, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAngularVelocity_k__BackingField;

  /// @brief Field <centerEyeAcceleration>k__BackingField, offset: 0x268, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAcceleration_k__BackingField;

  /// @brief Field <centerEyeAngularAcceleration>k__BackingField, offset: 0x270, size: 0x8, def value: None
  ::UnityEngine::InputSystem::Controls::Vector3Control* ____centerEyeAngularAcceleration_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____userPresence_k__BackingField) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____trackingState_k__BackingField) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____isTracked_k__BackingField) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____devicePosition_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceRotation_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAngularVelocity_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAcceleration_k__BackingField) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____deviceAngularAcceleration_k__BackingField) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyePosition_k__BackingField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeRotation_k__BackingField) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAngularVelocity_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAcceleration_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____leftEyeAngularAcceleration_k__BackingField) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyePosition_k__BackingField) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeRotation_k__BackingField) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAngularVelocity_k__BackingField) == 0x238, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAcceleration_k__BackingField) == 0x240, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____rightEyeAngularAcceleration_k__BackingField) == 0x248, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyePosition_k__BackingField) == 0x250, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeRotation_k__BackingField) == 0x258, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAngularVelocity_k__BackingField) == 0x260, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAcceleration_k__BackingField) == 0x268, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::Input::OculusHMD, ____centerEyeAngularAcceleration_k__BackingField) == 0x270, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Input::OculusHMD, 0x278>, "Size mismatch!");

} // namespace Unity::XR::Oculus::Input
NEED_NO_BOX(::Unity::XR::Oculus::Input::OculusHMD);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Input::OculusHMD*, "Unity.XR.Oculus.Input", "OculusHMD");
