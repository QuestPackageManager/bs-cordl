#pragma once
// IWYU pragma private; include "UnityEngine/Physics.hpp"
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
struct EntityId;
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
  /// @brief Method BeginInvoke, addr 0x6ffb328, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::PhysicsScene scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> headerArray,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x6ffb3e0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x6ffb314, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::PhysicsScene scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> headerArray);

  static inline ::UnityEngine::Physics_ContactEventDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6ffb2a8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Physics_ContactEventDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Physics_ContactEventDelegate(Physics_ContactEventDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Physics_ContactEventDelegate(Physics_ContactEventDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19054 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics_ContactEventDelegate) == 0x80, "Size mismatch!");

} // namespace UnityEngine
// [NativeHeader("Modules/Physics/PhysicsQuery.h")]
// [NativeHeader("Modules/Physics/PhysicsManager.h")]
// [StaticAccessor("GetPhysicsManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
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

  /// @brief Method BakeMesh, addr 0x6ffa150, size 0x6c, virtual false, abstract: false, final false
  static inline void BakeMesh(::UnityEngine::EntityId meshEntityId, bool convex);

  /// [StaticAccessor("GetPhysicsManager()")]
  /// [ThreadSafe]
  /// @brief Method BakeMesh, addr 0x6ff9f8c, size 0x94, virtual false, abstract: false, final false
  static inline void BakeMesh(::UnityEngine::EntityId meshEntityId, bool convex, ::UnityEngine::MeshColliderCookingOptions cookingOptions);

  /// [Obsolete("BakeMesh(int, bool) is obsolete. Use BakeMesh(EntityId, bool) instead.")]
  /// @brief Method BakeMesh, addr 0x6ffa0e4, size 0x6c, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex);

  /// [Obsolete("BakeMesh(int, bool, MeshColliderCookingOptions) is obsolete. Use BakeMesh(EntityId, bool, MeshColliderCookingOptions) instead.")]
  /// @brief Method BakeMesh, addr 0x6ffa074, size 0x70, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex, ::UnityEngine::MeshColliderCookingOptions cookingOptions);

  /// @brief Method BakeMesh_Injected, addr 0x6ffa020, size 0x54, virtual false, abstract: false, final false
  static inline void BakeMesh_Injected(::by_ref<::UnityEngine::EntityId> meshEntityId, bool convex, ::UnityEngine::MeshColliderCookingOptions cookingOptions);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCast, addr 0x6ff3144, size 0x104, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCast, addr 0x6ff3720, size 0x10c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCast, addr 0x6ff3618, size 0x108, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCast, addr 0x6ff34d8, size 0x140, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCast, addr 0x6ff338c, size 0x14c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                             ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCast, addr 0x6ff3248, size 0x144, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                             /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion orientation, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                             /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                             /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCast, addr 0x6ff3044, size 0x100, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCast, addr 0x6ff2f0c, size 0x138, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCast, addr 0x6ff2dd0, size 0x13c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                             int32_t layerMask);

  /// @brief Method BoxCast, addr 0x6ff2c74, size 0x12c, virtual false, abstract: false, final false
  static inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                             /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion orientation, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                             /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                             /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCastAll, addr 0x6ff9b70, size 0x100, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCastAll, addr 0x6ff9a74, size 0xfc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                               ::UnityEngine::Quaternion orientation);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCastAll, addr 0x6ff993c, size 0x138, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                               ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCastAll, addr 0x6ff9800, size 0x13c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                               ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCastAll, addr 0x6ff966c, size 0x194, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> BoxCastAll(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                               /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion orientation,
                                                               /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                                               /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCastNonAlloc, addr 0x6ff9340, size 0x108, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCastNonAlloc, addr 0x6ff8fb0, size 0x104, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        ::UnityEngine::Quaternion orientation);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCastNonAlloc, addr 0x6ff90b4, size 0x140, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        ::UnityEngine::Quaternion orientation, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method BoxCastNonAlloc, addr 0x6ff91f4, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask);

  /// @brief Method BoxCastNonAlloc, addr 0x6ff8d54, size 0x114, virtual false, abstract: false, final false
  static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion orientation, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                        /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                        /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCast, addr 0x6ff1e64, size 0x100, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCast, addr 0x6ff22c4, size 0x108, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCast, addr 0x6ff21b4, size 0x110, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCast, addr 0x6ff2098, size 0x11c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x6ff1f64, size 0x134, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                 /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                 /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCast, addr 0x6ff1d5c, size 0x108, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCast, addr 0x6ff1c50, size 0x10c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCast, addr 0x6ff1b04, size 0x12c, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                 /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                 /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCastAll, addr 0x6ff4e50, size 0xfc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCastAll, addr 0x6ff4d48, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCastAll, addr 0x6ff4c3c, size 0x10c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                   int32_t layerMask);

  /// @brief Method CapsuleCastAll, addr 0x6ff4aac, size 0x190, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> CapsuleCastAll(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                                                   /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                                                   /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCastNonAlloc, addr 0x6ff7358, size 0x104, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                            ::ArrayW<::UnityEngine::RaycastHit> results);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCastNonAlloc, addr 0x6ff7248, size 0x110, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                            float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method CapsuleCastNonAlloc, addr 0x6ff712c, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                            float_t maxDistance, int32_t layerMask);

  /// @brief Method CapsuleCastNonAlloc, addr 0x6ff6ec4, size 0x124, virtual false, abstract: false, final false
  static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                            /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                            /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method CheckBox, addr 0x6ff8314, size 0xf4, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// [ExcludeFromDocs]
  /// @brief Method CheckBox, addr 0x6ff821c, size 0xf8, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation);

  /// [ExcludeFromDocs]
  /// @brief Method CheckBox, addr 0x6ff8118, size 0x104, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method CheckBox, addr 0x6ff801c, size 0xfc, virtual false, abstract: false, final false
  static inline bool CheckBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion orientation,
                              /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layermask,
                              /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [FreeFunction("Physics::BoxTest")]
  /// @brief Method CheckBox_Internal, addr 0x6ff7ee8, size 0xc0, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                       int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckBox_Internal_Injected, addr 0x6ff7fa8, size 0x74, virtual false, abstract: false, final false
  static inline bool CheckBox_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Vector3> halfExtents,
                                                ::by_ref<::UnityEngine::Quaternion> orientation, int32_t layermask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method CheckCapsule, addr 0x6ff7e38, size 0xb0, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius);

  /// [ExcludeFromDocs]
  /// @brief Method CheckCapsule, addr 0x6ff7d84, size 0xb4, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask);

  /// @brief Method CheckCapsule, addr 0x6ff7cc0, size 0xc4, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                  /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [FreeFunction("Physics::CapsuleTest")]
  /// @brief Method CheckCapsule_Internal, addr 0x6ff7b7c, size 0xc8, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal_Injected, addr 0x6ff7c44, size 0x7c, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> start, ::by_ref<::UnityEngine::Vector3> end, float_t radius,
                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method CheckSphere, addr 0x6ff6e3c, size 0x88, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius);

  /// [ExcludeFromDocs]
  /// @brief Method CheckSphere, addr 0x6ff6db0, size 0x8c, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method CheckSphere, addr 0x6ff6d14, size 0x9c, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                 /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [FreeFunction("Physics::SphereTest")]
  /// @brief Method CheckSphere_Internal, addr 0x6ff6bec, size 0xbc, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere_Internal_Injected, addr 0x6ff6ca8, size 0x6c, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method ClosestPoint, addr 0x6ff6694, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3 point, ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation);

  /// @brief Method ComputePenetration, addr 0x6ff63d8, size 0x138, virtual false, abstract: false, final false
  static inline bool ComputePenetration(::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA, ::UnityEngine::Collider* colliderB,
                                        ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB, ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance);

  /// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method ConnectPhysicsSDKVisualDebugger, addr 0x6ffa1bc, size 0x28, virtual false, abstract: false, final false
  static inline bool ConnectPhysicsSDKVisualDebugger();

  /// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method DisconnectPhysicsSDKVisualDebugger, addr 0x6ffa1e4, size 0x28, virtual false, abstract: false, final false
  static inline void DisconnectPhysicsSDKVisualDebugger();

  /// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetBodyByInstanceID, addr 0x6ffa248, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Component> GetBodyByInstanceID(::UnityEngine::EntityId entityId);

  /// @brief Method GetBodyByInstanceID_Injected, addr 0x6ffa390, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetBodyByInstanceID_Injected(::by_ref<::UnityEngine::EntityId> entityId);

  /// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method GetColliderByInstanceID, addr 0x6fdccb8, size 0x148, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(::UnityEngine::EntityId entityId);

  /// @brief Method GetColliderByInstanceID_Injected, addr 0x6ffa20c, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetColliderByInstanceID_Injected(::by_ref<::UnityEngine::EntityId> entityId);

  /// @brief Method GetCollisionToReport, addr 0x6ffb080, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Collision* GetCollisionToReport(/* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPairHeader> header, /* [IsReadOnly] */ ::by_ref<::UnityEngine::ContactPair> pair,
                                                               bool flipped);

  /// @brief Method GetCurrentIntegrationInfo, addr 0x6fefc34, size 0x98, virtual false, abstract: false, final false
  static inline ::UnityEngine::IntegrationInfo GetCurrentIntegrationInfo();

  /// [ThreadSafe]
  /// @brief Method GetCurrentIntegrationInfo, addr 0x6fefb44, size 0x3c, virtual false, abstract: false, final false
  static inline void GetCurrentIntegrationInfo(::by_ref<::System::IntPtr> integration);

  /// @brief Method GetIgnoreCollision, addr 0x6ff0610, size 0x124, virtual false, abstract: false, final false
  static inline bool GetIgnoreCollision(/* [NotNull] */ ::UnityEngine::Collider* collider1, /* [NotNull] */ ::UnityEngine::Collider* collider2);

  /// @brief Method GetIgnoreCollision_Injected, addr 0x6ff0734, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreCollision_Injected(::System::IntPtr collider1, ::System::IntPtr collider2);

  /// @brief Method GetIgnoreLayerCollision, addr 0x6ff05cc, size 0x44, virtual false, abstract: false, final false
  static inline bool GetIgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// @brief Method GetIntegrationInfos, addr 0x6fefb80, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<::UnityEngine::IntegrationInfo> GetIntegrationInfos();

  /// @brief Method GetIntegrationInfos, addr 0x6fefb00, size 0x44, virtual false, abstract: false, final false
  static inline void GetIntegrationInfos(::by_ref<::System::IntPtr> integrations, ::by_ref<uint64_t> integrationCount);

  /// [ExcludeFromDocs]
  /// @brief Method IgnoreCollision, addr 0x6ff0480, size 0x6c, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method IgnoreCollision, addr 0x6ff0300, size 0x12c, virtual false, abstract: false, final false
  static inline void IgnoreCollision(/* [NotNull] */ ::UnityEngine::Collider* collider1, /* [NotNull] */ ::UnityEngine::Collider* collider2, /* [DefaultValue("true")] */ bool ignore);

  /// @brief Method IgnoreCollision_Injected, addr 0x6ff042c, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreCollision_Injected(::System::IntPtr collider1, ::System::IntPtr collider2, /* [DefaultValue("true")] */ bool ignore);

  /// [ExcludeFromDocs]
  /// @brief Method IgnoreLayerCollision, addr 0x6ff0540, size 0x8c, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2);

  /// [NativeName("IgnoreCollision")]
  /// @brief Method IgnoreLayerCollision, addr 0x6ff04ec, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreLayerCollision(int32_t layer1, int32_t layer2, /* [DefaultValue("true")] */ bool ignore);

  /// [FreeFunction("Physics::BoxCastAll")]
  /// @brief Method Internal_BoxCastAll, addr 0x6ff9448, size 0x188, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> Internal_BoxCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                        ::UnityEngine::Vector3 direction, ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_BoxCastAll_Injected, addr 0x6ff95d0, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_BoxCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center, ::by_ref<::UnityEngine::Vector3> halfExtents,
                                                  ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<::UnityEngine::Quaternion> orientation, float_t maxDistance, int32_t layerMask,
                                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction("Physics::RaycastAll")]
  /// @brief Method Internal_RaycastAll, addr 0x6ff382c, size 0x168, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> Internal_RaycastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance, int32_t mask,
                                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastAll_Injected, addr 0x6ff3994, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_RaycastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Ray> ray, float_t maxDistance, int32_t mask,
                                                  ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [NativeName("InterpolateBodies")]
  /// @brief Method InterpolateBodies_Internal, addr 0x6ff5fcc, size 0x7c, virtual false, abstract: false, final false
  static inline void InterpolateBodies_Internal(::UnityEngine::PhysicsScene physicsScene);

  /// @brief Method InterpolateBodies_Internal_Injected, addr 0x6ff6048, size 0x3c, virtual false, abstract: false, final false
  static inline void InterpolateBodies_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene);

  /// [ExcludeFromDocs]
  /// @brief Method Linecast, addr 0x6ff17e4, size 0xa0, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end);

  /// [ExcludeFromDocs]
  /// @brief Method Linecast, addr 0x6ff1a5c, size 0xa8, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method Linecast, addr 0x6ff19a8, size 0xb4, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask);

  /// @brief Method Linecast, addr 0x6ff1884, size 0x124, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::by_ref<::UnityEngine::RaycastHit> hitInfo, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                              /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method Linecast, addr 0x6ff1740, size 0xa4, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, int32_t layerMask);

  /// @brief Method Linecast, addr 0x6ff162c, size 0x114, virtual false, abstract: false, final false
  static inline bool Linecast(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                              /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  static inline ::UnityEngine::Physics* New_ctor();

  /// [RequiredByNativeCode]
  /// @brief Method OnSceneContact, addr 0x6ffaacc, size 0x258, virtual false, abstract: false, final false
  static inline void OnSceneContact(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count);

  /// [RequiredByNativeCode]
  /// @brief Method OnSceneContactModify, addr 0x6fef970, size 0xb0, virtual false, abstract: false, final false
  static inline void OnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count, bool isCCD);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapBox, addr 0x6ff8830, size 0xf0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapBox, addr 0x6ff8738, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapBox, addr 0x6ff8634, size 0x104, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation, int32_t layerMask);

  /// @brief Method OverlapBox, addr 0x6ff8538, size 0xfc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                       /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion orientation,
                                                                       /* [DefaultValue("AllLayers")] */ int32_t layerMask,
                                                                       /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapBoxNonAlloc, addr 0x6ff8c5c, size 0xf8, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapBoxNonAlloc, addr 0x6ff8b54, size 0x108, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results, ::UnityEngine::Quaternion orientation);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapBoxNonAlloc, addr 0x6ff8a48, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results, ::UnityEngine::Quaternion orientation,
                                           int32_t mask);

  /// @brief Method OverlapBoxNonAlloc, addr 0x6ff8920, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*> results,
                                           /* [DefaultValue("Quaternion.identity")] */ ::UnityEngine::Quaternion orientation, /* [DefaultValue("AllLayers")] */ int32_t mask,
                                           /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [FreeFunction("Physics::OverlapBox")]
  /// @brief Method OverlapBox_Internal, addr 0x6ff8408, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                                                ::UnityEngine::Quaternion orientation, int32_t layerMask,
                                                                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox_Internal_Injected, addr 0x6ff84c4, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapBox_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> center,
                                                                                         ::by_ref<::UnityEngine::Vector3> halfExtents, ::by_ref<::UnityEngine::Quaternion> orientation,
                                                                                         int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapCapsule, addr 0x6ff5a3c, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapCapsule, addr 0x6ff5988, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, int32_t layerMask);

  /// @brief Method OverlapCapsule, addr 0x6ff58c4, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                                                           /* [DefaultValue("AllLayers")] */ int32_t layerMask,
                                                                           /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapCapsuleNonAlloc, addr 0x6ff9e08, size 0xb8, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapCapsuleNonAlloc, addr 0x6ff9d44, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask);

  /// @brief Method OverlapCapsuleNonAlloc, addr 0x6ff9c70, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*> results,
                                               /* [DefaultValue("AllLayers")] */ int32_t layerMask,
                                               /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [FreeFunction("Physics::OverlapCapsule")]
  /// @brief Method OverlapCapsule_Internal, addr 0x6ff5784, size 0xc4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1,
                                                                                    float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule_Internal_Injected, addr 0x6ff5848, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapCapsule_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> point0,
                                                                                             ::by_ref<::UnityEngine::Vector3> point1, float_t radius, int32_t layerMask,
                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapSphere, addr 0x6ff5d38, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3 position, float_t radius);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapSphere, addr 0x6ff5cac, size 0x8c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method OverlapSphere, addr 0x6ff5c10, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere(::UnityEngine::Vector3 position, float_t radius, /* [DefaultValue("AllLayers")] */ int32_t layerMask,
                                                                          /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapSphereNonAlloc, addr 0x6ff6b5c, size 0x90, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results);

  /// [ExcludeFromDocs]
  /// @brief Method OverlapSphereNonAlloc, addr 0x6ff6ac0, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, int32_t layerMask);

  /// @brief Method OverlapSphereNonAlloc, addr 0x6ff6a14, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*> results, /* [DefaultValue("AllLayers")] */ int32_t layerMask,
                                              /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [FreeFunction("Physics::OverlapSphere")]
  /// @brief Method OverlapSphere_Internal, addr 0x6ff5aec, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere_Internal_Injected, addr 0x6ff5ba4, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::Collider>> OverlapSphere_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> position,
                                                                                            float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method PhysXOnSceneContactModify, addr 0x6fefa20, size 0xe0, virtual false, abstract: false, final false
  static inline void PhysXOnSceneContactModify(::UnityEngine::PhysicsScene scene, ::System::IntPtr buffer, int32_t count, bool isCCD);

  /// [FreeFunction("Physics::CapsuleCastAll")]
  /// @brief Method Query_CapsuleCastAll, addr 0x6ff4880, size 0x190, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> Query_CapsuleCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, float_t radius,
                                                                         ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask,
                                                                         ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCastAll_Injected, addr 0x6ff4a10, size 0x9c, virtual false, abstract: false, final false
  static inline void Query_CapsuleCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> p0, ::by_ref<::UnityEngine::Vector3> p1, float_t radius,
                                                   ::by_ref<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction,
                                                   ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [FreeFunction("Physics::ClosestPoint")]
  /// @brief Method Query_ClosestPoint, addr 0x6ff6510, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 Query_ClosestPoint(/* [NotNull] */ ::UnityEngine::Collider* collider, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation,
                                                          ::UnityEngine::Vector3 point);

  /// @brief Method Query_ClosestPoint_Injected, addr 0x6ff6628, size 0x6c, virtual false, abstract: false, final false
  static inline void Query_ClosestPoint_Injected(::System::IntPtr collider, ::by_ref<::UnityEngine::Vector3> position, ::by_ref<::UnityEngine::Quaternion> rotation,
                                                 ::by_ref<::UnityEngine::Vector3> point, ::by_ref<::UnityEngine::Vector3> ret);

  /// [FreeFunction("Physics::ComputePenetration")]
  /// @brief Method Query_ComputePenetration, addr 0x6ff61c8, size 0x184, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration(/* [NotNull] */ ::UnityEngine::Collider* colliderA, ::UnityEngine::Vector3 positionA, ::UnityEngine::Quaternion rotationA,
                                              /* [NotNull] */ ::UnityEngine::Collider* colliderB, ::UnityEngine::Vector3 positionB, ::UnityEngine::Quaternion rotationB,
                                              ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance);

  /// @brief Method Query_ComputePenetration_Injected, addr 0x6ff634c, size 0x8c, virtual false, abstract: false, final false
  static inline bool Query_ComputePenetration_Injected(::System::IntPtr colliderA, ::by_ref<::UnityEngine::Vector3> positionA, ::by_ref<::UnityEngine::Quaternion> rotationA,
                                                       ::System::IntPtr colliderB, ::by_ref<::UnityEngine::Vector3> positionB, ::by_ref<::UnityEngine::Quaternion> rotationB,
                                                       ::by_ref<::UnityEngine::Vector3> direction, ::by_ref<float_t> distance);

  /// [FreeFunction("Physics::SphereCastAll")]
  /// @brief Method Query_SphereCastAll, addr 0x6ff4f4c, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> Query_SphereCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                        float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCastAll_Injected, addr 0x6ff50c8, size 0x8c, virtual false, abstract: false, final false
  static inline void Query_SphereCastAll_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, ::by_ref<::UnityEngine::Vector3> origin, float_t radius,
                                                  ::by_ref<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction,
                                                  ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff0b8c, size 0xb8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff1084, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff0fbc, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// [RequiredByNativeCode]
  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff0ee0, size 0xdc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6ff0c44, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff0ac4, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff0a00, size 0xc4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6ff0778, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                             /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                             /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff1308, size 0x88, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff159c, size 0x90, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff14fc, size 0xa0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff1440, size 0xbc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6ff1390, size 0xb0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ::by_ref<::UnityEngine::RaycastHit> hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                             /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                             /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff1280, size 0x88, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method Raycast, addr 0x6ff11e4, size 0x9c, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6ff114c, size 0x98, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                             /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastAll, addr 0x6ff3d70, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastAll, addr 0x6ff3cc0, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastAll, addr 0x6ff3c0c, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x6ff3a10, size 0x1fc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                                               /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                                               /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastAll, addr 0x6ff402c, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray ray);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastAll, addr 0x6ff3f84, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance);

  /// [RequiredByNativeCode]
  /// [ExcludeFromDocs]
  /// @brief Method RaycastAll, addr 0x6ff3ed0, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x6ff3e18, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> RaycastAll(::UnityEngine::Ray ray, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                                               /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                                               /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastNonAlloc, addr 0x6ff47bc, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastNonAlloc, addr 0x6ff46f8, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastNonAlloc, addr 0x6ff4620, size 0xd8, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x6ff454c, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                        /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                        /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastNonAlloc, addr 0x6ff44c0, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// [ExcludeFromDocs]
  /// @brief Method RaycastNonAlloc, addr 0x6ff4424, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// [RequiredByNativeCode]
  /// @brief Method RaycastNonAlloc, addr 0x6ff438c, size 0x98, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x6ff40cc, size 0xac, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit> results, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                        /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                        /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [StaticAccessor("GetPhysicsManager()")]
  /// @brief Method RebuildBroadphaseRegions, addr 0x6ff9ec0, size 0x88, virtual false, abstract: false, final false
  static inline void RebuildBroadphaseRegions(::UnityEngine::Bounds worldBounds, int32_t subdivisions);

  /// @brief Method RebuildBroadphaseRegions_Injected, addr 0x6ff9f48, size 0x44, virtual false, abstract: false, final false
  static inline void RebuildBroadphaseRegions_Injected(::by_ref<::UnityEngine::Bounds> worldBounds, int32_t subdivisions);

  /// @brief Method ReportContacts, addr 0x6ffad24, size 0x32c, virtual false, abstract: false, final false
  static inline void ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader> array);

  /// [NativeName("ResetInterpolatedTransformPosition")]
  /// @brief Method ResetInterpolationPoses_Internal, addr 0x6ff6084, size 0x7c, virtual false, abstract: false, final false
  static inline void ResetInterpolationPoses_Internal(::UnityEngine::PhysicsScene physicsScene);

  /// @brief Method ResetInterpolationPoses_Internal_Injected, addr 0x6ff6100, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetInterpolationPoses_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene);

  /// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method SendOnCollisionEnter, addr 0x6ffa49c, size 0xb8, virtual false, abstract: false, final false
  static inline void SendOnCollisionEnter(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionEnter_Injected, addr 0x6ffa554, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionEnter_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision);

  /// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method SendOnCollisionExit, addr 0x6ffa694, size 0xb8, virtual false, abstract: false, final false
  static inline void SendOnCollisionExit(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionExit_Injected, addr 0x6ffa74c, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionExit_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision);

  /// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method SendOnCollisionStay, addr 0x6ffa598, size 0xb8, virtual false, abstract: false, final false
  static inline void SendOnCollisionStay(::UnityEngine::Component* component, ::UnityEngine::Collision* collision);

  /// @brief Method SendOnCollisionStay_Injected, addr 0x6ffa650, size 0x44, virtual false, abstract: false, final false
  static inline void SendOnCollisionStay_Injected(::System::IntPtr component, ::UnityEngine::Collision* collision);

  /// @brief Method Simulate, addr 0x6ff5ed0, size 0xfc, virtual false, abstract: false, final false
  static inline void Simulate(float_t step);

  /// [NativeName("Simulate")]
  /// @brief Method Simulate_Internal, addr 0x6ff5dc0, size 0xac, virtual false, abstract: false, final false
  static inline void Simulate_Internal(::UnityEngine::PhysicsScene physicsScene, float_t step, ::UnityEngine::SimulationStage stages, ::UnityEngine::SimulationOption options);

  /// @brief Method Simulate_Internal_Injected, addr 0x6ff5e6c, size 0x64, virtual false, abstract: false, final false
  static inline void Simulate_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene> physicsScene, float_t step, ::UnityEngine::SimulationStage stages, ::UnityEngine::SimulationOption options);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff2634, size 0xc0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff2574, size 0xc0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff24a8, size 0xcc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x6ff23cc, size 0xd4, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::by_ref<::UnityEngine::RaycastHit> hitInfo,
                                /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff2910, size 0x98, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff2bcc, size 0xa8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff2b24, size 0xa8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff2a78, size 0xac, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x6ff29a8, size 0xd0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, ::by_ref<::UnityEngine::RaycastHit> hitInfo, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff2878, size 0x98, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCast, addr 0x6ff27d4, size 0xa4, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x6ff26f4, size 0xe0, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Ray ray, float_t radius, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastAll, addr 0x6ff5444, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastAll, addr 0x6ff538c, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastAll, addr 0x6ff52d0, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x6ff5154, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                  /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                                                  /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastAll, addr 0x6ff56f0, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray ray, float_t radius);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastAll, addr 0x6ff565c, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastAll, addr 0x6ff55bc, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastAll, addr 0x6ff54fc, size 0xc0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit> SphereCastAll(::UnityEngine::Ray ray, float_t radius, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                                                  /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                                                  /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastNonAlloc, addr 0x6ff77fc, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastNonAlloc, addr 0x6ff773c, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastNonAlloc, addr 0x6ff7670, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance,
                                           int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x6ff745c, size 0xe4, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit> results,
                                           /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance, /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                           /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastNonAlloc, addr 0x6ff7ad8, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastNonAlloc, addr 0x6ff7a34, size 0xa4, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance);

  /// [ExcludeFromDocs]
  /// @brief Method SphereCastNonAlloc, addr 0x6ff798c, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCastNonAlloc, addr 0x6ff78bc, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray ray, float_t radius, ::ArrayW<::UnityEngine::RaycastHit> results, /* [DefaultValue("Mathf.Infinity")] */ float_t maxDistance,
                                           /* [DefaultValue("DefaultRaycastLayers")] */ int32_t layerMask,
                                           /* [DefaultValue("QueryTriggerInteraction.UseGlobal")] */ ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SyncTransforms, addr 0x6ff613c, size 0x28, virtual false, abstract: false, final false
  static inline void SyncTransforms();

  /// [ThreadSafe]
  /// [StaticAccessor("PhysicsManager", (UnityEngine.Bindings.StaticAccessorType)2)]
  /// @brief Method TranslateTriangleIndexFromID, addr 0x6ffa3cc, size 0x8c, virtual false, abstract: false, final false
  static inline uint32_t TranslateTriangleIndexFromID(::UnityEngine::EntityId instanceID, uint32_t faceIndex);

  /// @brief Method TranslateTriangleIndexFromID_Injected, addr 0x6ffa458, size 0x44, virtual false, abstract: false, final false
  static inline uint32_t TranslateTriangleIndexFromID_Injected(::by_ref<::UnityEngine::EntityId> instanceID, uint32_t faceIndex);

  /// @brief Method .ctor, addr 0x6ffb1c4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method add_ContactEvent, addr 0x6ffa8ec, size 0xf0, virtual false, abstract: false, final false
  static inline void add_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  /// [CompilerGenerated]
  /// @brief Method add_ContactModifyEvent, addr 0x6fef348, size 0x104, virtual false, abstract: false, final false
  static inline void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// [CompilerGenerated]
  /// @brief Method add_ContactModifyEventCCD, addr 0x6fef550, size 0x108, virtual false, abstract: false, final false
  static inline void add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// [CompilerGenerated]
  /// @brief Method add_GenericContactModifyEvent, addr 0x6fef760, size 0x108, virtual false, abstract: false, final false
  static inline void add_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value);

  static inline ::UnityEngine::Physics_ContactEventDelegate* getStaticF_ContactEvent();

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent();

  static inline ::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD();

  static inline ::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* getStaticF_GenericContactModifyEvent();

  static inline ::UnityEngine::Collision* getStaticF_s_ReusableCollision();

  /// @brief Method get_autoSimulation, addr 0x6ffa790, size 0x78, virtual false, abstract: false, final false
  static inline bool get_autoSimulation();

  /// @brief Method get_autoSyncTransforms, addr 0x6ffa888, size 0x28, virtual false, abstract: false, final false
  static inline bool get_autoSyncTransforms();

  /// @brief Method get_bounceThreshold, addr 0x6feffe4, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_bounceThreshold();

  /// [ThreadSafe]
  /// @brief Method get_clothGravity, addr 0x6ff6884, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_clothGravity();

  /// @brief Method get_clothGravity_Injected, addr 0x6ff6914, size 0x3c, virtual false, abstract: false, final false
  static inline void get_clothGravity_Injected(::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_defaultContactOffset, addr 0x6fefe5c, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultContactOffset();

  /// @brief Method get_defaultMaxAngularSpeed, addr 0x6ff01d0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxAngularSpeed();

  /// @brief Method get_defaultMaxDepenetrationVelocity, addr 0x6ff0044, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_defaultMaxDepenetrationVelocity();

  /// @brief Method get_defaultPhysicsScene, addr 0x6ff02f8, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene();

  /// @brief Method get_defaultSolverIterations, addr 0x6ff00a4, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverIterations();

  /// @brief Method get_defaultSolverVelocityIterations, addr 0x6ff0108, size 0x28, virtual false, abstract: false, final false
  static inline int32_t get_defaultSolverVelocityIterations();

  /// [ThreadSafe]
  /// @brief Method get_gravity, addr 0x6fefccc, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_gravity();

  /// @brief Method get_gravity_Injected, addr 0x6fefd5c, size 0x3c, virtual false, abstract: false, final false
  static inline void get_gravity_Injected(::by_ref<::UnityEngine::Vector3> ret);

  /// @brief Method get_improvedPatchFriction, addr 0x6ff0230, size 0x28, virtual false, abstract: false, final false
  static inline bool get_improvedPatchFriction();

  /// [NativeName("GetClothInterCollisionDistance")]
  /// @brief Method get_interCollisionDistance, addr 0x6ff6760, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionDistance();

  /// [NativeName("GetClothInterCollisionSettingsToggle")]
  /// @brief Method get_interCollisionSettingsToggle, addr 0x6ff6820, size 0x28, virtual false, abstract: false, final false
  static inline bool get_interCollisionSettingsToggle();

  /// [NativeName("GetClothInterCollisionStiffness")]
  /// @brief Method get_interCollisionStiffness, addr 0x6ff67c0, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_interCollisionStiffness();

  /// @brief Method get_invokeCollisionCallbacks, addr 0x6ff0294, size 0x28, virtual false, abstract: false, final false
  static inline bool get_invokeCollisionCallbacks();

  /// @brief Method get_queriesHitBackfaces, addr 0x6feff80, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitBackfaces();

  /// @brief Method get_queriesHitTriggers, addr 0x6feff1c, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitTriggers();

  /// @brief Method get_reuseCollisionCallbacks, addr 0x6ff6164, size 0x28, virtual false, abstract: false, final false
  static inline bool get_reuseCollisionCallbacks();

  /// @brief Method get_simulationMode, addr 0x6ff016c, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::SimulationMode get_simulationMode();

  /// @brief Method get_sleepThreshold, addr 0x6fefebc, size 0x28, virtual false, abstract: false, final false
  static inline float_t get_sleepThreshold();

  /// [CompilerGenerated]
  /// @brief Method remove_ContactEvent, addr 0x6ffa9dc, size 0xf0, virtual false, abstract: false, final false
  static inline void remove_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  /// [CompilerGenerated]
  /// @brief Method remove_ContactModifyEvent, addr 0x6fef44c, size 0x104, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_ContactModifyEventCCD, addr 0x6fef658, size 0x108, virtual false, abstract: false, final false
  static inline void remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  /// [CompilerGenerated]
  /// @brief Method remove_GenericContactModifyEvent, addr 0x6fef868, size 0x108, virtual false, abstract: false, final false
  static inline void remove_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value);

  static inline void setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate* value);

  static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene, ::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* value);

  static inline void setStaticF_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene, ::System::IntPtr, int32_t, bool>* value);

  static inline void setStaticF_s_ReusableCollision(::UnityEngine::Collision* value);

  /// @brief Method set_autoSimulation, addr 0x6ffa808, size 0x80, virtual false, abstract: false, final false
  static inline void set_autoSimulation(bool value);

  /// @brief Method set_autoSyncTransforms, addr 0x6ffa8b0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_autoSyncTransforms(bool value);

  /// @brief Method set_bounceThreshold, addr 0x6ff000c, size 0x38, virtual false, abstract: false, final false
  static inline void set_bounceThreshold(float_t value);

  /// @brief Method set_clothGravity, addr 0x6ff6950, size 0x88, virtual false, abstract: false, final false
  static inline void set_clothGravity(::UnityEngine::Vector3 value);

  /// @brief Method set_clothGravity_Injected, addr 0x6ff69d8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_clothGravity_Injected(::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_defaultContactOffset, addr 0x6fefe84, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultContactOffset(float_t value);

  /// @brief Method set_defaultMaxAngularSpeed, addr 0x6ff01f8, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxAngularSpeed(float_t value);

  /// @brief Method set_defaultMaxDepenetrationVelocity, addr 0x6ff006c, size 0x38, virtual false, abstract: false, final false
  static inline void set_defaultMaxDepenetrationVelocity(float_t value);

  /// @brief Method set_defaultSolverIterations, addr 0x6ff00cc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverIterations(int32_t value);

  /// @brief Method set_defaultSolverVelocityIterations, addr 0x6ff0130, size 0x3c, virtual false, abstract: false, final false
  static inline void set_defaultSolverVelocityIterations(int32_t value);

  /// @brief Method set_gravity, addr 0x6fefd98, size 0x88, virtual false, abstract: false, final false
  static inline void set_gravity(::UnityEngine::Vector3 value);

  /// @brief Method set_gravity_Injected, addr 0x6fefe20, size 0x3c, virtual false, abstract: false, final false
  static inline void set_gravity_Injected(::by_ref<::UnityEngine::Vector3> value);

  /// @brief Method set_improvedPatchFriction, addr 0x6ff0258, size 0x3c, virtual false, abstract: false, final false
  static inline void set_improvedPatchFriction(bool value);

  /// [NativeName("SetClothInterCollisionDistance")]
  /// @brief Method set_interCollisionDistance, addr 0x6ff6788, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionDistance(float_t value);

  /// [NativeName("SetClothInterCollisionSettingsToggle")]
  /// @brief Method set_interCollisionSettingsToggle, addr 0x6ff6848, size 0x3c, virtual false, abstract: false, final false
  static inline void set_interCollisionSettingsToggle(bool value);

  /// [NativeName("SetClothInterCollisionStiffness")]
  /// @brief Method set_interCollisionStiffness, addr 0x6ff67e8, size 0x38, virtual false, abstract: false, final false
  static inline void set_interCollisionStiffness(float_t value);

  /// @brief Method set_invokeCollisionCallbacks, addr 0x6ff02bc, size 0x3c, virtual false, abstract: false, final false
  static inline void set_invokeCollisionCallbacks(bool value);

  /// @brief Method set_queriesHitBackfaces, addr 0x6feffa8, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitBackfaces(bool value);

  /// @brief Method set_queriesHitTriggers, addr 0x6feff44, size 0x3c, virtual false, abstract: false, final false
  static inline void set_queriesHitTriggers(bool value);

  /// @brief Method set_reuseCollisionCallbacks, addr 0x6ff618c, size 0x3c, virtual false, abstract: false, final false
  static inline void set_reuseCollisionCallbacks(bool value);

  /// @brief Method set_simulationMode, addr 0x6ff0194, size 0x3c, virtual false, abstract: false, final false
  static inline void set_simulationMode(::UnityEngine::SimulationMode value);

  /// @brief Method set_sleepThreshold, addr 0x6fefee4, size 0x38, virtual false, abstract: false, final false
  static inline void set_sleepThreshold(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Physics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Physics(Physics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Physics(Physics const&) = delete;

  /// @brief Field AllLayers offset 0xffffffff size 0x4
  static constexpr int32_t AllLayers{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field DefaultRaycastLayers offset 0xffffffff size 0x4
  static constexpr int32_t DefaultRaycastLayers{ static_cast<int32_t>(0xfffffffb) };

  /// @brief Field IgnoreRaycastLayer offset 0xffffffff size 0x4
  static constexpr int32_t IgnoreRaycastLayer{ static_cast<int32_t>(0x4) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19055 };

  /// @brief Field k_MaxFloatMinusEpsilon offset 0xffffffff size 0x4
  static constexpr float_t k_MaxFloatMinusEpsilon{ static_cast<float_t>(3.4028233e38f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics) == 0x10, "Size mismatch!");

} // namespace UnityEngine
