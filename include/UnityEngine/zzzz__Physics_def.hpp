#pragma once
// IWYU pragma private; include "UnityEngine\Physics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
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
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
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
struct IntegrationInfo;
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
struct SimulationOption;
}
namespace UnityEngine {
struct SimulationStage;
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
MARK_REF_T(::UnityEngine::Physics*);
MARK_REF_T(::UnityEngine::Physics_ContactEventDelegate*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics*, "UnityEngine", "Physics");
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics_ContactEventDelegate*, "UnityEngine", "Physics/ContactEventDelegate");
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics/ContactEventDelegate
class CORDL_TYPE Physics_ContactEventDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x6b8f9ec, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::PhysicsScene scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> headerArray,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6b8faa4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6b8f9d4, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::PhysicsScene scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> headerArray);

  static inline ::UnityEngine::Physics_ContactEventDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6b8f968, size 0x6c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics_ContactEventDelegate) == 0x80, "Size mismatch!");

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

  /// @brief Field GenericContactModifyEvent, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_GenericContactModifyEvent,
                      put = setStaticF_GenericContactModifyEvent)) ::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* GenericContactModifyEvent;

  /// @brief Field s_ReusableCollision, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ReusableCollision, put = setStaticF_s_ReusableCollision)) ::UnityEngine::Collision* s_ReusableCollision;

  /// @brief Method BakeMesh, addr 0x6b8e5f4, size 0x8c, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex);

  /// @brief Method BakeMesh, addr 0x6b8e5a0, size 0x54, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex, ::UnityEngine::MeshColliderCookingOptions cookingOptions);

  /// @brief Method BoxCast, addr 0x6b87810, size 0x104, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction);

  /// @brief Method BoxCast, addr 0x6b87d94, size 0x10c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method BoxCast, addr 0x6b87c8c, size 0x108, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCast, addr 0x6b87b4c, size 0x140, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCast, addr 0x6b87a00, size 0x14c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCast, addr 0x6b87914, size 0xec, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCast, addr 0x6b87710, size 0x100, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCast, addr 0x6b875d8, size 0x138, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCast, addr 0x6b8749c, size 0x13c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask);

  /// @brief Method BoxCast, addr 0x6b8737c, size 0xf0, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastAll, addr 0x6b8e24c, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction);

  /// @brief Method BoxCastAll, addr 0x6b8e150, size 0xfc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                               ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCastAll, addr 0x6b8e018, size 0x138, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                               ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCastAll, addr 0x6b8dedc, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                               ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCastAll, addr 0x6b8dd1c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                               ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCastNonAlloc, addr 0x6b8d9ec, size 0x108, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// @brief Method BoxCastNonAlloc, addr 0x6b8d65c, size 0x104, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        ::UnityEngine::Quaternion orientation);

  /// @brief Method BoxCastNonAlloc, addr 0x6b8d760, size 0x140, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// @brief Method BoxCastNonAlloc, addr 0x6b8d8a0, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCastNonAlloc, addr 0x6b8d42c, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x6b865b4, size 0x100, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method CapsuleCast, addr 0x6b869c8, size 0x108, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method CapsuleCast, addr 0x6b868b8, size 0x110, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance);

  /// @brief Method CapsuleCast, addr 0x6b8679c, size 0x11c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x6b866b4, size 0xe8, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x6b864ac, size 0x108, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method CapsuleCast, addr 0x6b863a0, size 0x10c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x6b86288, size 0xf8, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastAll, addr 0x6b89568, size 0xfc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method CapsuleCastAll, addr 0x6b89460, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method CapsuleCastAll, addr 0x6b89354, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                   int32_t layerMask);

  /// @brief Method CapsuleCastAll, addr 0x6b891b4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                   int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCastNonAlloc, addr 0x6b8babc, size 0x104, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit> results);

  /// @brief Method CapsuleCastNonAlloc, addr 0x6b8b9ac, size 0x110, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                            float_t maxDistance);

  /// @brief Method CapsuleCastNonAlloc, addr 0x6b8b890, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                            float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCastNonAlloc, addr 0x6b8b65c, size 0xf0, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                            float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox, addr 0x6b8ca50, size 0xf4, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// @brief Method CheckBox, addr 0x6b8c958, size 0xf8, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation);

  /// @brief Method CheckBox, addr 0x6b8c854, size 0x104, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method CheckBox, addr 0x6b8c78c, size 0xc8, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layermask,
                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox_Internal, addr 0x6b8c654, size 0xc4, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                       int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox_Internal_Injected, addr 0x6b8c718, size 0x74, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Vector3> halfExtents,
                                                ::by_ref<::UnityEngine::Quaternion> orientation, int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule, addr 0x6b8c5a4, size 0xb0, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius);

  /// @brief Method CheckCapsule, addr 0x6b8c4f0, size 0xb4, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask);

  /// @brief Method CheckCapsule, addr 0x6b8c428, size 0xc8, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal, addr 0x6b8c2e4, size 0xc8, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal_Injected, addr 0x6b8c3ac, size 0x7c, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> start, ::by_ref<::UnityEngine::Vector3> end, float_t radius,
                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere, addr 0x6b8b5d4, size 0x88, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method CheckSphere, addr 0x6b8b548, size 0x8c, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method CheckSphere, addr 0x6b8b4a8, size 0xa0, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere_Internal, addr 0x6b8b380, size 0xbc, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere_Internal_Injected, addr 0x6b8b43c, size 0x6c, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method ClosestPoint, addr 0x6b8ae24, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method ComputePenetration, addr 0x6b8ab68, size 0x138, virtual false, abstract: false, final false
  static inline bool ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                        ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance);

  /// @brief Method ConnectPhysicsSDKVisualDebugger, addr 0x6b8e680, size 0x28, virtual false, abstract: false, final false
  static inline bool ConnectPhysicsSDKVisualDebugger();

  /// @brief Method DisconnectPhysicsSDKVisualDebugger, addr 0x6b8e6a8, size 0x28, virtual false, abstract: false, final false
  static inline void DisconnectPhysicsSDKVisualDebugger();

  /// @brief Method GetBodyByInstanceID, addr 0x6b8e70c, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Component> GetBodyByInstanceID(int32_t instanceID);

  /// @brief Method GetBodyByInstanceID_Injected, addr 0x6b8e854, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBodyByInstanceID_Injected(int32_t instanceID);

  /// @brief Method GetColliderByInstanceID, addr 0x6b712f0, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(int32_t instanceID);

  /// @brief Method GetColliderByInstanceID_Injected, addr 0x6b8e6d0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetColliderByInstanceID_Injected(int32_t instanceID);

  /// @brief Method GetCollisionToReport, addr 0x6b8f748, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::Collision* GetCollisionToReport(::by_ref<::UnityEngine::ContactPairHeader> header, ::by_ref<::UnityEngine::ContactPair> pair, bool flipped);

  /// @brief Method GetCurrentIntegrationId, addr 0x6b842c0, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t GetCurrentIntegrationId();

  /// @brief Method GetIgnoreCollision, addr 0x6b84ce0, size 0x124, virtual false, abstract: false, final false
  static inline bool GetIgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method GetIgnoreCollision_Injected, addr 0x6b84e04, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreCollision_Injected(::System::IntPtr collider1, ::System::IntPtr collider2);

  /// @brief Method GetIgnoreLayerCollision, addr 0x6b84c9c, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method GetIntegrationInfos, addr 0x6b8420c, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<::UnityEngine::IntegrationInfo> GetIntegrationInfos();

  /// @brief Method GetIntegrationInfos, addr 0x6b841c8, size 0x44, virtual false, abstract: false, final false
  static inline void GetIntegrationInfos(::by_ref<::System::IntPtr> integrations, ::by_ref<uint64_t> integrationCount);

  /// @brief Method IgnoreCollision, addr 0x6b84b50, size 0x6c, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method IgnoreCollision, addr 0x6b849d0, size 0x12c, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2, bool ignore);

  /// @brief Method IgnoreCollision_Injected, addr 0x6b84afc, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreCollision_Injected(::System::IntPtr collider1, ::System::IntPtr collider2, bool ignore);

  /// @brief Method IgnoreLayerCollision, addr 0x6b84c10, size 0x8c, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method IgnoreLayerCollision, addr 0x6b84bbc, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore);

  /// @brief Method Internal_BoxCastAll, addr 0x6b8daf4, size 0x18c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> Internal_BoxCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                        ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_BoxCastAll_Injected, addr 0x6b8dc80, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_BoxCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Vector3> halfExtents,
                                                  ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<::UnityEngine::Quaternion> orientation, float_t maxDistance, int32_t layerMask,
                                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method Internal_RaycastAll, addr 0x6b87ea0, size 0x168, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> Internal_RaycastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance, int32_t mask,
                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastAll_Injected, addr 0x6b88008, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_RaycastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Ray> ray, float_t maxDistance, int32_t mask,
                                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method InterpolateBodies_Internal, addr 0x6b8a6f8, size 0x7c, virtual false, abstract: false, final false
  static inline void InterpolateBodies_Internal(::UnityEngine::PhysicsScene physicsScene);

  /// @brief Method InterpolateBodies_Internal_Injected, addr 0x6b8a774, size 0x3c, virtual false, abstract: false, final false
  static inline void InterpolateBodies_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene);

  /// @brief Method Linecast, addr 0x6b85f64, size 0xa0, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  /// @brief Method Linecast, addr 0x6b861e0, size 0xa8, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Linecast, addr 0x6b8612c, size 0xb4, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask);

  /// @brief Method Linecast, addr 0x6b86004, size 0x128, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask,
                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Linecast, addr 0x6b85ec0, size 0xa4, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask);

  /// @brief Method Linecast, addr 0x6b85da8, size 0x118, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  static inline ::UnityEngine::Physics* New_ctor();

  /// @brief Method OnSceneContact, addr 0x6b8f190, size 0x258, virtual false, abstract: false, final false
  static inline void OnSceneContact(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count);

  /// @brief Method OnSceneContactModify, addr 0x6b84038, size 0xb0, virtual false, abstract: false, final false
  static inline void OnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count, bool isCCD);

  /// @brief Method OverlapBox, addr 0x6b8cf3c, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// @brief Method OverlapBox, addr 0x6b8ce44, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation);

  /// @brief Method OverlapBox, addr 0x6b8cd40, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method OverlapBox, addr 0x6b8cc78, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask,
                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBoxNonAlloc, addr 0x6b8d334, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results);

  /// @brief Method OverlapBoxNonAlloc, addr 0x6b8d22c, size 0x108, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results, ::UnityEngine::Quaternion orientation);

  /// @brief Method OverlapBoxNonAlloc, addr 0x6b8d120, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results, ::UnityEngine::Quaternion orientation,
                                           int32_t mask);

  /// @brief Method OverlapBoxNonAlloc, addr 0x6b8d02c, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results, ::UnityEngine::Quaternion orientation,
                                           int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox_Internal, addr 0x6b8cb44, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                ::UnityEngine::Quaternion orientation, int32_t layerMask,
                                                                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox_Internal_Injected, addr 0x6b8cc04, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center,
                                                                                         ::by_ref<::UnityEngine::Vector3> halfExtents, ::by_ref<::UnityEngine::Quaternion> orientation,
                                                                                         int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule, addr 0x6b8a160, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius);

  /// @brief Method OverlapCapsule, addr 0x6b8a0ac, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask);

  /// @brief Method OverlapCapsule, addr 0x6b89fe4, size 0xc8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask,
                                                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x6b8e4e8, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x6b8e424, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x6b8e34c, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask,
                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule_Internal, addr 0x6b89ea4, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
                                                                                    float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule_Internal_Injected, addr 0x6b89f68, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> point0,
                                                                                             ::by_ref<::UnityEngine::Vector3> point1, float_t radius, int32_t layerMask,
                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere, addr 0x6b8a460, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3 position, float_t radius);

  /// @brief Method OverlapSphere, addr 0x6b8a3d4, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method OverlapSphere, addr 0x6b8a334, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphereNonAlloc, addr 0x6b8b2f0, size 0x90, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results);

  /// @brief Method OverlapSphereNonAlloc, addr 0x6b8b254, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask);

  /// @brief Method OverlapSphereNonAlloc, addr 0x6b8b1a4, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask,
                                              ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere_Internal, addr 0x6b8a210, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere_Internal_Injected, addr 0x6b8a2c8, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> position,
                                                                                            float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method PhysXOnSceneContactModify, addr 0x6b840e8, size 0xe0, virtual false, abstract: false, final false
  static inline void PhysXOnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count, bool isCCD);

  /// @brief Method Query_CapsuleCastAll, addr 0x6b88f88, size 0x190, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> Query_CapsuleCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, float_t radius,
                                                                         ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask,
                                                                         ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCastAll_Injected, addr 0x6b89118, size 0x9c, virtual false, abstract: false, final false
  static inline void Query_CapsuleCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> p0, ::by_ref<::UnityEngine::Vector3> p1, float_t radius,
                                                   ::by_ref<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction,
                                                   ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method Query_ClosestPoint, addr 0x6b8aca0, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Query_ClosestPoint(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 point);

  /// @brief Method Query_ClosestPoint_Injected, addr 0x6b8adb8, size 0x6c, virtual false, abstract: false, final false
  static inline void Query_ClosestPoint_Injected(::System::IntPtr collider, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation,
                                                 ::by_ref<::UnityEngine::Vector3> point, ::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method Query_ComputePenetration, addr 0x6b8a958, size 0x184, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                              ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance);

  /// @brief Method Query_ComputePenetration_Injected, addr 0x6b8aadc, size 0x8c, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration_Injected(::System::IntPtr colliderA, ::by_ref<::UnityEngine::Vector3> positionA, ::by_ref<::UnityEngine::Quaternion> rotationA,
                                                       ::System::IntPtr colliderB, ::by_ref<::UnityEngine::Vector3> positionB, ::by_ref<::UnityEngine::Quaternion> rotationB,
                                                       ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance);

  /// @brief Method Query_SphereCastAll, addr 0x6b89664, size 0x180, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> Query_SphereCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                        float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCastAll_Injected, addr 0x6b897e4, size 0x8c, virtual false, abstract: false, final false
  static inline void Query_SphereCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> origin, float_t radius,
                                                  ::by_ref<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction,
                                                  ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method Raycast, addr 0x6b852a0, size 0xbc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method Raycast, addr 0x6b857e0, size 0xcc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Raycast, addr 0x6b85714, size 0xcc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x6b85634, size 0xe0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6b8535c, size 0xdc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x6b851d4, size 0xcc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method Raycast, addr 0x6b8510c, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6b84e48, size 0xdc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x6b85a74, size 0x8c, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray);

  /// @brief Method Raycast, addr 0x6b85d14, size 0x94, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Raycast, addr 0x6b85c70, size 0xa4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x6b85bb4, size 0xbc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6b85b00, size 0xb4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x6b859e8, size 0x8c, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method Raycast, addr 0x6b85948, size 0xa0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6b858ac, size 0x9c, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x6b88414, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method RaycastAll, addr 0x6b88364, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x6b882b0, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x6b88084, size 0x22c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x6b886d0, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray ray);

  /// @brief Method RaycastAll, addr 0x6b88628, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x6b88574, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x6b884bc, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x6b88ec0, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// @brief Method RaycastNonAlloc, addr 0x6b88df8, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x6b88d1c, size 0xdc, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x6b88c44, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x6b88bb4, size 0x90, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// @brief Method RaycastNonAlloc, addr 0x6b88b14, size 0xa0, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x6b88a78, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x6b88770, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RebuildBroadphaseRegions, addr 0x6b8efac, size 0x4, virtual false, abstract: false, final false
  static inline void RebuildBroadphaseRegions(::UnityEngine::Bounds worldBounds, int32_t subdivisions);

  /// @brief Method ReportContacts, addr 0x6b8f3e8, size 0x330, virtual false, abstract: false, final false
  static inline void ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> array);

  /// @brief Method ResetInterpolationPoses_Internal, addr 0x6b8a7b0, size 0x7c, virtual false, abstract: false, final false
  static inline void ResetInterpolationPoses_Internal(::UnityEngine::PhysicsScene physicsScene);

  /// @brief Method ResetInterpolationPoses_Internal_Injected, addr 0x6b8a82c, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetInterpolationPoses_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene);

  /// @brief Method SendOnCollisionEnter, addr 0x6b8e8d4, size 0xb8, virtual false, abstract: false, final false
  static inline void SendOnCollisionEnter(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionEnter_Injected, addr 0x6b8e98c, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionEnter_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionExit, addr 0x6b8eacc, size 0xb8, virtual false, abstract: false, final false
  static inline void SendOnCollisionExit(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionExit_Injected, addr 0x6b8eb84, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionExit_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionStay, addr 0x6b8e9d0, size 0xb8, virtual false, abstract: false, final false
  static inline void SendOnCollisionStay(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionStay_Injected, addr 0x6b8ea88, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionStay_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision);

  /// @brief Method Simulate, addr 0x6b8a5f8, size 0x100, virtual false, abstract: false, final false
  static inline void Simulate(float_t step);

  /// @brief Method Simulate_Internal, addr 0x6b8a4e8, size 0xac, virtual false, abstract: false, final false
  static inline void Simulate_Internal(::UnityEngine::PhysicsScene physicsScene, float_t step, ::UnityEngine::SimulationStage stages, ::UnityEngine::SimulationOption options);

  /// @brief Method Simulate_Internal_Injected, addr 0x6b8a594, size 0x64, virtual false, abstract: false, final false
  static inline void Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, float_t step, ::UnityEngine::SimulationStage stages, ::UnityEngine::SimulationOption options);

  /// @brief Method SphereCast, addr 0x6b86d3c, size 0xc0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SphereCast, addr 0x6b86c7c, size 0xc0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x6b86bb0, size 0xcc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x6b86ad0, size 0xd8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x6b87018, size 0x98, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius);

  /// @brief Method SphereCast, addr 0x6b872d4, size 0xa8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method SphereCast, addr 0x6b8722c, size 0xa8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x6b87180, size 0xac, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x6b870b0, size 0xd0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x6b86f80, size 0x98, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// @brief Method SphereCast, addr 0x6b86edc, size 0xa4, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x6b86dfc, size 0xe0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x6b89b64, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction);

  /// @brief Method SphereCastAll, addr 0x6b89aac, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method SphereCastAll, addr 0x6b899f0, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x6b89870, size 0x180, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask,
                                                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x6b89e10, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray ray, float_t radius);

  /// @brief Method SphereCastAll, addr 0x6b89d7c, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// @brief Method SphereCastAll, addr 0x6b89cdc, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x6b89c1c, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask,
                                                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastNonAlloc, addr 0x6b8bf64, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// @brief Method SphereCastNonAlloc, addr 0x6b8bea4, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance);

  /// @brief Method SphereCastNonAlloc, addr 0x6b8bdd8, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance,
                                           int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x6b8bbc0, size 0xe8, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance,
                                           int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastNonAlloc, addr 0x6b8c240, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// @brief Method SphereCastNonAlloc, addr 0x6b8c19c, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance);

  /// @brief Method SphereCastNonAlloc, addr 0x6b8c0f4, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x6b8c024, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SyncTransforms, addr 0x6b8a868, size 0x28, virtual false, abstract: false, final false
  static inline void SyncTransforms();

  /// @brief Method TranslateTriangleIndexFromID, addr 0x6b8e890, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t TranslateTriangleIndexFromID(int32_t instanceID, uint32_t faceIndex);

  /// @brief Method .ctor, addr 0x6b8f888, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_ContactEvent, addr 0x6b8efb0, size 0xf0, virtual false, abstract: false, final false
  static inline void add_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  /// @brief Method add_ContactModifyEvent, addr 0x6b83a10, size 0x104, virtual false, abstract: false, final false
  static inline void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method add_ContactModifyEventCCD, addr 0x6b83c18, size 0x108, virtual false, abstract: false, final false
  static inline void add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method add_GenericContactModifyEvent, addr 0x6b83e28, size 0x108, virtual false, abstract: false, final false
  static inline void add_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value);

  static inline ::UnityEngine::Physics_ContactEventDelegate* getStaticF_ContactEvent();

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent();

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD();

  static inline ::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* getStaticF_GenericContactModifyEvent();

  static inline ::UnityEngine::Collision* getStaticF_s_ReusableCollision();

  /// @brief Method get_autoSimulation, addr 0x6b8eeb4, size 0x78, virtual false, abstract: false, final false
  static inline bool get_autoSimulation();

  /// @brief Method get_autoSyncTransforms, addr 0x6b8a890, size 0x28, virtual false, abstract: false, final false
  static inline bool get_autoSyncTransforms();

  /// @brief Method get_bounceThreshold, addr 0x6b84600, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_bounceThreshold();

  /// @brief Method get_bounceTreshold, addr 0x6b8ebd4, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_bounceTreshold();

  /// @brief Method get_clothGravity, addr 0x6b8b014, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_clothGravity();

  /// @brief Method get_clothGravity_Injected, addr 0x6b8b0a4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_clothGravity_Injected(::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_defaultContactOffset, addr 0x6b84478, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultContactOffset();

  /// @brief Method get_defaultMaxAngularSpeed, addr 0x6b847ec, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxAngularSpeed();

  /// @brief Method get_defaultMaxDepenetrationVelocity, addr 0x6b84660, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxDepenetrationVelocity();

  /// @brief Method get_defaultPhysicsScene, addr 0x6b84914, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene();

  /// @brief Method get_defaultPhysicsScene_Injected, addr 0x6b84994, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultPhysicsScene_Injected(::by_ref<::UnityEngine::PhysicsScene> ret);

  /// @brief Method get_defaultSolverIterations, addr 0x6b846c0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverIterations();

  /// @brief Method get_defaultSolverVelocityIterations, addr 0x6b84724, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverVelocityIterations();

  /// @brief Method get_gravity, addr 0x6b842e8, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_gravity();

  /// @brief Method get_gravity_Injected, addr 0x6b84378, size 0x3c, virtual false, abstract: false, final false
  static inline void get_gravity_Injected(::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_improvedPatchFriction, addr 0x6b8484c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_improvedPatchFriction();

  /// @brief Method get_interCollisionDistance, addr 0x6b8aef0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionDistance();

  /// @brief Method get_interCollisionSettingsToggle, addr 0x6b8afb0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_interCollisionSettingsToggle();

  /// @brief Method get_interCollisionStiffness, addr 0x6b8af50, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionStiffness();

  /// @brief Method get_invokeCollisionCallbacks, addr 0x6b848b0, size 0x28, virtual false, abstract: false, final false
  static inline bool get_invokeCollisionCallbacks();

  /// @brief Method get_maxAngularVelocity, addr 0x6b8ecd4, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_maxAngularVelocity();

  /// @brief Method get_minPenetrationForPenalty, addr 0x6b8ebc8, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_minPenetrationForPenalty();

  /// @brief Method get_penetrationPenaltyForce, addr 0x6b8eea8, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_penetrationPenaltyForce();

  /// @brief Method get_queriesHitBackfaces, addr 0x6b8459c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitBackfaces();

  /// @brief Method get_queriesHitTriggers, addr 0x6b84538, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitTriggers();

  /// @brief Method get_reuseCollisionCallbacks, addr 0x6b8a8f4, size 0x28, virtual false, abstract: false, final false
  static inline bool get_reuseCollisionCallbacks();

  /// @brief Method get_simulationMode, addr 0x6b84788, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::SimulationMode get_simulationMode();

  /// @brief Method get_sleepAngularVelocity, addr 0x6b8ecc8, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_sleepAngularVelocity();

  /// @brief Method get_sleepThreshold, addr 0x6b844d8, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold();

  /// @brief Method get_sleepVelocity, addr 0x6b8ecbc, size 0x8, virtual false, abstract: false, final false
  static inline float_t get_sleepVelocity();

  /// @brief Method get_solverIterationCount, addr 0x6b8ece0, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t get_solverIterationCount();

  /// @brief Method get_solverVelocityIterationCount, addr 0x6b8edc4, size 0x6c, virtual false, abstract: false, final false
  static inline int32_t get_solverVelocityIterationCount();

  /// @brief Method remove_ContactEvent, addr 0x6b8f0a0, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  /// @brief Method remove_ContactModifyEvent, addr 0x6b83b14, size 0x104, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method remove_ContactModifyEventCCD, addr 0x6b83d20, size 0x108, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// @brief Method remove_GenericContactModifyEvent, addr 0x6b83f30, size 0x108, virtual false, abstract: false, final false
  static inline void remove_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value);

  static inline void setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value);

  static inline void setStaticF_s_ReusableCollision(::UnityEngine::Collision* value);

  /// @brief Method set_autoSimulation, addr 0x6b8ef2c, size 0x80, virtual false, abstract: false, final false
  static inline void set_autoSimulation(bool value);

  /// @brief Method set_autoSyncTransforms, addr 0x6b8a8b8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_autoSyncTransforms(bool value);

  /// @brief Method set_bounceThreshold, addr 0x6b84628, size 0x38, virtual false, abstract: false, final false
  static inline void set_bounceThreshold(float_t value);

  /// @brief Method set_bounceTreshold, addr 0x6b8ec40, size 0x7c, virtual false, abstract: false, final false
  static inline void set_bounceTreshold(float_t value);

  /// @brief Method set_clothGravity, addr 0x6b8b0e0, size 0x88, virtual false, abstract: false, final false
  static inline void set_clothGravity(::UnityEngine::Vector3 value);

  /// @brief Method set_clothGravity_Injected, addr 0x6b8b168, size 0x3c, virtual false, abstract: false, final false
  static inline void set_clothGravity_Injected(::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_defaultContactOffset, addr 0x6b844a0, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultContactOffset(float_t value);

  /// @brief Method set_defaultMaxAngularSpeed, addr 0x6b84814, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxAngularSpeed(float_t value);

  /// @brief Method set_defaultMaxDepenetrationVelocity, addr 0x6b84688, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxDepenetrationVelocity(float_t value);

  /// @brief Method set_defaultSolverIterations, addr 0x6b846e8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverIterations(int32_t value);

  /// @brief Method set_defaultSolverVelocityIterations, addr 0x6b8474c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverVelocityIterations(int32_t value);

  /// @brief Method set_gravity, addr 0x6b843b4, size 0x88, virtual false, abstract: false, final false
  static inline void set_gravity(::UnityEngine::Vector3 value);

  /// @brief Method set_gravity_Injected, addr 0x6b8443c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_gravity_Injected(::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_improvedPatchFriction, addr 0x6b84874, size 0x3c, virtual false, abstract: false, final false
  static inline void set_improvedPatchFriction(bool value);

  /// @brief Method set_interCollisionDistance, addr 0x6b8af18, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionDistance(float_t value);

  /// @brief Method set_interCollisionSettingsToggle, addr 0x6b8afd8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_interCollisionSettingsToggle(bool value);

  /// @brief Method set_interCollisionStiffness, addr 0x6b8af78, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionStiffness(float_t value);

  /// @brief Method set_invokeCollisionCallbacks, addr 0x6b848d8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_invokeCollisionCallbacks(bool value);

  /// @brief Method set_maxAngularVelocity, addr 0x6b8ecdc, size 0x4, virtual false, abstract: false, final false
  static inline void set_maxAngularVelocity(float_t value);

  /// @brief Method set_minPenetrationForPenalty, addr 0x6b8ebd0, size 0x4, virtual false, abstract: false, final false
  static inline void set_minPenetrationForPenalty(float_t value);

  /// @brief Method set_penetrationPenaltyForce, addr 0x6b8eeb0, size 0x4, virtual false, abstract: false, final false
  static inline void set_penetrationPenaltyForce(float_t value);

  /// @brief Method set_queriesHitBackfaces, addr 0x6b845c4, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitBackfaces(bool value);

  /// @brief Method set_queriesHitTriggers, addr 0x6b84560, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitTriggers(bool value);

  /// @brief Method set_reuseCollisionCallbacks, addr 0x6b8a91c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reuseCollisionCallbacks(bool value);

  /// @brief Method set_simulationMode, addr 0x6b847b0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_simulationMode(::UnityEngine::SimulationMode value);

  /// @brief Method set_sleepAngularVelocity, addr 0x6b8ecd0, size 0x4, virtual false, abstract: false, final false
  static inline void set_sleepAngularVelocity(float_t value);

  /// @brief Method set_sleepThreshold, addr 0x6b84500, size 0x38, virtual false, abstract: false, final false
  static inline void set_sleepThreshold(float_t value);

  /// @brief Method set_sleepVelocity, addr 0x6b8ecc4, size 0x4, virtual false, abstract: false, final false
  static inline void set_sleepVelocity(float_t value);

  /// @brief Method set_solverIterationCount, addr 0x6b8ed4c, size 0x78, virtual false, abstract: false, final false
  static inline void set_solverIterationCount(int32_t value);

  /// @brief Method set_solverVelocityIterationCount, addr 0x6b8ee30, size 0x78, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18644 };

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
static_assert(sizeof(::UnityEngine::Physics) == 0x10, "Size mismatch!");

} // namespace UnityEngine
