#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/RayTracingRenderPipelineResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingRenderPipelineResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class RayTracingRenderPipelineResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources*, "UnityEngine.Rendering.UnifiedRayTracing", "RayTracingRenderPipelineResources");
// [MovedFrom(true, "UnityEngine.Rendering.UnifiedRayTracing", "Unity.Rendering.LightTransport.Runtime", null)]
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "R: Unified Ray Tracing", Order = 1000)]
// [HideInInspector]
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.RayTracingRenderPipelineResources
class CORDL_TYPE RayTracingRenderPipelineResources : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_BitHistogram, put = set_BitHistogram)) ::UnityW<::UnityEngine::ComputeShader> BitHistogram;

  __declspec(property(get = get_BlockReducePart, put = set_BlockReducePart)) ::UnityW<::UnityEngine::ComputeShader> BlockReducePart;

  __declspec(property(get = get_BlockScan, put = set_BlockScan)) ::UnityW<::UnityEngine::ComputeShader> BlockScan;

  __declspec(property(get = get_BuildHlbvh, put = set_BuildHlbvh)) ::UnityW<::UnityEngine::ComputeShader> BuildHlbvh;

  __declspec(property(get = get_CopyBuffer, put = set_CopyBuffer)) ::UnityW<::UnityEngine::ComputeShader> CopyBuffer;

  __declspec(property(get = get_CopyPositions, put = set_CopyPositions)) ::UnityW<::UnityEngine::ComputeShader> CopyPositions;

  __declspec(property(get = get_GeometryPoolKernels, put = set_GeometryPoolKernels)) ::UnityW<::UnityEngine::ComputeShader> GeometryPoolKernels;

  __declspec(property(get = get_RestructureBvh, put = set_RestructureBvh)) ::UnityW<::UnityEngine::ComputeShader> RestructureBvh;

  __declspec(property(get = get_Scatter, put = set_Scatter)) ::UnityW<::UnityEngine::ComputeShader> Scatter;

  /// @brief Field m_BitHistogram, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BitHistogram, put = __cordl_internal_set_m_BitHistogram)) ::UnityW<::UnityEngine::ComputeShader> m_BitHistogram;

  /// @brief Field m_BlockReducePart, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlockReducePart, put = __cordl_internal_set_m_BlockReducePart)) ::UnityW<::UnityEngine::ComputeShader> m_BlockReducePart;

  /// @brief Field m_BlockScan, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlockScan, put = __cordl_internal_set_m_BlockScan)) ::UnityW<::UnityEngine::ComputeShader> m_BlockScan;

  /// @brief Field m_BuildHlbvh, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BuildHlbvh, put = __cordl_internal_set_m_BuildHlbvh)) ::UnityW<::UnityEngine::ComputeShader> m_BuildHlbvh;

  /// @brief Field m_CopyBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyBuffer, put = __cordl_internal_set_m_CopyBuffer)) ::UnityW<::UnityEngine::ComputeShader> m_CopyBuffer;

  /// @brief Field m_CopyPositions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyPositions, put = __cordl_internal_set_m_CopyPositions)) ::UnityW<::UnityEngine::ComputeShader> m_CopyPositions;

  /// @brief Field m_GeometryPoolKernels, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GeometryPoolKernels, put = __cordl_internal_set_m_GeometryPoolKernels)) ::UnityW<::UnityEngine::ComputeShader> m_GeometryPoolKernels;

  /// @brief Field m_RestructureBvh, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RestructureBvh, put = __cordl_internal_set_m_RestructureBvh)) ::UnityW<::UnityEngine::ComputeShader> m_RestructureBvh;

  /// @brief Field m_Scatter, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Scatter, put = __cordl_internal_set_m_Scatter)) ::UnityW<::UnityEngine::ComputeShader> m_Scatter;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_BitHistogram() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_BitHistogram();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_BlockReducePart() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_BlockReducePart();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_BlockScan() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_BlockScan();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_BuildHlbvh() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_BuildHlbvh();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_CopyBuffer() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_CopyBuffer();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_CopyPositions() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_CopyPositions();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_GeometryPoolKernels() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_GeometryPoolKernels();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_RestructureBvh() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_RestructureBvh();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_Scatter() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_Scatter();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_BitHistogram(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_BlockReducePart(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_BlockScan(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_BuildHlbvh(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_CopyBuffer(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_CopyPositions(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_GeometryPoolKernels(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_RestructureBvh(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_Scatter(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  /// @brief Method .ctor, addr 0x6e0e034, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BitHistogram, addr 0x6e0dd64, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_BitHistogram();

  /// @brief Method get_BlockReducePart, addr 0x6e0dddc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_BlockReducePart();

  /// @brief Method get_BlockScan, addr 0x6e0de54, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_BlockScan();

  /// @brief Method get_BuildHlbvh, addr 0x6e0decc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_BuildHlbvh();

  /// @brief Method get_CopyBuffer, addr 0x6e0dc74, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_CopyBuffer();

  /// @brief Method get_CopyPositions, addr 0x6e0dcec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_CopyPositions();

  /// @brief Method get_GeometryPoolKernels, addr 0x6e0dbfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_GeometryPoolKernels();

  /// @brief Method get_RestructureBvh, addr 0x6e0df44, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_RestructureBvh();

  /// @brief Method get_Scatter, addr 0x6e0dfbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_Scatter();

  /// @brief Method get_version, addr 0x6e0dbf4, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_BitHistogram, addr 0x6e0dd6c, size 0x70, virtual false, abstract: false, final false
  inline void set_BitHistogram(::UnityEngine::ComputeShader* value);

  /// @brief Method set_BlockReducePart, addr 0x6e0dde4, size 0x70, virtual false, abstract: false, final false
  inline void set_BlockReducePart(::UnityEngine::ComputeShader* value);

  /// @brief Method set_BlockScan, addr 0x6e0de5c, size 0x70, virtual false, abstract: false, final false
  inline void set_BlockScan(::UnityEngine::ComputeShader* value);

  /// @brief Method set_BuildHlbvh, addr 0x6e0ded4, size 0x70, virtual false, abstract: false, final false
  inline void set_BuildHlbvh(::UnityEngine::ComputeShader* value);

  /// @brief Method set_CopyBuffer, addr 0x6e0dc7c, size 0x70, virtual false, abstract: false, final false
  inline void set_CopyBuffer(::UnityEngine::ComputeShader* value);

  /// @brief Method set_CopyPositions, addr 0x6e0dcf4, size 0x70, virtual false, abstract: false, final false
  inline void set_CopyPositions(::UnityEngine::ComputeShader* value);

  /// @brief Method set_GeometryPoolKernels, addr 0x6e0dc04, size 0x70, virtual false, abstract: false, final false
  inline void set_GeometryPoolKernels(::UnityEngine::ComputeShader* value);

  /// @brief Method set_RestructureBvh, addr 0x6e0df4c, size 0x70, virtual false, abstract: false, final false
  inline void set_RestructureBvh(::UnityEngine::ComputeShader* value);

  /// @brief Method set_Scatter, addr 0x6e0dfc4, size 0x70, virtual false, abstract: false, final false
  inline void set_Scatter(::UnityEngine::ComputeShader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingRenderPipelineResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingRenderPipelineResources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingRenderPipelineResources(RayTracingRenderPipelineResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingRenderPipelineResources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingRenderPipelineResources(RayTracingRenderPipelineResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20502 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Common/GeometryPool/GeometryPoolKernels.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_GeometryPoolKernels, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_GeometryPoolKernels;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Common/Utilities/CopyBuffer.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_CopyBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_CopyBuffer;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/copyPositions.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_CopyPositions, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_CopyPositions;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/bit_histogram.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_BitHistogram, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_BitHistogram;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/block_reduce_part.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_BlockReducePart, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_BlockReducePart;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/block_scan.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_BlockScan, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_BlockScan;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/build_hlbvh.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_BuildHlbvh, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_BuildHlbvh;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/restructure_bvh.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_RestructureBvh, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_RestructureBvh;

  /// [SerializeField]
  /// [ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/scatter.compute", (UnityEngine.Rendering.SearchType)0)]
  /// @brief Field m_Scatter, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_Scatter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_GeometryPoolKernels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_CopyBuffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_CopyPositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_BitHistogram) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_BlockReducePart) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_BlockScan) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_BuildHlbvh) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_RestructureBvh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources, ___m_Scatter) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingRenderPipelineResources) == 0x60, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
