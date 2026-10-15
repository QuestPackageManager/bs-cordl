#pragma once
// IWYU pragma private; include "UnityEngine/ConfigurableJoint.hpp"
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
// [NativeHeader("Modules/Physics/ConfigurableJoint.h")]
// [RequireComponent(typeof(UnityEngine.Rigidbody))]
// [NativeClass("Unity::ConfigurableJoint")]
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

  /// @brief Method .ctor, addr 0x702bb30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularXDrive, addr 0x702ae34, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularXDrive();

  /// @brief Method get_angularXDrive_Injected, addr 0x702aecc, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularXDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularXLimitSpring, addr 0x7029464, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularXLimitSpring();

  /// @brief Method get_angularXLimitSpring_Injected, addr 0x70294fc, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularXLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularXMotion, addr 0x7028e00, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularXMotion();

  /// @brief Method get_angularXMotion_Injected, addr 0x7028e80, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularXMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularYLimit, addr 0x7029d0c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularYLimit();

  /// @brief Method get_angularYLimit_Injected, addr 0x7029dac, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularYMotion, addr 0x7028f90, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularYMotion();

  /// @brief Method get_angularYMotion_Injected, addr 0x7029010, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularYMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularYZDrive, addr 0x702afe8, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_angularYZDrive();

  /// @brief Method get_angularYZDrive_Injected, addr 0x702b080, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYZDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_angularYZLimitSpring, addr 0x7029618, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_angularYZLimitSpring();

  /// @brief Method get_angularYZLimitSpring_Injected, addr 0x70296b0, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularYZLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_angularZLimit, addr 0x7029ecc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_angularZLimit();

  /// @brief Method get_angularZLimit_Injected, addr 0x7029f6c, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularZLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_angularZMotion, addr 0x7029120, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_angularZMotion();

  /// @brief Method get_angularZMotion_Injected, addr 0x70291a0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_angularZMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_configuredInWorldSpace, addr 0x702b810, size 0x80, virtual false, abstract: false, final false
  inline bool get_configuredInWorldSpace();

  /// @brief Method get_configuredInWorldSpace_Injected, addr 0x702b890, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_configuredInWorldSpace_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_highAngularXLimit, addr 0x7029b4c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_highAngularXLimit();

  /// @brief Method get_highAngularXLimit_Injected, addr 0x7029bec, size 0x44, virtual false, abstract: false, final false
  static inline void get_highAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_linearLimit, addr 0x70297cc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_linearLimit();

  /// @brief Method get_linearLimitSpring, addr 0x70292b0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimitSpring get_linearLimitSpring();

  /// @brief Method get_linearLimitSpring_Injected, addr 0x7029348, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring> ret);

  /// @brief Method get_linearLimit_Injected, addr 0x702986c, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_lowAngularXLimit, addr 0x702998c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::SoftJointLimit get_lowAngularXLimit();

  /// @brief Method get_lowAngularXLimit_Injected, addr 0x7029a2c, size 0x44, virtual false, abstract: false, final false
  static inline void get_lowAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit> ret);

  /// @brief Method get_projectionAngle, addr 0x702b678, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionAngle();

  /// @brief Method get_projectionAngle_Injected, addr 0x702b6f8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionAngle_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionDistance, addr 0x702b4e0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_projectionDistance();

  /// @brief Method get_projectionDistance_Injected, addr 0x702b560, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_projectionDistance_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_projectionMode, addr 0x702b350, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::JointProjectionMode get_projectionMode();

  /// @brief Method get_projectionMode_Injected, addr 0x702b3d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::JointProjectionMode get_projectionMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_rotationDriveMode, addr 0x702aca4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RotationDriveMode get_rotationDriveMode();

  /// @brief Method get_rotationDriveMode_Injected, addr 0x702ad24, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RotationDriveMode get_rotationDriveMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_secondaryAxis, addr 0x7028790, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_secondaryAxis();

  /// @brief Method get_secondaryAxis_Injected, addr 0x7028830, size 0x44, virtual false, abstract: false, final false
  static inline void get_secondaryAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_slerpDrive, addr 0x702b19c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_slerpDrive();

  /// @brief Method get_slerpDrive_Injected, addr 0x702b234, size 0x44, virtual false, abstract: false, final false
  static inline void get_slerpDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_swapBodies, addr 0x702b9a0, size 0x80, virtual false, abstract: false, final false
  inline bool get_swapBodies();

  /// @brief Method get_swapBodies_Injected, addr 0x702ba20, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_swapBodies_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_targetAngularVelocity, addr 0x702aae4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetAngularVelocity();

  /// @brief Method get_targetAngularVelocity_Injected, addr 0x702ab84, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetAngularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetPosition, addr 0x702a08c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetPosition();

  /// @brief Method get_targetPosition_Injected, addr 0x702a12c, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_targetRotation, addr 0x702a928, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_targetRotation();

  /// @brief Method get_targetRotation_Injected, addr 0x702a9c4, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_targetVelocity, addr 0x702a24c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_targetVelocity();

  /// @brief Method get_targetVelocity_Injected, addr 0x702a2ec, size 0x44, virtual false, abstract: false, final false
  static inline void get_targetVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_xDrive, addr 0x702a40c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x702a4a4, size 0x44, virtual false, abstract: false, final false
  static inline void get_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_xMotion, addr 0x7028950, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_xMotion();

  /// @brief Method get_xMotion_Injected, addr 0x70289d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_xMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_yDrive, addr 0x702a5c0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x702a658, size 0x44, virtual false, abstract: false, final false
  static inline void get_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_yMotion, addr 0x7028ae0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_yMotion();

  /// @brief Method get_yMotion_Injected, addr 0x7028b60, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_yMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_zDrive, addr 0x702a774, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::JointDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x702a80c, size 0x44, virtual false, abstract: false, final false
  static inline void get_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive> ret);

  /// @brief Method get_zMotion, addr 0x7028c70, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ConfigurableJointMotion get_zMotion();

  /// @brief Method get_zMotion_Injected, addr 0x7028cf0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ConfigurableJointMotion get_zMotion_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_angularXDrive, addr 0x702af10, size 0x94, virtual false, abstract: false, final false
  inline void set_angularXDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularXDrive_Injected, addr 0x702afa4, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive const> value);

  /// @brief Method set_angularXLimitSpring, addr 0x7029540, size 0x94, virtual false, abstract: false, final false
  inline void set_angularXLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularXLimitSpring_Injected, addr 0x70295d4, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring const> value);

  /// @brief Method set_angularXMotion, addr 0x7028ebc, size 0x90, virtual false, abstract: false, final false
  inline void set_angularXMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularXMotion_Injected, addr 0x7028f4c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularXMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYLimit, addr 0x7029df0, size 0x98, virtual false, abstract: false, final false
  inline void set_angularYLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularYLimit_Injected, addr 0x7029e88, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value);

  /// @brief Method set_angularYMotion, addr 0x702904c, size 0x90, virtual false, abstract: false, final false
  inline void set_angularYMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYMotion_Injected, addr 0x70290dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularYZDrive, addr 0x702b0c4, size 0x94, virtual false, abstract: false, final false
  inline void set_angularYZDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_angularYZDrive_Injected, addr 0x702b158, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYZDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive const> value);

  /// @brief Method set_angularYZLimitSpring, addr 0x70296f4, size 0x94, virtual false, abstract: false, final false
  inline void set_angularYZLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_angularYZLimitSpring_Injected, addr 0x7029788, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularYZLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring const> value);

  /// @brief Method set_angularZLimit, addr 0x7029fb0, size 0x98, virtual false, abstract: false, final false
  inline void set_angularZLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_angularZLimit_Injected, addr 0x702a048, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularZLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value);

  /// @brief Method set_angularZMotion, addr 0x70291dc, size 0x90, virtual false, abstract: false, final false
  inline void set_angularZMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_angularZMotion_Injected, addr 0x702926c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularZMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_configuredInWorldSpace, addr 0x702b8cc, size 0x90, virtual false, abstract: false, final false
  inline void set_configuredInWorldSpace(bool value);

  /// @brief Method set_configuredInWorldSpace_Injected, addr 0x702b95c, size 0x44, virtual false, abstract: false, final false
  static inline void set_configuredInWorldSpace_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_highAngularXLimit, addr 0x7029c30, size 0x98, virtual false, abstract: false, final false
  inline void set_highAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_highAngularXLimit_Injected, addr 0x7029cc8, size 0x44, virtual false, abstract: false, final false
  static inline void set_highAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value);

  /// @brief Method set_linearLimit, addr 0x70298b0, size 0x98, virtual false, abstract: false, final false
  inline void set_linearLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_linearLimitSpring, addr 0x702938c, size 0x94, virtual false, abstract: false, final false
  inline void set_linearLimitSpring(::UnityEngine::SoftJointLimitSpring value);

  /// @brief Method set_linearLimitSpring_Injected, addr 0x7029420, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLimitSpring_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimitSpring const> value);

  /// @brief Method set_linearLimit_Injected, addr 0x7029948, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value);

  /// @brief Method set_lowAngularXLimit, addr 0x7029a70, size 0x98, virtual false, abstract: false, final false
  inline void set_lowAngularXLimit(::UnityEngine::SoftJointLimit value);

  /// @brief Method set_lowAngularXLimit_Injected, addr 0x7029b08, size 0x44, virtual false, abstract: false, final false
  static inline void set_lowAngularXLimit_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::SoftJointLimit const> value);

  /// @brief Method set_projectionAngle, addr 0x702b734, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionAngle(float_t value);

  /// @brief Method set_projectionAngle_Injected, addr 0x702b7c4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionAngle_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_projectionDistance, addr 0x702b59c, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionDistance(float_t value);

  /// @brief Method set_projectionDistance_Injected, addr 0x702b62c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_projectionDistance_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_projectionMode, addr 0x702b40c, size 0x90, virtual false, abstract: false, final false
  inline void set_projectionMode(::UnityEngine::JointProjectionMode value);

  /// @brief Method set_projectionMode_Injected, addr 0x702b49c, size 0x44, virtual false, abstract: false, final false
  static inline void set_projectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::JointProjectionMode value);

  /// @brief Method set_rotationDriveMode, addr 0x702ad60, size 0x90, virtual false, abstract: false, final false
  inline void set_rotationDriveMode(::UnityEngine::RotationDriveMode value);

  /// @brief Method set_rotationDriveMode_Injected, addr 0x702adf0, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotationDriveMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::RotationDriveMode value);

  /// @brief Method set_secondaryAxis, addr 0x7028874, size 0x98, virtual false, abstract: false, final false
  inline void set_secondaryAxis(::UnityEngine::Vector3 value);

  /// @brief Method set_secondaryAxis_Injected, addr 0x702890c, size 0x44, virtual false, abstract: false, final false
  static inline void set_secondaryAxis_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_slerpDrive, addr 0x702b278, size 0x94, virtual false, abstract: false, final false
  inline void set_slerpDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_slerpDrive_Injected, addr 0x702b30c, size 0x44, virtual false, abstract: false, final false
  static inline void set_slerpDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive const> value);

  /// @brief Method set_swapBodies, addr 0x702ba5c, size 0x90, virtual false, abstract: false, final false
  inline void set_swapBodies(bool value);

  /// @brief Method set_swapBodies_Injected, addr 0x702baec, size 0x44, virtual false, abstract: false, final false
  static inline void set_swapBodies_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_targetAngularVelocity, addr 0x702abc8, size 0x98, virtual false, abstract: false, final false
  inline void set_targetAngularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetAngularVelocity_Injected, addr 0x702ac60, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetAngularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_targetPosition, addr 0x702a170, size 0x98, virtual false, abstract: false, final false
  inline void set_targetPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_targetPosition_Injected, addr 0x702a208, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_targetRotation, addr 0x702aa08, size 0x98, virtual false, abstract: false, final false
  inline void set_targetRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_targetRotation_Injected, addr 0x702aaa0, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> value);

  /// @brief Method set_targetVelocity, addr 0x702a330, size 0x98, virtual false, abstract: false, final false
  inline void set_targetVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_targetVelocity_Injected, addr 0x702a3c8, size 0x44, virtual false, abstract: false, final false
  static inline void set_targetVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_xDrive, addr 0x702a4e8, size 0x94, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x702a57c, size 0x44, virtual false, abstract: false, final false
  static inline void set_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive const> value);

  /// @brief Method set_xMotion, addr 0x7028a0c, size 0x90, virtual false, abstract: false, final false
  inline void set_xMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_xMotion_Injected, addr 0x7028a9c, size 0x44, virtual false, abstract: false, final false
  static inline void set_xMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_yDrive, addr 0x702a69c, size 0x94, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x702a730, size 0x44, virtual false, abstract: false, final false
  static inline void set_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive const> value);

  /// @brief Method set_yMotion, addr 0x7028b9c, size 0x90, virtual false, abstract: false, final false
  inline void set_yMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_yMotion_Injected, addr 0x7028c2c, size 0x44, virtual false, abstract: false, final false
  static inline void set_yMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_zDrive, addr 0x702a850, size 0x94, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::JointDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x702a8e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::JointDrive const> value);

  /// @brief Method set_zMotion, addr 0x7028d2c, size 0x90, virtual false, abstract: false, final false
  inline void set_zMotion(::UnityEngine::ConfigurableJointMotion value);

  /// @brief Method set_zMotion_Injected, addr 0x7028dbc, size 0x44, virtual false, abstract: false, final false
  static inline void set_zMotion_Injected(::System::IntPtr _unity_self, ::UnityEngine::ConfigurableJointMotion value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConfigurableJoint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConfigurableJoint", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConfigurableJoint(ConfigurableJoint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConfigurableJoint", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConfigurableJoint(ConfigurableJoint const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19085 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ConfigurableJoint) == 0x18, "Size mismatch!");

} // namespace UnityEngine
