#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
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
namespace System {
struct IntPtr;
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

  /// @brief Method BakeMesh, addr 0x3488994, size 0x44, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex);

  /// @brief Method BoxCast, addr 0x3484c04, size 0xd4, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction);

  /// @brief Method BoxCast, addr 0x3484e4c, size 0xe4, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method BoxCast, addr 0x3484e08, size 0x44, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCast, addr 0x3484ddc, size 0x2c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCast, addr 0x3484db4, size 0x28, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCast, addr 0x3484cd8, size 0xdc, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCast, addr 0x3484bc0, size 0x44, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCast, addr 0x3484b94, size 0x2c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCast, addr 0x3484b6c, size 0x28, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask);

  /// @brief Method BoxCast, addr 0x3484a68, size 0xd4, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastAll, addr 0x3488644, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                    ::UnityEngine::Vector3 direction);

  /// @brief Method BoxCastAll, addr 0x3488604, size 0x40, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCastAll, addr 0x34885d8, size 0x2c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCastAll, addr 0x34885b0, size 0x28, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCastAll, addr 0x34883e8, size 0x1c8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastNonAlloc, addr 0x34881d4, size 0xe0, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method BoxCastNonAlloc, addr 0x3488140, size 0x40, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCastNonAlloc, addr 0x3488180, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCastNonAlloc, addr 0x34881ac, size 0x28, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                                        int32_t layerMask);

  /// @brief Method BoxCastNonAlloc, addr 0x3487f30, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x348453c, size 0x3c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method CapsuleCast, addr 0x3484698, size 0x3c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method CapsuleCast, addr 0x3484674, size 0x24, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance);

  /// @brief Method CapsuleCast, addr 0x3484654, size 0x20, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x3484578, size 0xdc, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x3484518, size 0x24, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method CapsuleCast, addr 0x34844f8, size 0x20, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x34843fc, size 0xdc, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastAll, addr 0x3485eb4, size 0x38, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction);

  /// @brief Method CapsuleCastAll, addr 0x3485e90, size 0x24, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method CapsuleCastAll, addr 0x3485e70, size 0x20, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCastAll, addr 0x3485ce4, size 0x18c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastNonAlloc, addr 0x3487300, size 0x38, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method CapsuleCastNonAlloc, addr 0x34872dc, size 0x24, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method CapsuleCastNonAlloc, addr 0x34872bc, size 0x20, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCastNonAlloc, addr 0x34870a4, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                            ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox, addr 0x3487a30, size 0xb4, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// @brief Method CheckBox, addr 0x3487a1c, size 0x14, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation);

  /// @brief Method CheckBox, addr 0x3487a0c, size 0x10, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method CheckBox, addr 0x3487950, size 0xbc, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layermask,
                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox_Internal, addr 0x348785c, size 0x80, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                       int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox_Internal_Injected, addr 0x34878dc, size 0x74, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> halfExtents,
                                                ByRef<::UnityEngine::Quaternion> orientation, int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule, addr 0x3487850, size 0xc, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius);

  /// @brief Method CheckCapsule, addr 0x3487848, size 0x8, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask);

  /// @brief Method CheckCapsule, addr 0x3487794, size 0xb4, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal, addr 0x3487694, size 0x84, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal_Injected, addr 0x3487718, size 0x7c, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> start, ByRef<::UnityEngine::Vector3> end, float_t radius,
                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere, addr 0x3487098, size 0xc, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method CheckSphere, addr 0x3487090, size 0x8, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method CheckSphere, addr 0x3486ffc, size 0x94, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere_Internal, addr 0x3486f18, size 0x78, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere_Internal_Injected, addr 0x3486f90, size 0x6c, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method ClosestPoint, addr 0x3486c08, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method ComputePenetration, addr 0x3486a2c, size 0xe8, virtual false, abstract: false, final false
  static inline bool ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                        ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ByRef<::UnityEngine::Vector3> direction, ByRef<float_t> distance);

  /// @brief Method GetIgnoreCollision, addr 0x3483284, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method GetIgnoreLayerCollision, addr 0x3483240, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method IgnoreCollision, addr 0x348315c, size 0x48, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method IgnoreCollision, addr 0x3483108, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2, bool ignore);

  /// @brief Method IgnoreLayerCollision, addr 0x34831f8, size 0x48, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method IgnoreLayerCollision, addr 0x34831a4, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore);

  /// @brief Method Internal_BoxCastAll, addr 0x34882b4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_BoxCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
                                                                                                             ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_BoxCastAll_Injected, addr 0x3488354, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>
  Internal_BoxCastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> halfExtents,
                               ByRef<::UnityEngine::Vector3> direction, ByRef<::UnityEngine::Quaternion> orientation, float_t maxDistance, int32_t layerMask,
                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastAll, addr 0x3484f30, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance,
                                                                                                             int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastAll_Injected, addr 0x3484fa8, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray,
                                                                                                                      float_t maxDistance, int32_t mask,
                                                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RebuildBroadphaseRegions, addr 0x34887f8, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_RebuildBroadphaseRegions(::UnityEngine::Bounds bounds, int32_t subdivisions);

  /// @brief Method Internal_RebuildBroadphaseRegions_Injected, addr 0x348883c, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_RebuildBroadphaseRegions_Injected(ByRef<::UnityEngine::Bounds> bounds, int32_t subdivisions);

  /// @brief Method Linecast, addr 0x34842b8, size 0xc, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  /// @brief Method Linecast, addr 0x34843f0, size 0xc, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Linecast, addr 0x34843e8, size 0x8, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask);

  /// @brief Method Linecast, addr 0x34842c4, size 0x124, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask,
                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Linecast, addr 0x34842b0, size 0x8, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask);

  /// @brief Method Linecast, addr 0x348419c, size 0x114, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  static inline ::UnityEngine::Physics* New_ctor();

  /// @brief Method OnSceneContactModify, addr 0x348297c, size 0xcc, virtual false, abstract: false, final false
  static inline void OnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count, bool isCCD);

  /// @brief Method OverlapBox, addr 0x3487cb0, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// @brief Method OverlapBox, addr 0x3487c9c, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation);

  /// @brief Method OverlapBox, addr 0x3487c8c, size 0x10, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method OverlapBox, addr 0x3487bd4, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation, int32_t layerMask,
                                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBoxNonAlloc, addr 0x3487e70, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method OverlapBoxNonAlloc, addr 0x3487e5c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation);

  /// @brief Method OverlapBoxNonAlloc, addr 0x3487e4c, size 0x10, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation, int32_t mask);

  /// @brief Method OverlapBoxNonAlloc, addr 0x3487d60, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox_Internal, addr 0x3487ae4, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
                                                                                                                             ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                                                                                                             int32_t layerMask,
                                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox_Internal_Injected, addr 0x3487b60, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapBox_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> halfExtents,
                               ByRef<::UnityEngine::Quaternion> orientation, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule, addr 0x3486478, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius);

  /// @brief Method OverlapCapsule, addr 0x3486470, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                                                                                                        int32_t layerMask);

  /// @brief Method OverlapCapsule, addr 0x34863c0, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x34887ec, size 0xc, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x34887e4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x3488714, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule_Internal, addr 0x34862c4, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule_Internal(::UnityEngine::PhysicsScene physicsScene,
                                                                                                                                 ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
                                                                                                                                 float_t radius, int32_t layerMask,
                                                                                                                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule_Internal_Injected, addr 0x3486344, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapCapsule_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> point0, ByRef<::UnityEngine::Vector3> point1, float_t radius, int32_t layerMask,
                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere, addr 0x34865fc, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method OverlapSphere, addr 0x34865f4, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method OverlapSphere, addr 0x3486564, size 0x90, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphereNonAlloc, addr 0x3486f0c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method OverlapSphereNonAlloc, addr 0x3486f04, size 0x8, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask);

  /// @brief Method OverlapSphereNonAlloc, addr 0x3486e64, size 0x98, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere_Internal, addr 0x3486484, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere_Internal_Injected, addr 0x34864f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapSphere_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCastAll, addr 0x3485bbc, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0,
                                                                                                              ::UnityEngine::Vector3 p1, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                              float_t maxDistance, int32_t mask,
                                                                                                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCastAll_Injected, addr 0x3485c58, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene,
                                                                                                                       ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1,
                                                                                                                       float_t radius, ByRef<::UnityEngine::Vector3> direction, float_t maxDistance,
                                                                                                                       int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_ClosestPoint, addr 0x3486b14, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Query_ClosestPoint(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point);

  /// @brief Method Query_ClosestPoint_Injected, addr 0x3486b9c, size 0x6c, virtual false, abstract: false, final false
  static inline void Query_ClosestPoint_Injected(::UnityEngine::Collider* collider, ByRef<::UnityEngine::Vector3> position, ByRef<::UnityEngine::Quaternion> rotation,
                                                 ByRef<::UnityEngine::Vector3> point, ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Query_ComputePenetration, addr 0x34868fc, size 0xa4, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                              ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ByRef<::UnityEngine::Vector3> direction, ByRef<float_t> distance);

  /// @brief Method Query_ComputePenetration_Injected, addr 0x34869a0, size 0x8c, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration_Injected(::UnityEngine::Collider* colliderA, ByRef<::UnityEngine::Vector3> positionA, ByRef<::UnityEngine::Quaternion> rotationA,
                                                       ::UnityEngine::Collider* colliderB, ByRef<::UnityEngine::Vector3> positionB, ByRef<::UnityEngine::Quaternion> rotationB,
                                                       ByRef<::UnityEngine::Vector3> direction, ByRef<float_t> distance);

  /// @brief Method Query_SphereCastAll, addr 0x3485eec, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius,
                                                                                                             ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask,
                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCastAll_Injected, addr 0x3485f74, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene,
                                                                                                                      ByRef<::UnityEngine::Vector3> origin, float_t radius,
                                                                                                                      ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask,
                                                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x3483660, size 0xb0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method Raycast, addr 0x3483ae4, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Raycast, addr 0x3483a1c, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x3483950, size 0xcc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x3483710, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x34835a8, size 0xb8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method Raycast, addr 0x34834e4, size 0xc4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x34832c8, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x3483df8, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray);

  /// @brief Method Raycast, addr 0x34840d4, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Raycast, addr 0x348400c, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x3483f90, size 0x7c, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x3483eb8, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x3483d38, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method Raycast, addr 0x3483c74, size 0xc4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x3483ba4, size 0xd0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x34851c8, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method RaycastAll, addr 0x34851bc, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x34851b4, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                    int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x3485014, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x3485330, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray);

  /// @brief Method RaycastAll, addr 0x34852c8, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x3485254, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x34851dc, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x3485b00, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method RaycastNonAlloc, addr 0x3485a3c, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x3485974, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x34858a0, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x34857dc, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method RaycastNonAlloc, addr 0x3485718, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x3485648, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x3485398, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RebuildBroadphaseRegions, addr 0x3488880, size 0x114, virtual false, abstract: false, final false
  static inline void RebuildBroadphaseRegions(::UnityEngine::Bounds worldBounds, int32_t subdivisions);

  /// @brief Method Simulate, addr 0x348669c, size 0x10c, virtual false, abstract: false, final false
  static inline void Simulate(float_t step);

  /// @brief Method Simulate_Internal, addr 0x3486608, size 0x48, virtual false, abstract: false, final false
  static inline void Simulate_Internal(::UnityEngine::PhysicsScene physicsScene, float_t step);

  /// @brief Method Simulate_Internal_Injected, addr 0x3486650, size 0x4c, virtual false, abstract: false, final false
  static inline void Simulate_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, float_t step);

  /// @brief Method SphereCast, addr 0x34847bc, size 0x14, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SphereCast, addr 0x34847b0, size 0xc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x34847a8, size 0x8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x34846d4, size 0xcc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x34848e4, size 0x40, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius);

  /// @brief Method SphereCast, addr 0x3484a28, size 0x40, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SphereCast, addr 0x34849f0, size 0x38, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x34849bc, size 0x34, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x3484924, size 0x98, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x34848ac, size 0x38, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x3484878, size 0x34, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x34847d0, size 0xa8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x3486188, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method SphereCastAll, addr 0x348617c, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance);

  /// @brief Method SphereCastAll, addr 0x3486174, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x3485ff8, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance, int32_t layerMask,
                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x3486288, size 0x3c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius);

  /// @brief Method SphereCastAll, addr 0x3486254, size 0x34, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// @brief Method SphereCastAll, addr 0x3486224, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x348619c, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask,
                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastNonAlloc, addr 0x3487548, size 0x14, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method SphereCastNonAlloc, addr 0x348753c, size 0xc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method SphereCastNonAlloc, addr 0x3487534, size 0x8, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x3487338, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastNonAlloc, addr 0x3487658, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method SphereCastNonAlloc, addr 0x3487624, size 0x34, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method SphereCastNonAlloc, addr 0x34875f4, size 0x30, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance,
                                           int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x348755c, size 0x98, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance,
                                           int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SyncTransforms, addr 0x348680c, size 0x28, virtual false, abstract: false, final false
  static inline void SyncTransforms();

  /// @brief Method .ctor, addr 0x34889d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_ContactModifyEvent, addr 0x3482644, size 0xcc, virtual false, abstract: false, final false
  static inline void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method add_ContactModifyEventCCD, addr 0x34827dc, size 0xd0, virtual false, abstract: false, final false
  static inline void add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent();

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD();

  /// @brief Method get_autoSimulation, addr 0x34867a8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_autoSimulation();

  /// @brief Method get_autoSyncTransforms, addr 0x3486834, size 0x28, virtual false, abstract: false, final false
  static inline bool get_autoSyncTransforms();

  /// @brief Method get_bounceThreshold, addr 0x3482a7c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_bounceThreshold();

  /// @brief Method get_bounceTreshold, addr 0x3482a54, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_bounceTreshold();

  /// @brief Method get_clothGravity, addr 0x3486d5c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_clothGravity();

  /// @brief Method get_clothGravity_Injected, addr 0x3486da8, size 0x3c, virtual false, abstract: false, final false
  static inline void get_clothGravity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_defaultContactOffset, addr 0x3482ddc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultContactOffset();

  /// @brief Method get_defaultMaxAngularSpeed, addr 0x3482fc4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxAngularSpeed();

  /// @brief Method get_defaultMaxDepenetrationVelocity, addr 0x3482f64, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxDepenetrationVelocity();

  /// @brief Method get_defaultPhysicsScene, addr 0x3483088, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene();

  /// @brief Method get_defaultPhysicsScene_Injected, addr 0x34830cc, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultPhysicsScene_Injected(ByRef<::UnityEngine::PhysicsScene> ret);

  /// @brief Method get_defaultSolverIterations, addr 0x3482b60, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverIterations();

  /// @brief Method get_defaultSolverVelocityIterations, addr 0x3482c28, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverVelocityIterations();

  /// @brief Method get_gravity, addr 0x3482cd4, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_gravity();

  /// @brief Method get_gravity_Injected, addr 0x3482d20, size 0x3c, virtual false, abstract: false, final false
  static inline void get_gravity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_improvedPatchFriction, addr 0x3483024, size 0x28, virtual false, abstract: false, final false
  static inline bool get_improvedPatchFriction();

  /// @brief Method get_interCollisionDistance, addr 0x3486c38, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionDistance();

  /// @brief Method get_interCollisionSettingsToggle, addr 0x3486cf8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_interCollisionSettingsToggle();

  /// @brief Method get_interCollisionStiffness, addr 0x3486c98, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionStiffness();

  /// @brief Method get_maxAngularVelocity, addr 0x3482b2c, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity();

  /// @brief Method get_minPenetrationForPenalty, addr 0x3482a48, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_minPenetrationForPenalty();

  /// @brief Method get_penetrationPenaltyForce, addr 0x3482cc8, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_penetrationPenaltyForce();

  /// @brief Method get_queriesHitBackfaces, addr 0x3482f00, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitBackfaces();

  /// @brief Method get_queriesHitTriggers, addr 0x3482e9c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitTriggers();

  /// @brief Method get_reuseCollisionCallbacks, addr 0x3486898, size 0x28, virtual false, abstract: false, final false
  static inline bool get_reuseCollisionCallbacks();

  /// @brief Method get_sleepAngularVelocity, addr 0x3482b20, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_sleepAngularVelocity();

  /// @brief Method get_sleepThreshold, addr 0x3482e3c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold();

  /// @brief Method get_sleepVelocity, addr 0x3482b14, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_sleepVelocity();

  /// @brief Method get_solverIterationCount, addr 0x3482b38, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_solverIterationCount();

  /// @brief Method get_solverVelocityIterationCount, addr 0x3482c00, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterationCount();

  /// @brief Method remove_ContactModifyEvent, addr 0x3482710, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method remove_ContactModifyEventCCD, addr 0x34828ac, size 0xd0, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method set_autoSimulation, addr 0x34867d0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_autoSimulation(bool value);

  /// @brief Method set_autoSyncTransforms, addr 0x348685c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_autoSyncTransforms(bool value);

  /// @brief Method set_bounceThreshold, addr 0x3482adc, size 0x38, virtual false, abstract: false, final false
  static inline void set_bounceThreshold(float_t value);

  /// @brief Method set_bounceTreshold, addr 0x3482aa4, size 0x38, virtual false, abstract: false, final false
  static inline void set_bounceTreshold(float_t value);

  /// @brief Method set_clothGravity, addr 0x3486de4, size 0x44, virtual false, abstract: false, final false
  static inline void set_clothGravity(::UnityEngine::Vector3 value);

  /// @brief Method set_clothGravity_Injected, addr 0x3486e28, size 0x3c, virtual false, abstract: false, final false
  static inline void set_clothGravity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_defaultContactOffset, addr 0x3482e04, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultContactOffset(float_t value);

  /// @brief Method set_defaultMaxAngularSpeed, addr 0x3482fec, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxAngularSpeed(float_t value);

  /// @brief Method set_defaultMaxDepenetrationVelocity, addr 0x3482f8c, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxDepenetrationVelocity(float_t value);

  /// @brief Method set_defaultSolverIterations, addr 0x3482bc4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverIterations(int32_t value);

  /// @brief Method set_defaultSolverVelocityIterations, addr 0x3482c8c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverVelocityIterations(int32_t value);

  /// @brief Method set_gravity, addr 0x3482d5c, size 0x44, virtual false, abstract: false, final false
  static inline void set_gravity(::UnityEngine::Vector3 value);

  /// @brief Method set_gravity_Injected, addr 0x3482da0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_gravity_Injected(ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_improvedPatchFriction, addr 0x348304c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_improvedPatchFriction(bool value);

  /// @brief Method set_interCollisionDistance, addr 0x3486c60, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionDistance(float_t value);

  /// @brief Method set_interCollisionSettingsToggle, addr 0x3486d20, size 0x3c, virtual false, abstract: false, final false
  static inline void set_interCollisionSettingsToggle(bool value);

  /// @brief Method set_interCollisionStiffness, addr 0x3486cc0, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionStiffness(float_t value);

  /// @brief Method set_maxAngularVelocity, addr 0x3482b34, size 0x4, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_minPenetrationForPenalty, addr 0x3482a50, size 0x4, virtual false, abstract: false, final false
  static inline void set_minPenetrationForPenalty(float_t value);

  /// @brief Method set_penetrationPenaltyForce, addr 0x3482cd0, size 0x4, virtual false, abstract: false, final false
  static inline void set_penetrationPenaltyForce(float_t value);

  /// @brief Method set_queriesHitBackfaces, addr 0x3482f28, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitBackfaces(bool value);

  /// @brief Method set_queriesHitTriggers, addr 0x3482ec4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitTriggers(bool value);

  /// @brief Method set_reuseCollisionCallbacks, addr 0x34868c0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reuseCollisionCallbacks(bool value);

  /// @brief Method set_sleepAngularVelocity, addr 0x3482b28, size 0x4, virtual false, abstract: false, final false
  static inline void set_sleepAngularVelocity(float_t value);

  /// @brief Method set_sleepThreshold, addr 0x3482e64, size 0x38, virtual false, abstract: false, final false
  static inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepVelocity, addr 0x3482b1c, size 0x4, virtual false, abstract: false, final false
  static inline void set_sleepVelocity(float_t value);

  /// @brief Method set_solverIterationCount, addr 0x3482b88, size 0x3c, virtual false, abstract: false, final false
  static inline void set_solverIterationCount(int32_t value);

  /// @brief Method set_solverVelocityIterationCount, addr 0x3482c50, size 0x3c, virtual false, abstract: false, final false
  static inline void set_solverVelocityIterationCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Physics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Physics(Physics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Physics(Physics const&) = delete;

  /// @brief Field AllLayers offset 0xffffffff size 0x4
  static constexpr int32_t AllLayers{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field DefaultRaycastLayers offset 0xffffffff size 0x4
  static constexpr int32_t DefaultRaycastLayers{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field IgnoreRaycastLayer offset 0xffffffff size 0x4
  static constexpr int32_t IgnoreRaycastLayer{ static_cast<int32_t>(0x4) };

  /// @brief Field kAllLayers offset 0xffffffff size 0x4
  static constexpr int32_t kAllLayers{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kDefaultRaycastLayers offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultRaycastLayers{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field kIgnoreRaycastLayer offset 0xffffffff size 0x4
  static constexpr int32_t kIgnoreRaycastLayer{ static_cast<int32_t>(0x4) };

  /// @brief Field k_MaxFloatMinusEpsilon offset 0xffffffff size 0x4
  static constexpr float_t k_MaxFloatMinusEpsilon{ 340282330000000000000000000000000000000.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Physics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics*, "UnityEngine", "Physics");
