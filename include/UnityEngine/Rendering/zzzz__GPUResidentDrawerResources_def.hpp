#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUResidentDrawerResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUResidentDrawerResources)
namespace UnityEngine::Rendering {
struct GPUResidentDrawerResources_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUResidentDrawerResources_Version;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUResidentDrawerResources_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::GPUResidentDrawerResources);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUResidentDrawerResources/Version
struct CORDL_TYPE GPUResidentDrawerResources_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __GPUResidentDrawerResources_Version_Unwrapped
  enum struct __GPUResidentDrawerResources_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_Count = static_cast<int32_t>(0x1),
    __E_Latest = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __GPUResidentDrawerResources_Version_Unwrapped() const noexcept {
    return static_cast<__GPUResidentDrawerResources_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerResources_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr GPUResidentDrawerResources_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(1)
  static ::UnityEngine::Rendering::GPUResidentDrawerResources_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::GPUResidentDrawerResources_Version const Initial;

  /// @brief Field Latest value: I32(0)
  static ::UnityEngine::Rendering::GPUResidentDrawerResources_Version const Latest;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17596 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawerResources_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.GPUResidentDrawerResources::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.GPUResidentDrawerResources
class CORDL_TYPE GPUResidentDrawerResources : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::GPUResidentDrawerResources_Version;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

  __declspec(property(get = get_debugOccluderPS, put = set_debugOccluderPS)) ::UnityW<::UnityEngine::Shader> debugOccluderPS;

  __declspec(property(get = get_debugOcclusionTestPS, put = set_debugOcclusionTestPS)) ::UnityW<::UnityEngine::Shader> debugOcclusionTestPS;

  __declspec(property(get = get_instanceDataBufferCopyKernels, put = set_instanceDataBufferCopyKernels)) ::UnityW<::UnityEngine::ComputeShader> instanceDataBufferCopyKernels;

  __declspec(property(get = get_instanceDataBufferUploadKernels, put = set_instanceDataBufferUploadKernels)) ::UnityW<::UnityEngine::ComputeShader> instanceDataBufferUploadKernels;

  __declspec(property(get = get_instanceOcclusionCullingKernels, put = set_instanceOcclusionCullingKernels)) ::UnityW<::UnityEngine::ComputeShader> instanceOcclusionCullingKernels;

  /// @brief Field m_DebugOccluderPS, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugOccluderPS, put = __cordl_internal_set_m_DebugOccluderPS)) ::UnityW<::UnityEngine::Shader> m_DebugOccluderPS;

  /// @brief Field m_DebugOcclusionTestPS, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugOcclusionTestPS, put = __cordl_internal_set_m_DebugOcclusionTestPS)) ::UnityW<::UnityEngine::Shader> m_DebugOcclusionTestPS;

  /// @brief Field m_InstanceDataBufferCopyKernels, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceDataBufferCopyKernels, put = __cordl_internal_set_m_InstanceDataBufferCopyKernels)) ::UnityW<::UnityEngine::ComputeShader>
      m_InstanceDataBufferCopyKernels;

  /// @brief Field m_InstanceDataBufferUploadKernels, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceDataBufferUploadKernels, put = __cordl_internal_set_m_InstanceDataBufferUploadKernels)) ::UnityW<::UnityEngine::ComputeShader>
      m_InstanceDataBufferUploadKernels;

  /// @brief Field m_InstanceOcclusionCullingKernels, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InstanceOcclusionCullingKernels, put = __cordl_internal_set_m_InstanceOcclusionCullingKernels)) ::UnityW<::UnityEngine::ComputeShader>
      m_InstanceOcclusionCullingKernels;

  /// @brief Field m_OccluderDepthPyramidKernels, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OccluderDepthPyramidKernels, put = __cordl_internal_set_m_OccluderDepthPyramidKernels)) ::UnityW<::UnityEngine::ComputeShader>
      m_OccluderDepthPyramidKernels;

  /// @brief Field m_OcclusionCullingDebugKernels, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OcclusionCullingDebugKernels, put = __cordl_internal_set_m_OcclusionCullingDebugKernels)) ::UnityW<::UnityEngine::ComputeShader>
      m_OcclusionCullingDebugKernels;

  /// @brief Field m_TransformUpdaterKernels, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransformUpdaterKernels, put = __cordl_internal_set_m_TransformUpdaterKernels)) ::UnityW<::UnityEngine::ComputeShader> m_TransformUpdaterKernels;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::GPUResidentDrawerResources_Version m_Version;

  /// @brief Field m_WindDataUpdaterKernels, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WindDataUpdaterKernels, put = __cordl_internal_set_m_WindDataUpdaterKernels)) ::UnityW<::UnityEngine::ComputeShader> m_WindDataUpdaterKernels;

  __declspec(property(get = get_occluderDepthPyramidKernels, put = set_occluderDepthPyramidKernels)) ::UnityW<::UnityEngine::ComputeShader> occluderDepthPyramidKernels;

  __declspec(property(get = get_occlusionCullingDebugKernels, put = set_occlusionCullingDebugKernels)) ::UnityW<::UnityEngine::ComputeShader> occlusionCullingDebugKernels;

  __declspec(property(get = get_transformUpdaterKernels, put = set_transformUpdaterKernels)) ::UnityW<::UnityEngine::ComputeShader> transformUpdaterKernels;

  __declspec(property(get = get_windDataUpdaterKernels, put = set_windDataUpdaterKernels)) ::UnityW<::UnityEngine::ComputeShader> windDataUpdaterKernels;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::GPUResidentDrawerResources* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0x665f04c, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DebugOccluderPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DebugOccluderPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DebugOcclusionTestPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DebugOcclusionTestPS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_InstanceDataBufferCopyKernels() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_InstanceDataBufferCopyKernels();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_InstanceDataBufferUploadKernels() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_InstanceDataBufferUploadKernels();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_InstanceOcclusionCullingKernels() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_InstanceOcclusionCullingKernels();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_OccluderDepthPyramidKernels() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_OccluderDepthPyramidKernels();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_OcclusionCullingDebugKernels() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_OcclusionCullingDebugKernels();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_TransformUpdaterKernels() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_TransformUpdaterKernels();

  constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::GPUResidentDrawerResources_Version& __cordl_internal_get_m_Version();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_WindDataUpdaterKernels() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_WindDataUpdaterKernels();

  constexpr void __cordl_internal_set_m_DebugOccluderPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_DebugOcclusionTestPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_InstanceDataBufferCopyKernels(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_InstanceDataBufferUploadKernels(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_InstanceOcclusionCullingKernels(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_OccluderDepthPyramidKernels(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_OcclusionCullingDebugKernels(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_TransformUpdaterKernels(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::GPUResidentDrawerResources_Version value);

  constexpr void __cordl_internal_set_m_WindDataUpdaterKernels(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x665f48c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_debugOccluderPS, addr 0x665f414, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_debugOccluderPS();

  /// @brief Method get_debugOcclusionTestPS, addr 0x665f39c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_debugOcclusionTestPS();

  /// @brief Method get_instanceDataBufferCopyKernels, addr 0x665f054, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_instanceDataBufferCopyKernels();

  /// @brief Method get_instanceDataBufferUploadKernels, addr 0x665f0cc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_instanceDataBufferUploadKernels();

  /// @brief Method get_instanceOcclusionCullingKernels, addr 0x665f2ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_instanceOcclusionCullingKernels();

  /// @brief Method get_occluderDepthPyramidKernels, addr 0x665f234, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_occluderDepthPyramidKernels();

  /// @brief Method get_occlusionCullingDebugKernels, addr 0x665f324, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_occlusionCullingDebugKernels();

  /// @brief Method get_transformUpdaterKernels, addr 0x665f144, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_transformUpdaterKernels();

  /// @brief Method get_windDataUpdaterKernels, addr 0x665f1bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::ComputeShader> get_windDataUpdaterKernels();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_debugOccluderPS, addr 0x665f41c, size 0x70, virtual false, abstract: false, final false
  inline void set_debugOccluderPS(::UnityEngine::Shader* value);

  /// @brief Method set_debugOcclusionTestPS, addr 0x665f3a4, size 0x70, virtual false, abstract: false, final false
  inline void set_debugOcclusionTestPS(::UnityEngine::Shader* value);

  /// @brief Method set_instanceDataBufferCopyKernels, addr 0x665f05c, size 0x70, virtual false, abstract: false, final false
  inline void set_instanceDataBufferCopyKernels(::UnityEngine::ComputeShader* value);

  /// @brief Method set_instanceDataBufferUploadKernels, addr 0x665f0d4, size 0x70, virtual false, abstract: false, final false
  inline void set_instanceDataBufferUploadKernels(::UnityEngine::ComputeShader* value);

  /// @brief Method set_instanceOcclusionCullingKernels, addr 0x665f2b4, size 0x70, virtual false, abstract: false, final false
  inline void set_instanceOcclusionCullingKernels(::UnityEngine::ComputeShader* value);

  /// @brief Method set_occluderDepthPyramidKernels, addr 0x665f23c, size 0x70, virtual false, abstract: false, final false
  inline void set_occluderDepthPyramidKernels(::UnityEngine::ComputeShader* value);

  /// @brief Method set_occlusionCullingDebugKernels, addr 0x665f32c, size 0x70, virtual false, abstract: false, final false
  inline void set_occlusionCullingDebugKernels(::UnityEngine::ComputeShader* value);

  /// @brief Method set_transformUpdaterKernels, addr 0x665f14c, size 0x70, virtual false, abstract: false, final false
  inline void set_transformUpdaterKernels(::UnityEngine::ComputeShader* value);

  /// @brief Method set_windDataUpdaterKernels, addr 0x665f1c4, size 0x70, virtual false, abstract: false, final false
  inline void set_windDataUpdaterKernels(::UnityEngine::ComputeShader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GPUResidentDrawerResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GPUResidentDrawerResources(GPUResidentDrawerResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GPUResidentDrawerResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GPUResidentDrawerResources(GPUResidentDrawerResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17597 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::GPUResidentDrawerResources_Version ___m_Version;

  /// @brief Field m_InstanceDataBufferCopyKernels, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_InstanceDataBufferCopyKernels;

  /// @brief Field m_InstanceDataBufferUploadKernels, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_InstanceDataBufferUploadKernels;

  /// @brief Field m_TransformUpdaterKernels, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_TransformUpdaterKernels;

  /// @brief Field m_WindDataUpdaterKernels, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_WindDataUpdaterKernels;

  /// @brief Field m_OccluderDepthPyramidKernels, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_OccluderDepthPyramidKernels;

  /// @brief Field m_InstanceOcclusionCullingKernels, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_InstanceOcclusionCullingKernels;

  /// @brief Field m_OcclusionCullingDebugKernels, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_OcclusionCullingDebugKernels;

  /// @brief Field m_DebugOcclusionTestPS, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DebugOcclusionTestPS;

  /// @brief Field m_DebugOccluderPS, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DebugOccluderPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_InstanceDataBufferCopyKernels) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_InstanceDataBufferUploadKernels) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_TransformUpdaterKernels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_WindDataUpdaterKernels) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_OccluderDepthPyramidKernels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_InstanceOcclusionCullingKernels) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_OcclusionCullingDebugKernels) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_DebugOcclusionTestPS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::GPUResidentDrawerResources, ___m_DebugOccluderPS) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::GPUResidentDrawerResources, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawerResources_Version, "UnityEngine.Rendering", "GPUResidentDrawerResources/Version");
NEED_NO_BOX(::UnityEngine::Rendering::GPUResidentDrawerResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::GPUResidentDrawerResources*, "UnityEngine.Rendering", "GPUResidentDrawerResources");
