#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
CORDL_MODULE_EXPORT(MeshCollider)
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15492))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15489))
// CS Name: ::UnityEngine::MeshCollider*
class CORDL_TYPE MeshCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_sharedMesh, put = set_sharedMesh))::UnityEngine::Mesh* sharedMesh;

  __declspec(property(get = get_convex, put = set_convex)) bool convex;

  /// @brief Method get_sharedMesh, addr 0x2d1649c, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityEngine::Mesh* get_sharedMesh();

  /// @brief Method set_sharedMesh, addr 0x2d164d8, size 0x44, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method get_convex, addr 0x2d1651c, size 0x3c, virtual false, abstract: false, final false
  inline bool get_convex();

  /// @brief Method set_convex, addr 0x2d16558, size 0x44, virtual false, abstract: false, final false
  inline void set_convex(bool value);

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
