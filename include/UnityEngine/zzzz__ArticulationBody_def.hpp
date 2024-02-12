#pragma once
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8931))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13913))
// CS Name: ::UnityEngine::ArticulationBody*
class CORDL_TYPE ArticulationBody : public ::UnityEngine::Behaviour {
public:
  // Declarations
  __declspec(property(get = get_jointType, put = set_jointType))::UnityEngine::ArticulationJointType jointType;

  __declspec(property(get = get_anchorPosition, put = set_anchorPosition))::UnityEngine::Vector3 anchorPosition;

  __declspec(property(get = get_parentAnchorPosition, put = set_parentAnchorPosition))::UnityEngine::Vector3 parentAnchorPosition;

  __declspec(property(get = get_anchorRotation, put = set_anchorRotation))::UnityEngine::Quaternion anchorRotation;

  __declspec(property(get = get_parentAnchorRotation, put = set_parentAnchorRotation))::UnityEngine::Quaternion parentAnchorRotation;

  __declspec(property(get = get_isRoot)) bool isRoot;

  __declspec(property(get = get_computeParentAnchor, put = set_computeParentAnchor)) bool computeParentAnchor;

  __declspec(property(get = get_matchAnchors, put = set_matchAnchors)) bool matchAnchors;

  __declspec(property(get = get_linearLockX, put = set_linearLockX))::UnityEngine::ArticulationDofLock linearLockX;

  __declspec(property(get = get_linearLockY, put = set_linearLockY))::UnityEngine::ArticulationDofLock linearLockY;

  __declspec(property(get = get_linearLockZ, put = set_linearLockZ))::UnityEngine::ArticulationDofLock linearLockZ;

  __declspec(property(get = get_swingYLock, put = set_swingYLock))::UnityEngine::ArticulationDofLock swingYLock;

  __declspec(property(get = get_swingZLock, put = set_swingZLock))::UnityEngine::ArticulationDofLock swingZLock;

  __declspec(property(get = get_twistLock, put = set_twistLock))::UnityEngine::ArticulationDofLock twistLock;

  __declspec(property(get = get_xDrive, put = set_xDrive))::UnityEngine::ArticulationDrive xDrive;

  __declspec(property(get = get_yDrive, put = set_yDrive))::UnityEngine::ArticulationDrive yDrive;

  __declspec(property(get = get_zDrive, put = set_zDrive))::UnityEngine::ArticulationDrive zDrive;

  __declspec(property(get = get_immovable, put = set_immovable)) bool immovable;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  __declspec(property(get = get_linearDamping, put = set_linearDamping)) float_t linearDamping;

  __declspec(property(get = get_angularDamping, put = set_angularDamping)) float_t angularDamping;

  __declspec(property(get = get_jointFriction, put = set_jointFriction)) float_t jointFriction;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_mass, put = set_mass)) float_t mass;

  __declspec(property(get = get_centerOfMass, put = set_centerOfMass))::UnityEngine::Vector3 centerOfMass;

  __declspec(property(get = get_worldCenterOfMass))::UnityEngine::Vector3 worldCenterOfMass;

  __declspec(property(get = get_inertiaTensor, put = set_inertiaTensor))::UnityEngine::Vector3 inertiaTensor;

  __declspec(property(get = get_inertiaTensorRotation, put = set_inertiaTensorRotation))::UnityEngine::Quaternion inertiaTensorRotation;

  __declspec(property(get = get_sleepThreshold, put = set_sleepThreshold)) float_t sleepThreshold;

  __declspec(property(get = get_solverIterations, put = set_solverIterations)) int32_t solverIterations;

  __declspec(property(get = get_solverVelocityIterations, put = set_solverVelocityIterations)) int32_t solverVelocityIterations;

  __declspec(property(get = get_maxAngularVelocity, put = set_maxAngularVelocity)) float_t maxAngularVelocity;

  __declspec(property(get = get_maxLinearVelocity, put = set_maxLinearVelocity)) float_t maxLinearVelocity;

  __declspec(property(get = get_maxJointVelocity, put = set_maxJointVelocity)) float_t maxJointVelocity;

  __declspec(property(get = get_maxDepenetrationVelocity, put = set_maxDepenetrationVelocity)) float_t maxDepenetrationVelocity;

  __declspec(property(get = get_jointPosition, put = set_jointPosition))::UnityEngine::ArticulationReducedSpace jointPosition;

  __declspec(property(get = get_jointVelocity, put = set_jointVelocity))::UnityEngine::ArticulationReducedSpace jointVelocity;

  __declspec(property(get = get_jointAcceleration, put = set_jointAcceleration))::UnityEngine::ArticulationReducedSpace jointAcceleration;

  __declspec(property(get = get_jointForce, put = set_jointForce))::UnityEngine::ArticulationReducedSpace jointForce;

  __declspec(property(get = get_dofCount)) int32_t dofCount;

  __declspec(property(get = get_index)) int32_t index;

  __declspec(property(get = get_collisionDetectionMode, put = set_collisionDetectionMode))::UnityEngine::CollisionDetectionMode collisionDetectionMode;

  /// @brief Method get_jointType, addr 0x2d2a42c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationJointType get_jointType();

  /// @brief Method set_jointType, addr 0x2d2a468, size 0x44, virtual false, abstract: false, final false
  inline void set_jointType(::UnityEngine::ArticulationJointType value);

  /// @brief Method get_anchorPosition, addr 0x2d2a4ac, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchorPosition();

  /// @brief Method set_anchorPosition, addr 0x2d2a54c, size 0x54, virtual false, abstract: false, final false
  inline void set_anchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_parentAnchorPosition, addr 0x2d2a5e4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_parentAnchorPosition();

  /// @brief Method set_parentAnchorPosition, addr 0x2d2a684, size 0x54, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_anchorRotation, addr 0x2d2a71c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_anchorRotation();

  /// @brief Method set_anchorRotation, addr 0x2d2a7b8, size 0x54, virtual false, abstract: false, final false
  inline void set_anchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_parentAnchorRotation, addr 0x2d2a850, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_parentAnchorRotation();

  /// @brief Method set_parentAnchorRotation, addr 0x2d2a8ec, size 0x54, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_isRoot, addr 0x2d2a984, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isRoot();

  /// @brief Method get_computeParentAnchor, addr 0x2d2a9c0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_computeParentAnchor();

  /// @brief Method set_computeParentAnchor, addr 0x2d2aa38, size 0x44, virtual false, abstract: false, final false
  inline void set_computeParentAnchor(bool value);

  /// @brief Method get_matchAnchors, addr 0x2d2a9fc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_matchAnchors();

  /// @brief Method set_matchAnchors, addr 0x2d2aa7c, size 0x44, virtual false, abstract: false, final false
  inline void set_matchAnchors(bool value);

  /// @brief Method get_linearLockX, addr 0x2d2aac0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockX();

  /// @brief Method set_linearLockX, addr 0x2d2aafc, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockX(::UnityEngine::ArticulationDofLock value);

  /// @brief Method get_linearLockY, addr 0x2d2ab40, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockY();

  /// @brief Method set_linearLockY, addr 0x2d2ab7c, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockY(::UnityEngine::ArticulationDofLock value);

  /// @brief Method get_linearLockZ, addr 0x2d2abc0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockZ();

  /// @brief Method set_linearLockZ, addr 0x2d2abfc, size 0x44, virtual false, abstract: false, final false
  inline void set_linearLockZ(::UnityEngine::ArticulationDofLock value);

  /// @brief Method get_swingYLock, addr 0x2d2ac40, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingYLock();

  /// @brief Method set_swingYLock, addr 0x2d2ac7c, size 0x44, virtual false, abstract: false, final false
  inline void set_swingYLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method get_swingZLock, addr 0x2d2acc0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingZLock();

  /// @brief Method set_swingZLock, addr 0x2d2acfc, size 0x44, virtual false, abstract: false, final false
  inline void set_swingZLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method get_twistLock, addr 0x2d2ad40, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_twistLock();

  /// @brief Method set_twistLock, addr 0x2d2ad7c, size 0x44, virtual false, abstract: false, final false
  inline void set_twistLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method get_xDrive, addr 0x2d2adc0, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_xDrive();

  /// @brief Method set_xDrive, addr 0x2d2ae70, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method get_yDrive, addr 0x2d2aef8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_yDrive();

  /// @brief Method set_yDrive, addr 0x2d2afa8, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method get_zDrive, addr 0x2d2b030, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_zDrive();

  /// @brief Method set_zDrive, addr 0x2d2b0e0, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method get_immovable, addr 0x2d2b168, size 0x3c, virtual false, abstract: false, final false
  inline bool get_immovable();

  /// @brief Method set_immovable, addr 0x2d2b1a4, size 0x44, virtual false, abstract: false, final false
  inline void set_immovable(bool value);

  /// @brief Method get_useGravity, addr 0x2d2b1e8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method set_useGravity, addr 0x2d2b224, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method get_linearDamping, addr 0x2d2b268, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method set_linearDamping, addr 0x2d2b2a4, size 0x4c, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method get_angularDamping, addr 0x2d2b2f0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method set_angularDamping, addr 0x2d2b32c, size 0x4c, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method get_jointFriction, addr 0x2d2b378, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_jointFriction();

  /// @brief Method set_jointFriction, addr 0x2d2b3b4, size 0x4c, virtual false, abstract: false, final false
  inline void set_jointFriction(float_t value);

  /// @brief Method AddForce, addr 0x2d2b400, size 0x5c, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x2d2b4b0, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x2d2b4b8, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x2d2b568, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddTorque, addr 0x2d2b570, size 0x5c, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x2d2b620, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x2d2b628, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x2d2b6d8, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddForceAtPosition, addr 0x2d2b6e0, size 0x68, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x2d2b7a4, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method get_velocity, addr 0x2d2b7ac, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method set_velocity, addr 0x2d2b84c, size 0x54, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method get_angularVelocity, addr 0x2d2b8e4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method set_angularVelocity, addr 0x2d2b984, size 0x54, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method get_mass, addr 0x2d2ba1c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method set_mass, addr 0x2d2ba58, size 0x4c, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method get_centerOfMass, addr 0x2d2baa4, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method set_centerOfMass, addr 0x2d2bb44, size 0x54, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method get_worldCenterOfMass, addr 0x2d2bbdc, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_inertiaTensor, addr 0x2d2bc7c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method set_inertiaTensor, addr 0x2d2bd1c, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method get_inertiaTensorRotation, addr 0x2d2bdb4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method set_inertiaTensorRotation, addr 0x2d2be50, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method ResetCenterOfMass, addr 0x2d2bee8, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetInertiaTensor, addr 0x2d2bf24, size 0x3c, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method Sleep, addr 0x2d2bf60, size 0x3c, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method IsSleeping, addr 0x2d2bf9c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method WakeUp, addr 0x2d2bfd8, size 0x3c, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method get_sleepThreshold, addr 0x2d2c014, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method set_sleepThreshold, addr 0x2d2c050, size 0x4c, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method get_solverIterations, addr 0x2d2c09c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method set_solverIterations, addr 0x2d2c0d8, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method get_solverVelocityIterations, addr 0x2d2c11c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method set_solverVelocityIterations, addr 0x2d2c158, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method get_maxAngularVelocity, addr 0x2d2c19c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method set_maxAngularVelocity, addr 0x2d2c1d8, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method get_maxLinearVelocity, addr 0x2d2c224, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method set_maxLinearVelocity, addr 0x2d2c260, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method get_maxJointVelocity, addr 0x2d2c2ac, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxJointVelocity();

  /// @brief Method set_maxJointVelocity, addr 0x2d2c2e8, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxJointVelocity(float_t value);

  /// @brief Method get_maxDepenetrationVelocity, addr 0x2d2c334, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method set_maxDepenetrationVelocity, addr 0x2d2c370, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method get_jointPosition, addr 0x2d2c3bc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointPosition();

  /// @brief Method set_jointPosition, addr 0x2d2c474, size 0x50, virtual false, abstract: false, final false
  inline void set_jointPosition(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method get_jointVelocity, addr 0x2d2c508, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointVelocity();

  /// @brief Method set_jointVelocity, addr 0x2d2c5c0, size 0x50, virtual false, abstract: false, final false
  inline void set_jointVelocity(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method get_jointAcceleration, addr 0x2d2c654, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointAcceleration();

  /// @brief Method set_jointAcceleration, addr 0x2d2c70c, size 0x50, virtual false, abstract: false, final false
  inline void set_jointAcceleration(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method get_jointForce, addr 0x2d2c7a0, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointForce();

  /// @brief Method set_jointForce, addr 0x2d2c858, size 0x50, virtual false, abstract: false, final false
  inline void set_jointForce(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method get_dofCount, addr 0x2d2c8ec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_dofCount();

  /// @brief Method get_index, addr 0x2d2c928, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method TeleportRoot, addr 0x2d2c964, size 0x60, virtual false, abstract: false, final false
  inline void TeleportRoot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method GetClosestPoint, addr 0x2d2ca18, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method GetRelativePointVelocity, addr 0x2d2cad4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetPointVelocity, addr 0x2d2cb90, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetDenseJacobian, addr 0x2d2cc4c, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian(ByRef<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetJointPositions, addr 0x2d2cc90, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method SetJointPositions, addr 0x2d2ccd4, size 0x44, virtual false, abstract: false, final false
  inline void SetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method GetJointVelocities, addr 0x2d2cd18, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method SetJointVelocities, addr 0x2d2cd5c, size 0x44, virtual false, abstract: false, final false
  inline void SetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method GetJointAccelerations, addr 0x2d2cda0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method SetJointAccelerations, addr 0x2d2cde4, size 0x44, virtual false, abstract: false, final false
  inline void SetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method GetJointForces, addr 0x2d2ce28, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method SetJointForces, addr 0x2d2ce6c, size 0x44, virtual false, abstract: false, final false
  inline void SetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetDriveTargets, addr 0x2d2ceb0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method SetDriveTargets, addr 0x2d2cef4, size 0x44, virtual false, abstract: false, final false
  inline void SetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method GetDriveTargetVelocities, addr 0x2d2cf38, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method SetDriveTargetVelocities, addr 0x2d2cf7c, size 0x44, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method GetDofStartIndices, addr 0x2d2cfc0, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetDofStartIndices(::System::Collections::Generic::List_1<int32_t>* dofStartIndices);

  /// @brief Method get_collisionDetectionMode, addr 0x2d2d004, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method set_collisionDetectionMode, addr 0x2d2d040, size 0x44, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method SnapAnchorToClosestContact, addr 0x2d2d084, size 0x2fc, virtual false, abstract: false, final false
  inline void SnapAnchorToClosestContact();

  static inline ::UnityEngine::ArticulationBody* New_ctor();

  /// @brief Method .ctor, addr 0x2d2d380, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorPosition_Injected, addr 0x2d2a508, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_anchorPosition_Injected, addr 0x2d2a5a0, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_parentAnchorPosition_Injected, addr 0x2d2a640, size 0x44, virtual false, abstract: false, final false
  inline void get_parentAnchorPosition_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_parentAnchorPosition_Injected, addr 0x2d2a6d8, size 0x44, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_anchorRotation_Injected, addr 0x2d2a774, size 0x44, virtual false, abstract: false, final false
  inline void get_anchorRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_anchorRotation_Injected, addr 0x2d2a80c, size 0x44, virtual false, abstract: false, final false
  inline void set_anchorRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method get_parentAnchorRotation_Injected, addr 0x2d2a8a8, size 0x44, virtual false, abstract: false, final false
  inline void get_parentAnchorRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_parentAnchorRotation_Injected, addr 0x2d2a940, size 0x44, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method get_xDrive_Injected, addr 0x2d2ae2c, size 0x44, virtual false, abstract: false, final false
  inline void get_xDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method set_xDrive_Injected, addr 0x2d2aeb4, size 0x44, virtual false, abstract: false, final false
  inline void set_xDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method get_yDrive_Injected, addr 0x2d2af64, size 0x44, virtual false, abstract: false, final false
  inline void get_yDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method set_yDrive_Injected, addr 0x2d2afec, size 0x44, virtual false, abstract: false, final false
  inline void set_yDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method get_zDrive_Injected, addr 0x2d2b09c, size 0x44, virtual false, abstract: false, final false
  inline void get_zDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method set_zDrive_Injected, addr 0x2d2b124, size 0x44, virtual false, abstract: false, final false
  inline void set_zDrive_Injected(ByRef<::UnityEngine::ArticulationDrive> value);

  /// @brief Method AddForce_Injected, addr 0x2d2b45c, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x2d2b514, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x2d2b5cc, size 0x54, virtual false, abstract: false, final false
  inline void AddTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x2d2b684, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x2d2b748, size 0x5c, virtual false, abstract: false, final false
  inline void AddForceAtPosition_Injected(ByRef<::UnityEngine::Vector3> force, ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method get_velocity_Injected, addr 0x2d2b808, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_velocity_Injected, addr 0x2d2b8a0, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_angularVelocity_Injected, addr 0x2d2b940, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_angularVelocity_Injected, addr 0x2d2b9d8, size 0x44, virtual false, abstract: false, final false
  inline void set_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_centerOfMass_Injected, addr 0x2d2bb00, size 0x44, virtual false, abstract: false, final false
  inline void get_centerOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_centerOfMass_Injected, addr 0x2d2bb98, size 0x44, virtual false, abstract: false, final false
  inline void set_centerOfMass_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x2d2bc38, size 0x44, virtual false, abstract: false, final false
  inline void get_worldCenterOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x2d2bcd8, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensor_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_inertiaTensor_Injected, addr 0x2d2bd70, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensor_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x2d2be0c, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensorRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x2d2bea4, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method get_jointPosition_Injected, addr 0x2d2c430, size 0x44, virtual false, abstract: false, final false
  inline void get_jointPosition_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method set_jointPosition_Injected, addr 0x2d2c4c4, size 0x44, virtual false, abstract: false, final false
  inline void set_jointPosition_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method get_jointVelocity_Injected, addr 0x2d2c57c, size 0x44, virtual false, abstract: false, final false
  inline void get_jointVelocity_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method set_jointVelocity_Injected, addr 0x2d2c610, size 0x44, virtual false, abstract: false, final false
  inline void set_jointVelocity_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method get_jointAcceleration_Injected, addr 0x2d2c6c8, size 0x44, virtual false, abstract: false, final false
  inline void get_jointAcceleration_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method set_jointAcceleration_Injected, addr 0x2d2c75c, size 0x44, virtual false, abstract: false, final false
  inline void set_jointAcceleration_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method get_jointForce_Injected, addr 0x2d2c814, size 0x44, virtual false, abstract: false, final false
  inline void get_jointForce_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method set_jointForce_Injected, addr 0x2d2c8a8, size 0x44, virtual false, abstract: false, final false
  inline void set_jointForce_Injected(ByRef<::UnityEngine::ArticulationReducedSpace> value);

  /// @brief Method TeleportRoot_Injected, addr 0x2d2c9c4, size 0x54, virtual false, abstract: false, final false
  inline void TeleportRoot_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);

  /// @brief Method GetClosestPoint_Injected, addr 0x2d2ca80, size 0x54, virtual false, abstract: false, final false
  inline void GetClosestPoint_Injected(ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x2d2cb3c, size 0x54, virtual false, abstract: false, final false
  inline void GetRelativePointVelocity_Injected(ByRef<::UnityEngine::Vector3> relativePoint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPointVelocity_Injected, addr 0x2d2cbf8, size 0x54, virtual false, abstract: false, final false
  inline void GetPointVelocity_Injected(ByRef<::UnityEngine::Vector3> worldPoint, ByRef<::UnityEngine::Vector3> ret);

  // Ctor Parameters [CppParam { name: "", ty: "ArticulationBody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArticulationBody(ArticulationBody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArticulationBody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArticulationBody(ArticulationBody const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationBody();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ArticulationBody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ArticulationBody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ArticulationBody*, "UnityEngine", "ArticulationBody");
