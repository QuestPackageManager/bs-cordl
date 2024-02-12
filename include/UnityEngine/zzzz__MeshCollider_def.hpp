#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MeshCollider)
namespace UnityEngine {
struct MeshColliderCookingOptions;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshCollider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::MeshCollider);
// Type: UnityEngine::MeshCollider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13928))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13921))
// CS Name: ::UnityEngine::MeshCollider*
class CORDL_TYPE MeshCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_smoothSphereCollisions, put = set_smoothSphereCollisions)) bool smoothSphereCollisions;

  __declspec(property(get = get_skinWidth, put = set_skinWidth)) float_t skinWidth;

  __declspec(property(get = get_inflateMesh, put = set_inflateMesh)) bool inflateMesh;

  __declspec(property(get = get_sharedMesh, put = set_sharedMesh))::UnityW<::UnityEngine::Mesh> sharedMesh;

  __declspec(property(get = get_convex, put = set_convex)) bool convex;

  __declspec(property(get = get_cookingOptions, put = set_cookingOptions))::UnityEngine::MeshColliderCookingOptions cookingOptions;

  /// @brief Method get_smoothSphereCollisions, addr 0x2d30dd8, size 0x8, virtual false, abstract: false, final false
  inline bool get_smoothSphereCollisions();

  /// @brief Method set_smoothSphereCollisions, addr 0x2d30de0, size 0x4, virtual false, abstract: false, final false
  inline void set_smoothSphereCollisions(bool value);

  /// @brief Method get_skinWidth, addr 0x2d30de4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_skinWidth();

  /// @brief Method set_skinWidth, addr 0x2d30dec, size 0x4, virtual false, abstract: false, final false
  inline void set_skinWidth(float_t value);

  /// @brief Method get_inflateMesh, addr 0x2d30df0, size 0x8, virtual false, abstract: false, final false
  inline bool get_inflateMesh();

  /// @brief Method set_inflateMesh, addr 0x2d30df8, size 0x4, virtual false, abstract: false, final false
  inline void set_inflateMesh(bool value);

  /// @brief Method get_sharedMesh, addr 0x2d30dfc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh();

  /// @brief Method set_sharedMesh, addr 0x2d30e38, size 0x44, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method get_convex, addr 0x2d30e7c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_convex();

  /// @brief Method set_convex, addr 0x2d30eb8, size 0x44, virtual false, abstract: false, final false
  inline void set_convex(bool value);

  /// @brief Method get_cookingOptions, addr 0x2d30efc, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshColliderCookingOptions get_cookingOptions();

  /// @brief Method set_cookingOptions, addr 0x2d30f38, size 0x44, virtual false, abstract: false, final false
  inline void set_cookingOptions(::UnityEngine::MeshColliderCookingOptions value);

  static inline ::UnityEngine::MeshCollider* New_ctor();

  /// @brief Method .ctor, addr 0x2d30f7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshCollider(MeshCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshCollider(MeshCollider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshCollider();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MeshCollider, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MeshCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshCollider*, "UnityEngine", "MeshCollider");
