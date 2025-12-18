#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusion)
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionPass;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusionSettings;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceAmbientOcclusion;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion);
// Dependencies UnityEngine.Rendering.Universal.ScriptableRendererFeature
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusion
class CORDL_TYPE ScreenSpaceAmbientOcclusion : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature {
public:
  // Declarations
  /// @brief Field m_BlueNoise256Textures, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlueNoise256Textures,
                      put = __cordl_internal_set_m_BlueNoise256Textures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>
      m_BlueNoise256Textures;

  /// @brief Field m_Material, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::UnityW<::UnityEngine::Material> m_Material;

  /// @brief Field m_SSAOPass, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SSAOPass, put = __cordl_internal_set_m_SSAOPass)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass* m_SSAOPass;

  /// @brief Field m_Settings, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Settings, put = __cordl_internal_set_m_Settings)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* m_Settings;

  /// @brief Field m_Shader, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Shader, put = __cordl_internal_set_m_Shader)) ::UnityW<::UnityEngine::Shader> m_Shader;

  __declspec(property(get = get_settings)) ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* settings;

  /// @brief Method AddRenderPasses, addr 0x66f768c, size 0x1e8, virtual true, abstract: false, final false
  inline void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Create, addr 0x66f75dc, size 0xb0, virtual true, abstract: false, final false
  inline void Create();

  /// @brief Method Dispose, addr 0x66f7964, size 0x70, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method GetMaterials, addr 0x66f7874, size 0xf0, virtual false, abstract: false, final false
  inline bool GetMaterials();

  static inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get_m_BlueNoise256Textures() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& __cordl_internal_get_m_BlueNoise256Textures();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_Material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_Material();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass* const& __cordl_internal_get_m_SSAOPass() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass*& __cordl_internal_get_m_SSAOPass();

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* const& __cordl_internal_get_m_Settings() const;

  constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*& __cordl_internal_get_m_Settings();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_Shader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_Shader();

  constexpr void __cordl_internal_set_m_BlueNoise256Textures(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set_m_Material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_SSAOPass(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass* value);

  constexpr void __cordl_internal_set_m_Settings(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* value);

  constexpr void __cordl_internal_set_m_Shader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x66f79d4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_settings, addr 0x66f75d4, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*> get_settings();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScreenSpaceAmbientOcclusion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusion", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScreenSpaceAmbientOcclusion(ScreenSpaceAmbientOcclusion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScreenSpaceAmbientOcclusion", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScreenSpaceAmbientOcclusion(ScreenSpaceAmbientOcclusion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12899 };

  /// @brief Field k_AOBlueNoiseKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AOBlueNoiseKeyword{ u"_BLUE_NOISE" };

  /// @brief Field k_AOInterleavedGradientKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_AOInterleavedGradientKeyword{ u"_INTERLEAVED_GRADIENT" };

  /// @brief Field k_OrthographicCameraKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OrthographicCameraKeyword{ u"_ORTHOGRAPHIC" };

  /// @brief Field k_SampleCountHighKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SampleCountHighKeyword{ u"_SAMPLE_COUNT_HIGH" };

  /// @brief Field k_SampleCountLowKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SampleCountLowKeyword{ u"_SAMPLE_COUNT_LOW" };

  /// @brief Field k_SampleCountMediumKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SampleCountMediumKeyword{ u"_SAMPLE_COUNT_MEDIUM" };

  /// @brief Field k_SourceDepthHighKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SourceDepthHighKeyword{ u"_SOURCE_DEPTH_HIGH" };

  /// @brief Field k_SourceDepthLowKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SourceDepthLowKeyword{ u"_SOURCE_DEPTH_LOW" };

  /// @brief Field k_SourceDepthMediumKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SourceDepthMediumKeyword{ u"_SOURCE_DEPTH_MEDIUM" };

  /// @brief Field k_SourceDepthNormalsKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SourceDepthNormalsKeyword{ u"_SOURCE_DEPTH_NORMALS" };

  /// @brief Field m_Settings, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* ___m_Settings;

  /// @brief Field m_BlueNoise256Textures, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___m_BlueNoise256Textures;

  /// @brief Field m_Shader, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_Shader;

  /// @brief Field m_Material, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_Material;

  /// @brief Field m_SSAOPass, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionPass* ___m_SSAOPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_Settings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_BlueNoise256Textures) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_Shader) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_Material) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, ___m_SSAOPass) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusion");
