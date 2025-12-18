#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XROcclusionMesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XROcclusionMesh)
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
class Material;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class XROcclusionMesh;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::XROcclusionMesh);
// Dependencies System.Object
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XROcclusionMesh
class CORDL_TYPE XROcclusionMesh : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_hasValidOcclusionMesh)) bool hasValidOcclusionMesh;

  /// @brief Field k_OcclusionMeshProfilingSampler, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_OcclusionMeshProfilingSampler, put = setStaticF_k_OcclusionMeshProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* k_OcclusionMeshProfilingSampler;

  /// @brief Field m_CombinedMesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CombinedMesh, put = __cordl_internal_set_m_CombinedMesh)) ::UnityW<::UnityEngine::Mesh> m_CombinedMesh;

  /// @brief Field m_CombinedMeshHashCode, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CombinedMeshHashCode, put = __cordl_internal_set_m_CombinedMeshHashCode)) int32_t m_CombinedMeshHashCode;

  /// @brief Field m_Material, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_Pass, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pass, put = __cordl_internal_set_m_Pass)) ::UnityEngine::Experimental::Rendering::XRPass* m_Pass;

  /// @brief Method CreateOcclusionMeshCombined, addr 0x65922dc, size 0x350, virtual false, abstract: false, final false
  inline void CreateOcclusionMeshCombined();

  /// @brief Method IsOcclusionMeshSupported, addr 0x6591944, size 0x8c, virtual false, abstract: false, final false
  inline bool IsOcclusionMeshSupported();

  static inline ::UnityEngine::Experimental::Rendering::XROcclusionMesh* New_ctor(::UnityEngine::Experimental::Rendering::XRPass* xrPass);

  /// @brief Method RenderOcclusionMesh, addr 0x6591a48, size 0x3bc, virtual false, abstract: false, final false
  inline void RenderOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd, float_t occlusionMeshScale, bool yFlip);

  /// @brief Method SetMaterial, addr 0x6591884, size 0x8, virtual false, abstract: false, final false
  inline void SetMaterial(::UnityEngine::Material* mat);

  /// @brief Method TryGetOcclusionMeshCombinedHashCode, addr 0x65921e4, size 0xf8, virtual false, abstract: false, final false
  inline bool TryGetOcclusionMeshCombinedHashCode(::ByRef<int32_t> hashCode);

  /// @brief Method UpdateCombinedMesh, addr 0x6592110, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateCombinedMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_CombinedMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_CombinedMesh();

  constexpr int32_t const& __cordl_internal_get_m_CombinedMeshHashCode() const;

  constexpr int32_t& __cordl_internal_get_m_CombinedMeshHashCode();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_m_Pass() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_m_Pass();

  constexpr void __cordl_internal_set_m_CombinedMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_CombinedMeshHashCode(int32_t value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Pass(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x659187c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Experimental::Rendering::XRPass* xrPass);

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_k_OcclusionMeshProfilingSampler();

  /// @brief Method get_hasValidOcclusionMesh, addr 0x659188c, size 0xb8, virtual false, abstract: false, final false
  inline bool get_hasValidOcclusionMesh();

  static inline void setStaticF_k_OcclusionMeshProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XROcclusionMesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XROcclusionMesh(XROcclusionMesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XROcclusionMesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XROcclusionMesh(XROcclusionMesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11831 };

  /// @brief Field m_Pass, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___m_Pass;

  /// @brief Field m_CombinedMesh, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_CombinedMesh;

  /// @brief Field m_Material, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_CombinedMeshHashCode, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_CombinedMeshHashCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XROcclusionMesh, ___m_Pass) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XROcclusionMesh, ___m_CombinedMesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XROcclusionMesh, ___m_Material) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XROcclusionMesh, ___m_CombinedMeshHashCode) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XROcclusionMesh, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::XROcclusionMesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XROcclusionMesh*, "UnityEngine.Experimental.Rendering", "XROcclusionMesh");
