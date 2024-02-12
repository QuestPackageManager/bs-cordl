#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Physics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Physics);
// Type: UnityEngine::Physics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13901))
// CS Name: ::UnityEngine::Physics*
class CORDL_TYPE Physics : public ::System::Object {
public:
  // Declarations
  /// @brief Field ContactModifyEvent, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_ContactModifyEvent,
               put = setStaticF_ContactModifyEvent))::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* ContactModifyEvent;

  /// @brief Field ContactModifyEventCCD, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_ContactModifyEventCCD,
      put = setStaticF_ContactModifyEventCCD))::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* ContactModifyEventCCD;

  static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent();

  static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD();

  /// @brief Method add_ContactModifyEvent, addr 0x2d2364c, size 0xcc, virtual false, abstract: false, final false
  static inline void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method remove_ContactModifyEvent, addr 0x2d23718, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method add_ContactModifyEventCCD, addr 0x2d237e4, size 0xd0, virtual false, abstract: false, final false
  static inline void add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method remove_ContactModifyEventCCD, addr 0x2d238b4, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method OnSceneContactModify, addr 0x2d23984, size 0xcc, virtual false, abstract: false, final false
  static inline void OnSceneContactModify(::UnityEngine::PhysicsScene scene, void* buffer, int32_t count, bool isCCD);

  /// @brief Method get_minPenetrationForPenalty, addr 0x2d23a50, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_minPenetrationForPenalty();

  /// @brief Method set_minPenetrationForPenalty, addr 0x2d23a58, size 0x4, virtual false, abstract: false, final false
  static inline void set_minPenetrationForPenalty(float_t value);

  /// @brief Method get_bounceTreshold, addr 0x2d23a5c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_bounceTreshold();

  /// @brief Method set_bounceTreshold, addr 0x2d23aac, size 0x38, virtual false, abstract: false, final false
  static inline void set_bounceTreshold(float_t value);

  /// @brief Method get_sleepVelocity, addr 0x2d23b1c, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_sleepVelocity();

  /// @brief Method set_sleepVelocity, addr 0x2d23b24, size 0x4, virtual false, abstract: false, final false
  static inline void set_sleepVelocity(float_t value);

  /// @brief Method get_sleepAngularVelocity, addr 0x2d23b28, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_sleepAngularVelocity();

  /// @brief Method set_sleepAngularVelocity, addr 0x2d23b30, size 0x4, virtual false, abstract: false, final false
  static inline void set_sleepAngularVelocity(float_t value);

  /// @brief Method get_maxAngularVelocity, addr 0x2d23b34, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity();

  /// @brief Method set_maxAngularVelocity, addr 0x2d23b3c, size 0x4, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity(float_t value);

  /// @brief Method get_solverIterationCount, addr 0x2d23b40, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_solverIterationCount();

  /// @brief Method set_solverIterationCount, addr 0x2d23b90, size 0x3c, virtual false, abstract: false, final false
  static inline void set_solverIterationCount(int32_t value);

  /// @brief Method get_solverVelocityIterationCount, addr 0x2d23c08, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterationCount();

  /// @brief Method set_solverVelocityIterationCount, addr 0x2d23c58, size 0x3c, virtual false, abstract: false, final false
  static inline void set_solverVelocityIterationCount(int32_t value);

  /// @brief Method get_penetrationPenaltyForce, addr 0x2d23cd0, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_penetrationPenaltyForce();

  /// @brief Method set_penetrationPenaltyForce, addr 0x2d23cd8, size 0x4, virtual false, abstract: false, final false
  static inline void set_penetrationPenaltyForce(float_t value);

  /// @brief Method get_gravity, addr 0x2d23cdc, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_gravity();

  /// @brief Method set_gravity, addr 0x2d23d64, size 0x44, virtual false, abstract: false, final false
  static inline void set_gravity(::UnityEngine::Vector3 value);

  /// @brief Method get_defaultContactOffset, addr 0x2d23de4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultContactOffset();

  /// @brief Method set_defaultContactOffset, addr 0x2d23e0c, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultContactOffset(float_t value);

  /// @brief Method get_sleepThreshold, addr 0x2d23e44, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold();

  /// @brief Method set_sleepThreshold, addr 0x2d23e6c, size 0x38, virtual false, abstract: false, final false
  static inline void set_sleepThreshold(float_t value);

  /// @brief Method get_queriesHitTriggers, addr 0x2d23ea4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitTriggers();

  /// @brief Method set_queriesHitTriggers, addr 0x2d23ecc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitTriggers(bool value);

  /// @brief Method get_queriesHitBackfaces, addr 0x2d23f08, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitBackfaces();

  /// @brief Method set_queriesHitBackfaces, addr 0x2d23f30, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitBackfaces(bool value);

  /// @brief Method get_bounceThreshold, addr 0x2d23a84, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_bounceThreshold();

  /// @brief Method set_bounceThreshold, addr 0x2d23ae4, size 0x38, virtual false, abstract: false, final false
  static inline void set_bounceThreshold(float_t value);

  /// @brief Method get_defaultMaxDepenetrationVelocity, addr 0x2d23f6c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxDepenetrationVelocity();

  /// @brief Method set_defaultMaxDepenetrationVelocity, addr 0x2d23f94, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxDepenetrationVelocity(float_t value);

  /// @brief Method get_defaultSolverIterations, addr 0x2d23b68, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverIterations();

  /// @brief Method set_defaultSolverIterations, addr 0x2d23bcc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverIterations(int32_t value);

  /// @brief Method get_defaultSolverVelocityIterations, addr 0x2d23c30, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverVelocityIterations();

  /// @brief Method set_defaultSolverVelocityIterations, addr 0x2d23c94, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverVelocityIterations(int32_t value);

  /// @brief Method get_defaultMaxAngularSpeed, addr 0x2d23fcc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxAngularSpeed();

  /// @brief Method set_defaultMaxAngularSpeed, addr 0x2d23ff4, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxAngularSpeed(float_t value);

  /// @brief Method get_improvedPatchFriction, addr 0x2d2402c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_improvedPatchFriction();

  /// @brief Method set_improvedPatchFriction, addr 0x2d24054, size 0x3c, virtual false, abstract: false, final false
  static inline void set_improvedPatchFriction(bool value);

  /// @brief Method get_defaultPhysicsScene, addr 0x2d24090, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene();

  /// @brief Method IgnoreCollision, addr 0x2d24110, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2, bool ignore);

  /// @brief Method IgnoreCollision, addr 0x2d24164, size 0x48, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method IgnoreLayerCollision, addr 0x2d241ac, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore);

  /// @brief Method IgnoreLayerCollision, addr 0x2d24200, size 0x48, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method GetIgnoreLayerCollision, addr 0x2d24248, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method GetIgnoreCollision, addr 0x2d2428c, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method Raycast, addr 0x2d242d0, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d244ec, size 0xc4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x2d245b0, size 0xb8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method Raycast, addr 0x2d24668, size 0xb0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method Raycast, addr 0x2d24718, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d24958, size 0xcc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x2d24a24, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x2d24aec, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Raycast, addr 0x2d24bac, size 0xd0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d24c7c, size 0xc4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x2d24d40, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method Raycast, addr 0x2d24e00, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray);

  /// @brief Method Raycast, addr 0x2d24ec0, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d24f98, size 0x7c, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x2d25014, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x2d250dc, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Linecast, addr 0x2d251a4, size 0x114, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Linecast, addr 0x2d252b8, size 0x8, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask);

  /// @brief Method Linecast, addr 0x2d252c0, size 0xc, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  /// @brief Method Linecast, addr 0x2d252cc, size 0x124, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask,
                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Linecast, addr 0x2d253f0, size 0x8, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask);

  /// @brief Method Linecast, addr 0x2d253f8, size 0xc, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method CapsuleCast, addr 0x2d25404, size 0xdc, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x2d25500, size 0x20, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x2d25520, size 0x24, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method CapsuleCast, addr 0x2d25544, size 0x3c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method CapsuleCast, addr 0x2d25580, size 0xdc, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x2d2565c, size 0x20, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x2d2567c, size 0x24, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance);

  /// @brief Method CapsuleCast, addr 0x2d256a0, size 0x3c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SphereCast, addr 0x2d256dc, size 0xcc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x2d257b0, size 0x8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x2d257b8, size 0xc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x2d257c4, size 0x14, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SphereCast, addr 0x2d257d8, size 0xa8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x2d25880, size 0x34, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x2d258b4, size 0x38, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x2d258ec, size 0x40, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius);

  /// @brief Method SphereCast, addr 0x2d2592c, size 0x98, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x2d259c4, size 0x34, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x2d259f8, size 0x38, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x2d25a30, size 0x40, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method BoxCast, addr 0x2d25a70, size 0xd4, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCast, addr 0x2d25b74, size 0x28, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask);

  /// @brief Method BoxCast, addr 0x2d25b9c, size 0x2c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCast, addr 0x2d25bc8, size 0x44, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCast, addr 0x2d25c0c, size 0xd4, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction);

  /// @brief Method BoxCast, addr 0x2d25ce0, size 0xdc, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCast, addr 0x2d25dbc, size 0x28, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCast, addr 0x2d25de4, size 0x2c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCast, addr 0x2d25e10, size 0x44, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCast, addr 0x2d25e54, size 0xe4, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Internal_RaycastAll, addr 0x2d25f38, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance,
                                                                                                             int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x2d2601c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x2d261bc, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                    int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x2d261c4, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x2d261d0, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method RaycastAll, addr 0x2d261e4, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x2d2625c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x2d262d0, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x2d26338, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray);

  /// @brief Method RaycastNonAlloc, addr 0x2d263a0, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x2d26650, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x2d26720, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x2d267e4, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method RaycastNonAlloc, addr 0x2d268a8, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x2d2697c, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x2d26a44, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x2d26b08, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method Query_CapsuleCastAll, addr 0x2d26bc4, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0,
                                                                                                              ::UnityEngine::Vector3 p1, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                              float_t maxDistance, int32_t mask,
                                                                                                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastAll, addr 0x2d26cec, size 0x18c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastAll, addr 0x2d26e78, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCastAll, addr 0x2d26e98, size 0x24, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method CapsuleCastAll, addr 0x2d26ebc, size 0x38, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction);

  /// @brief Method Query_SphereCastAll, addr 0x2d26ef4, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius,
                                                                                                             ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask,
                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x2d27000, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance, int32_t layerMask,
                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x2d2717c, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x2d27184, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance);

  /// @brief Method SphereCastAll, addr 0x2d27190, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method SphereCastAll, addr 0x2d271a4, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask,
                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x2d2722c, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x2d2725c, size 0x34, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// @brief Method SphereCastAll, addr 0x2d27290, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius);

  /// @brief Method OverlapCapsule_Internal, addr 0x2d272cc, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule_Internal(::UnityEngine::PhysicsScene physicsScene,
                                                                                                                                 ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
                                                                                                                                 float_t radius, int32_t layerMask,
                                                                                                                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule, addr 0x2d273c8, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule, addr 0x2d27478, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                                                                                                        int32_t layerMask);

  /// @brief Method OverlapCapsule, addr 0x2d27480, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius);

  /// @brief Method OverlapSphere_Internal, addr 0x2d2748c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere, addr 0x2d2756c, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere, addr 0x2d275fc, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method OverlapSphere, addr 0x2d27604, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method Simulate_Internal, addr 0x2d27610, size 0x48, virtual false, abstract: false, final false
  static inline void Simulate_Internal(::UnityEngine::PhysicsScene physicsScene, float_t step);

  /// @brief Method Simulate, addr 0x2d276a4, size 0x10c, virtual false, abstract: false, final false
  static inline void Simulate(float_t step);

  /// @brief Method get_autoSimulation, addr 0x2d277b0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_autoSimulation();

  /// @brief Method set_autoSimulation, addr 0x2d277d8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_autoSimulation(bool value);

  /// @brief Method SyncTransforms, addr 0x2d27814, size 0x28, virtual false, abstract: false, final false
  static inline void SyncTransforms();

  /// @brief Method get_autoSyncTransforms, addr 0x2d2783c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_autoSyncTransforms();

  /// @brief Method set_autoSyncTransforms, addr 0x2d27864, size 0x3c, virtual false, abstract: false, final false
  static inline void set_autoSyncTransforms(bool value);

  /// @brief Method get_reuseCollisionCallbacks, addr 0x2d278a0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_reuseCollisionCallbacks();

  /// @brief Method set_reuseCollisionCallbacks, addr 0x2d278c8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reuseCollisionCallbacks(bool value);

  /// @brief Method Query_ComputePenetration, addr 0x2d27904, size 0xa4, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                              ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ByRef<::UnityEngine::Vector3> direction, ByRef<float_t> distance);

  /// @brief Method ComputePenetration, addr 0x2d27a34, size 0xe8, virtual false, abstract: false, final false
  static inline bool ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                        ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ByRef<::UnityEngine::Vector3> direction, ByRef<float_t> distance);

  /// @brief Method Query_ClosestPoint, addr 0x2d27b1c, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Query_ClosestPoint(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point);

  /// @brief Method ClosestPoint, addr 0x2d27c10, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method get_interCollisionDistance, addr 0x2d27c40, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionDistance();

  /// @brief Method set_interCollisionDistance, addr 0x2d27c68, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionDistance(float_t value);

  /// @brief Method get_interCollisionStiffness, addr 0x2d27ca0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionStiffness();

  /// @brief Method set_interCollisionStiffness, addr 0x2d27cc8, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionStiffness(float_t value);

  /// @brief Method get_interCollisionSettingsToggle, addr 0x2d27d00, size 0x28, virtual false, abstract: false, final false
  static inline bool get_interCollisionSettingsToggle();

  /// @brief Method set_interCollisionSettingsToggle, addr 0x2d27d28, size 0x3c, virtual false, abstract: false, final false
  static inline void set_interCollisionSettingsToggle(bool value);

  /// @brief Method get_clothGravity, addr 0x2d27d64, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_clothGravity();

  /// @brief Method set_clothGravity, addr 0x2d27dec, size 0x44, virtual false, abstract: false, final false
  static inline void set_clothGravity(::UnityEngine::Vector3 value);

  /// @brief Method OverlapSphereNonAlloc, addr 0x2d27e6c, size 0x98, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphereNonAlloc, addr 0x2d27f0c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask);

  /// @brief Method OverlapSphereNonAlloc, addr 0x2d27f14, size 0xc, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method CheckSphere_Internal, addr 0x2d27f20, size 0x78, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere, addr 0x2d28004, size 0x94, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere, addr 0x2d28098, size 0x8, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method CheckSphere, addr 0x2d280a0, size 0xc, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method CapsuleCastNonAlloc, addr 0x2d280ac, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                            ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastNonAlloc, addr 0x2d282c4, size 0x20, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCastNonAlloc, addr 0x2d282e4, size 0x24, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method CapsuleCastNonAlloc, addr 0x2d28308, size 0x38, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method SphereCastNonAlloc, addr 0x2d28340, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastNonAlloc, addr 0x2d2853c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x2d28544, size 0xc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method SphereCastNonAlloc, addr 0x2d28550, size 0x14, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method SphereCastNonAlloc, addr 0x2d28564, size 0x98, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance,
                                           int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastNonAlloc, addr 0x2d285fc, size 0x30, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance,
                                           int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x2d2862c, size 0x34, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method SphereCastNonAlloc, addr 0x2d28660, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method CheckCapsule_Internal, addr 0x2d2869c, size 0x84, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule, addr 0x2d2879c, size 0xb4, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule, addr 0x2d28850, size 0x8, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask);

  /// @brief Method CheckCapsule, addr 0x2d28858, size 0xc, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius);

  /// @brief Method CheckBox_Internal, addr 0x2d28864, size 0x80, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                       int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox, addr 0x2d28958, size 0xbc, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layermask,
                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox, addr 0x2d28a14, size 0x10, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method CheckBox, addr 0x2d28a24, size 0x14, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation);

  /// @brief Method CheckBox, addr 0x2d28a38, size 0xb4, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// @brief Method OverlapBox_Internal, addr 0x2d28aec, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
                                                                                                                             ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                                                                                                             int32_t layerMask,
                                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox, addr 0x2d28bdc, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation, int32_t layerMask,
                                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox, addr 0x2d28c94, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method OverlapBox, addr 0x2d28ca4, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation);

  /// @brief Method OverlapBox, addr 0x2d28cb8, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// @brief Method OverlapBoxNonAlloc, addr 0x2d28d68, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBoxNonAlloc, addr 0x2d28e54, size 0x10, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation, int32_t mask);

  /// @brief Method OverlapBoxNonAlloc, addr 0x2d28e64, size 0x14, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation);

  /// @brief Method OverlapBoxNonAlloc, addr 0x2d28e78, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method BoxCastNonAlloc, addr 0x2d28f38, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastNonAlloc, addr 0x2d29148, size 0x40, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCastNonAlloc, addr 0x2d29188, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCastNonAlloc, addr 0x2d291b4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                                        int32_t layerMask);

  /// @brief Method BoxCastNonAlloc, addr 0x2d291dc, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method Internal_BoxCastAll, addr 0x2d292bc, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_BoxCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
                                                                                                             ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastAll, addr 0x2d293f0, size 0x1c8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastAll, addr 0x2d295b8, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCastAll, addr 0x2d295e0, size 0x2c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCastAll, addr 0x2d2960c, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCastAll, addr 0x2d2964c, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                    ::UnityEngine::Vector3 direction);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x2d2971c, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x2d297ec, size 0x8, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x2d297f4, size 0xc, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method Internal_RebuildBroadphaseRegions, addr 0x2d29800, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_RebuildBroadphaseRegions(::UnityEngine::Bounds bounds, int32_t subdivisions);

  /// @brief Method RebuildBroadphaseRegions, addr 0x2d29888, size 0x114, virtual false, abstract: false, final false
  static inline void RebuildBroadphaseRegions(::UnityEngine::Bounds worldBounds, int32_t subdivisions);

  /// @brief Method BakeMesh, addr 0x2d2999c, size 0x44, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex);

  static inline ::UnityEngine::Physics* New_ctor();

  /// @brief Method .ctor, addr 0x2d299e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gravity_Injected, addr 0x2d23d28, size 0x3c, virtual false, abstract: false, final false
  static inline void get_gravity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_gravity_Injected, addr 0x2d23da8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_gravity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method get_defaultPhysicsScene_Injected, addr 0x2d240d4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultPhysicsScene_Injected(ByRef<::UnityEngine::PhysicsScene> ret);

  /// @brief Method Internal_RaycastAll_Injected, addr 0x2d25fb0, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray,
                                                                                                                      float_t maxDistance, int32_t mask,
                                                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCastAll_Injected, addr 0x2d26c60, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene,
                                                                                                                       ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1,
                                                                                                                       float_t radius, ByRef<::UnityEngine::Vector3> direction, float_t maxDistance,
                                                                                                                       int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCastAll_Injected, addr 0x2d26f7c, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene,
                                                                                                                      ByRef<::UnityEngine::Vector3> origin, float_t radius,
                                                                                                                      ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask,
                                                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule_Internal_Injected, addr 0x2d2734c, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapCapsule_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> point0, ByRef<::UnityEngine::Vector3> point1, float_t radius, int32_t layerMask,
                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere_Internal_Injected, addr 0x2d27500, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapSphere_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Simulate_Internal_Injected, addr 0x2d27658, size 0x4c, virtual false, abstract: false, final false
  static inline void Simulate_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, float_t step);

  /// @brief Method Query_ComputePenetration_Injected, addr 0x2d279a8, size 0x8c, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration_Injected(::UnityEngine::Collider* colliderA, ByRef<::UnityEngine::Vector3> positionA, ByRef<::UnityEngine::Quaternion> rotationA,
                                                       ::UnityEngine::Collider* colliderB, ByRef<::UnityEngine::Vector3> positionB, ByRef<::UnityEngine::Quaternion> rotationB,
                                                       ByRef<::UnityEngine::Vector3> direction, ByRef<float_t> distance);

  /// @brief Method Query_ClosestPoint_Injected, addr 0x2d27ba4, size 0x6c, virtual false, abstract: false, final false
  static inline void Query_ClosestPoint_Injected(::UnityEngine::Collider* collider, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation,
                                                 ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_clothGravity_Injected, addr 0x2d27db0, size 0x3c, virtual false, abstract: false, final false
  static inline void get_clothGravity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method set_clothGravity_Injected, addr 0x2d27e30, size 0x3c, virtual false, abstract: false, final false
  static inline void set_clothGravity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method CheckSphere_Internal_Injected, addr 0x2d27f98, size 0x6c, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal_Injected, addr 0x2d28720, size 0x7c, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> start, ByRef<::UnityEngine::Vector3> end, float_t radius,
                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox_Internal_Injected, addr 0x2d288e4, size 0x74, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> halfExtents,
                                                ByRef<::UnityEngine::Quaternion> orientation, int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox_Internal_Injected, addr 0x2d28b68, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapBox_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> halfExtents,
                               ByRef<::UnityEngine::Quaternion> orientation, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_BoxCastAll_Injected, addr 0x2d2935c, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>
  Internal_BoxCastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> halfExtents,
                               ByRef<::UnityEngine::Vector3> direction, ByRef<::UnityEngine::Quaternion> orientation, float_t maxDistance, int32_t layerMask,
                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RebuildBroadphaseRegions_Injected, addr 0x2d29844, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_RebuildBroadphaseRegions_Injected(ByRef<::UnityEngine::Bounds> bounds, int32_t subdivisions);

  // Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Physics(Physics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Physics(Physics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Physics();

public:
  /// @brief Field kIgnoreRaycastLayer offset 0xffffffff size 0x4
  static constexpr int32_t kIgnoreRaycastLayer{ static_cast<int32_t>(0x4) };

  /// @brief Field kDefaultRaycastLayers offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultRaycastLayers{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field kAllLayers offset 0xffffffff size 0x4
  static constexpr int32_t kAllLayers{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field k_MaxFloatMinusEpsilon offset 0xffffffff size 0x4
  static constexpr float_t k_MaxFloatMinusEpsilon{ 340282330000000000000000000000000000000.0 };

  /// @brief Field IgnoreRaycastLayer offset 0xffffffff size 0x4
  static constexpr int32_t IgnoreRaycastLayer{ static_cast<int32_t>(0x4) };

  /// @brief Field DefaultRaycastLayers offset 0xffffffff size 0x4
  static constexpr int32_t DefaultRaycastLayers{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field AllLayers offset 0xffffffff size 0x4
  static constexpr int32_t AllLayers{ static_cast<int32_t>(0xffffffff) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Physics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics*, "UnityEngine", "Physics");
