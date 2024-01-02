#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene)
namespace System {
class Object;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene);
// Type: UnityEngine::PhysicsScene
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15499))
// CS Name: ::UnityEngine::PhysicsScene
struct CORDL_TYPE PhysicsScene {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::PhysicsScene>*();

  /// @brief Method ToString, addr 0x2d174f8, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method GetHashCode, addr 0x2d175dc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2d175e4, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x2d1765c, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::PhysicsScene other);

  /// @brief Method Raycast, addr 0x2d13744, size 0x154, virtual false, abstract: false, final false
  /// @param maxDistance: float_t (default: INFINITY)
  /// @param layerMask: int32_t (default: static_cast<int32_t>(0xfffffffb))
  /// @param queryTriggerInteraction: ::UnityEngine::QueryTriggerInteraction (default: static_cast<int32_t>(0x0))
  inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t maxDistance = INFINITY, int32_t layerMask = static_cast<int32_t>(0xfffffffb),
                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction = static_cast<int32_t>(0x0));

  /// @brief Method Internal_RaycastTest, addr 0x2d1766c, size 0x7c, virtual false, abstract: false, final false
  static inline bool Internal_RaycastTest(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance, int32_t layerMask,
                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d13b9c, size 0x168, virtual false, abstract: false, final false
  /// @param maxDistance: float_t (default: INFINITY)
  /// @param layerMask: int32_t (default: static_cast<int32_t>(0xfffffffb))
  /// @param queryTriggerInteraction: ::UnityEngine::QueryTriggerInteraction (default: static_cast<int32_t>(0x0))
  inline bool Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance = INFINITY,
                      int32_t layerMask = static_cast<int32_t>(0xfffffffb), ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction = static_cast<int32_t>(0x0));

  /// @brief Method Internal_Raycast, addr 0x2d17754, size 0x7c, virtual false, abstract: false, final false
  static inline bool Internal_Raycast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, float_t maxDistance, ByRef<::UnityEngine::RaycastHit> hit, int32_t layerMask,
                                      ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Raycast, addr 0x2d14c84, size 0x1dc, virtual false, abstract: false, final false
  /// @param maxDistance: float_t (default: INFINITY)
  /// @param layerMask: int32_t (default: static_cast<int32_t>(0xfffffffb))
  /// @param queryTriggerInteraction: ::UnityEngine::QueryTriggerInteraction (default: static_cast<int32_t>(0x0))
  inline int32_t Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits,
                         float_t maxDistance = INFINITY, int32_t layerMask = static_cast<int32_t>(0xfffffffb),
                         ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction = static_cast<int32_t>(0x0));

  /// @brief Method Internal_RaycastNonAlloc, addr 0x2d1784c, size 0x78, virtual false, abstract: false, final false
  static inline int32_t Internal_RaycastNonAlloc(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits,
                                                 float_t maxDistance, int32_t mask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCast, addr 0x2d17940, size 0xb0, virtual false, abstract: false, final false
  static inline bool Query_CapsuleCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                       float_t maxDistance, ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_CapsuleCast, addr 0x2d17a8c, size 0x14c, virtual false, abstract: false, final false
  static inline bool Internal_CapsuleCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction,
                                          ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method CapsuleCast, addr 0x2d1462c, size 0x20, virtual false, abstract: false, final false
  /// @param maxDistance: float_t (default: INFINITY)
  /// @param layerMask: int32_t (default: static_cast<int32_t>(0xfffffffb))
  /// @param queryTriggerInteraction: ::UnityEngine::QueryTriggerInteraction (default: static_cast<int32_t>(0x0))
  inline bool CapsuleCast(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo,
                          float_t maxDistance = INFINITY, int32_t layerMask = static_cast<int32_t>(0xfffffffb),
                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction = static_cast<int32_t>(0x0));

  /// @brief Method Query_SphereCast, addr 0x2d17bd8, size 0x9c, virtual false, abstract: false, final false
  static inline bool Query_SphereCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, float_t maxDistance,
                                      ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_SphereCast, addr 0x2d17d00, size 0x12c, virtual false, abstract: false, final false
  static inline bool Internal_SphereCast(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction,
                                         ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method SphereCast, addr 0x2d14738, size 0x8, virtual false, abstract: false, final false
  /// @param maxDistance: float_t (default: INFINITY)
  /// @param layerMask: int32_t (default: static_cast<int32_t>(0xfffffffb))
  /// @param queryTriggerInteraction: ::UnityEngine::QueryTriggerInteraction (default: static_cast<int32_t>(0x0))
  inline bool SphereCast(::UnityEngine::Vector3 origin, float_t radius, ::UnityEngine::Vector3 direction, ByRef<::UnityEngine::RaycastHit> hitInfo, float_t maxDistance = INFINITY,
                         int32_t layerMask = static_cast<int32_t>(0xfffffffb), ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction = static_cast<int32_t>(0x0));

  /// @brief Method OverlapBoxNonAlloc_Internal, addr 0x2d17e2c, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc_Internal(::UnityEngine::PhysicsScene physicsScene, ::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents,
                                                    ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, ::UnityEngine::Quaternion orientation, int32_t mask,
                                                    ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBox, addr 0x2d15b20, size 0x1c, virtual false, abstract: false, final false
  /// @param layerMask: int32_t (default: static_cast<int32_t>(0xfffffffb))
  /// @param queryTriggerInteraction: ::UnityEngine::QueryTriggerInteraction (default: static_cast<int32_t>(0x0))
  inline int32_t OverlapBox(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 halfExtents, ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results,
                            ::UnityEngine::Quaternion orientation, int32_t layerMask = static_cast<int32_t>(0xfffffffb),
                            ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction = static_cast<int32_t>(0x0));

  /// @brief Method Internal_RaycastTest_Injected, addr 0x2d176e8, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_RaycastTest_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray, float_t maxDistance, int32_t layerMask,
                                                   ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_Raycast_Injected, addr 0x2d177d0, size 0x7c, virtual false, abstract: false, final false
  static inline bool Internal_Raycast_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray, float_t maxDistance, ByRef<::UnityEngine::RaycastHit> hit,
                                               int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Internal_RaycastNonAlloc_Injected, addr 0x2d178c4, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t Internal_RaycastNonAlloc_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Ray> ray,
                                                          ::ArrayW<::UnityEngine::RaycastHit, ::Array<::UnityEngine::RaycastHit>*> raycastHits, float_t maxDistance, int32_t mask,
                                                          ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_CapsuleCast_Injected, addr 0x2d179f0, size 0x9c, virtual false, abstract: false, final false
  static inline bool Query_CapsuleCast_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> point1, ByRef<::UnityEngine::Vector3> point2, float_t radius,
                                                ByRef<::UnityEngine::Vector3> direction, float_t maxDistance, ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask,
                                                ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method Query_SphereCast_Injected, addr 0x2d17c74, size 0x8c, virtual false, abstract: false, final false
  static inline bool Query_SphereCast_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> origin, float_t radius, ByRef<::UnityEngine::Vector3> direction,
                                               float_t maxDistance, ByRef<::UnityEngine::RaycastHit> hitInfo, int32_t layerMask, ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  /// @brief Method OverlapBoxNonAlloc_Internal_Injected, addr 0x2d17eb8, size 0x84, virtual false, abstract: false, final false
  static inline int32_t OverlapBoxNonAlloc_Internal_Injected(ByRef<::UnityEngine::PhysicsScene> physicsScene, ByRef<::UnityEngine::Vector3> center, ByRef<::UnityEngine::Vector3> halfExtents,
                                                             ::ArrayW<::UnityEngine::Collider*, ::Array<::UnityEngine::Collider*>*> results, ByRef<::UnityEngine::Quaternion> orientation, int32_t mask,
                                                             ::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PhysicsScene(int32_t m_Handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsScene();

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicsScene, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::PhysicsScene, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsScene, "UnityEngine", "PhysicsScene");
