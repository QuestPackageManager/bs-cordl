#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
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
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody
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

  /// @brief Method AddExplosionForce, addr 0x4902c70, size 0xc, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius);

  /// @brief Method AddExplosionForce, addr 0x4902c68, size 0x8, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier);

  /// @brief Method AddExplosionForce, addr 0x4902b68, size 0x84, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier, ::UnityEngine::ForceMode mode);

  /// @brief Method AddExplosionForce_Injected, addr 0x4902bec, size 0x7c, virtual false, abstract: false, final false
  inline void AddExplosionForce_Injected(float_t explosionForce, ::ByRef<::UnityEngine::Vector3> explosionPosition, float_t explosionRadius, float_t upwardsModifier, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x490283c, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x490278c, size 0x5c, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce, addr 0x4902848, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z);

  /// @brief Method AddForce, addr 0x4902844, size 0x4, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition, addr 0x4902b60, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x4902a9c, size 0x68, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x4902b04, size 0x5c, virtual false, abstract: false, final false
  inline void AddForceAtPosition_Injected(::ByRef<::UnityEngine::Vector3> force, ::ByRef<::UnityEngine::Vector3> position, ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x49027e8, size 0x54, virtual false, abstract: false, final false
  inline void AddForce_Injected(::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x4902900, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x4902850, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce, addr 0x490290c, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeForce, addr 0x4902908, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x49028ac, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeForce_Injected(::ByRef<::UnityEngine::Vector3> force, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x4902a88, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x49029d8, size 0x5c, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque, addr 0x4902a94, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeTorque, addr 0x4902a90, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x4902a34, size 0x54, virtual false, abstract: false, final false
  inline void AddRelativeTorque_Injected(::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x49029c4, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x4902914, size 0x5c, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque, addr 0x49029d0, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddTorque, addr 0x49029cc, size 0x4, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z, ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x4902970, size 0x54, virtual false, abstract: false, final false
  inline void AddTorque_Injected(::ByRef<::UnityEngine::Vector3> torque, ::UnityEngine::ForceMode mode);

  /// @brief Method ClosestPointOnBounds, addr 0x4902d44, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// @brief Method GetAccumulatedForce, addr 0x4902694, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x49025d4, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x4902640, size 0x54, virtual false, abstract: false, final false
  inline void GetAccumulatedForce_Injected(float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetAccumulatedTorque, addr 0x4902770, size 0x1c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x49026b0, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x490271c, size 0x54, virtual false, abstract: false, final false
  inline void GetAccumulatedTorque_Injected(float_t step, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetPointVelocity, addr 0x4902260, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x49022c8, size 0x54, virtual false, abstract: false, final false
  inline void GetPointVelocity_Injected(::ByRef<::UnityEngine::Vector3> worldPoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x49021a4, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x490220c, size 0x54, virtual false, abstract: false, final false
  inline void GetRelativePointVelocity_Injected(::ByRef<::UnityEngine::Vector3> relativePoint, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Internal_ClosestPointOnBounds, addr 0x4902c7c, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::ByRef<::UnityEngine::Vector3> outPos, ::ByRef<float_t> distance);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x4902ce8, size 0x5c, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds_Injected(::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> outPos, ::ByRef<float_t> distance);

  /// @brief Method Internal_SweepTestAll, addr 0x4903024, size 0x6c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SweepTestAll_Injected, addr 0x4903090, size 0x64, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_SweepTestAll_Injected(::ByRef<::UnityEngine::Vector3> direction, float_t maxDistance,
                                                                                                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method IsSleeping, addr 0x49020b4, size 0x3c, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method Move, addr 0x4901fc4, size 0x60, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method MovePosition, addr 0x4901e94, size 0x54, virtual false, abstract: false, final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MovePosition_Injected, addr 0x4901ee8, size 0x44, virtual false, abstract: false, final false
  inline void MovePosition_Injected(::ByRef<::UnityEngine::Vector3> position);

  /// @brief Method MoveRotation, addr 0x4901f2c, size 0x54, virtual false, abstract: false, final false
  inline void MoveRotation(::UnityEngine::Quaternion rot);

  /// @brief Method MoveRotation_Injected, addr 0x4901f80, size 0x44, virtual false, abstract: false, final false
  inline void MoveRotation_Injected(::ByRef<::UnityEngine::Quaternion> rot);

  /// @brief Method Move_Injected, addr 0x4902024, size 0x54, virtual false, abstract: false, final false
  inline void Move_Injected(::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation);

  static inline ::UnityEngine::Rigidbody* New_ctor();

  /// @brief Method ResetCenterOfMass, addr 0x490212c, size 0x3c, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetInertiaTensor, addr 0x4902168, size 0x3c, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method SetDensity, addr 0x4901078, size 0x4c, virtual false, abstract: false, final false
  inline void SetDensity(float_t density);

  /// @brief Method SetMaxAngularVelocity, addr 0x490321c, size 0x4c, virtual false, abstract: false, final false
  inline void SetMaxAngularVelocity(float_t a);

  /// @brief Method Sleep, addr 0x4902078, size 0x3c, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method SweepTest, addr 0x4902de8, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit SweepTest(::UnityEngine::Vector3 direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::ByRef<bool> hasHit);

  /// @brief Method SweepTest, addr 0x4903014, size 0x10, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SweepTest, addr 0x490300c, size 0x8, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SweepTest, addr 0x4902f04, size 0x108, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTestAll, addr 0x49031f4, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction);

  /// @brief Method SweepTestAll, addr 0x49031ec, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method SweepTestAll, addr 0x49030f4, size 0xf8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTest_Injected, addr 0x4902e88, size 0x7c, virtual false, abstract: false, final false
  inline void SweepTest_Injected(::ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::ByRef<bool> hasHit,
                                 ::ByRef<::UnityEngine::RaycastHit> ret);

  /// @brief Method WakeUp, addr 0x49020f0, size 0x3c, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method .ctor, addr 0x4903374, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularDrag, addr 0x4900f68, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_angularDrag();

  /// @brief Method get_angularVelocity, addr 0x4900da8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x4900e04, size 0x44, virtual false, abstract: false, final false
  inline void get_angularVelocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x49013cc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticInertiaTensor, addr 0x4901624, size 0x3c, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_centerOfMass, addr 0x490144c, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x49014a8, size 0x44, virtual false, abstract: false, final false
  inline void get_centerOfMass_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x490134c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_constraints, addr 0x49012cc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyConstraints get_constraints();

  /// @brief Method get_detectCollisions, addr 0x4901910, size 0x3c, virtual false, abstract: false, final false
  inline bool get_detectCollisions();

  /// @brief Method get_drag, addr 0x4900ee0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_drag();

  /// @brief Method get_excludeLayers, addr 0x490239c, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x49023e8, size 0x44, virtual false, abstract: false, final false
  inline void get_excludeLayers_Injected(::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_freezeRotation, addr 0x490124c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_freezeRotation();

  /// @brief Method get_includeLayers, addr 0x49024b8, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x4902504, size 0x44, virtual false, abstract: false, final false
  inline void get_includeLayers_Injected(::ByRef<::UnityEngine::LayerMask> ret);

  /// @brief Method get_inertiaTensor, addr 0x49017d8, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x49016a4, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x49016fc, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensorRotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x4901834, size 0x44, virtual false, abstract: false, final false
  inline void get_inertiaTensor_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_interpolation, addr 0x4901bfc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyInterpolation get_interpolation();

  /// @brief Method get_isKinematic, addr 0x49011cc, size 0x3c, virtual false, abstract: false, final false
  inline bool get_isKinematic();

  /// @brief Method get_mass, addr 0x4900ff0, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_maxAngularVelocity, addr 0x4901d84, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxDepenetrationVelocity, addr 0x4901144, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxLinearVelocity, addr 0x4901e0c, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_position, addr 0x4901990, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x49019ec, size 0x44, virtual false, abstract: false, final false
  inline void get_position_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_rotation, addr 0x4901ac8, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotation_Injected, addr 0x4901b20, size 0x44, virtual false, abstract: false, final false
  inline void get_rotation_Injected(::ByRef<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepAngularVelocity, addr 0x4903210, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sleepAngularVelocity();

  /// @brief Method get_sleepThreshold, addr 0x4901cfc, size 0x3c, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_sleepVelocity, addr 0x4903204, size 0x8, virtual false, abstract: false, final false
  inline float_t get_sleepVelocity();

  /// @brief Method get_solverIterationCount, addr 0x4903274, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterationCount();

  /// @brief Method get_solverIterations, addr 0x4901c7c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverVelocityIterationCount, addr 0x49032f4, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterationCount();

  /// @brief Method get_solverVelocityIterations, addr 0x490231c, size 0x3c, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_useConeFriction, addr 0x4903268, size 0x8, virtual false, abstract: false, final false
  inline bool get_useConeFriction();

  /// @brief Method get_useGravity, addr 0x49010c4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_velocity, addr 0x4900c70, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_velocity_Injected, addr 0x4900ccc, size 0x44, virtual false, abstract: false, final false
  inline void get_velocity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldCenterOfMass, addr 0x4901584, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x49015e0, size 0x44, virtual false, abstract: false, final false
  inline void get_worldCenterOfMass_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_angularDrag, addr 0x4900fa4, size 0x4c, virtual false, abstract: false, final false
  inline void set_angularDrag(float_t value);

  /// @brief Method set_angularVelocity, addr 0x4900e48, size 0x54, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x4900e9c, size 0x44, virtual false, abstract: false, final false
  inline void set_angularVelocity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x4901408, size 0x44, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x4901660, size 0x44, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_centerOfMass, addr 0x49014ec, size 0x54, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x4901540, size 0x44, virtual false, abstract: false, final false
  inline void set_centerOfMass_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_collisionDetectionMode, addr 0x4901388, size 0x44, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_constraints, addr 0x4901308, size 0x44, virtual false, abstract: false, final false
  inline void set_constraints(::UnityEngine::RigidbodyConstraints value);

  /// @brief Method set_detectCollisions, addr 0x490194c, size 0x44, virtual false, abstract: false, final false
  inline void set_detectCollisions(bool value);

  /// @brief Method set_drag, addr 0x4900f1c, size 0x4c, virtual false, abstract: false, final false
  inline void set_drag(float_t value);

  /// @brief Method set_excludeLayers, addr 0x490242c, size 0x48, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x4902474, size 0x44, virtual false, abstract: false, final false
  inline void set_excludeLayers_Injected(::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_freezeRotation, addr 0x4901288, size 0x44, virtual false, abstract: false, final false
  inline void set_freezeRotation(bool value);

  /// @brief Method set_includeLayers, addr 0x4902548, size 0x48, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x4902590, size 0x44, virtual false, abstract: false, final false
  inline void set_includeLayers_Injected(::ByRef<::UnityEngine::LayerMask> value);

  /// @brief Method set_inertiaTensor, addr 0x4901878, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x4901740, size 0x54, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x4901794, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x49018cc, size 0x44, virtual false, abstract: false, final false
  inline void set_inertiaTensor_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_interpolation, addr 0x4901c38, size 0x44, virtual false, abstract: false, final false
  inline void set_interpolation(::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method set_isKinematic, addr 0x4901208, size 0x44, virtual false, abstract: false, final false
  inline void set_isKinematic(bool value);

  /// @brief Method set_mass, addr 0x490102c, size 0x4c, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_maxAngularVelocity, addr 0x4901dc0, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x4901180, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x4901e48, size 0x4c, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_position, addr 0x4901a30, size 0x54, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x4901a84, size 0x44, virtual false, abstract: false, final false
  inline void set_position_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_rotation, addr 0x4901b64, size 0x54, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotation_Injected, addr 0x4901bb8, size 0x44, virtual false, abstract: false, final false
  inline void set_rotation_Injected(::ByRef<::UnityEngine::Quaternion> value);

  /// @brief Method set_sleepAngularVelocity, addr 0x4903218, size 0x4, virtual false, abstract: false, final false
  inline void set_sleepAngularVelocity(float_t value);

  /// @brief Method set_sleepThreshold, addr 0x4901d38, size 0x4c, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepVelocity, addr 0x490320c, size 0x4, virtual false, abstract: false, final false
  inline void set_sleepVelocity(float_t value);

  /// @brief Method set_solverIterationCount, addr 0x49032b0, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterationCount(int32_t value);

  /// @brief Method set_solverIterations, addr 0x4901cb8, size 0x44, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverVelocityIterationCount, addr 0x4903330, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterationCount(int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x4902358, size 0x44, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_useConeFriction, addr 0x4903270, size 0x4, virtual false, abstract: false, final false
  inline void set_useConeFriction(bool value);

  /// @brief Method set_useGravity, addr 0x4901100, size 0x44, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_velocity, addr 0x4900d10, size 0x54, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

  /// @brief Method set_velocity_Injected, addr 0x4900d64, size 0x44, virtual false, abstract: false, final false
  inline void set_velocity_Injected(::ByRef<::UnityEngine::Vector3> value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15752 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rigidbody, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Rigidbody);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
