#pragma once
// IWYU pragma private; include "UnityEngine\ConfigurableJoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::ConfigurableJoint*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ConfigurableJoint*, "UnityEngine", "ConfigurableJoint");
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

  /// @brief Method .ctor, addr 0x6b83304, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularXDrive, addr 0x6b82608, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularXDrive();

  /// @brief Method get_angularXDrive_Injected, addr 0x6b826a0, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularXDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularXLimitSpring, addr 0x6b80c38, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularXLimitSpring();

  /// @brief Method get_angularXLimitSpring_Injected, addr 0x6b80cd0, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularXLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularXMotion, addr 0x6b805d4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularXMotion();

  /// @brief Method get_angularXMotion_Injected, addr 0x6b80654, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularXMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularYLimit, addr 0x6b814e0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularYLimit();

  /// @brief Method get_angularYLimit_Injected, addr 0x6b81580, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularYMotion, addr 0x6b80764, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularYMotion();

  /// @brief Method get_angularYMotion_Injected, addr 0x6b807e4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularYMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularYZDrive, addr 0x6b827bc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularYZDrive();

  /// @brief Method get_angularYZDrive_Injected, addr 0x6b82854, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYZDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularYZLimitSpring, addr 0x6b80dec, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularYZLimitSpring();

  /// @brief Method get_angularYZLimitSpring_Injected, addr 0x6b80e84, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYZLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularZLimit, addr 0x6b816a0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularZLimit();

  /// @brief Method get_angularZLimit_Injected, addr 0x6b81740, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularZLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularZMotion, addr 0x6b808f4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularZMotion();

  /// @brief Method get_angularZMotion_Injected, addr 0x6b80974, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularZMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_configuredInWorldSpace, addr 0x6b82fe4, size 0x80, virtual false, abstract: false, final false
  inline bool get_configuredInWorldSpace();

  /// @brief Method get_configuredInWorldSpace_Injected, addr 0x6b83064, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_configuredInWorldSpace_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_highAngularXLimit, addr 0x6b81320, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_highAngularXLimit();

  /// @brief Method get_highAngularXLimit_Injected, addr 0x6b813c0, size 0x44, virtual false, abstract: false, final false
  static inline void get_highAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_linearLimit, addr 0x6b80fa0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_linearLimit();

  /// @brief Method get_linearLimitSpring, addr 0x6b80a84, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_linearLimitSpring();

  /// @brief Method get_linearLimitSpring_Injected, addr 0x6b80b1c, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_linearLimit_Injected, addr 0x6b81040, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_lowAngularXLimit, addr 0x6b81160, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_lowAngularXLimit();

  /// @brief Method get_lowAngularXLimit_Injected, addr 0x6b81200, size 0x44, virtual false, abstract: false, final false
  static inline void get_lowAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_projectionAngle, addr 0x6b82e4c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionAngle();

  /// @brief Method get_projectionAngle_Injected, addr 0x6b82ecc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionAngle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionDistance, addr 0x6b82cb4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionDistance();

  /// @brief Method get_projectionDistance_Injected, addr 0x6b82d34, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionMode, addr 0x6b82b24, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::JointProjectionMode get_projectionMode();

  /// @brief Method get_projectionMode_Injected, addr 0x6b82ba4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::JointProjectionMode get_projectionMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rotationDriveMode, addr 0x6b82478, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationDriveMode get_rotationDriveMode();

  /// @brief Method get_rotationDriveMode_Injected, addr 0x6b824f8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RotationDriveMode get_rotationDriveMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_secondaryAxis, addr 0x6b7ff64, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_secondaryAxis();

  /// @brief Method get_secondaryAxis_Injected, addr 0x6b80004, size 0x44, virtual false, abstract: false, final false
  static inline void get_secondaryAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_slerpDrive, addr 0x6b82970, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_slerpDrive();

  /// @brief Method get_slerpDrive_Injected, addr 0x6b82a08, size 0x44, virtual false, abstract: false, final false
  static inline void get_slerpDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_swapBodies, addr 0x6b83174, size 0x80, virtual false, abstract: false, final false
  inline bool get_swapBodies();

  /// @brief Method get_swapBodies_Injected, addr 0x6b831f4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_swapBodies_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetAngularVelocity, addr 0x6b822b8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetAngularVelocity();

  /// @brief Method get_targetAngularVelocity_Injected, addr 0x6b82358, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetAngularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetPosition, addr 0x6b81860, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x6b81900, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x6b820fc, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x6b82198, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_targetVelocity, addr 0x6b81a20, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetVelocity();

  /// @brief Method get_targetVelocity_Injected, addr 0x6b81ac0, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_xDrive, addr 0x6b81be0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x6b81c78, size 0x44, virtual false, abstract: false, final false
  static inline void get_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_xMotion, addr 0x6b80124, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_xMotion();

  /// @brief Method get_xMotion_Injected, addr 0x6b801a4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_xMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_yDrive, addr 0x6b81d94, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x6b81e2c, size 0x44, virtual false, abstract: false, final false
  static inline void get_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_yMotion, addr 0x6b802b4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_yMotion();

  /// @brief Method get_yMotion_Injected, addr 0x6b80334, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_yMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_zDrive, addr 0x6b81f48, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x6b81fe0, size 0x44, virtual false, abstract: false, final false
  static inline void get_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_zMotion, addr 0x6b80444, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_zMotion();

  /// @brief Method get_zMotion_Injected, addr 0x6b804c4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_zMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_angularXDrive, addr 0x6b826e4, size 0x94, virtual false, abstract: false, final false
  inline void set_angularXDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularXDrive_Injected, addr 0x6b82778, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value);

  /// @brief Method set_angularXLimitSpring, addr 0x6b80d14, size 0x94, virtual false, abstract: false, final false
  inline void set_angularXLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularXLimitSpring_Injected, addr 0x6b80da8, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_angularXMotion, addr 0x6b80690, size 0x90, virtual false, abstract: false, final false
  inline void set_angularXMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularXMotion_Injected, addr 0x6b80720, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYLimit, addr 0x6b815c4, size 0x98, virtual false, abstract: false, final false
  inline void set_angularYLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularYLimit_Injected, addr 0x6b8165c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_angularYMotion, addr 0x6b80820, size 0x90, virtual false, abstract: false, final false
  inline void set_angularYMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYMotion_Injected, addr 0x6b808b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYZDrive, addr 0x6b82898, size 0x94, virtual false, abstract: false, final false
  inline void set_angularYZDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularYZDrive_Injected, addr 0x6b8292c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYZDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value);

  /// @brief Method set_angularYZLimitSpring, addr 0x6b80ec8, size 0x94, virtual false, abstract: false, final false
  inline void set_angularYZLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularYZLimitSpring_Injected, addr 0x6b80f5c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYZLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_angularZLimit, addr 0x6b81784, size 0x98, virtual false, abstract: false, final false
  inline void set_angularZLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularZLimit_Injected, addr 0x6b8181c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularZLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_angularZMotion, addr 0x6b809b0, size 0x90, virtual false, abstract: false, final false
  inline void set_angularZMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularZMotion_Injected, addr 0x6b80a40, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularZMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_configuredInWorldSpace, addr 0x6b830a0, size 0x90, virtual false, abstract: false, final false
  inline void set_configuredInWorldSpace(bool value);

  /// @brief Method set_configuredInWorldSpace_Injected, addr 0x6b83130, size 0x44, virtual false, abstract: false, final false
  static inline void set_configuredInWorldSpace_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_highAngularXLimit, addr 0x6b81404, size 0x98, virtual false, abstract: false, final false
  inline void set_highAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_highAngularXLimit_Injected, addr 0x6b8149c, size 0x44, virtual false, abstract: false, final false
  static inline void set_highAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_linearLimit, addr 0x6b81084, size 0x98, virtual false, abstract: false, final false
  inline void set_linearLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_linearLimitSpring, addr 0x6b80b60, size 0x94, virtual false, abstract: false, final false
  inline void set_linearLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_linearLimitSpring_Injected, addr 0x6b80bf4, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> value);

  /// @brief Method set_linearLimit_Injected, addr 0x6b8111c, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_lowAngularXLimit, addr 0x6b81244, size 0x98, virtual false, abstract: false, final false
  inline void set_lowAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_lowAngularXLimit_Injected, addr 0x6b812dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_lowAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> value);

  /// @brief Method set_projectionAngle, addr 0x6b82f08, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionAngle(float_t value);

  /// @brief Method set_projectionAngle_Injected, addr 0x6b82f98, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionAngle_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_projectionDistance, addr 0x6b82d70, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionDistance(float_t value);

  /// @brief Method set_projectionDistance_Injected, addr 0x6b82e00, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_projectionMode, addr 0x6b82be0, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionMode(::UnityEngine::JointProjectionMode value);

  /// @brief Method set_projectionMode_Injected, addr 0x6b82c70, size 0x44, virtual false, abstract: false, final false
  static inline void set_projectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::JointProjectionMode value);

  /// @brief Method set_rotationDriveMode, addr 0x6b82534, size 0x90, virtual false, abstract: false, final false
  inline void set_rotationDriveMode(::UnityEngine::RotationDriveMode value);

  /// @brief Method set_rotationDriveMode_Injected, addr 0x6b825c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotationDriveMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationDriveMode value);

  /// @brief Method set_secondaryAxis, addr 0x6b80048, size 0x98, virtual false, abstract: false, final false
  inline void set_secondaryAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_secondaryAxis_Injected, addr 0x6b800e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_secondaryAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_slerpDrive, addr 0x6b82a4c, size 0x94, virtual false, abstract: false, final false
  inline void set_slerpDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_slerpDrive_Injected, addr 0x6b82ae0, size 0x44, virtual false, abstract: false, final false
  static inline void set_slerpDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value);

  /// @brief Method set_swapBodies, addr 0x6b83230, size 0x90, virtual false, abstract: false, final false
  inline void set_swapBodies(bool value);

  /// @brief Method set_swapBodies_Injected, addr 0x6b832c0, size 0x44, virtual false, abstract: false, final false
  static inline void set_swapBodies_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_targetAngularVelocity, addr 0x6b8239c, size 0x98, virtual false, abstract: false, final false
  inline void set_targetAngularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetAngularVelocity_Injected, addr 0x6b82434, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetAngularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_targetPosition, addr 0x6b81944, size 0x98, virtual false, abstract: false, final false
  inline void set_targetPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_targetPosition_Injected, addr 0x6b819dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_targetRotation, addr 0x6b821dc, size 0x98, virtual false, abstract: false, final false
  inline void set_targetRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_targetRotation_Injected, addr 0x6b82274, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_targetVelocity, addr 0x6b81b04, size 0x98, virtual false, abstract: false, final false
  inline void set_targetVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetVelocity_Injected, addr 0x6b81b9c, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_xDrive, addr 0x6b81cbc, size 0x94, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x6b81d50, size 0x44, virtual false, abstract: false, final false
  static inline void set_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value);

  /// @brief Method set_xMotion, addr 0x6b801e0, size 0x90, virtual false, abstract: false, final false
  inline void set_xMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_xMotion_Injected, addr 0x6b80270, size 0x44, virtual false, abstract: false, final false
  static inline void set_xMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_yDrive, addr 0x6b81e70, size 0x94, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x6b81f04, size 0x44, virtual false, abstract: false, final false
  static inline void set_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value);

  /// @brief Method set_yMotion, addr 0x6b80370, size 0x90, virtual false, abstract: false, final false
  inline void set_yMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_yMotion_Injected, addr 0x6b80400, size 0x44, virtual false, abstract: false, final false
  static inline void set_yMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_zDrive, addr 0x6b82024, size 0x94, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x6b820b8, size 0x44, virtual false, abstract: false, final false
  static inline void set_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> value);

  /// @brief Method set_zMotion, addr 0x6b80500, size 0x90, virtual false, abstract: false, final false
  inline void set_zMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_zMotion_Injected, addr 0x6b80590, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ConfigurableJoint) == 0x18, "Size mismatch!");

} // namespace UnityEngine
