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

  /// @brief Method AddForce, addr 0x48f1e30, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x48f1d80, size 0x5c, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x48f2124, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x48f2060, size 0x68, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x48f20c8, size 0x5c, virtual false, abstract: false, final false
  inline void AddForceAtPosition_Injected(::ByRef<::UnityEngine::Vector3> force, ::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x48f1ddc, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x48f1ee8, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x48f1e38, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x48f1e94, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeForce_Injected(::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x48f2058, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x48f1fa8, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x48f2004, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeTorque_Injected(::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x48f1fa0, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x48f1ef0, size 0x5c, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x48f1f4c, size 0x54, virtual false, abstract: false, final false
  inline void AddTorque_Injected(::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method GetAccumulatedForce, addr 0x48f1c88, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x48f1bc8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x48f1c34, size 0x54, virtual false, abstract: false, final false
  inline void GetAccumulatedForce_Injected(float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetAccumulatedTorque, addr 0x48f1d64, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x48f1ca4, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x48f1d10, size 0x54, virtual false, abstract: false, final false
  inline void GetAccumulatedTorque_Injected(float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetClosestPoint, addr 0x48f3550, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method GetClosestPoint_Injected, addr 0x48f35b8, size 0x54, virtual false, abstract: false, final false
  inline void GetClosestPoint_Injected(::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetDenseJacobian, addr 0x48f37c8, size 0xa0, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian(::ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDenseJacobian_Internal, addr 0x48f3784, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian_Internal(::ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDofStartIndices, addr 0x48f3d44, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDofStartIndices(::System::Collections::Generic::List_1<int32_t>* dofStartIndices);

  /// @brief Method GetDriveForces, addr 0x48f3b14, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetDriveTargetVelocities, addr 0x48f3cbc, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method GetDriveTargets, addr 0x48f3c34, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method GetJointAccelerations, addr 0x48f3978, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method GetJointCoriolisCentrifugalForces, addr 0x48f3b9c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointCoriolisCentrifugalForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointExternalForces, addr 0x48f3be0, size 0x54, virtual false, abstract: false, final false
  inline int32_t GetJointExternalForces(::System::Collections::Generic::List_1<float_t>* forces, float_t step);

  /// @brief Method GetJointForces, addr 0x48f39bc, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointForcesForAcceleration, addr 0x48f3a44, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace GetJointForcesForAcceleration(::UnityEngine::ArticulationReducedSpace acceleration);

  /// @brief Method GetJointForcesForAcceleration_Injected, addr 0x48f3ac0, size 0x54, virtual false, abstract: false, final false
  inline void GetJointForcesForAcceleration_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> acceleration, ::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method GetJointGravityForces, addr 0x48f3b58, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointGravityForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointPositions, addr 0x48f3868, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method GetJointVelocities, addr 0x48f38f0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method GetPointVelocity, addr 0x48f36c8, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x48f3730, size 0x54, virtual false, abstract: false, final false
  inline void GetPointVelocity_Injected(::ByRef<::UnityEngine::Vector3> worldPoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x48f360c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x48f3674, size 0x54, virtual false, abstract: false, final false
  inline void GetRelativePointVelocity_Injected(::ByRef<::UnityEngine::Vector3> relativePoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method IsSleeping, addr 0x48f2a1c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSleeping();

  static inline ::UnityEngine::ArticulationBody* New_ctor();

  /// @brief Method ResetCenterOfMass, addr 0x48f2968, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetInertiaTensor, addr 0x48f29a4, size 0x3c, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method SetDriveDamping, addr 0x48f3ee0, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveDamping(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveForceLimit, addr 0x48f3f34, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveForceLimit(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveLimits, addr 0x48f3e30, size 0x5c, virtual false, abstract: false, final false
  inline void SetDriveLimits(::UnityEngine::ArticulationDriveAxis axis, float_t lower, float_t upper);

  /// @brief Method SetDriveStiffness, addr 0x48f3e8c, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveStiffness(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTarget, addr 0x48f3d88, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveTarget(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargetVelocities, addr 0x48f3d00, size 0x44, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method SetDriveTargetVelocity, addr 0x48f3ddc, size 0x54, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocity(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargets, addr 0x48f3c78, size 0x44, virtual false, abstract: false, final false
  inline void SetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method SetJointAccelerations, addr 0x48f4384, size 0x44, virtual false, abstract: false, final false
  inline void SetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method SetJointForces, addr 0x48f3a00, size 0x44, virtual false, abstract: false, final false
  inline void SetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method SetJointPositions, addr 0x48f38ac, size 0x44, virtual false, abstract: false, final false
  inline void SetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method SetJointVelocities, addr 0x48f3934, size 0x44, virtual false, abstract: false, final false
  inline void SetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method Sleep, addr 0x48f29e0, size 0x3c, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method SnapAnchorToClosestContact, addr 0x48f4008, size 0x2fc, virtual false, abstract: false, final false
  inline void SnapAnchorToClosestContact();

  /// @brief Method TeleportRoot, addr 0x48f349c, size 0x60, virtual false, abstract: false, final false
  inline void TeleportRoot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method TeleportRoot_Injected, addr 0x48f34fc, size 0x54, virtual false, abstract: false, final false
  inline void TeleportRoot_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method WakeUp, addr 0x48f2a58, size 0x3c, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method .ctor, addr 0x48f43c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorPosition, addr 0x48f0ae0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchorPosition();

  /// @brief Method get_anchorPosition_Injected, addr 0x48f0b3c, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorPosition_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_anchorRotation, addr 0x48f0d50, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_anchorRotation();

  /// @brief Method get_anchorRotation_Injected, addr 0x48f0da8, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_angularDamping, addr 0x48f1880, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method get_angularVelocity, addr 0x48f2264, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x48f22c0, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x48f2424, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticInertiaTensor, addr 0x48f267c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_centerOfMass, addr 0x48f24a4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x48f2500, size 0x44, virtual false, abstract: false, final false
  inline void get_centerOfMass_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x48f3f88, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_computeParentAnchor, addr 0x48f4304, size 0x3c, virtual false, abstract: false, final false
  inline bool get_computeParentAnchor();

  /// @brief Method get_dofCount, addr 0x48f3424, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_dofCount();

  /// @brief Method get_driveForce, addr 0x48f336c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_driveForce();

  /// @brief Method get_driveForce_Injected, addr 0x48f33e0, size 0x44, virtual false, abstract: false, final false
  inline void get_driveForce_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_excludeLayers, addr 0x48f1990, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x48f19dc, size 0x44, virtual false, abstract: false, final false
  inline void get_excludeLayers_Injected(::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_immovable, addr 0x48f16f8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_immovable();

  /// @brief Method get_includeLayers, addr 0x48f1aac, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x48f1af8, size 0x44, virtual false, abstract: false, final false
  inline void get_includeLayers_Injected(::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_index, addr 0x48f3460, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_inertiaTensor, addr 0x48f26fc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x48f2834, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x48f288c, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensorRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x48f2758, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensor_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_isRoot, addr 0x48f0fb8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isRoot();

  /// @brief Method get_jointAcceleration, addr 0x48f30d4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointAcceleration();

  /// @brief Method get_jointAcceleration_Injected, addr 0x48f3148, size 0x44, virtual false, abstract: false, final false
  inline void get_jointAcceleration_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointForce, addr 0x48f3220, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointForce();

  /// @brief Method get_jointForce_Injected, addr 0x48f3294, size 0x44, virtual false, abstract: false, final false
  inline void get_jointForce_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointFriction, addr 0x48f1908, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_jointFriction();

  /// @brief Method get_jointPosition, addr 0x48f2e3c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointPosition();

  /// @brief Method get_jointPosition_Injected, addr 0x48f2eb0, size 0x44, virtual false, abstract: false, final false
  inline void get_jointPosition_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointType, addr 0x48f0a60, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationJointType get_jointType();

  /// @brief Method get_jointVelocity, addr 0x48f2f88, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointVelocity();

  /// @brief Method get_jointVelocity_Injected, addr 0x48f2ffc, size 0x44, virtual false, abstract: false, final false
  inline void get_jointVelocity_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_linearDamping, addr 0x48f17f8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method get_linearLockX, addr 0x48f1074, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockX();

  /// @brief Method get_linearLockY, addr 0x48f10f4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockY();

  /// @brief Method get_linearLockZ, addr 0x48f1174, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockZ();

  /// @brief Method get_mass, addr 0x48f239c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_matchAnchors, addr 0x48f0ff4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_matchAnchors();

  /// @brief Method get_maxAngularVelocity, addr 0x48f2c1c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxDepenetrationVelocity, addr 0x48f2db4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxJointVelocity, addr 0x48f2d2c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxJointVelocity();

  /// @brief Method get_maxLinearVelocity, addr 0x48f2ca4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_parentAnchorPosition, addr 0x48f0c18, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_parentAnchorPosition();

  /// @brief Method get_parentAnchorPosition_Injected, addr 0x48f0c74, size 0x44, virtual false, abstract: false, final false
  inline void get_parentAnchorPosition_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_parentAnchorRotation, addr 0x48f0e84, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_parentAnchorRotation();

  /// @brief Method get_parentAnchorRotation_Injected, addr 0x48f0edc, size 0x44, virtual false, abstract: false, final false
  inline void get_parentAnchorRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepThreshold, addr 0x48f2a94, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_solverIterations, addr 0x48f2b1c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverVelocityIterations, addr 0x48f2b9c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_swingYLock, addr 0x48f11f4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingYLock();

  /// @brief Method get_swingZLock, addr 0x48f1274, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingZLock();

  /// @brief Method get_twistLock, addr 0x48f12f4, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_twistLock();

  /// @brief Method get_useGravity, addr 0x48f1778, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_velocity, addr 0x48f212c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x48f2188, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldCenterOfMass, addr 0x48f25dc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x48f2638, size 0x44, virtual false, abstract: false, final false
  inline void get_worldCenterOfMass_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_xDrive, addr 0x48f1374, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x48f13d4, size 0x44, virtual false, abstract: false, final false
  inline void get_xDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_yDrive, addr 0x48f14a0, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x48f1500, size 0x44, virtual false, abstract: false, final false
  inline void get_yDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_zDrive, addr 0x48f15cc, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x48f162c, size 0x44, virtual false, abstract: false, final false
  inline void get_zDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method set_anchorPosition, addr 0x48f0b80, size 0x54, virtual false, abstract: false, final false
  inline void set_anchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_anchorPosition_Injected, addr 0x48f0bd4, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorPosition_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_anchorRotation, addr 0x48f0dec, size 0x54, virtual false, abstract: false, final false
  inline void set_anchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_anchorRotation_Injected, addr 0x48f0e40, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_angularDamping, addr 0x48f18bc, size 0x4c, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method set_angularVelocity, addr 0x48f2304, size 0x54, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x48f2358, size 0x44, virtual false, abstract: false, final false
  inline void set_angularVelocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x48f2460, size 0x44, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x48f26b8, size 0x44, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_centerOfMass, addr 0x48f2544, size 0x54, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x48f2598, size 0x44, virtual false, abstract: false, final false
  inline void set_centerOfMass_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_collisionDetectionMode, addr 0x48f3fc4, size 0x44, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_computeParentAnchor, addr 0x48f4340, size 0x44, virtual false, abstract: false, final false
  inline void set_computeParentAnchor(bool value);

  /// @brief Method set_excludeLayers, addr 0x48f1a20, size 0x48, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x48f1a68, size 0x44, virtual false, abstract: false, final false
  inline void set_excludeLayers_Injected(::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_immovable, addr 0x48f1734, size 0x44, virtual false, abstract: false, final false
  inline void set_immovable(bool value);

  /// @brief Method set_includeLayers, addr 0x48f1b3c, size 0x48, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x48f1b84, size 0x44, virtual false, abstract: false, final false
  inline void set_includeLayers_Injected(::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_inertiaTensor, addr 0x48f279c, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x48f28d0, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x48f2924, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x48f27f0, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensor_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_jointAcceleration, addr 0x48f318c, size 0x50, virtual false, abstract: false, final false
  inline void set_jointAcceleration(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointAcceleration_Injected, addr 0x48f31dc, size 0x44, virtual false, abstract: false, final false
  inline void set_jointAcceleration_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointForce, addr 0x48f32d8, size 0x50, virtual false, abstract: false, final false
  inline void set_jointForce(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointForce_Injected, addr 0x48f3328, size 0x44, virtual false, abstract: false, final false
  inline void set_jointForce_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointFriction, addr 0x48f1944, size 0x4c, virtual false, abstract: false, final false
  inline void set_jointFriction(float_t value);

  /// @brief Method set_jointPosition, addr 0x48f2ef4, size 0x50, virtual false, abstract: false, final false
  inline void set_jointPosition(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointPosition_Injected, addr 0x48f2f44, size 0x44, virtual false, abstract: false, final false
  inline void set_jointPosition_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointType, addr 0x48f0a9c, size 0x44, virtual false, abstract: false, final false
  inline void set_jointType(::UnityEngine::ArticulationJointType value);

  /// @brief Method set_jointVelocity, addr 0x48f3040, size 0x50, virtual false, abstract: false, final false
  inline void set_jointVelocity(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointVelocity_Injected, addr 0x48f3090, size 0x44, virtual false, abstract: false, final false
  inline void set_jointVelocity_Injected(::ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_linearDamping, addr 0x48f1834, size 0x4c, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method set_linearLockX, addr 0x48f10b0, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockX(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockY, addr 0x48f1130, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockY(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockZ, addr 0x48f11b0, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockZ(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_mass, addr 0x48f23d8, size 0x4c, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_matchAnchors, addr 0x48f1030, size 0x44, virtual false, abstract: false, final false
  inline void set_matchAnchors(bool value);

  /// @brief Method set_maxAngularVelocity, addr 0x48f2c58, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x48f2df0, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxJointVelocity, addr 0x48f2d68, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxJointVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x48f2ce0, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_parentAnchorPosition, addr 0x48f0cb8, size 0x54, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_parentAnchorPosition_Injected, addr 0x48f0d0c, size 0x44, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_parentAnchorRotation, addr 0x48f0f20, size 0x54, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_parentAnchorRotation_Injected, addr 0x48f0f74, size 0x44, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_sleepThreshold, addr 0x48f2ad0, size 0x4c, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_solverIterations, addr 0x48f2b58, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x48f2bd8, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_swingYLock, addr 0x48f1230, size 0x44, virtual false, abstract: false, final false
  inline void set_swingYLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingZLock, addr 0x48f12b0, size 0x44, virtual false, abstract: false, final false
  inline void set_swingZLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_twistLock, addr 0x48f1330, size 0x44, virtual false, abstract: false, final false
  inline void set_twistLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_useGravity, addr 0x48f17b4, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_velocity, addr 0x48f21cc, size 0x54, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_velocity_Injected, addr 0x48f2220, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_xDrive, addr 0x48f1418, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x48f145c, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method set_yDrive, addr 0x48f1544, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x48f1588, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive_Injected(::ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method set_zDrive, addr 0x48f1670, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x48f16b4, size 0x44, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15742 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationBody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ArticulationBody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationBody*, "UnityEngine", "ArticulationBody");
