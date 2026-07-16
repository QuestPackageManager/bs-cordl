#pragma once
// IWYU pragma private; include "UnityEngine/MeshCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MeshCollider)
namespace System {
struct IntPtr;
}
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
MARK_REF_T(::UnityEngine::MeshCollider*);
DEFINE_IL2CPP_CLASS(::UnityEngine::MeshCollider*, "UnityEngine", "MeshCollider");
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

  /// @brief Method .ctor, addr 0x6b8f898, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_convex, addr 0x6b8f554, size 0x80, virtual false, abstract: false, final false
  inline bool get_convex();

  /// @brief Method get_convex_Injected, addr 0x6b8f5d4, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_convex_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cookingOptions, addr 0x6b8f6e4, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshColliderCookingOptions get_cookingOptions();

  /// @brief Method get_cookingOptions_Injected, addr 0x6b8f764, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::MeshColliderCookingOptions get_cookingOptions_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_inflateMesh, addr 0x6b8f88c, size 0x8, virtual false, abstract: false, final false
  inline bool get_inflateMesh();

  /// @brief Method get_sharedMesh, addr 0x6b8f2c4, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh();

  /// @brief Method get_sharedMesh_Injected, addr 0x6b8f414, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sharedMesh_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_skinWidth, addr 0x6b8f880, size 0x8, virtual false, abstract: false, final false
  inline float_t get_skinWidth();

  /// @brief Method get_smoothSphereCollisions, addr 0x6b8f874, size 0x8, virtual false, abstract: false, final false
  inline bool get_smoothSphereCollisions();

  /// @brief Method set_convex, addr 0x6b8f610, size 0x90, virtual false, abstract: false, final false
  inline void set_convex(bool value);

  /// @brief Method set_convex_Injected, addr 0x6b8f6a0, size 0x44, virtual false, abstract: false, final false
  static inline void set_convex_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_cookingOptions, addr 0x6b8f7a0, size 0x90, virtual false, abstract: false, final false
  inline void set_cookingOptions(::UnityEngine::MeshColliderCookingOptions value);

  /// @brief Method set_cookingOptions_Injected, addr 0x6b8f830, size 0x44, virtual false, abstract: false, final false
  static inline void set_cookingOptions_Injected(::System::IntPtr _unity_self, ::UnityEngine::MeshColliderCookingOptions value);

  /// @brief Method set_inflateMesh, addr 0x6b8f894, size 0x4, virtual false, abstract: false, final false
  inline void set_inflateMesh(bool value);

  /// @brief Method set_sharedMesh, addr 0x6b8f450, size 0xc0, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method set_sharedMesh_Injected, addr 0x6b8f510, size 0x44, virtual false, abstract: false, final false
  static inline void set_sharedMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

  /// @brief Method set_skinWidth, addr 0x6b8f888, size 0x4, virtual false, abstract: false, final false
  inline void set_skinWidth(float_t value);

  /// @brief Method set_smoothSphereCollisions, addr 0x6b8f87c, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::MeshCollider) == 0x18, "Size mismatch!");

} // namespace UnityEngine
