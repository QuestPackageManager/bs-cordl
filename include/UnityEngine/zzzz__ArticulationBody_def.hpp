#pragma once
// IWYU pragma private; include "UnityEngine/ArticulationBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
MARK_REF_T(::UnityEngine::ArticulationBody*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ArticulationBody*, "UnityEngine", "ArticulationBody");
// [NativeHeader("Modules/Physics/ArticulationBody.h")]
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeClass("Physics::ArticulationBody")]
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

  /// @brief [Obsolete("computeParentAnchor has been renamed to matchAnchors (UnityUpgradable) -> matchAnchors")]
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

  /// [Obsolete("Please use ArticulationBody.linearVelocity instead. (UnityUpgradable) -> linearVelocity")]
  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  __declspec(property(get = get_velocity, put = set_velocity)) ::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_worldCenterOfMass)) ::UnityEngine::Vector3 worldCenterOfMass;

  __declspec(property(get = get_worldInertiaTensorMatrix)) ::UnityEngine::Matrix4x4 worldInertiaTensorMatrix;

  __declspec(property(get = get_xDrive, put = set_xDrive)) ::UnityEngine::ArticulationDrive xDrive;

  __declspec(property(get = get_yDrive, put = set_yDrive)) ::UnityEngine::ArticulationDrive yDrive;

  __declspec(property(get = get_zDrive, put = set_zDrive)) ::UnityEngine::ArticulationDrive zDrive;

  /// [ExcludeFromDocs]
  /// @brief Method AddForce, addr 0x701d9bc, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x701d8c0, size 0xa8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddForceAtPosition, addr 0x701dde0, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x701dcd0, size 0xb4, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x701dd84, size 0x5c, virtual false, abstract: false, final false
  static inline void AddForceAtPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> force, ::by_ref<::UnityEngine::Vector3 const> position,
                                                 /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x701d968, size 0x54, virtual false, abstract: false, final false
  static inline void AddForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeForce, addr 0x701dac0, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x701d9c4, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x701da6c, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeTorque, addr 0x701dcc8, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x701dbcc, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x701dc74, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeTorque_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddTorque, addr 0x701dbc4, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x701dac8, size 0xa8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x701db70, size 0x54, virtual false, abstract: false, final false
  static inline void AddTorque_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method GetAccumulatedForce, addr 0x701d73c, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x701d638, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(/* [DefaultValue("Time.fixedDeltaTime")] */ float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x701d6e8, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedForce_Injected(::System::IntPtr _unity_self, /* [DefaultValue("Time.fixedDeltaTime")] */ float_t step, ::by_ref<::UnityEngine::Vector3> ret);

  /// [ExcludeFromDocs]
  /// @brief Method GetAccumulatedTorque, addr 0x701d880, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x701d77c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(/* [DefaultValue("Time.fixedDeltaTime")] */ float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x701d82c, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedTorque_Injected(::System::IntPtr _unity_self, /* [DefaultValue("Time.fixedDeltaTime")] */ float_t step, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetClosestPoint, addr 0x70208a4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetClosestPoint(::UnityEngine::Vector3 point);

  /// @brief Method GetClosestPoint_Injected, addr 0x7020950, size 0x54, virtual false, abstract: false, final false
  static inline void GetClosestPoint_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> point, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetDenseJacobian, addr 0x7020c78, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian(::by_ref<::UnityEngine::ArticulationJacobian> jacobian);

  /// [NativeMethod("GetDenseJacobian")]
  /// @brief Method GetDenseJacobian_Internal, addr 0x7020ba4, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetDenseJacobian_Internal(::by_ref<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDenseJacobian_Internal_Injected, addr 0x7020c34, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDenseJacobian_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationJacobian> jacobian);

  /// @brief Method GetDofStartIndices, addr 0x7022e68, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetDofStartIndices(::System::Collections::Generic::List_1<int32_t>* dofStartIndices);

  /// @brief Method GetDofStartIndices_Injected, addr 0x702304c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDofStartIndices_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> dofStartIndices);

  /// @brief Method GetDriveForces, addr 0x7021d2c, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetDriveForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetDriveForces_Injected, addr 0x7021f10, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDriveForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method GetDriveTargetVelocities, addr 0x7022a28, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method GetDriveTargetVelocities_Injected, addr 0x7022c0c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDriveTargetVelocities_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> targetVelocities);

  /// @brief Method GetDriveTargets, addr 0x70225e8, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method GetDriveTargets_Injected, addr 0x70227cc, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetDriveTargets_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> targets);

  /// @brief Method GetJointAccelerations, addr 0x7021588, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method GetJointAccelerations_Injected, addr 0x702176c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointAccelerations_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> accelerations);

  /// @brief Method GetJointCoriolisCentrifugalForces, addr 0x702217c, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointCoriolisCentrifugalForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointCoriolisCentrifugalForces_Injected, addr 0x7022360, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointCoriolisCentrifugalForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method GetJointExternalForces, addr 0x70223a4, size 0x1f0, virtual false, abstract: false, final false
  inline int32_t GetJointExternalForces(::System::Collections::Generic::List_1<float_t>* forces, float_t step);

  /// @brief Method GetJointExternalForces_Injected, addr 0x7022594, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetJointExternalForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces, float_t step);

  /// @brief Method GetJointForces, addr 0x70217b0, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointForcesForAcceleration, addr 0x7021bf0, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace GetJointForcesForAcceleration(::UnityEngine::ArticulationReducedSpace acceleration);

  /// @brief Method GetJointForcesForAcceleration_Injected, addr 0x7021cd8, size 0x54, virtual false, abstract: false, final false
  static inline void GetJointForcesForAcceleration_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace const> acceleration,
                                                            ::by_ref<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method GetJointForces_Injected, addr 0x7021994, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method GetJointGravityForces, addr 0x7021f54, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointGravityForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method GetJointGravityForces_Injected, addr 0x7022138, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointGravityForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method GetJointPositions, addr 0x7020d08, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method GetJointPositions_Injected, addr 0x7020eec, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointPositions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> positions);

  /// @brief Method GetJointVelocities, addr 0x7021148, size 0x1e4, virtual false, abstract: false, final false
  inline int32_t GetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method GetJointVelocities_Injected, addr 0x702132c, size 0x44, virtual false, abstract: false, final false
  static inline int32_t GetJointVelocities_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> velocities);

  /// @brief Method GetPointVelocity, addr 0x7020aa4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x7020b50, size 0x54, virtual false, abstract: false, final false
  static inline void GetPointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> worldPoint, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x70209a4, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x7020a50, size 0x54, virtual false, abstract: false, final false
  static inline void GetRelativePointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> relativePoint, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method IsSleeping, addr 0x701ef70, size 0x80, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method IsSleeping_Injected, addr 0x701eff0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSleeping_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::ArticulationBody* New_ctor();

  /// @brief Method PublishTransform, addr 0x70237e8, size 0x80, virtual false, abstract: false, final false
  inline void PublishTransform();

  /// @brief Method PublishTransform_Injected, addr 0x7023868, size 0x3c, virtual false, abstract: false, final false
  static inline void PublishTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetCenterOfMass, addr 0x701ed3c, size 0x80, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetCenterOfMass_Injected, addr 0x701edbc, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetInertiaTensor, addr 0x701edf8, size 0x80, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method ResetInertiaTensor_Injected, addr 0x701ee78, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetDriveDamping, addr 0x7023470, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveDamping(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveDamping_Injected, addr 0x7023510, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveDamping_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveForceLimit, addr 0x7023564, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveForceLimit(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveForceLimit_Injected, addr 0x7023604, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveForceLimit_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveLimits, addr 0x7023278, size 0xa8, virtual false, abstract: false, final false
  inline void SetDriveLimits(::UnityEngine::ArticulationDriveAxis axis, float_t lower, float_t upper);

  /// @brief Method SetDriveLimits_Injected, addr 0x7023320, size 0x5c, virtual false, abstract: false, final false
  static inline void SetDriveLimits_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t lower, float_t upper);

  /// @brief Method SetDriveStiffness, addr 0x702337c, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveStiffness(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveStiffness_Injected, addr 0x702341c, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveStiffness_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTarget, addr 0x7023090, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveTarget(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargetVelocities, addr 0x7022c50, size 0x1d4, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocities(::System::Collections::Generic::List_1<float_t>* targetVelocities);

  /// @brief Method SetDriveTargetVelocities_Injected, addr 0x7022e24, size 0x44, virtual false, abstract: false, final false
  static inline void SetDriveTargetVelocities_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> targetVelocities);

  /// @brief Method SetDriveTargetVelocity, addr 0x7023184, size 0xa0, virtual false, abstract: false, final false
  inline void SetDriveTargetVelocity(::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargetVelocity_Injected, addr 0x7023224, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveTargetVelocity_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTarget_Injected, addr 0x7023130, size 0x54, virtual false, abstract: false, final false
  static inline void SetDriveTarget_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDriveAxis axis, float_t value);

  /// @brief Method SetDriveTargets, addr 0x7022810, size 0x1d4, virtual false, abstract: false, final false
  inline void SetDriveTargets(::System::Collections::Generic::List_1<float_t>* targets);

  /// @brief Method SetDriveTargets_Injected, addr 0x70229e4, size 0x44, virtual false, abstract: false, final false
  static inline void SetDriveTargets_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> targets);

  /// [Obsolete("Setting joint accelerations is not supported in forward kinematics. To have inverse dynamics take acceleration into account, use GetJointForcesForAcceleration instead", true)]
  /// @brief Method SetJointAccelerations, addr 0x7023bb8, size 0x1d4, virtual false, abstract: false, final false
  inline void SetJointAccelerations(::System::Collections::Generic::List_1<float_t>* accelerations);

  /// @brief Method SetJointAccelerations_Injected, addr 0x7023d8c, size 0x44, virtual false, abstract: false, final false
  static inline void SetJointAccelerations_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> accelerations);

  /// @brief Method SetJointForces, addr 0x70219d8, size 0x1d4, virtual false, abstract: false, final false
  inline void SetJointForces(::System::Collections::Generic::List_1<float_t>* forces);

  /// @brief Method SetJointForces_Injected, addr 0x7021bac, size 0x44, virtual false, abstract: false, final false
  static inline void SetJointForces_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> forces);

  /// @brief Method SetJointPositions, addr 0x7020f30, size 0x1d4, virtual false, abstract: false, final false
  inline void SetJointPositions(::System::Collections::Generic::List_1<float_t>* positions);

  /// @brief Method SetJointPositions_Injected, addr 0x7021104, size 0x44, virtual false, abstract: false, final false
  static inline void SetJointPositions_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> positions);

  /// @brief Method SetJointVelocities, addr 0x7021370, size 0x1d4, virtual false, abstract: false, final false
  inline void SetJointVelocities(::System::Collections::Generic::List_1<float_t>* velocities);

  /// @brief Method SetJointVelocities_Injected, addr 0x7021544, size 0x44, virtual false, abstract: false, final false
  static inline void SetJointVelocities_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableListWrapper> velocities);

  /// @brief Method Sleep, addr 0x701eeb4, size 0x80, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method Sleep_Injected, addr 0x701ef34, size 0x3c, virtual false, abstract: false, final false
  static inline void Sleep_Injected(::System::IntPtr _unity_self);

  /// @brief Method SnapAnchorToClosestContact, addr 0x70238a4, size 0x304, virtual false, abstract: false, final false
  inline void SnapAnchorToClosestContact();

  /// @brief Method TeleportRoot, addr 0x70207ac, size 0xa4, virtual false, abstract: false, final false
  inline void TeleportRoot(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method TeleportRoot_Injected, addr 0x7020850, size 0x54, virtual false, abstract: false, final false
  static inline void TeleportRoot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Quaternion const> rotation);

  /// @brief Method WakeUp, addr 0x701f02c, size 0x80, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method WakeUp_Injected, addr 0x701f0ac, size 0x3c, virtual false, abstract: false, final false
  static inline void WakeUp_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x7023dd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_anchorPosition, addr 0x701b2f8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_anchorPosition();

  /// @brief Method get_anchorPosition_Injected, addr 0x701b398, size 0x44, virtual false, abstract: false, final false
  static inline void get_anchorPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_anchorRotation, addr 0x701b678, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_anchorRotation();

  /// @brief Method get_anchorRotation_Injected, addr 0x701b714, size 0x44, virtual false, abstract: false, final false
  static inline void get_anchorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_angularDamping, addr 0x701cfa0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method get_angularDamping_Injected, addr 0x701d020, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_angularDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularVelocity, addr 0x701dfa8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x701e048, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x701e300, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticCenterOfMass_Injected, addr 0x701e380, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticInertiaTensor, addr 0x701e734, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_automaticInertiaTensor_Injected, addr 0x701e7b4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_centerOfMass, addr 0x701e490, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x701e530, size 0x44, virtual false, abstract: false, final false
  static inline void get_centerOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x7023658, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_collisionDetectionMode_Injected, addr 0x70236d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_computeParentAnchor, addr 0x7023bb0, size 0x4, virtual false, abstract: false, final false
  inline bool get_computeParentAnchor();

  /// @brief Method get_dofCount, addr 0x7020634, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_dofCount();

  /// @brief Method get_dofCount_Injected, addr 0x70206b4, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_dofCount_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_driveForce, addr 0x7020510, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_driveForce();

  /// @brief Method get_driveForce_Injected, addr 0x70205f0, size 0x44, virtual false, abstract: false, final false
  static inline void get_driveForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_excludeLayers, addr 0x701d2d0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x701d368, size 0x44, virtual false, abstract: false, final false
  static inline void get_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret);

  /// @brief Method get_immovable, addr 0x701cae8, size 0x80, virtual false, abstract: false, final false
  inline bool get_immovable();

  /// @brief Method get_immovable_Injected, addr 0x701cb68, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_immovable_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_includeLayers, addr 0x701d484, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x701d51c, size 0x44, virtual false, abstract: false, final false
  static inline void get_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret);

  /// [NativeMethod("GetBodyIndex")]
  /// @brief Method get_index, addr 0x70206f0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_index_Injected, addr 0x7020770, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_index_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_inertiaTensor, addr 0x701e8c4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x701eb80, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x701ec1c, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x701e964, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_isRoot, addr 0x701b9f0, size 0x80, virtual false, abstract: false, final false
  inline bool get_isRoot();

  /// @brief Method get_isRoot_Injected, addr 0x701ba70, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isRoot_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_jointAcceleration, addr 0x7020088, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointAcceleration();

  /// @brief Method get_jointAcceleration_Injected, addr 0x7020168, size 0x44, virtual false, abstract: false, final false
  static inline void get_jointAcceleration_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointForce, addr 0x70202cc, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointForce();

  /// @brief Method get_jointForce_Injected, addr 0x70203ac, size 0x44, virtual false, abstract: false, final false
  static inline void get_jointForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointFriction, addr 0x701d138, size 0x80, virtual false, abstract: false, final false
  inline float_t get_jointFriction();

  /// @brief Method get_jointFriction_Injected, addr 0x701d1b8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_jointFriction_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_jointPosition, addr 0x701fc00, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointPosition();

  /// @brief Method get_jointPosition_Injected, addr 0x701fce0, size 0x44, virtual false, abstract: false, final false
  static inline void get_jointPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_jointType, addr 0x701b168, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationJointType get_jointType();

  /// @brief Method get_jointType_Injected, addr 0x701b1e8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationJointType get_jointType_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_jointVelocity, addr 0x701fe44, size 0xe0, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationReducedSpace get_jointVelocity();

  /// @brief Method get_jointVelocity_Injected, addr 0x701ff24, size 0x44, virtual false, abstract: false, final false
  static inline void get_jointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace> ret);

  /// @brief Method get_linearDamping, addr 0x701ce08, size 0x80, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method get_linearDamping_Injected, addr 0x701ce88, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_linearDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearLockX, addr 0x701bc3c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockX();

  /// @brief Method get_linearLockX_Injected, addr 0x701bcbc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_linearLockX_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearLockY, addr 0x701bdcc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockY();

  /// @brief Method get_linearLockY_Injected, addr 0x701be4c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_linearLockY_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearLockZ, addr 0x701bf5c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_linearLockZ();

  /// @brief Method get_linearLockZ_Injected, addr 0x701bfdc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_linearLockZ_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearVelocity, addr 0x701dde8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_linearVelocity();

  /// @brief Method get_linearVelocity_Injected, addr 0x701de88, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_mass, addr 0x701e168, size 0x80, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_mass_Injected, addr 0x701e1e8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_mass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_matchAnchors, addr 0x701baac, size 0x80, virtual false, abstract: false, final false
  inline bool get_matchAnchors();

  /// @brief Method get_matchAnchors_Injected, addr 0x701bb2c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_matchAnchors_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxAngularVelocity, addr 0x701f5a0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxAngularVelocity_Injected, addr 0x701f620, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDepenetrationVelocity, addr 0x701fa68, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxDepenetrationVelocity_Injected, addr 0x701fae8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxJointVelocity, addr 0x701f8d0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxJointVelocity();

  /// @brief Method get_maxJointVelocity_Injected, addr 0x701f950, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxJointVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxLinearVelocity, addr 0x701f738, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_maxLinearVelocity_Injected, addr 0x701f7b8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxLinearVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_parentAnchorPosition, addr 0x701b4b8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_parentAnchorPosition();

  /// @brief Method get_parentAnchorPosition_Injected, addr 0x701b558, size 0x44, virtual false, abstract: false, final false
  static inline void get_parentAnchorPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_parentAnchorRotation, addr 0x701b834, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_parentAnchorRotation();

  /// @brief Method get_parentAnchorRotation_Injected, addr 0x701b8d0, size 0x44, virtual false, abstract: false, final false
  static inline void get_parentAnchorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepThreshold, addr 0x701f0e8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_sleepThreshold_Injected, addr 0x701f168, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverIterations, addr 0x701f280, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverIterations_Injected, addr 0x701f300, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverVelocityIterations, addr 0x701f410, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_solverVelocityIterations_Injected, addr 0x701f490, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_swingYLock, addr 0x701c0ec, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingYLock();

  /// @brief Method get_swingYLock_Injected, addr 0x701c16c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_swingYLock_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_swingZLock, addr 0x701c27c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_swingZLock();

  /// @brief Method get_swingZLock_Injected, addr 0x701c2fc, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_swingZLock_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_twistLock, addr 0x701c40c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDofLock get_twistLock();

  /// @brief Method get_twistLock_Injected, addr 0x701c48c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::ArticulationDofLock get_twistLock_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useGravity, addr 0x701cc78, size 0x80, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_useGravity_Injected, addr 0x701ccf8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useGravity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x7023ba8, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_worldCenterOfMass, addr 0x701e650, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x701e6f0, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldCenterOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldInertiaTensorMatrix, addr 0x701ea84, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldInertiaTensorMatrix();

  /// @brief Method get_worldInertiaTensorMatrix_Injected, addr 0x701eb3c, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldInertiaTensorMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method get_xDrive, addr 0x701c59c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_xDrive();

  /// @brief Method get_xDrive_Injected, addr 0x701c648, size 0x44, virtual false, abstract: false, final false
  static inline void get_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_yDrive, addr 0x701c760, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_yDrive();

  /// @brief Method get_yDrive_Injected, addr 0x701c80c, size 0x44, virtual false, abstract: false, final false
  static inline void get_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method get_zDrive, addr 0x701c924, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::ArticulationDrive get_zDrive();

  /// @brief Method get_zDrive_Injected, addr 0x701c9d0, size 0x44, virtual false, abstract: false, final false
  static inline void get_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive> ret);

  /// @brief Method set_anchorPosition, addr 0x701b3dc, size 0x98, virtual false, abstract: false, final false
  inline void set_anchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_anchorPosition_Injected, addr 0x701b474, size 0x44, virtual false, abstract: false, final false
  static inline void set_anchorPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_anchorRotation, addr 0x701b758, size 0x98, virtual false, abstract: false, final false
  inline void set_anchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_anchorRotation_Injected, addr 0x701b7f0, size 0x44, virtual false, abstract: false, final false
  static inline void set_anchorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> value);

  /// @brief Method set_angularDamping, addr 0x701d05c, size 0x90, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method set_angularDamping_Injected, addr 0x701d0ec, size 0x4c, virtual false, abstract: false, final false
  static inline void set_angularDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_angularVelocity, addr 0x701e08c, size 0x98, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x701e124, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x701e3bc, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticCenterOfMass_Injected, addr 0x701e44c, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticCenterOfMass_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x701e7f0, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_automaticInertiaTensor_Injected, addr 0x701e880, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticInertiaTensor_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_centerOfMass, addr 0x701e574, size 0x98, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x701e60c, size 0x44, virtual false, abstract: false, final false
  static inline void set_centerOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_collisionDetectionMode, addr 0x7023714, size 0x90, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_collisionDetectionMode_Injected, addr 0x70237a4, size 0x44, virtual false, abstract: false, final false
  static inline void set_collisionDetectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_computeParentAnchor, addr 0x7023bb4, size 0x4, virtual false, abstract: false, final false
  inline void set_computeParentAnchor(bool value);

  /// @brief Method set_excludeLayers, addr 0x701d3ac, size 0x94, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x701d440, size 0x44, virtual false, abstract: false, final false
  static inline void set_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask const> value);

  /// @brief Method set_immovable, addr 0x701cba4, size 0x90, virtual false, abstract: false, final false
  inline void set_immovable(bool value);

  /// @brief Method set_immovable_Injected, addr 0x701cc34, size 0x44, virtual false, abstract: false, final false
  static inline void set_immovable_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_includeLayers, addr 0x701d560, size 0x94, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x701d5f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask const> value);

  /// @brief Method set_inertiaTensor, addr 0x701e9a8, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x701ec60, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x701ecf8, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x701ea40, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// [Obsolete("Setting joint accelerations is not supported in forward kinematics. To have inverse dynamics take acceleration into account, use GetJointForcesForAcceleration instead", true)]
  /// @brief Method set_jointAcceleration, addr 0x70201ac, size 0xdc, virtual false, abstract: false, final false
  inline void set_jointAcceleration(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointAcceleration_Injected, addr 0x7020288, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointAcceleration_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace const> value);

  /// @brief Method set_jointForce, addr 0x70203f0, size 0xdc, virtual false, abstract: false, final false
  inline void set_jointForce(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointForce_Injected, addr 0x70204cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace const> value);

  /// @brief Method set_jointFriction, addr 0x701d1f4, size 0x90, virtual false, abstract: false, final false
  inline void set_jointFriction(float_t value);

  /// @brief Method set_jointFriction_Injected, addr 0x701d284, size 0x4c, virtual false, abstract: false, final false
  static inline void set_jointFriction_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_jointPosition, addr 0x701fd24, size 0xdc, virtual false, abstract: false, final false
  inline void set_jointPosition(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointPosition_Injected, addr 0x701fe00, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace const> value);

  /// @brief Method set_jointType, addr 0x701b224, size 0x90, virtual false, abstract: false, final false
  inline void set_jointType(::UnityEngine::ArticulationJointType value);

  /// @brief Method set_jointType_Injected, addr 0x701b2b4, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointType_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationJointType value);

  /// @brief Method set_jointVelocity, addr 0x701ff68, size 0xdc, virtual false, abstract: false, final false
  inline void set_jointVelocity(::UnityEngine::ArticulationReducedSpace value);

  /// @brief Method set_jointVelocity_Injected, addr 0x7020044, size 0x44, virtual false, abstract: false, final false
  static inline void set_jointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationReducedSpace const> value);

  /// @brief Method set_linearDamping, addr 0x701cec4, size 0x90, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method set_linearDamping_Injected, addr 0x701cf54, size 0x4c, virtual false, abstract: false, final false
  static inline void set_linearDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_linearLockX, addr 0x701bcf8, size 0x90, virtual false, abstract: false, final false
  inline void set_linearLockX(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockX_Injected, addr 0x701bd88, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLockX_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockY, addr 0x701be88, size 0x90, virtual false, abstract: false, final false
  inline void set_linearLockY(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockY_Injected, addr 0x701bf18, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLockY_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockZ, addr 0x701c018, size 0x90, virtual false, abstract: false, final false
  inline void set_linearLockZ(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearLockZ_Injected, addr 0x701c0a8, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearLockZ_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_linearVelocity, addr 0x701decc, size 0x98, virtual false, abstract: false, final false
  inline void set_linearVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_linearVelocity_Injected, addr 0x701df64, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_mass, addr 0x701e224, size 0x90, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_mass_Injected, addr 0x701e2b4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_mass_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_matchAnchors, addr 0x701bb68, size 0x90, virtual false, abstract: false, final false
  inline void set_matchAnchors(bool value);

  /// @brief Method set_matchAnchors_Injected, addr 0x701bbf8, size 0x44, virtual false, abstract: false, final false
  static inline void set_matchAnchors_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_maxAngularVelocity, addr 0x701f65c, size 0x90, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxAngularVelocity_Injected, addr 0x701f6ec, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x701fb24, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity_Injected, addr 0x701fbb4, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxJointVelocity, addr 0x701f98c, size 0x90, virtual false, abstract: false, final false
  inline void set_maxJointVelocity(float_t value);

  /// @brief Method set_maxJointVelocity_Injected, addr 0x701fa1c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxJointVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x701f7f4, size 0x90, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity_Injected, addr 0x701f884, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxLinearVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_parentAnchorPosition, addr 0x701b59c, size 0x98, virtual false, abstract: false, final false
  inline void set_parentAnchorPosition(::UnityEngine::Vector3 value);

  /// @brief Method set_parentAnchorPosition_Injected, addr 0x701b634, size 0x44, virtual false, abstract: false, final false
  static inline void set_parentAnchorPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_parentAnchorRotation, addr 0x701b914, size 0x98, virtual false, abstract: false, final false
  inline void set_parentAnchorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_parentAnchorRotation_Injected, addr 0x701b9ac, size 0x44, virtual false, abstract: false, final false
  static inline void set_parentAnchorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> value);

  /// @brief Method set_sleepThreshold, addr 0x701f1a4, size 0x90, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepThreshold_Injected, addr 0x701f234, size 0x4c, virtual false, abstract: false, final false
  static inline void set_sleepThreshold_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_solverIterations, addr 0x701f33c, size 0x90, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverIterations_Injected, addr 0x701f3cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x701f4cc, size 0x90, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_solverVelocityIterations_Injected, addr 0x701f55c, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverVelocityIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_swingYLock, addr 0x701c1a8, size 0x90, virtual false, abstract: false, final false
  inline void set_swingYLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingYLock_Injected, addr 0x701c238, size 0x44, virtual false, abstract: false, final false
  static inline void set_swingYLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingZLock, addr 0x701c338, size 0x90, virtual false, abstract: false, final false
  inline void set_swingZLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_swingZLock_Injected, addr 0x701c3c8, size 0x44, virtual false, abstract: false, final false
  static inline void set_swingZLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_twistLock, addr 0x701c4c8, size 0x90, virtual false, abstract: false, final false
  inline void set_twistLock(::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_twistLock_Injected, addr 0x701c558, size 0x44, virtual false, abstract: false, final false
  static inline void set_twistLock_Injected(::System::IntPtr _unity_self, ::UnityEngine::ArticulationDofLock value);

  /// @brief Method set_useGravity, addr 0x701cd34, size 0x90, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_useGravity_Injected, addr 0x701cdc4, size 0x44, virtual false, abstract: false, final false
  static inline void set_useGravity_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_velocity, addr 0x7023bac, size 0x4, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_xDrive, addr 0x701c68c, size 0x90, virtual false, abstract: false, final false
  inline void set_xDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_xDrive_Injected, addr 0x701c71c, size 0x44, virtual false, abstract: false, final false
  static inline void set_xDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive const> value);

  /// @brief Method set_yDrive, addr 0x701c850, size 0x90, virtual false, abstract: false, final false
  inline void set_yDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_yDrive_Injected, addr 0x701c8e0, size 0x44, virtual false, abstract: false, final false
  static inline void set_yDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive const> value);

  /// @brief Method set_zDrive, addr 0x701ca14, size 0x90, virtual false, abstract: false, final false
  inline void set_zDrive(::UnityEngine::ArticulationDrive value);

  /// @brief Method set_zDrive_Injected, addr 0x701caa4, size 0x44, virtual false, abstract: false, final false
  static inline void set_zDrive_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::ArticulationDrive const> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArticulationBody();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArticulationBody", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArticulationBody(ArticulationBody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArticulationBody", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArticulationBody(ArticulationBody const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19074 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ArticulationBody) == 0x18, "Size mismatch!");

} // namespace UnityEngine
