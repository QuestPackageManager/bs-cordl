#pragma once
// IWYU pragma private; include "UnityEngine/MeshCollider.hpp"
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
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MeshCollider
class CORDL_TYPE MeshCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_convex, put = set_convex)) bool convex;

  __declspec(property(get = get_cookingOptions, put = set_cookingOptions)) ::UnityEngine::MeshColliderCookingOptions cookingOptions;

  __declspec(property(get = get_inflateMesh, put = set_inflateMesh)) bool inflateMesh;

  __declspec(property(get = get_sharedMesh, put = set_sharedMesh)) ::UnityW<::UnityEngine::Mesh> sharedMesh;

  __declspec(property(get = get_skinWidth, put = set_skinWidth)) float_t skinWidth;

  __declspec(property(get = get_smoothSphereCollisions, put = set_smoothSphereCollisions)) bool smoothSphereCollisions;

  static inline ::UnityEngine::MeshCollider* New_ctor();

  /// @brief Method .ctor, addr 0x4907cd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_convex, addr 0x4907bb4, size 0x3c, virtual false, abstract: false, final false
  inline bool get_convex();

  /// @brief Method get_cookingOptions, addr 0x4907c34, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshColliderCookingOptions get_cookingOptions();

  /// @brief Method get_inflateMesh, addr 0x4907ccc, size 0x8, virtual false, abstract: false, final false
  inline bool get_inflateMesh();

  /// @brief Method get_sharedMesh, addr 0x4907b34, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh();

  /// @brief Method get_skinWidth, addr 0x4907cc0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_skinWidth();

  /// @brief Method get_smoothSphereCollisions, addr 0x4907cb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_smoothSphereCollisions();

  /// @brief Method set_convex, addr 0x4907bf0, size 0x44, virtual false, abstract: false, final false
  inline void set_convex(bool value);

  /// @brief Method set_cookingOptions, addr 0x4907c70, size 0x44, virtual false, abstract: false, final false
  inline void set_cookingOptions(::UnityEngine::MeshColliderCookingOptions value);

  /// @brief Method set_inflateMesh, addr 0x4907cd4, size 0x4, virtual false, abstract: false, final false
  inline void set_inflateMesh(bool value);

  /// @brief Method set_sharedMesh, addr 0x4907b70, size 0x44, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method set_skinWidth, addr 0x4907cc8, size 0x4, virtual false, abstract: false, final false
  inline void set_skinWidth(float_t value);

  /// @brief Method set_smoothSphereCollisions, addr 0x4907cbc, size 0x4, virtual false, abstract: false, final false
  inline void set_smoothSphereCollisions(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshCollider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshCollider(MeshCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshCollider(MeshCollider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15748 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::MeshCollider, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::MeshCollider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MeshCollider*, "UnityEngine", "MeshCollider");
