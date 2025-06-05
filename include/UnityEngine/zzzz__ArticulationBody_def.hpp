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

  __declspec(property(get = get_xDrive, put = set_xDrive)) ::UnityEngine::ArticulationDrive xDrive;

  __declspec(property(get = get_yDrive, put = set_yDrive)) ::UnityEngine::ArticulationDrive yDrive;

  __declspec(property(get = get_zDrive, put = set_zDrive)) ::UnityEngine::ArticulationDrive zDrive;

  /// @brief Method AddForce, addr 0x48f7e18, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x48f7d68, size 0x5c, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x48f810c, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x48f8048, size 0x68, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x48f80b0, size 0x5c, virtual false, abstract: false, final false
  inline void AddForceAtPosition_Injected(::ByRef<::UnityEngine::Vector3> force, ::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x48f7dc4, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x48f7ed0, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x48f7e20, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x48f7e7c, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeForce_Injected(::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x48f8040, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x48f7f90, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x48f7fec, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeTorque_Injected(::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x48f7f88, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x48f7ed8, size 0x5c, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x48f7f34, size 0x54, virtual false, abstract: false, final false
  inline void AddTorque_Injected(::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method GetAccumulatedForce, addr 0x48f7c70, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x48f7bb0, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x48f7c1c, size 0x54, virtual false, abstract: false, final false
  inline void GetAccumulatedForce_Injected(float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetAccumulatedTorque, addr 0x48f7d4c, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x48f7c8c, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x48f7cf8, size 0x54, virtual false, abstract: false, final false
  inline void GetAccumulatedTorque_Injected(float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetClosestPoint, addr 0x48f9538, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method GetClosestPoint_Injected, addr 0x48f95a0, size 0x54, virtual false, abstract: false, final false
  inline void GetClosestPoint_Injected(::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetDenseJacobian, addr 0x48f97b0, size 0xa0, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian(::ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDenseJacobian_Internal, addr 0x48f976c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian_Internal(::ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDofStartIndices, addr 0x48f9d2c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDofStartIndices(::System::Collections::Generic::List_1<int32_t>* dofStartIndices);

  /// @brief Method GetDriveForces, addr 0x48f9afc, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetDriveTargetVelocities, addr 0x48f9ca4, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method GetDriveTargets, addr 0x48f9c1c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method GetJointAccelerations, addr 0x48f9960, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method GetJointCoriolisCentrifugalForces, addr 0x48f9b84, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointCoriolisCentrifugalForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointExternalForces, addr 0x48f9bc8, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetJointExternalForces(::System::Collections::Generic::List_1<float_t>* forces, float_t step);

  /// @brief Method GetJointForces, addr 0x48f99a4, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointForcesForAcceleration, addr 0x48f9a2c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace GetJointForcesForAcceleration(::UnityEngine::ArticulationReducedSpace acceleration);

  /// @brief Method GetJointForcesForAcceleration_Injected, addr 0x48f9aa8, size 0x54, virtual false, abstract: false, final false
  inline void GetJointForcesForAcceleration_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> acceleration, ::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method GetJointGravityForces, addr 0x48f9b40, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointGravityForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointPositions, addr 0x48f9850, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method GetJointVelocities, addr 0x48f98d8, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method GetPointVelocity, addr 0x48f96b0, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x48f9718, size 0x54, virtual false, abstract: false, final false
  inline void GetPointVelocity_Injected(::ByRef<::UnityEngine::Vector3> worldPoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x48f95f4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x48f965c, size 0x54, virtual false, abstract: false, final false
  inline void GetRelativePointVelocity_Injected(::ByRef<::UnityEngine::Vector3> relativePoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method IsSleeping, addr 0x48f8a04, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSleeping();

  static inline ::UnityEngine::ArticulationBody* New_ctor();

  /// @brief Method ResetCenterOfMass, addr 0x48f8950, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetInertiaTensor, addr 0x48f898c, size 0x3c, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method SetDriveDamping, addr 0x48f9ec8, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveDamping(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveForceLimit, addr 0x48f9f1c, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveForceLimit(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveLimits, addr 0x48f9e18, size 0x5c, virtual false, abstract: false, final false
  inline void SetDriveLimits(::UnityEngine::ArticulationDriveAxis axis, float_t lower, float_t upper);

  /// @brief Method SetDriveStiffness, addr 0x48f9e74, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveStiffness(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTarget, addr 0x48f9d70, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveTarget(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargetVelocities, addr 0x48f9ce8, size 0x44, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method SetDriveTargetVelocity, addr 0x48f9dc4, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocity(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargets, addr 0x48f9c60, size 0x44, virtual false, abstract: false, final false
  inline void SetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method SetJointAccelerations, addr 0x48fa36c, size 0x44, virtual false, abstract: false, final false
  inline void SetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method SetJointForces, addr 0x48f99e8, size 0x44, virtual false, abstract: false, final false
  inline void SetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method SetJointPositions, addr 0x48f9894, size 0x44, virtual false, abstract: false, final false
  inline void SetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method SetJointVelocities, addr 0x48f991c, size 0x44, virtual false, abstract: false, final false
  inline void SetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method Sleep, addr 0x48f89c8, size 0x3c, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method SnapAnchorToClosestContact, addr 0x48f9ff0, size 0x2fc, virtual false, abstract: false, final false
  inline void SnapAnchorToClosestContact();

  /// @brief Method TeleportRoot, addr 0x48f9484, size 0x60, virtual false, abstract: false, final false
  inline void TeleportRoot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method TeleportRoot_Injected, addr 0x48f94e4, size 0x54, virtual false, abstract: false, final false
  inline void TeleportRoot_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method WakeUp, addr 0x48f8a40, size 0x3c, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method .ctor, addr 0x48fa3b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorPosition, addr 0x48f6ac8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchorPosition();

  /// @brief Method get_anchorPosition_Injected, addr 0x48f6b24, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorPosition_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_anchorRotation, addr 0x48f6d38, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_anchorRotation();

  /// @brief Method get_anchorRotation_Injected, addr 0x48f6d90, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_angularDamping, addr 0x48f7868, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method get_angularVelocity, addr 0x48f824c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x48f82a8, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x48f840c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticInertiaTensor, addr 0x48f8664, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_centerOfMass, addr 0x48f848c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x48f84e8, size 0x44, virtual false, abstract: false, final false
  inline void get_centerOfMass_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x48f9f70, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_computeParentAnchor, addr 0x48fa2ec, size 0x3c, virtual false, abstract: false, final false
  inline bool get_computeParentAnchor();

  /// @brief Method get_dofCount, addr 0x48f940c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_dofCount();

  /// @brief Method get_driveForce, addr 0x48f9354, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_driveForce();

  /// @brief Method get_driveForce_Injected, addr 0x48f93c8, size 0x44, virtual false, abstract: false, final false
  inline void get_driveForce_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_excludeLayers, addr 0x48f7978, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x48f79c4, size 0x44, virtual false, abstract: false, final false
  inline void get_excludeLayers_Injected(::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_immovable, addr 0x48f76e0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_immovable();

  /// @brief Method get_includeLayers, addr 0x48f7a94, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x48f7ae0, size 0x44, virtual false, abstract: false, final false
  inline void get_includeLayers_Injected(::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_index, addr 0x48f9448, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_inertiaTensor, addr 0x48f86e4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x48f881c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x48f8874, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensorRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x48f8740, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensor_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_isRoot, addr 0x48f6fa0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isRoot();

  /// @brief Method get_jointAcceleration, addr 0x48f90bc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointAcceleration();

  /// @brief Method get_jointAcceleration_Injected, addr 0x48f9130, size 0x44, virtual false, abstract: false, final false
  inline void get_jointAcceleration_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointForce, addr 0x48f9208, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointForce();

  /// @brief Method get_jointForce_Injected, addr 0x48f927c, size 0x44, virtual false, abstract: false, final false
  inline void get_jointForce_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointFriction, addr 0x48f78f0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_jointFriction();

  /// @brief Method get_jointPosition, addr 0x48f8e24, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointPosition();

  /// @brief Method get_jointPosition_Injected, addr 0x48f8e98, size 0x44, virtual false, abstract: false, final false
  inline void get_jointPosition_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointType, addr 0x48f6a48, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationJointType get_jointType();

  /// @brief Method get_jointVelocity, addr 0x48f8f70, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointVelocity();

  /// @brief Method get_jointVelocity_Injected, addr 0x48f8fe4, size 0x44, virtual false, abstract: false, final false
  inline void get_jointVelocity_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_linearDamping, addr 0x48f77e0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method get_linearLockX, addr 0x48f705c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockX();

  /// @brief Method get_linearLockY, addr 0x48f70dc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockY();

  /// @brief Method get_linearLockZ, addr 0x48f715c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockZ();

  /// @brief Method get_mass, addr 0x48f8384, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_matchAnchors, addr 0x48f6fdc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_matchAnchors();

  /// @brief Method get_maxAngularVelocity, addr 0x48f8c04, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxDepenetrationVelocity, addr 0x48f8d9c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxJointVelocity, addr 0x48f8d14, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxJointVelocity();

  /// @brief Method get_maxLinearVelocity, addr 0x48f8c8c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_parentAnchorPosition, addr 0x48f6c00, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_parentAnchorPosition();

  /// @brief Method get_parentAnchorPosition_Injected, addr 0x48f6c5c, size 0x44, virtual false, abstract: false, final false
  inline void get_parentAnchorPosition_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_parentAnchorRotation, addr 0x48f6e6c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_parentAnchorRotation();

  /// @brief Method get_parentAnchorRotation_Injected, addr 0x48f6ec4, size 0x44, virtual false, abstract: false, final false
  inline void get_parentAnchorRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepThreshold, addr 0x48f8a7c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_solverIterations, addr 0x48f8b04, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverVelocityIterations, addr 0x48f8b84, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_swingYLock, addr 0x48f71dc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingYLock();

  /// @brief Method get_swingZLock, addr 0x48f725c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingZLock();

  /// @brief Method get_twistLock, addr 0x48f72dc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_twistLock();

  /// @brief Method get_useGravity, addr 0x48f7760, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_velocity, addr 0x48f8114, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x48f8170, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldCenterOfMass, addr 0x48f85c4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x48f8620, size 0x44, virtual false, abstract: false, final false
  inline void get_worldCenterOfMass_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_xDrive, addr 0x48f735c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x48f73bc, size 0x44, virtual false, abstract: false, final false
  inline void get_xDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_yDrive, addr 0x48f7488, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x48f74e8, size 0x44, virtual false, abstract: false, final false
  inline void get_yDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_zDrive, addr 0x48f75b4, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x48f7614, size 0x44, virtual false, abstract: false, final false
  inline void get_zDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method set_anchorPosition, addr 0x48f6b68, size 0x54, virtual false, abstract: false, final false
  inline void set_anchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_anchorPosition_Injected, addr 0x48f6bbc, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorPosition_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_anchorRotation, addr 0x48f6dd4, size 0x54, virtual false, abstract: false, final false
  inline void set_anchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_anchorRotation_Injected, addr 0x48f6e28, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_angularDamping, addr 0x48f78a4, size 0x4c, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method set_angularVelocity, addr 0x48f82ec, size 0x54, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x48f8340, size 0x44, virtual false, abstract: false, final false
  inline void set_angularVelocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x48f8448, size 0x44, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x48f86a0, size 0x44, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_centerOfMass, addr 0x48f852c, size 0x54, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x48f8580, size 0x44, virtual false, abstract: false, final false
  inline void set_centerOfMass_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_collisionDetectionMode, addr 0x48f9fac, size 0x44, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_computeParentAnchor, addr 0x48fa328, size 0x44, virtual false, abstract: false, final false
  inline void set_computeParentAnchor(bool value);

  /// @brief Method set_excludeLayers, addr 0x48f7a08, size 0x48, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x48f7a50, size 0x44, virtual false, abstract: false, final false
  inline void set_excludeLayers_Injected(::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_immovable, addr 0x48f771c, size 0x44, virtual false, abstract: false, final false
  inline void set_immovable(bool value);

  /// @brief Method set_includeLayers, addr 0x48f7b24, size 0x48, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x48f7b6c, size 0x44, virtual false, abstract: false, final false
  inline void set_includeLayers_Injected(::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_inertiaTensor, addr 0x48f8784, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x48f88b8, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x48f890c, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x48f87d8, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensor_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_jointAcceleration, addr 0x48f9174, size 0x50, virtual false, abstract: false, final false
  inline void set_jointAcceleration(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointAcceleration_Injected, addr 0x48f91c4, size 0x44, virtual false, abstract: false, final false
  inline void set_jointAcceleration_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointForce, addr 0x48f92c0, size 0x50, virtual false, abstract: false, final false
  inline void set_jointForce(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointForce_Injected, addr 0x48f9310, size 0x44, virtual false, abstract: false, final false
  inline void set_jointForce_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointFriction, addr 0x48f792c, size 0x4c, virtual false, abstract: false, final false
  inline void set_jointFriction(float_t value);

  /// @brief Method set_jointPosition, addr 0x48f8edc, size 0x50, virtual false, abstract: false, final false
  inline void set_jointPosition(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointPosition_Injected, addr 0x48f8f2c, size 0x44, virtual false, abstract: false, final false
  inline void set_jointPosition_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointType, addr 0x48f6a84, size 0x44, virtual false, abstract: false, final false
  inline void set_jointType(::UnityEngine::ArticulationJointType value);

  /// @brief Method set_jointVelocity, addr 0x48f9028, size 0x50, virtual false, abstract: false, final false
  inline void set_jointVelocity(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointVelocity_Injected, addr 0x48f9078, size 0x44, virtual false, abstract: false, final false
  inline void set_jointVelocity_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_linearDamping, addr 0x48f781c, size 0x4c, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method set_linearLockX, addr 0x48f7098, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockX(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockY, addr 0x48f7118, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockY(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockZ, addr 0x48f7198, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockZ(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_mass, addr 0x48f83c0, size 0x4c, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_matchAnchors, addr 0x48f7018, size 0x44, virtual false, abstract: false, final false
  inline void set_matchAnchors(bool value);

  /// @brief Method set_maxAngularVelocity, addr 0x48f8c40, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x48f8dd8, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxJointVelocity, addr 0x48f8d50, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxJointVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x48f8cc8, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_parentAnchorPosition, addr 0x48f6ca0, size 0x54, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_parentAnchorPosition_Injected, addr 0x48f6cf4, size 0x44, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_parentAnchorRotation, addr 0x48f6f08, size 0x54, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_parentAnchorRotation_Injected, addr 0x48f6f5c, size 0x44, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_sleepThreshold, addr 0x48f8ab8, size 0x4c, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_solverIterations, addr 0x48f8b40, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x48f8bc0, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_swingYLock, addr 0x48f7218, size 0x44, virtual false, abstract: false, final false
  inline void set_swingYLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingZLock, addr 0x48f7298, size 0x44, virtual false, abstract: false, final false
  inline void set_swingZLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_twistLock, addr 0x48f7318, size 0x44, virtual false, abstract: false, final false
  inline void set_twistLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_useGravity, addr 0x48f779c, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_velocity, addr 0x48f81b4, size 0x54, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_velocity_Injected, addr 0x48f8208, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_xDrive, addr 0x48f7400, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x48f7444, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method set_yDrive, addr 0x48f752c, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x48f7570, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method set_zDrive, addr 0x48f7658, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x48f769c, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationBody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ArticulationBody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationBody*, "UnityEngine", "ArticulationBody");
