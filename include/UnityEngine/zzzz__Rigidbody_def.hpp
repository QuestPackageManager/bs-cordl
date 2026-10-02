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
  /// @brief Method AddExplosionForce, addr 0x70087c4, size 0xc, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius);

  /// [ExcludeFromDocs]
  /// @brief Method AddExplosionForce, addr 0x70087bc, size 0x8, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, float_t upwardsModifier);

  /// @brief Method AddExplosionForce, addr 0x7008670, size 0xd0, virtual false, abstract: false, final false
  inline void AddExplosionForce(float_t explosionForce, ::UnityEngine::Vector3 explosionPosition, float_t explosionRadius, /* [DefaultValue("0.0f")] */ float_t upwardsModifier,
                                /* [DefaultValue("ForceMode.Force)")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddExplosionForce_Injected, addr 0x7008740, size 0x7c, virtual false, abstract: false, final false
  static inline void AddExplosionForce_Injected(::System::IntPtr _unity_self, float_t explosionForce, ::by_ref<::UnityEngine::Vector3> explosionPosition, float_t explosionRadius,
                                                /* [DefaultValue("0.0f")] */ float_t upwardsModifier, /* [DefaultValue("ForceMode.Force)")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddForce, addr 0x7008214, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force);

  /// @brief Method AddForce, addr 0x7008118, size 0xa8, virtual false, abstract: false, final false
  inline void AddForce(::UnityEngine::Vector3 force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddForce, addr 0x7008220, size 0x8, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z);

  /// @brief Method AddForce, addr 0x700821c, size 0x4, virtual false, abstract: false, final false
  inline void AddForce(float_t x, float_t y, float_t z, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddForceAtPosition, addr 0x7008668, size 0x8, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position);

  /// @brief Method AddForceAtPosition, addr 0x7008558, size 0xb4, virtual false, abstract: false, final false
  inline void AddForceAtPosition(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 position, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddForceAtPosition_Injected, addr 0x700860c, size 0x5c, virtual false, abstract: false, final false
  static inline void AddForceAtPosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> force, ::by_ref<::UnityEngine::Vector3> position,
                                                 /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddForce_Injected, addr 0x70081c0, size 0x54, virtual false, abstract: false, final false
  static inline void AddForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeForce, addr 0x7008324, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force);

  /// @brief Method AddRelativeForce, addr 0x7008228, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeForce(::UnityEngine::Vector3 force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeForce, addr 0x7008330, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeForce, addr 0x700832c, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeForce(float_t x, float_t y, float_t z, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeForce_Injected, addr 0x70082d0, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeForce_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> force, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeTorque, addr 0x7008544, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddRelativeTorque, addr 0x7008448, size 0xa8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(::UnityEngine::Vector3 torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddRelativeTorque, addr 0x7008550, size 0x8, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddRelativeTorque, addr 0x700854c, size 0x4, virtual false, abstract: false, final false
  inline void AddRelativeTorque(float_t x, float_t y, float_t z, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddRelativeTorque_Injected, addr 0x70084f0, size 0x54, virtual false, abstract: false, final false
  static inline void AddRelativeTorque_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddTorque, addr 0x7008434, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque);

  /// @brief Method AddTorque, addr 0x7008338, size 0xa8, virtual false, abstract: false, final false
  inline void AddTorque(::UnityEngine::Vector3 torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// [ExcludeFromDocs]
  /// @brief Method AddTorque, addr 0x7008440, size 0x8, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z);

  /// @brief Method AddTorque, addr 0x700843c, size 0x4, virtual false, abstract: false, final false
  inline void AddTorque(float_t x, float_t y, float_t z, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method AddTorque_Injected, addr 0x70083e0, size 0x54, virtual false, abstract: false, final false
  static inline void AddTorque_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> torque, /* [DefaultValue("ForceMode.Force")] */ ::UnityEngine::ForceMode mode);

  /// @brief Method ClosestPointOnBounds, addr 0x70088dc, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ClosestPointOnBounds(::UnityEngine::Vector3 position);

  /// [ExcludeFromDocs]
  /// @brief Method GetAccumulatedForce, addr 0x7007f94, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce();

  /// @brief Method GetAccumulatedForce, addr 0x7007e90, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedForce(/* [DefaultValue("Time.fixedDeltaTime")] */ float_t step);

  /// @brief Method GetAccumulatedForce_Injected, addr 0x7007f40, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedForce_Injected(::System::IntPtr _unity_self, /* [DefaultValue("Time.fixedDeltaTime")] */ float_t step, ::by_ref<::UnityEngine::Vector3> ret);

  /// [ExcludeFromDocs]
  /// @brief Method GetAccumulatedTorque, addr 0x70080d8, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque();

  /// @brief Method GetAccumulatedTorque, addr 0x7007fd4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetAccumulatedTorque(/* [DefaultValue("Time.fixedDeltaTime")] */ float_t step);

  /// @brief Method GetAccumulatedTorque_Injected, addr 0x7008084, size 0x54, virtual false, abstract: false, final false
  static inline void GetAccumulatedTorque_Injected(::System::IntPtr _unity_self, /* [DefaultValue("Time.fixedDeltaTime")] */ float_t step, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetPointVelocity, addr 0x70077dc, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPointVelocity(::UnityEngine::Vector3 worldPoint);

  /// @brief Method GetPointVelocity_Injected, addr 0x7007888, size 0x54, virtual false, abstract: false, final false
  static inline void GetPointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> worldPoint, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method GetRelativePointVelocity, addr 0x70076dc, size 0xac, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetRelativePointVelocity(::UnityEngine::Vector3 relativePoint);

  /// @brief Method GetRelativePointVelocity_Injected, addr 0x7007788, size 0x54, virtual false, abstract: false, final false
  static inline void GetRelativePointVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> relativePoint, ::by_ref<::UnityEngine::Vector3> ret);

  /// [NativeName("ClosestPointOnBounds")]
  /// @brief Method Internal_ClosestPointOnBounds, addr 0x70087d0, size 0xb0, virtual false, abstract: false, final false
  inline void Internal_ClosestPointOnBounds(::UnityEngine::Vector3 point, ::by_ref<::UnityEngine::Vector3> outPos, ::by_ref<float_t> distance);

  /// @brief Method Internal_ClosestPointOnBounds_Injected, addr 0x7008880, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_ClosestPointOnBounds_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> point, ::by_ref<::UnityEngine::Vector3> outPos, ::by_ref<float_t> distance);

  /// [NativeName("SweepTestAll")]
  /// @brief Method Internal_SweepTestAll, addr 0x7008c1c, size 0x18c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit> Internal_SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SweepTestAll_Injected, addr 0x7008da8, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SweepTestAll_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> direction, float_t maxDistance,
                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method IsSleeping, addr 0x70073ec, size 0x80, virtual false, abstract: false, final false
  inline bool IsSleeping();

  /// @brief Method IsSleeping_Injected, addr 0x700746c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsSleeping_Injected(::System::IntPtr _unity_self);

  /// @brief Method Move, addr 0x7007238, size 0xa4, virtual false, abstract: false, final false
  inline void Move(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method MovePosition, addr 0x7007080, size 0x98, virtual false, abstract: false, final false
  inline void MovePosition(::UnityEngine::Vector3 position);

  /// @brief Method MovePosition_Injected, addr 0x7007118, size 0x44, virtual false, abstract: false, final false
  static inline void MovePosition_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position);

  /// @brief Method MoveRotation, addr 0x700715c, size 0x98, virtual false, abstract: false, final false
  inline void MoveRotation(::UnityEngine::Quaternion rotation);

  /// @brief Method MoveRotation_Injected, addr 0x70071f4, size 0x44, virtual false, abstract: false, final false
  static inline void MoveRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> rotation);

  /// @brief Method Move_Injected, addr 0x70072dc, size 0x54, virtual false, abstract: false, final false
  static inline void Move_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation);

  static inline ::UnityEngine::Rigidbody* New_ctor();

  /// @brief Method PublishTransform, addr 0x7007a6c, size 0x80, virtual false, abstract: false, final false
  inline void PublishTransform();

  /// @brief Method PublishTransform_Injected, addr 0x7007aec, size 0x3c, virtual false, abstract: false, final false
  static inline void PublishTransform_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetCenterOfMass, addr 0x7007564, size 0x80, virtual false, abstract: false, final false
  inline void ResetCenterOfMass();

  /// @brief Method ResetCenterOfMass_Injected, addr 0x70075e4, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method ResetInertiaTensor, addr 0x7007620, size 0x80, virtual false, abstract: false, final false
  inline void ResetInertiaTensor();

  /// @brief Method ResetInertiaTensor_Injected, addr 0x70076a0, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
  /// [Obsolete("Please use Rigidbody.mass instead. Setting density on a Rigidbody no longer has any effect.", false)]
  /// @brief Method SetDensity, addr 0x7008f50, size 0x4, virtual false, abstract: false, final false
  inline void SetDensity(float_t density);

  /// @brief Method Sleep, addr 0x7007330, size 0x80, virtual false, abstract: false, final false
  inline void Sleep();

  /// @brief Method Sleep_Injected, addr 0x70073b0, size 0x3c, virtual false, abstract: false, final false
  static inline void Sleep_Injected(::System::IntPtr _unity_self);

  /// @brief Method SweepTest, addr 0x700898c, size 0xec, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit SweepTest(::UnityEngine::Vector3 direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<bool> hasHit);

  /// [ExcludeFromDocs]
  /// @brief Method SweepTest, addr 0x7008c0c, size 0x10, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method SweepTest, addr 0x7008c04, size 0x8, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SweepTest, addr 0x7008af4, size 0x110, virtual false, abstract: false, final false
  inline bool SweepTest(::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                        /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method SweepTestAll, addr 0x7008f28, size 0x10, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit> SweepTestAll(::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method SweepTestAll, addr 0x7008f20, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit> SweepTestAll(::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method SweepTestAll, addr 0x7008e14, size 0x10c, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::RaycastHit> SweepTestAll(::UnityEngine::Vector3 direction, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                                          /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SweepTest_Injected, addr 0x7008a78, size 0x7c, virtual false, abstract: false, final false
  static inline void SweepTest_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> direction, float_t maxDistance, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction,
                                        ::by_ref<bool> hasHit, ::by_ref<::UnityEngine::RaycastHit> ret);

  /// @brief Method WakeUp, addr 0x70074a8, size 0x80, virtual false, abstract: false, final false
  inline void WakeUp();

  /// @brief Method WakeUp_Injected, addr 0x7007528, size 0x3c, virtual false, abstract: false, final false
  static inline void WakeUp_Injected(::System::IntPtr _unity_self);

  /// @brief Method .ctor, addr 0x7008f54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_angularDamping, addr 0x7004df8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_angularDamping();

  /// @brief Method get_angularDamping_Injected, addr 0x7004e78, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_angularDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_angularDrag, addr 0x7008f40, size 0x4, virtual false, abstract: false, final false
  inline float_t get_angularDrag();

  /// @brief Method get_angularVelocity, addr 0x7004aa0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_angularVelocity();

  /// @brief Method get_angularVelocity_Injected, addr 0x7004b40, size 0x44, virtual false, abstract: false, final false
  static inline void get_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_automaticCenterOfMass, addr 0x7005950, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticCenterOfMass();

  /// @brief Method get_automaticCenterOfMass_Injected, addr 0x70059d0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticCenterOfMass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_automaticInertiaTensor, addr 0x7005d84, size 0x80, virtual false, abstract: false, final false
  inline bool get_automaticInertiaTensor();

  /// @brief Method get_automaticInertiaTensor_Injected, addr 0x7005e04, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_automaticInertiaTensor_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_centerOfMass, addr 0x7005ae0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_centerOfMass();

  /// @brief Method get_centerOfMass_Injected, addr 0x7005b80, size 0x44, virtual false, abstract: false, final false
  static inline void get_centerOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_collisionDetectionMode, addr 0x70057c0, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode();

  /// @brief Method get_collisionDetectionMode_Injected, addr 0x7005840, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::CollisionDetectionMode get_collisionDetectionMode_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_constraints, addr 0x70055fc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyConstraints get_constraints();

  /// @brief Method get_constraints_Injected, addr 0x7005740, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RigidbodyConstraints get_constraints_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_detectCollisions, addr 0x700638c, size 0x80, virtual false, abstract: false, final false
  inline bool get_detectCollisions();

  /// @brief Method get_detectCollisions_Injected, addr 0x700640c, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_detectCollisions_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_drag, addr 0x7008f38, size 0x4, virtual false, abstract: false, final false
  inline float_t get_drag();

  /// @brief Method get_excludeLayers, addr 0x7007b28, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_excludeLayers();

  /// @brief Method get_excludeLayers_Injected, addr 0x7007bc0, size 0x44, virtual false, abstract: false, final false
  static inline void get_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret);

  /// @brief Method get_freezeRotation, addr 0x70055e0, size 0x1c, virtual false, abstract: false, final false
  inline bool get_freezeRotation();

  /// @brief Method get_includeLayers, addr 0x7007cdc, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_includeLayers();

  /// @brief Method get_includeLayers_Injected, addr 0x7007d74, size 0x44, virtual false, abstract: false, final false
  static inline void get_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> ret);

  /// @brief Method get_inertiaTensor, addr 0x70060d0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_inertiaTensor();

  /// @brief Method get_inertiaTensorRotation, addr 0x7005f14, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_inertiaTensorRotation();

  /// @brief Method get_inertiaTensorRotation_Injected, addr 0x7005fb0, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_inertiaTensor_Injected, addr 0x7006170, size 0x44, virtual false, abstract: false, final false
  static inline void get_inertiaTensor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_interpolation, addr 0x7006898, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::RigidbodyInterpolation get_interpolation();

  /// @brief Method get_interpolation_Injected, addr 0x7006918, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RigidbodyInterpolation get_interpolation_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_isKinematic, addr 0x7005450, size 0x80, virtual false, abstract: false, final false
  inline bool get_isKinematic();

  /// @brief Method get_isKinematic_Injected, addr 0x70054d0, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_isKinematic_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearDamping, addr 0x7004c60, size 0x80, virtual false, abstract: false, final false
  inline float_t get_linearDamping();

  /// @brief Method get_linearDamping_Injected, addr 0x7004ce0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_linearDamping_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_linearVelocity, addr 0x70048e0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_linearVelocity();

  /// @brief Method get_linearVelocity_Injected, addr 0x7004980, size 0x44, virtual false, abstract: false, final false
  static inline void get_linearVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_mass, addr 0x7004f90, size 0x80, virtual false, abstract: false, final false
  inline float_t get_mass();

  /// @brief Method get_mass_Injected, addr 0x7005010, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_mass_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxAngularVelocity, addr 0x7006d50, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxAngularVelocity();

  /// @brief Method get_maxAngularVelocity_Injected, addr 0x7006dd0, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxDepenetrationVelocity, addr 0x70052b8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxDepenetrationVelocity();

  /// @brief Method get_maxDepenetrationVelocity_Injected, addr 0x7005338, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_maxLinearVelocity, addr 0x7006ee8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_maxLinearVelocity();

  /// @brief Method get_maxLinearVelocity_Injected, addr 0x7006f68, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_maxLinearVelocity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_position, addr 0x700651c, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_position();

  /// @brief Method get_position_Injected, addr 0x70065bc, size 0x44, virtual false, abstract: false, final false
  static inline void get_position_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_rotation, addr 0x70066dc, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Quaternion get_rotation();

  /// @brief Method get_rotation_Injected, addr 0x7006778, size 0x44, virtual false, abstract: false, final false
  static inline void get_rotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> ret);

  /// @brief Method get_sleepThreshold, addr 0x7006bb8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_sleepThreshold();

  /// @brief Method get_sleepThreshold_Injected, addr 0x7006c38, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverIterations, addr 0x7006a28, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverIterations();

  /// @brief Method get_solverIterations_Injected, addr 0x7006aa8, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_solverVelocityIterations, addr 0x70078dc, size 0x80, virtual false, abstract: false, final false
  inline int32_t get_solverVelocityIterations();

  /// @brief Method get_solverVelocityIterations_Injected, addr 0x700795c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterations_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_useGravity, addr 0x7005128, size 0x80, virtual false, abstract: false, final false
  inline bool get_useGravity();

  /// @brief Method get_useGravity_Injected, addr 0x70051a8, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_useGravity_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_velocity, addr 0x7008f48, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_velocity();

  /// @brief Method get_worldCenterOfMass, addr 0x7005ca0, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_worldCenterOfMass();

  /// @brief Method get_worldCenterOfMass_Injected, addr 0x7005d40, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldCenterOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_worldInertiaTensorMatrix, addr 0x7006290, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 get_worldInertiaTensorMatrix();

  /// @brief Method get_worldInertiaTensorMatrix_Injected, addr 0x7006348, size 0x44, virtual false, abstract: false, final false
  static inline void get_worldInertiaTensorMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4> ret);

  /// @brief Method set_angularDamping, addr 0x7004eb4, size 0x90, virtual false, abstract: false, final false
  inline void set_angularDamping(float_t value);

  /// @brief Method set_angularDamping_Injected, addr 0x7004f44, size 0x4c, virtual false, abstract: false, final false
  static inline void set_angularDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_angularDrag, addr 0x7008f44, size 0x4, virtual false, abstract: false, final false
  inline void set_angularDrag(float_t value);

  /// @brief Method set_angularVelocity, addr 0x7004b84, size 0x98, virtual false, abstract: false, final false
  inline void set_angularVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_angularVelocity_Injected, addr 0x7004c1c, size 0x44, virtual false, abstract: false, final false
  static inline void set_angularVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_automaticCenterOfMass, addr 0x7005a0c, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticCenterOfMass(bool value);

  /// @brief Method set_automaticCenterOfMass_Injected, addr 0x7005a9c, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticCenterOfMass_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_automaticInertiaTensor, addr 0x7005e40, size 0x90, virtual false, abstract: false, final false
  inline void set_automaticInertiaTensor(bool value);

  /// @brief Method set_automaticInertiaTensor_Injected, addr 0x7005ed0, size 0x44, virtual false, abstract: false, final false
  static inline void set_automaticInertiaTensor_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_centerOfMass, addr 0x7005bc4, size 0x98, virtual false, abstract: false, final false
  inline void set_centerOfMass(::UnityEngine::Vector3 value);

  /// @brief Method set_centerOfMass_Injected, addr 0x7005c5c, size 0x44, virtual false, abstract: false, final false
  static inline void set_centerOfMass_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_collisionDetectionMode, addr 0x700587c, size 0x90, virtual false, abstract: false, final false
  inline void set_collisionDetectionMode(::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_collisionDetectionMode_Injected, addr 0x700590c, size 0x44, virtual false, abstract: false, final false
  static inline void set_collisionDetectionMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::CollisionDetectionMode value);

  /// @brief Method set_constraints, addr 0x70056b0, size 0x90, virtual false, abstract: false, final false
  inline void set_constraints(::UnityEngine::RigidbodyConstraints value);

  /// @brief Method set_constraints_Injected, addr 0x700577c, size 0x44, virtual false, abstract: false, final false
  static inline void set_constraints_Injected(::System::IntPtr _unity_self, ::UnityEngine::RigidbodyConstraints value);

  /// @brief Method set_detectCollisions, addr 0x7006448, size 0x90, virtual false, abstract: false, final false
  inline void set_detectCollisions(bool value);

  /// @brief Method set_detectCollisions_Injected, addr 0x70064d8, size 0x44, virtual false, abstract: false, final false
  static inline void set_detectCollisions_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_drag, addr 0x7008f3c, size 0x4, virtual false, abstract: false, final false
  inline void set_drag(float_t value);

  /// @brief Method set_excludeLayers, addr 0x7007c04, size 0x94, virtual false, abstract: false, final false
  inline void set_excludeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_excludeLayers_Injected, addr 0x7007c98, size 0x44, virtual false, abstract: false, final false
  static inline void set_excludeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> value);

  /// @brief Method set_freezeRotation, addr 0x700567c, size 0x34, virtual false, abstract: false, final false
  inline void set_freezeRotation(bool value);

  /// @brief Method set_includeLayers, addr 0x7007db8, size 0x94, virtual false, abstract: false, final false
  inline void set_includeLayers(::UnityEngine::LayerMask value);

  /// @brief Method set_includeLayers_Injected, addr 0x7007e4c, size 0x44, virtual false, abstract: false, final false
  static inline void set_includeLayers_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::LayerMask> value);

  /// @brief Method set_inertiaTensor, addr 0x70061b4, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensor(::UnityEngine::Vector3 value);

  /// @brief Method set_inertiaTensorRotation, addr 0x7005ff4, size 0x98, virtual false, abstract: false, final false
  inline void set_inertiaTensorRotation(::UnityEngine::Quaternion value);

  /// @brief Method set_inertiaTensorRotation_Injected, addr 0x700608c, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensorRotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_inertiaTensor_Injected, addr 0x700624c, size 0x44, virtual false, abstract: false, final false
  static inline void set_inertiaTensor_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_interpolation, addr 0x7006954, size 0x90, virtual false, abstract: false, final false
  inline void set_interpolation(::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method set_interpolation_Injected, addr 0x70069e4, size 0x44, virtual false, abstract: false, final false
  static inline void set_interpolation_Injected(::System::IntPtr _unity_self, ::UnityEngine::RigidbodyInterpolation value);

  /// @brief Method set_isKinematic, addr 0x700550c, size 0x90, virtual false, abstract: false, final false
  inline void set_isKinematic(bool value);

  /// @brief Method set_isKinematic_Injected, addr 0x700559c, size 0x44, virtual false, abstract: false, final false
  static inline void set_isKinematic_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_linearDamping, addr 0x7004d1c, size 0x90, virtual false, abstract: false, final false
  inline void set_linearDamping(float_t value);

  /// @brief Method set_linearDamping_Injected, addr 0x7004dac, size 0x4c, virtual false, abstract: false, final false
  static inline void set_linearDamping_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_linearVelocity, addr 0x70049c4, size 0x98, virtual false, abstract: false, final false
  inline void set_linearVelocity(::UnityEngine::Vector3 value);

  /// @brief Method set_linearVelocity_Injected, addr 0x7004a5c, size 0x44, virtual false, abstract: false, final false
  static inline void set_linearVelocity_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_mass, addr 0x700504c, size 0x90, virtual false, abstract: false, final false
  inline void set_mass(float_t value);

  /// @brief Method set_mass_Injected, addr 0x70050dc, size 0x4c, virtual false, abstract: false, final false
  static inline void set_mass_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxAngularVelocity, addr 0x7006e0c, size 0x90, virtual false, abstract: false, final false
  inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_maxAngularVelocity_Injected, addr 0x7006e9c, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxDepenetrationVelocity, addr 0x7005374, size 0x90, virtual false, abstract: false, final false
  inline void set_maxDepenetrationVelocity(float_t value);

  /// @brief Method set_maxDepenetrationVelocity_Injected, addr 0x7005404, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxDepenetrationVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_maxLinearVelocity, addr 0x7006fa4, size 0x90, virtual false, abstract: false, final false
  inline void set_maxLinearVelocity(float_t value);

  /// @brief Method set_maxLinearVelocity_Injected, addr 0x7007034, size 0x4c, virtual false, abstract: false, final false
  static inline void set_maxLinearVelocity_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_position, addr 0x7006600, size 0x98, virtual false, abstract: false, final false
  inline void set_position(::UnityEngine::Vector3 value);

  /// @brief Method set_position_Injected, addr 0x7006698, size 0x44, virtual false, abstract: false, final false
  static inline void set_position_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_rotation, addr 0x70067bc, size 0x98, virtual false, abstract: false, final false
  inline void set_rotation(::UnityEngine::Quaternion value);

  /// @brief Method set_rotation_Injected, addr 0x7006854, size 0x44, virtual false, abstract: false, final false
  static inline void set_rotation_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Quaternion> value);

  /// @brief Method set_sleepThreshold, addr 0x7006c74, size 0x90, virtual false, abstract: false, final false
  inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepThreshold_Injected, addr 0x7006d04, size 0x4c, virtual false, abstract: false, final false
  static inline void set_sleepThreshold_Injected(::System::IntPtr _unity_self, float_t value);

  /// @brief Method set_solverIterations, addr 0x7006ae4, size 0x90, virtual false, abstract: false, final false
  inline void set_solverIterations(int32_t value);

  /// @brief Method set_solverIterations_Injected, addr 0x7006b74, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_solverVelocityIterations, addr 0x7007998, size 0x90, virtual false, abstract: false, final false
  inline void set_solverVelocityIterations(int32_t value);

  /// @brief Method set_solverVelocityIterations_Injected, addr 0x7007a28, size 0x44, virtual false, abstract: false, final false
  static inline void set_solverVelocityIterations_Injected(::System::IntPtr _unity_self, int32_t value);

  /// @brief Method set_useGravity, addr 0x70051e4, size 0x90, virtual false, abstract: false, final false
  inline void set_useGravity(bool value);

  /// @brief Method set_useGravity_Injected, addr 0x7005274, size 0x44, virtual false, abstract: false, final false
  static inline void set_useGravity_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_velocity, addr 0x7008f4c, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19104 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rigidbody) == 0x18, "Size mismatch!");

} // namespace UnityEngine
