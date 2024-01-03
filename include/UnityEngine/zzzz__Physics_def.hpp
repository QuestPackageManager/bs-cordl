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
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine {
struct ModifiableContactPair;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct PhysicsScene;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Quaternion;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15484))
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

  /// @brief Method OnSceneContactModify, addr 0x2d1340c, size 0xcc, virtual false, abstract: false, final false
  static inline void OnSceneContactModify(::UnityEngine::PhysicsScene scene, void* buffer, int32_t count, bool isCCD);

  /// @brief Method get_gravity, addr 0x2d134d8, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 get_gravity();

  /// @brief Method get_defaultPhysicsScene, addr 0x2d13560, size 0x44, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene get_defaultPhysicsScene();

  /// @brief Method IgnoreCollision, addr 0x2d135e0, size 0x54, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2, bool ignore);

  /// @brief Method IgnoreCollision, addr 0x2d13634, size 0x48, virtual false, abstract: false, final false
  static inline void IgnoreCollision(::UnityEngine::Collider* collider1, ::UnityEngine::Collider* collider2);

  /// @brief Method Raycast, addr 0x2d1367c, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d13898, size 0xc4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x2d1395c, size 0xb8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method Raycast, addr 0x2d13a14, size 0xb0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method Raycast, addr 0x2d13ac4, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d13d04, size 0xcc, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x2d13dd0, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x2d13e98, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method Raycast, addr 0x2d13f58, size 0xd0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d14028, size 0xc4, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x2d140ec, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method Raycast, addr 0x2d141ac, size 0xc0, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray);

  /// @brief Method Raycast, addr 0x2d1426c, size 0xd8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d14344, size 0x7c, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x2d143c0, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance);

  /// @brief Method Raycast, addr 0x2d14488, size 0xc8, virtual false, abstract: false, final false
  static inline bool Raycast(::UnityEngine::Ray ray, ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method CapsuleCast, addr 0x2d14550, size 0xdc, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x2d1464c, size 0x20, virtual false, abstract: false, final false
  static inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                                 float_t maxDistance, int32_t layerMask);

  /// @brief Method SphereCast, addr 0x2d1466c, size 0xcc, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x2d14740, size 0x8, virtual false, abstract: false, final false
  static inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask);

  /// @brief Method Internal_RaycastAll, addr 0x2d14748, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance,
                                                                                                             int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x2d1482c, size 0x1a0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x2d149cc, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                                                                                    int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x2d149d4, size 0xc, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x2d149e0, size 0x14, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction);

  /// @brief Method RaycastAll, addr 0x2d149f4, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
                                                                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastAll, addr 0x2d14a6c, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastAll, addr 0x2d14ae0, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray, float_t maxDistance);

  /// @brief Method RaycastAll, addr 0x2d14b48, size 0x68, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> RaycastAll(::UnityEngine::Ray ray);

  /// @brief Method RaycastNonAlloc, addr 0x2d14bb0, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x2d14e60, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x2d14f30, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x2d14ff4, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method RaycastNonAlloc, addr 0x2d150b8, size 0xd4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method RaycastNonAlloc, addr 0x2d1518c, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance, int32_t layerMask);

  /// @brief Method RaycastNonAlloc, addr 0x2d15254, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                                        float_t maxDistance);

  /// @brief Method RaycastNonAlloc, addr 0x2d15318, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t RaycastNonAlloc(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method Query_SphereCastAll, addr 0x2d153d4, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius,
                                                                                                             ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t mask,
                                                                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x2d154e0, size 0x17c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                                                                       float_t maxDistance, int32_t layerMask,
                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x2d1565c, size 0x88, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask,
                                                                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCastAll, addr 0x2d156e4, size 0x30, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> SphereCastAll(::UnityEngine::Ray ray, float_t radius, float_t maxDistance, int32_t layerMask);

  /// @brief Method CheckSphere_Internal, addr 0x2d15714, size 0x78, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere, addr 0x2d157f8, size 0x94, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere, addr 0x2d1588c, size 0x8, virtual false, abstract: false, final false
  static inline bool CheckSphere(::UnityEngine::Vector3 position, float_t radius, int32_t layerMask);

  /// @brief Method CheckCapsule_Internal, addr 0x2d15894, size 0x84, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask,
                                           ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule, addr 0x2d15994, size 0xb4, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule, addr 0x2d15a48, size 0x8, virtual false, abstract: false, final false
  static inline bool CheckCapsule(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t radius, int32_t layerMask);

  /// @brief Method OverlapBoxNonAlloc, addr 0x2d15a50, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBoxNonAlloc, addr 0x2d15b3c, size 0x10, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                           ::UnityEngine::Quaternion orientation, int32_t mask);

  /// @brief Method BakeMesh, addr 0x2d15b4c, size 0x44, virtual false, abstract: false, final false
  static inline void BakeMesh(int32_t meshID, bool convex);

  /// @brief Method get_gravity_Injected, addr 0x2d13524, size 0x3c, virtual false, abstract: false, final false
  static inline void get_gravity_Injected(ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_defaultPhysicsScene_Injected, addr 0x2d135a4, size 0x3c, virtual false, abstract: false, final false
  static inline void get_defaultPhysicsScene_Injected(ByRef<::UnityEngine::PhysicsScene> ret);

  /// @brief Method Internal_RaycastAll_Injected, addr 0x2d147c0, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Internal_RaycastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray,
                                                                                                                      float_t maxDistance, int32_t mask,
                                                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCastAll_Injected, addr 0x2d1545c, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> Query_SphereCastAll_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene,
                                                                                                                      ByRef<::UnityEngine::Vector3> origin, float_t radius,
                                                                                                                      ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, int32_t mask,
                                                                                                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckSphere_Internal_Injected, addr 0x2d1578c, size 0x6c, virtual false, abstract: false, final false
  static inline bool CheckSphere_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> position, float_t radius, int32_t layerMask,
                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CheckCapsule_Internal_Injected, addr 0x2d15918, size 0x7c, virtual false, abstract: false, final false
  static inline bool CheckCapsule_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> start, ByRef<::UnityEngine::Vector3> end, float_t radius,
                                                    int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

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
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Physics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics*, "UnityEngine", "Physics");
