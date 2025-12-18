#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeDebugResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeDebugResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeDebugResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeDebugResources);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeDebugResources
class CORDL_TYPE ProbeVolumeDebugResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) int32_t m_Version;

  /// @brief Field numbersDisplayTex, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_numbersDisplayTex, put = __cordl_internal_set_numbersDisplayTex)) ::UnityW<::UnityEngine::Texture2D> numbersDisplayTex;

  /// @brief Field probeSamplingDebugMesh, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_probeSamplingDebugMesh, put = __cordl_internal_set_probeSamplingDebugMesh)) ::UnityW<::UnityEngine::Mesh> probeSamplingDebugMesh;

  /// @brief Field probeVolumeDebugShader, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeDebugShader, put = __cordl_internal_set_probeVolumeDebugShader)) ::UnityW<::UnityEngine::Shader> probeVolumeDebugShader;

  /// @brief Field probeVolumeFragmentationDebugShader, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeFragmentationDebugShader, put = __cordl_internal_set_probeVolumeFragmentationDebugShader)) ::UnityW<::UnityEngine::Shader>
      probeVolumeFragmentationDebugShader;

  /// @brief Field probeVolumeOffsetDebugShader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeOffsetDebugShader, put = __cordl_internal_set_probeVolumeOffsetDebugShader)) ::UnityW<::UnityEngine::Shader> probeVolumeOffsetDebugShader;

  /// @brief Field probeVolumeSamplingDebugShader, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_probeVolumeSamplingDebugShader, put = __cordl_internal_set_probeVolumeSamplingDebugShader)) ::UnityW<::UnityEngine::Shader>
      probeVolumeSamplingDebugShader;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::ProbeVolumeDebugResources* New_ctor();

  constexpr int32_t const& __cordl_internal_get_m_Version() const;

  constexpr int32_t& __cordl_internal_get_m_Version();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_numbersDisplayTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_numbersDisplayTex();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_probeSamplingDebugMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_probeSamplingDebugMesh();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_probeVolumeDebugShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_probeVolumeDebugShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_probeVolumeFragmentationDebugShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_probeVolumeFragmentationDebugShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_probeVolumeOffsetDebugShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_probeVolumeOffsetDebugShader();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_probeVolumeSamplingDebugShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_probeVolumeSamplingDebugShader();

  constexpr void __cordl_internal_set_m_Version(int32_t value);

  constexpr void __cordl_internal_set_numbersDisplayTex(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_probeSamplingDebugMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_probeVolumeDebugShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_probeVolumeFragmentationDebugShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_probeVolumeOffsetDebugShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_probeVolumeSamplingDebugShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x65df7b4, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_version, addr 0x65df7ac, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeDebugResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeDebugResources(ProbeVolumeDebugResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebugResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeDebugResources(ProbeVolumeDebugResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12117 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_Version;

  /// @brief Field probeVolumeDebugShader, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___probeVolumeDebugShader;

  /// @brief Field probeVolumeFragmentationDebugShader, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___probeVolumeFragmentationDebugShader;

  /// @brief Field probeVolumeSamplingDebugShader, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___probeVolumeSamplingDebugShader;

  /// @brief Field probeVolumeOffsetDebugShader, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___probeVolumeOffsetDebugShader;

  /// @brief Field probeSamplingDebugMesh, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___probeSamplingDebugMesh;

  /// @brief Field numbersDisplayTex, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___numbersDisplayTex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebugResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebugResources, ___probeVolumeDebugShader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebugResources, ___probeVolumeFragmentationDebugShader) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebugResources, ___probeVolumeSamplingDebugShader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebugResources, ___probeVolumeOffsetDebugShader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebugResources, ___probeSamplingDebugMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebugResources, ___numbersDisplayTex) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeDebugResources, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeDebugResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeDebugResources*, "UnityEngine.Rendering", "ProbeVolumeDebugResources");
