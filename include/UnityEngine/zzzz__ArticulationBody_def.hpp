#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationBody.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
// Type: UnityEngine::ArticulationBody
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ArticulationBody*
class CORDL_TYPE ArticulationBody : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_anchorPosition, put = set_anchorPosition))::UnityEngine::Vector3 anchorPosition;

  __declspec(property(get = get_anchorRotation, put = set_anchorRotation))::UnityEngine::Quaternion anchorRotation;

  __declspec(property(get = get_angularDamping, put = set_angularDamping)) float_t angularDamping;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_centerOfMass, put = set_centerOfMass))::UnityEngine::Vector3 centerOfMass;

  __declspec(property(get = get_collisionDetectionMode, put = set_collisionDetectionMode))::UnityEngine::CollisionDetectionMode collisionDetectionMode;

  __declspec(property(get = get_computeParentAnchor, put = set_computeParentAnchor)) bool computeParentAnchor;

  __declspec(property(get = get_dofCount)) int32_t dofCount;

  __declspec(property(get = get_immovable, put = set_immovable)) bool immovable;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_inertiaTensor, put = set_inertiaTensor))::UnityEngine::Vector3 inertiaTensor;

  __declspec(property(get = get_inertiaTensorRotation, put = set_inertiaTensorRotation))::UnityEngine::Quaternion inertiaTensorRotation;

  __declspec(property(get = get_isRoot)) bool isRoot;

  __declspec(property(get = get_jointAcceleration, put = set_jointAcceleration))::UnityEngine::ArticulationReducedSpace jointAcceleration;

  __declspec(property(get = get_jointForce, put = set_jointForce))::UnityEngine::ArticulationReducedSpace jointForce;

  __declspec(property(get = get_jointFriction, put = set_jointFriction)) float_t jointFriction;

  __declspec(property(get = get_jointPosition, put = set_jointPosition))::UnityEngine::ArticulationReducedSpace jointPosition;

  __declspec(property(get = get_jointType, put = set_jointType))::UnityEngine::ArticulationJointType jointType;

  __declspec(property(get = get_jointVelocity, put = set_jointVelocity))::UnityEngine::ArticulationReducedSpace jointVelocity;

  __declspec(property(get = get_linearDamping, put = set_linearDamping)) float_t linearDamping;

  __declspec(property(get = get_linearLockX, put = set_linearLockX))::UnityEngine::ArticulationDofLock linearLockX;

  __declspec(property(get = get_linearLockY, put = set_linearLockY))::UnityEngine::ArticulationDofLock linearLockY;

  __declspec(property(get = get_linearLockZ, put = set_linearLockZ))::UnityEngine::ArticulationDofLock linearLockZ;

  __declspec(property(get = get_mass, put = set_mass)) float_t mass;

  __declspec(property(get = get_matchAnchors, put = set_matchAnchors)) bool matchAnchors;

  __declspec(property(get = get_maxAngularVelocity, put = set_maxAngularVelocity)) float_t maxAngularVelocity;

  __declspec(property(get = get_maxDepenetrationVelocity, put = set_maxDepenetrationVelocity)) float_t maxDepenetrationVelocity;

  __declspec(property(get = get_maxJointVelocity, put = set_maxJointVelocity)) float_t maxJointVelocity;

  __declspec(property(get = get_maxLinearVelocity, put = set_maxLinearVelocity)) float_t maxLinearVelocity;

  __declspec(property(get = get_parentAnchorPosition, put = set_parentAnchorPosition))::UnityEngine::Vector3 parentAnchorPosition;

  __declspec(property(get = get_parentAnchorRotation, put = set_parentAnchorRotation))::UnityEngine::Quaternion parentAnchorRotation;

  __declspec(property(get = get_sleepThreshold, put = set_sleepThreshold)) float_t sleepThreshold;

  __declspec(property(get = get_solverIterations, put = set_solverIterations)) int32_t solverIterations;

  __declspec(property(get = get_solverVelocityIterations, put = set_solverVelocityIterations)) int32_t solverVelocityIterations;

  __declspec(property(get = get_swingYLock, put = set_swingYLock))::UnityEngine::ArticulationDofLock swingYLock;

  __declspec(property(get = get_swingZLock, put = set_swingZLock))::UnityEngine::ArticulationDofLock swingZLock;

  __declspec(property(get = get_twistLock, put = set_twistLock))::UnityEngine::ArticulationDofLock twistLock;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_worldCenterOfMass))::UnityEngine::Vector3 worldCenterOfMass;

  __declspec(property(get = get_xDrive, put = set_xDrive))::UnityEngine::ArticulationDrive xDrive;

  __declspec(property(get = get_yDrive, put = set_yDrive))::UnityEngine::ArticulationDrive yDrive;

  __declspec(property(get = get_zDrive, put = set_zDrive))::UnityEngine::ArticulationDrive zDrive;

  /// @brief Method AddForce, addr 0x348a4a8, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x348a3f8, size 0x5c, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x348a79c, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x348a6d8, size 0x68, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x348a740, size 0x5c, virtual false, abstract: false, final false
  inline void AddForceAtPosition_Injected(ByRef<::UnityEngine::Vector3> force, ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x348a454, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x348a560, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x348a4b0, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x348a50c, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x348a6d0, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x348a620, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x348a67c, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x348a618, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x348a568, size 0x5c, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x348a5c4, size 0x54, virtual false, abstract: false, final false
  inline void AddTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method GetClosestPoint, addr 0x348ba10, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method GetClosestPoint_Injected, addr 0x348ba78, size 0x54, virtual false, abstract: false, final false
  inline void GetClosestPoint_Injected(ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetDenseJacobian, addr 0x348bc44, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian(ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDofStartIndices, addr 0x348bfb8, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDofStartIndices(::System::Collections::Generic::List_1<int32_t>* dofStartIndices);

  /// @brief Method GetDriveTargetVelocities, addr 0x348bf30, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method GetDriveTargets, addr 0x348bea8, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method GetJointAccelerations, addr 0x348bd98, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method GetJointForces, addr 0x348be20, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointPositions, addr 0x348bc88, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method GetJointVelocities, addr 0x348bd10, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method GetPointVelocity, addr 0x348bb88, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x348bbf0, size 0x54, virtual false, abstract: false, final false
  inline void GetPointVelocity_Injected(ByRef<::UnityEngine::Vector3> worldPoint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x348bacc, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x348bb34, size 0x54, virtual false, abstract: false, final false
  inline void GetRelativePointVelocity_Injected(ByRef<::UnityEngine::Vector3> relativePoint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method IsSleeping, addr 0x348af94, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSleeping();

  static inline ::UnityEngine::ArticulationBody* New_ctor();

  /// @brief Method ResetCenterOfMass, addr 0x348aee0, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetInertiaTensor, addr 0x348af1c, size 0x3c, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method SetDriveTargetVelocities, addr 0x348bf74, size 0x44, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method SetDriveTargets, addr 0x348beec, size 0x44, virtual false, abstract: false, final false
  inline void SetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method SetJointAccelerations, addr 0x348bddc, size 0x44, virtual false, abstract: false, final false
  inline void SetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method SetJointForces, addr 0x348be64, size 0x44, virtual false, abstract: false, final false
  inline void SetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method SetJointPositions, addr 0x348bccc, size 0x44, virtual false, abstract: false, final false
  inline void SetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method SetJointVelocities, addr 0x348bd54, size 0x44, virtual false, abstract: false, final false
  inline void SetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method Sleep, addr 0x348af58, size 0x3c, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method SnapAnchorToClosestContact, addr 0x348c07c, size 0x2fc, virtual false, abstract: false, final false
  inline void SnapAnchorToClosestContact();

  /// @brief Method TeleportRoot, addr 0x348b95c, size 0x60, virtual false, abstract: false, final false
  inline void TeleportRoot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method TeleportRoot_Injected, addr 0x348b9bc, size 0x54, virtual false, abstract: false, final false
  inline void TeleportRoot_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method WakeUp, addr 0x348afd0, size 0x3c, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method .ctor, addr 0x348c378, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorPosition, addr 0x34894a4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchorPosition();

  /// @brief Method get_anchorPosition_Injected, addr 0x3489500, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_anchorRotation, addr 0x3489714, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_anchorRotation();

  /// @brief Method get_anchorRotation_Injected, addr 0x348976c, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_angularDamping, addr 0x348a2e8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method get_angularVelocity, addr 0x348a8dc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x348a938, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_centerOfMass, addr 0x348aa9c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x348aaf8, size 0x44, virtual false, abstract: false, final false
  inline void get_centerOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x348bffc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_computeParentAnchor, addr 0x34899b8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_computeParentAnchor();

  /// @brief Method get_dofCount, addr 0x348b8e4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_dofCount();

  /// @brief Method get_immovable, addr 0x348a160, size 0x3c, virtual false, abstract: false, final false
  inline bool get_immovable();

  /// @brief Method get_index, addr 0x348b920, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_inertiaTensor, addr 0x348ac74, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x348adac, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x348ae04, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensorRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x348acd0, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensor_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_isRoot, addr 0x348997c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isRoot();

  /// @brief Method get_jointAcceleration, addr 0x348b64c, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointAcceleration();

  /// @brief Method get_jointAcceleration_Injected, addr 0x348b6c0, size 0x44, virtual false, abstract: false, final false
  inline void get_jointAcceleration_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointForce, addr 0x348b798, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointForce();

  /// @brief Method get_jointForce_Injected, addr 0x348b80c, size 0x44, virtual false, abstract: false, final false
  inline void get_jointForce_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointFriction, addr 0x348a370, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_jointFriction();

  /// @brief Method get_jointPosition, addr 0x348b3b4, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointPosition();

  /// @brief Method get_jointPosition_Injected, addr 0x348b428, size 0x44, virtual false, abstract: false, final false
  inline void get_jointPosition_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointType, addr 0x3489424, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationJointType get_jointType();

  /// @brief Method get_jointVelocity, addr 0x348b500, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointVelocity();

  /// @brief Method get_jointVelocity_Injected, addr 0x348b574, size 0x44, virtual false, abstract: false, final false
  inline void get_jointVelocity_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_linearDamping, addr 0x348a260, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method get_linearLockX, addr 0x3489ab8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockX();

  /// @brief Method get_linearLockY, addr 0x3489b38, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockY();

  /// @brief Method get_linearLockZ, addr 0x3489bb8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockZ();

  /// @brief Method get_mass, addr 0x348aa14, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_matchAnchors, addr 0x34899f4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_matchAnchors();

  /// @brief Method get_maxAngularVelocity, addr 0x348b194, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxDepenetrationVelocity, addr 0x348b32c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxJointVelocity, addr 0x348b2a4, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxJointVelocity();

  /// @brief Method get_maxLinearVelocity, addr 0x348b21c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_parentAnchorPosition, addr 0x34895dc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_parentAnchorPosition();

  /// @brief Method get_parentAnchorPosition_Injected, addr 0x3489638, size 0x44, virtual false, abstract: false, final false
  inline void get_parentAnchorPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_parentAnchorRotation, addr 0x3489848, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_parentAnchorRotation();

  /// @brief Method get_parentAnchorRotation_Injected, addr 0x34898a0, size 0x44, virtual false, abstract: false, final false
  inline void get_parentAnchorRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepThreshold, addr 0x348b00c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_solverIterations, addr 0x348b094, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverVelocityIterations, addr 0x348b114, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_swingYLock, addr 0x3489c38, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingYLock();

  /// @brief Method get_swingZLock, addr 0x3489cb8, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingZLock();

  /// @brief Method get_twistLock, addr 0x3489d38, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_twistLock();

  /// @brief Method get_useGravity, addr 0x348a1e0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_velocity, addr 0x348a7a4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x348a800, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldCenterOfMass, addr 0x348abd4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x348ac30, size 0x44, virtual false, abstract: false, final false
  inline void get_worldCenterOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_xDrive, addr 0x3489db8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x3489e24, size 0x44, virtual false, abstract: false, final false
  inline void get_xDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_yDrive, addr 0x3489ef0, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x3489f5c, size 0x44, virtual false, abstract: false, final false
  inline void get_yDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_zDrive, addr 0x348a028, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x348a094, size 0x44, virtual false, abstract: false, final false
  inline void get_zDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method set_anchorPosition, addr 0x3489544, size 0x54, virtual false, abstract: false, final false
  inline void set_anchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_anchorPosition_Injected, addr 0x3489598, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_anchorRotation, addr 0x34897b0, size 0x54, virtual false, abstract: false, final false
  inline void set_anchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_anchorRotation_Injected, addr 0x3489804, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_angularDamping, addr 0x348a324, size 0x4c, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method set_angularVelocity, addr 0x348a97c, size 0x54, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x348a9d0, size 0x44, virtual false, abstract: false, final false
  inline void set_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_centerOfMass, addr 0x348ab3c, size 0x54, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x348ab90, size 0x44, virtual false, abstract: false, final false
  inline void set_centerOfMass_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_collisionDetectionMode, addr 0x348c038, size 0x44, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_computeParentAnchor, addr 0x3489a30, size 0x44, virtual false, abstract: false, final false
  inline void set_computeParentAnchor(bool value);

  /// @brief Method set_immovable, addr 0x348a19c, size 0x44, virtual false, abstract: false, final false
  inline void set_immovable(bool value);

  /// @brief Method set_inertiaTensor, addr 0x348ad14, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x348ae48, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x348ae9c, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x348ad68, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensor_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_jointAcceleration, addr 0x348b704, size 0x50, virtual false, abstract: false, final false
  inline void set_jointAcceleration(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointAcceleration_Injected, addr 0x348b754, size 0x44, virtual false, abstract: false, final false
  inline void set_jointAcceleration_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointForce, addr 0x348b850, size 0x50, virtual false, abstract: false, final false
  inline void set_jointForce(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointForce_Injected, addr 0x348b8a0, size 0x44, virtual false, abstract: false, final false
  inline void set_jointForce_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointFriction, addr 0x348a3ac, size 0x4c, virtual false, abstract: false, final false
  inline void set_jointFriction(float_t value);

  /// @brief Method set_jointPosition, addr 0x348b46c, size 0x50, virtual false, abstract: false, final false
  inline void set_jointPosition(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointPosition_Injected, addr 0x348b4bc, size 0x44, virtual false, abstract: false, final false
  inline void set_jointPosition_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_jointType, addr 0x3489460, size 0x44, virtual false, abstract: false, final false
  inline void set_jointType(::UnityEngine::ArticulationJointType value);

  /// @brief Method set_jointVelocity, addr 0x348b5b8, size 0x50, virtual false, abstract: false, final false
  inline void set_jointVelocity(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointVelocity_Injected, addr 0x348b608, size 0x44, virtual false, abstract: false, final false
  inline void set_jointVelocity_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method set_linearDamping, addr 0x348a29c, size 0x4c, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method set_linearLockX, addr 0x3489af4, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockX(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockY, addr 0x3489b74, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockY(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockZ, addr 0x3489bf4, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockZ(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_mass, addr 0x348aa50, size 0x4c, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_matchAnchors, addr 0x3489a74, size 0x44, virtual false, abstract: false, final false
  inline void set_matchAnchors(bool value);

  /// @brief Method set_maxAngularVelocity, addr 0x348b1d0, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x348b368, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxJointVelocity, addr 0x348b2e0, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxJointVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x348b258, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_parentAnchorPosition, addr 0x348967c, size 0x54, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_parentAnchorPosition_Injected, addr 0x34896d0, size 0x44, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_parentAnchorRotation, addr 0x34898e4, size 0x54, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_parentAnchorRotation_Injected, addr 0x3489938, size 0x44, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_sleepThreshold, addr 0x348b048, size 0x4c, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_solverIterations, addr 0x348b0d0, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x348b150, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_swingYLock, addr 0x3489c74, size 0x44, virtual false, abstract: false, final false
  inline void set_swingYLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingZLock, addr 0x3489cf4, size 0x44, virtual false, abstract: false, final false
  inline void set_swingZLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_twistLock, addr 0x3489d74, size 0x44, virtual false, abstract: false, final false
  inline void set_twistLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_useGravity, addr 0x348a21c, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_velocity, addr 0x348a844, size 0x54, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_velocity_Injected, addr 0x348a898, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_xDrive, addr 0x3489e68, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x3489eac, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method set_yDrive, addr 0x3489fa0, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x3489fe4, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method set_zDrive, addr 0x348a0d8, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x348a11c, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationBody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ArticulationBody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationBody*, "UnityEngine", "ArticulationBody");
