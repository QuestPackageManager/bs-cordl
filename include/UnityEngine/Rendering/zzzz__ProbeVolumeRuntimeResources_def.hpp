#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeRuntimeResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeRuntimeResources)
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
namespace UnityEngine::Rendering {
class ProbeVolumeRuntimeResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeRuntimeResources);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeRuntimeResources
class CORDL_TYPE ProbeVolumeRuntimeResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Field probeVolumeBlendStatesCS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeBlendStatesCS, put = __cordl_internal_set_probeVolumeBlendStatesCS)) ::UnityW<::UnityEngine::ComputeShader> probeVolumeBlendStatesCS;

  /// @brief Field probeVolumeUploadDataCS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeUploadDataCS, put = __cordl_internal_set_probeVolumeUploadDataCS)) ::UnityW<::UnityEngine::ComputeShader> probeVolumeUploadDataCS;

  /// @brief Field probeVolumeUploadDataL2CS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeUploadDataL2CS, put = __cordl_internal_set_probeVolumeUploadDataL2CS)) ::UnityW<::UnityEngine::ComputeShader> probeVolumeUploadDataL2CS;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::ProbeVolumeRuntimeResources* New_ctor();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_probeVolumeBlendStatesCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_probeVolumeBlendStatesCS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_probeVolumeUploadDataCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_probeVolumeUploadDataCS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_probeVolumeUploadDataL2CS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_probeVolumeUploadDataL2CS();

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  constexpr void __cordl_internal_set_probeVolumeBlendStatesCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_probeVolumeUploadDataCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_probeVolumeUploadDataL2CS(::UnityW<::UnityEngine::ComputeShader> value);

  /// @brief Method .ctor, addr 0x6577c14, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_version, addr 0x6577c0c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeRuntimeResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeRuntimeResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeRuntimeResources(ProbeVolumeRuntimeResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeRuntimeResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeRuntimeResources(ProbeVolumeRuntimeResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12112 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field probeVolumeBlendStatesCS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___probeVolumeBlendStatesCS;

  /// @brief Field probeVolumeUploadDataCS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___probeVolumeUploadDataCS;

  /// @brief Field probeVolumeUploadDataL2CS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___probeVolumeUploadDataL2CS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeRuntimeResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeRuntimeResources, ___probeVolumeBlendStatesCS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeRuntimeResources, ___probeVolumeUploadDataCS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeRuntimeResources, ___probeVolumeUploadDataL2CS) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeRuntimeResources, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeRuntimeResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeRuntimeResources*, "UnityEngine.Rendering", "ProbeVolumeRuntimeResources");
