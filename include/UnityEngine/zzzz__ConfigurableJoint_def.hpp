#pragma once
// IWYU pragma private; include "UnityEngine/ConfigurableJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConfigurableJoint)
namespace UnityEngine {
struct ConfigurableJointMotion;
}
namespace UnityEngine {
struct JointDrive;
}
namespace UnityEngine {
struct JointProjectionMode;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RotationDriveMode;
}
namespace UnityEngine {
struct SoftJointLimitSpring;
}
namespace UnityEngine {
struct SoftJointLimit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ConfigurableJoint;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ConfigurableJoint);
// Dependencies UnityEngine.Joint
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ConfigurableJoint
class CORDL_TYPE ConfigurableJoint : public ::UnityEngine::Joint {
public:
  // Declarations
  __declspec(property(get = get_angularXDrive, put = set_angularXDrive)) ::UnityEngine::JointDrive angularXDrive;

  __declspec(property(get = get_angularXLimitSpring, put = set_angularXLimitSpring)) ::UnityEngine::SoftJointLimitSpring angularXLimitSpring;

  __declspec(property(get = get_angularXMotion, put = set_angularXMotion)) ::UnityEngine::ConfigurableJointMotion angularXMotion;

  __declspec(property(get = get_angularYLimit, put = set_angularYLimit)) ::UnityEngine::SoftJointLimit angularYLimit;

  __declspec(property(get = get_angularYMotion, put = set_angularYMotion)) ::UnityEngine::ConfigurableJointMotion angularYMotion;

  __declspec(property(get = get_angularYZDrive, put = set_angularYZDrive)) ::UnityEngine::JointDrive angularYZDrive;

  __declspec(property(get = get_angularYZLimitSpring, put = set_angularYZLimitSpring)) ::UnityEngine::SoftJointLimitSpring angularYZLimitSpring;

  __declspec(property(get = get_angularZLimit, put = set_angularZLimit)) ::UnityEngine::SoftJointLimit angularZLimit;

  __declspec(property(get = get_angularZMotion, put = set_angularZMotion)) ::UnityEngine::ConfigurableJointMotion angularZMotion;

  __declspec(property(get = get_configuredInWorldSpace, put = set_configuredInWorldSpace)) bool configuredInWorldSpace;

  __declspec(property(get = get_highAngularXLimit, put = set_highAngularXLimit)) ::UnityEngine::SoftJointLimit highAngularXLimit;

  __declspec(property(get = get_linearLimit, put = set_linearLimit)) ::UnityEngine::SoftJointLimit linearLimit;

  __declspec(property(get = get_linearLimitSpring, put = set_linearLimitSpring)) ::UnityEngine::SoftJointLimitSpring linearLimitSpring;

  __declspec(property(get = get_lowAngularXLimit, put = set_lowAngularXLimit)) ::UnityEngine::SoftJointLimit lowAngularXLimit;

  __declspec(property(get = get_projectionAngle, put = set_projectionAngle)) float_t projectionAngle;

  __declspec(property(get = get_projectionDistance, put = set_projectionDistance)) float_t projectionDistance;

  __declspec(property(get = get_projectionMode, put = set_projectionMode)) ::UnityEngine::JointProjectionMode projectionMode;

  __declspec(property(get = get_rotationDriveMode, put = set_rotationDriveMode)) ::UnityEngine::RotationDriveMode rotationDriveMode;

  __declspec(property(get = get_secondaryAxis, put = set_secondaryAxis)) ::UnityEngine::Vector3 secondaryAxis;

  __declspec(property(get = get_slerpDrive, put = set_slerpDrive)) ::UnityEngine::JointDrive slerpDrive;

  __declspec(property(get = get_swapBodies, put = set_swapBodies)) bool swapBodies;

  __declspec(property(get = get_targetAngularVelocity, put = set_targetAngularVelocity)) ::UnityEngine::Vector3 targetAngularVelocity;

  __declspec(property(get = get_targetPosition, put = set_targetPosition)) ::UnityEngine::Vector3 targetPosition;

  __declspec(property(get = get_targetRotation, put = set_targetRotation)) ::UnityEngine::Quaternion targetRotation;

  __declspec(property(get = get_targetVelocity, put = set_targetVelocity)) ::UnityEngine::Vector3 targetVelocity;

  __declspec(property(get = get_xDrive, put = set_xDrive)) ::UnityEngine::JointDrive xDrive;

  __declspec(property(get = get_xMotion, put = set_xMotion)) ::UnityEngine::ConfigurableJointMotion xMotion;

  __declspec(property(get = get_yDrive, put = set_yDrive)) ::UnityEngine::JointDrive yDrive;

  __declspec(property(get = get_yMotion, put = set_yMotion)) ::UnityEngine::ConfigurableJointMotion yMotion;

  __declspec(property(get = get_zDrive, put = set_zDrive)) ::UnityEngine::JointDrive zDrive;

  __declspec(property(get = get_zMotion, put = set_zMotion)) ::UnityEngine::ConfigurableJointMotion zMotion;

  static inline ::UnityEngine::ConfigurableJoint* New_ctor();

  /// @brief Method .ctor, addr 0x490eef0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularXDrive, addr 0x490e8dc, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularXDrive();

  /// @brief Method get_angularXDrive_Injected, addr 0x490e930, size 0x44, virtual false, abstract: false, final false
  inline void get_angularXDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularXLimitSpring, addr 0x490d7ac, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularXLimitSpring();

  /// @brief Method get_angularXLimitSpring_Injected, addr 0x490d7f8, size 0x44, virtual false, abstract: false, final false
  inline void get_angularXLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularXMotion, addr 0x490d510, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularXMotion();

  /// @brief Method get_angularYLimit, addr 0x490dd8c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularYLimit();

  /// @brief Method get_angularYLimit_Injected, addr 0x490dde8, size 0x44, virtual false, abstract: false, final false
  inline void get_angularYLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularYMotion, addr 0x490d590, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularYMotion();

  /// @brief Method get_angularYZDrive, addr 0x490ea08, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularYZDrive();

  /// @brief Method get_angularYZDrive_Injected, addr 0x490ea5c, size 0x44, virtual false, abstract: false, final false
  inline void get_angularYZDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularYZLimitSpring, addr 0x490d8c8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularYZLimitSpring();

  /// @brief Method get_angularYZLimitSpring_Injected, addr 0x490d914, size 0x44, virtual false, abstract: false, final false
  inline void get_angularYZLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularZLimit, addr 0x490dec4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularZLimit();

  /// @brief Method get_angularZLimit_Injected, addr 0x490df20, size 0x44, virtual false, abstract: false, final false
  inline void get_angularZLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularZMotion, addr 0x490d610, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularZMotion();

  /// @brief Method get_configuredInWorldSpace, addr 0x490edf0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_configuredInWorldSpace();

  /// @brief Method get_highAngularXLimit, addr 0x490dc54, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_highAngularXLimit();

  /// @brief Method get_highAngularXLimit_Injected, addr 0x490dcb0, size 0x44, virtual false, abstract: false, final false
  inline void get_highAngularXLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_linearLimit, addr 0x490d9e4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_linearLimit();

  /// @brief Method get_linearLimitSpring, addr 0x490d690, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_linearLimitSpring();

  /// @brief Method get_linearLimitSpring_Injected, addr 0x490d6dc, size 0x44, virtual false, abstract: false, final false
  inline void get_linearLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_linearLimit_Injected, addr 0x490da40, size 0x44, virtual false, abstract: false, final false
  inline void get_linearLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_lowAngularXLimit, addr 0x490db1c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_lowAngularXLimit();

  /// @brief Method get_lowAngularXLimit_Injected, addr 0x490db78, size 0x44, virtual false, abstract: false, final false
  inline void get_lowAngularXLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_projectionAngle, addr 0x490ed68, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_projectionAngle();

  /// @brief Method get_projectionDistance, addr 0x490ece0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_projectionDistance();

  /// @brief Method get_projectionMode, addr 0x490ec60, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::JointProjectionMode get_projectionMode();

  /// @brief Method get_rotationDriveMode, addr 0x490e85c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationDriveMode get_rotationDriveMode();

  /// @brief Method get_secondaryAxis, addr 0x490d258, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_secondaryAxis();

  /// @brief Method get_secondaryAxis_Injected, addr 0x490d2b4, size 0x44, virtual false, abstract: false, final false
  inline void get_secondaryAxis_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_slerpDrive, addr 0x490eb34, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_slerpDrive();

  /// @brief Method get_slerpDrive_Injected, addr 0x490eb88, size 0x44, virtual false, abstract: false, final false
  inline void get_slerpDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_swapBodies, addr 0x490ee70, size 0x3c, virtual false, abstract: false, final false
  inline bool get_swapBodies();

  /// @brief Method get_targetAngularVelocity, addr 0x490e724, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetAngularVelocity();

  /// @brief Method get_targetAngularVelocity_Injected, addr 0x490e780, size 0x44, virtual false, abstract: false, final false
  inline void get_targetAngularVelocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetPosition, addr 0x490dffc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x490e058, size 0x44, virtual false, abstract: false, final false
  inline void get_targetPosition_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x490e5f0, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x490e648, size 0x44, virtual false, abstract: false, final false
  inline void get_targetRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_targetVelocity, addr 0x490e134, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetVelocity();

  /// @brief Method get_targetVelocity_Injected, addr 0x490e190, size 0x44, virtual false, abstract: false, final false
  inline void get_targetVelocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_xDrive, addr 0x490e26c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x490e2c0, size 0x44, virtual false, abstract: false, final false
  inline void get_xDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_xMotion, addr 0x490d390, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_xMotion();

  /// @brief Method get_yDrive, addr 0x490e398, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x490e3ec, size 0x44, virtual false, abstract: false, final false
  inline void get_yDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_yMotion, addr 0x490d410, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_yMotion();

  /// @brief Method get_zDrive, addr 0x490e4c4, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x490e518, size 0x44, virtual false, abstract: false, final false
  inline void get_zDrive_Injected(::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_zMotion, addr 0x490d490, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_zMotion();

  /// @brief Method set_angularXDrive, addr 0x490e974, size 0x50, virtual false, abstract: false, final false
  inline void set_angularXDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularXDrive_Injected, addr 0x490e9c4, size 0x44, virtual false, abstract: false, final false
  inline void set_angularXDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_angularXLimitSpring, addr 0x490d83c, size 0x48, virtual false, abstract: false, final false
  inline void set_angularXLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularXLimitSpring_Injected, addr 0x490d884, size 0x44, virtual false, abstract: false, final false
  inline void set_angularXLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_angularXMotion, addr 0x490d54c, size 0x44, virtual false, abstract: false, final false
  inline void set_angularXMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYLimit, addr 0x490de2c, size 0x54, virtual false, abstract: false, final false
  inline void set_angularYLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularYLimit_Injected, addr 0x490de80, size 0x44, virtual false, abstract: false, final false
  inline void set_angularYLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_angularYMotion, addr 0x490d5cc, size 0x44, virtual false, abstract: false, final false
  inline void set_angularYMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYZDrive, addr 0x490eaa0, size 0x50, virtual false, abstract: false, final false
  inline void set_angularYZDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularYZDrive_Injected, addr 0x490eaf0, size 0x44, virtual false, abstract: false, final false
  inline void set_angularYZDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_angularYZLimitSpring, addr 0x490d958, size 0x48, virtual false, abstract: false, final false
  inline void set_angularYZLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularYZLimitSpring_Injected, addr 0x490d9a0, size 0x44, virtual false, abstract: false, final false
  inline void set_angularYZLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_angularZLimit, addr 0x490df64, size 0x54, virtual false, abstract: false, final false
  inline void set_angularZLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularZLimit_Injected, addr 0x490dfb8, size 0x44, virtual false, abstract: false, final false
  inline void set_angularZLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_angularZMotion, addr 0x490d64c, size 0x44, virtual false, abstract: false, final false
  inline void set_angularZMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_configuredInWorldSpace, addr 0x490ee2c, size 0x44, virtual false, abstract: false, final false
  inline void set_configuredInWorldSpace(bool value);

  /// @brief Method set_highAngularXLimit, addr 0x490dcf4, size 0x54, virtual false, abstract: false, final false
  inline void set_highAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_highAngularXLimit_Injected, addr 0x490dd48, size 0x44, virtual false, abstract: false, final false
  inline void set_highAngularXLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_linearLimit, addr 0x490da84, size 0x54, virtual false, abstract: false, final false
  inline void set_linearLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_linearLimitSpring, addr 0x490d720, size 0x48, virtual false, abstract: false, final false
  inline void set_linearLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_linearLimitSpring_Injected, addr 0x490d768, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLimitSpring_Injected(::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_linearLimit_Injected, addr 0x490dad8, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_lowAngularXLimit, addr 0x490dbbc, size 0x54, virtual false, abstract: false, final false
  inline void set_lowAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_lowAngularXLimit_Injected, addr 0x490dc10, size 0x44, virtual false, abstract: false, final false
  inline void set_lowAngularXLimit_Injected(::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_projectionAngle, addr 0x490eda4, size 0x4c, virtual false, abstract: false, final false
  inline void set_projectionAngle(float_t value);

  /// @brief Method set_projectionDistance, addr 0x490ed1c, size 0x4c, virtual false, abstract: false, final false
  inline void set_projectionDistance(float_t value);

  /// @brief Method set_projectionMode, addr 0x490ec9c, size 0x44, virtual false, abstract: false, final false
  inline void set_projectionMode(::UnityEngine::JointProjectionMode value);

  /// @brief Method set_rotationDriveMode, addr 0x490e898, size 0x44, virtual false, abstract: false, final false
  inline void set_rotationDriveMode(::UnityEngine::RotationDriveMode value);

  /// @brief Method set_secondaryAxis, addr 0x490d2f8, size 0x54, virtual false, abstract: false, final false
  inline void set_secondaryAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_secondaryAxis_Injected, addr 0x490d34c, size 0x44, virtual false, abstract: false, final false
  inline void set_secondaryAxis_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_slerpDrive, addr 0x490ebcc, size 0x50, virtual false, abstract: false, final false
  inline void set_slerpDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_slerpDrive_Injected, addr 0x490ec1c, size 0x44, virtual false, abstract: false, final false
  inline void set_slerpDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_swapBodies, addr 0x490eeac, size 0x44, virtual false, abstract: false, final false
  inline void set_swapBodies(bool value);

  /// @brief Method set_targetAngularVelocity, addr 0x490e7c4, size 0x54, virtual false, abstract: false, final false
  inline void set_targetAngularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetAngularVelocity_Injected, addr 0x490e818, size 0x44, virtual false, abstract: false, final false
  inline void set_targetAngularVelocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_targetPosition, addr 0x490e09c, size 0x54, virtual false, abstract: false, final false
  inline void set_targetPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_targetPosition_Injected, addr 0x490e0f0, size 0x44, virtual false, abstract: false, final false
  inline void set_targetPosition_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_targetRotation, addr 0x490e68c, size 0x54, virtual false, abstract: false, final false
  inline void set_targetRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_targetRotation_Injected, addr 0x490e6e0, size 0x44, virtual false, abstract: false, final false
  inline void set_targetRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_targetVelocity, addr 0x490e1d4, size 0x54, virtual false, abstract: false, final false
  inline void set_targetVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetVelocity_Injected, addr 0x490e228, size 0x44, virtual false, abstract: false, final false
  inline void set_targetVelocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_xDrive, addr 0x490e304, size 0x50, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x490e354, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_xMotion, addr 0x490d3cc, size 0x44, virtual false, abstract: false, final false
  inline void set_xMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_yDrive, addr 0x490e430, size 0x50, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x490e480, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_yMotion, addr 0x490d44c, size 0x44, virtual false, abstract: false, final false
  inline void set_yMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_zDrive, addr 0x490e55c, size 0x50, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x490e5ac, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive_Injected(::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_zMotion, addr 0x490d4cc, size 0x44, virtual false, abstract: false, final false
  inline void set_zMotion(::UnityEngine::ConfigurableJointMotion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurableJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurableJoint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurableJoint(ConfigurableJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurableJoint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurableJoint(ConfigurableJoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15767 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ConfigurableJoint, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ConfigurableJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ConfigurableJoint*, "UnityEngine", "ConfigurableJoint");
