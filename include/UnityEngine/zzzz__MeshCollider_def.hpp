#pragma once
// IWYU pragma private; include "UnityEngine/MeshCollider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
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
// [RequireComponent(typeof(UnityEngine.Transform))]
// [NativeHeader("Modules/Physics/MeshCollider.h")]
// [NativeHeader("Runtime/Graphics/Mesh/Mesh.h")]
// Dependencies UnityEngine.Collider
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.MeshCollider
class CORDL_TYPE MeshCollider : public ::UnityEngine::Collider {
public:
  // Declarations
  __declspec(property(get = get_convex, put = set_convex)) bool convex;

  __declspec(property(get = get_cookingOptions, put = set_cookingOptions)) ::UnityEngine::MeshColliderCookingOptions cookingOptions;

  __declspec(property(get = get_sharedMesh, put = set_sharedMesh)) ::UnityW<::UnityEngine::Mesh> sharedMesh;

  static inline ::UnityEngine::MeshCollider* New_ctor();

  /// @brief Method .ctor, addr 0x6ffe738, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_convex, addr 0x6ffe418, size 0x80, virtual false, abstract: false, final false
  inline bool get_convex();

  /// @brief Method get_convex_Injected, addr 0x6ffe498, size 0x3c, virtual false, abstract: false, final false
  static inline bool get_convex_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_cookingOptions, addr 0x6ffe5a8, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::MeshColliderCookingOptions get_cookingOptions();

  /// @brief Method get_cookingOptions_Injected, addr 0x6ffe628, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::MeshColliderCookingOptions get_cookingOptions_Injected(::System::IntPtr _unity_self);

  /// @brief Method get_sharedMesh, addr 0x6ffe188, size 0x150, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_sharedMesh();

  /// @brief Method get_sharedMesh_Injected, addr 0x6ffe2d8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr get_sharedMesh_Injected(::System::IntPtr _unity_self);

  /// @brief Method set_convex, addr 0x6ffe4d4, size 0x90, virtual false, abstract: false, final false
  inline void set_convex(bool value);

  /// @brief Method set_convex_Injected, addr 0x6ffe564, size 0x44, virtual false, abstract: false, final false
  static inline void set_convex_Injected(::System::IntPtr _unity_self, bool value);

  /// @brief Method set_cookingOptions, addr 0x6ffe664, size 0x90, virtual false, abstract: false, final false
  inline void set_cookingOptions(::UnityEngine::MeshColliderCookingOptions value);

  /// @brief Method set_cookingOptions_Injected, addr 0x6ffe6f4, size 0x44, virtual false, abstract: false, final false
  static inline void set_cookingOptions_Injected(::System::IntPtr _unity_self, ::UnityEngine::MeshColliderCookingOptions value);

  /// @brief Method set_sharedMesh, addr 0x6ffe314, size 0xc0, virtual false, abstract: false, final false
  inline void set_sharedMesh(::UnityEngine::Mesh* value);

  /// @brief Method set_sharedMesh_Injected, addr 0x6ffe3d4, size 0x44, virtual false, abstract: false, final false
  static inline void set_sharedMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshCollider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshCollider(MeshCollider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshCollider(MeshCollider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19065 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::MeshCollider) == 0x18, "Size mismatch!");

} // namespace UnityEngine
