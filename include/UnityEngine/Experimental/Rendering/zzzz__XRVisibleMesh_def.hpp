#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRVisibleMesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRVisibleMesh)
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class XRVisibleMesh;
}
// Write type traits
MARK_REF_T(::UnityEngine::Experimental::Rendering::XRVisibleMesh*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::Rendering::XRVisibleMesh*, "UnityEngine.Experimental.Rendering", "XRVisibleMesh");
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XRVisibleMesh
class CORDL_TYPE XRVisibleMesh : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_hasValidVisibleMesh)) bool hasValidVisibleMesh;

  /// @brief Field k_VisibleMeshProfilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_VisibleMeshProfilingSampler, put = setStaticF_k_VisibleMeshProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* k_VisibleMeshProfilingSampler;

  /// @brief Field m_CombinedMesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CombinedMesh, put = __cordl_internal_set_m_CombinedMesh)) ::UnityW<::UnityEngine::Mesh> m_CombinedMesh;

  /// @brief Field m_CombinedMeshHashCode, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CombinedMeshHashCode, put = __cordl_internal_set_m_CombinedMeshHashCode)) int32_t m_CombinedMeshHashCode;

  /// @brief Field m_Pass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pass, put = __cordl_internal_set_m_Pass)) ::UnityEngine::Experimental::Rendering::XRPass* m_Pass;

  /// @brief Method CreateVisibleMeshCombined, addr 0x6b6211c, size 0x354, virtual false, abstract: false, final false
  inline void CreateVisibleMeshCombined();

  /// @brief Method Dispose, addr 0x6b5e8bc, size 0xa4, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method IsVisibleMeshSupported, addr 0x6b61fe0, size 0x44, virtual false, abstract: false, final false
  inline bool IsVisibleMeshSupported();

  static inline ::UnityEngine::Experimental::Rendering::XRVisibleMesh* New_ctor(::UnityEngine::Experimental::Rendering::XRPass* xrPass);

  /// @brief Method RenderVisibleMeshCustomMaterial, addr 0x6b5f3a0, size 0x178, virtual false, abstract: false, final false
  inline void RenderVisibleMeshCustomMaterial(::UnityEngine::Rendering::CommandBuffer* cmd, float_t occlusionMeshScale, ::UnityEngine::Material* material,
                                              ::UnityEngine::MaterialPropertyBlock* materialBlock, int32_t shaderPass, bool yFlip);

  /// @brief Method TryGetVisibleMeshCombinedHashCode, addr 0x6b62024, size 0xf8, virtual false, abstract: false, final false
  inline bool TryGetVisibleMeshCombinedHashCode(::by_ref<int32_t> hashCode);

  /// @brief Method UpdateCombinedMesh, addr 0x6b5faa0, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateCombinedMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_CombinedMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_CombinedMesh();

  constexpr int32_t const& __cordl_internal_get_m_CombinedMeshHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_CombinedMeshHashCode();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_m_Pass() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_m_Pass();

  constexpr void __cordl_internal_set_m_CombinedMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_CombinedMeshHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_Pass(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x6b5e524, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::XRPass* xrPass);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_k_VisibleMeshProfilingSampler();

  /// @brief Method get_hasValidVisibleMesh, addr 0x6b5f254, size 0xb8, virtual false, abstract: false, final false
  inline bool get_hasValidVisibleMesh();

  static inline void setStaticF_k_VisibleMeshProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRVisibleMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRVisibleMesh", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRVisibleMesh(XRVisibleMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRVisibleMesh", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRVisibleMesh(XRVisibleMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8727 };

  /// @brief Field m_Pass, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___m_Pass;

  /// @brief Field m_CombinedMesh, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_CombinedMesh;

  /// @brief Field m_CombinedMeshHashCode, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_CombinedMeshHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRVisibleMesh, ___m_Pass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRVisibleMesh, ___m_CombinedMesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRVisibleMesh, ___m_CombinedMeshHashCode) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Experimental::Rendering::XRVisibleMesh) == 0x28, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
