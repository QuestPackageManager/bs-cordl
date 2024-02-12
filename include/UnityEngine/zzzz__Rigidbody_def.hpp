#pragma once
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
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8982))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13920))
// CS Name: ::UnityEngine::Rigidbody*
class CORDL_TYPE Rigidbody : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_sleepVelocity, put = set_sleepVelocity)) float_t sleepVelocity;

  __declspec(property(get = get_sleepAngularVelocity, put = set_sleepAngularVelocity)) float_t sleepAngularVelocity;

  __declspec(property(get = get_useConeFriction, put = set_useConeFriction)) bool useConeFriction;

  __declspec(property(get = get_solverIterationCount, put = set_solverIterationCount)) int32_t solverIterationCount;

  __declspec(property(get = get_solverVelocityIterationCount, put = set_solverVelocityIterationCount)) int32_t solverVelocityIterationCount;

  __declspec(property(get = get_velocity, put = set_velocity))::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity))::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_drag, put = set_drag)) float_t drag;

  __declspec(property(get = get_angularDrag, put = set_angularDrag)) float_t angularDrag;

  __declspec(property(get = get_mass, put = set_mass)) float_t mass;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  __declspec(property(get = get_maxDepenetrationVelocity, put = set_maxDepenetrationVelocity)) float_t maxDepenetrationVelocity;

  __declspec(property(get = get_isKinematic, put = set_isKinematic)) bool isKinematic;

  __declspec(property(get = get_freezeRotation, put = set_freezeRotation)) bool freezeRotation;

  __declspec(property(get = get_constraints, put = set_constraints))::UnityEngine::RigidbodyConstraints constraints;

  __declspec(property(get = get_collisionDetectionMode, put = set_collisionDetectionMode))::UnityEngine::CollisionDetectionMode collisionDetectionMode;

  __declspec(property(get = get_centerOfMass, put = set_centerOfMass))::UnityEngine::Vector3 centerOfMass;

  __declspec(property(get = get_worldCenterOfMass))::UnityEngine::Vector3 worldCenterOfMass;

  __declspec(property(get = get_inertiaTensorRotation, put = set_inertiaTensorRotation))::UnityEngine::Quaternion inertiaTensorRotation;

  __declspec(property(get = get_inertiaTensor, put = set_inertiaTensor))::UnityEngine::Vector3 inertiaTensor;

  __declspec(property(get = get_detectCollisions, put = set_detectCollisions)) bool detectCollisions;

  __declspec(property(get = get_position, put = set_position))::UnityEngine::Vector3 position;

  __declspec(property(get = get_rotation, put = set_rotation))::UnityEngine::Quaternion rotation;

  __declspec(property(get = get_interpolation, put = set_interpolation))::UnityEngine::RigidbodyInterpolation interpolation;

  __declspec(property(get = get_solverIterations, put = set_solverIterations)) int32_t solverIterations;

  __declspec(property(get = get_sleepThreshold, put = set_sleepThreshold)) float_t sleepThreshold;

  __declspec(property(get = get_maxAngularVelocity, put = set_maxAngularVelocity)) float_t maxAngularVelocity;

  __declspec(property(get = get_solverVelocityIterations, put = set_solverVelocityIterations)) int32_t solverVelocityIterations;

  /// @brief Method get_sleepVelocity, addr 0x2d2ecf4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sleepVelocity();

  /// @brief Method set_sleepVelocity, addr 0x2d2ecfc, size 0x4, virtual false, abstract: false, final false
  inline void set_sleepVelocity(float_t value);

  /// @brief Method get_sleepAngularVelocity, addr 0x2d2ed00, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sleepAngularVelocity();

  /// @brief Method set_sleepAngularVelocity, addr 0x2d2ed08, size 0x4, virtual false, abstract: false, final false
  inline void set_sleepAngularVelocity(float_t value);

  /// @brief Method SetMaxAngularVelocity, addr 0x2d2ed0c, size 0x4c, virtual false, abstract: false, final false
  inline void SetMaxAngularVelocity(float_t a);

  /// @brief Method get_useConeFriction, addr 0x2d2eda4, size 0x8, virtual false, abstract: false, final false
  inline bool get_useConeFriction();

  /// @brief Method set_useConeFriction, addr 0x2d2edac, size 0x4, virtual false, abstract: false, final false
  inline void set_useConeFriction(bool value);

  /// @brief Method get_solverIterationCount, addr 0x2d2edb0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterationCount();

  /// @brief Method set_solverIterationCount, addr 0x2d2ee28, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterationCount(int32_t value);

  /// @brief Method get_solverVelocityIterationCount, addr 0x2d2eeb0, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterationCount();

  /// @brief Method set_solverVelocityIterationCount, addr 0x2d2ef28, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterationCount(int32_t value);

  /// @brief Method get_velocity, addr 0x2d2efb0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method set_velocity, addr 0x2d2f050, size 0x54, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method get_angularVelocity, addr 0x2d2f0e8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method set_angularVelocity, addr 0x2d2f188, size 0x54, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method get_drag, addr 0x2d2f220, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_drag();

  /// @brief Method set_drag, addr 0x2d2f25c, size 0x4c, virtual false, abstract: false, final false
  inline void set_drag(float_t value);

  /// @brief Method get_angularDrag, addr 0x2d2f2a8, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angularDrag();

  /// @brief Method set_angularDrag, addr 0x2d2f2e4, size 0x4c, virtual false, abstract: false, final false
  inline void set_angularDrag(float_t value);

  /// @brief Method get_mass, addr 0x2d2f330, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method set_mass, addr 0x2d2f36c, size 0x4c, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method SetDensity, addr 0x2d2f3b8, size 0x4c, virtual false, abstract: false, final false
  inline void SetDensity(float_t density);

  /// @brief Method get_useGravity, addr 0x2d2f404, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method set_useGravity, addr 0x2d2f440, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method get_maxDepenetrationVelocity, addr 0x2d2f484, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method set_maxDepenetrationVelocity, addr 0x2d2f4c0, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method get_isKinematic, addr 0x2d2f50c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isKinematic();

  /// @brief Method set_isKinematic, addr 0x2d2f548, size 0x44, virtual false, abstract: false, final false
  inline void set_isKinematic(bool value);

  /// @brief Method get_freezeRotation, addr 0x2d2f58c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_freezeRotation();

  /// @brief Method set_freezeRotation, addr 0x2d2f5c8, size 0x44, virtual false, abstract: false, final false
  inline void set_freezeRotation(bool value);

  /// @brief Method get_constraints, addr 0x2d2f60c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyConstraints get_constraints();

  /// @brief Method set_constraints, addr 0x2d2f648, size 0x44, virtual false, abstract: false, final false
  inline void set_constraints(::UnityEngine::RigidbodyConstraints value);

  /// @brief Method get_collisionDetectionMode, addr 0x2d2f68c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method set_collisionDetectionMode, addr 0x2d2f6c8, size 0x44, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method get_centerOfMass, addr 0x2d2f70c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method set_centerOfMass, addr 0x2d2f7ac, size 0x54, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method get_worldCenterOfMass, addr 0x2d2f844, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_inertiaTensorRotation, addr 0x2d2f8e4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method set_inertiaTensorRotation, addr 0x2d2f980, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method get_inertiaTensor, addr 0x2d2fa18, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method set_inertiaTensor, addr 0x2d2fab8, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method get_detectCollisions, addr 0x2d2fb50, size 0x3c, virtual false, abstract: false, final false
  inline bool get_detectCollisions();

  /// @brief Method set_detectCollisions, addr 0x2d2fb8c, size 0x44, virtual false, abstract: false, final false
  inline void set_detectCollisions(bool value);

  /// @brief Method get_position, addr 0x2d2fbd0, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method set_position, addr 0x2d2fc70, size 0x54, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method get_rotation, addr 0x2d2fd08, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method set_rotation, addr 0x2d2fda4, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method get_interpolation, addr 0x2d2fe3c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyInterpolation get_interpolation();

  /// @brief Method set_interpolation, addr 0x2d2fe78, size 0x44, virtual false, abstract: false, final false
  inline void set_interpolation(::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method get_solverIterations, addr 0x2d2edec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method set_solverIterations, addr 0x2d2ee6c, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method get_sleepThreshold, addr 0x2d2febc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method set_sleepThreshold, addr 0x2d2fef8, size 0x4c, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method get_maxAngularVelocity, addr 0x2d2ff44, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method set_maxAngularVelocity, addr 0x2d2ed58, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method MovePosition, addr 0x2d2ff80, size 0x54, virtual false, abstract: false, final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MoveRotation, addr 0x2d30018, size 0x54, virtual false, abstract: false, final false
  inline void MoveRotation(::UnityEngine::Quaternion rot);

  /// @brief Method Sleep, addr 0x2d300b0, size 0x3c, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method IsSleeping, addr 0x2d300ec, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method WakeUp, addr 0x2d30128, size 0x3c, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method ResetCenterOfMass, addr 0x2d30164, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetInertiaTensor, addr 0x2d301a0, size 0x3c, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method GetRelativePointVelocity, addr 0x2d301dc, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetPointVelocity, addr 0x2d30298, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method get_solverVelocityIterations, addr 0x2d2eeec, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method set_solverVelocityIterations, addr 0x2d2ef6c, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method AddForce, addr 0x2d30354, size 0x5c, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x2d30404, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x2d3040c, size 0x4, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x2d30410, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeForce, addr 0x2d30418, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x2d304c8, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x2d304d0, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x2d304d4, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z);

  /// @brief Method AddTorque, addr 0x2d304dc, size 0x5c, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x2d3058c, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x2d30594, size 0x4, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x2d30598, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeTorque, addr 0x2d305a0, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x2d30650, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x2d30658, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x2d3065c, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddForceAtPosition, addr 0x2d30664, size 0x68, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x2d30728, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddExplosionForce, addr 0x2d30730, size 0x84, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier, ::UnityEngine::ForceMode mode);

  /// @brief Method AddExplosionForce, addr 0x2d30830, size 0x8, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier);

  /// @brief Method AddExplosionForce, addr 0x2d30838, size 0xc, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius);

  /// @brief Method Internal_ClosestPointOnBounds, addr 0x2d30844, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ByRef<::UnityEngine::Vector3> outPos, ByRef<float_t> distance);

  /// @brief Method ClosestPointOnBounds, addr 0x2d3090c, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// @brief Method SweepTest, addr 0x2d309b0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit SweepTest(::UnityEngine::Vector3 direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ByRef<bool> hasHit);

  /// @brief Method SweepTest, addr 0x2d30acc, size 0x10c, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTest, addr 0x2d30bd8, size 0x8, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SweepTest, addr 0x2d30be0, size 0x10, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Internal_SweepTestAll, addr 0x2d30bf0, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTestAll, addr 0x2d30cc0, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTestAll, addr 0x2d30db8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method SweepTestAll, addr 0x2d30dc0, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction);

  static inline ::UnityEngine::Rigidbody* New_ctor();

  /// @brief Method .ctor, addr 0x2d30dd0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_velocity_Injected, addr 0x2d2f00c, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_velocity_Injected, addr 0x2d2f0a4, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_angularVelocity_Injected, addr 0x2d2f144, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_angularVelocity_Injected, addr 0x2d2f1dc, size 0x44, virtual false, abstract: false, final false
  inline void set_angularVelocity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_centerOfMass_Injected, addr 0x2d2f768, size 0x44, virtual false, abstract: false, final false
  inline void get_centerOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_centerOfMass_Injected, addr 0x2d2f800, size 0x44, virtual false, abstract: false, final false
  inline void set_centerOfMass_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x2d2f8a0, size 0x44, virtual false, abstract: false, final false
  inline void get_worldCenterOfMass_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x2d2f93c, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensorRotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x2d2f9d4, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method get_inertiaTensor_Injected, addr 0x2d2fa74, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensor_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_inertiaTensor_Injected, addr 0x2d2fb0c, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensor_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_position_Injected, addr 0x2d2fc2c, size 0x44, virtual false, abstract: false, final false
  inline void get_position_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_position_Injected, addr 0x2d2fcc4, size 0x44, virtual false, abstract: false, final false
  inline void set_position_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_rotation_Injected, addr 0x2d2fd60, size 0x44, virtual false, abstract: false, final false
  inline void get_rotation_Injected(ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method set_rotation_Injected, addr 0x2d2fdf8, size 0x44, virtual false, abstract: false, final false
  inline void set_rotation_Injected(ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method MovePosition_Injected, addr 0x2d2ffd4, size 0x44, virtual false, abstract: false, final false
  inline void MovePosition_Injected(ByRef<::UnityEngine::Vector3> position);

  /// @brief Method MoveRotation_Injected, addr 0x2d3006c, size 0x44, virtual false, abstract: false, final false
  inline void MoveRotation_Injected(ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x2d30244, size 0x54, virtual false, abstract: false, final false
  inline void GetRelativePointVelocity_Injected(ByRef<::UnityEngine::Vector3> relativePoint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPointVelocity_Injected, addr 0x2d30300, size 0x54, virtual false, abstract: false, final false
  inline void GetPointVelocity_Injected(ByRef<::UnityEngine::Vector3> worldPoint, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method AddForce_Injected, addr 0x2d303b0, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x2d30474, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeForce_Injected(ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x2d30538, size 0x54, virtual false, abstract: false, final false
  inline void AddTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x2d305fc, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeTorque_Injected(ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x2d306cc, size 0x5c, virtual false, abstract: false, final false
  inline void AddForceAtPosition_Injected(ByRef<::UnityEngine::Vector3> force, ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddExplosionForce_Injected, addr 0x2d307b4, size 0x7c, virtual false, abstract: false, final false
  inline void AddExplosionForce_Injected(float_t explosionForce, ByRef<::UnityEngine::Vector3> explosionPosition, float_t explosionRadius, float_t upwardsModifier, ::UnityEngine::ForceMode mode);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x2d308b0, size 0x5c, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds_Injected(ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> outPos, ByRef<float_t> distance);

  /// @brief Method SweepTest_Injected, addr 0x2d30a50, size 0x7c, virtual false, abstract: false, final false
  inline void SweepTest_Injected(ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ByRef<bool> hasHit,
                                 ByRef<::UnityEngine::RaycastHit> ret);

  /// @brief Method Internal_SweepTestAll_Injected, addr 0x2d30c5c, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_SweepTestAll_Injected(ByRef<::UnityEngine::Vector3> direction, float_t maxDistance,
                                                                                                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rigidbody(Rigidbody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rigidbody(Rigidbody const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rigidbody();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
