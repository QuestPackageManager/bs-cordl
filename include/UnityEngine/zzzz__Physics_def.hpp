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
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
class Action_4;
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
template<typename T>
struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1_ReadOnly;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
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
MARK_REF_PTR_T(::UnityEngine::Physics);
MARK_REF_PTR_T(::UnityEngine::Physics_ContactEventDelegate);
// Dependencies System.MulticastDelegate
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics/ContactEventDelegate
class CORDL_TYPE Physics_ContactEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x69c4bc8, size 0xb8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  headerArray, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x69c4c80, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x69c4bb0, size 0x18, virtual true, abstract: false, final false
inline void Invoke(::UnityEngine::PhysicsScene  scene, ::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  headerArray) ;

static inline ::UnityEngine::Physics_ContactEventDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x69c4b44, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics_ContactEventDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics_ContactEventDelegate(Physics_ContactEventDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics_ContactEventDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics_ContactEventDelegate(Physics_ContactEventDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18613};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics_ContactEventDelegate, 0x80>, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics
class CORDL_TYPE Physics : public ::System::Object {
public:
// Declarations
using ContactEventDelegate = ::UnityEngine::Physics_ContactEventDelegate;

/// @brief Field ContactEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactEvent, put=setStaticF_ContactEvent)) ::UnityEngine::Physics_ContactEventDelegate*  ContactEvent;

/// @brief Field ContactModifyEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactModifyEvent, put=setStaticF_ContactModifyEvent)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEvent;

/// @brief Field ContactModifyEventCCD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContactModifyEventCCD, put=setStaticF_ContactModifyEventCCD)) ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  ContactModifyEventCCD;

/// @brief Field GenericContactModifyEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GenericContactModifyEvent, put=setStaticF_GenericContactModifyEvent)) ::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  GenericContactModifyEvent;

/// @brief Field s_ReusableCollision, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ReusableCollision, put=setStaticF_s_ReusableCollision)) ::UnityEngine::Collision*  s_ReusableCollision;

/// @brief Method BakeMesh, addr 0x69c37d0, size 0x8c, virtual false, abstract: false, final false
static inline void BakeMesh(int32_t  meshID, bool  convex) ;

/// @brief Method BakeMesh, addr 0x69c377c, size 0x54, virtual false, abstract: false, final false
static inline void BakeMesh(int32_t  meshID, bool  convex, ::UnityEngine::MeshColliderCookingOptions  cookingOptions) ;

/// @brief Method BoxCast, addr 0x69bc9ec, size 0x104, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction) ;

/// @brief Method BoxCast, addr 0x69bcf70, size 0x10c, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method BoxCast, addr 0x69bce68, size 0x108, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method BoxCast, addr 0x69bcd28, size 0x140, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance) ;

/// @brief Method BoxCast, addr 0x69bcbdc, size 0x14c, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method BoxCast, addr 0x69bcaf0, size 0xec, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCast, addr 0x69bc8ec, size 0x100, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method BoxCast, addr 0x69bc7b4, size 0x138, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance) ;

/// @brief Method BoxCast, addr 0x69bc678, size 0x13c, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method BoxCast, addr 0x69bc558, size 0xf0, virtual false, abstract: false, final false
static inline bool BoxCast(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCastAll, addr 0x69c3428, size 0x100, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction) ;

/// @brief Method BoxCastAll, addr 0x69c332c, size 0xfc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method BoxCastAll, addr 0x69c31f4, size 0x138, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance) ;

/// @brief Method BoxCastAll, addr 0x69c30b8, size 0x13c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method BoxCastAll, addr 0x69c2ef8, size 0x1c0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> BoxCastAll(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method BoxCastNonAlloc, addr 0x69c2bc8, size 0x108, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method BoxCastNonAlloc, addr 0x69c2838, size 0x104, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method BoxCastNonAlloc, addr 0x69c293c, size 0x140, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance) ;

/// @brief Method BoxCastNonAlloc, addr 0x69c2a7c, size 0x14c, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method BoxCastNonAlloc, addr 0x69c2608, size 0xe8, virtual false, abstract: false, final false
static inline int32_t BoxCastNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x69bb790, size 0x100, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction) ;

/// @brief Method CapsuleCast, addr 0x69bbba4, size 0x108, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method CapsuleCast, addr 0x69bba94, size 0x110, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method CapsuleCast, addr 0x69bb978, size 0x11c, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method CapsuleCast, addr 0x69bb890, size 0xe8, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCast, addr 0x69bb688, size 0x108, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method CapsuleCast, addr 0x69bb57c, size 0x10c, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method CapsuleCast, addr 0x69bb464, size 0xf8, virtual false, abstract: false, final false
static inline bool CapsuleCast(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCastAll, addr 0x69be744, size 0xfc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction) ;

/// @brief Method CapsuleCastAll, addr 0x69be63c, size 0x108, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method CapsuleCastAll, addr 0x69be530, size 0x10c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method CapsuleCastAll, addr 0x69be390, size 0x1a0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> CapsuleCastAll(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x69c0c98, size 0x104, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x69c0b88, size 0x110, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x69c0a6c, size 0x11c, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method CapsuleCastNonAlloc, addr 0x69c0838, size 0xf0, virtual false, abstract: false, final false
static inline int32_t CapsuleCastNonAlloc(::UnityEngine::Vector3  point1, ::UnityEngine::Vector3  point2, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckBox, addr 0x69c1c2c, size 0xf4, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents) ;

/// @brief Method CheckBox, addr 0x69c1b34, size 0xf8, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method CheckBox, addr 0x69c1a30, size 0x104, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layerMask) ;

/// @brief Method CheckBox, addr 0x69c1968, size 0xc8, virtual false, abstract: false, final false
static inline bool CheckBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layermask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckBox_Internal, addr 0x69c1830, size 0xc4, virtual false, abstract: false, final false
static inline bool CheckBox_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layermask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckBox_Internal_Injected, addr 0x69c18f4, size 0x74, virtual false, abstract: false, final false
static inline bool CheckBox_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  center, ::ByRef<::UnityEngine::Vector3>  halfExtents, ::ByRef<::UnityEngine::Quaternion>  orientation, int32_t  layermask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckCapsule, addr 0x69c1780, size 0xb0, virtual false, abstract: false, final false
static inline bool CheckCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius) ;

/// @brief Method CheckCapsule, addr 0x69c16cc, size 0xb4, virtual false, abstract: false, final false
static inline bool CheckCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, int32_t  layerMask) ;

/// @brief Method CheckCapsule, addr 0x69c1604, size 0xc8, virtual false, abstract: false, final false
static inline bool CheckCapsule(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckCapsule_Internal, addr 0x69c14c0, size 0xc8, virtual false, abstract: false, final false
static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckCapsule_Internal_Injected, addr 0x69c1588, size 0x7c, virtual false, abstract: false, final false
static inline bool CheckCapsule_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  start, ::ByRef<::UnityEngine::Vector3>  end, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckSphere, addr 0x69c07b0, size 0x88, virtual false, abstract: false, final false
static inline bool CheckSphere(::UnityEngine::Vector3  position, float_t  radius) ;

/// @brief Method CheckSphere, addr 0x69c0724, size 0x8c, virtual false, abstract: false, final false
static inline bool CheckSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask) ;

/// @brief Method CheckSphere, addr 0x69c0684, size 0xa0, virtual false, abstract: false, final false
static inline bool CheckSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckSphere_Internal, addr 0x69c055c, size 0xbc, virtual false, abstract: false, final false
static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method CheckSphere_Internal_Injected, addr 0x69c0618, size 0x6c, virtual false, abstract: false, final false
static inline bool CheckSphere_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method ClosestPoint, addr 0x69c0000, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ClosestPoint(::UnityEngine::Vector3  point, ::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method ComputePenetration, addr 0x69bfd44, size 0x138, virtual false, abstract: false, final false
static inline bool ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<float_t>  distance) ;

/// @brief Method ConnectPhysicsSDKVisualDebugger, addr 0x69c385c, size 0x28, virtual false, abstract: false, final false
static inline bool ConnectPhysicsSDKVisualDebugger() ;

/// @brief Method DisconnectPhysicsSDKVisualDebugger, addr 0x69c3884, size 0x28, virtual false, abstract: false, final false
static inline void DisconnectPhysicsSDKVisualDebugger() ;

/// @brief Method GetBodyByInstanceID, addr 0x69c38e8, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Component> GetBodyByInstanceID(int32_t  instanceID) ;

/// @brief Method GetBodyByInstanceID_Injected, addr 0x69c3a30, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetBodyByInstanceID_Injected(int32_t  instanceID) ;

/// @brief Method GetColliderByInstanceID, addr 0x69a64cc, size 0x148, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Collider> GetColliderByInstanceID(int32_t  instanceID) ;

/// @brief Method GetColliderByInstanceID_Injected, addr 0x69c38ac, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetColliderByInstanceID_Injected(int32_t  instanceID) ;

/// @brief Method GetCollisionToReport, addr 0x69c4924, size 0x128, virtual false, abstract: false, final false
static inline ::UnityEngine::Collision* GetCollisionToReport(::ByRef<::UnityEngine::ContactPairHeader>  header, ::ByRef<::UnityEngine::ContactPair>  pair, bool  flipped) ;

/// @brief Method GetCurrentIntegrationId, addr 0x69b949c, size 0x28, virtual false, abstract: false, final false
static inline uint32_t GetCurrentIntegrationId() ;

/// @brief Method GetIgnoreCollision, addr 0x69b9ebc, size 0x124, virtual false, abstract: false, final false
static inline bool GetIgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2) ;

/// @brief Method GetIgnoreCollision_Injected, addr 0x69b9fe0, size 0x44, virtual false, abstract: false, final false
static inline bool GetIgnoreCollision_Injected(::System::IntPtr  collider1, ::System::IntPtr  collider2) ;

/// @brief Method GetIgnoreLayerCollision, addr 0x69b9e78, size 0x44, virtual false, abstract: false, final false
static inline bool GetIgnoreLayerCollision(int32_t  layer1, int32_t  layer2) ;

/// @brief Method GetIntegrationInfos, addr 0x69b93e8, size 0xb4, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<::UnityEngine::IntegrationInfo> GetIntegrationInfos() ;

/// @brief Method GetIntegrationInfos, addr 0x69b93a4, size 0x44, virtual false, abstract: false, final false
static inline void GetIntegrationInfos(::ByRef<::System::IntPtr>  integrations, ::ByRef<uint64_t>  integrationCount) ;

/// @brief Method IgnoreCollision, addr 0x69b9d2c, size 0x6c, virtual false, abstract: false, final false
static inline void IgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2) ;

/// @brief Method IgnoreCollision, addr 0x69b9bac, size 0x12c, virtual false, abstract: false, final false
static inline void IgnoreCollision(::UnityEngine::Collider*  collider1, ::UnityEngine::Collider*  collider2, bool  ignore) ;

/// @brief Method IgnoreCollision_Injected, addr 0x69b9cd8, size 0x54, virtual false, abstract: false, final false
static inline void IgnoreCollision_Injected(::System::IntPtr  collider1, ::System::IntPtr  collider2, bool  ignore) ;

/// @brief Method IgnoreLayerCollision, addr 0x69b9dec, size 0x8c, virtual false, abstract: false, final false
static inline void IgnoreLayerCollision(int32_t  layer1, int32_t  layer2) ;

/// @brief Method IgnoreLayerCollision, addr 0x69b9d98, size 0x54, virtual false, abstract: false, final false
static inline void IgnoreLayerCollision(int32_t  layer1, int32_t  layer2, bool  ignore) ;

/// @brief Method Internal_BoxCastAll, addr 0x69c2cd0, size 0x18c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Internal_BoxCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Vector3  direction, ::UnityEngine::Quaternion  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_BoxCastAll_Injected, addr 0x69c2e5c, size 0x9c, virtual false, abstract: false, final false
static inline void Internal_BoxCastAll_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  center, ::ByRef<::UnityEngine::Vector3>  halfExtents, ::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<::UnityEngine::Quaternion>  orientation, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method Internal_RaycastAll, addr 0x69bd07c, size 0x168, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Internal_RaycastAll_Injected, addr 0x69bd1e4, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_RaycastAll_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Ray>  ray, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method InterpolateBodies_Internal, addr 0x69bf8d4, size 0x7c, virtual false, abstract: false, final false
static inline void InterpolateBodies_Internal(::UnityEngine::PhysicsScene  physicsScene) ;

/// @brief Method InterpolateBodies_Internal_Injected, addr 0x69bf950, size 0x3c, virtual false, abstract: false, final false
static inline void InterpolateBodies_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene) ;

/// @brief Method Linecast, addr 0x69bb140, size 0xa0, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// @brief Method Linecast, addr 0x69bb3bc, size 0xa8, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Linecast, addr 0x69bb308, size 0xb4, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask) ;

/// @brief Method Linecast, addr 0x69bb1e0, size 0x128, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Linecast, addr 0x69bb09c, size 0xa4, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, int32_t  layerMask) ;

/// @brief Method Linecast, addr 0x69baf84, size 0x118, virtual false, abstract: false, final false
static inline bool Linecast(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

static inline ::UnityEngine::Physics* New_ctor() ;

/// @brief Method OnSceneContact, addr 0x69c436c, size 0x258, virtual false, abstract: false, final false
static inline void OnSceneContact(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count) ;

/// @brief Method OnSceneContactModify, addr 0x69b9214, size 0xb0, virtual false, abstract: false, final false
static inline void OnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD) ;

/// @brief Method OverlapBox, addr 0x69c2118, size 0xf0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents) ;

/// @brief Method OverlapBox, addr 0x69c2020, size 0xf8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method OverlapBox, addr 0x69c1f1c, size 0x104, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layerMask) ;

/// @brief Method OverlapBox, addr 0x69c1e54, size 0xc8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x69c2510, size 0xf8, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x69c2408, size 0x108, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::UnityEngine::Quaternion  orientation) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x69c22fc, size 0x10c, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask) ;

/// @brief Method OverlapBoxNonAlloc, addr 0x69c2208, size 0xd8, virtual false, abstract: false, final false
static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, ::UnityEngine::Quaternion  orientation, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBox_Internal, addr 0x69c1d20, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  center, ::UnityEngine::Vector3  halfExtents, ::UnityEngine::Quaternion  orientation, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapBox_Internal_Injected, addr 0x69c1de0, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapBox_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  center, ::ByRef<::UnityEngine::Vector3>  halfExtents, ::ByRef<::UnityEngine::Quaternion>  orientation, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule, addr 0x69bf33c, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius) ;

/// @brief Method OverlapCapsule, addr 0x69bf288, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  layerMask) ;

/// @brief Method OverlapCapsule, addr 0x69bf1c0, size 0xc8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsuleNonAlloc, addr 0x69c36c4, size 0xb8, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results) ;

/// @brief Method OverlapCapsuleNonAlloc, addr 0x69c3600, size 0xc4, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask) ;

/// @brief Method OverlapCapsuleNonAlloc, addr 0x69c3528, size 0xd0, virtual false, abstract: false, final false
static inline int32_t OverlapCapsuleNonAlloc(::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule_Internal, addr 0x69bf080, size 0xc4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  point0, ::UnityEngine::Vector3  point1, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapCapsule_Internal_Injected, addr 0x69bf144, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapCapsule_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  point0, ::ByRef<::UnityEngine::Vector3>  point1, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere, addr 0x69bf63c, size 0x88, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius) ;

/// @brief Method OverlapSphere, addr 0x69bf5b0, size 0x8c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask) ;

/// @brief Method OverlapSphere, addr 0x69bf510, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere(::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x69c04cc, size 0x90, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x69c0430, size 0x9c, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask) ;

/// @brief Method OverlapSphereNonAlloc, addr 0x69c0380, size 0xa8, virtual false, abstract: false, final false
static inline int32_t OverlapSphereNonAlloc(::UnityEngine::Vector3  position, float_t  radius, ::ArrayW<::UnityEngine::Collider*,::Array<::UnityEngine::Collider*>*>  results, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal, addr 0x69bf3ec, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere_Internal(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method OverlapSphere_Internal_Injected, addr 0x69bf4a4, size 0x6c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> OverlapSphere_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  position, float_t  radius, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method PhysXOnSceneContactModify, addr 0x69b92c4, size 0xe0, virtual false, abstract: false, final false
static inline void PhysXOnSceneContactModify(::UnityEngine::PhysicsScene  scene, ::System::IntPtr  buffer, int32_t  count, bool  isCCD) ;

/// @brief Method Query_CapsuleCastAll, addr 0x69be164, size 0x190, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Query_CapsuleCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_CapsuleCastAll_Injected, addr 0x69be2f4, size 0x9c, virtual false, abstract: false, final false
static inline void Query_CapsuleCastAll_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  p0, ::ByRef<::UnityEngine::Vector3>  p1, float_t  radius, ::ByRef<::UnityEngine::Vector3>  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method Query_ClosestPoint, addr 0x69bfe7c, size 0x118, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 Query_ClosestPoint(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  point) ;

/// @brief Method Query_ClosestPoint_Injected, addr 0x69bff94, size 0x6c, virtual false, abstract: false, final false
static inline void Query_ClosestPoint_Injected(::System::IntPtr  collider, ::ByRef<::UnityEngine::Vector3>  position, ::ByRef<::UnityEngine::Quaternion>  rotation, ::ByRef<::UnityEngine::Vector3>  point, ::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method Query_ComputePenetration, addr 0x69bfb34, size 0x184, virtual false, abstract: false, final false
static inline bool Query_ComputePenetration(::UnityEngine::Collider*  colliderA, ::UnityEngine::Vector3  positionA, ::UnityEngine::Quaternion  rotationA, ::UnityEngine::Collider*  colliderB, ::UnityEngine::Vector3  positionB, ::UnityEngine::Quaternion  rotationB, ::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<float_t>  distance) ;

/// @brief Method Query_ComputePenetration_Injected, addr 0x69bfcb8, size 0x8c, virtual false, abstract: false, final false
static inline bool Query_ComputePenetration_Injected(::System::IntPtr  colliderA, ::ByRef<::UnityEngine::Vector3>  positionA, ::ByRef<::UnityEngine::Quaternion>  rotationA, ::System::IntPtr  colliderB, ::ByRef<::UnityEngine::Vector3>  positionB, ::ByRef<::UnityEngine::Quaternion>  rotationB, ::ByRef<::UnityEngine::Vector3>  direction, ::ByRef<float_t>  distance) ;

/// @brief Method Query_SphereCastAll, addr 0x69be840, size 0x180, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll(::UnityEngine::PhysicsScene  physicsScene, ::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Query_SphereCastAll_Injected, addr 0x69be9c0, size 0x8c, virtual false, abstract: false, final false
static inline void Query_SphereCastAll_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, ::ByRef<::UnityEngine::Vector3>  origin, float_t  radius, ::ByRef<::UnityEngine::Vector3>  direction, float_t  maxDistance, int32_t  mask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction, ::ByRef<::UnityEngine::Bindings::BlittableArrayWrapper>  ret) ;

/// @brief Method Raycast, addr 0x69ba47c, size 0xbc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method Raycast, addr 0x69ba9bc, size 0xcc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Raycast, addr 0x69ba8f0, size 0xcc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x69ba810, size 0xe0, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x69ba538, size 0xdc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x69ba3b0, size 0xcc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x69ba2e8, size 0xc8, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x69ba024, size 0xdc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x69bac50, size 0x8c, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray) ;

/// @brief Method Raycast, addr 0x69baef0, size 0x94, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method Raycast, addr 0x69bae4c, size 0xa4, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x69bad90, size 0xbc, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x69bacdc, size 0xb4, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method Raycast, addr 0x69babc4, size 0x8c, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0x69bab24, size 0xa0, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method Raycast, addr 0x69baa88, size 0x9c, virtual false, abstract: false, final false
static inline bool Raycast(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastAll, addr 0x69bd5f0, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction) ;

/// @brief Method RaycastAll, addr 0x69bd540, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method RaycastAll, addr 0x69bd48c, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0x69bd260, size 0x22c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastAll, addr 0x69bd8ac, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray) ;

/// @brief Method RaycastAll, addr 0x69bd804, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance) ;

/// @brief Method RaycastAll, addr 0x69bd750, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastAll, addr 0x69bd698, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray  ray, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc, addr 0x69be09c, size 0xc8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method RaycastNonAlloc, addr 0x69bdfd4, size 0xc8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method RaycastNonAlloc, addr 0x69bdef8, size 0xdc, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0x69bde20, size 0xd8, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RaycastNonAlloc, addr 0x69bdd90, size 0x90, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method RaycastNonAlloc, addr 0x69bdcf0, size 0xa0, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method RaycastNonAlloc, addr 0x69bdc54, size 0x9c, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method RaycastNonAlloc, addr 0x69bd94c, size 0xb0, virtual false, abstract: false, final false
static inline int32_t RaycastNonAlloc(::UnityEngine::Ray  ray, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method RebuildBroadphaseRegions, addr 0x69c4188, size 0x4, virtual false, abstract: false, final false
static inline void RebuildBroadphaseRegions(::UnityEngine::Bounds  worldBounds, int32_t  subdivisions) ;

/// @brief Method ReportContacts, addr 0x69c45c4, size 0x330, virtual false, abstract: false, final false
static inline void ReportContacts(::Unity::Collections::NativeArray_1_ReadOnly<::UnityEngine::ContactPairHeader>  array) ;

/// @brief Method ResetInterpolationPoses_Internal, addr 0x69bf98c, size 0x7c, virtual false, abstract: false, final false
static inline void ResetInterpolationPoses_Internal(::UnityEngine::PhysicsScene  physicsScene) ;

/// @brief Method ResetInterpolationPoses_Internal_Injected, addr 0x69bfa08, size 0x3c, virtual false, abstract: false, final false
static inline void ResetInterpolationPoses_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene) ;

/// @brief Method SendOnCollisionEnter, addr 0x69c3ab0, size 0xb8, virtual false, abstract: false, final false
static inline void SendOnCollisionEnter(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionEnter_Injected, addr 0x69c3b68, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionEnter_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionExit, addr 0x69c3ca8, size 0xb8, virtual false, abstract: false, final false
static inline void SendOnCollisionExit(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionExit_Injected, addr 0x69c3d60, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionExit_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionStay, addr 0x69c3bac, size 0xb8, virtual false, abstract: false, final false
static inline void SendOnCollisionStay(::UnityEngine::Component*  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method SendOnCollisionStay_Injected, addr 0x69c3c64, size 0x44, virtual false, abstract: false, final false
static inline void SendOnCollisionStay_Injected(::System::IntPtr  component, ::UnityEngine::Collision*  collision) ;

/// @brief Method Simulate, addr 0x69bf7d4, size 0x100, virtual false, abstract: false, final false
static inline void Simulate(float_t  step) ;

/// @brief Method Simulate_Internal, addr 0x69bf6c4, size 0xac, virtual false, abstract: false, final false
static inline void Simulate_Internal(::UnityEngine::PhysicsScene  physicsScene, float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options) ;

/// @brief Method Simulate_Internal_Injected, addr 0x69bf770, size 0x64, virtual false, abstract: false, final false
static inline void Simulate_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene>  physicsScene, float_t  step, ::UnityEngine::SimulationStage  stages, ::UnityEngine::SimulationOption  options) ;

/// @brief Method SphereCast, addr 0x69bbf18, size 0xc0, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method SphereCast, addr 0x69bbe58, size 0xc0, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method SphereCast, addr 0x69bbd8c, size 0xcc, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0x69bbcac, size 0xd8, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCast, addr 0x69bc1f4, size 0x98, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius) ;

/// @brief Method SphereCast, addr 0x69bc4b0, size 0xa8, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ::ByRef<::UnityEngine::RaycastHit>  hitInfo) ;

/// @brief Method SphereCast, addr 0x69bc408, size 0xa8, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance) ;

/// @brief Method SphereCast, addr 0x69bc35c, size 0xac, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0x69bc28c, size 0xd0, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, ::ByRef<::UnityEngine::RaycastHit>  hitInfo, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCast, addr 0x69bc15c, size 0x98, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance) ;

/// @brief Method SphereCast, addr 0x69bc0b8, size 0xa4, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCast, addr 0x69bbfd8, size 0xe0, virtual false, abstract: false, final false
static inline bool SphereCast(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastAll, addr 0x69bed40, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction) ;

/// @brief Method SphereCastAll, addr 0x69bec88, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance) ;

/// @brief Method SphereCastAll, addr 0x69bebcc, size 0xbc, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastAll, addr 0x69bea4c, size 0x180, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastAll, addr 0x69befec, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius) ;

/// @brief Method SphereCastAll, addr 0x69bef58, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance) ;

/// @brief Method SphereCastAll, addr 0x69beeb8, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastAll, addr 0x69bedf8, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray  ray, float_t  radius, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastNonAlloc, addr 0x69c1140, size 0xc0, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method SphereCastNonAlloc, addr 0x69c1080, size 0xc0, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method SphereCastNonAlloc, addr 0x69c0fb4, size 0xcc, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastNonAlloc, addr 0x69c0d9c, size 0xe8, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Vector3  origin, float_t  radius, ::UnityEngine::Vector3  direction, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SphereCastNonAlloc, addr 0x69c141c, size 0xa4, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray  ray, float_t  radius, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results) ;

/// @brief Method SphereCastNonAlloc, addr 0x69c1378, size 0xa4, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray  ray, float_t  radius, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance) ;

/// @brief Method SphereCastNonAlloc, addr 0x69c12d0, size 0xa8, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray  ray, float_t  radius, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask) ;

/// @brief Method SphereCastNonAlloc, addr 0x69c1200, size 0xd0, virtual false, abstract: false, final false
static inline int32_t SphereCastNonAlloc(::UnityEngine::Ray  ray, float_t  radius, ::ArrayW<::UnityEngine::RaycastHit,::Array<::UnityEngine::RaycastHit>*>  results, float_t  maxDistance, int32_t  layerMask, ::UnityEngine::QueryTriggerInteraction  queryTriggerInteraction) ;

/// @brief Method SyncTransforms, addr 0x69bfa44, size 0x28, virtual false, abstract: false, final false
static inline void SyncTransforms() ;

/// @brief Method TranslateTriangleIndexFromID, addr 0x69c3a6c, size 0x44, virtual false, abstract: false, final false
static inline uint32_t TranslateTriangleIndexFromID(int32_t  instanceID, uint32_t  faceIndex) ;

/// @brief Method .ctor, addr 0x69c4a64, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_ContactEvent, addr 0x69c418c, size 0xf0, virtual false, abstract: false, final false
static inline void add_ContactEvent(::UnityEngine::Physics_ContactEventDelegate*  value) ;

/// @brief Method add_ContactModifyEvent, addr 0x69b8bec, size 0x104, virtual false, abstract: false, final false
static inline void add_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

/// @brief Method add_ContactModifyEventCCD, addr 0x69b8df4, size 0x108, virtual false, abstract: false, final false
static inline void add_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

/// @brief Method add_GenericContactModifyEvent, addr 0x69b9004, size 0x108, virtual false, abstract: false, final false
static inline void add_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  value) ;

static inline ::UnityEngine::Physics_ContactEventDelegate* getStaticF_ContactEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEvent() ;

static inline ::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>* getStaticF_ContactModifyEventCCD() ;

static inline ::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>* getStaticF_GenericContactModifyEvent() ;

static inline ::UnityEngine::Collision* getStaticF_s_ReusableCollision() ;

/// @brief Method get_autoSimulation, addr 0x69c4090, size 0x78, virtual false, abstract: false, final false
static inline bool get_autoSimulation() ;

/// @brief Method get_autoSyncTransforms, addr 0x69bfa6c, size 0x28, virtual false, abstract: false, final false
static inline bool get_autoSyncTransforms() ;

/// @brief Method get_bounceThreshold, addr 0x69b97dc, size 0x28, virtual false, abstract: false, final false
static inline float_t get_bounceThreshold() ;

/// @brief Method get_bounceTreshold, addr 0x69c3db0, size 0x6c, virtual false, abstract: false, final false
static inline float_t get_bounceTreshold() ;

/// @brief Method get_clothGravity, addr 0x69c01f0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_clothGravity() ;

/// @brief Method get_clothGravity_Injected, addr 0x69c0280, size 0x3c, virtual false, abstract: false, final false
static inline void get_clothGravity_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_defaultContactOffset, addr 0x69b9654, size 0x28, virtual false, abstract: false, final false
static inline float_t get_defaultContactOffset() ;

/// @brief Method get_defaultMaxAngularSpeed, addr 0x69b99c8, size 0x28, virtual false, abstract: false, final false
static inline float_t get_defaultMaxAngularSpeed() ;

/// @brief Method get_defaultMaxDepenetrationVelocity, addr 0x69b983c, size 0x28, virtual false, abstract: false, final false
static inline float_t get_defaultMaxDepenetrationVelocity() ;

/// @brief Method get_defaultPhysicsScene, addr 0x69b9af0, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene() ;

/// @brief Method get_defaultPhysicsScene_Injected, addr 0x69b9b70, size 0x3c, virtual false, abstract: false, final false
static inline void get_defaultPhysicsScene_Injected(::ByRef<::UnityEngine::PhysicsScene>  ret) ;

/// @brief Method get_defaultSolverIterations, addr 0x69b989c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_defaultSolverIterations() ;

/// @brief Method get_defaultSolverVelocityIterations, addr 0x69b9900, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_defaultSolverVelocityIterations() ;

/// @brief Method get_gravity, addr 0x69b94c4, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 get_gravity() ;

/// @brief Method get_gravity_Injected, addr 0x69b9554, size 0x3c, virtual false, abstract: false, final false
static inline void get_gravity_Injected(::ByRef<::UnityEngine::Vector3>  ret) ;

/// @brief Method get_improvedPatchFriction, addr 0x69b9a28, size 0x28, virtual false, abstract: false, final false
static inline bool get_improvedPatchFriction() ;

/// @brief Method get_interCollisionDistance, addr 0x69c00cc, size 0x28, virtual false, abstract: false, final false
static inline float_t get_interCollisionDistance() ;

/// @brief Method get_interCollisionSettingsToggle, addr 0x69c018c, size 0x28, virtual false, abstract: false, final false
static inline bool get_interCollisionSettingsToggle() ;

/// @brief Method get_interCollisionStiffness, addr 0x69c012c, size 0x28, virtual false, abstract: false, final false
static inline float_t get_interCollisionStiffness() ;

/// @brief Method get_invokeCollisionCallbacks, addr 0x69b9a8c, size 0x28, virtual false, abstract: false, final false
static inline bool get_invokeCollisionCallbacks() ;

/// @brief Method get_maxAngularVelocity, addr 0x69c3eb0, size 0x8, virtual false, abstract: false, final false
static inline float_t get_maxAngularVelocity() ;

/// @brief Method get_minPenetrationForPenalty, addr 0x69c3da4, size 0x8, virtual false, abstract: false, final false
static inline float_t get_minPenetrationForPenalty() ;

/// @brief Method get_penetrationPenaltyForce, addr 0x69c4084, size 0x8, virtual false, abstract: false, final false
static inline float_t get_penetrationPenaltyForce() ;

/// @brief Method get_queriesHitBackfaces, addr 0x69b9778, size 0x28, virtual false, abstract: false, final false
static inline bool get_queriesHitBackfaces() ;

/// @brief Method get_queriesHitTriggers, addr 0x69b9714, size 0x28, virtual false, abstract: false, final false
static inline bool get_queriesHitTriggers() ;

/// @brief Method get_reuseCollisionCallbacks, addr 0x69bfad0, size 0x28, virtual false, abstract: false, final false
static inline bool get_reuseCollisionCallbacks() ;

/// @brief Method get_simulationMode, addr 0x69b9964, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::SimulationMode get_simulationMode() ;

/// @brief Method get_sleepAngularVelocity, addr 0x69c3ea4, size 0x8, virtual false, abstract: false, final false
static inline float_t get_sleepAngularVelocity() ;

/// @brief Method get_sleepThreshold, addr 0x69b96b4, size 0x28, virtual false, abstract: false, final false
static inline float_t get_sleepThreshold() ;

/// @brief Method get_sleepVelocity, addr 0x69c3e98, size 0x8, virtual false, abstract: false, final false
static inline float_t get_sleepVelocity() ;

/// @brief Method get_solverIterationCount, addr 0x69c3ebc, size 0x6c, virtual false, abstract: false, final false
static inline int32_t get_solverIterationCount() ;

/// @brief Method get_solverVelocityIterationCount, addr 0x69c3fa0, size 0x6c, virtual false, abstract: false, final false
static inline int32_t get_solverVelocityIterationCount() ;

/// @brief Method remove_ContactEvent, addr 0x69c427c, size 0xf0, virtual false, abstract: false, final false
static inline void remove_ContactEvent(::UnityEngine::Physics_ContactEventDelegate*  value) ;

/// @brief Method remove_ContactModifyEvent, addr 0x69b8cf0, size 0x104, virtual false, abstract: false, final false
static inline void remove_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

/// @brief Method remove_ContactModifyEventCCD, addr 0x69b8efc, size 0x108, virtual false, abstract: false, final false
static inline void remove_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

/// @brief Method remove_GenericContactModifyEvent, addr 0x69b910c, size 0x108, virtual false, abstract: false, final false
static inline void remove_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  value) ;

static inline void setStaticF_ContactEvent(::UnityEngine::Physics_ContactEventDelegate*  value) ;

static inline void setStaticF_ContactModifyEvent(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_ContactModifyEventCCD(::System::Action_2<::UnityEngine::PhysicsScene,::Unity::Collections::NativeArray_1<::UnityEngine::ModifiableContactPair>>*  value) ;

static inline void setStaticF_GenericContactModifyEvent(::System::Action_4<::UnityEngine::PhysicsScene,::System::IntPtr,int32_t,bool>*  value) ;

static inline void setStaticF_s_ReusableCollision(::UnityEngine::Collision*  value) ;

/// @brief Method set_autoSimulation, addr 0x69c4108, size 0x80, virtual false, abstract: false, final false
static inline void set_autoSimulation(bool  value) ;

/// @brief Method set_autoSyncTransforms, addr 0x69bfa94, size 0x3c, virtual false, abstract: false, final false
static inline void set_autoSyncTransforms(bool  value) ;

/// @brief Method set_bounceThreshold, addr 0x69b9804, size 0x38, virtual false, abstract: false, final false
static inline void set_bounceThreshold(float_t  value) ;

/// @brief Method set_bounceTreshold, addr 0x69c3e1c, size 0x7c, virtual false, abstract: false, final false
static inline void set_bounceTreshold(float_t  value) ;

/// @brief Method set_clothGravity, addr 0x69c02bc, size 0x88, virtual false, abstract: false, final false
static inline void set_clothGravity(::UnityEngine::Vector3  value) ;

/// @brief Method set_clothGravity_Injected, addr 0x69c0344, size 0x3c, virtual false, abstract: false, final false
static inline void set_clothGravity_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_defaultContactOffset, addr 0x69b967c, size 0x38, virtual false, abstract: false, final false
static inline void set_defaultContactOffset(float_t  value) ;

/// @brief Method set_defaultMaxAngularSpeed, addr 0x69b99f0, size 0x38, virtual false, abstract: false, final false
static inline void set_defaultMaxAngularSpeed(float_t  value) ;

/// @brief Method set_defaultMaxDepenetrationVelocity, addr 0x69b9864, size 0x38, virtual false, abstract: false, final false
static inline void set_defaultMaxDepenetrationVelocity(float_t  value) ;

/// @brief Method set_defaultSolverIterations, addr 0x69b98c4, size 0x3c, virtual false, abstract: false, final false
static inline void set_defaultSolverIterations(int32_t  value) ;

/// @brief Method set_defaultSolverVelocityIterations, addr 0x69b9928, size 0x3c, virtual false, abstract: false, final false
static inline void set_defaultSolverVelocityIterations(int32_t  value) ;

/// @brief Method set_gravity, addr 0x69b9590, size 0x88, virtual false, abstract: false, final false
static inline void set_gravity(::UnityEngine::Vector3  value) ;

/// @brief Method set_gravity_Injected, addr 0x69b9618, size 0x3c, virtual false, abstract: false, final false
static inline void set_gravity_Injected(::ByRef<::UnityEngine::Vector3>  value) ;

/// @brief Method set_improvedPatchFriction, addr 0x69b9a50, size 0x3c, virtual false, abstract: false, final false
static inline void set_improvedPatchFriction(bool  value) ;

/// @brief Method set_interCollisionDistance, addr 0x69c00f4, size 0x38, virtual false, abstract: false, final false
static inline void set_interCollisionDistance(float_t  value) ;

/// @brief Method set_interCollisionSettingsToggle, addr 0x69c01b4, size 0x3c, virtual false, abstract: false, final false
static inline void set_interCollisionSettingsToggle(bool  value) ;

/// @brief Method set_interCollisionStiffness, addr 0x69c0154, size 0x38, virtual false, abstract: false, final false
static inline void set_interCollisionStiffness(float_t  value) ;

/// @brief Method set_invokeCollisionCallbacks, addr 0x69b9ab4, size 0x3c, virtual false, abstract: false, final false
static inline void set_invokeCollisionCallbacks(bool  value) ;

/// @brief Method set_maxAngularVelocity, addr 0x69c3eb8, size 0x4, virtual false, abstract: false, final false
static inline void set_maxAngularVelocity(float_t  value) ;

/// @brief Method set_minPenetrationForPenalty, addr 0x69c3dac, size 0x4, virtual false, abstract: false, final false
static inline void set_minPenetrationForPenalty(float_t  value) ;

/// @brief Method set_penetrationPenaltyForce, addr 0x69c408c, size 0x4, virtual false, abstract: false, final false
static inline void set_penetrationPenaltyForce(float_t  value) ;

/// @brief Method set_queriesHitBackfaces, addr 0x69b97a0, size 0x3c, virtual false, abstract: false, final false
static inline void set_queriesHitBackfaces(bool  value) ;

/// @brief Method set_queriesHitTriggers, addr 0x69b973c, size 0x3c, virtual false, abstract: false, final false
static inline void set_queriesHitTriggers(bool  value) ;

/// @brief Method set_reuseCollisionCallbacks, addr 0x69bfaf8, size 0x3c, virtual false, abstract: false, final false
static inline void set_reuseCollisionCallbacks(bool  value) ;

/// @brief Method set_simulationMode, addr 0x69b998c, size 0x3c, virtual false, abstract: false, final false
static inline void set_simulationMode(::UnityEngine::SimulationMode  value) ;

/// @brief Method set_sleepAngularVelocity, addr 0x69c3eac, size 0x4, virtual false, abstract: false, final false
static inline void set_sleepAngularVelocity(float_t  value) ;

/// @brief Method set_sleepThreshold, addr 0x69b96dc, size 0x38, virtual false, abstract: false, final false
static inline void set_sleepThreshold(float_t  value) ;

/// @brief Method set_sleepVelocity, addr 0x69c3ea0, size 0x4, virtual false, abstract: false, final false
static inline void set_sleepVelocity(float_t  value) ;

/// @brief Method set_solverIterationCount, addr 0x69c3f28, size 0x78, virtual false, abstract: false, final false
static inline void set_solverIterationCount(int32_t  value) ;

/// @brief Method set_solverVelocityIterationCount, addr 0x69c400c, size 0x78, virtual false, abstract: false, final false
static inline void set_solverVelocityIterationCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Physics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Physics(Physics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Physics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Physics(Physics const& ) = delete;

/// @brief Field AllLayers offset 0xffffffff size 0x4
static constexpr int32_t  AllLayers{static_cast<int32_t>(0xffffffff)};

/// @brief Field DefaultRaycastLayers offset 0xffffffff size 0x4
static constexpr int32_t  DefaultRaycastLayers{static_cast<int32_t>(0xfffffffb)};

/// @brief Field IgnoreRaycastLayer offset 0xffffffff size 0x4
static constexpr int32_t  IgnoreRaycastLayer{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18614};

/// @brief Field kAllLayers offset 0xffffffff size 0x4
static constexpr int32_t  kAllLayers{static_cast<int32_t>(0xffffffff)};

/// @brief Field kDefaultRaycastLayers offset 0xffffffff size 0x4
static constexpr int32_t  kDefaultRaycastLayers{static_cast<int32_t>(0xfffffffb)};

/// @brief Field kIgnoreRaycastLayer offset 0xffffffff size 0x4
static constexpr int32_t  kIgnoreRaycastLayer{static_cast<int32_t>(0x4)};

/// @brief Field k_MaxFloatMinusEpsilon offset 0xffffffff size 0x4
static constexpr float_t  k_MaxFloatMinusEpsilon{static_cast<float_t>(3.4028233e38f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Physics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics*, "UnityEngine", "Physics");
NEED_NO_BOX(::UnityEngine::Physics_ContactEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics_ContactEventDelegate*, "UnityEngine", "Physics/ContactEventDelegate");
