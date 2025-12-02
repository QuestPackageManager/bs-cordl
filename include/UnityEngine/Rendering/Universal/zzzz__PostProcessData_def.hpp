#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PostProcessData)
namespace UnityEngine::Rendering::Universal {
class PostProcessData_ShaderResources;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData_TextureResources;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData_ShaderResources;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData_TextureResources;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessData/ShaderResources
class CORDL_TYPE PostProcessData_ShaderResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field LensFlareDataDrivenPS, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_LensFlareDataDrivenPS, put = __cordl_internal_set_LensFlareDataDrivenPS)) ::UnityW<::UnityEngine::Shader> LensFlareDataDrivenPS;

  /// @brief Field LensFlareScreenSpacePS, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_LensFlareScreenSpacePS, put = __cordl_internal_set_LensFlareScreenSpacePS)) ::UnityW<::UnityEngine::Shader> LensFlareScreenSpacePS;

  /// @brief Field bloomPS, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomPS, put = __cordl_internal_set_bloomPS)) ::UnityW<::UnityEngine::Shader> bloomPS;

  /// @brief Field bokehDepthOfFieldPS, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehDepthOfFieldPS, put = __cordl_internal_set_bokehDepthOfFieldPS)) ::UnityW<::UnityEngine::Shader> bokehDepthOfFieldPS;

  /// @brief Field cameraMotionBlurPS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraMotionBlurPS, put = __cordl_internal_set_cameraMotionBlurPS)) ::UnityW<::UnityEngine::Shader> cameraMotionBlurPS;

  /// @brief Field easuPS, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_easuPS, put = __cordl_internal_set_easuPS)) ::UnityW<::UnityEngine::Shader> easuPS;

  /// @brief Field finalPostPassPS, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_finalPostPassPS, put = __cordl_internal_set_finalPostPassPS)) ::UnityW<::UnityEngine::Shader> finalPostPassPS;

  /// @brief Field gaussianDepthOfFieldPS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianDepthOfFieldPS, put = __cordl_internal_set_gaussianDepthOfFieldPS)) ::UnityW<::UnityEngine::Shader> gaussianDepthOfFieldPS;

  /// @brief Field lutBuilderHdrPS, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_lutBuilderHdrPS, put = __cordl_internal_set_lutBuilderHdrPS)) ::UnityW<::UnityEngine::Shader> lutBuilderHdrPS;

  /// @brief Field lutBuilderLdrPS, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_lutBuilderLdrPS, put = __cordl_internal_set_lutBuilderLdrPS)) ::UnityW<::UnityEngine::Shader> lutBuilderLdrPS;

  /// @brief Field paniniProjectionPS, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_paniniProjectionPS, put = __cordl_internal_set_paniniProjectionPS)) ::UnityW<::UnityEngine::Shader> paniniProjectionPS;

  /// @brief Field scalingSetupPS, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_scalingSetupPS, put = __cordl_internal_set_scalingSetupPS)) ::UnityW<::UnityEngine::Shader> scalingSetupPS;

  /// @brief Field stopNanPS, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stopNanPS, put = __cordl_internal_set_stopNanPS)) ::UnityW<::UnityEngine::Shader> stopNanPS;

  /// @brief Field subpixelMorphologicalAntialiasingPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subpixelMorphologicalAntialiasingPS, put = __cordl_internal_set_subpixelMorphologicalAntialiasingPS)) ::UnityW<::UnityEngine::Shader>
      subpixelMorphologicalAntialiasingPS;

  /// @brief Field temporalAntialiasingPS, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_temporalAntialiasingPS, put = __cordl_internal_set_temporalAntialiasingPS)) ::UnityW<::UnityEngine::Shader> temporalAntialiasingPS;

  /// @brief Field uberPostPS, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_uberPostPS, put = __cordl_internal_set_uberPostPS)) ::UnityW<::UnityEngine::Shader> uberPostPS;

  static inline ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* New_ctor();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_LensFlareDataDrivenPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_LensFlareDataDrivenPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_LensFlareScreenSpacePS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_LensFlareScreenSpacePS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_bloomPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_bloomPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_bokehDepthOfFieldPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_bokehDepthOfFieldPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_cameraMotionBlurPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_cameraMotionBlurPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_easuPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_easuPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_finalPostPassPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_finalPostPassPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_gaussianDepthOfFieldPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_gaussianDepthOfFieldPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_lutBuilderHdrPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_lutBuilderHdrPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_lutBuilderLdrPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_lutBuilderLdrPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_paniniProjectionPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_paniniProjectionPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_scalingSetupPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_scalingSetupPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_stopNanPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_stopNanPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_subpixelMorphologicalAntialiasingPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_subpixelMorphologicalAntialiasingPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_temporalAntialiasingPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_temporalAntialiasingPS();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_uberPostPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_uberPostPS();

  constexpr void __cordl_internal_set_LensFlareDataDrivenPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_LensFlareScreenSpacePS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_bloomPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_bokehDepthOfFieldPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_cameraMotionBlurPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_easuPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_finalPostPassPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_gaussianDepthOfFieldPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_lutBuilderHdrPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_lutBuilderLdrPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_paniniProjectionPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_scalingSetupPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_stopNanPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_subpixelMorphologicalAntialiasingPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_temporalAntialiasingPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_uberPostPS(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method .ctor, addr 0x661ce2c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessData_ShaderResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessData_ShaderResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessData_ShaderResources(PostProcessData_ShaderResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessData_ShaderResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessData_ShaderResources(PostProcessData_ShaderResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12544 };

  /// @brief Field stopNanPS, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___stopNanPS;

  /// @brief Field subpixelMorphologicalAntialiasingPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___subpixelMorphologicalAntialiasingPS;

  /// @brief Field gaussianDepthOfFieldPS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___gaussianDepthOfFieldPS;

  /// @brief Field bokehDepthOfFieldPS, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___bokehDepthOfFieldPS;

  /// @brief Field cameraMotionBlurPS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___cameraMotionBlurPS;

  /// @brief Field paniniProjectionPS, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___paniniProjectionPS;

  /// @brief Field lutBuilderLdrPS, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___lutBuilderLdrPS;

  /// @brief Field lutBuilderHdrPS, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___lutBuilderHdrPS;

  /// @brief Field bloomPS, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___bloomPS;

  /// @brief Field temporalAntialiasingPS, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___temporalAntialiasingPS;

  /// @brief Field LensFlareDataDrivenPS, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___LensFlareDataDrivenPS;

  /// @brief Field LensFlareScreenSpacePS, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___LensFlareScreenSpacePS;

  /// @brief Field scalingSetupPS, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___scalingSetupPS;

  /// @brief Field easuPS, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___easuPS;

  /// @brief Field uberPostPS, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___uberPostPS;

  /// @brief Field finalPostPassPS, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___finalPostPassPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___stopNanPS) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___subpixelMorphologicalAntialiasingPS) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___gaussianDepthOfFieldPS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___bokehDepthOfFieldPS) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___cameraMotionBlurPS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___paniniProjectionPS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___lutBuilderLdrPS) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___lutBuilderHdrPS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___bloomPS) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___temporalAntialiasingPS) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___LensFlareDataDrivenPS) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___LensFlareScreenSpacePS) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___scalingSetupPS) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___easuPS) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___uberPostPS) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, ___finalPostPassPS) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessData/TextureResources
class CORDL_TYPE PostProcessData_TextureResources : public ::System::Object {
public:
  // Declarations
  /// @brief Field blueNoise16LTex, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_blueNoise16LTex,
                      put = __cordl_internal_set_blueNoise16LTex)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>
      blueNoise16LTex;

  /// @brief Field filmGrainTex, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_filmGrainTex, put = __cordl_internal_set_filmGrainTex)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>
      filmGrainTex;

  /// @brief Field smaaAreaTex, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_smaaAreaTex, put = __cordl_internal_set_smaaAreaTex)) ::UnityW<::UnityEngine::Texture2D> smaaAreaTex;

  /// @brief Field smaaSearchTex, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_smaaSearchTex, put = __cordl_internal_set_smaaSearchTex)) ::UnityW<::UnityEngine::Texture2D> smaaSearchTex;

  static inline ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* New_ctor();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get_blueNoise16LTex() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& __cordl_internal_get_blueNoise16LTex();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> const& __cordl_internal_get_filmGrainTex() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*>& __cordl_internal_get_filmGrainTex();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_smaaAreaTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_smaaAreaTex();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_smaaSearchTex() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_smaaSearchTex();

  constexpr void __cordl_internal_set_blueNoise16LTex(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set_filmGrainTex(::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> value);

  constexpr void __cordl_internal_set_smaaAreaTex(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_smaaSearchTex(::UnityW<::UnityEngine::Texture2D> value);

  /// @brief Method .ctor, addr 0x661ce30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessData_TextureResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessData_TextureResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessData_TextureResources(PostProcessData_TextureResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessData_TextureResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessData_TextureResources(PostProcessData_TextureResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12545 };

  /// @brief Field blueNoise16LTex, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___blueNoise16LTex;

  /// @brief Field filmGrainTex, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Texture2D>, ::Array<::UnityW<::UnityEngine::Texture2D>>*> ___filmGrainTex;

  /// @brief Field smaaAreaTex, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___smaaAreaTex;

  /// @brief Field smaaSearchTex, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___smaaSearchTex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources, ___blueNoise16LTex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources, ___filmGrainTex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources, ___smaaAreaTex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources, ___smaaSearchTex) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessData_TextureResources, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessData
class CORDL_TYPE PostProcessData : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using ShaderResources = ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources;

  using TextureResources = ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources;

  /// @brief Field shaders, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_shaders, put = __cordl_internal_set_shaders)) ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* shaders;

  /// @brief Field textures, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_textures, put = __cordl_internal_set_textures)) ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* textures;

  static inline ::UnityEngine::Rendering::Universal::PostProcessData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* const& __cordl_internal_get_shaders() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*& __cordl_internal_get_shaders();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* const& __cordl_internal_get_textures() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*& __cordl_internal_get_textures();

  constexpr void __cordl_internal_set_shaders(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* value);

  constexpr void __cordl_internal_set_textures(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* value);

  /// @brief Method .ctor, addr 0x661ce24, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessData(PostProcessData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessData(PostProcessData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12546 };

  /// @brief Field shaders, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources* ___shaders;

  /// @brief Field textures, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessData_TextureResources* ___textures;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData, ___shaders) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessData, ___textures) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessData, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessData*, "UnityEngine.Rendering.Universal", "PostProcessData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessData_ShaderResources*, "UnityEngine.Rendering.Universal", "PostProcessData/ShaderResources");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessData_TextureResources*, "UnityEngine.Rendering.Universal", "PostProcessData/TextureResources");
