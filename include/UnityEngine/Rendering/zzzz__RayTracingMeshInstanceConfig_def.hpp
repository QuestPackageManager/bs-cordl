#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RayTracingMeshInstanceConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__RayTracingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingAccelerationStructureBuildFlags_def.hpp"
#include "UnityEngine/Rendering/zzzz__RayTracingSubMeshFlags_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RayTracingMeshInstanceConfig)
namespace UnityEngine::Experimental::Rendering {
struct RayTracingMode;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructureBuildFlags;
}
namespace UnityEngine {
class LightProbeProxyVolume;
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
namespace UnityEngine::Rendering {
struct RayTracingMeshInstanceConfig;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RayTracingMeshInstanceConfig);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, "UnityEngine.Rendering", "RayTracingMeshInstanceConfig");
// [MovedFrom("UnityEngine.Experimental.Rendering")]
// Dependencies UnityEngine.Experimental.Rendering.RayTracingMode, UnityEngine.MotionVectorGenerationMode, UnityEngine.Rendering.LightProbeUsage,
// UnityEngine.Rendering.RayTracingAccelerationStructureBuildFlags, UnityEngine.Rendering.RayTracingSubMeshFlags
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RayTracingMeshInstanceConfig
struct CORDL_TYPE RayTracingMeshInstanceConfig {
public:
  // Declarations
  __declspec(property(put = set_accelerationStructureBuildFlags)) ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags accelerationStructureBuildFlags;

  __declspec(property(put = set_accelerationStructureBuildFlagsOverride)) bool accelerationStructureBuildFlagsOverride;

  /// @brief [Obsolete("dynamicGeometry has been deprecated and will be removed in the future. Use rayTracingMode instead.", false)]
  __declspec(property(put = set_dynamicGeometry)) bool dynamicGeometry;

  __declspec(property(put = set_rayTracingMode)) ::UnityEngine::Experimental::Rendering::RayTracingMode rayTracingMode;

  /// @brief Method .ctor, addr 0x6f66c58, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x6f66d3c, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* mesh, uint32_t subMeshIndex, ::UnityEngine::Material* material);

  /// [CompilerGenerated]
  /// @brief Method set_accelerationStructureBuildFlags, addr 0x6f66e44, size 0x8, virtual false, abstract: false, final false
  inline void set_accelerationStructureBuildFlags(::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags value);

  /// [CompilerGenerated]
  /// @brief Method set_accelerationStructureBuildFlagsOverride, addr 0x6f66e4c, size 0x8, virtual false, abstract: false, final false
  inline void set_accelerationStructureBuildFlagsOverride(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_dynamicGeometry, addr 0x6f66e3c, size 0x8, virtual false, abstract: false, final false
  inline void set_dynamicGeometry(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_rayTracingMode, addr 0x6f66e34, size 0x8, virtual false, abstract: false, final false
  inline void set_rayTracingMode(::UnityEngine::Experimental::Rendering::RayTracingMode value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RayTracingMeshInstanceConfig();

  // Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "", def_value: None, comment: None }, CppParam { name: "subMeshIndex", ty: "uint32_t", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "subMeshFlags", ty: "::UnityEngine::Rendering::RayTracingSubMeshFlags", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_rayTracingMode_k__BackingField", ty: "::UnityEngine::Experimental::Rendering::RayTracingMode", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_dynamicGeometry_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value:
  // None, comment: None }, CppParam { name: "materialProperties", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "enableTriangleCulling", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "frontTriangleCounterClockwise", ty: "bool", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "layer", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "mask", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "motionVectorMode", ty: "::UnityEngine::MotionVectorGenerationMode", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "lightProbeUsage", ty: "::UnityEngine::Rendering::LightProbeUsage", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "lightProbeProxyVolume", ty: "::UnityW<::UnityEngine::LightProbeProxyVolume>", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_accelerationStructureBuildFlags_k__BackingField", ty: "::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_accelerationStructureBuildFlagsOverride_k__BackingField", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshLod", ty: "int32_t", modifiers: "", def_value: None,
  // comment: None }]
  constexpr RayTracingMeshInstanceConfig(::UnityW<::UnityEngine::Mesh> mesh, uint32_t subMeshIndex, ::UnityEngine::Rendering::RayTracingSubMeshFlags subMeshFlags,
                                         ::UnityEngine::Experimental::Rendering::RayTracingMode _rayTracingMode_k__BackingField, bool _dynamicGeometry_k__BackingField,
                                         ::UnityW<::UnityEngine::Material> material, ::UnityEngine::MaterialPropertyBlock* materialProperties, bool enableTriangleCulling,
                                         bool frontTriangleCounterClockwise, int32_t layer, uint32_t renderingLayerMask, uint32_t mask, ::UnityEngine::MotionVectorGenerationMode motionVectorMode,
                                         ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityW<::UnityEngine::LightProbeProxyVolume> lightProbeProxyVolume,
                                         ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _accelerationStructureBuildFlags_k__BackingField,
                                         bool _accelerationStructureBuildFlagsOverride_k__BackingField, int32_t meshLod) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10371 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x58 };

  /// @brief Field mesh, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> mesh;

  /// @brief Field subMeshIndex, offset: 0x8, size: 0x4, def value: None
  uint32_t subMeshIndex;

  /// @brief Field subMeshFlags, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingSubMeshFlags subMeshFlags;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <rayTracingMode>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::RayTracingMode _rayTracingMode_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <dynamicGeometry>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool _dynamicGeometry_k__BackingField;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialProperties, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* materialProperties;

  /// @brief Field enableTriangleCulling, offset: 0x28, size: 0x1, def value: None
  bool enableTriangleCulling;

  /// @brief Field frontTriangleCounterClockwise, offset: 0x29, size: 0x1, def value: None
  bool frontTriangleCounterClockwise;

  /// @brief Field layer, offset: 0x2c, size: 0x4, def value: None
  int32_t layer;

  /// @brief Field renderingLayerMask, offset: 0x30, size: 0x4, def value: None
  uint32_t renderingLayerMask;

  /// @brief Field mask, offset: 0x34, size: 0x4, def value: None
  uint32_t mask;

  /// @brief Field motionVectorMode, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::MotionVectorGenerationMode motionVectorMode;

  /// @brief Field lightProbeUsage, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage;

  /// @brief Field lightProbeProxyVolume, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::LightProbeProxyVolume> lightProbeProxyVolume;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <accelerationStructureBuildFlags>k__BackingField, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::RayTracingAccelerationStructureBuildFlags _accelerationStructureBuildFlags_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <accelerationStructureBuildFlagsOverride>k__BackingField, offset: 0x4c, size: 0x1, def value: None
  bool _accelerationStructureBuildFlagsOverride_k__BackingField;

  /// @brief Field meshLod, offset: 0x50, size: 0x4, def value: None
  int32_t meshLod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, mesh) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, subMeshIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, subMeshFlags) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, _rayTracingMode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, _dynamicGeometry_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, materialProperties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, enableTriangleCulling) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, frontTriangleCounterClockwise) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, layer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, renderingLayerMask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, mask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, motionVectorMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, lightProbeUsage) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, lightProbeProxyVolume) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, _accelerationStructureBuildFlags_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, _accelerationStructureBuildFlagsOverride_k__BackingField) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig, meshLod) == 0x50, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RayTracingMeshInstanceConfig) == 0x58, "Size mismatch!");

} // namespace UnityEngine::Rendering
