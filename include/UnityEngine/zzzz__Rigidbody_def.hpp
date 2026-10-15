#pragma once
// IWYU pragma private; include "UnityEngine/Rigidbody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
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
MARK_REF_T(::UnityEngine::Rigidbody*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rigidbody*, "UnityEngine", "Rigidbody");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/Physics/Rigidbody.h")]
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Rigidbody
class CORDL_TYPE Rigidbody : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_angularDamping, put = set_angularDamping)) float_t angularDamping;

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief [Obsolete("Please use Rigidbody.angularDamping instead. (UnityUpgradable) -> angularDamping")]
  __declspec(property(get = get_angularDrag, put = set_angularDrag)) float_t angularDrag;

  __declspec(property(get = get_angularVelocity, put = set_angularVelocity)) ::UnityEngine::Vector3 angularVelocity;

  __declspec(property(get = get_automaticCenterOfMass, put = set_automaticCenterOfMass)) bool automaticCenterOfMass;

  __declspec(property(get = get_automaticInertiaTensor, put = set_automaticInertiaTensor)) bool automaticInertiaTensor;

  __declspec(property(get = get_centerOfMass, put = set_centerOfMass)) ::UnityEngine::Vector3 centerOfMass;

  __declspec(property(get = get_collisionDetectionMode, put = set_collisionDetectionMode)) ::UnityEngine::CollisionDetectionMode collisionDetectionMode;

  __declspec(property(get = get_constraints, put = set_constraints)) ::UnityEngine::RigidbodyConstraints constraints;

  __declspec(property(get = get_detectCollisions, put = set_detectCollisions)) bool detectCollisions;

  /// [Obsolete("Please use Rigidbody.linearDamping instead. (UnityUpgradable) -> linearDamping")]
  /// @brief [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
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

  __declspec(property(get = get_sleepThreshold, put = set_sleepThreshold)) float_t sleepThreshold;

  __declspec(property(get = get_solverIterations, put = set_solverIterations)) int32_t solverIterations;

  __declspec(property(get = get_solverVelocityIterations, put = set_solverVelocityIterations)) int32_t solverVelocityIterations;

  __declspec(property(get = get_useGravity, put = set_useGravity)) bool useGravity;

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// @brief [Obsolete("Please use Rigidbody.linearVelocity instead. (UnityUpgradable) -> linearVelocity")]
  __declspec(property(get = get_velocity, put = set_velocity)) ::UnityEngine::Vector3 velocity;

  __declspec(property(get = get_worldCenterOfMass)) ::UnityEngine::Vector3 worldCenterOfMass;

  __declspec(property(get = get_worldInertiaTensorMatrix)) ::UnityEngine::Matrix4x4 worldInertiaTensorMatrix;

  /// [ExcludeFromDocs]
  /// @brief Method AddExplosionForce, addr 0x70456b8, size 0xc, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius);

  /// [ExcludeFromDocs]
  /// @brief Method AddExplosionForce, addr 0x70456b0, size 0x8, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier);

  /// @brief Method AddExplosionForce, addr 0x7045564, size 0xd0, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, /* [DefaultValue("0.0f")] */ float_t upwardsModifier,
                                /* [DefaultValue("ForceMode.Force)")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddExplosionForce_Injected, addr 0x7045634, size 0x7c, virtual false, abstract: false, final false
  static inline void AddExplosionForce_Injected(::System::IntPtr _unity_self, float_t explosionForce, ::by_ref<::UnityEngine::Vector3 const> explosionPosition, float_t explosionRadius,
                                                /* [DefaultValue("0.0f")] */ float_t upwardsModifier, /* [DefaultValue("ForceMode.Force)")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddForce, addr 0x7045108, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x704500c, size 0xa8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddForce, addr 0x7045114, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z);

  /// @brief Method AddForce, addr 0x7045110, size 0x4, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddForceAtPosition, addr 0x704555c, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x704544c, size 0xb4, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x7045500, size 0x5c, virtual false, abstract: false, final false
  static inline void AddForceAtPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> force, ::by_ref<::UnityEngine::Vector3 const> position,
                                                 /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x70450b4, size 0x54, virtual false, abstract: false, final false
  static inline void AddForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeForce, addr 0x7045218, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x704511c, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeForce, addr 0x7045224, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeForce, addr 0x7045220, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x70451c4, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeTorque, addr 0x7045438, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x704533c, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeTorque, addr 0x7045444, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeTorque, addr 0x7045440, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x70453e4, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeTorque_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddTorque, addr 0x7045328, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x704522c, size 0xa8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddTorque, addr 0x7045334, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddTorque, addr 0x7045330, size 0x4, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x70452d4, size 0x54, virtual false, abstract: false, final false
  static inline void AddTorque_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method ClosestPointOnBounds, addr 0x70457d0, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// [ExcludeFromDocs]
  /// @brief Method GetAccumulatedForce, addr 0x7044e88, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x7044d84, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(/* [DefaultValue("Time.fixedDeltaTime")] */ float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x7044e34, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedForce_Injected(::System::IntPtr _unity_self, /* [DefaultValue("Time.fixedDeltaTime")] */ float_t step, ::by_ref<::UnityEngine::Vector3> ret);

  /// [ExcludeFromDocs]
  /// @brief Method GetAccumulatedTorque, addr 0x7044fcc, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x7044ec8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(/* [DefaultValue("Time.fixedDeltaTime")] */ float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x7044f78, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedTorque_Injected(::System::IntPtr _unity_self, /* [DefaultValue("Time.fixedDeltaTime")] */ float_t step, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetPointVelocity, addr 0x70446d0, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x704477c, size 0x54, virtual false, abstract: false, final false
  static inline void GetPointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> worldPoint, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x70445d0, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x704467c, size 0x54, virtual false, abstract: false, final false
  static inline void GetRelativePointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> relativePoint, ::by_ref<::UnityEngine::Vector3> ret);

  /// [NativeName("ClosestPointOnBounds")]
  /// @brief Method Internal_ClosestPointOnBounds, addr 0x70456c4, size 0xb0, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::by_ref<::UnityEngine::Vector3> outPos, ::by_ref<float_t> distance);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x7045774, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_ClosestPointOnBounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> point, ::by_ref<::UnityEngine::Vector3> outPos,
                                                            ::by_ref<float_t> distance);

  /// [NativeName("SweepTestAll")]
  /// @brief Method Internal_SweepTestAll, addr 0x7045b10, size 0x18c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit> Internal_SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SweepTestAll_Injected, addr 0x7045c9c, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SweepTestAll_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> direction, float_t maxDistance,
                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method IsSleeping, addr 0x70442e0, size 0x80, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method IsSleeping_Injected, addr 0x7044360, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSleeping_Injected(::System::IntPtr _unity_self);

  /// @brief Method Move, addr 0x704412c, size 0xa4, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method MovePosition, addr 0x7043f74, size 0x98, virtual false, abstract: false, final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MovePosition_Injected, addr 0x704400c, size 0x44, virtual false, abstract: false, final false
  static inline void MovePosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position);

  /// @brief Method MoveRotation, addr 0x7044050, size 0x98, virtual false, abstract: false, final false
  inline void MoveRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method MoveRotation_Injected, addr 0x70440e8, size 0x44, virtual false, abstract: false, final false
  static inline void MoveRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> rotation);

  /// @brief Method Move_Injected, addr 0x70441d0, size 0x54, virtual false, abstract: false, final false
  static inline void Move_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> position, ::by_ref<::UnityEngine::Quaternion const> rotation);

  static inline ::UnityEngine::Rigidbody* New_ctor();

  /// @brief Method PublishTransform, addr 0x7044960, size 0x80, virtual false, abstract: false, final false
  inline void PublishTransform();

  /// @brief Method PublishTransform_Injected, addr 0x70449e0, size 0x3c, virtual false, abstract: false, final false
  static inline void PublishTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetCenterOfMass, addr 0x7044458, size 0x80, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetCenterOfMass_Injected, addr 0x70444d8, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetInertiaTensor, addr 0x7044514, size 0x80, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method ResetInertiaTensor_Injected, addr 0x7044594, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// [Obsolete("Please use Rigidbody.mass instead. Setting density on a Rigidbody no longer has any effect.", false)]
  /// @brief Method SetDensity, addr 0x7045e44, size 0x4, virtual false, abstract: false, final false
  inline void SetDensity(float_t density);

  /// @brief Method Sleep, addr 0x7044224, size 0x80, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method Sleep_Injected, addr 0x70442a4, size 0x3c, virtual false, abstract: false, final false
  static inline void Sleep_Injected(::System::IntPtr _unity_self);

  /// @brief Method SweepTest, addr 0x7045880, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit SweepTest(::UnityEngine::Vector3 direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<bool> hasHit);

  /// [ExcludeFromDocs]
  /// @brief Method SweepTest, addr 0x7045b00, size 0x10, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method SweepTest, addr 0x7045af8, size 0x8, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SweepTest, addr 0x70459e8, size 0x110, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                        /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method SweepTestAll, addr 0x7045e1c, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit> SweepTestAll(::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method SweepTestAll, addr 0x7045e14, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method SweepTestAll, addr 0x7045d08, size 0x10c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit> SweepTestAll(::UnityEngine::Vector3 direction, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                                          /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTest_Injected, addr 0x704596c, size 0x7c, virtual false, abstract: false, final false
  static inline void SweepTest_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> direction, float_t maxDistance,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<bool> hasHit, ::by_ref<::UnityEngine::RaycastHit> ret);

  /// @brief Method WakeUp, addr 0x704439c, size 0x80, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method WakeUp_Injected, addr 0x704441c, size 0x3c, virtual false, abstract: false, final false
  static inline void WakeUp_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x7045e48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularDamping, addr 0x7041cec, size 0x80, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method get_angularDamping_Injected, addr 0x7041d6c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_angularDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularDrag, addr 0x7045e34, size 0x4, virtual false, abstract: false, final false
  inline float_t get_angularDrag();

  /// @brief Method get_angularVelocity, addr 0x7041994, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x7041a34, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x7042844, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticCenterOfMass_Injected, addr 0x70428c4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticInertiaTensor, addr 0x7042c78, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_automaticInertiaTensor_Injected, addr 0x7042cf8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_centerOfMass, addr 0x70429d4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x7042a74, size 0x44, virtual false, abstract: false, final false
  static inline void get_centerOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x70426b4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_collisionDetectionMode_Injected, addr 0x7042734, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_constraints, addr 0x70424f0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyConstraints get_constraints();

  /// @brief Method get_constraints_Injected, addr 0x7042634, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RigidbodyConstraints get_constraints_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_detectCollisions, addr 0x7043280, size 0x80, virtual false, abstract: false, final false
  inline bool get_detectCollisions();

  /// @brief Method get_detectCollisions_Injected, addr 0x7043300, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_detectCollisions_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_drag, addr 0x7045e2c, size 0x4, virtual false, abstract: false, final false
  inline float_t get_drag();

  /// @brief Method get_excludeLayers, addr 0x7044a1c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x7044ab4, size 0x44, virtual false, abstract: false, final false
  static inline void get_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret);

  /// @brief Method get_freezeRotation, addr 0x70424d4, size 0x1c, virtual false, abstract: false, final false
  inline bool get_freezeRotation();

  /// @brief Method get_includeLayers, addr 0x7044bd0, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x7044c68, size 0x44, virtual false, abstract: false, final false
  static inline void get_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret);

  /// @brief Method get_inertiaTensor, addr 0x7042fc4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x7042e08, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x7042ea4, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x7043064, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_interpolation, addr 0x704378c, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyInterpolation get_interpolation();

  /// @brief Method get_interpolation_Injected, addr 0x704380c, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RigidbodyInterpolation get_interpolation_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isKinematic, addr 0x7042344, size 0x80, virtual false, abstract: false, final false
  inline bool get_isKinematic();

  /// @brief Method get_isKinematic_Injected, addr 0x70423c4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isKinematic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearDamping, addr 0x7041b54, size 0x80, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method get_linearDamping_Injected, addr 0x7041bd4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_linearDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearVelocity, addr 0x70417d4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_linearVelocity();

  /// @brief Method get_linearVelocity_Injected, addr 0x7041874, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_mass, addr 0x7041e84, size 0x80, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_mass_Injected, addr 0x7041f04, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_mass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxAngularVelocity, addr 0x7043c44, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxAngularVelocity_Injected, addr 0x7043cc4, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDepenetrationVelocity, addr 0x70421ac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxDepenetrationVelocity_Injected, addr 0x704222c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxLinearVelocity, addr 0x7043ddc, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_maxLinearVelocity_Injected, addr 0x7043e5c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxLinearVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_position, addr 0x7043410, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x70434b0, size 0x44, virtual false, abstract: false, final false
  static inline void get_position_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_rotation, addr 0x70435d0, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotation_Injected, addr 0x704366c, size 0x44, virtual false, abstract: false, final false
  static inline void get_rotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepThreshold, addr 0x7043aac, size 0x80, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_sleepThreshold_Injected, addr 0x7043b2c, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverIterations, addr 0x704391c, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverIterations_Injected, addr 0x704399c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverVelocityIterations, addr 0x70447d0, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_solverVelocityIterations_Injected, addr 0x7044850, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useGravity, addr 0x704201c, size 0x80, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_useGravity_Injected, addr 0x704209c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useGravity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x7045e3c, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_worldCenterOfMass, addr 0x7042b94, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x7042c34, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldCenterOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldInertiaTensorMatrix, addr 0x7043184, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldInertiaTensorMatrix();

  /// @brief Method get_worldInertiaTensorMatrix_Injected, addr 0x704323c, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldInertiaTensorMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_angularDamping, addr 0x7041da8, size 0x90, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method set_angularDamping_Injected, addr 0x7041e38, size 0x4c, virtual false, abstract: false, final false
  static inline void set_angularDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_angularDrag, addr 0x7045e38, size 0x4, virtual false, abstract: false, final false
  inline void set_angularDrag(float_t value);

  /// @brief Method set_angularVelocity, addr 0x7041a78, size 0x98, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x7041b10, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x7042900, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticCenterOfMass_Injected, addr 0x7042990, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticCenterOfMass_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x7042d34, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_automaticInertiaTensor_Injected, addr 0x7042dc4, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticInertiaTensor_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_centerOfMass, addr 0x7042ab8, size 0x98, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x7042b50, size 0x44, virtual false, abstract: false, final false
  static inline void set_centerOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_collisionDetectionMode, addr 0x7042770, size 0x90, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_collisionDetectionMode_Injected, addr 0x7042800, size 0x44, virtual false, abstract: false, final false
  static inline void set_collisionDetectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_constraints, addr 0x70425a4, size 0x90, virtual false, abstract: false, final false
  inline void set_constraints(::UnityEngine::RigidbodyConstraints value);

  /// @brief Method set_constraints_Injected, addr 0x7042670, size 0x44, virtual false, abstract: false, final false
  static inline void set_constraints_Injected(::System::IntPtr _unity_self, ::UnityEngine::RigidbodyConstraints value);

  /// @brief Method set_detectCollisions, addr 0x704333c, size 0x90, virtual false, abstract: false, final false
  inline void set_detectCollisions(bool value);

  /// @brief Method set_detectCollisions_Injected, addr 0x70433cc, size 0x44, virtual false, abstract: false, final false
  static inline void set_detectCollisions_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_drag, addr 0x7045e30, size 0x4, virtual false, abstract: false, final false
  inline void set_drag(float_t value);

  /// @brief Method set_excludeLayers, addr 0x7044af8, size 0x94, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x7044b8c, size 0x44, virtual false, abstract: false, final false
  static inline void set_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask const> value);

  /// @brief Method set_freezeRotation, addr 0x7042570, size 0x34, virtual false, abstract: false, final false
  inline void set_freezeRotation(bool value);

  /// @brief Method set_includeLayers, addr 0x7044cac, size 0x94, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x7044d40, size 0x44, virtual false, abstract: false, final false
  static inline void set_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask const> value);

  /// @brief Method set_inertiaTensor, addr 0x70430a8, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x7042ee8, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x7042f80, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x7043140, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_interpolation, addr 0x7043848, size 0x90, virtual false, abstract: false, final false
  inline void set_interpolation(::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method set_interpolation_Injected, addr 0x70438d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_interpolation_Injected(::System::IntPtr _unity_self, ::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method set_isKinematic, addr 0x7042400, size 0x90, virtual false, abstract: false, final false
  inline void set_isKinematic(bool value);

  /// @brief Method set_isKinematic_Injected, addr 0x7042490, size 0x44, virtual false, abstract: false, final false
  static inline void set_isKinematic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_linearDamping, addr 0x7041c10, size 0x90, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method set_linearDamping_Injected, addr 0x7041ca0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_linearDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_linearVelocity, addr 0x70418b8, size 0x98, virtual false, abstract: false, final false
  inline void set_linearVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_linearVelocity_Injected, addr 0x7041950, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_mass, addr 0x7041f40, size 0x90, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_mass_Injected, addr 0x7041fd0, size 0x4c, virtual false, abstract: false, final false
  static inline void set_mass_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxAngularVelocity, addr 0x7043d00, size 0x90, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxAngularVelocity_Injected, addr 0x7043d90, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x7042268, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity_Injected, addr 0x70422f8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x7043e98, size 0x90, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity_Injected, addr 0x7043f28, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxLinearVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_position, addr 0x70434f4, size 0x98, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x704358c, size 0x44, virtual false, abstract: false, final false
  static inline void set_position_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3 const> value);

  /// @brief Method set_rotation, addr 0x70436b0, size 0x98, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotation_Injected, addr 0x7043748, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion const> value);

  /// @brief Method set_sleepThreshold, addr 0x7043b68, size 0x90, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepThreshold_Injected, addr 0x7043bf8, size 0x4c, virtual false, abstract: false, final false
  static inline void set_sleepThreshold_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_solverIterations, addr 0x70439d8, size 0x90, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverIterations_Injected, addr 0x7043a68, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x704488c, size 0x90, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_solverVelocityIterations_Injected, addr 0x704491c, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverVelocityIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_useGravity, addr 0x70420d8, size 0x90, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_useGravity_Injected, addr 0x7042168, size 0x44, virtual false, abstract: false, final false
  static inline void set_useGravity_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_velocity, addr 0x7045e40, size 0x4, virtual false, abstract: false, final false
  inline void set_velocity(::UnityEngine::Vector3 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rigidbody();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rigidbody(Rigidbody&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rigidbody", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rigidbody(Rigidbody const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19137 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rigidbody) == 0x18, "Size mismatch!");

} // namespace UnityEngine
