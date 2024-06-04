#pragma once
// IWYU pragma private; include "UnityEngine/PhysicsScene2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsScene2D)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
struct PhysicsScene2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::PhysicsScene2D);
// Type: UnityEngine::PhysicsScene2D
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::PhysicsScene2D
struct CORDL_TYPE PhysicsScene2D {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>*();

  /// @brief Method Equals, addr 0x3480d94, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method Equals, addr 0x3480e0c, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::PhysicsScene2D other);

  /// @brief Method GetHashCode, addr 0x3480d8c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetRayIntersection, addr 0x3481390, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersection, addr 0x348155c, size 0x8c, virtual false, abstract: false, final false
  inline int32_t GetRayIntersection(::UnityEngine::Ray ray, float_t distance, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, int32_t layerMask);

  /// @brief Method GetRayIntersectionArray_Internal, addr 0x34815e8, size 0x80, virtual false, abstract: false, final false
  static inline int32_t GetRayIntersectionArray_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t distance,
                                                         int32_t layerMask, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method GetRayIntersectionArray_Internal_Injected, addr 0x3481668, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetRayIntersectionArray_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, ByRef<::UnityEngine::Vector3> origin, ByRef<::UnityEngine::Vector3> direction,
                                                                  float_t distance, int32_t layerMask, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method GetRayIntersection_Internal, addr 0x3481444, size 0x9c, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D GetRayIntersection_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, float_t distance,
                                                                        int32_t layerMask);

  /// @brief Method GetRayIntersection_Internal_Injected, addr 0x34814e0, size 0x7c, virtual false, abstract: false, final false
  static inline void GetRayIntersection_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, ByRef<::UnityEngine::Vector3> origin, ByRef<::UnityEngine::Vector3> direction,
                                                          float_t distance, int32_t layerMask, ByRef<::UnityEngine::RaycastHit2D> ret);

  /// @brief Method Raycast, addr 0x3481078, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, ::UnityEngine::ContactFilter2D contactFilter);

  /// @brief Method Raycast, addr 0x3480e1c, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask);

  /// @brief Method Raycast, addr 0x3481148, size 0x30, virtual false, abstract: false, final false
  inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, ::UnityEngine::ContactFilter2D contactFilter,
                         ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method Raycast, addr 0x348126c, size 0x30, virtual false, abstract: false, final false
  inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, ::UnityEngine::ContactFilter2D contactFilter,
                         ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results);

  /// @brief Method RaycastArray_Internal, addr 0x3481178, size 0x78, virtual false, abstract: false, final false
  static inline int32_t RaycastArray_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance,
                                              ::UnityEngine::ContactFilter2D contactFilter, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method RaycastArray_Internal_Injected, addr 0x34811f0, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t RaycastArray_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, ByRef<::UnityEngine::Vector2> origin, ByRef<::UnityEngine::Vector2> direction,
                                                       float_t distance, ByRef<::UnityEngine::ContactFilter2D> contactFilter,
                                                       ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method RaycastList_Internal, addr 0x348129c, size 0x78, virtual false, abstract: false, final false
  static inline int32_t RaycastList_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance,
                                             ::UnityEngine::ContactFilter2D contactFilter, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results);

  /// @brief Method RaycastList_Internal_Injected, addr 0x3481314, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t RaycastList_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, ByRef<::UnityEngine::Vector2> origin, ByRef<::UnityEngine::Vector2> direction,
                                                      float_t distance, ByRef<::UnityEngine::ContactFilter2D> contactFilter,
                                                      ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results);

  /// @brief Method Raycast_Internal, addr 0x3480fe4, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::RaycastHit2D Raycast_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance,
                                                             ::UnityEngine::ContactFilter2D contactFilter);

  /// @brief Method Raycast_Internal_Injected, addr 0x34810cc, size 0x7c, virtual false, abstract: false, final false
  static inline void Raycast_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene, ByRef<::UnityEngine::Vector2> origin, ByRef<::UnityEngine::Vector2> direction, float_t distance,
                                               ByRef<::UnityEngine::ContactFilter2D> contactFilter, ByRef<::UnityEngine::RaycastHit2D> ret);

  /// @brief Method ToString, addr 0x3480ca8, size 0xe4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::PhysicsScene2D>"
  constexpr ::System::IEquatable_1<::UnityEngine::PhysicsScene2D>* i___System__IEquatable_1___UnityEngine__PhysicsScene2D_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsScene2D();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PhysicsScene2D(int32_t m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x4, def value: None
  int32_t m_Handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PhysicsScene2D, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::PhysicsScene2D, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PhysicsScene2D, "UnityEngine", "PhysicsScene2D");
