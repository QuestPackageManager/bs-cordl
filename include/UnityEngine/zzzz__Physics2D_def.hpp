#pragma once
// IWYU pragma private; include "UnityEngine\Physics2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics2D)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Physics2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::Physics2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Physics2D*, "UnityEngine", "Physics2D");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Physics2D
class CORDL_TYPE Physics2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_LastDisabledRigidbody2D, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_LastDisabledRigidbody2D,
                      put = setStaticF_m_LastDisabledRigidbody2D)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>* m_LastDisabledRigidbody2D;

  /// @brief Method GetRayIntersection, addr 0x6b70798, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll, addr 0x6b7084c, size 0x70, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray);

  /// @brief Method GetRayIntersectionAll, addr 0x6b70a2c, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray, float_t distance);

  /// @brief Method GetRayIntersectionAll, addr 0x6b70aa4, size 0x84, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll(::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll_Internal, addr 0x6b708bc, size 0x170, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D> GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction,
                                                                                     float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll_Internal_Injected, addr 0x6b70b28, size 0x7c, virtual false, abstract: false, final false
  static inline void GetRayIntersectionAll_Internal_Injected(::by_ref<::UnityEngine::PhysicsScene2D> physicsScene, ::by_ref<::UnityEngine::Vector3> origin, ::by_ref<::UnityEngine::Vector3> direction,
                                                             float_t distance, int32_t layerMask, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper> ret);

  /// @brief Method GetRayIntersectionNonAlloc, addr 0x6b70c30, size 0x80, virtual false, abstract: false, final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results);

  /// @brief Method GetRayIntersectionNonAlloc, addr 0x6b70cb0, size 0x88, virtual false, abstract: false, final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results, float_t distance);

  /// @brief Method GetRayIntersectionNonAlloc, addr 0x6b70ba4, size 0x8c, virtual false, abstract: false, final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D> results, float_t distance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6b70078, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction);

  /// @brief Method Raycast, addr 0x6b7015c, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance);

  /// @brief Method Raycast, addr 0x6b70240, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x6b70340, size 0x100, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask, float_t minDepth);

  /// @brief Method Raycast, addr 0x6b70440, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask, float_t minDepth, float_t maxDepth);

  /// @brief Method Raycast, addr 0x6b70548, size 0xc0, virtual false, abstract: false, final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D> results);

  /// @brief Method Raycast, addr 0x6b70608, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D> results,
                                float_t distance);

  /// @brief Method Raycast, addr 0x6b706d0, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter,
                                ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, float_t distance);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>* getStaticF_m_LastDisabledRigidbody2D();

  /// @brief Method get_defaultPhysicsScene, addr 0x6b70048, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene();

  /// @brief Method get_queriesHitTriggers, addr 0x6b70050, size 0x28, virtual false, abstract: false, final false
  static inline bool get_queriesHitTriggers();

  static inline void setStaticF_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Physics2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Physics2D(Physics2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Physics2D(Physics2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22809 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Physics2D) == 0x10, "Size mismatch!");

} // namespace UnityEngine
