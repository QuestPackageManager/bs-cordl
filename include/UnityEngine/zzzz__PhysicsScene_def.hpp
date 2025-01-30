#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene)
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
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
struct PhysicsScene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.PhysicsScene
struct CORDL_TYPE PhysicsScene {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::PhysicsScene>*();

  /// @brief Method BoxCast, addr 0x4910e58, size 0xe8, virtual false, abstract: false, final false
  inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo);

  /// @brief Method BoxCast, addr 0x48fdf40, size 0x30, virtual false, abstract: false, final false
  inline bool BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                      ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method BoxCast, addr 0x4911264, size 0xe8, virtual false, abstract: false, final false
  inline int32_t BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                         ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results);

  /// @brief Method BoxCast, addr 0x4903ae4, size 0x12c, virtual false, abstract: false, final false
  inline int32_t BoxCast(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                         ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, ::UnityEngine::Quaternion orientation, float_t maxDistance, int32_t layerMask,
                         ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x48fcdf4, size 0x20, virtual false, abstract: false, final false
  inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo,
                          float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x4901d68, size 0x134, virtual false, abstract: false, final false
  inline int32_t CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                             ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results, float_t maxDistance, int32_t layerMask,
                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Equals, addr 0x490f8c8, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x490f940, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::PhysicsScene other);

  /// @brief Method GetHashCode, addr 0x490f8c0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Internal_BoxCast, addr 0x4910d14, size 0x144, virtual false, abstract: false, final false
  static inline bool Internal_BoxCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Quaternion orientation,
                                      ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_BoxCastNonAlloc, addr 0x4911118, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t Internal_BoxCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                                 ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, ::UnityEngine::Quaternion orientation, float_t maxDistance,
                                                 int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_BoxCastNonAlloc_Injected, addr 0x49111c8, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t Internal_BoxCastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> halfExtents,
                                                          ::ByRef<::UnityEngine::Vector3> direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits,
                                                          ::ByRef<::UnityEngine::Quaternion> orientation, float_t maxDistance, int32_t mask,
                                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_CapsuleCast, addr 0x49103a4, size 0x14c, virtual false, abstract: false, final false
  static inline bool Internal_CapsuleCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                          ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_CapsuleCastNonAlloc, addr 0x49104f0, size 0xac, virtual false, abstract: false, final false
  static inline int32_t Internal_CapsuleCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, float_t radius, ::UnityEngine::Vector3 direction,
                                                     ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, float_t maxDistance, int32_t mask,
                                                     ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_CapsuleCastNonAlloc_Injected, addr 0x491059c, size 0x9c, virtual false, abstract: false, final false
  static inline int32_t Internal_CapsuleCastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> p0, ::ByRef<::UnityEngine::Vector3> p1, float_t radius,
                                                              ::ByRef<::UnityEngine::Vector3> direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits,
                                                              float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_Raycast, addr 0x491006c, size 0x7c, virtual false, abstract: false, final false
  static inline bool Internal_Raycast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance, ::ByRef<::UnityEngine::RaycastHit> hit, int32_t layerMask,
                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastNonAlloc, addr 0x4910164, size 0x78, virtual false, abstract: false, final false
  static inline int32_t Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits,
                                                 float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastNonAlloc_Injected, addr 0x49101dc, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Internal_RaycastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Ray> ray,
                                                          ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, float_t maxDistance, int32_t mask,
                                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastTest, addr 0x490ff84, size 0x7c, virtual false, abstract: false, final false
  static inline bool Internal_RaycastTest(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastTest_Injected, addr 0x4910000, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_RaycastTest_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Ray> ray, float_t maxDistance, int32_t layerMask,
                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_Raycast_Injected, addr 0x49100e8, size 0x7c, virtual false, abstract: false, final false
  static inline bool Internal_Raycast_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Ray> ray, float_t maxDistance, ::ByRef<::UnityEngine::RaycastHit> hit,
                                               int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SphereCast, addr 0x4910874, size 0x12c, virtual false, abstract: false, final false
  static inline bool Internal_SphereCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                         ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SphereCastNonAlloc, addr 0x49109a0, size 0x98, virtual false, abstract: false, final false
  static inline int32_t Internal_SphereCastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                                    ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, float_t maxDistance, int32_t mask,
                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SphereCastNonAlloc_Injected, addr 0x4910a38, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t Internal_SphereCastNonAlloc_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> origin, float_t radius,
                                                             ::ByRef<::UnityEngine::Vector3> direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits,
                                                             float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method InterpolateBodies, addr 0x490fcf4, size 0x148, virtual false, abstract: false, final false
  inline void InterpolateBodies();

  /// @brief Method IsEmpty, addr 0x490fa18, size 0xd0, virtual false, abstract: false, final false
  inline bool IsEmpty();

  /// @brief Method IsEmpty_Internal, addr 0x490fae8, size 0x44, virtual false, abstract: false, final false
  static inline bool IsEmpty_Internal(::UnityEngine::PhysicsScene physicsScene);

  /// @brief Method IsEmpty_Internal_Injected, addr 0x490fb2c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsEmpty_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene);

  /// @brief Method IsValid, addr 0x490f950, size 0x48, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValid_Internal, addr 0x490f998, size 0x44, virtual false, abstract: false, final false
  static inline bool IsValid_Internal(::UnityEngine::PhysicsScene physicsScene);

  /// @brief Method IsValid_Internal_Injected, addr 0x490f9dc, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValid_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene);

  /// @brief Method OverlapBox, addr 0x4911050, size 0xc8, virtual false, abstract: false, final false
  inline int32_t OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results);

  /// @brief Method OverlapBox, addr 0x49036e8, size 0x1c, virtual false, abstract: false, final false
  inline int32_t OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                            ::UnityEngine::Quaternion orientation, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBoxNonAlloc_Internal, addr 0x4910f40, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                    ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, ::UnityEngine::Quaternion orientation, int32_t mask,
                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBoxNonAlloc_Internal_Injected, addr 0x4910fcc, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> halfExtents,
                                                             ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, ::ByRef<::UnityEngine::Quaternion> orientation,
                                                             int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsule, addr 0x49048a0, size 0x8, virtual false, abstract: false, final false
  inline int32_t OverlapCapsule(::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                                int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsuleNonAlloc_Internal, addr 0x4910638, size 0x90, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point0, ::UnityEngine::Vector3 point1, float_t radius,
                                                        ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                                        ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapCapsuleNonAlloc_Internal_Injected, addr 0x49106c8, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OverlapCapsuleNonAlloc_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> point0, ::ByRef<::UnityEngine::Vector3> point1,
                                                                 float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                                                 ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphere, addr 0x4901884, size 0x8, virtual false, abstract: false, final false
  inline int32_t OverlapSphere(::UnityEngine::Vector3 position, float_t radius, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                               ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphereNonAlloc_Internal, addr 0x4910ac4, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 position, float_t radius,
                                                       ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                                       ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapSphereNonAlloc_Internal_Injected, addr 0x4910b48, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t OverlapSphereNonAlloc_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> position, float_t radius,
                                                                ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, int32_t layerMask,
                                                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_BoxCast, addr 0x4910bc4, size 0xb4, virtual false, abstract: false, final false
  static inline bool Query_BoxCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::UnityEngine::Vector3 direction,
                                   ::UnityEngine::Quaternion orientation, float_t maxDistance, ::ByRef<::UnityEngine::RaycastHit> outHit, int32_t layerMask,
                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_BoxCast_Injected, addr 0x4910c78, size 0x9c, virtual false, abstract: false, final false
  static inline bool Query_BoxCast_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> halfExtents,
                                            ::ByRef<::UnityEngine::Vector3> direction, ::ByRef<::UnityEngine::Quaternion> orientation, float_t maxDistance, ::ByRef<::UnityEngine::RaycastHit> outHit,
                                            int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCast, addr 0x4910258, size 0xb0, virtual false, abstract: false, final false
  static inline bool Query_CapsuleCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                       float_t maxDistance, ::ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCast_Injected, addr 0x4910308, size 0x9c, virtual false, abstract: false, final false
  static inline bool Query_CapsuleCast_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> point1, ::ByRef<::UnityEngine::Vector3> point2, float_t radius,
                                                ::ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, ::ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask,
                                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCast, addr 0x491074c, size 0x9c, virtual false, abstract: false, final false
  static inline bool Query_SphereCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                      ::ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCast_Injected, addr 0x49107e8, size 0x8c, virtual false, abstract: false, final false
  static inline bool Query_SphereCast_Injected(::ByRef<::UnityEngine::PhysicsScene> physicsScene, ::ByRef<::UnityEngine::Vector3> origin, float_t radius, ::ByRef<::UnityEngine::Vector3> direction,
                                               float_t maxDistance, ::ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x48fbef4, size 0x1ec, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x48fba08, size 0x1d0, virtual false, abstract: false, final false
  inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x48ff184, size 0x254, virtual false, abstract: false, final false
  inline int32_t Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, float_t maxDistance,
                         int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method ResetInterpolationPoses, addr 0x490fe3c, size 0x148, virtual false, abstract: false, final false
  inline void ResetInterpolationPoses();

  /// @brief Method Simulate, addr 0x490fb68, size 0x18c, virtual false, abstract: false, final false
  inline void Simulate(float_t step);

  /// @brief Method SphereCast, addr 0x48fd64c, size 0x8, virtual false, abstract: false, final false
  inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask,
                         ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x49022cc, size 0x120, virtual false, abstract: false, final false
  inline int32_t SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> results,
                            float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method ToString, addr 0x490f7c4, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
  constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene>* i___System__IEquatable_1___UnityEngine__PhysicsScene_();

  /// @brief Method op_Equality, addr 0x490f8a8, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::PhysicsScene lhs, ::UnityEngine::PhysicsScene rhs);

  /// @brief Method op_Inequality, addr 0x490f8b4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::PhysicsScene lhs, ::UnityEngine::PhysicsScene rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsScene();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PhysicsScene(int32_t m_Handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15763 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::PhysicsScene, m_Handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicsScene, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
