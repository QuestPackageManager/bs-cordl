#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPProfileId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(URPProfileId)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct URPProfileId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::URPProfileId);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.URPProfileId
struct CORDL_TYPE URPProfileId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __URPProfileId_Unwrapped
  enum struct __URPProfileId_Unwrapped : int32_t {
    __E_UniversalRenderTotal = static_cast<int32_t>(0x0),
    __E_UpdateVolumeFramework = static_cast<int32_t>(0x1),
    __E_RenderCameraStack = static_cast<int32_t>(0x2),
    __E_AdditionalLightsShadow = static_cast<int32_t>(0x3),
    __E_ColorGradingLUT = static_cast<int32_t>(0x4),
    __E_CopyColor = static_cast<int32_t>(0x5),
    __E_CopyDepth = static_cast<int32_t>(0x6),
    __E_DrawDepthNormalPrepass = static_cast<int32_t>(0x7),
    __E_DepthPrepass = static_cast<int32_t>(0x8),
    __E_UpdateReflectionProbeAtlas = static_cast<int32_t>(0x9),
    __E_DrawOpaqueObjects = static_cast<int32_t>(0xa),
    __E_DrawTransparentObjects = static_cast<int32_t>(0xb),
    __E_DrawScreenSpaceUI = static_cast<int32_t>(0xc),
    __E_RecordRenderGraph = static_cast<int32_t>(0xd),
    __E_LightCookies = static_cast<int32_t>(0xe),
    __E_MainLightShadow = static_cast<int32_t>(0xf),
    __E_ResolveShadows = static_cast<int32_t>(0x10),
    __E_SSAO = static_cast<int32_t>(0x11),
    __E_StopNaNs = static_cast<int32_t>(0x12),
    __E_SMAA = static_cast<int32_t>(0x13),
    __E_GaussianDepthOfField = static_cast<int32_t>(0x14),
    __E_BokehDepthOfField = static_cast<int32_t>(0x15),
    __E_TemporalAA = static_cast<int32_t>(0x16),
    __E_MotionBlur = static_cast<int32_t>(0x17),
    __E_PaniniProjection = static_cast<int32_t>(0x18),
    __E_UberPostProcess = static_cast<int32_t>(0x19),
    __E_Bloom = static_cast<int32_t>(0x1a),
    __E_LensFlareDataDrivenComputeOcclusion = static_cast<int32_t>(0x1b),
    __E_LensFlareDataDriven = static_cast<int32_t>(0x1c),
    __E_LensFlareScreenSpace = static_cast<int32_t>(0x1d),
    __E_DrawMotionVectors = static_cast<int32_t>(0x1e),
    __E_DrawFullscreen = static_cast<int32_t>(0x1f),
    __E_RG_SetupPostFX = static_cast<int32_t>(0x20),
    __E_RG_StopNaNs = static_cast<int32_t>(0x21),
    __E_RG_SMAAMaterialSetup = static_cast<int32_t>(0x22),
    __E_RG_SMAAEdgeDetection = static_cast<int32_t>(0x23),
    __E_RG_SMAABlendWeight = static_cast<int32_t>(0x24),
    __E_RG_SMAANeighborhoodBlend = static_cast<int32_t>(0x25),
    __E_RG_SetupDoF = static_cast<int32_t>(0x26),
    __E_RG_DOFComputeCOC = static_cast<int32_t>(0x27),
    __E_RG_DOFDownscalePrefilter = static_cast<int32_t>(0x28),
    __E_RG_DOFBlurH = static_cast<int32_t>(0x29),
    __E_RG_DOFBlurV = static_cast<int32_t>(0x2a),
    __E_RG_DOFBlurBokeh = static_cast<int32_t>(0x2b),
    __E_RG_DOFPostFilter = static_cast<int32_t>(0x2c),
    __E_RG_DOFComposite = static_cast<int32_t>(0x2d),
    __E_RG_TAA = static_cast<int32_t>(0x2e),
    __E_RG_TAACopyHistory = static_cast<int32_t>(0x2f),
    __E_RG_MotionBlur = static_cast<int32_t>(0x30),
    __E_RG_BloomSetup = static_cast<int32_t>(0x31),
    __E_RG_BloomPrefilter = static_cast<int32_t>(0x32),
    __E_RG_BloomDownsample = static_cast<int32_t>(0x33),
    __E_RG_BloomUpsample = static_cast<int32_t>(0x34),
    __E_RG_UberPostSetupBloomPass = static_cast<int32_t>(0x35),
    __E_RG_UberPost = static_cast<int32_t>(0x36),
    __E_RG_FinalSetup = static_cast<int32_t>(0x37),
    __E_RG_FinalFSRScale = static_cast<int32_t>(0x38),
    __E_RG_FinalBlit = static_cast<int32_t>(0x39),
    __E_BlitFinalToBackBuffer = static_cast<int32_t>(0x3a),
    __E_DrawSkybox = static_cast<int32_t>(0x3b),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __URPProfileId_Unwrapped() const noexcept {
    return static_cast<__URPProfileId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr URPProfileId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr URPProfileId(int32_t value__) noexcept;

  /// @brief Field AdditionalLightsShadow value: I32(3)
  static ::UnityEngine::Rendering::Universal::URPProfileId const AdditionalLightsShadow;

  /// @brief Field BlitFinalToBackBuffer value: I32(58)
  static ::UnityEngine::Rendering::Universal::URPProfileId const BlitFinalToBackBuffer;

  /// @brief Field Bloom value: I32(26)
  static ::UnityEngine::Rendering::Universal::URPProfileId const Bloom;

  /// @brief Field BokehDepthOfField value: I32(21)
  static ::UnityEngine::Rendering::Universal::URPProfileId const BokehDepthOfField;

  /// @brief Field ColorGradingLUT value: I32(4)
  static ::UnityEngine::Rendering::Universal::URPProfileId const ColorGradingLUT;

  /// @brief Field CopyColor value: I32(5)
  static ::UnityEngine::Rendering::Universal::URPProfileId const CopyColor;

  /// @brief Field CopyDepth value: I32(6)
  static ::UnityEngine::Rendering::Universal::URPProfileId const CopyDepth;

  /// @brief Field DepthPrepass value: I32(8)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DepthPrepass;

  /// @brief Field DrawDepthNormalPrepass value: I32(7)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawDepthNormalPrepass;

  /// @brief Field DrawFullscreen value: I32(31)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawFullscreen;

  /// @brief Field DrawMotionVectors value: I32(30)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawMotionVectors;

  /// @brief Field DrawOpaqueObjects value: I32(10)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawOpaqueObjects;

  /// @brief Field DrawScreenSpaceUI value: I32(12)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawScreenSpaceUI;

  /// @brief Field DrawSkybox value: I32(59)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawSkybox;

  /// @brief Field DrawTransparentObjects value: I32(11)
  static ::UnityEngine::Rendering::Universal::URPProfileId const DrawTransparentObjects;

  /// @brief Field GaussianDepthOfField value: I32(20)
  static ::UnityEngine::Rendering::Universal::URPProfileId const GaussianDepthOfField;

  /// @brief Field LensFlareDataDriven value: I32(28)
  static ::UnityEngine::Rendering::Universal::URPProfileId const LensFlareDataDriven;

  /// @brief Field LensFlareDataDrivenComputeOcclusion value: I32(27)
  static ::UnityEngine::Rendering::Universal::URPProfileId const LensFlareDataDrivenComputeOcclusion;

  /// @brief Field LensFlareScreenSpace value: I32(29)
  static ::UnityEngine::Rendering::Universal::URPProfileId const LensFlareScreenSpace;

  /// @brief Field LightCookies value: I32(14)
  static ::UnityEngine::Rendering::Universal::URPProfileId const LightCookies;

  /// @brief Field MainLightShadow value: I32(15)
  static ::UnityEngine::Rendering::Universal::URPProfileId const MainLightShadow;

  /// @brief Field MotionBlur value: I32(23)
  static ::UnityEngine::Rendering::Universal::URPProfileId const MotionBlur;

  /// @brief Field PaniniProjection value: I32(24)
  static ::UnityEngine::Rendering::Universal::URPProfileId const PaniniProjection;

  /// @brief Field RG_BloomDownsample value: I32(51)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_BloomDownsample;

  /// @brief Field RG_BloomPrefilter value: I32(50)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_BloomPrefilter;

  /// @brief Field RG_BloomSetup value: I32(49)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_BloomSetup;

  /// @brief Field RG_BloomUpsample value: I32(52)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_BloomUpsample;

  /// @brief Field RG_DOFBlurBokeh value: I32(43)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_DOFBlurBokeh;

  /// @brief Field RG_DOFBlurH value: I32(41)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_DOFBlurH;

  /// @brief Field RG_DOFBlurV value: I32(42)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_DOFBlurV;

  /// @brief Field RG_DOFComposite value: I32(45)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_DOFComposite;

  /// @brief Field RG_DOFComputeCOC value: I32(39)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_DOFComputeCOC;

  /// @brief Field RG_DOFDownscalePrefilter value: I32(40)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_DOFDownscalePrefilter;

  /// @brief Field RG_DOFPostFilter value: I32(44)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_DOFPostFilter;

  /// @brief Field RG_FinalBlit value: I32(57)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_FinalBlit;

  /// @brief Field RG_FinalFSRScale value: I32(56)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_FinalFSRScale;

  /// @brief Field RG_FinalSetup value: I32(55)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_FinalSetup;

  /// @brief Field RG_MotionBlur value: I32(48)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_MotionBlur;

  /// @brief Field RG_SMAABlendWeight value: I32(36)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_SMAABlendWeight;

  /// @brief Field RG_SMAAEdgeDetection value: I32(35)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_SMAAEdgeDetection;

  /// @brief Field RG_SMAAMaterialSetup value: I32(34)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_SMAAMaterialSetup;

  /// @brief Field RG_SMAANeighborhoodBlend value: I32(37)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_SMAANeighborhoodBlend;

  /// @brief Field RG_SetupDoF value: I32(38)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_SetupDoF;

  /// @brief Field RG_SetupPostFX value: I32(32)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_SetupPostFX;

  /// @brief Field RG_StopNaNs value: I32(33)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_StopNaNs;

  /// @brief Field RG_TAA value: I32(46)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_TAA;

  /// @brief Field RG_TAACopyHistory value: I32(47)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_TAACopyHistory;

  /// @brief Field RG_UberPost value: I32(54)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_UberPost;

  /// @brief Field RG_UberPostSetupBloomPass value: I32(53)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RG_UberPostSetupBloomPass;

  /// @brief Field RecordRenderGraph value: I32(13)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RecordRenderGraph;

  /// @brief Field RenderCameraStack value: I32(2)
  static ::UnityEngine::Rendering::Universal::URPProfileId const RenderCameraStack;

  /// @brief Field ResolveShadows value: I32(16)
  static ::UnityEngine::Rendering::Universal::URPProfileId const ResolveShadows;

  /// @brief Field SMAA value: I32(19)
  static ::UnityEngine::Rendering::Universal::URPProfileId const SMAA;

  /// @brief Field SSAO value: I32(17)
  static ::UnityEngine::Rendering::Universal::URPProfileId const SSAO;

  /// @brief Field StopNaNs value: I32(18)
  static ::UnityEngine::Rendering::Universal::URPProfileId const StopNaNs;

  /// @brief Field TemporalAA value: I32(22)
  static ::UnityEngine::Rendering::Universal::URPProfileId const TemporalAA;

  /// @brief Field UberPostProcess value: I32(25)
  static ::UnityEngine::Rendering::Universal::URPProfileId const UberPostProcess;

  /// @brief Field UniversalRenderTotal value: I32(0)
  static ::UnityEngine::Rendering::Universal::URPProfileId const UniversalRenderTotal;

  /// @brief Field UpdateReflectionProbeAtlas value: I32(9)
  static ::UnityEngine::Rendering::Universal::URPProfileId const UpdateReflectionProbeAtlas;

  /// @brief Field UpdateVolumeFramework value: I32(1)
  static ::UnityEngine::Rendering::Universal::URPProfileId const UpdateVolumeFramework;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13016 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPProfileId, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::URPProfileId, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::URPProfileId, "UnityEngine.Rendering.Universal", "URPProfileId");
