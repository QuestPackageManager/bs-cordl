#pragma once
// IWYU pragma private; include "UnityEngine/Physics2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics2D)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
MARK_REF_PTR_T(::UnityEngine::Physics2D);
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

  /// @brief Method GetRayIntersection, addr 0x48f4c54, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll, addr 0x48f4d0c, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll(::UnityEngine::Ray ray);

  /// @brief Method GetRayIntersectionAll, addr 0x48f4e28, size 0x74, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll(::UnityEngine::Ray ray, float_t distance);

  /// @brief Method GetRayIntersectionAll, addr 0x48f4e9c, size 0x80, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll(::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll_Internal, addr 0x48f4d78, size 0xb0, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin,
                                                                                                                            ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll_Internal_Injected, addr 0x48f4f1c, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll_Internal_Injected(::ByRef<::UnityEngine::PhysicsScene2D> physicsScene,
                                                                                                                                     ::ByRef<::UnityEngine::Vector3> origin,
                                                                                                                                     ::ByRef<::UnityEngine::Vector3> direction, float_t distance,
                                                                                                                                     int32_t layerMask);

  /// @brief Method GetRayIntersectionNonAlloc, addr 0x48f4f88, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method GetRayIntersectionNonAlloc, addr 0x48f5004, size 0x84, virtual false, abstract: false, final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t distance);

  /// @brief Method GetRayIntersectionNonAlloc, addr 0x48f5088, size 0x88, virtual false, abstract: false, final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t distance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x48f4550, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction);

  /// @brief Method Raycast, addr 0x48f4610, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance);

  /// @brief Method Raycast, addr 0x48f46d8, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x48f47e8, size 0x110, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask, float_t minDepth);

  /// @brief Method Raycast, addr 0x48f48f8, size 0x118, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask, float_t minDepth, float_t maxDepth);

  /// @brief Method Raycast, addr 0x48f4a10, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter,
                                ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method Raycast, addr 0x48f4acc, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter,
                                ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t distance);

  /// @brief Method Raycast, addr 0x48f4b90, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter,
                                ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, float_t distance);

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody2D>>* getStaticF_m_LastDisabledRigidbody2D();

  /// @brief Method get_defaultPhysicsScene, addr 0x48f4520, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene();

  /// @brief Method get_queriesHitTriggers, addr 0x48f4528, size 0x28, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18656 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics2D, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Physics2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics2D*, "UnityEngine", "Physics2D");
