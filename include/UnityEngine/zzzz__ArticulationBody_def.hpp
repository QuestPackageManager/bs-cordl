#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationBody.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ArticulationBody)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableListWrapper;
}
namespace UnityEngine {
struct ArticulationDofLock;
}
namespace UnityEngine {
struct ArticulationDriveAxis;
}
namespace UnityEngine {
struct ArticulationDrive;
}
namespace UnityEngine {
struct ArticulationJacobian;
}
namespace UnityEngine {
struct ArticulationJointType;
}
namespace UnityEngine {
struct ArticulationReducedSpace;
}
namespace UnityEngine {
struct CollisionDetectionMode;
}
namespace UnityEngine {
struct ForceMode;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class ArticulationBody;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ArticulationBody);
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ArticulationBody
class CORDL_TYPE ArticulationBody : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_anchorPosition, put = set_anchorPosition)) ::UnityEngine::Vector3 anchorPosition;

  __declspec(property(get = get_anchorRotation, put = set_anchorRotation)) ::UnityEngine::Quaternion anchorRotation;

  __declspec(property(get = get_angularDamping, put = set_angularDamping)) float_t angularDamping;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity)) ::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_automaticCenterOfMass, put = set_automaticCenterOfMass)) bool automaticCenterOfMass;

  __declspec(property(get = get_automaticInertiaTensor, put = set_automaticInertiaTensor)) bool automaticInertiaTensor;

  __declspec(property(get = get_centerOfMass, put = set_centerOfMass)) ::UnityEngine::Vector3 centerOfMass;

  __declspec(property(get = get_collisionDetectionMode, put = set_collisionDetectionMode)) ::UnityEngine::CollisionDetectionMode collisionDetectionMode;

  __declspec(property(get = get_computeParentAnchor, put = set_computeParentAnchor)) bool computeParentAnchor;

  __declspec(property(get = get_dofCount)) int32_t dofCount;

  __declspec(property(get = get_driveForce)) ::UnityEngine::ArticulationReducedSpace driveForce;

  __declspec(property(get = get_excludeLayers, put = set_excludeLayers)) ::UnityEngine::LayerMask excludeLayers;

  __declspec(property(get = get_immovable, put = set_immovable)) bool immovable;

  __declspec(property(get = get_includeLayers, put = set_includeLayers)) ::UnityEngine::LayerMask includeLayers;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_inertiaTensor, put = set_inertiaTensor)) ::UnityEngine::Vector3 inertiaTensor;

  __declspec(property(get = get_inertiaTensorRotation, put = set_inertiaTensorRotation)) ::UnityEngine::Quaternion inertiaTensorRotation;

  __declspec(property(get = get_isRoot)) bool isRoot;

  __declspec(property(get = get_jointAcceleration, put = set_jointAcceleration)) ::UnityEngine::ArticulationReducedSpace jointAcceleration;

  __declspec(property(get = get_jointForce, put = set_jointForce)) ::UnityEngine::ArticulationReducedSpace jointForce;

  __declspec(property(get = get_jointFriction, put = set_jointFriction)) float_t jointFriction;

  __declspec(property(get = get_jointPosition, put = set_jointPosition)) ::UnityEngine::ArticulationReducedSpace jointPosition;

  __declspec(property(get = get_jointType, put = set_jointType)) ::UnityEngine::ArticulationJointType jointType;

  __declspec(property(get = get_jointVelocity, put = set_jointVelocity)) ::UnityEngine::ArticulationReducedSpace jointVelocity;

  __declspec(property(get = get_linearDamping, put = set_linearDamping)) float_t linearDamping;

  __declspec(property(get = get_linearLockX, put = set_linearLockX)) ::UnityEngine::ArticulationDofLock linearLockX;

  __declspec(property(get = get_linearLockY, put = set_linearLockY)) ::UnityEngine::ArticulationDofLock linearLockY;

  __declspec(property(get = get_linearLockZ, put = set_linearLockZ)) ::UnityEngine::ArticulationDofLock linearLockZ;

  __declspec(property(get = get_linearVelocity, put = set_linearVelocity)) ::UnityEngine::Vector3 linearVelocity;

  __declspec(property(get = get_mass, put = set_mass)) float_t mass;

  __declspec(property(get = get_matchAnchors, put = set_matchAnchors)) bool matchAnchors;

  __declspec(property(get = get_maxAngularVelocity, put = set_maxAngularVelocity)) float_t maxAngularVelocity;

  __declspec(property(get = get_maxDepenetrationVelocity, put = set_maxDepenetrationVelocity)) float_t maxDepenetrationVelocity;

  __declspec(property(get = get_maxJointVelocity, put = set_maxJointVelocity)) float_t maxJointVelocity;

  __declspec(property(get = get_maxLinearVelocity, put = set_maxLinearVelocity)) float_t maxLinearVelocity;

  __declspec(property(get = get_parentAnchorPosition, put = set_parentAnchorPosition)) ::UnityEngine::Vector3 parentAnchorPosition;

  __declspec(property(get = get_parentAnchorRotation, put = set_parentAnchorRotation)) ::UnityEngine::Quaternion parentAnchorRotation;

  __declspec(property(get = get_sleepThreshold, put = set_sleepThreshold)) float_t sleepThreshold;

  __declspec(property(get = get_solverIterations, put = set_solverIterations)) int32_t solverIterations;

  __declspec(property(get = get_solverVelocityIterations, put = set_solverVelocityIterations)) int32_t solverVelocityIterations;

  __declspec(property(get = get_swingYLock, put = set_swingYLock)) ::UnityEngine::ArticulationDofLock swingYLock;

  __declspec(property(get = get_swingZLock, put = set_swingZLock)) ::UnityEngine::ArticulationDofLock swingZLock;

  __declspec(property(get = get_twistLock, put = set_twistLock)) ::UnityEngine::ArticulationDofLock twistLock;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  __declspec(property(get = get_velocity, put = set_velocity)) ::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_worldCenterOfMass)) ::UnityEngine::Vector3 worldCenterOfMass;

  __declspec(property(get = get_worldInertiaTensorMatrix)) ::UnityEngine::Matrix4x4 worldInertiaTensorMatrix;

  __declspec(property(get = get_xDrive, put = set_xDrive)) ::UnityEngine::ArticulationDrive xDrive;

  __declspec(property(get = get_yDrive, put = set_yDrive)) ::UnityEngine::ArticulationDrive yDrive;

  __declspec(property(get = get_zDrive, put = set_zDrive)) ::UnityEngine::ArticulationDrive zDrive;

  /// @brief Method AddForce, addr 0x69a9ba0, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x69a9aa4, size 0xa8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x69a9fc4, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x69a9eb4, size 0xb4, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x69a9f68, size 0x5c, virtual false, abstract: false, final false
  static inline void AddForceAtPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> force, ::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x69a9b4c, size 0x54, virtual false, abstract: false, final false
  static inline void AddForce_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x69a9ca4, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x69a9ba8, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x69a9c50, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeForce_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x69a9eac, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x69a9db0, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x69a9e58, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeTorque_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x69a9da8, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x69a9cac, size 0xa8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x69a9d54, size 0x54, virtual false, abstract: false, final false
  static inline void AddTorque_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method GetAccumulatedForce, addr 0x69a9920, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x69a981c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x69a98cc, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedForce_Injected(::System::IntPtr _unity_self, float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetAccumulatedTorque, addr 0x69a9a64, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x69a9960, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x69a9a10, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedTorque_Injected(::System::IntPtr _unity_self, float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetClosestPoint, addr 0x69aca88, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method GetClosestPoint_Injected, addr 0x69acb34, size 0x54, virtual false, abstract: false, final false
  static inline void GetClosestPoint_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetDenseJacobian, addr 0x69ace5c, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian(::ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDenseJacobian_Internal, addr 0x69acd88, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian_Internal(::ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDenseJacobian_Internal_Injected, addr 0x69ace18, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDenseJacobian_Internal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDofStartIndices, addr 0x69af04c, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetDofStartIndices(::System::Collections::Generic::List_1<int32_t>* dofStartIndices);

  /// @brief Method GetDofStartIndices_Injected, addr 0x69af230, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDofStartIndices_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> dofStartIndices);

  /// @brief Method GetDriveForces, addr 0x69adf10, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetDriveForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetDriveForces_Injected, addr 0x69ae0f4, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDriveForces_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method GetDriveTargetVelocities, addr 0x69aec0c, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method GetDriveTargetVelocities_Injected, addr 0x69aedf0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDriveTargetVelocities_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> targetVelocities);

  /// @brief Method GetDriveTargets, addr 0x69ae7cc, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method GetDriveTargets_Injected, addr 0x69ae9b0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDriveTargets_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> targets);

  /// @brief Method GetJointAccelerations, addr 0x69ad76c, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method GetJointAccelerations_Injected, addr 0x69ad950, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointAccelerations_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> accelerations);

  /// @brief Method GetJointCoriolisCentrifugalForces, addr 0x69ae360, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointCoriolisCentrifugalForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointCoriolisCentrifugalForces_Injected, addr 0x69ae544, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointCoriolisCentrifugalForces_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method GetJointExternalForces, addr 0x69ae588, size 0x1f0, virtual false, abstract: false, final false
  inline int32_t GetJointExternalForces(::System::Collections::Generic::List_1<float_t>* forces, float_t step);

  /// @brief Method GetJointExternalForces_Injected, addr 0x69ae778, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetJointExternalForces_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> forces, float_t step);

  /// @brief Method GetJointForces, addr 0x69ad994, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointForcesForAcceleration, addr 0x69addd4, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace GetJointForcesForAcceleration(::UnityEngine::ArticulationReducedSpace acceleration);

  /// @brief Method GetJointForcesForAcceleration_Injected, addr 0x69adebc, size 0x54, virtual false, abstract: false, final false
  static inline void GetJointForcesForAcceleration_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> acceleration,
                                                            ::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method GetJointForces_Injected, addr 0x69adb78, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointForces_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method GetJointGravityForces, addr 0x69ae138, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointGravityForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointGravityForces_Injected, addr 0x69ae31c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointGravityForces_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method GetJointPositions, addr 0x69aceec, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method GetJointPositions_Injected, addr 0x69ad0d0, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointPositions_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> positions);

  /// @brief Method GetJointVelocities, addr 0x69ad32c, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method GetJointVelocities_Injected, addr 0x69ad510, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointVelocities_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> velocities);

  /// @brief Method GetPointVelocity, addr 0x69acc88, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x69acd34, size 0x54, virtual false, abstract: false, final false
  static inline void GetPointVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> worldPoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x69acb88, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x69acc34, size 0x54, virtual false, abstract: false, final false
  static inline void GetRelativePointVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> relativePoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method IsSleeping, addr 0x69ab154, size 0x80, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method IsSleeping_Injected, addr 0x69ab1d4, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSleeping_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::ArticulationBody* New_ctor();

  /// @brief Method PublishTransform, addr 0x69af9cc, size 0x80, virtual false, abstract: false, final false
  inline void PublishTransform();

  /// @brief Method PublishTransform_Injected, addr 0x69afa4c, size 0x3c, virtual false, abstract: false, final false
  static inline void PublishTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetCenterOfMass, addr 0x69aaf20, size 0x80, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetCenterOfMass_Injected, addr 0x69aafa0, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetInertiaTensor, addr 0x69aafdc, size 0x80, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method ResetInertiaTensor_Injected, addr 0x69ab05c, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetDriveDamping, addr 0x69af654, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveDamping(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveDamping_Injected, addr 0x69af6f4, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveDamping_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveForceLimit, addr 0x69af748, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveForceLimit(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveForceLimit_Injected, addr 0x69af7e8, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveForceLimit_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveLimits, addr 0x69af45c, size 0xa8, virtual false, abstract: false, final false
  inline void SetDriveLimits(::UnityEngine::ArticulationDriveAxis axis, float_t lower, float_t upper);

  /// @brief Method SetDriveLimits_Injected, addr 0x69af504, size 0x5c, virtual false, abstract: false, final false
  static inline void SetDriveLimits_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t lower, float_t upper);

  /// @brief Method SetDriveStiffness, addr 0x69af560, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveStiffness(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveStiffness_Injected, addr 0x69af600, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveStiffness_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTarget, addr 0x69af274, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveTarget(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargetVelocities, addr 0x69aee34, size 0x1d4, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method SetDriveTargetVelocities_Injected, addr 0x69af008, size 0x44, virtual false, abstract: false, final false
  static inline void SetDriveTargetVelocities_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> targetVelocities);

  /// @brief Method SetDriveTargetVelocity, addr 0x69af368, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocity(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargetVelocity_Injected, addr 0x69af408, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveTargetVelocity_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTarget_Injected, addr 0x69af314, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargets, addr 0x69ae9f4, size 0x1d4, virtual false, abstract: false, final false
  inline void SetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method SetDriveTargets_Injected, addr 0x69aebc8, size 0x44, virtual false, abstract: false, final false
  static inline void SetDriveTargets_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> targets);

  /// @brief Method SetJointAccelerations, addr 0x69afd9c, size 0x1d4, virtual false, abstract: false, final false
  inline void SetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method SetJointAccelerations_Injected, addr 0x69aff70, size 0x44, virtual false, abstract: false, final false
  static inline void SetJointAccelerations_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> accelerations);

  /// @brief Method SetJointForces, addr 0x69adbbc, size 0x1d4, virtual false, abstract: false, final false
  inline void SetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method SetJointForces_Injected, addr 0x69add90, size 0x44, virtual false, abstract: false, final false
  static inline void SetJointForces_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method SetJointPositions, addr 0x69ad114, size 0x1d4, virtual false, abstract: false, final false
  inline void SetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method SetJointPositions_Injected, addr 0x69ad2e8, size 0x44, virtual false, abstract: false, final false
  static inline void SetJointPositions_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> positions);

  /// @brief Method SetJointVelocities, addr 0x69ad554, size 0x1d4, virtual false, abstract: false, final false
  inline void SetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method SetJointVelocities_Injected, addr 0x69ad728, size 0x44, virtual false, abstract: false, final false
  static inline void SetJointVelocities_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::BlittableListWrapper> velocities);

  /// @brief Method Sleep, addr 0x69ab098, size 0x80, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method Sleep_Injected, addr 0x69ab118, size 0x3c, virtual false, abstract: false, final false
  static inline void Sleep_Injected(::System::IntPtr _unity_self);

  /// @brief Method SnapAnchorToClosestContact, addr 0x69afa88, size 0x304, virtual false, abstract: false, final false
  inline void SnapAnchorToClosestContact();

  /// @brief Method TeleportRoot, addr 0x69ac990, size 0xa4, virtual false, abstract: false, final false
  inline void TeleportRoot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method TeleportRoot_Injected, addr 0x69aca34, size 0x54, virtual false, abstract: false, final false
  static inline void TeleportRoot_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method WakeUp, addr 0x69ab210, size 0x80, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method WakeUp_Injected, addr 0x69ab290, size 0x3c, virtual false, abstract: false, final false
  static inline void WakeUp_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x69affb4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorPosition, addr 0x69a74dc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchorPosition();

  /// @brief Method get_anchorPosition_Injected, addr 0x69a757c, size 0x44, virtual false, abstract: false, final false
  static inline void get_anchorPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_anchorRotation, addr 0x69a785c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_anchorRotation();

  /// @brief Method get_anchorRotation_Injected, addr 0x69a78f8, size 0x44, virtual false, abstract: false, final false
  static inline void get_anchorRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_angularDamping, addr 0x69a9184, size 0x80, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method get_angularDamping_Injected, addr 0x69a9204, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_angularDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularVelocity, addr 0x69aa18c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x69aa22c, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x69aa4e4, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticCenterOfMass_Injected, addr 0x69aa564, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticInertiaTensor, addr 0x69aa918, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_automaticInertiaTensor_Injected, addr 0x69aa998, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_centerOfMass, addr 0x69aa674, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x69aa714, size 0x44, virtual false, abstract: false, final false
  static inline void get_centerOfMass_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x69af83c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_collisionDetectionMode_Injected, addr 0x69af8bc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_computeParentAnchor, addr 0x69afd94, size 0x4, virtual false, abstract: false, final false
  inline bool get_computeParentAnchor();

  /// @brief Method get_dofCount, addr 0x69ac818, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_dofCount();

  /// @brief Method get_dofCount_Injected, addr 0x69ac898, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_dofCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_driveForce, addr 0x69ac6f4, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_driveForce();

  /// @brief Method get_driveForce_Injected, addr 0x69ac7d4, size 0x44, virtual false, abstract: false, final false
  static inline void get_driveForce_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_excludeLayers, addr 0x69a94b4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x69a954c, size 0x44, virtual false, abstract: false, final false
  static inline void get_excludeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_immovable, addr 0x69a8ccc, size 0x80, virtual false, abstract: false, final false
  inline bool get_immovable();

  /// @brief Method get_immovable_Injected, addr 0x69a8d4c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_immovable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_includeLayers, addr 0x69a9668, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x69a9700, size 0x44, virtual false, abstract: false, final false
  static inline void get_includeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_index, addr 0x69ac8d4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_index_Injected, addr 0x69ac954, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_index_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_inertiaTensor, addr 0x69aaaa8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x69aad64, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x69aae00, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x69aab48, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_isRoot, addr 0x69a7bd4, size 0x80, virtual false, abstract: false, final false
  inline bool get_isRoot();

  /// @brief Method get_isRoot_Injected, addr 0x69a7c54, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_jointAcceleration, addr 0x69ac26c, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointAcceleration();

  /// @brief Method get_jointAcceleration_Injected, addr 0x69ac34c, size 0x44, virtual false, abstract: false, final false
  static inline void get_jointAcceleration_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointForce, addr 0x69ac4b0, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointForce();

  /// @brief Method get_jointForce_Injected, addr 0x69ac590, size 0x44, virtual false, abstract: false, final false
  static inline void get_jointForce_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointFriction, addr 0x69a931c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_jointFriction();

  /// @brief Method get_jointFriction_Injected, addr 0x69a939c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_jointFriction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_jointPosition, addr 0x69abde4, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointPosition();

  /// @brief Method get_jointPosition_Injected, addr 0x69abec4, size 0x44, virtual false, abstract: false, final false
  static inline void get_jointPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointType, addr 0x69a734c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationJointType get_jointType();

  /// @brief Method get_jointType_Injected, addr 0x69a73cc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationJointType get_jointType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_jointVelocity, addr 0x69ac028, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointVelocity();

  /// @brief Method get_jointVelocity_Injected, addr 0x69ac108, size 0x44, virtual false, abstract: false, final false
  static inline void get_jointVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_linearDamping, addr 0x69a8fec, size 0x80, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method get_linearDamping_Injected, addr 0x69a906c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_linearDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearLockX, addr 0x69a7e20, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockX();

  /// @brief Method get_linearLockX_Injected, addr 0x69a7ea0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_linearLockX_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearLockY, addr 0x69a7fb0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockY();

  /// @brief Method get_linearLockY_Injected, addr 0x69a8030, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_linearLockY_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearLockZ, addr 0x69a8140, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockZ();

  /// @brief Method get_linearLockZ_Injected, addr 0x69a81c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_linearLockZ_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearVelocity, addr 0x69a9fcc, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_linearVelocity();

  /// @brief Method get_linearVelocity_Injected, addr 0x69aa06c, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_mass, addr 0x69aa34c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_mass_Injected, addr 0x69aa3cc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_mass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_matchAnchors, addr 0x69a7c90, size 0x80, virtual false, abstract: false, final false
  inline bool get_matchAnchors();

  /// @brief Method get_matchAnchors_Injected, addr 0x69a7d10, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_matchAnchors_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxAngularVelocity, addr 0x69ab784, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxAngularVelocity_Injected, addr 0x69ab804, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDepenetrationVelocity, addr 0x69abc4c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxDepenetrationVelocity_Injected, addr 0x69abccc, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxJointVelocity, addr 0x69abab4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxJointVelocity();

  /// @brief Method get_maxJointVelocity_Injected, addr 0x69abb34, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxJointVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxLinearVelocity, addr 0x69ab91c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_maxLinearVelocity_Injected, addr 0x69ab99c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxLinearVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_parentAnchorPosition, addr 0x69a769c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_parentAnchorPosition();

  /// @brief Method get_parentAnchorPosition_Injected, addr 0x69a773c, size 0x44, virtual false, abstract: false, final false
  static inline void get_parentAnchorPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_parentAnchorRotation, addr 0x69a7a18, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_parentAnchorRotation();

  /// @brief Method get_parentAnchorRotation_Injected, addr 0x69a7ab4, size 0x44, virtual false, abstract: false, final false
  static inline void get_parentAnchorRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepThreshold, addr 0x69ab2cc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_sleepThreshold_Injected, addr 0x69ab34c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverIterations, addr 0x69ab464, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverIterations_Injected, addr 0x69ab4e4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverVelocityIterations, addr 0x69ab5f4, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_solverVelocityIterations_Injected, addr 0x69ab674, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_swingYLock, addr 0x69a82d0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingYLock();

  /// @brief Method get_swingYLock_Injected, addr 0x69a8350, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_swingYLock_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_swingZLock, addr 0x69a8460, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingZLock();

  /// @brief Method get_swingZLock_Injected, addr 0x69a84e0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_swingZLock_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_twistLock, addr 0x69a85f0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_twistLock();

  /// @brief Method get_twistLock_Injected, addr 0x69a8670, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_twistLock_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useGravity, addr 0x69a8e5c, size 0x80, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_useGravity_Injected, addr 0x69a8edc, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useGravity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x69afd8c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_worldCenterOfMass, addr 0x69aa834, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x69aa8d4, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldCenterOfMass_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldInertiaTensorMatrix, addr 0x69aac68, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldInertiaTensorMatrix();

  /// @brief Method get_worldInertiaTensorMatrix_Injected, addr 0x69aad20, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldInertiaTensorMatrix_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_xDrive, addr 0x69a8780, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x69a882c, size 0x44, virtual false, abstract: false, final false
  static inline void get_xDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_yDrive, addr 0x69a8944, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x69a89f0, size 0x44, virtual false, abstract: false, final false
  static inline void get_yDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_zDrive, addr 0x69a8b08, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x69a8bb4, size 0x44, virtual false, abstract: false, final false
  static inline void get_zDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method set_anchorPosition, addr 0x69a75c0, size 0x98, virtual false, abstract: false, final false
  inline void set_anchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_anchorPosition_Injected, addr 0x69a7658, size 0x44, virtual false, abstract: false, final false
  static inline void set_anchorPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_anchorRotation, addr 0x69a793c, size 0x98, virtual false, abstract: false, final false
  inline void set_anchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_anchorRotation_Injected, addr 0x69a79d4, size 0x44, virtual false, abstract: false, final false
  static inline void set_anchorRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_angularDamping, addr 0x69a9240, size 0x90, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method set_angularDamping_Injected, addr 0x69a92d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_angularDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_angularVelocity, addr 0x69aa270, size 0x98, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x69aa308, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x69aa5a0, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticCenterOfMass_Injected, addr 0x69aa630, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticCenterOfMass_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x69aa9d4, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_automaticInertiaTensor_Injected, addr 0x69aaa64, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticInertiaTensor_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_centerOfMass, addr 0x69aa758, size 0x98, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x69aa7f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_centerOfMass_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_collisionDetectionMode, addr 0x69af8f8, size 0x90, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_collisionDetectionMode_Injected, addr 0x69af988, size 0x44, virtual false, abstract: false, final false
  static inline void set_collisionDetectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_computeParentAnchor, addr 0x69afd98, size 0x4, virtual false, abstract: false, final false
  inline void set_computeParentAnchor(bool value);

  /// @brief Method set_excludeLayers, addr 0x69a9590, size 0x94, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x69a9624, size 0x44, virtual false, abstract: false, final false
  static inline void set_excludeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_immovable, addr 0x69a8d88, size 0x90, virtual false, abstract: false, final false
  inline void set_immovable(bool value);

  /// @brief Method set_immovable_Injected, addr 0x69a8e18, size 0x44, virtual false, abstract: false, final false
  static inline void set_immovable_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_includeLayers, addr 0x69a9744, size 0x94, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x69a97d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_includeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_inertiaTensor, addr 0x69aab8c, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x69aae44, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x69aaedc, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x69aac24, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_jointAcceleration, addr 0x69ac390, size 0xdc, virtual false, abstract: false, final false
  inline void set_jointAcceleration(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointAcceleration_Injected, addr 0x69ac46c, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointAcceleration_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointForce, addr 0x69ac5d4, size 0xdc, virtual false, abstract: false, final false
  inline void set_jointForce(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointForce_Injected, addr 0x69ac6b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointForce_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointFriction, addr 0x69a93d8, size 0x90, virtual false, abstract: false, final false
  inline void set_jointFriction(float_t value);

  /// @brief Method set_jointFriction_Injected, addr 0x69a9468, size 0x4c, virtual false, abstract: false, final false
  static inline void set_jointFriction_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_jointPosition, addr 0x69abf08, size 0xdc, virtual false, abstract: false, final false
  inline void set_jointPosition(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointPosition_Injected, addr 0x69abfe4, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointType, addr 0x69a7408, size 0x90, virtual false, abstract: false, final false
  inline void set_jointType(::UnityEngine::ArticulationJointType value);

  /// @brief Method set_jointType_Injected, addr 0x69a7498, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointType_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationJointType value);

  /// @brief Method set_jointVelocity, addr 0x69ac14c, size 0xdc, virtual false, abstract: false, final false
  inline void set_jointVelocity(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointVelocity_Injected, addr 0x69ac228, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_linearDamping, addr 0x69a90a8, size 0x90, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method set_linearDamping_Injected, addr 0x69a9138, size 0x4c, virtual false, abstract: false, final false
  static inline void set_linearDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_linearLockX, addr 0x69a7edc, size 0x90, virtual false, abstract: false, final false
  inline void set_linearLockX(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockX_Injected, addr 0x69a7f6c, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLockX_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockY, addr 0x69a806c, size 0x90, virtual false, abstract: false, final false
  inline void set_linearLockY(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockY_Injected, addr 0x69a80fc, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLockY_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockZ, addr 0x69a81fc, size 0x90, virtual false, abstract: false, final false
  inline void set_linearLockZ(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockZ_Injected, addr 0x69a828c, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLockZ_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearVelocity, addr 0x69aa0b0, size 0x98, virtual false, abstract: false, final false
  inline void set_linearVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_linearVelocity_Injected, addr 0x69aa148, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_mass, addr 0x69aa408, size 0x90, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_mass_Injected, addr 0x69aa498, size 0x4c, virtual false, abstract: false, final false
  static inline void set_mass_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_matchAnchors, addr 0x69a7d4c, size 0x90, virtual false, abstract: false, final false
  inline void set_matchAnchors(bool value);

  /// @brief Method set_matchAnchors_Injected, addr 0x69a7ddc, size 0x44, virtual false, abstract: false, final false
  static inline void set_matchAnchors_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_maxAngularVelocity, addr 0x69ab840, size 0x90, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxAngularVelocity_Injected, addr 0x69ab8d0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x69abd08, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity_Injected, addr 0x69abd98, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxJointVelocity, addr 0x69abb70, size 0x90, virtual false, abstract: false, final false
  inline void set_maxJointVelocity(float_t value);

  /// @brief Method set_maxJointVelocity_Injected, addr 0x69abc00, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxJointVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x69ab9d8, size 0x90, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity_Injected, addr 0x69aba68, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxLinearVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_parentAnchorPosition, addr 0x69a7780, size 0x98, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_parentAnchorPosition_Injected, addr 0x69a7818, size 0x44, virtual false, abstract: false, final false
  static inline void set_parentAnchorPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_parentAnchorRotation, addr 0x69a7af8, size 0x98, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_parentAnchorRotation_Injected, addr 0x69a7b90, size 0x44, virtual false, abstract: false, final false
  static inline void set_parentAnchorRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_sleepThreshold, addr 0x69ab388, size 0x90, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepThreshold_Injected, addr 0x69ab418, size 0x4c, virtual false, abstract: false, final false
  static inline void set_sleepThreshold_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_solverIterations, addr 0x69ab520, size 0x90, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverIterations_Injected, addr 0x69ab5b0, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x69ab6b0, size 0x90, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_solverVelocityIterations_Injected, addr 0x69ab740, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverVelocityIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_swingYLock, addr 0x69a838c, size 0x90, virtual false, abstract: false, final false
  inline void set_swingYLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingYLock_Injected, addr 0x69a841c, size 0x44, virtual false, abstract: false, final false
  static inline void set_swingYLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingZLock, addr 0x69a851c, size 0x90, virtual false, abstract: false, final false
  inline void set_swingZLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingZLock_Injected, addr 0x69a85ac, size 0x44, virtual false, abstract: false, final false
  static inline void set_swingZLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_twistLock, addr 0x69a86ac, size 0x90, virtual false, abstract: false, final false
  inline void set_twistLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_twistLock_Injected, addr 0x69a873c, size 0x44, virtual false, abstract: false, final false
  static inline void set_twistLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_useGravity, addr 0x69a8f18, size 0x90, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_useGravity_Injected, addr 0x69a8fa8, size 0x44, virtual false, abstract: false, final false
  static inline void set_useGravity_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_velocity, addr 0x69afd90, size 0x4, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_xDrive, addr 0x69a8870, size 0x90, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x69a8900, size 0x44, virtual false, abstract: false, final false
  static inline void set_xDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method set_yDrive, addr 0x69a8a34, size 0x90, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x69a8ac4, size 0x44, virtual false, abstract: false, final false
  static inline void set_yDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method set_zDrive, addr 0x69a8bf8, size 0x90, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x69a8c88, size 0x44, virtual false, abstract: false, final false
  static inline void set_zDrive_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::ArticulationDrive> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationBody();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArticulationBody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArticulationBody(ArticulationBody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArticulationBody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArticulationBody(ArticulationBody const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18596 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationBody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ArticulationBody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationBody*, "UnityEngine", "ArticulationBody");
