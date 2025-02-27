#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
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
class Collision;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
struct ContactPairHeader;
}
namespace UnityEngine {
struct ContactPair;
}
namespace UnityEngine {
struct MeshColliderCookingOptions;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
class Physics_ContactEventDelegate;
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
struct SimulationMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Physics;
}
namespace UnityEngine {
class Physics_ContactEventDelegate;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Physics);
MARK_REF_PTR_T(::UnityEngine::Physics_ContactEventDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics/ContactEventDelegate
class CORDL_TYPE Physics_ContactEventDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4911c5c, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::PhysicsScene scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> headerArray,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4911d18, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4911c44, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::PhysicsScene scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> headerArray);

  static inline ::UnityEngine::Physics_ContactEventDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4911bb8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Physics_ContactEventDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Physics_ContactEventDelegate(Physics_ContactEventDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Physics_ContactEventDelegate(Physics_ContactEventDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15745 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics_ContactEventDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics
class CORDL_TYPE Physics : public ::System::Object {
public:
  // Declarations
  using ContactEventDelegate = ::UnityEngine::Physics_ContactEventDelegate;

  /// @brief Field ContactEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ContactEvent, put = setStaticF_ContactEvent)) ::UnityEngine::Physics_ContactEventDelegate* ContactEvent;

  /// @brief Field ContactModifyEvent, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_ContactModifyEvent,
      put = setStaticF_ContactModifyEvent)) ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* ContactModifyEvent;

  /// @brief Field ContactModifyEventCCD, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_ContactModifyEventCCD,
      put = setStaticF_ContactModifyEventCCD)) ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* ContactModifyEventCCD;

  /// @brief Field s_ReusableCollision, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReusableCollision, put = setStaticF_s_ReusableCollision)) ::UnityEngine::Collision* s_ReusableCollision;

  /// @brief Method BakeMesh, addr 0x49108e0, size 0x88, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex);

  /// @brief Method BakeMesh, addr 0x491088c, size 0x54, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex, ::UnityEngine::MeshColliderCookingOptions cookingOptions);

  /// @brief Method BoxCast, addr 0x4909f40, size 0xfc, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction);

  /// @brief Method BoxCast, addr 0x490a480, size 0x104, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method BoxCast, addr 0x490a374, size 0x10c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCast, addr 0x490a24c, size 0x128, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCast, addr 0x490a118, size 0x134, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCast, addr 0x490a03c, size 0xdc, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCast, addr 0x4909e3c, size 0x104, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCast, addr 0x4909d1c, size 0x120, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCast, addr 0x4909bf8, size 0x124, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask);

  /// @brief Method BoxCast, addr 0x4909adc, size 0xec, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastAll, addr 0x4910364, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                    ::UnityEngine::Vector3 direction);

  /// @brief Method BoxCastAll, addr 0x4910264, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCastAll, addr 0x4910144, size 0x120, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCastAll, addr 0x4910020, size 0x124, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCastAll, addr 0x490fe70, size 0x1b0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                    ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastNonAlloc, addr 0x490fbfc, size 0x100, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method BoxCastNonAlloc, addr 0x490f898, size 0x108, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCastNonAlloc, addr 0x490f9a0, size 0x128, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCastNonAlloc, addr 0x490fac8, size 0x134, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                                        int32_t layerMask);

  /// @brief Method BoxCastNonAlloc, addr 0x490f688, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                        ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x4908cc8, size 0x104, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method CapsuleCast, addr 0x49090f4, size 0x10c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method CapsuleCast, addr 0x4908fd8, size 0x11c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance);

  /// @brief Method CapsuleCast, addr 0x4908eb0, size 0x128, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x4908dcc, size 0xe4, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x4908bb4, size 0x114, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method CapsuleCast, addr 0x4908a9c, size 0x118, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x4908988, size 0xf4, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastAll, addr 0x490ba6c, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction);

  /// @brief Method CapsuleCastAll, addr 0x490b958, size 0x114, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method CapsuleCastAll, addr 0x490b840, size 0x118, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCastAll, addr 0x490b6bc, size 0x184, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius,
                                                                                                        ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastNonAlloc, addr 0x490dd68, size 0x108, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method CapsuleCastNonAlloc, addr 0x490dc4c, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method CapsuleCastNonAlloc, addr 0x490db24, size 0x128, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCastNonAlloc, addr 0x490d904, size 0xec, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                            ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox, addr 0x490ece0, size 0xec, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// @brief Method CheckBox, addr 0x490ebec, size 0xf4, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation);

  /// @brief Method CheckBox, addr 0x490eaec, size 0x100, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method CheckBox, addr 0x490ea28, size 0xc4, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layermask,
                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox_Internal, addr 0x490e8f4, size 0xc0, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                       int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox_Internal_Injected, addr 0x490e9b4, size 0x74, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> halfExtents,
                                                ::ByRef<::UnityEngine::Quaternion> orientation, int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule, addr 0x490e848, size 0xac, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius);

  /// @brief Method CheckCapsule, addr 0x490e798, size 0xb0, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask);

  /// @brief Method CheckCapsule, addr 0x490e6d4, size 0xc4, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal, addr 0x490e594, size 0xc4, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal_Injected, addr 0x490e658, size 0x7c, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> start, ::ByRef<::UnityEngine::Vector3> end, float_t radius,
                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere, addr 0x490d880, size 0x84, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method CheckSphere, addr 0x490d7f8, size 0x88, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method CheckSphere, addr 0x490d75c, size 0x9c, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere_Internal, addr 0x490d638, size 0xb8, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere_Internal_Injected, addr 0x490d6f0, size 0x6c, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method ClosestPoint, addr 0x490d0f4, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method ComputePenetration, addr 0x490cea0, size 0x128, virtual false, abstract: false, final false
  static inline bool ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                        ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<float_t> distance);

  /// @brief Method GetActorAngularVelocity, addr 0x4910d38, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetActorAngularVelocity(::System::IntPtr actorPtr);

  /// @brief Method GetActorAngularVelocity_Injected, addr 0x4910dcc, size 0x44, virtual false, abstract: false, final false
  static inline void GetActorAngularVelocity_Injected(::System::IntPtr actorPtr, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetActorLinearVelocity, addr 0x4910c60, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetActorLinearVelocity(::System::IntPtr actorPtr);

  /// @brief Method GetActorLinearVelocity_Injected, addr 0x4910cf4, size 0x44, virtual false, abstract: false, final false
  static inline void GetActorLinearVelocity_Injected(::System::IntPtr actorPtr, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method GetBodyByInstanceID, addr 0x4910a94, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Component> GetBodyByInstanceID(int32_t instanceID);

  /// @brief Method GetColliderByInstanceID, addr 0x4910a58, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(int32_t instanceID);

  /// @brief Method GetCollisionToReport, addr 0x49119e8, size 0x124, virtual false, abstract: false, final false
  static inline ::UnityEngine::Collision* GetCollisionToReport(::ByRef<::UnityEngine::ContactPairHeader> header, ::ByRef<::UnityEngine::ContactPair> pair, bool flipped);

  /// @brief Method GetIgnoreCollision, addr 0x4907574, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method GetIgnoreLayerCollision, addr 0x4907530, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method IgnoreCollision, addr 0x49073cc, size 0x88, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method IgnoreCollision, addr 0x4907378, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2, bool ignore);

  /// @brief Method IgnoreLayerCollision, addr 0x49074a8, size 0x88, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method IgnoreLayerCollision, addr 0x4907454, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore);

  /// @brief Method Internal_BoxCastAll, addr 0x490fcfc, size 0xe0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_BoxCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
                                                                                                             ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                                                                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_BoxCastAll_Injected, addr 0x490fddc, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*>
  Internal_BoxCastAll_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> halfExtents,
                               ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<::UnityEngine::Quaternion> orientation, float_t maxDistance, int32_t layerMask,
                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastAll, addr 0x490a584, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance,
                                                                                                             int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastAll_Injected, addr 0x490a62c, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene,
                                                                                                                      ::ByRef<::UnityEngine::Ray> ray, float_t maxDistance, int32_t mask,
                                                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RebuildBroadphaseRegions, addr 0x49106a4, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_RebuildBroadphaseRegions(::UnityEngine::Bounds bounds, int32_t subdivisions);

  /// @brief Method Internal_RebuildBroadphaseRegions_Injected, addr 0x4910728, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_RebuildBroadphaseRegions_Injected(::ByRef<::UnityEngine::Bounds> bounds, int32_t subdivisions);

  /// @brief Method InterpolateBodies_Internal, addr 0x490cad8, size 0x78, virtual false, abstract: false, final false
  static inline void InterpolateBodies_Internal(::UnityEngine::PhysicsScene physicsScene);

  /// @brief Method InterpolateBodies_Internal_Injected, addr 0x490cb50, size 0x3c, virtual false, abstract: false, final false
  static inline void InterpolateBodies_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene);

  /// @brief Method IsShapeTrigger, addr 0x4910b58, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsShapeTrigger(::System::IntPtr shapePtr);

  /// @brief Method Linecast, addr 0x490866c, size 0x9c, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  /// @brief Method Linecast, addr 0x49088e4, size 0xa4, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Linecast, addr 0x4908834, size 0xb0, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask);

  /// @brief Method Linecast, addr 0x4908708, size 0x12c, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask,
                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Linecast, addr 0x49085cc, size 0xa0, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask);

  /// @brief Method Linecast, addr 0x49084b0, size 0x11c, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  static inline ::UnityEngine::Physics* New_ctor();

  /// @brief Method OnSceneContact, addr 0x4911390, size 0x258, virtual false, abstract: false, final false
  static inline void OnSceneContact(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count);

  /// @brief Method OnSceneContactModify, addr 0x4906bb8, size 0xe4, virtual false, abstract: false, final false
  static inline void OnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count, bool isCCD);

  /// @brief Method OverlapBox, addr 0x490f1b4, size 0xe8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// @brief Method OverlapBox, addr 0x490f0c0, size 0xf4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation);

  /// @brief Method OverlapBox, addr 0x490efc0, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method OverlapBox, addr 0x490eefc, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                                                    ::UnityEngine::Quaternion orientation, int32_t layerMask,
                                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBoxNonAlloc, addr 0x490f598, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method OverlapBoxNonAlloc, addr 0x490f494, size 0x104, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation);

  /// @brief Method OverlapBoxNonAlloc, addr 0x490f38c, size 0x108, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation, int32_t mask);

  /// @brief Method OverlapBoxNonAlloc, addr 0x490f29c, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox_Internal, addr 0x490edcc, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center,
                                                                                                                             ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                                                                                                             int32_t layerMask,
                                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox_Internal_Injected, addr 0x490ee88, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapBox_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> halfExtents,
                               ::ByRef<::UnityEngine::Quaternion> orientation, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule, addr 0x490c598, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius);

  /// @brief Method OverlapCapsule, addr 0x490c4e8, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                                                                                                        int32_t layerMask);

  /// @brief Method OverlapCapsule, addr 0x490c424, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x49105f0, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x4910530, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x491045c, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                               ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule_Internal, addr 0x490c2e8, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule_Internal(::UnityEngine::PhysicsScene physicsScene,
                                                                                                                                 ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
                                                                                                                                 float_t radius, int32_t layerMask,
                                                                                                                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule_Internal_Injected, addr 0x490c3a8, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapCapsule_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> point0, ::ByRef<::UnityEngine::Vector3> point1, float_t radius, int32_t layerMask,
                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere, addr 0x490c888, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method OverlapSphere, addr 0x490c800, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method OverlapSphere, addr 0x490c764, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphereNonAlloc, addr 0x490d5ac, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method OverlapSphereNonAlloc, addr 0x490d514, size 0x98, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask);

  /// @brief Method OverlapSphereNonAlloc, addr 0x490d468, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere_Internal, addr 0x490c644, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere_Internal_Injected, addr 0x490c6f8, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>, ::Array<::UnityW<::UnityEngine::Collider>>*>
  OverlapSphere_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCastAll, addr 0x490b554, size 0xdc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0,
                                                                                                              ::UnityEngine::Vector3 p1, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                              float_t maxDistance, int32_t mask,
                                                                                                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCastAll_Injected, addr 0x490b630, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene,
                                                                                                                       ::ByRef<::UnityEngine::Vector3> p0, ::ByRef<::UnityEngine::Vector3> p1,
                                                                                                                       float_t radius, ::ByRef<::UnityEngine::Vector3> direction, float_t maxDistance,
                                                                                                                       int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_ClosestPoint, addr 0x490cfc8, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Query_ClosestPoint(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point);

  /// @brief Method Query_ClosestPoint_Injected, addr 0x490d088, size 0x6c, virtual false, abstract: false, final false
  static inline void Query_ClosestPoint_Injected(::UnityEngine::Collider* collider, ::ByRef<::UnityEngine::Vector3> position, ::ByRef<::UnityEngine::Quaternion> rotation,
                                                 ::ByRef<::UnityEngine::Vector3> point, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method Query_ComputePenetration, addr 0x490cd30, size 0xe4, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                              ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<float_t> distance);

  /// @brief Method Query_ComputePenetration_Injected, addr 0x490ce14, size 0x8c, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration_Injected(::UnityEngine::Collider* colliderA, ::ByRef<::UnityEngine::Vector3> positionA, ::ByRef<::UnityEngine::Quaternion> rotationA,
                                                       ::UnityEngine::Collider* colliderB, ::ByRef<::UnityEngine::Vector3> positionB, ::ByRef<::UnityEngine::Quaternion> rotationB,
                                                       ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<float_t> distance);

  /// @brief Method Query_SphereCastAll, addr 0x490bb6c, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius,
                                                                                                             ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask,
                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCastAll_Injected, addr 0x490bc34, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene,
                                                                                                                      ::ByRef<::UnityEngine::Vector3> origin, float_t radius,
                                                                                                                      ::ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask,
                                                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x49079ec, size 0xb8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method Raycast, addr 0x4907f0c, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Raycast, addr 0x4907e44, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x4907d68, size 0xdc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x4907aa4, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x4907924, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method Raycast, addr 0x4907860, size 0xc4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x49075b8, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x4908190, size 0x88, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray);

  /// @brief Method Raycast, addr 0x4908420, size 0x90, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Raycast, addr 0x4908380, size 0xa0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x49082c8, size 0xb8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x4908218, size 0xb0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x4908108, size 0x88, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method Raycast, addr 0x490806c, size 0x9c, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x4907fd4, size 0x98, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x490aa18, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method RaycastAll, addr 0x490a96c, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x490a8bc, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                    int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x490a698, size 0x224, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x490acc4, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray);

  /// @brief Method RaycastAll, addr 0x490ac20, size 0xa4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x490ab70, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x490aabc, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x490b490, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method RaycastNonAlloc, addr 0x490b3cc, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x490b2f4, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x490b220, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x490b194, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method RaycastNonAlloc, addr 0x490b0f8, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x490b060, size 0x98, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x490ad60, size 0xac, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RebuildBroadphaseRegions, addr 0x491076c, size 0x120, virtual false, abstract: false, final false
  static inline void RebuildBroadphaseRegions(::UnityEngine::Bounds worldBounds, int32_t subdivisions);

  /// @brief Method ReportContacts, addr 0x49115e8, size 0x3d0, virtual false, abstract: false, final false
  static inline void ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> array);

  /// @brief Method ResetInterpolationPoses_Internal, addr 0x490cb8c, size 0x78, virtual false, abstract: false, final false
  static inline void ResetInterpolationPoses_Internal(::UnityEngine::PhysicsScene physicsScene);

  /// @brief Method ResetInterpolationPoses_Internal_Injected, addr 0x490cc04, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetInterpolationPoses_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene);

  /// @brief Method ResolveActorToComponent, addr 0x49109a4, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Component> ResolveActorToComponent(::System::IntPtr actorPtr);

  /// @brief Method ResolveActorToInstanceID, addr 0x4910a1c, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ResolveActorToInstanceID(::System::IntPtr actorPtr);

  /// @brief Method ResolveShapeToCollider, addr 0x4910968, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Collider> ResolveShapeToCollider(::System::IntPtr shapePtr);

  /// @brief Method ResolveShapeToInstanceID, addr 0x49109e0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t ResolveShapeToInstanceID(::System::IntPtr shapePtr);

  /// @brief Method SendOnCollisionEnter, addr 0x4910b94, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionEnter(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionExit, addr 0x4910c1c, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionExit(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionStay, addr 0x4910bd8, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionStay(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method Simulate, addr 0x490c9e8, size 0xf0, virtual false, abstract: false, final false
  static inline void Simulate(float_t step);

  /// @brief Method Simulate_Internal, addr 0x490c90c, size 0x90, virtual false, abstract: false, final false
  static inline void Simulate_Internal(::UnityEngine::PhysicsScene physicsScene, float_t step);

  /// @brief Method Simulate_Internal_Injected, addr 0x490c99c, size 0x4c, virtual false, abstract: false, final false
  static inline void Simulate_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, float_t step);

  /// @brief Method SphereCast, addr 0x4909460, size 0xbc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SphereCast, addr 0x49093a4, size 0xbc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x49092dc, size 0xc8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x4909200, size 0xd4, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x490974c, size 0xa4, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius);

  /// @brief Method SphereCast, addr 0x4909a28, size 0xb4, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SphereCast, addr 0x4909974, size 0xb4, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x49098bc, size 0xb8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x49097f0, size 0xcc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x49096a8, size 0xa4, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x49095f8, size 0xb0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x490951c, size 0xdc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x490bf8c, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method SphereCastAll, addr 0x490bed8, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance);

  /// @brief Method SphereCastAll, addr 0x490be20, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x490bcb8, size 0x168, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance, int32_t layerMask,
                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x490c248, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius);

  /// @brief Method SphereCastAll, addr 0x490c1a8, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// @brief Method SphereCastAll, addr 0x490c0fc, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x490c040, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask,
                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastNonAlloc, addr 0x490e1f8, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method SphereCastNonAlloc, addr 0x490e13c, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method SphereCastNonAlloc, addr 0x490e074, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x490de70, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                           ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastNonAlloc, addr 0x490e4e4, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method SphereCastNonAlloc, addr 0x490e434, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method SphereCastNonAlloc, addr 0x490e380, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance,
                                           int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x490e2b4, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance,
                                           int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SyncTransforms, addr 0x490cc40, size 0x28, virtual false, abstract: false, final false
  static inline void SyncTransforms();

  /// @brief Method TranslateTriangleIndex, addr 0x4910ad0, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t TranslateTriangleIndex(::System::IntPtr shapePtr, uint32_t rawIndex);

  /// @brief Method TranslateTriangleIndexFromID, addr 0x4910b14, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t TranslateTriangleIndexFromID(int32_t instanceID, uint32_t faceIndex);

  /// @brief Method .ctor, addr 0x4911b24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_ContactEvent, addr 0x49111d8, size 0xdc, virtual false, abstract: false, final false
  static inline void add_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  /// @brief Method add_ContactModifyEvent, addr 0x49067f0, size 0xf0, virtual false, abstract: false, final false
  static inline void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method add_ContactModifyEventCCD, addr 0x49069d0, size 0xf4, virtual false, abstract: false, final false
  static inline void add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline ::UnityEngine::Physics_ContactEventDelegate* getStaticF_ContactEvent();

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent();

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD();

  static inline ::UnityEngine::Collision* getStaticF_s_ReusableCollision();

  /// @brief Method get_autoSimulation, addr 0x49110e4, size 0x78, virtual false, abstract: false, final false
  static inline bool get_autoSimulation();

  /// @brief Method get_autoSyncTransforms, addr 0x490cc68, size 0x28, virtual false, abstract: false, final false
  static inline bool get_autoSyncTransforms();

  /// @brief Method get_bounceThreshold, addr 0x4906fac, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_bounceThreshold();

  /// @brief Method get_bounceTreshold, addr 0x4910e1c, size 0x68, virtual false, abstract: false, final false
  static inline float_t get_bounceTreshold();

  /// @brief Method get_clothGravity, addr 0x490d2e0, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_clothGravity();

  /// @brief Method get_clothGravity_Injected, addr 0x490d36c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_clothGravity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_defaultContactOffset, addr 0x4906e24, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultContactOffset();

  /// @brief Method get_defaultMaxAngularSpeed, addr 0x4907198, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxAngularSpeed();

  /// @brief Method get_defaultMaxDepenetrationVelocity, addr 0x490700c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxDepenetrationVelocity();

  /// @brief Method get_defaultPhysicsScene, addr 0x49072c0, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene();

  /// @brief Method get_defaultPhysicsScene_Injected, addr 0x490733c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultPhysicsScene_Injected(::ByRef<::UnityEngine::PhysicsScene> ret);

  /// @brief Method get_defaultSolverIterations, addr 0x490706c, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverIterations();

  /// @brief Method get_defaultSolverVelocityIterations, addr 0x49070d0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverVelocityIterations();

  /// @brief Method get_gravity, addr 0x4906c9c, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_gravity();

  /// @brief Method get_gravity_Injected, addr 0x4906d28, size 0x3c, virtual false, abstract: false, final false
  static inline void get_gravity_Injected(::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_improvedPatchFriction, addr 0x49071f8, size 0x28, virtual false, abstract: false, final false
  static inline bool get_improvedPatchFriction();

  /// @brief Method get_interCollisionDistance, addr 0x490d1bc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionDistance();

  /// @brief Method get_interCollisionSettingsToggle, addr 0x490d27c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_interCollisionSettingsToggle();

  /// @brief Method get_interCollisionStiffness, addr 0x490d21c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionStiffness();

  /// @brief Method get_invokeCollisionCallbacks, addr 0x490725c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_invokeCollisionCallbacks();

  /// @brief Method get_maxAngularVelocity, addr 0x4910f14, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity();

  /// @brief Method get_minPenetrationForPenalty, addr 0x4910e10, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_minPenetrationForPenalty();

  /// @brief Method get_penetrationPenaltyForce, addr 0x49110d8, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_penetrationPenaltyForce();

  /// @brief Method get_queriesHitBackfaces, addr 0x4906f48, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitBackfaces();

  /// @brief Method get_queriesHitTriggers, addr 0x4906ee4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitTriggers();

  /// @brief Method get_reuseCollisionCallbacks, addr 0x490cccc, size 0x28, virtual false, abstract: false, final false
  static inline bool get_reuseCollisionCallbacks();

  /// @brief Method get_simulationMode, addr 0x4907134, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::SimulationMode get_simulationMode();

  /// @brief Method get_sleepAngularVelocity, addr 0x4910f08, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_sleepAngularVelocity();

  /// @brief Method get_sleepThreshold, addr 0x4906e84, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold();

  /// @brief Method get_sleepVelocity, addr 0x4910efc, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_sleepVelocity();

  /// @brief Method get_solverIterationCount, addr 0x4910f20, size 0x68, virtual false, abstract: false, final false
  static inline int32_t get_solverIterationCount();

  /// @brief Method get_solverVelocityIterationCount, addr 0x4910ffc, size 0x68, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterationCount();

  /// @brief Method remove_ContactEvent, addr 0x49112b4, size 0xdc, virtual false, abstract: false, final false
  static inline void remove_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  /// @brief Method remove_ContactModifyEvent, addr 0x49068e0, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method remove_ContactModifyEventCCD, addr 0x4906ac4, size 0xf4, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_s_ReusableCollision(::UnityEngine::Collision* value);

  /// @brief Method set_autoSimulation, addr 0x491115c, size 0x7c, virtual false, abstract: false, final false
  static inline void set_autoSimulation(bool value);

  /// @brief Method set_autoSyncTransforms, addr 0x490cc90, size 0x3c, virtual false, abstract: false, final false
  static inline void set_autoSyncTransforms(bool value);

  /// @brief Method set_bounceThreshold, addr 0x4906fd4, size 0x38, virtual false, abstract: false, final false
  static inline void set_bounceThreshold(float_t value);

  /// @brief Method set_bounceTreshold, addr 0x4910e84, size 0x78, virtual false, abstract: false, final false
  static inline void set_bounceTreshold(float_t value);

  /// @brief Method set_clothGravity, addr 0x490d3a8, size 0x84, virtual false, abstract: false, final false
  static inline void set_clothGravity(::UnityEngine::Vector3 value);

  /// @brief Method set_clothGravity_Injected, addr 0x490d42c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_clothGravity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_defaultContactOffset, addr 0x4906e4c, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultContactOffset(float_t value);

  /// @brief Method set_defaultMaxAngularSpeed, addr 0x49071c0, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxAngularSpeed(float_t value);

  /// @brief Method set_defaultMaxDepenetrationVelocity, addr 0x4907034, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxDepenetrationVelocity(float_t value);

  /// @brief Method set_defaultSolverIterations, addr 0x4907094, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverIterations(int32_t value);

  /// @brief Method set_defaultSolverVelocityIterations, addr 0x49070f8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverVelocityIterations(int32_t value);

  /// @brief Method set_gravity, addr 0x4906d64, size 0x84, virtual false, abstract: false, final false
  static inline void set_gravity(::UnityEngine::Vector3 value);

  /// @brief Method set_gravity_Injected, addr 0x4906de8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_gravity_Injected(::ByRef<::UnityEngine::Vector3> value);

  /// @brief Method set_improvedPatchFriction, addr 0x4907220, size 0x3c, virtual false, abstract: false, final false
  static inline void set_improvedPatchFriction(bool value);

  /// @brief Method set_interCollisionDistance, addr 0x490d1e4, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionDistance(float_t value);

  /// @brief Method set_interCollisionSettingsToggle, addr 0x490d2a4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_interCollisionSettingsToggle(bool value);

  /// @brief Method set_interCollisionStiffness, addr 0x490d244, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionStiffness(float_t value);

  /// @brief Method set_invokeCollisionCallbacks, addr 0x4907284, size 0x3c, virtual false, abstract: false, final false
  static inline void set_invokeCollisionCallbacks(bool value);

  /// @brief Method set_maxAngularVelocity, addr 0x4910f1c, size 0x4, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_minPenetrationForPenalty, addr 0x4910e18, size 0x4, virtual false, abstract: false, final false
  static inline void set_minPenetrationForPenalty(float_t value);

  /// @brief Method set_penetrationPenaltyForce, addr 0x49110e0, size 0x4, virtual false, abstract: false, final false
  static inline void set_penetrationPenaltyForce(float_t value);

  /// @brief Method set_queriesHitBackfaces, addr 0x4906f70, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitBackfaces(bool value);

  /// @brief Method set_queriesHitTriggers, addr 0x4906f0c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitTriggers(bool value);

  /// @brief Method set_reuseCollisionCallbacks, addr 0x490ccf4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reuseCollisionCallbacks(bool value);

  /// @brief Method set_simulationMode, addr 0x490715c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_simulationMode(::UnityEngine::SimulationMode value);

  /// @brief Method set_sleepAngularVelocity, addr 0x4910f10, size 0x4, virtual false, abstract: false, final false
  static inline void set_sleepAngularVelocity(float_t value);

  /// @brief Method set_sleepThreshold, addr 0x4906eac, size 0x38, virtual false, abstract: false, final false
  static inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepVelocity, addr 0x4910f04, size 0x4, virtual false, abstract: false, final false
  static inline void set_sleepVelocity(float_t value);

  /// @brief Method set_solverIterationCount, addr 0x4910f88, size 0x74, virtual false, abstract: false, final false
  static inline void set_solverIterationCount(int32_t value);

  /// @brief Method set_solverVelocityIterationCount, addr 0x4911064, size 0x74, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15746 };

  /// @brief Field kAllLayers offset 0xffffffff size 0x4
  static constexpr int32_t kAllLayers{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kDefaultRaycastLayers offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultRaycastLayers{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field kIgnoreRaycastLayer offset 0xffffffff size 0x4
  static constexpr int32_t kIgnoreRaycastLayer{ static_cast<int32_t>(0x4) };

  /// @brief Field k_MaxFloatMinusEpsilon offset 0xffffffff size 0x4
  static constexpr float_t k_MaxFloatMinusEpsilon{ static_cast<float_t>(3.4028233e38f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Physics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics*, "UnityEngine", "Physics");
NEED_NO_BOX(::UnityEngine::Physics_ContactEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics_ContactEventDelegate*, "UnityEngine", "Physics/ContactEventDelegate");
