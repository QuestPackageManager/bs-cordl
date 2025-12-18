#pragma once
// IWYU pragma private; include "UnityEngine/ConfigurableJoint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Joint_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConfigurableJoint)
namespace System {
struct IntPtr;
}
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

  /// @brief Method .ctor, addr 0x69b7e20, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularXDrive, addr 0x69b7124, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularXDrive();

  /// @brief Method get_angularXDrive_Injected, addr 0x69b71bc, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularXDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularXLimitSpring, addr 0x69b5754, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularXLimitSpring();

  /// @brief Method get_angularXLimitSpring_Injected, addr 0x69b57ec, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularXLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularXMotion, addr 0x69b50f0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularXMotion();

  /// @brief Method get_angularXMotion_Injected, addr 0x69b5170, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularXMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularYLimit, addr 0x69b5ffc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularYLimit();

  /// @brief Method get_angularYLimit_Injected, addr 0x69b609c, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularYMotion, addr 0x69b5280, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularYMotion();

  /// @brief Method get_angularYMotion_Injected, addr 0x69b5300, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularYMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularYZDrive, addr 0x69b72d8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularYZDrive();

  /// @brief Method get_angularYZDrive_Injected, addr 0x69b7370, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYZDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularYZLimitSpring, addr 0x69b5908, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularYZLimitSpring();

  /// @brief Method get_angularYZLimitSpring_Injected, addr 0x69b59a0, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYZLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularZLimit, addr 0x69b61bc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularZLimit();

  /// @brief Method get_angularZLimit_Injected, addr 0x69b625c, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularZLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularZMotion, addr 0x69b5410, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularZMotion();

  /// @brief Method get_angularZMotion_Injected, addr 0x69b5490, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularZMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_configuredInWorldSpace, addr 0x69b7b00, size 0x80, virtual false, abstract: false, final false
  inline bool get_configuredInWorldSpace();

  /// @brief Method get_configuredInWorldSpace_Injected, addr 0x69b7b80, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_configuredInWorldSpace_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_highAngularXLimit, addr 0x69b5e3c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_highAngularXLimit();

  /// @brief Method get_highAngularXLimit_Injected, addr 0x69b5edc, size 0x44, virtual false, abstract: false, final false
  static inline void get_highAngularXLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_linearLimit, addr 0x69b5abc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_linearLimit();

  /// @brief Method get_linearLimitSpring, addr 0x69b55a0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_linearLimitSpring();

  /// @brief Method get_linearLimitSpring_Injected, addr 0x69b5638, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_linearLimit_Injected, addr 0x69b5b5c, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_lowAngularXLimit, addr 0x69b5c7c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_lowAngularXLimit();

  /// @brief Method get_lowAngularXLimit_Injected, addr 0x69b5d1c, size 0x44, virtual false, abstract: false, final false
  static inline void get_lowAngularXLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_projectionAngle, addr 0x69b7968, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionAngle();

  /// @brief Method get_projectionAngle_Injected, addr 0x69b79e8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionAngle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionDistance, addr 0x69b77d0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionDistance();

  /// @brief Method get_projectionDistance_Injected, addr 0x69b7850, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionMode, addr 0x69b7640, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::JointProjectionMode get_projectionMode();

  /// @brief Method get_projectionMode_Injected, addr 0x69b76c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::JointProjectionMode get_projectionMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rotationDriveMode, addr 0x69b6f94, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationDriveMode get_rotationDriveMode();

  /// @brief Method get_rotationDriveMode_Injected, addr 0x69b7014, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RotationDriveMode get_rotationDriveMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_secondaryAxis, addr 0x69b4a80, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_secondaryAxis();

  /// @brief Method get_secondaryAxis_Injected, addr 0x69b4b20, size 0x44, virtual false, abstract: false, final false
  static inline void get_secondaryAxis_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_slerpDrive, addr 0x69b748c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_slerpDrive();

  /// @brief Method get_slerpDrive_Injected, addr 0x69b7524, size 0x44, virtual false, abstract: false, final false
  static inline void get_slerpDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_swapBodies, addr 0x69b7c90, size 0x80, virtual false, abstract: false, final false
  inline bool get_swapBodies();

  /// @brief Method get_swapBodies_Injected, addr 0x69b7d10, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_swapBodies_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetAngularVelocity, addr 0x69b6dd4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetAngularVelocity();

  /// @brief Method get_targetAngularVelocity_Injected, addr 0x69b6e74, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetAngularVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetPosition, addr 0x69b637c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x69b641c, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x69b6c18, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x69b6cb4, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_targetVelocity, addr 0x69b653c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetVelocity();

  /// @brief Method get_targetVelocity_Injected, addr 0x69b65dc, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_xDrive, addr 0x69b66fc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x69b6794, size 0x44, virtual false, abstract: false, final false
  static inline void get_xDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_xMotion, addr 0x69b4c40, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_xMotion();

  /// @brief Method get_xMotion_Injected, addr 0x69b4cc0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_xMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_yDrive, addr 0x69b68b0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x69b6948, size 0x44, virtual false, abstract: false, final false
  static inline void get_yDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_yMotion, addr 0x69b4dd0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_yMotion();

  /// @brief Method get_yMotion_Injected, addr 0x69b4e50, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_yMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_zDrive, addr 0x69b6a64, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x69b6afc, size 0x44, virtual false, abstract: false, final false
  static inline void get_zDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> ret);

  /// @brief Method get_zMotion, addr 0x69b4f60, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_zMotion();

  /// @brief Method get_zMotion_Injected, addr 0x69b4fe0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_zMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_angularXDrive, addr 0x69b7200, size 0x94, virtual false, abstract: false, final false
  inline void set_angularXDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularXDrive_Injected, addr 0x69b7294, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_angularXLimitSpring, addr 0x69b5830, size 0x94, virtual false, abstract: false, final false
  inline void set_angularXLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularXLimitSpring_Injected, addr 0x69b58c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_angularXMotion, addr 0x69b51ac, size 0x90, virtual false, abstract: false, final false
  inline void set_angularXMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularXMotion_Injected, addr 0x69b523c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYLimit, addr 0x69b60e0, size 0x98, virtual false, abstract: false, final false
  inline void set_angularYLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularYLimit_Injected, addr 0x69b6178, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_angularYMotion, addr 0x69b533c, size 0x90, virtual false, abstract: false, final false
  inline void set_angularYMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYMotion_Injected, addr 0x69b53cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYZDrive, addr 0x69b73b4, size 0x94, virtual false, abstract: false, final false
  inline void set_angularYZDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularYZDrive_Injected, addr 0x69b7448, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYZDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_angularYZLimitSpring, addr 0x69b59e4, size 0x94, virtual false, abstract: false, final false
  inline void set_angularYZLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularYZLimitSpring_Injected, addr 0x69b5a78, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYZLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_angularZLimit, addr 0x69b62a0, size 0x98, virtual false, abstract: false, final false
  inline void set_angularZLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularZLimit_Injected, addr 0x69b6338, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularZLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_angularZMotion, addr 0x69b54cc, size 0x90, virtual false, abstract: false, final false
  inline void set_angularZMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularZMotion_Injected, addr 0x69b555c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularZMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_configuredInWorldSpace, addr 0x69b7bbc, size 0x90, virtual false, abstract: false, final false
  inline void set_configuredInWorldSpace(bool value);

  /// @brief Method set_configuredInWorldSpace_Injected, addr 0x69b7c4c, size 0x44, virtual false, abstract: false, final false
  static inline void set_configuredInWorldSpace_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_highAngularXLimit, addr 0x69b5f20, size 0x98, virtual false, abstract: false, final false
  inline void set_highAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_highAngularXLimit_Injected, addr 0x69b5fb8, size 0x44, virtual false, abstract: false, final false
  static inline void set_highAngularXLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_linearLimit, addr 0x69b5ba0, size 0x98, virtual false, abstract: false, final false
  inline void set_linearLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_linearLimitSpring, addr 0x69b567c, size 0x94, virtual false, abstract: false, final false
  inline void set_linearLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_linearLimitSpring_Injected, addr 0x69b5710, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLimitSpring_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_linearLimit_Injected, addr 0x69b5c38, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_lowAngularXLimit, addr 0x69b5d60, size 0x98, virtual false, abstract: false, final false
  inline void set_lowAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_lowAngularXLimit_Injected, addr 0x69b5df8, size 0x44, virtual false, abstract: false, final false
  static inline void set_lowAngularXLimit_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_projectionAngle, addr 0x69b7a24, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionAngle(float_t value);

  /// @brief Method set_projectionAngle_Injected, addr 0x69b7ab4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionAngle_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_projectionDistance, addr 0x69b788c, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionDistance(float_t value);

  /// @brief Method set_projectionDistance_Injected, addr 0x69b791c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_projectionMode, addr 0x69b76fc, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionMode(::UnityEngine::JointProjectionMode value);

  /// @brief Method set_projectionMode_Injected, addr 0x69b778c, size 0x44, virtual false, abstract: false, final false
  static inline void set_projectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::JointProjectionMode value);

  /// @brief Method set_rotationDriveMode, addr 0x69b7050, size 0x90, virtual false, abstract: false, final false
  inline void set_rotationDriveMode(::UnityEngine::RotationDriveMode value);

  /// @brief Method set_rotationDriveMode_Injected, addr 0x69b70e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotationDriveMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationDriveMode value);

  /// @brief Method set_secondaryAxis, addr 0x69b4b64, size 0x98, virtual false, abstract: false, final false
  inline void set_secondaryAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_secondaryAxis_Injected, addr 0x69b4bfc, size 0x44, virtual false, abstract: false, final false
  static inline void set_secondaryAxis_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_slerpDrive, addr 0x69b7568, size 0x94, virtual false, abstract: false, final false
  inline void set_slerpDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_slerpDrive_Injected, addr 0x69b75fc, size 0x44, virtual false, abstract: false, final false
  static inline void set_slerpDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_swapBodies, addr 0x69b7d4c, size 0x90, virtual false, abstract: false, final false
  inline void set_swapBodies(bool value);

  /// @brief Method set_swapBodies_Injected, addr 0x69b7ddc, size 0x44, virtual false, abstract: false, final false
  static inline void set_swapBodies_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_targetAngularVelocity, addr 0x69b6eb8, size 0x98, virtual false, abstract: false, final false
  inline void set_targetAngularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetAngularVelocity_Injected, addr 0x69b6f50, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetAngularVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_targetPosition, addr 0x69b6460, size 0x98, virtual false, abstract: false, final false
  inline void set_targetPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_targetPosition_Injected, addr 0x69b64f8, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_targetRotation, addr 0x69b6cf8, size 0x98, virtual false, abstract: false, final false
  inline void set_targetRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_targetRotation_Injected, addr 0x69b6d90, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_targetVelocity, addr 0x69b6620, size 0x98, virtual false, abstract: false, final false
  inline void set_targetVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetVelocity_Injected, addr 0x69b66b8, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_xDrive, addr 0x69b67d8, size 0x94, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x69b686c, size 0x44, virtual false, abstract: false, final false
  static inline void set_xDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_xMotion, addr 0x69b4cfc, size 0x90, virtual false, abstract: false, final false
  inline void set_xMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_xMotion_Injected, addr 0x69b4d8c, size 0x44, virtual false, abstract: false, final false
  static inline void set_xMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_yDrive, addr 0x69b698c, size 0x94, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x69b6a20, size 0x44, virtual false, abstract: false, final false
  static inline void set_yDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_yMotion, addr 0x69b4e8c, size 0x90, virtual false, abstract: false, final false
  inline void set_yMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_yMotion_Injected, addr 0x69b4f1c, size 0x44, virtual false, abstract: false, final false
  static inline void set_yMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_zDrive, addr 0x69b6b40, size 0x94, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x69b6bd4, size 0x44, virtual false, abstract: false, final false
  static inline void set_zDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::JointDrive> value);

  /// @brief Method set_zMotion, addr 0x69b501c, size 0x90, virtual false, abstract: false, final false
  inline void set_zMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_zMotion_Injected, addr 0x69b50ac, size 0x44, virtual false, abstract: false, final false
  static inline void set_zMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18607 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ConfigurableJoint, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ConfigurableJoint);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ConfigurableJoint*, "UnityEngine", "ConfigurableJoint");
