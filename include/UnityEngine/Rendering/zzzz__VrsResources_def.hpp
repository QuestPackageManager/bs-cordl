#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VrsResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VrsResources)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class VrsRenderPipelineRuntimeResources;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class VrsResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::VrsResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::VrsResources*, "UnityEngine.Rendering", "VrsResources");
// Dependencies System.Object, UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.VrsResources
class CORDL_TYPE VrsResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field conversionLutBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_conversionLutBuffer, put = __cordl_internal_set_conversionLutBuffer)) ::UnityEngine::GraphicsBuffer* conversionLutBuffer;

  /// @brief Field conversionProfilingSampler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_conversionProfilingSampler,
                      put = __cordl_internal_set_conversionProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* conversionProfilingSampler;

  /// @brief Field m_VisualizationMaterial, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualizationMaterial, put = __cordl_internal_set_m_VisualizationMaterial)) ::UnityW<::UnityEngine::Material> m_VisualizationMaterial;

  /// @brief Field m_VisualizationShader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisualizationShader, put = __cordl_internal_set_m_VisualizationShader)) ::UnityW<::UnityEngine::Shader> m_VisualizationShader;

  /// @brief Field textureComputeShader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_textureComputeShader, put = __cordl_internal_set_textureComputeShader)) ::UnityW<::UnityEngine::ComputeShader> textureComputeShader;

  /// @brief Field textureCopyKernel, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_textureCopyKernel, put = __cordl_internal_set_textureCopyKernel)) int32_t textureCopyKernel;

  /// @brief Field textureReduceKernel, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_textureReduceKernel, put = __cordl_internal_set_textureReduceKernel)) int32_t textureReduceKernel;

  /// @brief Field tileSize, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_tileSize, put = __cordl_internal_set_tileSize)) ::UnityEngine::Vector2Int tileSize;

  /// @brief Field validatedShadingRateFragmentSizeBuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_validatedShadingRateFragmentSizeBuffer,
                      put = __cordl_internal_set_validatedShadingRateFragmentSizeBuffer)) ::UnityEngine::GraphicsBuffer* validatedShadingRateFragmentSizeBuffer;

  /// @brief Field visualizationLutBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_visualizationLutBuffer, put = __cordl_internal_set_visualizationLutBuffer)) ::UnityEngine::GraphicsBuffer* visualizationLutBuffer;

  __declspec(property(get = get_visualizationMaterial)) ::UnityW<::UnityEngine::Material> visualizationMaterial;

  /// @brief Field visualizationProfilingSampler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_visualizationProfilingSampler,
                      put = __cordl_internal_set_visualizationProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* visualizationProfilingSampler;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AllocFragmentSizeBuffer, addr 0x6bf0a90, size 0x1e4, virtual false, abstract: false, final false
  inline void AllocFragmentSizeBuffer();

  /// @brief Method Dispose, addr 0x6bedaa0, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DisposeResources, addr 0x6bf06f0, size 0xa8, virtual false, abstract: false, final false
  inline void DisposeResources();

  /// @brief Method Finalize, addr 0x6bf0654, size 0x9c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method InitComputeShader, addr 0x6bf0798, size 0x2f8, virtual false, abstract: false, final false
  inline bool InitComputeShader(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources* resources);

  /// @brief Method InitializeResources, addr 0x6bf05dc, size 0x78, virtual false, abstract: false, final false
  inline void InitializeResources(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources* resources);

  static inline ::UnityEngine::Rendering::VrsResources* New_ctor(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources* resources);

  /// @brief Method TryFindKernel, addr 0x6bf0c74, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t TryFindKernel(::UnityEngine::ComputeShader* computeShader, ::StringW name);

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_conversionLutBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_conversionLutBuffer();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_conversionProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_conversionProfilingSampler();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_VisualizationMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_VisualizationMaterial();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_VisualizationShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_VisualizationShader();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_textureComputeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_textureComputeShader();

  constexpr int32_t const& __cordl_internal_get_textureCopyKernel() const;

  constexpr int32_t& __cordl_internal_get_textureCopyKernel();

  constexpr int32_t const& __cordl_internal_get_textureReduceKernel() const;

  constexpr int32_t& __cordl_internal_get_textureReduceKernel();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_tileSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_tileSize();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_validatedShadingRateFragmentSizeBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_validatedShadingRateFragmentSizeBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_visualizationLutBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_visualizationLutBuffer();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_visualizationProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_visualizationProfilingSampler();

  constexpr void __cordl_internal_set_conversionLutBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_conversionProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_VisualizationMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_VisualizationShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_textureComputeShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_textureCopyKernel(int32_t value);

  constexpr void __cordl_internal_set_textureReduceKernel(int32_t value);

  constexpr void __cordl_internal_set_tileSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_validatedShadingRateFragmentSizeBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_visualizationLutBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_visualizationProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  /// @brief Method .ctor, addr 0x6bed954, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::VrsRenderPipelineRuntimeResources* resources);

  /// @brief Method get_visualizationMaterial, addr 0x6beeeb4, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> get_visualizationMaterial();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VrsResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VrsResources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VrsResources(VrsResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VrsResources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VrsResources(VrsResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9266 };

  /// @brief Field conversionProfilingSampler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___conversionProfilingSampler;

  /// @brief Field visualizationProfilingSampler, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___visualizationProfilingSampler;

  /// @brief Field conversionLutBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___conversionLutBuffer;

  /// @brief Field visualizationLutBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___visualizationLutBuffer;

  /// @brief Field textureComputeShader, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___textureComputeShader;

  /// @brief Field textureReduceKernel, offset: 0x38, size: 0x4, def value: None
  int32_t ___textureReduceKernel;

  /// @brief Field textureCopyKernel, offset: 0x3c, size: 0x4, def value: None
  int32_t ___textureCopyKernel;

  /// @brief Field tileSize, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___tileSize;

  /// @brief Field validatedShadingRateFragmentSizeBuffer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___validatedShadingRateFragmentSizeBuffer;

  /// @brief Field m_VisualizationShader, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_VisualizationShader;

  /// @brief Field m_VisualizationMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_VisualizationMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___conversionProfilingSampler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___visualizationProfilingSampler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___conversionLutBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___visualizationLutBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___textureComputeShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___textureReduceKernel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___textureCopyKernel) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___tileSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___validatedShadingRateFragmentSizeBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___m_VisualizationShader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::VrsResources, ___m_VisualizationMaterial) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::VrsResources) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Rendering
