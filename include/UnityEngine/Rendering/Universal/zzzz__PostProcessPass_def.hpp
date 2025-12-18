#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/PostProcessPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TonemappingMode_def.hpp"
#include "UnityEngine/Rendering/zzzz__HDROutputUtils_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PostProcessPass)
namespace System {
template <typename T1, typename T2, typename T3, typename TResult> class Func_4;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
struct AntialiasingQuality;
}
namespace UnityEngine::Rendering::Universal {
class Bloom;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class ChromaticAberration;
}
namespace UnityEngine::Rendering::Universal {
class ColorAdjustments;
}
namespace UnityEngine::Rendering::Universal {
class ColorLookup;
}
namespace UnityEngine::Rendering::Universal {
class DepthOfField;
}
namespace UnityEngine::Rendering::Universal {
class FilmGrain;
}
namespace UnityEngine::Rendering::Universal {
class LensDistortion;
}
namespace UnityEngine::Rendering::Universal {
class MotionBlur;
}
namespace UnityEngine::Rendering::Universal {
class PaniniProjection;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessData;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessParams;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPass_BloomMaterialParams;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_BloomPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_DoFBokehPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_DoFGaussianPassData;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPass_FinalBlitSettings;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_LensFlarePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_LensFlareScreenSpacePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_MaterialLibrary;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_MotionBlurPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PaniniProjectionPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PostFXSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PostProcessingFinalBlitPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PostProcessingFinalFSRScalePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PostProcessingFinalSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_SMAAPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_SMAASetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_StopNaNsPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_UberPostPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_UberSetupBloomPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_UpdateCameraResolutionPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPass___c__DisplayClass89_0;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class ScreenSpaceLensFlare;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
class Tonemapping;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalPostProcessingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering::Universal {
class Vignette;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_HDRDisplayInformation;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_Operation;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
class Light;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class PostProcessPass;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_BloomPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_DoFBokehPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_DoFGaussianPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_LensFlarePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_LensFlareScreenSpacePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_MaterialLibrary;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_MotionBlurPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PaniniProjectionPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PostFXSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PostProcessingFinalBlitPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PostProcessingFinalFSRScalePassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_PostProcessingFinalSetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_SMAAPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_SMAASetupPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_StopNaNsPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_UberPostPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_UberSetupBloomPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass_UpdateCameraResolutionPassData;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPass_BloomMaterialParams;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPass_FinalBlitSettings;
}
namespace UnityEngine::Rendering::Universal {
struct PostProcessPass___c__DisplayClass89_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::PostProcessPass___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams);
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings);
MARK_VAL_T(::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/MaterialLibrary
class CORDL_TYPE PostProcessPass_MaterialLibrary : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloom, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_bloom, put = __cordl_internal_set_bloom)) ::UnityW<::UnityEngine::Material> bloom;

  /// @brief Field bloomUpsample, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomUpsample, put = __cordl_internal_set_bloomUpsample)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      bloomUpsample;

  /// @brief Field bokehDepthOfField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehDepthOfField, put = __cordl_internal_set_bokehDepthOfField)) ::UnityW<::UnityEngine::Material> bokehDepthOfField;

  /// @brief Field bokehDepthOfFieldCoC, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehDepthOfFieldCoC, put = __cordl_internal_set_bokehDepthOfFieldCoC)) ::UnityW<::UnityEngine::Material> bokehDepthOfFieldCoC;

  /// @brief Field cameraMotionBlur, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraMotionBlur, put = __cordl_internal_set_cameraMotionBlur)) ::UnityW<::UnityEngine::Material> cameraMotionBlur;

  /// @brief Field easu, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_easu, put = __cordl_internal_set_easu)) ::UnityW<::UnityEngine::Material> easu;

  /// @brief Field finalPass, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_finalPass, put = __cordl_internal_set_finalPass)) ::UnityW<::UnityEngine::Material> finalPass;

  /// @brief Field gaussianDepthOfField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianDepthOfField, put = __cordl_internal_set_gaussianDepthOfField)) ::UnityW<::UnityEngine::Material> gaussianDepthOfField;

  /// @brief Field gaussianDepthOfFieldCoC, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_gaussianDepthOfFieldCoC, put = __cordl_internal_set_gaussianDepthOfFieldCoC)) ::UnityW<::UnityEngine::Material> gaussianDepthOfFieldCoC;

  /// @brief Field lensFlareDataDriven, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareDataDriven, put = __cordl_internal_set_lensFlareDataDriven)) ::UnityW<::UnityEngine::Material> lensFlareDataDriven;

  /// @brief Field lensFlareScreenSpace, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareScreenSpace, put = __cordl_internal_set_lensFlareScreenSpace)) ::UnityW<::UnityEngine::Material> lensFlareScreenSpace;

  /// @brief Field paniniProjection, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_paniniProjection, put = __cordl_internal_set_paniniProjection)) ::UnityW<::UnityEngine::Material> paniniProjection;

  /// @brief Field scalingSetup, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_scalingSetup, put = __cordl_internal_set_scalingSetup)) ::UnityW<::UnityEngine::Material> scalingSetup;

  /// @brief Field stopNaN, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_stopNaN, put = __cordl_internal_set_stopNaN)) ::UnityW<::UnityEngine::Material> stopNaN;

  /// @brief Field subpixelMorphologicalAntialiasing, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_subpixelMorphologicalAntialiasing, put = __cordl_internal_set_subpixelMorphologicalAntialiasing)) ::UnityW<::UnityEngine::Material>
      subpixelMorphologicalAntialiasing;

  /// @brief Field temporalAntialiasing, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_temporalAntialiasing, put = __cordl_internal_set_temporalAntialiasing)) ::UnityW<::UnityEngine::Material> temporalAntialiasing;

  /// @brief Field uber, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_uber, put = __cordl_internal_set_uber)) ::UnityW<::UnityEngine::Material> uber;

  /// @brief Method Cleanup, addr 0x66d1700, size 0x170, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Load, addr 0x66e4258, size 0x188, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> Load(::UnityEngine::Shader* shader);

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary* New_ctor(::UnityEngine::Rendering::Universal::PostProcessData* data);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bloom() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bloom();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_bloomUpsample() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_bloomUpsample();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bokehDepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bokehDepthOfField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_bokehDepthOfFieldCoC() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_bokehDepthOfFieldCoC();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_cameraMotionBlur() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_cameraMotionBlur();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_easu() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_easu();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_finalPass() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_finalPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_gaussianDepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_gaussianDepthOfField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_gaussianDepthOfFieldCoC() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_gaussianDepthOfFieldCoC();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lensFlareDataDriven() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lensFlareDataDriven();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_lensFlareScreenSpace() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_lensFlareScreenSpace();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_paniniProjection() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_paniniProjection();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_scalingSetup() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_scalingSetup();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stopNaN() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stopNaN();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_subpixelMorphologicalAntialiasing() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_subpixelMorphologicalAntialiasing();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_temporalAntialiasing() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_temporalAntialiasing();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_uber() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_uber();

  constexpr void __cordl_internal_set_bloom(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_bloomUpsample(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  constexpr void __cordl_internal_set_bokehDepthOfField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_bokehDepthOfFieldCoC(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_cameraMotionBlur(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_easu(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_finalPass(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_gaussianDepthOfField(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_gaussianDepthOfFieldCoC(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_lensFlareDataDriven(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_lensFlareScreenSpace(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_paniniProjection(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_scalingSetup(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_subpixelMorphologicalAntialiasing(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_temporalAntialiasing(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_uber(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x66d1378, size 0x220, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::PostProcessData* data);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_MaterialLibrary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_MaterialLibrary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_MaterialLibrary(PostProcessPass_MaterialLibrary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_MaterialLibrary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_MaterialLibrary(PostProcessPass_MaterialLibrary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12821 };

  /// @brief Field stopNaN, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stopNaN;

  /// @brief Field subpixelMorphologicalAntialiasing, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___subpixelMorphologicalAntialiasing;

  /// @brief Field gaussianDepthOfField, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___gaussianDepthOfField;

  /// @brief Field gaussianDepthOfFieldCoC, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___gaussianDepthOfFieldCoC;

  /// @brief Field bokehDepthOfField, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bokehDepthOfField;

  /// @brief Field bokehDepthOfFieldCoC, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bokehDepthOfFieldCoC;

  /// @brief Field cameraMotionBlur, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___cameraMotionBlur;

  /// @brief Field paniniProjection, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___paniniProjection;

  /// @brief Field bloom, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___bloom;

  /// @brief Field bloomUpsample, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___bloomUpsample;

  /// @brief Field temporalAntialiasing, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___temporalAntialiasing;

  /// @brief Field scalingSetup, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___scalingSetup;

  /// @brief Field easu, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___easu;

  /// @brief Field uber, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___uber;

  /// @brief Field finalPass, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___finalPass;

  /// @brief Field lensFlareDataDriven, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___lensFlareDataDriven;

  /// @brief Field lensFlareScreenSpace, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___lensFlareScreenSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___stopNaN) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___subpixelMorphologicalAntialiasing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___gaussianDepthOfField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___gaussianDepthOfFieldCoC) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___bokehDepthOfField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___bokehDepthOfFieldCoC) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___cameraMotionBlur) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___paniniProjection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___bloom) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___bloomUpsample) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___temporalAntialiasing) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___scalingSetup) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___easu) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___uber) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___finalPass) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___lensFlareDataDriven) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, ___lensFlareScreenSpace) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary, 0x98>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/ShaderConstants
class CORDL_TYPE PostProcessPass_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _AreaTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AreaTexture, put = setStaticF__AreaTexture)) int32_t _AreaTexture;

  /// @brief Field _BlendTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BlendTexture, put = setStaticF__BlendTexture)) int32_t _BlendTexture;

  /// @brief Field _BloomMipDown, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__BloomMipDown, put = setStaticF__BloomMipDown)) ::ArrayW<int32_t, ::Array<int32_t>*> _BloomMipDown;

  /// @brief Field _BloomMipUp, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__BloomMipUp, put = setStaticF__BloomMipUp)) ::ArrayW<int32_t, ::Array<int32_t>*> _BloomMipUp;

  /// @brief Field _Bloom_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Bloom_Params, put = setStaticF__Bloom_Params)) int32_t _Bloom_Params;

  /// @brief Field _Bloom_Texture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Bloom_Texture, put = setStaticF__Bloom_Texture)) int32_t _Bloom_Texture;

  /// @brief Field _BokehConstants, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BokehConstants, put = setStaticF__BokehConstants)) int32_t _BokehConstants;

  /// @brief Field _BokehKernel, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__BokehKernel, put = setStaticF__BokehKernel)) int32_t _BokehKernel;

  /// @brief Field _Chroma_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Chroma_Params, put = setStaticF__Chroma_Params)) int32_t _Chroma_Params;

  /// @brief Field _CoCParams, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CoCParams, put = setStaticF__CoCParams)) int32_t _CoCParams;

  /// @brief Field _ColorTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ColorTexture, put = setStaticF__ColorTexture)) int32_t _ColorTexture;

  /// @brief Field _Distortion_Params1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Distortion_Params1, put = setStaticF__Distortion_Params1)) int32_t _Distortion_Params1;

  /// @brief Field _Distortion_Params2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Distortion_Params2, put = setStaticF__Distortion_Params2)) int32_t _Distortion_Params2;

  /// @brief Field _DofTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DofTexture, put = setStaticF__DofTexture)) int32_t _DofTexture;

  /// @brief Field _DownSampleScaleFactor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DownSampleScaleFactor, put = setStaticF__DownSampleScaleFactor)) int32_t _DownSampleScaleFactor;

  /// @brief Field _EdgeTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__EdgeTexture, put = setStaticF__EdgeTexture)) int32_t _EdgeTexture;

  /// @brief Field _FlareColorValue, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareColorValue, put = setStaticF__FlareColorValue)) int32_t _FlareColorValue;

  /// @brief Field _FlareData0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData0, put = setStaticF__FlareData0)) int32_t _FlareData0;

  /// @brief Field _FlareData1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData1, put = setStaticF__FlareData1)) int32_t _FlareData1;

  /// @brief Field _FlareData2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData2, put = setStaticF__FlareData2)) int32_t _FlareData2;

  /// @brief Field _FlareData3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData3, put = setStaticF__FlareData3)) int32_t _FlareData3;

  /// @brief Field _FlareData4, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData4, put = setStaticF__FlareData4)) int32_t _FlareData4;

  /// @brief Field _FlareData5, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareData5, put = setStaticF__FlareData5)) int32_t _FlareData5;

  /// @brief Field _FlareOcclusionIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareOcclusionIndex, put = setStaticF__FlareOcclusionIndex)) int32_t _FlareOcclusionIndex;

  /// @brief Field _FlareOcclusionRemapTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareOcclusionRemapTex, put = setStaticF__FlareOcclusionRemapTex)) int32_t _FlareOcclusionRemapTex;

  /// @brief Field _FlareOcclusionTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareOcclusionTex, put = setStaticF__FlareOcclusionTex)) int32_t _FlareOcclusionTex;

  /// @brief Field _FlareTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FlareTex, put = setStaticF__FlareTex)) int32_t _FlareTex;

  /// @brief Field _FullCoCTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FullCoCTexture, put = setStaticF__FullCoCTexture)) int32_t _FullCoCTexture;

  /// @brief Field _FullscreenProjMat, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__FullscreenProjMat, put = setStaticF__FullscreenProjMat)) int32_t _FullscreenProjMat;

  /// @brief Field _HalfCoCTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__HalfCoCTexture, put = setStaticF__HalfCoCTexture)) int32_t _HalfCoCTexture;

  /// @brief Field _InternalLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__InternalLut, put = setStaticF__InternalLut)) int32_t _InternalLut;

  /// @brief Field _LensDirt_Intensity, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensDirt_Intensity, put = setStaticF__LensDirt_Intensity)) int32_t _LensDirt_Intensity;

  /// @brief Field _LensDirt_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensDirt_Params, put = setStaticF__LensDirt_Params)) int32_t _LensDirt_Params;

  /// @brief Field _LensDirt_Texture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__LensDirt_Texture, put = setStaticF__LensDirt_Texture)) int32_t _LensDirt_Texture;

  /// @brief Field _Lut_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Lut_Params, put = setStaticF__Lut_Params)) int32_t _Lut_Params;

  /// @brief Field _Metrics, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Metrics, put = setStaticF__Metrics)) int32_t _Metrics;

  /// @brief Field _Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Params, put = setStaticF__Params)) int32_t _Params;

  /// @brief Field _PingTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__PingTexture, put = setStaticF__PingTexture)) int32_t _PingTexture;

  /// @brief Field _PongTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__PongTexture, put = setStaticF__PongTexture)) int32_t _PongTexture;

  /// @brief Field _SearchTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SearchTexture, put = setStaticF__SearchTexture)) int32_t _SearchTexture;

  /// @brief Field _SourceTexLowMip, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SourceTexLowMip, put = setStaticF__SourceTexLowMip)) int32_t _SourceTexLowMip;

  /// @brief Field _StencilMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StencilMask, put = setStaticF__StencilMask)) int32_t _StencilMask;

  /// @brief Field _StencilRef, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__StencilRef, put = setStaticF__StencilRef)) int32_t _StencilRef;

  /// @brief Field _TempTarget, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TempTarget, put = setStaticF__TempTarget)) int32_t _TempTarget;

  /// @brief Field _TempTarget2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__TempTarget2, put = setStaticF__TempTarget2)) int32_t _TempTarget2;

  /// @brief Field _UserLut, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UserLut, put = setStaticF__UserLut)) int32_t _UserLut;

  /// @brief Field _UserLut_Params, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__UserLut_Params, put = setStaticF__UserLut_Params)) int32_t _UserLut_Params;

  /// @brief Field _Vignette_Params1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_Params1, put = setStaticF__Vignette_Params1)) int32_t _Vignette_Params1;

  /// @brief Field _Vignette_Params2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_Params2, put = setStaticF__Vignette_Params2)) int32_t _Vignette_Params2;

  /// @brief Field _Vignette_ParamsXR, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__Vignette_ParamsXR, put = setStaticF__Vignette_ParamsXR)) int32_t _Vignette_ParamsXR;

  static inline int32_t getStaticF__AreaTexture();

  static inline int32_t getStaticF__BlendTexture();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__BloomMipDown();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF__BloomMipUp();

  static inline int32_t getStaticF__Bloom_Params();

  static inline int32_t getStaticF__Bloom_Texture();

  static inline int32_t getStaticF__BokehConstants();

  static inline int32_t getStaticF__BokehKernel();

  static inline int32_t getStaticF__Chroma_Params();

  static inline int32_t getStaticF__CoCParams();

  static inline int32_t getStaticF__ColorTexture();

  static inline int32_t getStaticF__Distortion_Params1();

  static inline int32_t getStaticF__Distortion_Params2();

  static inline int32_t getStaticF__DofTexture();

  static inline int32_t getStaticF__DownSampleScaleFactor();

  static inline int32_t getStaticF__EdgeTexture();

  static inline int32_t getStaticF__FlareColorValue();

  static inline int32_t getStaticF__FlareData0();

  static inline int32_t getStaticF__FlareData1();

  static inline int32_t getStaticF__FlareData2();

  static inline int32_t getStaticF__FlareData3();

  static inline int32_t getStaticF__FlareData4();

  static inline int32_t getStaticF__FlareData5();

  static inline int32_t getStaticF__FlareOcclusionIndex();

  static inline int32_t getStaticF__FlareOcclusionRemapTex();

  static inline int32_t getStaticF__FlareOcclusionTex();

  static inline int32_t getStaticF__FlareTex();

  static inline int32_t getStaticF__FullCoCTexture();

  static inline int32_t getStaticF__FullscreenProjMat();

  static inline int32_t getStaticF__HalfCoCTexture();

  static inline int32_t getStaticF__InternalLut();

  static inline int32_t getStaticF__LensDirt_Intensity();

  static inline int32_t getStaticF__LensDirt_Params();

  static inline int32_t getStaticF__LensDirt_Texture();

  static inline int32_t getStaticF__Lut_Params();

  static inline int32_t getStaticF__Metrics();

  static inline int32_t getStaticF__Params();

  static inline int32_t getStaticF__PingTexture();

  static inline int32_t getStaticF__PongTexture();

  static inline int32_t getStaticF__SearchTexture();

  static inline int32_t getStaticF__SourceTexLowMip();

  static inline int32_t getStaticF__StencilMask();

  static inline int32_t getStaticF__StencilRef();

  static inline int32_t getStaticF__TempTarget();

  static inline int32_t getStaticF__TempTarget2();

  static inline int32_t getStaticF__UserLut();

  static inline int32_t getStaticF__UserLut_Params();

  static inline int32_t getStaticF__Vignette_Params1();

  static inline int32_t getStaticF__Vignette_Params2();

  static inline int32_t getStaticF__Vignette_ParamsXR();

  static inline void setStaticF__AreaTexture(int32_t value);

  static inline void setStaticF__BlendTexture(int32_t value);

  static inline void setStaticF__BloomMipDown(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF__BloomMipUp(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF__Bloom_Params(int32_t value);

  static inline void setStaticF__Bloom_Texture(int32_t value);

  static inline void setStaticF__BokehConstants(int32_t value);

  static inline void setStaticF__BokehKernel(int32_t value);

  static inline void setStaticF__Chroma_Params(int32_t value);

  static inline void setStaticF__CoCParams(int32_t value);

  static inline void setStaticF__ColorTexture(int32_t value);

  static inline void setStaticF__Distortion_Params1(int32_t value);

  static inline void setStaticF__Distortion_Params2(int32_t value);

  static inline void setStaticF__DofTexture(int32_t value);

  static inline void setStaticF__DownSampleScaleFactor(int32_t value);

  static inline void setStaticF__EdgeTexture(int32_t value);

  static inline void setStaticF__FlareColorValue(int32_t value);

  static inline void setStaticF__FlareData0(int32_t value);

  static inline void setStaticF__FlareData1(int32_t value);

  static inline void setStaticF__FlareData2(int32_t value);

  static inline void setStaticF__FlareData3(int32_t value);

  static inline void setStaticF__FlareData4(int32_t value);

  static inline void setStaticF__FlareData5(int32_t value);

  static inline void setStaticF__FlareOcclusionIndex(int32_t value);

  static inline void setStaticF__FlareOcclusionRemapTex(int32_t value);

  static inline void setStaticF__FlareOcclusionTex(int32_t value);

  static inline void setStaticF__FlareTex(int32_t value);

  static inline void setStaticF__FullCoCTexture(int32_t value);

  static inline void setStaticF__FullscreenProjMat(int32_t value);

  static inline void setStaticF__HalfCoCTexture(int32_t value);

  static inline void setStaticF__InternalLut(int32_t value);

  static inline void setStaticF__LensDirt_Intensity(int32_t value);

  static inline void setStaticF__LensDirt_Params(int32_t value);

  static inline void setStaticF__LensDirt_Texture(int32_t value);

  static inline void setStaticF__Lut_Params(int32_t value);

  static inline void setStaticF__Metrics(int32_t value);

  static inline void setStaticF__Params(int32_t value);

  static inline void setStaticF__PingTexture(int32_t value);

  static inline void setStaticF__PongTexture(int32_t value);

  static inline void setStaticF__SearchTexture(int32_t value);

  static inline void setStaticF__SourceTexLowMip(int32_t value);

  static inline void setStaticF__StencilMask(int32_t value);

  static inline void setStaticF__StencilRef(int32_t value);

  static inline void setStaticF__TempTarget(int32_t value);

  static inline void setStaticF__TempTarget2(int32_t value);

  static inline void setStaticF__UserLut(int32_t value);

  static inline void setStaticF__UserLut_Params(int32_t value);

  static inline void setStaticF__Vignette_Params1(int32_t value);

  static inline void setStaticF__Vignette_Params2(int32_t value);

  static inline void setStaticF__Vignette_ParamsXR(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_ShaderConstants(PostProcessPass_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_ShaderConstants(PostProcessPass_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12822 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Vector2Int
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/UpdateCameraResolutionPassData
class CORDL_TYPE PostProcessPass_UpdateCameraResolutionPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field newCameraTargetSize, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_newCameraTargetSize, put = __cordl_internal_set_newCameraTargetSize)) ::UnityEngine::Vector2Int newCameraTargetSize;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData* New_ctor();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_newCameraTargetSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_newCameraTargetSize();

  constexpr void __cordl_internal_set_newCameraTargetSize(::UnityEngine::Vector2Int value);

  /// @brief Method .ctor, addr 0x66e4ddc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_UpdateCameraResolutionPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_UpdateCameraResolutionPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_UpdateCameraResolutionPassData(PostProcessPass_UpdateCameraResolutionPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_UpdateCameraResolutionPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_UpdateCameraResolutionPassData(PostProcessPass_UpdateCameraResolutionPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12823 };

  /// @brief Field newCameraTargetSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___newCameraTargetSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData, ___newCameraTargetSize) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/StopNaNsPassData
class CORDL_TYPE PostProcessPass_StopNaNsPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field stopNaN, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_stopNaN, put = __cordl_internal_set_stopNaN)) ::UnityW<::UnityEngine::Material> stopNaN;

  /// @brief Field stopNaNTarget, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_stopNaNTarget, put = __cordl_internal_set_stopNaNTarget)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle stopNaNTarget;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_stopNaN() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_stopNaN();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_stopNaNTarget() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_stopNaNTarget();

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_stopNaN(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_stopNaNTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e4de0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_StopNaNsPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_StopNaNsPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_StopNaNsPassData(PostProcessPass_StopNaNsPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_StopNaNsPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_StopNaNsPassData(PostProcessPass_StopNaNsPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12824 };

  /// @brief Field stopNaNTarget, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___stopNaNTarget;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field stopNaN, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___stopNaN;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData, ___stopNaNTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData, ___stopNaN) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.AntialiasingQuality, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/SMAASetupPassData
class CORDL_TYPE PostProcessPass_SMAASetupPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field antialiasingQuality, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_antialiasingQuality, put = __cordl_internal_set_antialiasingQuality)) ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality;

  /// @brief Field areaTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_areaTexture, put = __cordl_internal_set_areaTexture)) ::UnityW<::UnityEngine::Texture2D> areaTexture;

  /// @brief Field material, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field metrics, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_metrics, put = __cordl_internal_set_metrics)) ::UnityEngine::Vector4 metrics;

  /// @brief Field searchTexture, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_searchTexture, put = __cordl_internal_set_searchTexture)) ::UnityW<::UnityEngine::Texture2D> searchTexture;

  /// @brief Field stencilMask, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilMask, put = __cordl_internal_set_stencilMask)) float_t stencilMask;

  /// @brief Field stencilRef, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_stencilRef, put = __cordl_internal_set_stencilRef)) float_t stencilRef;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const& __cordl_internal_get_antialiasingQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& __cordl_internal_get_antialiasingQuality();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_areaTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_areaTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_metrics() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_metrics();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_searchTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_searchTexture();

  constexpr float_t const& __cordl_internal_get_stencilMask() const;

  constexpr float_t& __cordl_internal_get_stencilMask();

  constexpr float_t const& __cordl_internal_get_stencilRef() const;

  constexpr float_t& __cordl_internal_get_stencilRef();

  constexpr void __cordl_internal_set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value);

  constexpr void __cordl_internal_set_areaTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_metrics(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_searchTexture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_stencilMask(float_t value);

  constexpr void __cordl_internal_set_stencilRef(float_t value);

  /// @brief Method .ctor, addr 0x66e4de4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_SMAASetupPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_SMAASetupPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_SMAASetupPassData(PostProcessPass_SMAASetupPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_SMAASetupPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_SMAASetupPassData(PostProcessPass_SMAASetupPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12825 };

  /// @brief Field metrics, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___metrics;

  /// @brief Field areaTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___areaTexture;

  /// @brief Field searchTexture, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___searchTexture;

  /// @brief Field stencilRef, offset: 0x30, size: 0x4, def value: None
  float_t ___stencilRef;

  /// @brief Field stencilMask, offset: 0x34, size: 0x4, def value: None
  float_t ___stencilMask;

  /// @brief Field antialiasingQuality, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::AntialiasingQuality ___antialiasingQuality;

  /// @brief Field material, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData, ___metrics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData, ___areaTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData, ___searchTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData, ___stencilRef) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData, ___stencilMask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData, ___antialiasingQuality) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData, ___material) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/SMAAPassData
class CORDL_TYPE PostProcessPass_SMAAPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field blendTexture, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_blendTexture, put = __cordl_internal_set_blendTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle blendTexture;

  /// @brief Field depthStencilTexture, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_depthStencilTexture, put = __cordl_internal_set_depthStencilTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthStencilTexture;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field material, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_blendTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_blendTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthStencilTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthStencilTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_blendTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_depthStencilTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e4de8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_SMAAPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_SMAAPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_SMAAPassData(PostProcessPass_SMAAPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_SMAAPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_SMAAPassData(PostProcessPass_SMAAPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12826 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field depthStencilTexture, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthStencilTexture;

  /// @brief Field blendTexture, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___blendTexture;

  /// @brief Field material, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData, ___depthStencilTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData, ___blendTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData, ___material) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/UberSetupBloomPassData
class CORDL_TYPE PostProcessPass_UberSetupBloomPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloomParams, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_bloomParams, put = __cordl_internal_set_bloomParams)) ::UnityEngine::Vector4 bloomParams;

  /// @brief Field bloomTexture, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_bloomTexture, put = __cordl_internal_set_bloomTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle bloomTexture;

  /// @brief Field dirtIntensity, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_dirtIntensity, put = __cordl_internal_set_dirtIntensity)) float_t dirtIntensity;

  /// @brief Field dirtScaleOffset, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_dirtScaleOffset, put = __cordl_internal_set_dirtScaleOffset)) ::UnityEngine::Vector4 dirtScaleOffset;

  /// @brief Field dirtTexture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_dirtTexture, put = __cordl_internal_set_dirtTexture)) ::UnityW<::UnityEngine::Texture> dirtTexture;

  /// @brief Field highQualityFilteringValue, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_highQualityFilteringValue, put = __cordl_internal_set_highQualityFilteringValue)) bool highQualityFilteringValue;

  /// @brief Field uberMaterial, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_uberMaterial, put = __cordl_internal_set_uberMaterial)) ::UnityW<::UnityEngine::Material> uberMaterial;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData* New_ctor();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_bloomParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_bloomParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_bloomTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_bloomTexture();

  constexpr float_t const& __cordl_internal_get_dirtIntensity() const;

  constexpr float_t& __cordl_internal_get_dirtIntensity();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_dirtScaleOffset() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_dirtScaleOffset();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_dirtTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_dirtTexture();

  constexpr bool const& __cordl_internal_get_highQualityFilteringValue() const;

  constexpr bool& __cordl_internal_get_highQualityFilteringValue();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_uberMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_uberMaterial();

  constexpr void __cordl_internal_set_bloomParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_bloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_dirtIntensity(float_t value);

  constexpr void __cordl_internal_set_dirtScaleOffset(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_dirtTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_highQualityFilteringValue(bool value);

  constexpr void __cordl_internal_set_uberMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x66e4dec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_UberSetupBloomPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_UberSetupBloomPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_UberSetupBloomPassData(PostProcessPass_UberSetupBloomPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_UberSetupBloomPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_UberSetupBloomPassData(PostProcessPass_UberSetupBloomPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12827 };

  /// @brief Field bloomParams, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___bloomParams;

  /// @brief Field dirtScaleOffset, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___dirtScaleOffset;

  /// @brief Field dirtIntensity, offset: 0x30, size: 0x4, def value: None
  float_t ___dirtIntensity;

  /// @brief Field dirtTexture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___dirtTexture;

  /// @brief Field highQualityFilteringValue, offset: 0x40, size: 0x1, def value: None
  bool ___highQualityFilteringValue;

  /// @brief Field bloomTexture, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___bloomTexture;

  /// @brief Field uberMaterial, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___uberMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData, ___bloomParams) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData, ___dirtScaleOffset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData, ___dirtIntensity) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData, ___dirtTexture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData, ___highQualityFilteringValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData, ___bloomTexture) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData, ___uberMaterial) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/BloomPassData
class CORDL_TYPE PostProcessPass_BloomPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bloomMipDown, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomMipDown,
                      put =
                          __cordl_internal_set_bloomMipDown)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      bloomMipDown;

  /// @brief Field bloomMipUp, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_bloomMipUp,
                      put = __cordl_internal_set_bloomMipUp)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      bloomMipUp;

  /// @brief Field material, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field mipCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mipCount, put = __cordl_internal_set_mipCount)) int32_t mipCount;

  /// @brief Field sourceTexture, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field upsampleMaterials, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_upsampleMaterials,
                      put = __cordl_internal_set_upsampleMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>
      upsampleMaterials;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const& __cordl_internal_get_bloomMipDown() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get_bloomMipDown();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const& __cordl_internal_get_bloomMipUp() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get_bloomMipUp();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr int32_t const& __cordl_internal_get_mipCount() const;

  constexpr int32_t& __cordl_internal_get_mipCount();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& __cordl_internal_get_upsampleMaterials() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& __cordl_internal_get_upsampleMaterials();

  constexpr void __cordl_internal_set_bloomMipDown(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set_bloomMipUp(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_mipCount(int32_t value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_upsampleMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value);

  /// @brief Method .ctor, addr 0x66e4df0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_BloomPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_BloomPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_BloomPassData(PostProcessPass_BloomPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_BloomPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_BloomPassData(PostProcessPass_BloomPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12828 };

  /// @brief Field mipCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___mipCount;

  /// @brief Field material, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field upsampleMaterials, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> ___upsampleMaterials;

  /// @brief Field sourceTexture, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field bloomMipUp, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ___bloomMipUp;

  /// @brief Field bloomMipDown, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ___bloomMipDown;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData, ___mipCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData, ___material) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData, ___upsampleMaterials) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData, ___sourceTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData, ___bloomMipUp) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData, ___bloomMipDown) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/BloomMaterialParams
struct CORDL_TYPE PostProcessPass_BloomMaterialParams {
public:
  // Declarations
  /// @brief Method Equals, addr 0x66dc510, size 0x68, virtual false, abstract: false, final false
  inline bool Equals(::ByRef<::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams> other);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_BloomMaterialParams();

  // Ctor Parameters [CppParam { name: "parameters", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "highQualityFiltering", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "enableAlphaOutput", ty: "bool", modifiers: "", def_value: None }]
  constexpr PostProcessPass_BloomMaterialParams(::UnityEngine::Vector4 parameters, bool highQualityFiltering, bool enableAlphaOutput) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12829 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field parameters, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Vector4 parameters;

  /// @brief Field highQualityFiltering, offset: 0x10, size: 0x1, def value: None
  bool highQualityFiltering;

  /// @brief Field enableAlphaOutput, offset: 0x11, size: 0x1, def value: None
  bool enableAlphaOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams, parameters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams, highQualityFiltering) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams, enableAlphaOutput) == 0x11, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams, 0x14>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.RenderingData, UnityEngine.Vector3
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/DoFGaussianPassData
class CORDL_TYPE PostProcessPass_DoFGaussianPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cocParams, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_cocParams, put = __cordl_internal_set_cocParams)) ::UnityEngine::Vector3 cocParams;

  /// @brief Field depthTexture, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_depthTexture, put = __cordl_internal_set_depthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture;

  /// @brief Field destination, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field downsample, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_downsample, put = __cordl_internal_set_downsample)) int32_t downsample;

  /// @brief Field fullCoCTexture, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_fullCoCTexture, put = __cordl_internal_set_fullCoCTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle fullCoCTexture;

  /// @brief Field halfCoCTexture, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get_halfCoCTexture, put = __cordl_internal_set_halfCoCTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle halfCoCTexture;

  /// @brief Field highQualitySamplingValue, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_highQualitySamplingValue, put = __cordl_internal_set_highQualitySamplingValue)) bool highQualitySamplingValue;

  /// @brief Field material, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialCoC, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_materialCoC, put = __cordl_internal_set_materialCoC)) ::UnityW<::UnityEngine::Material> materialCoC;

  /// @brief Field multipleRenderTargets, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_multipleRenderTargets,
                      put = __cordl_internal_set_multipleRenderTargets)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>
      multipleRenderTargets;

  /// @brief Field pingTexture, offset 0xa0, size 0x10
  __declspec(property(get = __cordl_internal_get_pingTexture, put = __cordl_internal_set_pingTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle pingTexture;

  /// @brief Field pongTexture, offset 0xb0, size 0x10
  __declspec(property(get = __cordl_internal_get_pongTexture, put = __cordl_internal_set_pongTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle pongTexture;

  /// @brief Field renderingData, offset 0x18, size 0x28
  __declspec(property(get = __cordl_internal_get_renderingData, put = __cordl_internal_set_renderingData)) ::UnityEngine::Rendering::Universal::RenderingData renderingData;

  /// @brief Field sourceTexture, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData* New_ctor();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cocParams() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_cocParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr int32_t const& __cordl_internal_get_downsample() const;

  constexpr int32_t& __cordl_internal_get_downsample();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_fullCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_fullCoCTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_halfCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_halfCoCTexture();

  constexpr bool const& __cordl_internal_get_highQualitySamplingValue() const;

  constexpr bool& __cordl_internal_get_highQualitySamplingValue();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_materialCoC() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_materialCoC();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const& __cordl_internal_get_multipleRenderTargets() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>& __cordl_internal_get_multipleRenderTargets();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_pingTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_pingTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_pongTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_pongTexture();

  constexpr ::UnityEngine::Rendering::Universal::RenderingData const& __cordl_internal_get_renderingData() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingData& __cordl_internal_get_renderingData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_cocParams(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_depthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_downsample(int32_t value);

  constexpr void __cordl_internal_set_fullCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_halfCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_highQualitySamplingValue(bool value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_materialCoC(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_multipleRenderTargets(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void __cordl_internal_set_pingTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_pongTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::RenderingData value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e4df4, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_DoFGaussianPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_DoFGaussianPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_DoFGaussianPassData(PostProcessPass_DoFGaussianPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_DoFGaussianPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_DoFGaussianPassData(PostProcessPass_DoFGaussianPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12830 };

  /// @brief Field downsample, offset: 0x10, size: 0x4, def value: None
  int32_t ___downsample;

  /// @brief Field renderingData, offset: 0x18, size: 0x28, def value: None
  ::UnityEngine::Rendering::Universal::RenderingData ___renderingData;

  /// @brief Field cocParams, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___cocParams;

  /// @brief Field highQualitySamplingValue, offset: 0x4c, size: 0x1, def value: None
  bool ___highQualitySamplingValue;

  /// @brief Field sourceTexture, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field depthTexture, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthTexture;

  /// @brief Field material, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field materialCoC, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___materialCoC;

  /// @brief Field halfCoCTexture, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___halfCoCTexture;

  /// @brief Field fullCoCTexture, offset: 0x90, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___fullCoCTexture;

  /// @brief Field pingTexture, offset: 0xa0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___pingTexture;

  /// @brief Field pongTexture, offset: 0xb0, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___pongTexture;

  /// @brief Field multipleRenderTargets, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ___multipleRenderTargets;

  /// @brief Field destination, offset: 0xc8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___downsample) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___renderingData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___cocParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___highQualitySamplingValue) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___sourceTexture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___depthTexture) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___material) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___materialCoC) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___halfCoCTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___fullCoCTexture) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___pingTexture) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___pongTexture) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___multipleRenderTargets) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, ___destination) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/DoFBokehPassData
class CORDL_TYPE PostProcessPass_DoFBokehPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field bokehKernel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bokehKernel, put = __cordl_internal_set_bokehKernel)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> bokehKernel;

  /// @brief Field cocParams, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_cocParams, put = __cordl_internal_set_cocParams)) ::UnityEngine::Vector4 cocParams;

  /// @brief Field depthTexture, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_depthTexture, put = __cordl_internal_set_depthTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture;

  /// @brief Field destination, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field downSample, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_downSample, put = __cordl_internal_set_downSample)) int32_t downSample;

  /// @brief Field fullCoCTexture, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_fullCoCTexture, put = __cordl_internal_set_fullCoCTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle fullCoCTexture;

  /// @brief Field halfCoCTexture, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_halfCoCTexture, put = __cordl_internal_set_halfCoCTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle halfCoCTexture;

  /// @brief Field material, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field materialCoC, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_materialCoC, put = __cordl_internal_set_materialCoC)) ::UnityW<::UnityEngine::Material> materialCoC;

  /// @brief Field pingTexture, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get_pingTexture, put = __cordl_internal_set_pingTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle pingTexture;

  /// @brief Field pongTexture, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get_pongTexture, put = __cordl_internal_set_pongTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle pongTexture;

  /// @brief Field sourceTexture, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field useFastSRGBLinearConversion, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_useFastSRGBLinearConversion, put = __cordl_internal_set_useFastSRGBLinearConversion)) bool useFastSRGBLinearConversion;

  /// @brief Field uvMargin, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_uvMargin, put = __cordl_internal_set_uvMargin)) float_t uvMargin;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData* New_ctor();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_bokehKernel() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_bokehKernel();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_cocParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_cocParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr int32_t const& __cordl_internal_get_downSample() const;

  constexpr int32_t& __cordl_internal_get_downSample();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_fullCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_fullCoCTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_halfCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_halfCoCTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_materialCoC() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_materialCoC();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_pingTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_pingTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_pongTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_pongTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr bool const& __cordl_internal_get_useFastSRGBLinearConversion() const;

  constexpr bool& __cordl_internal_get_useFastSRGBLinearConversion();

  constexpr float_t const& __cordl_internal_get_uvMargin() const;

  constexpr float_t& __cordl_internal_get_uvMargin();

  constexpr void __cordl_internal_set_bokehKernel(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_cocParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_depthTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_downSample(int32_t value);

  constexpr void __cordl_internal_set_fullCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_halfCoCTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_materialCoC(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_pingTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_pongTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_useFastSRGBLinearConversion(bool value);

  constexpr void __cordl_internal_set_uvMargin(float_t value);

  /// @brief Method .ctor, addr 0x66e4e48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_DoFBokehPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_DoFBokehPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_DoFBokehPassData(PostProcessPass_DoFBokehPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_DoFBokehPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_DoFBokehPassData(PostProcessPass_DoFBokehPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12831 };

  /// @brief Field bokehKernel, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___bokehKernel;

  /// @brief Field downSample, offset: 0x18, size: 0x4, def value: None
  int32_t ___downSample;

  /// @brief Field uvMargin, offset: 0x1c, size: 0x4, def value: None
  float_t ___uvMargin;

  /// @brief Field cocParams, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___cocParams;

  /// @brief Field useFastSRGBLinearConversion, offset: 0x30, size: 0x1, def value: None
  bool ___useFastSRGBLinearConversion;

  /// @brief Field sourceTexture, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field depthTexture, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthTexture;

  /// @brief Field material, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field materialCoC, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___materialCoC;

  /// @brief Field halfCoCTexture, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___halfCoCTexture;

  /// @brief Field fullCoCTexture, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___fullCoCTexture;

  /// @brief Field pingTexture, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___pingTexture;

  /// @brief Field pongTexture, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___pongTexture;

  /// @brief Field destination, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___bokehKernel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___downSample) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___uvMargin) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___cocParams) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___useFastSRGBLinearConversion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___sourceTexture) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___depthTexture) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___material) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___materialCoC) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___halfCoCTexture) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___fullCoCTexture) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___pingTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___pongTexture) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, ___destination) == 0xa8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/PaniniProjectionPassData
class CORDL_TYPE PostProcessPass_PaniniProjectionPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field isPaniniGeneric, offset 0x80, size 0x1
  __declspec(property(get = __cordl_internal_get_isPaniniGeneric, put = __cordl_internal_set_isPaniniGeneric)) bool isPaniniGeneric;

  /// @brief Field material, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field paniniParams, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_paniniParams, put = __cordl_internal_set_paniniParams)) ::UnityEngine::Vector4 paniniParams;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field sourceTextureDesc, offset 0x30, size 0x34
  __declspec(property(get = __cordl_internal_get_sourceTextureDesc, put = __cordl_internal_set_sourceTextureDesc)) ::UnityEngine::RenderTextureDescriptor sourceTextureDesc;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr bool const& __cordl_internal_get_isPaniniGeneric() const;

  constexpr bool& __cordl_internal_get_isPaniniGeneric();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_paniniParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_paniniParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_sourceTextureDesc() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_sourceTextureDesc();

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_isPaniniGeneric(bool value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_paniniParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_sourceTextureDesc(::UnityEngine::RenderTextureDescriptor value);

  /// @brief Method .ctor, addr 0x66e4e4c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_PaniniProjectionPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PaniniProjectionPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_PaniniProjectionPassData(PostProcessPass_PaniniProjectionPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PaniniProjectionPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_PaniniProjectionPassData(PostProcessPass_PaniniProjectionPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12832 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field sourceTextureDesc, offset: 0x30, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___sourceTextureDesc;

  /// @brief Field material, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field paniniParams, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___paniniParams;

  /// @brief Field isPaniniGeneric, offset: 0x80, size: 0x1, def value: None
  bool ___isPaniniGeneric;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData, ___sourceTextureDesc) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData, ___material) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData, ___paniniParams) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData, ___isPaniniGeneric) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/MotionBlurPassData
class CORDL_TYPE PostProcessPass_MotionBlurPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field camera, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field clamp, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_clamp, put = __cordl_internal_set_clamp)) float_t clamp;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field enableAlphaOutput, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_enableAlphaOutput, put = __cordl_internal_set_enableAlphaOutput)) bool enableAlphaOutput;

  /// @brief Field intensity, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_intensity, put = __cordl_internal_set_intensity)) float_t intensity;

  /// @brief Field material, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field motionVectors, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_motionVectors, put = __cordl_internal_set_motionVectors)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle motionVectors;

  /// @brief Field passIndex, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndex, put = __cordl_internal_set_passIndex)) int32_t passIndex;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field xr, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr float_t const& __cordl_internal_get_clamp() const;

  constexpr float_t& __cordl_internal_get_clamp();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr bool const& __cordl_internal_get_enableAlphaOutput() const;

  constexpr bool& __cordl_internal_get_enableAlphaOutput();

  constexpr float_t const& __cordl_internal_get_intensity() const;

  constexpr float_t& __cordl_internal_get_intensity();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_motionVectors() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_motionVectors();

  constexpr int32_t const& __cordl_internal_get_passIndex() const;

  constexpr int32_t& __cordl_internal_get_passIndex();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_clamp(float_t value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_enableAlphaOutput(bool value);

  constexpr void __cordl_internal_set_intensity(float_t value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_motionVectors(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_passIndex(int32_t value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x66e4e50, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_MotionBlurPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_MotionBlurPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_MotionBlurPassData(PostProcessPass_MotionBlurPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_MotionBlurPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_MotionBlurPassData(PostProcessPass_MotionBlurPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12833 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field motionVectors, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___motionVectors;

  /// @brief Field material, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field passIndex, offset: 0x48, size: 0x4, def value: None
  int32_t ___passIndex;

  /// @brief Field camera, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field xr, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  /// @brief Field intensity, offset: 0x60, size: 0x4, def value: None
  float_t ___intensity;

  /// @brief Field clamp, offset: 0x64, size: 0x4, def value: None
  float_t ___clamp;

  /// @brief Field enableAlphaOutput, offset: 0x68, size: 0x1, def value: None
  bool ___enableAlphaOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___motionVectors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___material) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___passIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___camera) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___xr) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___intensity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___clamp) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, ___enableAlphaOutput) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rect, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/LensFlarePassData
class CORDL_TYPE PostProcessPass_LensFlarePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field height, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_height, put = __cordl_internal_set_height)) float_t height;

  /// @brief Field material, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field paniniCropToFit, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_paniniCropToFit, put = __cordl_internal_set_paniniCropToFit)) float_t paniniCropToFit;

  /// @brief Field paniniDistance, offset 0x78, size 0x4
  __declspec(property(get = __cordl_internal_get_paniniDistance, put = __cordl_internal_set_paniniDistance)) float_t paniniDistance;

  /// @brief Field sourceDescriptor, offset 0x20, size 0x34
  __declspec(property(get = __cordl_internal_get_sourceDescriptor, put = __cordl_internal_set_sourceDescriptor)) ::UnityEngine::RenderTextureDescriptor sourceDescriptor;

  /// @brief Field usePanini, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_usePanini, put = __cordl_internal_set_usePanini)) bool usePanini;

  /// @brief Field viewport, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_viewport, put = __cordl_internal_set_viewport)) ::UnityEngine::Rect viewport;

  /// @brief Field width, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_width, put = __cordl_internal_set_width)) float_t width;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr float_t const& __cordl_internal_get_height() const;

  constexpr float_t& __cordl_internal_get_height();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr float_t const& __cordl_internal_get_paniniCropToFit() const;

  constexpr float_t& __cordl_internal_get_paniniCropToFit();

  constexpr float_t const& __cordl_internal_get_paniniDistance() const;

  constexpr float_t& __cordl_internal_get_paniniDistance();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_sourceDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_sourceDescriptor();

  constexpr bool const& __cordl_internal_get_usePanini() const;

  constexpr bool& __cordl_internal_get_usePanini();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_viewport() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_viewport();

  constexpr float_t const& __cordl_internal_get_width() const;

  constexpr float_t& __cordl_internal_get_width();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_height(float_t value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_paniniCropToFit(float_t value);

  constexpr void __cordl_internal_set_paniniDistance(float_t value);

  constexpr void __cordl_internal_set_sourceDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_usePanini(bool value);

  constexpr void __cordl_internal_set_viewport(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_width(float_t value);

  /// @brief Method .ctor, addr 0x66e4e54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_LensFlarePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_LensFlarePassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_LensFlarePassData(PostProcessPass_LensFlarePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_LensFlarePassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_LensFlarePassData(PostProcessPass_LensFlarePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12834 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceDescriptor, offset: 0x20, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___sourceDescriptor;

  /// @brief Field cameraData, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field material, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field viewport, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Rect ___viewport;

  /// @brief Field paniniDistance, offset: 0x78, size: 0x4, def value: None
  float_t ___paniniDistance;

  /// @brief Field paniniCropToFit, offset: 0x7c, size: 0x4, def value: None
  float_t ___paniniCropToFit;

  /// @brief Field width, offset: 0x80, size: 0x4, def value: None
  float_t ___width;

  /// @brief Field height, offset: 0x84, size: 0x4, def value: None
  float_t ___height;

  /// @brief Field usePanini, offset: 0x88, size: 0x1, def value: None
  bool ___usePanini;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___sourceDescriptor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___cameraData) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___material) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___viewport) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___paniniDistance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___paniniCropToFit) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___width) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___height) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, ___usePanini) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/LensFlareScreenSpacePassData
class CORDL_TYPE PostProcessPass_LensFlareScreenSpacePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field camera, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_camera, put = __cordl_internal_set_camera)) ::UnityW<::UnityEngine::Camera> camera;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field downsample, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_downsample, put = __cordl_internal_set_downsample)) int32_t downsample;

  /// @brief Field lensFlareScreenSpace, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_lensFlareScreenSpace, put = __cordl_internal_set_lensFlareScreenSpace)) ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>
      lensFlareScreenSpace;

  /// @brief Field material, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field originalBloomTexture, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_originalBloomTexture,
                      put = __cordl_internal_set_originalBloomTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle originalBloomTexture;

  /// @brief Field result, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_result, put = __cordl_internal_set_result)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle result;

  /// @brief Field screenSpaceLensFlareBloomMipTexture, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_screenSpaceLensFlareBloomMipTexture,
                      put = __cordl_internal_set_screenSpaceLensFlareBloomMipTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle screenSpaceLensFlareBloomMipTexture;

  /// @brief Field sourceDescriptor, offset 0x70, size 0x34
  __declspec(property(get = __cordl_internal_get_sourceDescriptor, put = __cordl_internal_set_sourceDescriptor)) ::UnityEngine::RenderTextureDescriptor sourceDescriptor;

  /// @brief Field streakTmpTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_streakTmpTexture, put = __cordl_internal_set_streakTmpTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle streakTmpTexture;

  /// @brief Field streakTmpTexture2, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_streakTmpTexture2, put = __cordl_internal_set_streakTmpTexture2)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle streakTmpTexture2;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_camera();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr int32_t const& __cordl_internal_get_downsample() const;

  constexpr int32_t& __cordl_internal_get_downsample();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> const& __cordl_internal_get_lensFlareScreenSpace() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>& __cordl_internal_get_lensFlareScreenSpace();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_originalBloomTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_originalBloomTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_result() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_result();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_screenSpaceLensFlareBloomMipTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_screenSpaceLensFlareBloomMipTexture();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_sourceDescriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_sourceDescriptor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_streakTmpTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_streakTmpTexture();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_streakTmpTexture2() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_streakTmpTexture2();

  constexpr void __cordl_internal_set_camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_downsample(int32_t value);

  constexpr void __cordl_internal_set_lensFlareScreenSpace(::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_originalBloomTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_result(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_screenSpaceLensFlareBloomMipTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_sourceDescriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_streakTmpTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_streakTmpTexture2(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e4e58, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_LensFlareScreenSpacePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_LensFlareScreenSpacePassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_LensFlareScreenSpacePassData(PostProcessPass_LensFlareScreenSpacePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_LensFlareScreenSpacePassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_LensFlareScreenSpacePassData(PostProcessPass_LensFlareScreenSpacePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12835 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field streakTmpTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___streakTmpTexture;

  /// @brief Field streakTmpTexture2, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___streakTmpTexture2;

  /// @brief Field originalBloomTexture, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___originalBloomTexture;

  /// @brief Field screenSpaceLensFlareBloomMipTexture, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___screenSpaceLensFlareBloomMipTexture;

  /// @brief Field result, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___result;

  /// @brief Field sourceDescriptor, offset: 0x70, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___sourceDescriptor;

  /// @brief Field camera, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___camera;

  /// @brief Field material, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field lensFlareScreenSpace, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> ___lensFlareScreenSpace;

  /// @brief Field downsample, offset: 0xc0, size: 0x4, def value: None
  int32_t ___downsample;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___streakTmpTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___streakTmpTexture2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___originalBloomTexture) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___screenSpaceLensFlareBloomMipTexture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___result) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___sourceDescriptor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___camera) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___material) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___lensFlareScreenSpace) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, ___downsample) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/PostProcessingFinalSetupPassData
class CORDL_TYPE PostProcessPass_PostProcessingFinalSetupPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e4e5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_PostProcessingFinalSetupPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PostProcessingFinalSetupPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_PostProcessingFinalSetupPassData(PostProcessPass_PostProcessingFinalSetupPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PostProcessingFinalSetupPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_PostProcessingFinalSetupPassData(PostProcessPass_PostProcessingFinalSetupPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12836 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field cameraData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData, ___cameraData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/PostProcessingFinalFSRScalePassData
class CORDL_TYPE PostProcessPass_PostProcessingFinalFSRScalePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field enableAlphaOutput, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_enableAlphaOutput, put = __cordl_internal_set_enableAlphaOutput)) bool enableAlphaOutput;

  /// @brief Field material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr bool const& __cordl_internal_get_enableAlphaOutput() const;

  constexpr bool& __cordl_internal_get_enableAlphaOutput();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_enableAlphaOutput(bool value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e4e60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_PostProcessingFinalFSRScalePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PostProcessingFinalFSRScalePassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_PostProcessingFinalFSRScalePassData(PostProcessPass_PostProcessingFinalFSRScalePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PostProcessingFinalFSRScalePassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_PostProcessingFinalFSRScalePassData(PostProcessPass_PostProcessingFinalFSRScalePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12837 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field enableAlphaOutput, offset: 0x38, size: 0x1, def value: None
  bool ___enableAlphaOutput;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData, ___enableAlphaOutput) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.HDROutputUtils::Operation
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/FinalBlitSettings
struct CORDL_TYPE PostProcessPass_FinalBlitSettings {
public:
  // Declarations
  /// @brief Method Create, addr 0x66e4e68, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings Create();

  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_FinalBlitSettings();

  // Ctor Parameters [CppParam { name: "isFxaaEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isFsrEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "isTaaSharpeningEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requireHDROutput", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "resolveToDebugScreen",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isAlphaOutputEnabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hdrOperations", ty:
  // "::UnityEngine::Rendering::HDROutputUtils_Operation", modifiers: "", def_value: None }]
  constexpr PostProcessPass_FinalBlitSettings(bool isFxaaEnabled, bool isFsrEnabled, bool isTaaSharpeningEnabled, bool requireHDROutput, bool resolveToDebugScreen, bool isAlphaOutputEnabled,
                                              ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12839 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field isFxaaEnabled, offset: 0x0, size: 0x1, def value: None
  bool isFxaaEnabled;

  /// @brief Field isFsrEnabled, offset: 0x1, size: 0x1, def value: None
  bool isFsrEnabled;

  /// @brief Field isTaaSharpeningEnabled, offset: 0x2, size: 0x1, def value: None
  bool isTaaSharpeningEnabled;

  /// @brief Field requireHDROutput, offset: 0x3, size: 0x1, def value: None
  bool requireHDROutput;

  /// @brief Field resolveToDebugScreen, offset: 0x4, size: 0x1, def value: None
  bool resolveToDebugScreen;

  /// @brief Field isAlphaOutputEnabled, offset: 0x5, size: 0x1, def value: None
  bool isAlphaOutputEnabled;

  /// @brief Field hdrOperations, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, isFxaaEnabled) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, isFsrEnabled) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, isTaaSharpeningEnabled) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, requireHDROutput) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, resolveToDebugScreen) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, isAlphaOutputEnabled) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, hdrOperations) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.PostProcessPass::FinalBlitSettings
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/PostProcessingFinalBlitPassData
class CORDL_TYPE PostProcessPass_PostProcessingFinalBlitPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field material, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field settings, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_settings, put = __cordl_internal_set_settings)) ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings settings;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings const& __cordl_internal_get_settings() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings& __cordl_internal_get_settings();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_settings(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e4e64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_PostProcessingFinalBlitPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PostProcessingFinalBlitPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_PostProcessingFinalBlitPassData(PostProcessPass_PostProcessingFinalBlitPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PostProcessingFinalBlitPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_PostProcessingFinalBlitPassData(PostProcessPass_PostProcessingFinalBlitPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12838 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field material, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field cameraData, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field settings, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings ___settings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData, ___material) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData, ___cameraData) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData, ___settings) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.TonemappingMode, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/UberPostPassData
class CORDL_TYPE PostProcessPass_UberPostPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field destinationTexture, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_destinationTexture, put = __cordl_internal_set_destinationTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destinationTexture;

  /// @brief Field enableAlphaOutput, offset 0x86, size 0x1
  __declspec(property(get = __cordl_internal_get_enableAlphaOutput, put = __cordl_internal_set_enableAlphaOutput)) bool enableAlphaOutput;

  /// @brief Field hasFinalPass, offset 0x87, size 0x1
  __declspec(property(get = __cordl_internal_get_hasFinalPass, put = __cordl_internal_set_hasFinalPass)) bool hasFinalPass;

  /// @brief Field isBackbuffer, offset 0x85, size 0x1
  __declspec(property(get = __cordl_internal_get_isBackbuffer, put = __cordl_internal_set_isBackbuffer)) bool isBackbuffer;

  /// @brief Field isHdrGrading, offset 0x84, size 0x1
  __declspec(property(get = __cordl_internal_get_isHdrGrading, put = __cordl_internal_set_isHdrGrading)) bool isHdrGrading;

  /// @brief Field lutParams, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_lutParams, put = __cordl_internal_set_lutParams)) ::UnityEngine::Vector4 lutParams;

  /// @brief Field lutTexture, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_lutTexture, put = __cordl_internal_set_lutTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle lutTexture;

  /// @brief Field material, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field sourceTexture, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_sourceTexture, put = __cordl_internal_set_sourceTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sourceTexture;

  /// @brief Field toneMappingMode, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_toneMappingMode, put = __cordl_internal_set_toneMappingMode)) ::UnityEngine::Rendering::Universal::TonemappingMode toneMappingMode;

  /// @brief Field userLutParams, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_userLutParams, put = __cordl_internal_set_userLutParams)) ::UnityEngine::Vector4 userLutParams;

  /// @brief Field userLutTexture, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_userLutTexture, put = __cordl_internal_set_userLutTexture)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle userLutTexture;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destinationTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destinationTexture();

  constexpr bool const& __cordl_internal_get_enableAlphaOutput() const;

  constexpr bool& __cordl_internal_get_enableAlphaOutput();

  constexpr bool const& __cordl_internal_get_hasFinalPass() const;

  constexpr bool& __cordl_internal_get_hasFinalPass();

  constexpr bool const& __cordl_internal_get_isBackbuffer() const;

  constexpr bool& __cordl_internal_get_isBackbuffer();

  constexpr bool const& __cordl_internal_get_isHdrGrading() const;

  constexpr bool& __cordl_internal_get_isHdrGrading();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_lutParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_lutParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_lutTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_lutTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sourceTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sourceTexture();

  constexpr ::UnityEngine::Rendering::Universal::TonemappingMode const& __cordl_internal_get_toneMappingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::TonemappingMode& __cordl_internal_get_toneMappingMode();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_userLutParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_userLutParams();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_userLutTexture() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_userLutTexture();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_destinationTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_enableAlphaOutput(bool value);

  constexpr void __cordl_internal_set_hasFinalPass(bool value);

  constexpr void __cordl_internal_set_isBackbuffer(bool value);

  constexpr void __cordl_internal_set_isHdrGrading(bool value);

  constexpr void __cordl_internal_set_lutParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_lutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_sourceTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_toneMappingMode(::UnityEngine::Rendering::Universal::TonemappingMode value);

  constexpr void __cordl_internal_set_userLutParams(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_userLutTexture(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66e4e74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_UberPostPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_UberPostPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_UberPostPassData(PostProcessPass_UberPostPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_UberPostPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_UberPostPassData(PostProcessPass_UberPostPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12840 };

  /// @brief Field destinationTexture, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destinationTexture;

  /// @brief Field sourceTexture, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sourceTexture;

  /// @brief Field lutTexture, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___lutTexture;

  /// @brief Field lutParams, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___lutParams;

  /// @brief Field userLutTexture, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___userLutTexture;

  /// @brief Field userLutParams, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___userLutParams;

  /// @brief Field material, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field cameraData, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field toneMappingMode, offset: 0x80, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::TonemappingMode ___toneMappingMode;

  /// @brief Field isHdrGrading, offset: 0x84, size: 0x1, def value: None
  bool ___isHdrGrading;

  /// @brief Field isBackbuffer, offset: 0x85, size: 0x1, def value: None
  bool ___isBackbuffer;

  /// @brief Field enableAlphaOutput, offset: 0x86, size: 0x1, def value: None
  bool ___enableAlphaOutput;

  /// @brief Field hasFinalPass, offset: 0x87, size: 0x1, def value: None
  bool ___hasFinalPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___destinationTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___sourceTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___lutTexture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___lutParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___userLutTexture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___userLutParams) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___material) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___cameraData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___toneMappingMode) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___isHdrGrading) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___isBackbuffer) == 0x85, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___enableAlphaOutput) == 0x86, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, ___hasFinalPass) == 0x87, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/PostFXSetupPassData
class CORDL_TYPE PostProcessPass_PostFXSetupPassData : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData* New_ctor();

  /// @brief Method .ctor, addr 0x66e4e78, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass_PostFXSetupPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PostFXSetupPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass_PostFXSetupPassData(PostProcessPass_PostFXSetupPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass_PostFXSetupPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass_PostFXSetupPassData(PostProcessPass_PostFXSetupPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/<>c
class CORDL_TYPE PostProcessPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::PostProcessPass___c* __9;

  /// @brief Field <>9__122_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__122_0,
                      put = setStaticF___9__122_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__122_0;

  /// @brief Field <>9__124_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__124_0,
                      put = setStaticF___9__124_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__124_0;

  /// @brief Field <>9__127_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__127_0,
                      put = setStaticF___9__127_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__127_0;

  /// @brief Field <>9__127_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__127_1,
                      put = setStaticF___9__127_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__127_1;

  /// @brief Field <>9__127_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__127_2,
                      put = setStaticF___9__127_2)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__127_2;

  /// @brief Field <>9__127_3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__127_3,
                      put = setStaticF___9__127_3)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__127_3;

  /// @brief Field <>9__129_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__129_0,
                      put = setStaticF___9__129_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__129_0;

  /// @brief Field <>9__132_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__132_0,
                      put = setStaticF___9__132_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__132_0;

  /// @brief Field <>9__135_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__135_0,
                      put = setStaticF___9__135_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__135_0;

  /// @brief Field <>9__137_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__137_0,
                      put = setStaticF___9__137_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__137_0;

  /// @brief Field <>9__139_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__139_0,
                      put = setStaticF___9__139_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__139_0;

  /// @brief Field <>9__145_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__145_0,
                      put = setStaticF___9__145_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__145_0;

  /// @brief Field <>9__147_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__147_0,
                      put = setStaticF___9__147_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__147_0;

  /// @brief Field <>9__148_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__148_0,
                      put = setStaticF___9__148_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__148_0;

  /// @brief Field <>9__148_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__148_1,
                      put = setStaticF___9__148_1)) ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* __9__148_1;

  /// @brief Field <>9__148_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__148_2,
                      put = setStaticF___9__148_2)) ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* __9__148_2;

  /// @brief Field <>9__150_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__150_0,
                      put = setStaticF___9__150_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__150_0;

  /// @brief Field <>9__153_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__153_0, put = setStaticF___9__153_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__153_0;

  /// @brief Field <>9__155_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__155_0, put = setStaticF___9__155_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__155_0;

  /// @brief Field <>9__158_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__158_0,
                      put = setStaticF___9__158_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__158_0;

  /// @brief Field <>9__162_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__162_0,
                      put = setStaticF___9__162_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__162_0;

  /// @brief Field <>9__164_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__164_0,
                      put = setStaticF___9__164_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__164_0;

  /// @brief Field <>9__98_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__98_0,
                      put = setStaticF___9__98_0)) ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* __9__98_0;

  /// @brief Field <>9__98_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__98_1,
                      put = setStaticF___9__98_1)) ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* __9__98_1;

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass___c* New_ctor();

  /// @brief Method <LensFlareDataDrivenComputeOcclusion>b__147_0, addr 0x66e74b8, size 0x68c, virtual false, abstract: false, final false
  inline void _LensFlareDataDrivenComputeOcclusion_b__147_0(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData* data,
                                                            ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx);

  /// @brief Method <LensFlareDataDriven>b__98_0, addr 0x66e4ed4, size 0x94, virtual false, abstract: false, final false
  inline float_t _LensFlareDataDriven_b__98_0(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method <LensFlareDataDriven>b__98_1, addr 0x66e4f68, size 0x94, virtual false, abstract: false, final false
  inline float_t _LensFlareDataDriven_b__98_1(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method <RenderBloomTexture>b__132_0, addr 0x66e59c0, size 0x5c8, virtual false, abstract: false, final false
  inline void _RenderBloomTexture_b__132_0(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderDoFBokeh>b__137_0, addr 0x66e6894, size 0x65c, virtual false, abstract: false, final false
  inline void _RenderDoFBokeh_b__137_0(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderDoFGaussian>b__135_0, addr 0x66e5f88, size 0x89c, virtual false, abstract: false, final false
  inline void _RenderDoFGaussian_b__135_0(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderFinalBlit>b__158_0, addr 0x66e8b3c, size 0x47c, virtual false, abstract: false, final false
  inline void _RenderFinalBlit_b__158_0(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData* data,
                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderFinalFSRScale>b__155_0, addr 0x66e893c, size 0x200, virtual false, abstract: false, final false
  inline void _RenderFinalFSRScale_b__155_0(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData* data,
                                            ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderFinalSetup>b__153_0, addr 0x66e8854, size 0xe8, virtual false, abstract: false, final false
  inline void _RenderFinalSetup_b__153_0(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData* data,
                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderLensFlareDataDriven>b__148_0, addr 0x66e7b44, size 0x7d8, virtual false, abstract: false, final false
  inline void _RenderLensFlareDataDriven_b__148_0(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx);

  /// @brief Method <RenderLensFlareDataDriven>b__148_1, addr 0x66e831c, size 0x94, virtual false, abstract: false, final false
  inline float_t _RenderLensFlareDataDriven_b__148_1(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method <RenderLensFlareDataDriven>b__148_2, addr 0x66e83b0, size 0x94, virtual false, abstract: false, final false
  inline float_t _RenderLensFlareDataDriven_b__148_2(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method <RenderLensFlareScreenSpace>b__150_0, addr 0x66e8444, size 0x410, virtual false, abstract: false, final false
  inline void _RenderLensFlareScreenSpace_b__150_0(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData* data,
                                                   ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderMotionBlur>b__145_0, addr 0x66e70ec, size 0x288, virtual false, abstract: false, final false
  inline void _RenderMotionBlur_b__145_0(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderPaniniProjection>b__139_0, addr 0x66e6ef0, size 0x1fc, virtual false, abstract: false, final false
  inline void _RenderPaniniProjection_b__139_0(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData* data,
                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderPostProcessingRenderGraph>b__164_0, addr 0x66e9268, size 0x12c, virtual false, abstract: false, final false
  inline void _RenderPostProcessingRenderGraph_b__164_0(::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData* data,
                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderSMAA>b__127_0, addr 0x66e51f4, size 0x1a0, virtual false, abstract: false, final false
  inline void _RenderSMAA_b__127_0(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderSMAA>b__127_1, addr 0x66e5394, size 0x150, virtual false, abstract: false, final false
  inline void _RenderSMAA_b__127_1(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderSMAA>b__127_2, addr 0x66e54e4, size 0x150, virtual false, abstract: false, final false
  inline void _RenderSMAA_b__127_2(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderSMAA>b__127_3, addr 0x66e5634, size 0x1a8, virtual false, abstract: false, final false
  inline void _RenderSMAA_b__127_3(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderStopNaN>b__124_0, addr 0x66e50a4, size 0x150, virtual false, abstract: false, final false
  inline void _RenderStopNaN_b__124_0(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderUberPost>b__162_0, addr 0x66e8fb8, size 0x2b0, virtual false, abstract: false, final false
  inline void _RenderUberPost_b__162_0(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <UberPostSetupBloomPass>b__129_0, addr 0x66e57dc, size 0x1e4, virtual false, abstract: false, final false
  inline void _UberPostSetupBloomPass_b__129_0(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData* data,
                                               ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <UpdateCameraResolution>b__122_0, addr 0x66e4ffc, size 0xa8, virtual false, abstract: false, final false
  inline void _UpdateCameraResolution_b__122_0(::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData* data,
                                               ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* ctx);

  /// @brief Method .ctor, addr 0x66e4ed0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__122_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__124_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__127_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__127_1();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__127_2();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__127_3();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__129_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__132_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__135_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__137_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__139_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__145_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__147_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__148_0();

  static inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* getStaticF___9__148_1();

  static inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* getStaticF___9__148_2();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__150_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__153_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__155_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__158_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__162_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__164_0();

  static inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* getStaticF___9__98_0();

  static inline ::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* getStaticF___9__98_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::PostProcessPass___c* value);

  static inline void setStaticF___9__122_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__124_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__127_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__127_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__127_2(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__127_3(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__129_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__132_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__135_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__137_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__139_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__145_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__147_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__148_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__148_1(::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value);

  static inline void setStaticF___9__148_2(::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value);

  static inline void setStaticF___9__150_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__153_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__155_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__158_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__162_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__164_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__98_0(::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value);

  static inline void setStaticF___9__98_1(::System::Func_4<::UnityW<::UnityEngine::Light>, ::UnityW<::UnityEngine::Camera>, ::UnityEngine::Vector3, float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass___c(PostProcessPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass___c(PostProcessPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12842 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass/<>c__DisplayClass89_0
struct CORDL_TYPE PostProcessPass___c__DisplayClass89_0 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass___c__DisplayClass89_0();

  // Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam { name: "destination", ty: "::UnityEngine::Rendering::RTHandle*",
  // modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::UnityEngine::Rendering::Universal::PostProcessPass*", modifiers: "", def_value: None }, CppParam { name:
  // "amountOfPassesRemaining", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cmd", ty: "::UnityEngine::Rendering::CommandBuffer*", modifiers: "", def_value: None }]
  constexpr PostProcessPass___c__DisplayClass89_0(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                                  ::UnityEngine::Rendering::Universal::PostProcessPass* __4__this, int32_t amountOfPassesRemaining,
                                                  ::UnityEngine::Rendering::CommandBuffer* cmd) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12843 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field source, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* source;

  /// @brief Field destination, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* destination;

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPass* __4__this;

  /// @brief Field amountOfPassesRemaining, offset: 0x18, size: 0x4, def value: None
  int32_t amountOfPassesRemaining;

  /// @brief Field cmd, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* cmd;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0, destination) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0, __4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0, amountOfPassesRemaining) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0, cmd) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.Universal.PostProcessPass::BloomMaterialParams,
// UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.PostProcessPass
class CORDL_TYPE PostProcessPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using BloomMaterialParams = ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams;

  using BloomPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData;

  using DoFBokehPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData;

  using DoFGaussianPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData;

  using FinalBlitSettings = ::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings;

  using LensFlarePassData = ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData;

  using LensFlareScreenSpacePassData = ::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData;

  using MaterialLibrary = ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary;

  using MotionBlurPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData;

  using PaniniProjectionPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData;

  using PostFXSetupPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData;

  using PostProcessingFinalBlitPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData;

  using PostProcessingFinalFSRScalePassData = ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData;

  using PostProcessingFinalSetupPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData;

  using SMAAPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData;

  using SMAASetupPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants;

  using StopNaNsPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData;

  using UberPostPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData;

  using UberSetupBloomPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData;

  using UpdateCameraResolutionPassData = ::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData;

  using __c = ::UnityEngine::Rendering::Universal::PostProcessPass___c;

  using __c__DisplayClass89_0 = ::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0;

  /// @brief Field _BloomMipDown, offset 0x150, size 0x8
  __declspec(property(
      get = __cordl_internal_get__BloomMipDown,
      put = __cordl_internal_set__BloomMipDown)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      _BloomMipDown;

  /// @brief Field _BloomMipUp, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get__BloomMipUp,
                      put =
                          __cordl_internal_set__BloomMipUp)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      _BloomMipUp;

  /// @brief Field k_ShaderPropertyId_PrevViewProjM, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ShaderPropertyId_PrevViewProjM, put = setStaticF_k_ShaderPropertyId_PrevViewProjM)) int32_t k_ShaderPropertyId_PrevViewProjM;

  /// @brief Field k_ShaderPropertyId_PrevViewProjMStereo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ShaderPropertyId_PrevViewProjMStereo, put = setStaticF_k_ShaderPropertyId_PrevViewProjMStereo)) int32_t k_ShaderPropertyId_PrevViewProjMStereo;

  /// @brief Field k_ShaderPropertyId_ViewProjM, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ShaderPropertyId_ViewProjM, put = setStaticF_k_ShaderPropertyId_ViewProjM)) int32_t k_ShaderPropertyId_ViewProjM;

  /// @brief Field k_ShaderPropertyId_ViewProjMStereo, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_ShaderPropertyId_ViewProjMStereo, put = setStaticF_k_ShaderPropertyId_ViewProjMStereo)) int32_t k_ShaderPropertyId_ViewProjMStereo;

  /// @brief Field m_BlendTexture, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlendTexture, put = __cordl_internal_set_m_BlendTexture)) ::UnityEngine::Rendering::RTHandle* m_BlendTexture;

  /// @brief Field m_BlitMaterial, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial)) ::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_Bloom, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Bloom, put = __cordl_internal_set_m_Bloom)) ::UnityW<::UnityEngine::Rendering::Universal::Bloom> m_Bloom;

  /// @brief Field m_BloomMipDown, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BloomMipDown,
                      put = __cordl_internal_set_m_BloomMipDown)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_BloomMipDown;

  /// @brief Field m_BloomMipUp, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BloomMipUp, put = __cordl_internal_set_m_BloomMipUp)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_BloomMipUp;

  /// @brief Field m_BloomParamsPrev, offset 0x268, size 0x14
  __declspec(property(get = __cordl_internal_get_m_BloomParamsPrev,
                      put = __cordl_internal_set_m_BloomParamsPrev)) ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams m_BloomParamsPrev;

  /// @brief Field m_BokehHash, offset 0x238, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehHash, put = __cordl_internal_set_m_BokehHash)) int32_t m_BokehHash;

  /// @brief Field m_BokehKernel, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BokehKernel, put = __cordl_internal_set_m_BokehKernel)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> m_BokehKernel;

  /// @brief Field m_BokehMaxRadius, offset 0x23c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehMaxRadius, put = __cordl_internal_set_m_BokehMaxRadius)) float_t m_BokehMaxRadius;

  /// @brief Field m_BokehRCPAspect, offset 0x240, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BokehRCPAspect, put = __cordl_internal_set_m_BokehRCPAspect)) float_t m_BokehRCPAspect;

  /// @brief Field m_ChromaticAberration, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ChromaticAberration, put = __cordl_internal_set_m_ChromaticAberration)) ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration>
      m_ChromaticAberration;

  /// @brief Field m_ColorAdjustments, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorAdjustments, put = __cordl_internal_set_m_ColorAdjustments)) ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> m_ColorAdjustments;

  /// @brief Field m_ColorLookup, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorLookup, put = __cordl_internal_set_m_ColorLookup)) ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> m_ColorLookup;

  /// @brief Field m_Data, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> m_Data;

  /// @brief Field m_DefaultColorFormat, offset 0x210, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DefaultColorFormat, put = __cordl_internal_set_m_DefaultColorFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_DefaultColorFormat;

  /// @brief Field m_DefaultColorFormatIsAlpha, offset 0x214, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DefaultColorFormatIsAlpha, put = __cordl_internal_set_m_DefaultColorFormatIsAlpha)) bool m_DefaultColorFormatIsAlpha;

  /// @brief Field m_Depth, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Depth, put = __cordl_internal_set_m_Depth)) ::UnityEngine::Rendering::RTHandle* m_Depth;

  /// @brief Field m_DepthOfField, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthOfField, put = __cordl_internal_set_m_DepthOfField)) ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> m_DepthOfField;

  /// @brief Field m_Descriptor, offset 0xb8, size 0x34
  __declspec(property(get = __cordl_internal_get_m_Descriptor, put = __cordl_internal_set_m_Descriptor)) ::UnityEngine::RenderTextureDescriptor m_Descriptor;

  /// @brief Field m_Destination, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Destination, put = __cordl_internal_set_m_Destination)) ::UnityEngine::Rendering::RTHandle* m_Destination;

  /// @brief Field m_DitheringTextureIndex, offset 0x220, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DitheringTextureIndex, put = __cordl_internal_set_m_DitheringTextureIndex)) int32_t m_DitheringTextureIndex;

  /// @brief Field m_EdgeColorTexture, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EdgeColorTexture, put = __cordl_internal_set_m_EdgeColorTexture)) ::UnityEngine::Rendering::RTHandle* m_EdgeColorTexture;

  /// @brief Field m_EdgeStencilTexture, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EdgeStencilTexture, put = __cordl_internal_set_m_EdgeStencilTexture)) ::UnityEngine::Rendering::RTHandle* m_EdgeStencilTexture;

  /// @brief Field m_EnableColorEncodingIfNeeded, offset 0x246, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableColorEncodingIfNeeded, put = __cordl_internal_set_m_EnableColorEncodingIfNeeded)) bool m_EnableColorEncodingIfNeeded;

  /// @brief Field m_FilmGrain, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FilmGrain, put = __cordl_internal_set_m_FilmGrain)) ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> m_FilmGrain;

  /// @brief Field m_FullCoCTexture, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FullCoCTexture, put = __cordl_internal_set_m_FullCoCTexture)) ::UnityEngine::Rendering::RTHandle* m_FullCoCTexture;

  /// @brief Field m_GaussianCoCFormat, offset 0x21c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GaussianCoCFormat, put = __cordl_internal_set_m_GaussianCoCFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_GaussianCoCFormat;

  /// @brief Field m_HalfCoCTexture, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HalfCoCTexture, put = __cordl_internal_set_m_HalfCoCTexture)) ::UnityEngine::Rendering::RTHandle* m_HalfCoCTexture;

  /// @brief Field m_HasFinalPass, offset 0x245, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasFinalPass, put = __cordl_internal_set_m_HasFinalPass)) bool m_HasFinalPass;

  /// @brief Field m_InternalLut, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InternalLut, put = __cordl_internal_set_m_InternalLut)) ::UnityEngine::Rendering::RTHandle* m_InternalLut;

  /// @brief Field m_IsFinalPass, offset 0x244, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsFinalPass, put = __cordl_internal_set_m_IsFinalPass)) bool m_IsFinalPass;

  /// @brief Field m_LensDistortion, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LensDistortion, put = __cordl_internal_set_m_LensDistortion)) ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> m_LensDistortion;

  /// @brief Field m_LensFlareScreenSpace, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LensFlareScreenSpace, put = __cordl_internal_set_m_LensFlareScreenSpace)) ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>
      m_LensFlareScreenSpace;

  /// @brief Field m_MRT2, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MRT2,
                      put = __cordl_internal_set_m_MRT2)) ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>
      m_MRT2;

  /// @brief Field m_Materials, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Materials, put = __cordl_internal_set_m_Materials)) ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary* m_Materials;

  /// @brief Field m_MotionBlur, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionBlur, put = __cordl_internal_set_m_MotionBlur)) ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> m_MotionBlur;

  /// @brief Field m_MotionVectors, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionVectors, put = __cordl_internal_set_m_MotionVectors)) ::UnityEngine::Rendering::RTHandle* m_MotionVectors;

  /// @brief Field m_PaniniProjection, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PaniniProjection, put = __cordl_internal_set_m_PaniniProjection)) ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> m_PaniniProjection;

  /// @brief Field m_PingTexture, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PingTexture, put = __cordl_internal_set_m_PingTexture)) ::UnityEngine::Rendering::RTHandle* m_PingTexture;

  /// @brief Field m_PongTexture, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PongTexture, put = __cordl_internal_set_m_PongTexture)) ::UnityEngine::Rendering::RTHandle* m_PongTexture;

  /// @brief Field m_ProfilingRenderFinalPostProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingRenderFinalPostProcessing,
                      put = setStaticF_m_ProfilingRenderFinalPostProcessing)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingRenderFinalPostProcessing;

  /// @brief Field m_ProfilingRenderPostProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_ProfilingRenderPostProcessing, put = setStaticF_m_ProfilingRenderPostProcessing)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingRenderPostProcessing;

  /// @brief Field m_ResolveToScreen, offset 0x24a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ResolveToScreen, put = __cordl_internal_set_m_ResolveToScreen)) bool m_ResolveToScreen;

  /// @brief Field m_SMAAEdgeFormat, offset 0x218, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SMAAEdgeFormat, put = __cordl_internal_set_m_SMAAEdgeFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat m_SMAAEdgeFormat;

  /// @brief Field m_ScalingSetupTarget, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScalingSetupTarget, put = __cordl_internal_set_m_ScalingSetupTarget)) ::UnityEngine::Rendering::RTHandle* m_ScalingSetupTarget;

  /// @brief Field m_ScreenSpaceLensFlareResult, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScreenSpaceLensFlareResult,
                      put = __cordl_internal_set_m_ScreenSpaceLensFlareResult)) ::UnityEngine::Rendering::RTHandle* m_ScreenSpaceLensFlareResult;

  /// @brief Field m_Source, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Source, put = __cordl_internal_set_m_Source)) ::UnityEngine::Rendering::RTHandle* m_Source;

  /// @brief Field m_StreakTmpTexture, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StreakTmpTexture, put = __cordl_internal_set_m_StreakTmpTexture)) ::UnityEngine::Rendering::RTHandle* m_StreakTmpTexture;

  /// @brief Field m_StreakTmpTexture2, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StreakTmpTexture2, put = __cordl_internal_set_m_StreakTmpTexture2)) ::UnityEngine::Rendering::RTHandle* m_StreakTmpTexture2;

  /// @brief Field m_SupportDataDrivenLensFlare, offset 0x249, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportDataDrivenLensFlare, put = __cordl_internal_set_m_SupportDataDrivenLensFlare)) bool m_SupportDataDrivenLensFlare;

  /// @brief Field m_SupportScreenSpaceLensFlare, offset 0x248, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportScreenSpaceLensFlare, put = __cordl_internal_set_m_SupportScreenSpaceLensFlare)) bool m_SupportScreenSpaceLensFlare;

  /// @brief Field m_TempTarget, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempTarget, put = __cordl_internal_set_m_TempTarget)) ::UnityEngine::Rendering::RTHandle* m_TempTarget;

  /// @brief Field m_TempTarget2, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempTarget2, put = __cordl_internal_set_m_TempTarget2)) ::UnityEngine::Rendering::RTHandle* m_TempTarget2;

  /// @brief Field m_Tonemapping, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Tonemapping, put = __cordl_internal_set_m_Tonemapping)) ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> m_Tonemapping;

  /// @brief Field m_UpscaledTarget, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UpscaledTarget, put = __cordl_internal_set_m_UpscaledTarget)) ::UnityEngine::Rendering::RTHandle* m_UpscaledTarget;

  /// @brief Field m_UseFastSRGBLinearConversion, offset 0x247, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseFastSRGBLinearConversion, put = __cordl_internal_set_m_UseFastSRGBLinearConversion)) bool m_UseFastSRGBLinearConversion;

  /// @brief Field m_UseSwapBuffer, offset 0x24b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseSwapBuffer, put = __cordl_internal_set_m_UseSwapBuffer)) bool m_UseSwapBuffer;

  /// @brief Field m_UserLut, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UserLut, put = __cordl_internal_set_m_UserLut)) ::UnityEngine::Rendering::RTHandle* m_UserLut;

  /// @brief Field m_Vignette, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Vignette, put = __cordl_internal_set_m_Vignette)) ::UnityW<::UnityEngine::Rendering::Universal::Vignette> m_Vignette;

  /// @brief Field s_CameraDepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraDepthTextureID, put = setStaticF_s_CameraDepthTextureID)) int32_t s_CameraDepthTextureID;

  /// @brief Method CalcCropExtents, addr 0x66d909c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalcCropExtents(::UnityEngine::Camera* camera, float_t d);

  /// @brief Method CalcViewExtents, addr 0x66d9040, size 0x5c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 CalcViewExtents(::UnityEngine::Camera* camera);

  /// @brief Method CanRunOnTile, addr 0x66d1be0, size 0x8, virtual false, abstract: false, final false
  inline bool CanRunOnTile();

  /// @brief Method Cleanup, addr 0x66d16dc, size 0x24, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method Dispose, addr 0x66d1870, size 0x1b4, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method DoBokehDepthOfField, addr 0x66d835c, size 0x62c, virtual false, abstract: false, final false
  inline void DoBokehDepthOfField(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                  ::UnityEngine::Rect pixelRect, bool enableAlphaOutput);

  /// @brief Method DoDepthOfField, addr 0x66d4764, size 0xfc, virtual false, abstract: false, final false
  inline void DoDepthOfField(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source,
                             ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rect pixelRect);

  /// @brief Method DoGaussianDepthOfField, addr 0x66d7c0c, size 0x750, virtual false, abstract: false, final false
  inline void DoGaussianDepthOfField(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                                     ::UnityEngine::Rect pixelRect, bool enableAlphaOutput);

  /// @brief Method DoLensFlareScreenSpace, addr 0x66d5970, size 0x654, virtual false, abstract: false, final false
  inline void DoLensFlareScreenSpace(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source,
                                     ::UnityEngine::Rendering::RTHandle* originalBloomTexture, ::UnityEngine::Rendering::RTHandle* screenSpaceLensFlareBloomMipTexture);

  /// @brief Method DoMotionBlur, addr 0x66d4860, size 0x2d8, virtual false, abstract: false, final false
  inline void DoMotionBlur(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination,
                           ::UnityEngine::Rendering::RTHandle* motionVectors, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method DoPaniniProjection, addr 0x66d4b38, size 0x254, virtual false, abstract: false, final false
  inline void DoPaniniProjection(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source,
                                 ::UnityEngine::Rendering::RTHandle* destination);

  /// @brief Method DoSubpixelMorphologicalAntialiasing, addr 0x66d4188, size 0x5dc, virtual false, abstract: false, final false
  inline void DoSubpixelMorphologicalAntialiasing(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                  ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination);

  /// @brief Method Execute, addr 0x66d1be8, size 0x374, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method GetCompatibleDescriptor, addr 0x66d3d60, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetCompatibleDescriptor();

  /// @brief Method GetCompatibleDescriptor, addr 0x66d3e84, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::RenderTextureDescriptor GetCompatibleDescriptor(::UnityEngine::RenderTextureDescriptor desc, int32_t width, int32_t height,
                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                               ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief Method GetCompatibleDescriptor, addr 0x66d3da8, size 0xdc, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor GetCompatibleDescriptor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                                        ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  /// @brief Method GetLensFlareLightAttenuation, addr 0x66d8bfc, size 0x24c, virtual false, abstract: false, final false
  static inline float_t GetLensFlareLightAttenuation(::UnityEngine::Light* light, ::UnityEngine::Camera* cam, ::UnityEngine::Vector3 wo);

  /// @brief Method GetMaxBokehRadiusInPixels, addr 0x66d8be0, size 0x1c, virtual false, abstract: false, final false
  static inline float_t GetMaxBokehRadiusInPixels(float_t viewportHeight);

  /// @brief Method IsAlphaFormat, addr 0x66d1664, size 0x78, virtual false, abstract: false, final false
  inline bool IsAlphaFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method IsHDRFormat, addr 0x66d1598, size 0xcc, virtual false, abstract: false, final false
  inline bool IsHDRFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method LensFlareDataDriven, addr 0x66d67a8, size 0x7cc, virtual false, abstract: false, final false
  inline void LensFlareDataDriven(::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                  ::UnityEngine::Rendering::RenderTargetIdentifier source, bool usePanini, float_t paniniDistance, float_t paniniCropToFit);

  /// @brief Method LensFlareDataDrivenComputeOcclusion, addr 0x66d5fc4, size 0x7e4, virtual false, abstract: false, final false
  inline void LensFlareDataDrivenComputeOcclusion(::ByRef<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                                  ::UnityEngine::Rendering::RenderTargetIdentifier source, bool usePanini, float_t paniniDistance, float_t paniniCropToFit);

  /// @brief Method LensFlareDataDrivenComputeOcclusion, addr 0x66df19c, size 0x5d4, virtual false, abstract: false, final false
  inline void LensFlareDataDrivenComputeOcclusion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                  ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  static inline ::UnityEngine::Rendering::Universal::PostProcessPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data,
                                                                               ::ByRef<::UnityEngine::Rendering::Universal::PostProcessParams> postProcessParams);

  /// @brief Method OnCameraSetup, addr 0x66d1bd4, size 0xc, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method PrepareBokehKernel, addr 0x66d8988, size 0x258, virtual false, abstract: false, final false
  inline void PrepareBokehKernel(float_t maxRadius, float_t rcpAspect);

  /// @brief Method Render, addr 0x66d290c, size 0x1454, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RenderBloomTexture, addr 0x66db664, size 0xeac, virtual false, abstract: false, final false
  inline void RenderBloomTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                 ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination, bool enableAlphaOutput);

  /// @brief Method RenderDoF, addr 0x66dc578, size 0x288, virtual false, abstract: false, final false
  inline void RenderDoF(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                        ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderDoFBokeh, addr 0x66dd2d4, size 0xa8c, virtual false, abstract: false, final false
  inline void RenderDoFBokeh(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                             ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination, ::ByRef<::UnityEngine::Material*> dofMaterial);

  /// @brief Method RenderDoFGaussian, addr 0x66dc800, size 0xad4, virtual false, abstract: false, final false
  inline void RenderDoFGaussian(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::ByRef<::UnityEngine::Material*> dofMaterial);

  /// @brief Method RenderFinalBlit, addr 0x66e142c, size 0x6bc, virtual false, abstract: false, final false
  inline void RenderFinalBlit(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                              ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
                              ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget,
                              ::ByRef<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings> settings);

  /// @brief Method RenderFinalFSRScale, addr 0x66e0f2c, size 0x500, virtual false, abstract: false, final false
  inline void RenderFinalFSRScale(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                  ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination, bool enableAlphaOutput);

  /// @brief Method RenderFinalPass, addr 0x66d1f5c, size 0x9b0, virtual false, abstract: false, final false
  inline void RenderFinalPass(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RenderFinalPassRenderGraph, addr 0x66e1ae8, size 0x6a4, virtual false, abstract: false, final false
  inline void RenderFinalPassRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
                                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget, bool enableColorEncodingIfNeeded);

  /// @brief Method RenderFinalSetup, addr 0x66e08c0, size 0x66c, virtual false, abstract: false, final false
  inline void RenderFinalSetup(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                               ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                               ::ByRef<::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings> settings);

  /// @brief Method RenderLensFlareDataDriven, addr 0x66df770, size 0x658, virtual false, abstract: false, final false
  inline void RenderLensFlareDataDriven(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderLensFlareScreenSpace, addr 0x66dfdc8, size 0x8a0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle RenderLensFlareScreenSpace(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera,
                                                                                               ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle originalBloomTexture,
                                                                                               ::UnityEngine::Rendering::RenderGraphModule::TextureHandle screenSpaceLensFlareBloomMipTexture,
                                                                                               bool enableXR);

  /// @brief Method RenderMotionBlur, addr 0x66de8f4, size 0x8a8, virtual false, abstract: false, final false
  inline void RenderMotionBlur(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                               ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderPaniniProjection, addr 0x66ddd60, size 0x728, virtual false, abstract: false, final false
  inline void RenderPaniniProjection(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Camera* camera,
                                     ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderPostProcessingRenderGraph, addr 0x66e3088, size 0x1000, virtual false, abstract: false, final false
  inline void RenderPostProcessingRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                              ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> activeCameraColorTexture,
                                              ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> lutTexture,
                                              ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
                                              ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> postProcessingTarget, bool hasFinalPass, bool resolveToDebugScreen,
                                              bool enableColorEndingIfNeeded);

  /// @brief Method RenderSMAA, addr 0x66d9a68, size 0x1454, virtual false, abstract: false, final false
  inline void RenderSMAA(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                         ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                         ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> SMAATarget);

  /// @brief Method RenderSTP, addr 0x66de660, size 0x294, virtual false, abstract: false, final false
  inline void RenderSTP(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                        ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                        ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderStopNaN, addr 0x66d94ec, size 0x57c, virtual false, abstract: false, final false
  inline void RenderStopNaN(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor,
                            ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> activeCameraColor, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> stopNaNTarget);

  /// @brief Method RenderTemporalAA, addr 0x66de488, size 0x1d8, virtual false, abstract: false, final false
  inline void RenderTemporalAA(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                               ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                               ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method RenderUberPost, addr 0x66e239c, size 0xcec, virtual false, abstract: false, final false
  inline void RenderUberPost(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalPostProcessingData* postProcessingData,
                             ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> sourceTexture, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destTexture,
                             ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> lutTexture, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> overlayUITexture,
                             bool requireHDROutput, bool enableAlphaOutput, bool resolveToDebugScreen, bool hasFinalPass);

  /// @brief Method RequireHDROutput, addr 0x66d3ef0, size 0x3c, virtual false, abstract: false, final false
  inline bool RequireHDROutput(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method RequireSRGBConversionBlitToBackBuffer, addr 0x66d3ed4, size 0x1c, virtual false, abstract: false, final false
  inline bool RequireSRGBConversionBlitToBackBuffer(bool requireSrgbConversion);

  /// @brief Method ScaleViewportAndBlit, addr 0x66e0668, size 0x258, virtual false, abstract: false, final false
  static inline void ScaleViewportAndBlit(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sourceTextureHdl, ::UnityEngine::Rendering::RTHandle* dest,
                                          ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material, bool hasFinalPass);

  /// @brief Method Setup, addr 0x66d1a24, size 0x110, virtual false, abstract: false, final false
  inline void Setup(::ByRef<::UnityEngine::RenderTextureDescriptor> baseDescriptor, ::ByRef<::UnityEngine::Rendering::RTHandle*> source, bool resolveToScreen,
                    ::ByRef<::UnityEngine::Rendering::RTHandle*> depth, ::ByRef<::UnityEngine::Rendering::RTHandle*> internalLut, ::ByRef<::UnityEngine::Rendering::RTHandle*> motionVectors,
                    bool hasFinalPass, bool enableColorEncoding);

  /// @brief Method SetupBloom, addr 0x66d4d8c, size 0xbe4, virtual false, abstract: false, final false
  inline void SetupBloom(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Material* uberMaterial, bool enableAlphaOutput);

  /// @brief Method SetupChromaticAberration, addr 0x66d7280, size 0x10c, virtual false, abstract: false, final false
  inline void SetupChromaticAberration(::UnityEngine::Material* material);

  /// @brief Method SetupColorGrading, addr 0x66d75d0, size 0x36c, virtual false, abstract: false, final false
  inline void SetupColorGrading(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData, ::UnityEngine::Material* material);

  /// @brief Method SetupDithering, addr 0x66d79f0, size 0xa0, virtual false, abstract: false, final false
  inline void SetupDithering(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material);

  /// @brief Method SetupFinalPass, addr 0x66d1b34, size 0xa0, virtual false, abstract: false, final false
  inline void SetupFinalPass(::ByRef<::UnityEngine::Rendering::RTHandle*> source, bool useSwapBuffer, bool enableColorEncoding);

  /// @brief Method SetupGrain, addr 0x66d793c, size 0xb4, virtual false, abstract: false, final false
  inline void SetupGrain(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Material* material);

  /// @brief Method SetupHDROutput, addr 0x66d7a90, size 0x17c, virtual false, abstract: false, final false
  inline void SetupHDROutput(::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayInformation, ::UnityEngine::ColorGamut hdrDisplayColorGamut, ::UnityEngine::Material* material,
                             ::UnityEngine::Rendering::HDROutputUtils_Operation hdrOperations, bool rendersOverlayUI);

  /// @brief Method SetupLensDistortion, addr 0x66d6f74, size 0x30c, virtual false, abstract: false, final false
  inline void SetupLensDistortion(::UnityEngine::Material* material, bool isSceneView);

  /// @brief Method SetupVignette, addr 0x66d738c, size 0x244, virtual false, abstract: false, final false
  inline void SetupVignette(::UnityEngine::Material* material, ::UnityEngine::Experimental::Rendering::XRPass* xrPass);

  /// @brief Method TryGetCachedUserLutTextureHandle, addr 0x66e218c, size 0x210, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle TryGetCachedUserLutTextureHandle(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method UberPostSetupBloomPass, addr 0x66daebc, size 0x7a8, virtual false, abstract: false, final false
  inline void UberPostSetupBloomPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* rendergraph, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> bloomTexture,
                                     ::UnityEngine::Material* uberMaterial);

  /// @brief Method UpdateCameraResolution, addr 0x66d90f0, size 0x3fc, virtual false, abstract: false, final false
  inline void UpdateCameraResolution(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                     ::UnityEngine::Vector2Int newCameraTargetSize);

  /// @brief Method UpdateMotionBlurMatrices, addr 0x66d8e48, size 0x1f8, virtual false, abstract: false, final false
  static inline void UpdateMotionBlurMatrices(::ByRef<::UnityEngine::Material*> material, ::UnityEngine::Camera* camera, ::UnityEngine::Experimental::Rendering::XRPass* xr);

  /// @brief Method <Render>g__GetDestination|89_1, addr 0x66d3f34, size 0x13c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* _Render_g__GetDestination_89_1(::ByRef<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <Render>g__GetSource|89_0, addr 0x66d3f2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* _Render_g__GetSource_89_0(::ByRef<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0> _cordl_fixed_empty_name_whitespace);

  /// @brief Method <Render>g__Swap|89_2, addr 0x66d4070, size 0x118, virtual false, abstract: false, final false
  inline void _Render_g__Swap_89_2(::ByRef<::UnityEngine::Rendering::Universal::ScriptableRenderer*> r,
                                   ::ByRef<::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0> _cordl_fixed_empty_name_whitespace);

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const&
  __cordl_internal_get__BloomMipDown() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get__BloomMipDown();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const& __cordl_internal_get__BloomMipUp() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get__BloomMipUp();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_BlendTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_BlendTexture();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom> const& __cordl_internal_get_m_Bloom() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Bloom>& __cordl_internal_get_m_Bloom();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_BloomMipDown() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_BloomMipDown();

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_BloomMipUp() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_BloomMipUp();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams const& __cordl_internal_get_m_BloomParamsPrev() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams& __cordl_internal_get_m_BloomParamsPrev();

  constexpr int32_t const& __cordl_internal_get_m_BokehHash() const;

  constexpr int32_t& __cordl_internal_get_m_BokehHash();

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> const& __cordl_internal_get_m_BokehKernel() const;

  constexpr ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>& __cordl_internal_get_m_BokehKernel();

  constexpr float_t const& __cordl_internal_get_m_BokehMaxRadius() const;

  constexpr float_t& __cordl_internal_get_m_BokehMaxRadius();

  constexpr float_t const& __cordl_internal_get_m_BokehRCPAspect() const;

  constexpr float_t& __cordl_internal_get_m_BokehRCPAspect();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> const& __cordl_internal_get_m_ChromaticAberration() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration>& __cordl_internal_get_m_ChromaticAberration();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> const& __cordl_internal_get_m_ColorAdjustments() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments>& __cordl_internal_get_m_ColorAdjustments();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> const& __cordl_internal_get_m_ColorLookup() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup>& __cordl_internal_get_m_ColorLookup();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> const& __cordl_internal_get_m_Data() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData>& __cordl_internal_get_m_Data();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_DefaultColorFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_DefaultColorFormat();

  constexpr bool const& __cordl_internal_get_m_DefaultColorFormatIsAlpha() const;

  constexpr bool& __cordl_internal_get_m_DefaultColorFormatIsAlpha();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_Depth() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_Depth();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> const& __cordl_internal_get_m_DepthOfField() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField>& __cordl_internal_get_m_DepthOfField();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get_m_Descriptor() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get_m_Descriptor();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_Destination() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_Destination();

  constexpr int32_t const& __cordl_internal_get_m_DitheringTextureIndex() const;

  constexpr int32_t& __cordl_internal_get_m_DitheringTextureIndex();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_EdgeColorTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_EdgeColorTexture();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_EdgeStencilTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_EdgeStencilTexture();

  constexpr bool const& __cordl_internal_get_m_EnableColorEncodingIfNeeded() const;

  constexpr bool& __cordl_internal_get_m_EnableColorEncodingIfNeeded();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> const& __cordl_internal_get_m_FilmGrain() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain>& __cordl_internal_get_m_FilmGrain();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_FullCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_FullCoCTexture();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_GaussianCoCFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_GaussianCoCFormat();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_HalfCoCTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_HalfCoCTexture();

  constexpr bool const& __cordl_internal_get_m_HasFinalPass() const;

  constexpr bool& __cordl_internal_get_m_HasFinalPass();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_InternalLut() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_InternalLut();

  constexpr bool const& __cordl_internal_get_m_IsFinalPass() const;

  constexpr bool& __cordl_internal_get_m_IsFinalPass();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> const& __cordl_internal_get_m_LensDistortion() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion>& __cordl_internal_get_m_LensDistortion();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> const& __cordl_internal_get_m_LensFlareScreenSpace() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare>& __cordl_internal_get_m_LensFlareScreenSpace();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> const& __cordl_internal_get_m_MRT2() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*>& __cordl_internal_get_m_MRT2();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary* const& __cordl_internal_get_m_Materials() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*& __cordl_internal_get_m_Materials();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> const& __cordl_internal_get_m_MotionBlur() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur>& __cordl_internal_get_m_MotionBlur();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_MotionVectors() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_MotionVectors();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> const& __cordl_internal_get_m_PaniniProjection() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection>& __cordl_internal_get_m_PaniniProjection();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_PingTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_PingTexture();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_PongTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_PongTexture();

  constexpr bool const& __cordl_internal_get_m_ResolveToScreen() const;

  constexpr bool& __cordl_internal_get_m_ResolveToScreen();

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat const& __cordl_internal_get_m_SMAAEdgeFormat() const;

  constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat& __cordl_internal_get_m_SMAAEdgeFormat();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ScalingSetupTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ScalingSetupTarget();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ScreenSpaceLensFlareResult() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ScreenSpaceLensFlareResult();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_Source() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_Source();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_StreakTmpTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_StreakTmpTexture();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_StreakTmpTexture2() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_StreakTmpTexture2();

  constexpr bool const& __cordl_internal_get_m_SupportDataDrivenLensFlare() const;

  constexpr bool& __cordl_internal_get_m_SupportDataDrivenLensFlare();

  constexpr bool const& __cordl_internal_get_m_SupportScreenSpaceLensFlare() const;

  constexpr bool& __cordl_internal_get_m_SupportScreenSpaceLensFlare();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_TempTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_TempTarget();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_TempTarget2() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_TempTarget2();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> const& __cordl_internal_get_m_Tonemapping() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping>& __cordl_internal_get_m_Tonemapping();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_UpscaledTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_UpscaledTarget();

  constexpr bool const& __cordl_internal_get_m_UseFastSRGBLinearConversion() const;

  constexpr bool& __cordl_internal_get_m_UseFastSRGBLinearConversion();

  constexpr bool const& __cordl_internal_get_m_UseSwapBuffer() const;

  constexpr bool& __cordl_internal_get_m_UseSwapBuffer();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_UserLut() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_UserLut();

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette> const& __cordl_internal_get_m_Vignette() const;

  constexpr ::UnityW<::UnityEngine::Rendering::Universal::Vignette>& __cordl_internal_get_m_Vignette();

  constexpr void __cordl_internal_set__BloomMipDown(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set__BloomMipUp(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set_m_BlendTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_Bloom(::UnityW<::UnityEngine::Rendering::Universal::Bloom> value);

  constexpr void __cordl_internal_set_m_BloomMipDown(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_m_BloomMipUp(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_m_BloomParamsPrev(::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams value);

  constexpr void __cordl_internal_set_m_BokehHash(int32_t value);

  constexpr void __cordl_internal_set_m_BokehKernel(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  constexpr void __cordl_internal_set_m_BokehMaxRadius(float_t value);

  constexpr void __cordl_internal_set_m_BokehRCPAspect(float_t value);

  constexpr void __cordl_internal_set_m_ChromaticAberration(::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> value);

  constexpr void __cordl_internal_set_m_ColorAdjustments(::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> value);

  constexpr void __cordl_internal_set_m_ColorLookup(::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> value);

  constexpr void __cordl_internal_set_m_Data(::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> value);

  constexpr void __cordl_internal_set_m_DefaultColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_DefaultColorFormatIsAlpha(bool value);

  constexpr void __cordl_internal_set_m_Depth(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DepthOfField(::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> value);

  constexpr void __cordl_internal_set_m_Descriptor(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set_m_Destination(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DitheringTextureIndex(int32_t value);

  constexpr void __cordl_internal_set_m_EdgeColorTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_EdgeStencilTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_EnableColorEncodingIfNeeded(bool value);

  constexpr void __cordl_internal_set_m_FilmGrain(::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> value);

  constexpr void __cordl_internal_set_m_FullCoCTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_GaussianCoCFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_HalfCoCTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_HasFinalPass(bool value);

  constexpr void __cordl_internal_set_m_InternalLut(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_IsFinalPass(bool value);

  constexpr void __cordl_internal_set_m_LensDistortion(::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> value);

  constexpr void __cordl_internal_set_m_LensFlareScreenSpace(::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> value);

  constexpr void __cordl_internal_set_m_MRT2(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> value);

  constexpr void __cordl_internal_set_m_Materials(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary* value);

  constexpr void __cordl_internal_set_m_MotionBlur(::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> value);

  constexpr void __cordl_internal_set_m_MotionVectors(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_PaniniProjection(::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> value);

  constexpr void __cordl_internal_set_m_PingTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_PongTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_ResolveToScreen(bool value);

  constexpr void __cordl_internal_set_m_SMAAEdgeFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value);

  constexpr void __cordl_internal_set_m_ScalingSetupTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_ScreenSpaceLensFlareResult(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_Source(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_StreakTmpTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_StreakTmpTexture2(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_SupportDataDrivenLensFlare(bool value);

  constexpr void __cordl_internal_set_m_SupportScreenSpaceLensFlare(bool value);

  constexpr void __cordl_internal_set_m_TempTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_TempTarget2(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_Tonemapping(::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> value);

  constexpr void __cordl_internal_set_m_UpscaledTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_UseFastSRGBLinearConversion(bool value);

  constexpr void __cordl_internal_set_m_UseSwapBuffer(bool value);

  constexpr void __cordl_internal_set_m_UserLut(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_Vignette(::UnityW<::UnityEngine::Rendering::Universal::Vignette> value);

  /// @brief Method .ctor, addr 0x66d0c7c, size 0x6fc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::PostProcessData* data,
                    ::ByRef<::UnityEngine::Rendering::Universal::PostProcessParams> postProcessParams);

  static inline int32_t getStaticF_k_ShaderPropertyId_PrevViewProjM();

  static inline int32_t getStaticF_k_ShaderPropertyId_PrevViewProjMStereo();

  static inline int32_t getStaticF_k_ShaderPropertyId_ViewProjM();

  static inline int32_t getStaticF_k_ShaderPropertyId_ViewProjMStereo();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingRenderFinalPostProcessing();

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_m_ProfilingRenderPostProcessing();

  static inline int32_t getStaticF_s_CameraDepthTextureID();

  static inline void setStaticF_k_ShaderPropertyId_PrevViewProjM(int32_t value);

  static inline void setStaticF_k_ShaderPropertyId_PrevViewProjMStereo(int32_t value);

  static inline void setStaticF_k_ShaderPropertyId_ViewProjM(int32_t value);

  static inline void setStaticF_k_ShaderPropertyId_ViewProjMStereo(int32_t value);

  static inline void setStaticF_m_ProfilingRenderFinalPostProcessing(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_m_ProfilingRenderPostProcessing(::UnityEngine::Rendering::ProfilingSampler* value);

  static inline void setStaticF_s_CameraDepthTextureID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PostProcessPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PostProcessPass(PostProcessPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PostProcessPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PostProcessPass(PostProcessPass const&) = delete;

  /// @brief Field _TemporalAATargetName offset 0xffffffff size 0x8
  static constexpr ::ConstString _TemporalAATargetName{ u"_TemporalAATarget" };

  /// @brief Field _UpscaledColorTargetName offset 0xffffffff size 0x8
  static constexpr ::ConstString _UpscaledColorTargetName{ u"_UpscaledColorTarget" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12844 };

  /// @brief Field k_BokehDoFPassBlur offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassBlur{ static_cast<int32_t>(0x2) };

  /// @brief Field k_BokehDoFPassComposite offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassComposite{ static_cast<int32_t>(0x4) };

  /// @brief Field k_BokehDoFPassComputeCoc offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassComputeCoc{ static_cast<int32_t>(0x0) };

  /// @brief Field k_BokehDoFPassDownscalePrefilter offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassDownscalePrefilter{ static_cast<int32_t>(0x1) };

  /// @brief Field k_BokehDoFPassPostFilter offset 0xffffffff size 0x4
  static constexpr int32_t k_BokehDoFPassPostFilter{ static_cast<int32_t>(0x3) };

  /// @brief Field k_GaussianDoFPassBlurH offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassBlurH{ static_cast<int32_t>(0x2) };

  /// @brief Field k_GaussianDoFPassBlurV offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassBlurV{ static_cast<int32_t>(0x3) };

  /// @brief Field k_GaussianDoFPassComposite offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassComposite{ static_cast<int32_t>(0x4) };

  /// @brief Field k_GaussianDoFPassComputeCoc offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassComputeCoc{ static_cast<int32_t>(0x0) };

  /// @brief Field k_GaussianDoFPassDownscalePrefilter offset 0xffffffff size 0x4
  static constexpr int32_t k_GaussianDoFPassDownscalePrefilter{ static_cast<int32_t>(0x1) };

  /// @brief Field k_MaxPyramidSize offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxPyramidSize{ static_cast<int32_t>(0x10) };

  /// @brief Field k_RenderFinalPostProcessingTag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RenderFinalPostProcessingTag{ u"Blit Final PostProcessing" };

  /// @brief Field k_RenderPostProcessingTag offset 0xffffffff size 0x8
  static constexpr ::ConstString k_RenderPostProcessingTag{ u"Blit PostProcessing Effects" };

  /// @brief Field m_Descriptor, offset: 0xb8, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ___m_Descriptor;

  /// @brief Field m_Source, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_Source;

  /// @brief Field m_Destination, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_Destination;

  /// @brief Field m_Depth, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_Depth;

  /// @brief Field m_InternalLut, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_InternalLut;

  /// @brief Field m_MotionVectors, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_MotionVectors;

  /// @brief Field m_FullCoCTexture, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_FullCoCTexture;

  /// @brief Field m_HalfCoCTexture, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_HalfCoCTexture;

  /// @brief Field m_PingTexture, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_PingTexture;

  /// @brief Field m_PongTexture, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_PongTexture;

  /// @brief Field m_BloomMipDown, offset: 0x138, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_BloomMipDown;

  /// @brief Field m_BloomMipUp, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_BloomMipUp;

  /// @brief Field _BloomMipUp, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ____BloomMipUp;

  /// @brief Field _BloomMipDown, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ____BloomMipDown;

  /// @brief Field m_BlendTexture, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_BlendTexture;

  /// @brief Field m_EdgeColorTexture, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_EdgeColorTexture;

  /// @brief Field m_EdgeStencilTexture, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_EdgeStencilTexture;

  /// @brief Field m_TempTarget, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_TempTarget;

  /// @brief Field m_TempTarget2, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_TempTarget2;

  /// @brief Field m_StreakTmpTexture, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_StreakTmpTexture;

  /// @brief Field m_StreakTmpTexture2, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_StreakTmpTexture2;

  /// @brief Field m_ScreenSpaceLensFlareResult, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_ScreenSpaceLensFlareResult;

  /// @brief Field m_UserLut, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_UserLut;

  /// @brief Field m_Materials, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary* ___m_Materials;

  /// @brief Field m_Data, offset: 0x1a8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PostProcessData> ___m_Data;

  /// @brief Field m_DepthOfField, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::DepthOfField> ___m_DepthOfField;

  /// @brief Field m_MotionBlur, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::MotionBlur> ___m_MotionBlur;

  /// @brief Field m_LensFlareScreenSpace, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ScreenSpaceLensFlare> ___m_LensFlareScreenSpace;

  /// @brief Field m_PaniniProjection, offset: 0x1c8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::PaniniProjection> ___m_PaniniProjection;

  /// @brief Field m_Bloom, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Bloom> ___m_Bloom;

  /// @brief Field m_LensDistortion, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::LensDistortion> ___m_LensDistortion;

  /// @brief Field m_ChromaticAberration, offset: 0x1e0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ChromaticAberration> ___m_ChromaticAberration;

  /// @brief Field m_Vignette, offset: 0x1e8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Vignette> ___m_Vignette;

  /// @brief Field m_ColorLookup, offset: 0x1f0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ColorLookup> ___m_ColorLookup;

  /// @brief Field m_ColorAdjustments, offset: 0x1f8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::ColorAdjustments> ___m_ColorAdjustments;

  /// @brief Field m_Tonemapping, offset: 0x200, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::Tonemapping> ___m_Tonemapping;

  /// @brief Field m_FilmGrain, offset: 0x208, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::Universal::FilmGrain> ___m_FilmGrain;

  /// @brief Field m_DefaultColorFormat, offset: 0x210, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_DefaultColorFormat;

  /// @brief Field m_DefaultColorFormatIsAlpha, offset: 0x214, size: 0x1, def value: None
  bool ___m_DefaultColorFormatIsAlpha;

  /// @brief Field m_SMAAEdgeFormat, offset: 0x218, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_SMAAEdgeFormat;

  /// @brief Field m_GaussianCoCFormat, offset: 0x21c, size: 0x4, def value: None
  ::UnityEngine::Experimental::Rendering::GraphicsFormat ___m_GaussianCoCFormat;

  /// @brief Field m_DitheringTextureIndex, offset: 0x220, size: 0x4, def value: None
  int32_t ___m_DitheringTextureIndex;

  /// @brief Field m_MRT2, offset: 0x228, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> ___m_MRT2;

  /// @brief Field m_BokehKernel, offset: 0x230, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> ___m_BokehKernel;

  /// @brief Field m_BokehHash, offset: 0x238, size: 0x4, def value: None
  int32_t ___m_BokehHash;

  /// @brief Field m_BokehMaxRadius, offset: 0x23c, size: 0x4, def value: None
  float_t ___m_BokehMaxRadius;

  /// @brief Field m_BokehRCPAspect, offset: 0x240, size: 0x4, def value: None
  float_t ___m_BokehRCPAspect;

  /// @brief Field m_IsFinalPass, offset: 0x244, size: 0x1, def value: None
  bool ___m_IsFinalPass;

  /// @brief Field m_HasFinalPass, offset: 0x245, size: 0x1, def value: None
  bool ___m_HasFinalPass;

  /// @brief Field m_EnableColorEncodingIfNeeded, offset: 0x246, size: 0x1, def value: None
  bool ___m_EnableColorEncodingIfNeeded;

  /// @brief Field m_UseFastSRGBLinearConversion, offset: 0x247, size: 0x1, def value: None
  bool ___m_UseFastSRGBLinearConversion;

  /// @brief Field m_SupportScreenSpaceLensFlare, offset: 0x248, size: 0x1, def value: None
  bool ___m_SupportScreenSpaceLensFlare;

  /// @brief Field m_SupportDataDrivenLensFlare, offset: 0x249, size: 0x1, def value: None
  bool ___m_SupportDataDrivenLensFlare;

  /// @brief Field m_ResolveToScreen, offset: 0x24a, size: 0x1, def value: None
  bool ___m_ResolveToScreen;

  /// @brief Field m_UseSwapBuffer, offset: 0x24b, size: 0x1, def value: None
  bool ___m_UseSwapBuffer;

  /// @brief Field m_ScalingSetupTarget, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_ScalingSetupTarget;

  /// @brief Field m_UpscaledTarget, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_UpscaledTarget;

  /// @brief Field m_BlitMaterial, offset: 0x260, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  /// @brief Field m_BloomParamsPrev, offset: 0x268, size: 0x14, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams ___m_BloomParamsPrev;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Descriptor) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Source) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Destination) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Depth) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_InternalLut) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_MotionVectors) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_FullCoCTexture) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_HalfCoCTexture) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_PingTexture) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_PongTexture) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BloomMipDown) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BloomMipUp) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ____BloomMipUp) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ____BloomMipDown) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BlendTexture) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_EdgeColorTexture) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_EdgeStencilTexture) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_TempTarget) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_TempTarget2) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_StreakTmpTexture) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_StreakTmpTexture2) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_ScreenSpaceLensFlareResult) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_UserLut) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Materials) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Data) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_DepthOfField) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_MotionBlur) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_LensFlareScreenSpace) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_PaniniProjection) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Bloom) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_LensDistortion) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_ChromaticAberration) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Vignette) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_ColorLookup) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_ColorAdjustments) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_Tonemapping) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_FilmGrain) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_DefaultColorFormat) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_DefaultColorFormatIsAlpha) == 0x214, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_SMAAEdgeFormat) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_GaussianCoCFormat) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_DitheringTextureIndex) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_MRT2) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BokehKernel) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BokehHash) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BokehMaxRadius) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BokehRCPAspect) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_IsFinalPass) == 0x244, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_HasFinalPass) == 0x245, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_EnableColorEncodingIfNeeded) == 0x246, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_UseFastSRGBLinearConversion) == 0x247, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_SupportScreenSpaceLensFlare) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_SupportDataDrivenLensFlare) == 0x249, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_ResolveToScreen) == 0x24a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_UseSwapBuffer) == 0x24b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_ScalingSetupTarget) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_UpscaledTarget) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BlitMaterial) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::PostProcessPass, ___m_BloomParamsPrev) == 0x268, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::PostProcessPass, 0x280>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass*, "UnityEngine.Rendering.Universal", "PostProcessPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_BloomPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/BloomPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_DoFBokehPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/DoFBokehPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_DoFGaussianPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/DoFGaussianPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlarePassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/LensFlarePassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_LensFlareScreenSpacePassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/LensFlareScreenSpacePassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_MaterialLibrary*, "UnityEngine.Rendering.Universal", "PostProcessPass/MaterialLibrary");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_MotionBlurPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/MotionBlurPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_PaniniProjectionPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/PaniniProjectionPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_PostFXSetupPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/PostFXSetupPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalBlitPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/PostProcessingFinalBlitPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalFSRScalePassData*, "UnityEngine.Rendering.Universal",
                       "PostProcessPass/PostProcessingFinalFSRScalePassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_PostProcessingFinalSetupPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/PostProcessingFinalSetupPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_SMAAPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/SMAAPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_SMAASetupPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/SMAASetupPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_ShaderConstants*, "UnityEngine.Rendering.Universal", "PostProcessPass/ShaderConstants");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_StopNaNsPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/StopNaNsPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_UberPostPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/UberPostPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_UberSetupBloomPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/UberSetupBloomPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_UpdateCameraResolutionPassData*, "UnityEngine.Rendering.Universal", "PostProcessPass/UpdateCameraResolutionPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::PostProcessPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass___c*, "UnityEngine.Rendering.Universal", "PostProcessPass/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_BloomMaterialParams, "UnityEngine.Rendering.Universal", "PostProcessPass/BloomMaterialParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass_FinalBlitSettings, "UnityEngine.Rendering.Universal", "PostProcessPass/FinalBlitSettings");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::PostProcessPass___c__DisplayClass89_0, "UnityEngine.Rendering.Universal", "PostProcessPass/<>c__DisplayClass89_0");
