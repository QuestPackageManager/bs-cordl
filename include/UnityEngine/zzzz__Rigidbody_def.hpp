#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Rigidbody)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
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
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct RigidbodyConstraints;
}
namespace UnityEngine {
struct RigidbodyInterpolation;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Rigidbody;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rigidbody);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody
class CORDL_TYPE Rigidbody : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_angularDamping, put = set_angularDamping)) float_t angularDamping;

  __declspec(property(get = get_angularDrag, put = set_angularDrag)) float_t angularDrag;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity)) ::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_automaticCenterOfMass, put = set_automaticCenterOfMass)) bool automaticCenterOfMass;

  __declspec(property(get = get_automaticInertiaTensor, put = set_automaticInertiaTensor)) bool automaticInertiaTensor;

  __declspec(property(get = get_centerOfMass, put = set_centerOfMass)) ::UnityEngine::Vector3 centerOfMass;

  __declspec(property(get = get_collisionDetectionMode, put = set_collisionDetectionMode)) ::UnityEngine::CollisionDetectionMode collisionDetectionMode;

  __declspec(property(get = get_constraints, put = set_constraints)) ::UnityEngine::RigidbodyConstraints constraints;

  __declspec(property(get = get_detectCollisions, put = set_detectCollisions)) bool detectCollisions;

  __declspec(property(get = get_drag, put = set_drag)) float_t drag;

  __declspec(property(get = get_excludeLayers, put = set_excludeLayers)) ::UnityEngine::LayerMask excludeLayers;

  __declspec(property(get = get_freezeRotation, put = set_freezeRotation)) bool freezeRotation;

  __declspec(property(get = get_includeLayers, put = set_includeLayers)) ::UnityEngine::LayerMask includeLayers;

  __declspec(property(get = get_inertiaTensor, put = set_inertiaTensor)) ::UnityEngine::Vector3 inertiaTensor;

  __declspec(property(get = get_inertiaTensorRotation, put = set_inertiaTensorRotation)) ::UnityEngine::Quaternion inertiaTensorRotation;

  __declspec(property(get = get_interpolation, put = set_interpolation)) ::UnityEngine::RigidbodyInterpolation interpolation;

  __declspec(property(get = get_isKinematic, put = set_isKinematic)) bool isKinematic;

  __declspec(property(get = get_linearDamping, put = set_linearDamping)) float_t linearDamping;

  __declspec(property(get = get_linearVelocity, put = set_linearVelocity)) ::UnityEngine::Vector3 linearVelocity;

  __declspec(property(get = get_mass, put = set_mass)) float_t mass;

  __declspec(property(get = get_maxAngularVelocity, put = set_maxAngularVelocity)) float_t maxAngularVelocity;

  __declspec(property(get = get_maxDepenetrationVelocity, put = set_maxDepenetrationVelocity)) float_t maxDepenetrationVelocity;

  __declspec(property(get = get_maxLinearVelocity, put = set_maxLinearVelocity)) float_t maxLinearVelocity;

  __declspec(property(get = get_position, put = set_position)) ::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation)) ::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_sleepAngularVelocity, put = set_sleepAngularVelocity)) float_t sleepAngularVelocity;

  __declspec(property(get = get_sleepThreshold, put = set_sleepThreshold)) float_t sleepThreshold;

  __declspec(property(get = get_sleepVelocity, put = set_sleepVelocity)) float_t sleepVelocity;

  __declspec(property(get = get_solverIterationCount, put = set_solverIterationCount)) int32_t solverIterationCount;

  __declspec(property(get = get_solverIterations, put = set_solverIterations)) int32_t solverIterations;

  __declspec(property(get = get_solverVelocityIterationCount, put = set_solverVelocityIterationCount)) int32_t solverVelocityIterationCount;

  __declspec(property(get = get_solverVelocityIterations, put = set_solverVelocityIterations)) int32_t solverVelocityIterations;

  __declspec(property(get = get_useConeFriction, put = set_useConeFriction)) bool useConeFriction;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  __declspec(property(get = get_velocity, put = set_velocity)) ::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_worldCenterOfMass)) ::UnityEngine::Vector3 worldCenterOfMass;

  __declspec(property(get = get_worldInertiaTensorMatrix)) ::UnityEngine::Matrix4x4 worldInertiaTensorMatrix;

  /// @brief Method AddExplosionForce, addr 0x69d1a14, size 0xc, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius);

  /// @brief Method AddExplosionForce, addr 0x69d1a0c, size 0x8, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier);

  /// @brief Method AddExplosionForce, addr 0x69d18c0, size 0xd0, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier, ::UnityEngine::ForceMode mode);

  /// @brief Method AddExplosionForce_Injected, addr 0x69d1990, size 0x7c, virtual false, abstract: false, final false
  static inline void AddExplosionForce_Injected(::System::IntPtr _unity_self, float_t explosionForce, ::ByRef<::UnityEngine::Vector3> explosionPosition, float_t explosionRadius,
                                                float_t upwardsModifier, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x69d1464, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x69d1368, size 0xa8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x69d1470, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z);

  /// @brief Method AddForce, addr 0x69d146c, size 0x4, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x69d18b8, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x69d17a8, size 0xb4, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x69d185c, size 0x5c, virtual false, abstract: false, final false
  static inline void AddForceAtPosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> force, ::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x69d1410, size 0x54, virtual false, abstract: false, final false
  static inline void AddForce_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x69d1574, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x69d1478, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x69d1580, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeForce, addr 0x69d157c, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x69d1520, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeForce_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x69d1794, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x69d1698, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x69d17a0, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeTorque, addr 0x69d179c, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x69d1740, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeTorque_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x69d1684, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x69d1588, size 0xa8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x69d1690, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddTorque, addr 0x69d168c, size 0x4, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x69d1630, size 0x54, virtual false, abstract: false, final false
  static inline void AddTorque_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method ClosestPointOnBounds, addr 0x69d1b2c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// @brief Method GetAccumulatedForce, addr 0x69d11e4, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x69d10e0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x69d1190, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedForce_Injected(::System::IntPtr _unity_self, float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetAccumulatedTorque, addr 0x69d1328, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x69d1224, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x69d12d4, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedTorque_Injected(::System::IntPtr _unity_self, float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPointVelocity, addr 0x69d0a2c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x69d0ad8, size 0x54, virtual false, abstract: false, final false
  static inline void GetPointVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> worldPoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x69d092c, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x69d09d8, size 0x54, virtual false, abstract: false, final false
  static inline void GetRelativePointVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> relativePoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Internal_ClosestPointOnBounds, addr 0x69d1a20, size 0xb0, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::ByRef<::UnityEngine::Vector3> outPos, ::ByRef<float_t> distance);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x69d1ad0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_ClosestPointOnBounds_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> outPos, ::ByRef<float_t> distance);

  /// @brief Method Internal_SweepTestAll, addr 0x69d1e6c, size 0x18c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SweepTestAll_Injected, addr 0x69d1ff8, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SweepTestAll_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> direction, float_t maxDistance,
                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method IsSleeping, addr 0x69d063c, size 0x80, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method IsSleeping_Injected, addr 0x69d06bc, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSleeping_Injected(::System::IntPtr _unity_self);

  /// @brief Method Move, addr 0x69d0488, size 0xa4, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method MovePosition, addr 0x69d02d0, size 0x98, virtual false, abstract: false, final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MovePosition_Injected, addr 0x69d0368, size 0x44, virtual false, abstract: false, final false
  static inline void MovePosition_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> position);

  /// @brief Method MoveRotation, addr 0x69d03ac, size 0x98, virtual false, abstract: false, final false
  inline void MoveRotation(::UnityEngine::Quaternion rot);

  /// @brief Method MoveRotation_Injected, addr 0x69d0444, size 0x44, virtual false, abstract: false, final false
  static inline void MoveRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method Move_Injected, addr 0x69d052c, size 0x54, virtual false, abstract: false, final false
  static inline void Move_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  static inline ::UnityEngine::Rigidbody* New_ctor();

  /// @brief Method PublishTransform, addr 0x69d0cbc, size 0x80, virtual false, abstract: false, final false
  inline void PublishTransform();

  /// @brief Method PublishTransform_Injected, addr 0x69d0d3c, size 0x3c, virtual false, abstract: false, final false
  static inline void PublishTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetCenterOfMass, addr 0x69d07b4, size 0x80, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetCenterOfMass_Injected, addr 0x69d0834, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetInertiaTensor, addr 0x69d0870, size 0x80, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method ResetInertiaTensor_Injected, addr 0x69d08f0, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetDensity, addr 0x69ce29c, size 0x90, virtual false, abstract: false, final false
  inline void SetDensity(float_t density);

  /// @brief Method SetDensity_Injected, addr 0x69ce32c, size 0x4c, virtual false, abstract: false, final false
  static inline void SetDensity_Injected(::System::IntPtr _unity_self, float_t density);

  /// @brief Method SetMaxAngularVelocity, addr 0x69d21b8, size 0x4, virtual false, abstract: false, final false
  inline void SetMaxAngularVelocity(float_t a);

  /// @brief Method Sleep, addr 0x69d0580, size 0x80, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method Sleep_Injected, addr 0x69d0600, size 0x3c, virtual false, abstract: false, final false
  static inline void Sleep_Injected(::System::IntPtr _unity_self);

  /// @brief Method SweepTest, addr 0x69d1bdc, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit SweepTest(::UnityEngine::Vector3 direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::ByRef<bool> hasHit);

  /// @brief Method SweepTest, addr 0x69d1e5c, size 0x10, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SweepTest, addr 0x69d1e54, size 0x8, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SweepTest, addr 0x69d1d44, size 0x110, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTestAll, addr 0x69d2178, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction);

  /// @brief Method SweepTestAll, addr 0x69d2170, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method SweepTestAll, addr 0x69d2064, size 0x10c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTest_Injected, addr 0x69d1cc8, size 0x7c, virtual false, abstract: false, final false
  static inline void SweepTest_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction,
                                        ::ByRef<bool> hasHit, ::ByRef<::UnityEngine::RaycastHit> ret);

  /// @brief Method WakeUp, addr 0x69d06f8, size 0x80, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method WakeUp_Injected, addr 0x69d0778, size 0x3c, virtual false, abstract: false, final false
  static inline void WakeUp_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x69d21d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularDamping, addr 0x69cdf6c, size 0x80, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method get_angularDamping_Injected, addr 0x69cdfec, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_angularDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularDrag, addr 0x69d2190, size 0x4, virtual false, abstract: false, final false
  inline float_t get_angularDrag();

  /// @brief Method get_angularVelocity, addr 0x69cdc14, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x69cdcb4, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x69ceba0, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticCenterOfMass_Injected, addr 0x69cec20, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticInertiaTensor, addr 0x69cefd4, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_automaticInertiaTensor_Injected, addr 0x69cf054, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_centerOfMass, addr 0x69ced30, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x69cedd0, size 0x44, virtual false, abstract: false, final false
  static inline void get_centerOfMass_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x69cea10, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_collisionDetectionMode_Injected, addr 0x69cea90, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_constraints, addr 0x69ce84c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyConstraints get_constraints();

  /// @brief Method get_constraints_Injected, addr 0x69ce990, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RigidbodyConstraints get_constraints_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_detectCollisions, addr 0x69cf5dc, size 0x80, virtual false, abstract: false, final false
  inline bool get_detectCollisions();

  /// @brief Method get_detectCollisions_Injected, addr 0x69cf65c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_detectCollisions_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_drag, addr 0x69d2188, size 0x4, virtual false, abstract: false, final false
  inline float_t get_drag();

  /// @brief Method get_excludeLayers, addr 0x69d0d78, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x69d0e10, size 0x44, virtual false, abstract: false, final false
  static inline void get_excludeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_freezeRotation, addr 0x69ce830, size 0x1c, virtual false, abstract: false, final false
  inline bool get_freezeRotation();

  /// @brief Method get_includeLayers, addr 0x69d0f2c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x69d0fc4, size 0x44, virtual false, abstract: false, final false
  static inline void get_includeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_inertiaTensor, addr 0x69cf320, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x69cf164, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x69cf200, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x69cf3c0, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_interpolation, addr 0x69cfae8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyInterpolation get_interpolation();

  /// @brief Method get_interpolation_Injected, addr 0x69cfb68, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RigidbodyInterpolation get_interpolation_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isKinematic, addr 0x69ce6a0, size 0x80, virtual false, abstract: false, final false
  inline bool get_isKinematic();

  /// @brief Method get_isKinematic_Injected, addr 0x69ce720, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isKinematic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearDamping, addr 0x69cddd4, size 0x80, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method get_linearDamping_Injected, addr 0x69cde54, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_linearDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearVelocity, addr 0x69cda54, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_linearVelocity();

  /// @brief Method get_linearVelocity_Injected, addr 0x69cdaf4, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_mass, addr 0x69ce104, size 0x80, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_mass_Injected, addr 0x69ce184, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_mass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxAngularVelocity, addr 0x69cffa0, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxAngularVelocity_Injected, addr 0x69d0020, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDepenetrationVelocity, addr 0x69ce508, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxDepenetrationVelocity_Injected, addr 0x69ce588, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxLinearVelocity, addr 0x69d0138, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_maxLinearVelocity_Injected, addr 0x69d01b8, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxLinearVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_position, addr 0x69cf76c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x69cf80c, size 0x44, virtual false, abstract: false, final false
  static inline void get_position_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rotation, addr 0x69cf92c, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotation_Injected, addr 0x69cf9c8, size 0x44, virtual false, abstract: false, final false
  static inline void get_rotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepAngularVelocity, addr 0x69d21ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sleepAngularVelocity();

  /// @brief Method get_sleepThreshold, addr 0x69cfe08, size 0x80, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_sleepThreshold_Injected, addr 0x69cfe88, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sleepVelocity, addr 0x69d21a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sleepVelocity();

  /// @brief Method get_solverIterationCount, addr 0x69d21c8, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_solverIterationCount();

  /// @brief Method get_solverIterations, addr 0x69cfc78, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverIterations_Injected, addr 0x69cfcf8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverVelocityIterationCount, addr 0x69d21d0, size 0x4, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterationCount();

  /// @brief Method get_solverVelocityIterations, addr 0x69d0b2c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_solverVelocityIterations_Injected, addr 0x69d0bac, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useConeFriction, addr 0x69d21bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_useConeFriction();

  /// @brief Method get_useGravity, addr 0x69ce378, size 0x80, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_useGravity_Injected, addr 0x69ce3f8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useGravity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x69d2198, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_worldCenterOfMass, addr 0x69ceef0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x69cef90, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldCenterOfMass_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldInertiaTensorMatrix, addr 0x69cf4e0, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldInertiaTensorMatrix();

  /// @brief Method get_worldInertiaTensorMatrix_Injected, addr 0x69cf598, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldInertiaTensorMatrix_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_angularDamping, addr 0x69ce028, size 0x90, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method set_angularDamping_Injected, addr 0x69ce0b8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_angularDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_angularDrag, addr 0x69d2194, size 0x4, virtual false, abstract: false, final false
  inline void set_angularDrag(float_t value);

  /// @brief Method set_angularVelocity, addr 0x69cdcf8, size 0x98, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x69cdd90, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x69cec5c, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticCenterOfMass_Injected, addr 0x69cecec, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticCenterOfMass_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x69cf090, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_automaticInertiaTensor_Injected, addr 0x69cf120, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticInertiaTensor_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_centerOfMass, addr 0x69cee14, size 0x98, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x69ceeac, size 0x44, virtual false, abstract: false, final false
  static inline void set_centerOfMass_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_collisionDetectionMode, addr 0x69ceacc, size 0x90, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_collisionDetectionMode_Injected, addr 0x69ceb5c, size 0x44, virtual false, abstract: false, final false
  static inline void set_collisionDetectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_constraints, addr 0x69ce900, size 0x90, virtual false, abstract: false, final false
  inline void set_constraints(::UnityEngine::RigidbodyConstraints value);

  /// @brief Method set_constraints_Injected, addr 0x69ce9cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_constraints_Injected(::System::IntPtr _unity_self, ::UnityEngine::RigidbodyConstraints value);

  /// @brief Method set_detectCollisions, addr 0x69cf698, size 0x90, virtual false, abstract: false, final false
  inline void set_detectCollisions(bool value);

  /// @brief Method set_detectCollisions_Injected, addr 0x69cf728, size 0x44, virtual false, abstract: false, final false
  static inline void set_detectCollisions_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_drag, addr 0x69d218c, size 0x4, virtual false, abstract: false, final false
  inline void set_drag(float_t value);

  /// @brief Method set_excludeLayers, addr 0x69d0e54, size 0x94, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x69d0ee8, size 0x44, virtual false, abstract: false, final false
  static inline void set_excludeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_freezeRotation, addr 0x69ce8cc, size 0x34, virtual false, abstract: false, final false
  inline void set_freezeRotation(bool value);

  /// @brief Method set_includeLayers, addr 0x69d1008, size 0x94, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x69d109c, size 0x44, virtual false, abstract: false, final false
  static inline void set_includeLayers_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_inertiaTensor, addr 0x69cf404, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x69cf244, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x69cf2dc, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x69cf49c, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensor_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_interpolation, addr 0x69cfba4, size 0x90, virtual false, abstract: false, final false
  inline void set_interpolation(::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method set_interpolation_Injected, addr 0x69cfc34, size 0x44, virtual false, abstract: false, final false
  static inline void set_interpolation_Injected(::System::IntPtr _unity_self, ::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method set_isKinematic, addr 0x69ce75c, size 0x90, virtual false, abstract: false, final false
  inline void set_isKinematic(bool value);

  /// @brief Method set_isKinematic_Injected, addr 0x69ce7ec, size 0x44, virtual false, abstract: false, final false
  static inline void set_isKinematic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_linearDamping, addr 0x69cde90, size 0x90, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method set_linearDamping_Injected, addr 0x69cdf20, size 0x4c, virtual false, abstract: false, final false
  static inline void set_linearDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_linearVelocity, addr 0x69cdb38, size 0x98, virtual false, abstract: false, final false
  inline void set_linearVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_linearVelocity_Injected, addr 0x69cdbd0, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearVelocity_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_mass, addr 0x69ce1c0, size 0x90, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_mass_Injected, addr 0x69ce250, size 0x4c, virtual false, abstract: false, final false
  static inline void set_mass_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxAngularVelocity, addr 0x69d005c, size 0x90, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxAngularVelocity_Injected, addr 0x69d00ec, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x69ce5c4, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity_Injected, addr 0x69ce654, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x69d01f4, size 0x90, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity_Injected, addr 0x69d0284, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxLinearVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_position, addr 0x69cf850, size 0x98, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x69cf8e8, size 0x44, virtual false, abstract: false, final false
  static inline void set_position_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_rotation, addr 0x69cfa0c, size 0x98, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotation_Injected, addr 0x69cfaa4, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_sleepAngularVelocity, addr 0x69d21b4, size 0x4, virtual false, abstract: false, final false
  inline void set_sleepAngularVelocity(float_t value);

  /// @brief Method set_sleepThreshold, addr 0x69cfec4, size 0x90, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepThreshold_Injected, addr 0x69cff54, size 0x4c, virtual false, abstract: false, final false
  static inline void set_sleepThreshold_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_sleepVelocity, addr 0x69d21a8, size 0x4, virtual false, abstract: false, final false
  inline void set_sleepVelocity(float_t value);

  /// @brief Method set_solverIterationCount, addr 0x69d21cc, size 0x4, virtual false, abstract: false, final false
  inline void set_solverIterationCount(int32_t value);

  /// @brief Method set_solverIterations, addr 0x69cfd34, size 0x90, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverIterations_Injected, addr 0x69cfdc4, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_solverVelocityIterationCount, addr 0x69d21d4, size 0x4, virtual false, abstract: false, final false
  inline void set_solverVelocityIterationCount(int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x69d0be8, size 0x90, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_solverVelocityIterations_Injected, addr 0x69d0c78, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverVelocityIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_useConeFriction, addr 0x69d21c4, size 0x4, virtual false, abstract: false, final false
  inline void set_useConeFriction(bool value);

  /// @brief Method set_useGravity, addr 0x69ce434, size 0x90, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_useGravity_Injected, addr 0x69ce4c4, size 0x44, virtual false, abstract: false, final false
  static inline void set_useGravity_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_velocity, addr 0x69d219c, size 0x4, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rigidbody();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rigidbody(Rigidbody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rigidbody(Rigidbody const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18656 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
