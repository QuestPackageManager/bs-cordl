#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Rigidbody)
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
// Type: UnityEngine::Rigidbody
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Rigidbody*
class CORDL_TYPE Rigidbody : public ::UnityEngine::Component {
public:
  // Declarations
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

  /// @brief Method AddExplosionForce, addr 0x48a1b14, size 0xc, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius);

  /// @brief Method AddExplosionForce, addr 0x48a1b0c, size 0x8, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier);

  /// @brief Method AddExplosionForce, addr 0x48a1a0c, size 0x84, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier, ::UnityEngine::ForceMode mode);

  /// @brief Method AddExplosionForce_Injected, addr 0x48a1a90, size 0x7c, virtual false, abstract: false, final false
  inline void AddExplosionForce_Injected(float_t explosionForce, ByRef<::UnityEngine::Vector3> explosionPosition, float_t explosionRadius, float_t upwardsModifier, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x48a16e0, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x48a1630, size 0x5c, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x48a16ec, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z);

  /// @brief Method AddForce, addr 0x48a16e8, size 0x4, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x48a1a04, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x48a1940, size 0x68, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x48a19a8, size 0x5c, virtual false, abstract: false, final false
  inline void AddForceAtPosition_Injected(ByRef<::UnityEngine::Vector3> force, ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x48a168c, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x48a17a4, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x48a16f4, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x48a17b0, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeForce, addr 0x48a17ac, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x48a1750, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x48a192c, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x48a187c, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x48a1938, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeTorque, addr 0x48a1934, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x48a18d8, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x48a1868, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x48a17b8, size 0x5c, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x48a1874, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddTorque, addr 0x48a1870, size 0x4, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x48a1814, size 0x54, virtual false, abstract: false, final false
  inline void AddTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method ClosestPointOnBounds, addr 0x48a1be8, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// @brief Method GetAccumulatedForce, addr 0x48a1538, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x48a1478, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x48a14e4, size 0x54, virtual false, abstract: false, final false
  inline void GetAccumulatedForce_Injected(float_t step, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetAccumulatedTorque, addr 0x48a1614, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x48a1554, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x48a15c0, size 0x54, virtual false, abstract: false, final false
  inline void GetAccumulatedTorque_Injected(float_t step, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPointVelocity, addr 0x48a1104, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x48a116c, size 0x54, virtual false, abstract: false, final false
  inline void GetPointVelocity_Injected(ByRef<::UnityEngine::Vector3> worldPoint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x48a1048, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x48a10b0, size 0x54, virtual false, abstract: false, final false
  inline void GetRelativePointVelocity_Injected(ByRef<::UnityEngine::Vector3> relativePoint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Internal_ClosestPointOnBounds, addr 0x48a1b20, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ByRef<::UnityEngine::Vector3> outPos, ByRef<float_t> distance);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x48a1b8c, size 0x5c, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds_Injected(ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> outPos, ByRef<float_t> distance);

  /// @brief Method Internal_SweepTestAll, addr 0x48a1ec8, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SweepTestAll_Injected, addr 0x48a1f34, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_SweepTestAll_Injected(ByRef<::UnityEngine::Vector3> direction, float_t maxDistance,
                                                                                                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method IsSleeping, addr 0x48a0f58, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method Move, addr 0x48a0e68, size 0x60, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method MovePosition, addr 0x48a0d38, size 0x54, virtual false, abstract: false, final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MovePosition_Injected, addr 0x48a0d8c, size 0x44, virtual false, abstract: false, final false
  inline void MovePosition_Injected(ByRef<::UnityEngine::Vector3> position);

  /// @brief Method MoveRotation, addr 0x48a0dd0, size 0x54, virtual false, abstract: false, final false
  inline void MoveRotation(::UnityEngine::Quaternion rot);

  /// @brief Method MoveRotation_Injected, addr 0x48a0e24, size 0x44, virtual false, abstract: false, final false
  inline void MoveRotation_Injected(ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method Move_Injected, addr 0x48a0ec8, size 0x54, virtual false, abstract: false, final false
  inline void Move_Injected(ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation);

  static inline ::UnityEngine::Rigidbody* New_ctor();

  /// @brief Method ResetCenterOfMass, addr 0x48a0fd0, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetInertiaTensor, addr 0x48a100c, size 0x3c, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method SetDensity, addr 0x489ff1c, size 0x4c, virtual false, abstract: false, final false
  inline void SetDensity(float_t density);

  /// @brief Method SetMaxAngularVelocity, addr 0x48a20c0, size 0x4c, virtual false, abstract: false, final false
  inline void SetMaxAngularVelocity(float_t a);

  /// @brief Method Sleep, addr 0x48a0f1c, size 0x3c, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method SweepTest, addr 0x48a1c8c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit SweepTest(::UnityEngine::Vector3 direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ByRef<bool> hasHit);

  /// @brief Method SweepTest, addr 0x48a1eb8, size 0x10, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SweepTest, addr 0x48a1eb0, size 0x8, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SweepTest, addr 0x48a1da8, size 0x108, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTestAll, addr 0x48a2098, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction);

  /// @brief Method SweepTestAll, addr 0x48a2090, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method SweepTestAll, addr 0x48a1f98, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTest_Injected, addr 0x48a1d2c, size 0x7c, virtual false, abstract: false, final false
  inline void SweepTest_Injected(ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ByRef<bool> hasHit,
                                 ByRef<::UnityEngine::RaycastHit> ret);

  /// @brief Method WakeUp, addr 0x48a0f94, size 0x3c, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method .ctor, addr 0x48a2218, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularDrag, addr 0x489fe0c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angularDrag();

  /// @brief Method get_angularVelocity, addr 0x489fc4c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x489fca8, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x48a0270, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticInertiaTensor, addr 0x48a04c8, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_centerOfMass, addr 0x48a02f0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x48a034c, size 0x44, virtual false, abstract: false, final false
  inline void get_centerOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x48a01f0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_constraints, addr 0x48a0170, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyConstraints get_constraints();

  /// @brief Method get_detectCollisions, addr 0x48a07b4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_detectCollisions();

  /// @brief Method get_drag, addr 0x489fd84, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_drag();

  /// @brief Method get_excludeLayers, addr 0x48a1240, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x48a128c, size 0x44, virtual false, abstract: false, final false
  inline void get_excludeLayers_Injected(ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_freezeRotation, addr 0x48a00f0, size 0x3c, virtual false, abstract: false, final false
  inline bool get_freezeRotation();

  /// @brief Method get_includeLayers, addr 0x48a135c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x48a13a8, size 0x44, virtual false, abstract: false, final false
  inline void get_includeLayers_Injected(ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_inertiaTensor, addr 0x48a067c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x48a0548, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x48a05a0, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensorRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x48a06d8, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensor_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_interpolation, addr 0x48a0aa0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyInterpolation get_interpolation();

  /// @brief Method get_isKinematic, addr 0x48a0070, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isKinematic();

  /// @brief Method get_mass, addr 0x489fe94, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_maxAngularVelocity, addr 0x48a0c28, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxDepenetrationVelocity, addr 0x489ffe8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxLinearVelocity, addr 0x48a0cb0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_position, addr 0x48a0834, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x48a0890, size 0x44, virtual false, abstract: false, final false
  inline void get_position_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rotation, addr 0x48a096c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotation_Injected, addr 0x48a09c4, size 0x44, virtual false, abstract: false, final false
  inline void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepAngularVelocity, addr 0x48a20b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sleepAngularVelocity();

  /// @brief Method get_sleepThreshold, addr 0x48a0ba0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_sleepVelocity, addr 0x48a20a8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sleepVelocity();

  /// @brief Method get_solverIterationCount, addr 0x48a2118, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterationCount();

  /// @brief Method get_solverIterations, addr 0x48a0b20, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverVelocityIterationCount, addr 0x48a2198, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterationCount();

  /// @brief Method get_solverVelocityIterations, addr 0x48a11c0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_useConeFriction, addr 0x48a210c, size 0x8, virtual false, abstract: false, final false
  inline bool get_useConeFriction();

  /// @brief Method get_useGravity, addr 0x489ff68, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_velocity, addr 0x489fb14, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x489fb70, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldCenterOfMass, addr 0x48a0428, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x48a0484, size 0x44, virtual false, abstract: false, final false
  inline void get_worldCenterOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_angularDrag, addr 0x489fe48, size 0x4c, virtual false, abstract: false, final false
  inline void set_angularDrag(float_t value);

  /// @brief Method set_angularVelocity, addr 0x489fcec, size 0x54, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x489fd40, size 0x44, virtual false, abstract: false, final false
  inline void set_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x48a02ac, size 0x44, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x48a0504, size 0x44, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_centerOfMass, addr 0x48a0390, size 0x54, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x48a03e4, size 0x44, virtual false, abstract: false, final false
  inline void set_centerOfMass_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_collisionDetectionMode, addr 0x48a022c, size 0x44, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_constraints, addr 0x48a01ac, size 0x44, virtual false, abstract: false, final false
  inline void set_constraints(::UnityEngine::RigidbodyConstraints value);

  /// @brief Method set_detectCollisions, addr 0x48a07f0, size 0x44, virtual false, abstract: false, final false
  inline void set_detectCollisions(bool value);

  /// @brief Method set_drag, addr 0x489fdc0, size 0x4c, virtual false, abstract: false, final false
  inline void set_drag(float_t value);

  /// @brief Method set_excludeLayers, addr 0x48a12d0, size 0x48, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x48a1318, size 0x44, virtual false, abstract: false, final false
  inline void set_excludeLayers_Injected(ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_freezeRotation, addr 0x48a012c, size 0x44, virtual false, abstract: false, final false
  inline void set_freezeRotation(bool value);

  /// @brief Method set_includeLayers, addr 0x48a13ec, size 0x48, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x48a1434, size 0x44, virtual false, abstract: false, final false
  inline void set_includeLayers_Injected(ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_inertiaTensor, addr 0x48a071c, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x48a05e4, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x48a0638, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x48a0770, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensor_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_interpolation, addr 0x48a0adc, size 0x44, virtual false, abstract: false, final false
  inline void set_interpolation(::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method set_isKinematic, addr 0x48a00ac, size 0x44, virtual false, abstract: false, final false
  inline void set_isKinematic(bool value);

  /// @brief Method set_mass, addr 0x489fed0, size 0x4c, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_maxAngularVelocity, addr 0x48a0c64, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x48a0024, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x48a0cec, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_position, addr 0x48a08d4, size 0x54, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x48a0928, size 0x44, virtual false, abstract: false, final false
  inline void set_position_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_rotation, addr 0x48a0a08, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotation_Injected, addr 0x48a0a5c, size 0x44, virtual false, abstract: false, final false
  inline void set_rotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_sleepAngularVelocity, addr 0x48a20bc, size 0x4, virtual false, abstract: false, final false
  inline void set_sleepAngularVelocity(float_t value);

  /// @brief Method set_sleepThreshold, addr 0x48a0bdc, size 0x4c, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepVelocity, addr 0x48a20b0, size 0x4, virtual false, abstract: false, final false
  inline void set_sleepVelocity(float_t value);

  /// @brief Method set_solverIterationCount, addr 0x48a2154, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterationCount(int32_t value);

  /// @brief Method set_solverIterations, addr 0x48a0b5c, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverVelocityIterationCount, addr 0x48a21d4, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterationCount(int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x48a11fc, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_useConeFriction, addr 0x48a2114, size 0x4, virtual false, abstract: false, final false
  inline void set_useConeFriction(bool value);

  /// @brief Method set_useGravity, addr 0x489ffa4, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_velocity, addr 0x489fbb4, size 0x54, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_velocity_Injected, addr 0x489fc08, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(ByRef<::UnityEngine::Vector3> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15710 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
