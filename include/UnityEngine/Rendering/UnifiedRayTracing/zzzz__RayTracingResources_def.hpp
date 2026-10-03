#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnifiedRayTracing/RayTracingResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RayTracingResources)
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace UnityEngine::Rendering::UnifiedRayTracing {
class RayTracingResources;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources*, "UnityEngine.Rendering.UnifiedRayTracing", "RayTracingResources");
// Dependencies System.Object
namespace UnityEngine::Rendering::UnifiedRayTracing {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnifiedRayTracing.RayTracingResources
class CORDL_TYPE RayTracingResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bitHistogram>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__bitHistogram_k__BackingField, put = __cordl_internal_set__bitHistogram_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader>
      _bitHistogram_k__BackingField;

  /// @brief Field <blockReducePart>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__blockReducePart_k__BackingField, put = __cordl_internal_set__blockReducePart_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader>
      _blockReducePart_k__BackingField;

  /// @brief Field <blockScan>k__BackingField, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__blockScan_k__BackingField, put = __cordl_internal_set__blockScan_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader> _blockScan_k__BackingField;

  /// @brief Field <buildHlbvh>k__BackingField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__buildHlbvh_k__BackingField, put = __cordl_internal_set__buildHlbvh_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader>
      _buildHlbvh_k__BackingField;

  /// @brief Field <copyBuffer>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__copyBuffer_k__BackingField, put = __cordl_internal_set__copyBuffer_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader>
      _copyBuffer_k__BackingField;

  /// @brief Field <copyPositions>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__copyPositions_k__BackingField, put = __cordl_internal_set__copyPositions_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader>
      _copyPositions_k__BackingField;

  /// @brief Field <geometryPoolKernels>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__geometryPoolKernels_k__BackingField, put = __cordl_internal_set__geometryPoolKernels_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader>
      _geometryPoolKernels_k__BackingField;

  /// @brief Field <restructureBvh>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__restructureBvh_k__BackingField, put = __cordl_internal_set__restructureBvh_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader>
      _restructureBvh_k__BackingField;

  /// @brief Field <scatter>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__scatter_k__BackingField, put = __cordl_internal_set__scatter_k__BackingField)) ::UnityW<::UnityEngine::ComputeShader> _scatter_k__BackingField;

  __declspec(property(get = get_bitHistogram, put = set_bitHistogram)) ::UnityW<::UnityEngine::ComputeShader> bitHistogram;

  __declspec(property(get = get_blockReducePart, put = set_blockReducePart)) ::UnityW<::UnityEngine::ComputeShader> blockReducePart;

  __declspec(property(get = get_blockScan, put = set_blockScan)) ::UnityW<::UnityEngine::ComputeShader> blockScan;

  __declspec(property(get = get_buildHlbvh, put = set_buildHlbvh)) ::UnityW<::UnityEngine::ComputeShader> buildHlbvh;

  __declspec(property(get = get_copyBuffer, put = set_copyBuffer)) ::UnityW<::UnityEngine::ComputeShader> copyBuffer;

  __declspec(property(get = get_copyPositions, put = set_copyPositions)) ::UnityW<::UnityEngine::ComputeShader> copyPositions;

  __declspec(property(get = get_geometryPoolKernels, put = set_geometryPoolKernels)) ::UnityW<::UnityEngine::ComputeShader> geometryPoolKernels;

  __declspec(property(get = get_restructureBvh, put = set_restructureBvh)) ::UnityW<::UnityEngine::ComputeShader> restructureBvh;

  __declspec(property(get = get_scatter, put = set_scatter)) ::UnityW<::UnityEngine::ComputeShader> scatter;

  /// @brief Method LoadFromAssetBundle, addr 0x6e0e0d0, size 0x1e4, virtual false, abstract: false, final false
  inline void LoadFromAssetBundle(::UnityEngine::AssetBundle* assetBundle);

  /// @brief Method LoadFromRenderPipelineResources, addr 0x6e0e2b4, size 0xc0, virtual false, abstract: false, final false
  inline bool LoadFromRenderPipelineResources();

  static inline ::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__bitHistogram_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__bitHistogram_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__blockReducePart_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__blockReducePart_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__blockScan_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__blockScan_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__buildHlbvh_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__buildHlbvh_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__copyBuffer_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__copyBuffer_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__copyPositions_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__copyPositions_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__geometryPoolKernels_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__geometryPoolKernels_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__restructureBvh_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__restructureBvh_k__BackingField();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__scatter_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__scatter_k__BackingField();

  constexpr void __cordl_internal_set__bitHistogram_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__blockReducePart_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__blockScan_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__buildHlbvh_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__copyBuffer_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__copyPositions_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__geometryPoolKernels_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__restructureBvh_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set__scatter_k__BackingField(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x6e0e374, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_bitHistogram, addr 0x6e0e070, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_bitHistogram();

  /// [CompilerGenerated]
  /// @brief Method get_blockReducePart, addr 0x6e0e090, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_blockReducePart();

  /// [CompilerGenerated]
  /// @brief Method get_blockScan, addr 0x6e0e0a0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_blockScan();

  /// [CompilerGenerated]
  /// @brief Method get_buildHlbvh, addr 0x6e0e0b0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_buildHlbvh();

  /// [CompilerGenerated]
  /// @brief Method get_copyBuffer, addr 0x6e0e050, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_copyBuffer();

  /// [CompilerGenerated]
  /// @brief Method get_copyPositions, addr 0x6e0e060, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_copyPositions();

  /// [CompilerGenerated]
  /// @brief Method get_geometryPoolKernels, addr 0x6e0e040, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_geometryPoolKernels();

  /// [CompilerGenerated]
  /// @brief Method get_restructureBvh, addr 0x6e0e0c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_restructureBvh();

  /// [CompilerGenerated]
  /// @brief Method get_scatter, addr 0x6e0e080, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_scatter();

  /// [CompilerGenerated]
  /// @brief Method set_bitHistogram, addr 0x6e0e078, size 0x8, virtual false, abstract: false, final false
  inline void set_bitHistogram(::UnityEngine::ComputeShader* value);

  /// [CompilerGenerated]
  /// @brief Method set_blockReducePart, addr 0x6e0e098, size 0x8, virtual false, abstract: false, final false
  inline void set_blockReducePart(::UnityEngine::ComputeShader* value);

  /// [CompilerGenerated]
  /// @brief Method set_blockScan, addr 0x6e0e0a8, size 0x8, virtual false, abstract: false, final false
  inline void set_blockScan(::UnityEngine::ComputeShader* value);

  /// [CompilerGenerated]
  /// @brief Method set_buildHlbvh, addr 0x6e0e0b8, size 0x8, virtual false, abstract: false, final false
  inline void set_buildHlbvh(::UnityEngine::ComputeShader* value);

  /// [CompilerGenerated]
  /// @brief Method set_copyBuffer, addr 0x6e0e058, size 0x8, virtual false, abstract: false, final false
  inline void set_copyBuffer(::UnityEngine::ComputeShader* value);

  /// [CompilerGenerated]
  /// @brief Method set_copyPositions, addr 0x6e0e068, size 0x8, virtual false, abstract: false, final false
  inline void set_copyPositions(::UnityEngine::ComputeShader* value);

  /// [CompilerGenerated]
  /// @brief Method set_geometryPoolKernels, addr 0x6e0e048, size 0x8, virtual false, abstract: false, final false
  inline void set_geometryPoolKernels(::UnityEngine::ComputeShader* value);

  /// [CompilerGenerated]
  /// @brief Method set_restructureBvh, addr 0x6e0e0c8, size 0x8, virtual false, abstract: false, final false
  inline void set_restructureBvh(::UnityEngine::ComputeShader* value);

  /// [CompilerGenerated]
  /// @brief Method set_scatter, addr 0x6e0e088, size 0x8, virtual false, abstract: false, final false
  inline void set_scatter(::UnityEngine::ComputeShader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RayTracingResources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RayTracingResources(RayTracingResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RayTracingResources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RayTracingResources(RayTracingResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20503 };

  /// [CompilerGenerated]
  /// @brief Field <geometryPoolKernels>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____geometryPoolKernels_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <copyBuffer>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____copyBuffer_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <copyPositions>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____copyPositions_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <bitHistogram>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____bitHistogram_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <scatter>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____scatter_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <blockReducePart>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____blockReducePart_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <blockScan>k__BackingField, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____blockScan_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <buildHlbvh>k__BackingField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____buildHlbvh_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <restructureBvh>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ____restructureBvh_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____geometryPoolKernels_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____copyBuffer_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____copyPositions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____bitHistogram_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____scatter_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____blockReducePart_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____blockScan_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____buildHlbvh_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources, ____restructureBvh_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UnifiedRayTracing::RayTracingResources) == 0x58, "Size mismatch!");

} // namespace UnityEngine::Rendering::UnifiedRayTracing
