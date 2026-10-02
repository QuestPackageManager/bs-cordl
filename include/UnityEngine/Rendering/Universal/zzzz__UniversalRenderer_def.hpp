#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalRenderer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal::Internal {
class AdditionalLightsShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ColorGradingLutPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthNormalOnlyPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DepthOnlyPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsWithRenderingLayersPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class FinalBlitPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class ForwardLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class GBufferPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class MainLightShadowCasterPass;
}
namespace UnityEngine::Rendering::Universal {
struct CameraData;
}
namespace UnityEngine::Rendering::Universal {
class CapturePass;
}
namespace UnityEngine::Rendering::Universal {
struct DepthPrimingMode;
}
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass;
}
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass;
}
namespace UnityEngine::Rendering::Universal {
class InvokeOnRenderObjectCallbackPass;
}
namespace UnityEngine::Rendering::Universal {
class LightCookieManager;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class PostProcessPassRenderGraph;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingMode;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRendererFeature;
}
namespace UnityEngine::Rendering::Universal {
class StencilCrossFadeRenderPass;
}
namespace UnityEngine::Rendering::Universal {
class TransparentSettingsPass;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRendererData;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_ClearCameraParams;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_ColorCopySchedule;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_CopyToDebugTexturePassData;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_DepthCopySchedule;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_OccluderPass;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_RenderPassInputSummary;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_TextureCopySchedules;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
}
namespace UnityEngine::Rendering::Universal {
class XRDepthMotionPass;
}
namespace UnityEngine::Rendering::Universal {
class XROcclusionMeshPass;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct OcclusionTest;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct LayerMask;
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
struct TextureWrapMode;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_ColorCopySchedule;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_DepthCopySchedule;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_OccluderPass;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_CopyToDebugTexturePassData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer___c;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_ClearCameraParams;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_RenderPassInputSummary;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_TextureCopySchedules;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderer*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::UniversalRenderer___c*);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule, "UnityEngine.Rendering.Universal", "UniversalRenderer/ColorCopySchedule");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule, "UnityEngine.Rendering.Universal", "UniversalRenderer/DepthCopySchedule");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass, "UnityEngine.Rendering.Universal", "UniversalRenderer/OccluderPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer*, "UnityEngine.Rendering.Universal", "UniversalRenderer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*, "UnityEngine.Rendering.Universal", "UniversalRenderer/CopyToDebugTexturePassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer___c*, "UnityEngine.Rendering.Universal", "UniversalRenderer/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams, "UnityEngine.Rendering.Universal", "UniversalRenderer/ClearCameraParams");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, "UnityEngine.Rendering.Universal", "UniversalRenderer/RenderPassInputSummary");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules, "UnityEngine.Rendering.Universal", "UniversalRenderer/TextureCopySchedules");
// Dependencies UnityEngine.Rendering.Universal.RenderPassEvent
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/RenderPassInputSummary
struct CORDL_TYPE UniversalRenderer_RenderPassInputSummary {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_RenderPassInputSummary();

  // Ctor Parameters [CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresDepthPrepass", ty: "bool", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "requiresNormalsTexture", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresColorTexture", ty: "bool",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresMotionVectors", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "requiresDepthNormalAtEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: None, comment: None }, CppParam { name: "requiresDepthTextureEarliestEvent",
  // ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRenderer_RenderPassInputSummary(bool requiresDepthTexture, bool requiresDepthPrepass, bool requiresNormalsTexture, bool requiresColorTexture, bool requiresMotionVectors,
                                                     ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalAtEvent,
                                                     ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthTextureEarliestEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12978 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field requiresDepthTexture, offset: 0x0, size: 0x1, def value: None
  bool requiresDepthTexture;

  /// @brief Field requiresDepthPrepass, offset: 0x1, size: 0x1, def value: None
  bool requiresDepthPrepass;

  /// @brief Field requiresNormalsTexture, offset: 0x2, size: 0x1, def value: None
  bool requiresNormalsTexture;

  /// @brief Field requiresColorTexture, offset: 0x3, size: 0x1, def value: None
  bool requiresColorTexture;

  /// @brief Field requiresMotionVectors, offset: 0x4, size: 0x1, def value: None
  bool requiresMotionVectors;

  /// @brief Field requiresDepthNormalAtEvent, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalAtEvent;

  /// @brief Field requiresDepthTextureEarliestEvent, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthTextureEarliestEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresDepthTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresDepthPrepass) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresNormalsTexture) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresColorTexture) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresMotionVectors) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresDepthNormalAtEvent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresDepthTextureEarliestEvent) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/CopyToDebugTexturePassData
class CORDL_TYPE UniversalRenderer_CopyToDebugTexturePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field dest, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_dest, put = __cordl_internal_set_dest)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dest;

  /// @brief Field src, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_src, put = __cordl_internal_set_src)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle src;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_dest() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_dest();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_src() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_src();

  constexpr void __cordl_internal_set_dest(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_src(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6cb53b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_CopyToDebugTexturePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_CopyToDebugTexturePassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderer_CopyToDebugTexturePassData(UniversalRenderer_CopyToDebugTexturePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_CopyToDebugTexturePassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderer_CopyToDebugTexturePassData(UniversalRenderer_CopyToDebugTexturePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12979 };

  /// @brief Field src, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___src;

  /// @brief Field dest, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___dest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData, ___src) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData, ___dest) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData) == 0x30, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [IsReadOnly]
// Dependencies UnityEngine.Color
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/ClearCameraParams
struct CORDL_TYPE UniversalRenderer_ClearCameraParams {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x6cb08ac, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(bool clearColor, bool clearDepth, ::UnityEngine::Color clearVal);

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_ClearCameraParams();

  // Ctor Parameters [CppParam { name: "mustClearColor", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mustClearDepth", ty: "bool", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "clearValue", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRenderer_ClearCameraParams(bool mustClearColor, bool mustClearDepth, ::UnityEngine::Color clearValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12980 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field mustClearColor, offset: 0x0, size: 0x1, def value: None
  bool mustClearColor;

  /// @brief Field mustClearDepth, offset: 0x1, size: 0x1, def value: None
  bool mustClearDepth;

  /// @brief Field clearValue, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Color clearValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams, mustClearColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams, mustClearDepth) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams, clearValue) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams) == 0x14, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/OccluderPass
struct CORDL_TYPE UniversalRenderer_OccluderPass {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UniversalRenderer_OccluderPass_Unwrapped
  enum struct __UniversalRenderer_OccluderPass_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_DepthPrepass = static_cast<int32_t>(0x1),
    __E_ForwardOpaque = static_cast<int32_t>(0x2),
    __E_GBuffer = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UniversalRenderer_OccluderPass_Unwrapped() const noexcept {
    return static_cast<__UniversalRenderer_OccluderPass_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_OccluderPass();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRenderer_OccluderPass(int32_t value__) noexcept;

  /// @brief Field DepthPrepass value: I32(1)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass const DepthPrepass;

  /// @brief Field ForwardOpaque value: I32(2)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass const ForwardOpaque;

  /// @brief Field GBuffer value: I32(3)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass const GBuffer;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12981 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/DepthCopySchedule
struct CORDL_TYPE UniversalRenderer_DepthCopySchedule {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UniversalRenderer_DepthCopySchedule_Unwrapped
  enum struct __UniversalRenderer_DepthCopySchedule_Unwrapped : int32_t {
    __E_DuringPrepass = static_cast<int32_t>(0x0),
    __E_AfterPrepass = static_cast<int32_t>(0x1),
    __E_AfterGBuffer = static_cast<int32_t>(0x2),
    __E_AfterOpaques = static_cast<int32_t>(0x3),
    __E_AfterSkybox = static_cast<int32_t>(0x4),
    __E_AfterTransparents = static_cast<int32_t>(0x5),
    __E_None = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UniversalRenderer_DepthCopySchedule_Unwrapped() const noexcept {
    return static_cast<__UniversalRenderer_DepthCopySchedule_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_DepthCopySchedule();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRenderer_DepthCopySchedule(int32_t value__) noexcept;

  /// @brief Field AfterGBuffer value: I32(2)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule const AfterGBuffer;

  /// @brief Field AfterOpaques value: I32(3)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule const AfterOpaques;

  /// @brief Field AfterPrepass value: I32(1)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule const AfterPrepass;

  /// @brief Field AfterSkybox value: I32(4)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule const AfterSkybox;

  /// @brief Field AfterTransparents value: I32(5)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule const AfterTransparents;

  /// @brief Field DuringPrepass value: I32(0)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule const DuringPrepass;

  /// @brief Field None value: I32(6)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12982 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/ColorCopySchedule
struct CORDL_TYPE UniversalRenderer_ColorCopySchedule {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UniversalRenderer_ColorCopySchedule_Unwrapped
  enum struct __UniversalRenderer_ColorCopySchedule_Unwrapped : int32_t {
    __E_AfterSkybox = static_cast<int32_t>(0x0),
    __E_None = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UniversalRenderer_ColorCopySchedule_Unwrapped() const noexcept {
    return static_cast<__UniversalRenderer_ColorCopySchedule_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_ColorCopySchedule();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRenderer_ColorCopySchedule(int32_t value__) noexcept;

  /// @brief Field AfterSkybox value: I32(0)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule const AfterSkybox;

  /// @brief Field None value: I32(1)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12983 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.UniversalRenderer::ColorCopySchedule, UnityEngine.Rendering.Universal.UniversalRenderer::DepthCopySchedule
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/TextureCopySchedules
struct CORDL_TYPE UniversalRenderer_TextureCopySchedules {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_TextureCopySchedules();

  // Ctor Parameters [CppParam { name: "depth", ty: "::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "color", ty: "::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule", modifiers: "", def_value: None, comment: None }]
  constexpr UniversalRenderer_TextureCopySchedules(::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule depth,
                                                   ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12984 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field depth, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule depth;

  /// @brief Field color, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules, depth) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules, color) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules) == 0x8, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/<>c
class CORDL_TYPE UniversalRenderer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::UniversalRenderer___c* __9;

  /// @brief Field <>9__126_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__126_0,
                      put = setStaticF___9__126_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__126_0;

  /// @brief Field <>9__188_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__188_0, put = setStaticF___9__188_0)) ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* __9__188_0;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* New_ctor();

  /// @brief Method <BlitEmptyTexture>b__126_0, addr 0x6cb540c, size 0xd0, virtual false, abstract: false, final false
  inline void _BlitEmptyTexture_b__126_0(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData* data,
                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <OnAfterRendering>b__188_0, addr 0x6cb54dc, size 0x20, virtual false, abstract: false, final false
  inline bool _OnAfterRendering_b__188_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x);

  /// @brief Method .ctor, addr 0x6cb5408, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__126_0();

  static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__188_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::UniversalRenderer___c* value);

  static inline void setStaticF___9__126_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__188_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderer___c(UniversalRenderer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderer___c(UniversalRenderer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12985 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.LayerMask, UnityEngine.Rendering.RTHandle, UnityEngine.Rendering.StencilState, UnityEngine.Rendering.Universal.CopyDepthMode, UnityEngine.Rendering.Universal.DepthFormat,
// UnityEngine.Rendering.Universal.DepthPrimingMode, UnityEngine.Rendering.Universal.IntermediateTextureMode, UnityEngine.Rendering.Universal.RenderingLayerUtils::Event,
// UnityEngine.Rendering.Universal.RenderingLayerUtils::MaskSize, UnityEngine.Rendering.Universal.RenderingMode, UnityEngine.Rendering.Universal.ScriptableRenderer
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer
class CORDL_TYPE UniversalRenderer : public ::UnityEngine::Rendering::Universal::ScriptableRenderer {
public:
  // Declarations
  using ClearCameraParams = ::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams;

  using ColorCopySchedule = ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule;

  using CopyToDebugTexturePassData = ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData;

  using DepthCopySchedule = ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule;

  using OccluderPass = ::UnityEngine::Rendering::Universal::UniversalRenderer_OccluderPass;

  using RenderPassInputSummary = ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary;

  using TextureCopySchedules = ::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules;

  using __c = ::UnityEngine::Rendering::Universal::UniversalRenderer___c;

  /// @brief Field <opaqueLayerMask>k__BackingField, offset 0x1e4, size 0x4
  __declspec(property(get = __cordl_internal_get__opaqueLayerMask_k__BackingField,
                      put = __cordl_internal_set__opaqueLayerMask_k__BackingField)) ::UnityEngine::LayerMask _opaqueLayerMask_k__BackingField;

  /// @brief Field <prepassLayerMask>k__BackingField, offset 0x1e0, size 0x4
  __declspec(property(get = __cordl_internal_get__prepassLayerMask_k__BackingField,
                      put = __cordl_internal_set__prepassLayerMask_k__BackingField)) ::UnityEngine::LayerMask _prepassLayerMask_k__BackingField;

  /// @brief Field <shadowTransparentReceive>k__BackingField, offset 0x1ec, size 0x1
  __declspec(property(get = __cordl_internal_get__shadowTransparentReceive_k__BackingField,
                      put = __cordl_internal_set__shadowTransparentReceive_k__BackingField)) bool _shadowTransparentReceive_k__BackingField;

  /// @brief Field <transparentLayerMask>k__BackingField, offset 0x1e8, size 0x4
  __declspec(property(get = __cordl_internal_get__transparentLayerMask_k__BackingField,
                      put = __cordl_internal_set__transparentLayerMask_k__BackingField)) ::UnityEngine::LayerMask _transparentLayerMask_k__BackingField;

  __declspec(property(get = get_accurateGbufferNormals)) bool accurateGbufferNormals;

  __declspec(property(get = get_cameraDepthAttachmentFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat cameraDepthAttachmentFormat;

  __declspec(property(get = get_cameraDepthTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat cameraDepthTextureFormat;

  __declspec(property(get = get_currentRenderGraphCameraColorHandle)) ::UnityEngine::Rendering::RTHandle* currentRenderGraphCameraColorHandle;

  __declspec(property(get = get_deferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights;

  __declspec(property(get = get_deferredModeUnsupported)) bool deferredModeUnsupported;

  __declspec(property(get = get_depthPrimingMode, put = set_depthPrimingMode)) ::UnityEngine::Rendering::Universal::DepthPrimingMode depthPrimingMode;

  __declspec(property(get = get_isPostProcessPassRenderGraphActive)) bool isPostProcessPassRenderGraphActive;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowCasterPass,
                      put =
                          __cordl_internal_set_m_AdditionalLightsShadowCasterPass)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_BlitHDRMaterial, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitHDRMaterial, put = __cordl_internal_set_m_BlitHDRMaterial)) ::UnityW<::UnityEngine::Material> m_BlitHDRMaterial;

  /// @brief Field m_BlitMaterial, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial)) ::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_BlitOffscreenUICoverMaterial, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitOffscreenUICoverMaterial, put = __cordl_internal_set_m_BlitOffscreenUICoverMaterial)) ::UnityW<::UnityEngine::Material>
      m_BlitOffscreenUICoverMaterial;

  /// @brief Field m_CameraDepthAttachmentFormat, offset 0x184, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CameraDepthAttachmentFormat,
                      put = __cordl_internal_set_m_CameraDepthAttachmentFormat)) ::UnityEngine::Rendering::Universal::DepthFormat m_CameraDepthAttachmentFormat;

  /// @brief Field m_CameraDepthTextureFormat, offset 0x188, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CameraDepthTextureFormat,
                      put = __cordl_internal_set_m_CameraDepthTextureFormat)) ::UnityEngine::Rendering::Universal::DepthFormat m_CameraDepthTextureFormat;

  /// @brief Field m_CameraMotionVecMaterial, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraMotionVecMaterial, put = __cordl_internal_set_m_CameraMotionVecMaterial)) ::UnityW<::UnityEngine::Material> m_CameraMotionVecMaterial;

  /// @brief Field m_CapturePass, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CapturePass, put = __cordl_internal_set_m_CapturePass)) ::UnityEngine::Rendering::Universal::CapturePass* m_CapturePass;

  /// @brief Field m_ClusterDeferredMaterial, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClusterDeferredMaterial, put = __cordl_internal_set_m_ClusterDeferredMaterial)) ::UnityW<::UnityEngine::Material> m_ClusterDeferredMaterial;

  /// @brief Field m_ColorGradingLutPassRenderGraph, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorGradingLutPassRenderGraph,
                      put = __cordl_internal_set_m_ColorGradingLutPassRenderGraph)) ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* m_ColorGradingLutPassRenderGraph;

  /// @brief Field m_CopyColorPass, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyColorPass, put = __cordl_internal_set_m_CopyColorPass)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* m_CopyColorPass;

  /// @brief Field m_CopyDepthMode, offset 0x180, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMode, put = __cordl_internal_set_m_CopyDepthMode)) ::UnityEngine::Rendering::Universal::CopyDepthMode m_CopyDepthMode;

  /// @brief Field m_CopyDepthPass, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthPass, put = __cordl_internal_set_m_CopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_CopyDepthPass;

  /// @brief Field m_CurrentColorHandle, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_CurrentColorHandle, put = setStaticF_m_CurrentColorHandle)) int32_t m_CurrentColorHandle;

  /// @brief Field m_DebugBlitMaterial, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugBlitMaterial, put = __cordl_internal_set_m_DebugBlitMaterial)) ::UnityW<::UnityEngine::Material> m_DebugBlitMaterial;

  /// @brief Field m_DefaultStencilState, offset 0x18c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState)) ::UnityEngine::Rendering::StencilState m_DefaultStencilState;

  /// @brief Field m_DeferredLights, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_DeferredPass, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredPass, put = __cordl_internal_set_m_DeferredPass)) ::UnityEngine::Rendering::Universal::Internal::DeferredPass* m_DeferredPass;

  /// @brief Field m_DepthNormalPrepass, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthNormalPrepass,
                      put = __cordl_internal_set_m_DepthNormalPrepass)) ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* m_DepthNormalPrepass;

  /// @brief Field m_DepthPrepass, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthPrepass, put = __cordl_internal_set_m_DepthPrepass)) ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* m_DepthPrepass;

  /// @brief Field m_DepthPrimingMode, offset 0x17c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthPrimingMode, put = __cordl_internal_set_m_DepthPrimingMode)) ::UnityEngine::Rendering::Universal::DepthPrimingMode m_DepthPrimingMode;

  /// @brief Field m_DrawOffscreenUIPass, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawOffscreenUIPass,
                      put = __cordl_internal_set_m_DrawOffscreenUIPass)) ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* m_DrawOffscreenUIPass;

  /// @brief Field m_DrawOverlayUIPass, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawOverlayUIPass, put = __cordl_internal_set_m_DrawOverlayUIPass)) ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* m_DrawOverlayUIPass;

  /// @brief Field m_DrawSkyboxPass, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSkyboxPass, put = __cordl_internal_set_m_DrawSkyboxPass)) ::UnityEngine::Rendering::Universal::DrawSkyboxPass* m_DrawSkyboxPass;

  /// @brief Field m_FinalBlitPass, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinalBlitPass, put = __cordl_internal_set_m_FinalBlitPass)) ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_FinalBlitPass;

  /// @brief Field m_ForwardLights, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ForwardLights, put = __cordl_internal_set_m_ForwardLights)) ::UnityEngine::Rendering::Universal::Internal::ForwardLights* m_ForwardLights;

  /// @brief Field m_GBufferPass, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GBufferPass, put = __cordl_internal_set_m_GBufferPass)) ::UnityEngine::Rendering::Universal::Internal::GBufferPass* m_GBufferPass;

  /// @brief Field m_HistoryRawColorCopyPass, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HistoryRawColorCopyPass,
                      put = __cordl_internal_set_m_HistoryRawColorCopyPass)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* m_HistoryRawColorCopyPass;

  /// @brief Field m_HistoryRawDepthCopyPass, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HistoryRawDepthCopyPass,
                      put = __cordl_internal_set_m_HistoryRawDepthCopyPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_HistoryRawDepthCopyPass;

  /// @brief Field m_IntermediateTextureMode, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntermediateTextureMode,
                      put = __cordl_internal_set_m_IntermediateTextureMode)) ::UnityEngine::Rendering::Universal::IntermediateTextureMode m_IntermediateTextureMode;

  /// @brief Field m_IssuedGPUOcclusionUnsupportedMsg, offset 0x220, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg, put = __cordl_internal_set_m_IssuedGPUOcclusionUnsupportedMsg)) bool m_IssuedGPUOcclusionUnsupportedMsg;

  /// @brief Field m_LightCookieManager, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieManager, put = __cordl_internal_set_m_LightCookieManager)) ::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager;

  /// @brief Field m_MainLightShadowCasterPass, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowCasterPass,
                      put = __cordl_internal_set_m_MainLightShadowCasterPass)) ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* m_MainLightShadowCasterPass;

  /// @brief Field m_MotionVectorPass, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionVectorPass, put = __cordl_internal_set_m_MotionVectorPass)) ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* m_MotionVectorPass;

  /// @brief Field m_OffscreenUIColorHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_OffscreenUIColorHandle, put = setStaticF_m_OffscreenUIColorHandle)) ::UnityEngine::Rendering::RTHandle* m_OffscreenUIColorHandle;

  /// @brief Field m_OffscreenUICoverPrepass, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OffscreenUICoverPrepass,
                      put = __cordl_internal_set_m_OffscreenUICoverPrepass)) ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_OffscreenUICoverPrepass;

  /// @brief Field m_OnRenderObjectCallbackPass, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnRenderObjectCallbackPass,
                      put = __cordl_internal_set_m_OnRenderObjectCallbackPass)) ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* m_OnRenderObjectCallbackPass;

  /// @brief Field m_PostProcessPassRenderGraph, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PostProcessPassRenderGraph,
                      put = __cordl_internal_set_m_PostProcessPassRenderGraph)) ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph* m_PostProcessPassRenderGraph;

  /// @brief Field m_RenderGraphCameraColorHandles, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RenderGraphCameraColorHandles, put = setStaticF_m_RenderGraphCameraColorHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*>
      m_RenderGraphCameraColorHandles;

  /// @brief Field m_RenderGraphCameraDepthHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RenderGraphCameraDepthHandle, put = setStaticF_m_RenderGraphCameraDepthHandle)) ::UnityEngine::Rendering::RTHandle* m_RenderGraphCameraDepthHandle;

  /// @brief Field m_RenderGraphDebugTextureHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RenderGraphDebugTextureHandle, put = setStaticF_m_RenderGraphDebugTextureHandle)) ::UnityEngine::Rendering::RTHandle* m_RenderGraphDebugTextureHandle;

  /// @brief Field m_RenderOpaqueForwardOnlyPass, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderOpaqueForwardOnlyPass,
                      put = __cordl_internal_set_m_RenderOpaqueForwardOnlyPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardOnlyPass;

  /// @brief Field m_RenderOpaqueForwardPass, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderOpaqueForwardPass,
                      put = __cordl_internal_set_m_RenderOpaqueForwardPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardPass;

  /// @brief Field m_RenderOpaqueForwardWithRenderingLayersPass, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass,
                      put = __cordl_internal_set_m_RenderOpaqueForwardWithRenderingLayersPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*
      m_RenderOpaqueForwardWithRenderingLayersPass;

  /// @brief Field m_RenderTransparentForwardPass, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderTransparentForwardPass,
                      put = __cordl_internal_set_m_RenderTransparentForwardPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderTransparentForwardPass;

  /// @brief Field m_RenderingLayerProvidesByDepthNormalPass, offset 0x205, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass,
                      put = __cordl_internal_set_m_RenderingLayerProvidesByDepthNormalPass)) bool m_RenderingLayerProvidesByDepthNormalPass;

  /// @brief Field m_RenderingLayerProvidesRenderObjectPass, offset 0x204, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass,
                      put = __cordl_internal_set_m_RenderingLayerProvidesRenderObjectPass)) bool m_RenderingLayerProvidesRenderObjectPass;

  /// @brief Field m_RenderingLayersEvent, offset 0x1fc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingLayersEvent,
                      put = __cordl_internal_set_m_RenderingLayersEvent)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event m_RenderingLayersEvent;

  /// @brief Field m_RenderingLayersMaskSize, offset 0x200, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingLayersMaskSize,
                      put = __cordl_internal_set_m_RenderingLayersMaskSize)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize m_RenderingLayersMaskSize;

  /// @brief Field m_RenderingLayersTextureName, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderingLayersTextureName, put = __cordl_internal_set_m_RenderingLayersTextureName)) ::StringW m_RenderingLayersTextureName;

  /// @brief Field m_RenderingMode, offset 0x178, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingMode, put = __cordl_internal_set_m_RenderingMode)) ::UnityEngine::Rendering::Universal::RenderingMode m_RenderingMode;

  /// @brief Field m_RequiresIntermediateAttachments, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_RequiresIntermediateAttachments, put = setStaticF_m_RequiresIntermediateAttachments)) bool m_RequiresIntermediateAttachments;

  /// @brief Field m_RequiresRenderingLayer, offset 0x1f8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequiresRenderingLayer, put = __cordl_internal_set_m_RequiresRenderingLayer)) bool m_RequiresRenderingLayer;

  /// @brief Field m_SamplingMaterial, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingMaterial, put = __cordl_internal_set_m_SamplingMaterial)) ::UnityW<::UnityEngine::Material> m_SamplingMaterial;

  /// @brief Field m_StencilCrossFadeRenderPass, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilCrossFadeRenderPass,
                      put = __cordl_internal_set_m_StencilCrossFadeRenderPass)) ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* m_StencilCrossFadeRenderPass;

  /// @brief Field m_StencilDeferredMaterial, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilDeferredMaterial, put = __cordl_internal_set_m_StencilDeferredMaterial)) ::UnityW<::UnityEngine::Material> m_StencilDeferredMaterial;

  /// @brief Field m_TargetColorHandle, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetColorHandle, put = __cordl_internal_set_m_TargetColorHandle)) ::UnityEngine::Rendering::RTHandle* m_TargetColorHandle;

  /// @brief Field m_TargetDepthHandle, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetDepthHandle, put = __cordl_internal_set_m_TargetDepthHandle)) ::UnityEngine::Rendering::RTHandle* m_TargetDepthHandle;

  /// @brief Field m_TransparentSettingsPass, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransparentSettingsPass,
                      put = __cordl_internal_set_m_TransparentSettingsPass)) ::UnityEngine::Rendering::Universal::TransparentSettingsPass* m_TransparentSettingsPass;

  /// @brief Field m_XRCopyDepthPass, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRCopyDepthPass, put = __cordl_internal_set_m_XRCopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_XRCopyDepthPass;

  /// @brief Field m_XRDepthMotionPass, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRDepthMotionPass, put = __cordl_internal_set_m_XRDepthMotionPass)) ::UnityEngine::Rendering::Universal::XRDepthMotionPass* m_XRDepthMotionPass;

  /// @brief Field m_XROcclusionMeshPass, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XROcclusionMeshPass,
                      put = __cordl_internal_set_m_XROcclusionMeshPass)) ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* m_XROcclusionMeshPass;

  __declspec(property(get = get_needTransparencyPass)) bool needTransparencyPass;

  __declspec(property(get = get_nextRenderGraphCameraColorHandle)) ::UnityEngine::Rendering::RTHandle* nextRenderGraphCameraColorHandle;

  __declspec(property(get = get_opaqueLayerMask, put = set_opaqueLayerMask)) ::UnityEngine::LayerMask opaqueLayerMask;

  __declspec(property(get = get_prepassLayerMask, put = set_prepassLayerMask)) ::UnityEngine::LayerMask prepassLayerMask;

  __declspec(property(get = get_renderingModeActual)) ::UnityEngine::Rendering::Universal::RenderingMode renderingModeActual;

  __declspec(property(get = get_renderingModeRequested)) ::UnityEngine::Rendering::Universal::RenderingMode renderingModeRequested;

  __declspec(property(get = get_shadowTransparentReceive, put = set_shadowTransparentReceive)) bool shadowTransparentReceive;

  __declspec(property(get = get_supportsGPUOcclusion)) bool supportsGPUOcclusion;

  __declspec(property(get = get_supportsNativeRenderPassRendergraphCompiler)) bool supportsNativeRenderPassRendergraphCompiler;

  __declspec(property(get = get_transparentLayerMask, put = set_transparentLayerMask)) ::UnityEngine::LayerMask transparentLayerMask;

  __declspec(property(get = get_usesClusterLightLoop)) bool usesClusterLightLoop;

  __declspec(property(get = get_usesDeferredLighting)) bool usesDeferredLighting;

  /// @brief Method AllowPartialDepthNormalsPrepass, addr 0x6cb4944, size 0x1c, virtual false, abstract: false, final false
  static inline bool AllowPartialDepthNormalsPrepass(bool isDeferred, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalEvent, bool useDepthPriming);

  /// @brief Method BlitEmptyTexture, addr 0x6cadfc4, size 0x410, virtual false, abstract: false, final false
  inline void BlitEmptyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::StringW passName);

  /// @brief Method BlitToDebugTexture, addr 0x6cada68, size 0x2e8, virtual false, abstract: false, final false
  inline void BlitToDebugTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, bool isSourceTextureColor);

  /// @brief Method CalculateDepthCopySchedule, addr 0x6cb4960, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule CalculateDepthCopySchedule(::UnityEngine::Rendering::Universal::RenderPassEvent earliestDepthReadEvent,
                                                                                                             bool hasFullPrepass);

  /// @brief Method CalculateTextureCopySchedules, addr 0x6cb49b8, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules
  CalculateTextureCopySchedules(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs, bool isDeferred, bool requiresDepthPrepass,
                                bool hasFullPrepass, bool requireDepthTexture);

  /// @brief Method CalculateUVRect, addr 0x6cad24c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect CalculateUVRect(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, int32_t textureHeightPercent);

  /// @brief Method CalculateUVRect, addr 0x6cad218, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect CalculateUVRect(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, float_t width, float_t height);

  /// @brief Method CanCopyDepth, addr 0x6cacf60, size 0x14c, virtual false, abstract: false, final false
  static inline bool CanCopyDepth(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method CleanupRenderGraphResources, addr 0x6cabe24, size 0x14c, virtual false, abstract: false, final false
  inline void CleanupRenderGraphResources();

  /// @brief Method CopyDepthToDepthTexture, addr 0x6cb4a70, size 0xc0, virtual false, abstract: false, final false
  inline void CopyDepthToDepthTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData);

  /// @brief Method CorrectForTextureAspectRatio, addr 0x6cad2a4, size 0x40, virtual false, abstract: false, final false
  inline void CorrectForTextureAspectRatio(::by_ref<float_t> width, ::by_ref<float_t> height, float_t sourceWidth, float_t sourceHeight);

  /// @brief Method CreateAfterPostProcessTexture, addr 0x6cb51ac, size 0x128, virtual false, abstract: false, final false
  inline void CreateAfterPostProcessTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor descriptor);

  /// @brief Method CreateCameraDepthCopyTexture, addr 0x6cb0034, size 0x16c, virtual false, abstract: false, final false
  inline void CreateCameraDepthCopyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor,
                                           bool isDepthTexture, ::UnityEngine::Color clearColor);

  /// @brief Method CreateCameraNormalsTexture, addr 0x6cb01a0, size 0x1cc, virtual false, abstract: false, final false
  inline void CreateCameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor);

  /// @brief Method CreateDebugTexture, addr 0x6cad128, size 0xf0, virtual false, abstract: false, final false
  inline void CreateDebugTexture(::UnityEngine::RenderTextureDescriptor descriptor);

  /// @brief Method CreateIntermediateCameraColorAttachment, addr 0x6cafa34, size 0x2fc, virtual false, abstract: false, final false
  inline void CreateIntermediateCameraColorAttachment(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> cameraDescriptor, bool clearColor,
                                                      ::UnityEngine::Color clearBackgroundColor);

  /// @brief Method CreateIntermediateCameraDepthAttachment, addr 0x6cafd30, size 0x2f8, virtual false, abstract: false, final false
  inline void CreateIntermediateCameraDepthAttachment(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> cameraDescriptor, bool clearDepth,
                                                      ::UnityEngine::Color clearBackgroundDepth, bool depthTextureIsDepthFormat);

  /// @brief Method CreateMotionVectorTextures, addr 0x6cb036c, size 0x17c, virtual false, abstract: false, final false
  inline void CreateMotionVectorTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor);

  /// @brief Method CreateOffscreenUITexture, addr 0x6cb0724, size 0x188, virtual false, abstract: false, final false
  inline void CreateOffscreenUITexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor);

  /// @brief Method CreateRenderGraphCameraRenderTargets, addr 0x6caeaec, size 0x2d4, virtual false, abstract: false, final false
  inline void CreateRenderGraphCameraRenderTargets(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool isCameraTargetOffscreenDepth, bool requireIntermediateAttachments,
                                                   bool depthTextureIsDepthFormat);

  /// @brief Method CreateRenderGraphTexture, addr 0x6cae514, size 0xd0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                    ::UnityEngine::RenderTextureDescriptor desc, ::StringW name, bool clear,
                                                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode);

  /// @brief Method CreateRenderGraphTexture, addr 0x6cae78c, size 0x10c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> desc, ::StringW name,
                                                                                                    bool clear, ::UnityEngine::Color color, ::UnityEngine::FilterMode filterMode,
                                                                                                    ::UnityEngine::TextureWrapMode wrapMode, bool discardOnLastUse);

  /// @brief Method CreateRenderGraphTexture, addr 0x6cae898, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                    /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> desc,
                                                                                                    ::StringW name, bool clear, ::UnityEngine::Color clearColor, ::UnityEngine::FilterMode filterMode,
                                                                                                    ::UnityEngine::TextureWrapMode wrapMode, bool discardOnLastUse);

  /// @brief Method CreateRenderingLayersTexture, addr 0x6cb04e8, size 0x23c, virtual false, abstract: false, final false
  inline void CreateRenderingLayersTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor);

  /// @brief Method DebugHandlerRequireDepthPass, addr 0x6cad0b4, size 0x74, virtual false, abstract: false, final false
  inline bool DebugHandlerRequireDepthPass(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method DepthNormalPrepassRender, addr 0x6cb4be8, size 0x140, virtual false, abstract: false, final false
  inline void DepthNormalPrepassRender(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                       ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary renderPassInputs,
                                       /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> depthTarget, uint32_t batchLayerMask, bool setGlobalDepth,
                                       bool setGlobalTextures, bool partialPass);

  /// @brief Method Dispose, addr 0x6cabc1c, size 0x208, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method ExecuteScheduledDepthCopyWithMotion, addr 0x6cb48f4, size 0x50, virtual false, abstract: false, final false
  inline void ExecuteScheduledDepthCopyWithMotion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                  bool renderMotionVectors);

  /// @brief Method FinishRendering, addr 0x6cac90c, size 0x4, virtual true, abstract: false, final false
  inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetClearCameraParams, addr 0x6caedc0, size 0x1ac, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderer_ClearCameraParams GetClearCameraParams(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method GetRenderPassInputs, addr 0x6cac910, size 0x2dc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary
  GetRenderPassInputs(bool isTemporalAAEnabled, bool postProcessingEnabled, bool isSceneViewCamera, bool renderingLayerProvidesByDepthNormalPass,
                      ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue,
                      ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* motionVectorPass);

  /// @brief Method GetTextureDesc, addr 0x6cae5e4, size 0x1a8, virtual false, abstract: false, final false
  static inline void GetTextureDesc(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> desc, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> rgDesc);

  /// @brief Method HasActiveRenderFeatures, addr 0x6cac158, size 0x124, virtual false, abstract: false, final false
  static inline bool HasActiveRenderFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* rendererFeatures);

  /// @brief Method HasPassesRequiringIntermediateTexture, addr 0x6cac27c, size 0x124, virtual false, abstract: false, final false
  static inline bool HasPassesRequiringIntermediateTexture(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* activeRenderPassQueue);

  /// @brief Method ImportBackBuffers, addr 0x6caf404, size 0x630, virtual false, abstract: false, final false
  inline void ImportBackBuffers(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                ::UnityEngine::Color clearBackgroundColor, bool isCameraTargetOffscreenDepth);

  /// @brief Method InstanceOcclusionTest, addr 0x6cb4660, size 0x1f4, virtual false, abstract: false, final false
  inline void InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                    ::UnityEngine::Rendering::OcclusionTest occlusionTest);

  /// @brief Method IsDepthPrimingEnabledRenderGraph, addr 0x6cb1634, size 0xfc, virtual false, abstract: false, final false
  static inline bool IsDepthPrimingEnabledRenderGraph(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs,
                                                      ::UnityEngine::Rendering::Universal::DepthPrimingMode depthPrimingMode, bool requireDepthTexture, bool requirePrepassForTextures,
                                                      bool usesDeferredLighting);

  /// @brief Method IsGLDevice, addr 0x6cac0b4, size 0xa4, virtual false, abstract: false, final false
  static inline bool IsGLDevice();

  /// @brief Method IsGLESDevice, addr 0x6cac080, size 0x34, virtual false, abstract: false, final false
  static inline bool IsGLESDevice();

  /// @brief Method IsOffscreenDepthTexture, addr 0x6cabfe4, size 0x94, virtual false, abstract: false, final false
  static inline bool IsOffscreenDepthTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method IsOffscreenDepthTexture, addr 0x6ca6ec0, size 0x68, virtual false, abstract: false, final false
  static inline bool IsOffscreenDepthTexture(::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method IsScalableBufferManagerUsed, addr 0x6caceac, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsScalableBufferManagerUsed(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method IsWebGL, addr 0x6cac078, size 0x8, virtual false, abstract: false, final false
  static inline bool IsWebGL();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer* New_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data);

  /// @brief Method OnAfterRendering, addr 0x6cb3420, size 0xc10, virtual false, abstract: false, final false
  inline void OnAfterRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool applyPostProcessing);

  /// @brief Method OnBeforeRendering, addr 0x6cb1ca8, size 0x3d0, virtual false, abstract: false, final false
  inline void OnBeforeRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method OnBeginRenderGraphFrame, addr 0x6cb0ec0, size 0x64, virtual true, abstract: false, final false
  inline void OnBeginRenderGraphFrame();

  /// @brief Method OnEndRenderGraphFrame, addr 0x6cb4030, size 0x60, virtual true, abstract: false, final false
  inline void OnEndRenderGraphFrame();

  /// @brief Method OnFinishRenderGraphRendering, addr 0x6cb4098, size 0x6c, virtual true, abstract: false, final false
  inline void OnFinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnMainRendering, addr 0x6cb2078, size 0x13a8, virtual false, abstract: false, final false
  inline void OnMainRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context,
                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs, bool requiresPrepass,
                              bool requireDepthTexture);

  /// @brief Method OnOffscreenDepthTextureRendering, addr 0x6cb1730, size 0x578, virtual false, abstract: false, final false
  inline void OnOffscreenDepthTextureRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                               ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method OnRecordRenderGraph, addr 0x6cb0f30, size 0x5ec, virtual true, abstract: false, final false
  inline void OnRecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context);

  /// @brief Method PlatformRequiresExplicitMsaaResolve, addr 0x6cacbec, size 0xb0, virtual false, abstract: false, final false
  static inline bool PlatformRequiresExplicitMsaaResolve();

  /// @brief Method RecordCustomPassesWithDepthCopyAndMotion, addr 0x6cb4854, size 0xa0, virtual false, abstract: false, final false
  inline void RecordCustomPassesWithDepthCopyAndMotion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                       ::UnityEngine::Rendering::Universal::RenderPassEvent earliestDepthReadEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent currentEvent,
                                                       bool renderMotionVectors);

  /// @brief Method ReleaseRenderTargets, addr 0x6cabf70, size 0x74, virtual true, abstract: false, final false
  inline void ReleaseRenderTargets();

  /// @brief Method RenderMotionVectors, addr 0x6cb4b30, size 0xb0, virtual false, abstract: false, final false
  inline void RenderMotionVectors(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData);

  /// @brief Method RenderRawColorDepthHistory, addr 0x6cb09c0, size 0x4f0, virtual false, abstract: false, final false
  inline void RenderRawColorDepthHistory(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                         ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData);

  /// @brief Method RequireDepthTexture, addr 0x6cb151c, size 0x40, virtual false, abstract: false, final false
  static inline bool RequireDepthTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                         /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs, bool applyPostProcessing);

  /// @brief Method RequirePrepassForTextures, addr 0x6cb155c, size 0xd8, virtual false, abstract: false, final false
  inline bool RequirePrepassForTextures(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs, bool requireDepthTexture);

  /// @brief Method RequiresIntermediateAttachments, addr 0x6cae938, size 0xf4, virtual false, abstract: false, final false
  inline bool RequiresIntermediateAttachments(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs, bool requireCopyFromDepth,
                                              bool applyPostProcessing);

  /// @brief Method RequiresIntermediateColorTexture, addr 0x6cacc9c, size 0x210, virtual false, abstract: false, final false
  static inline bool RequiresIntermediateColorTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs,
                                                      bool usesDeferredLighting, bool applyPostProcessing);

  /// @brief Method SetRenderingLayersGlobalTextures, addr 0x6cb4d44, size 0x218, virtual false, abstract: false, final false
  inline void SetRenderingLayersGlobalTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Setup, addr 0x6cab8d4, size 0x4, virtual true, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupAfterPostRenderGraphFinalPassDebug, addr 0x6cadd58, size 0x264, virtual false, abstract: false, final false
  inline void SetupAfterPostRenderGraphFinalPassDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method SetupCullingParameters, addr 0x6cac60c, size 0x300, virtual true, abstract: false, final false
  inline void SetupCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ::by_ref<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method SetupLights, addr 0x6cab8d8, size 0x4, virtual true, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupRenderGraphFinalPassDebug, addr 0x6cad2e4, size 0x77c, virtual false, abstract: false, final false
  inline void SetupRenderGraphFinalPassDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method SetupRenderGraphLights, addr 0x6cb0940, size 0x80, virtual false, abstract: false, final false
  inline void SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupRenderingLayers, addr 0x6cb08c0, size 0x80, virtual false, abstract: false, final false
  inline void SetupRenderingLayers(int32_t msaaSamples);

  /// @brief Method SetupTargetHandles, addr 0x6caef6c, size 0x498, virtual false, abstract: false, final false
  inline void SetupTargetHandles(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetupVFXCameraBuffer, addr 0x6cac3a0, size 0x26c, virtual false, abstract: false, final false
  static inline void SetupVFXCameraBuffer(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SupportedCameraStackingTypes, addr 0x6cab8dc, size 0x24, virtual true, abstract: false, final false
  inline int32_t SupportedCameraStackingTypes();

  /// @brief Method SupportsCameraNormals, addr 0x6cab910, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsCameraNormals();

  /// @brief Method SupportsCameraOpaque, addr 0x6cab908, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsCameraOpaque();

  /// @brief Method SupportsMotionVectors, addr 0x6cab900, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsMotionVectors();

  /// @brief Method UpdateCameraHistory, addr 0x6caea2c, size 0xc0, virtual false, abstract: false, final false
  inline void UpdateCameraHistory(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method UpdateInstanceOccluders, addr 0x6cb4258, size 0x408, virtual false, abstract: false, final false
  inline void UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                      ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__opaqueLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__opaqueLayerMask_k__BackingField();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__prepassLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__prepassLayerMask_k__BackingField();

  constexpr bool const& __cordl_internal_get__shadowTransparentReceive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__shadowTransparentReceive_k__BackingField();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__transparentLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__transparentLayerMask_k__BackingField();

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const& __cordl_internal_get_m_AdditionalLightsShadowCasterPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& __cordl_internal_get_m_AdditionalLightsShadowCasterPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitHDRMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitHDRMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitOffscreenUICoverMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitOffscreenUICoverMaterial();

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& __cordl_internal_get_m_CameraDepthAttachmentFormat() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat& __cordl_internal_get_m_CameraDepthAttachmentFormat();

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& __cordl_internal_get_m_CameraDepthTextureFormat() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat& __cordl_internal_get_m_CameraDepthTextureFormat();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CameraMotionVecMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CameraMotionVecMaterial();

  constexpr ::UnityEngine::Rendering::Universal::CapturePass* const& __cordl_internal_get_m_CapturePass() const;

  constexpr ::UnityEngine::Rendering::Universal::CapturePass*& __cordl_internal_get_m_CapturePass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ClusterDeferredMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ClusterDeferredMaterial();

  constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* const& __cordl_internal_get_m_ColorGradingLutPassRenderGraph() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass*& __cordl_internal_get_m_ColorGradingLutPassRenderGraph();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& __cordl_internal_get_m_CopyColorPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& __cordl_internal_get_m_CopyColorPass();

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& __cordl_internal_get_m_CopyDepthMode() const;

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& __cordl_internal_get_m_CopyDepthMode();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_CopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_CopyDepthPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DebugBlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DebugBlitMaterial();

  constexpr ::UnityEngine::Rendering::StencilState const& __cordl_internal_get_m_DefaultStencilState() const;

  constexpr ::UnityEngine::Rendering::StencilState& __cordl_internal_get_m_DefaultStencilState();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_m_DeferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredPass* const& __cordl_internal_get_m_DeferredPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredPass*& __cordl_internal_get_m_DeferredPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* const& __cordl_internal_get_m_DepthNormalPrepass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass*& __cordl_internal_get_m_DepthNormalPrepass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* const& __cordl_internal_get_m_DepthPrepass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass*& __cordl_internal_get_m_DepthPrepass();

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode const& __cordl_internal_get_m_DepthPrimingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthPrimingMode& __cordl_internal_get_m_DepthPrimingMode();

  constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* const& __cordl_internal_get_m_DrawOffscreenUIPass() const;

  constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*& __cordl_internal_get_m_DrawOffscreenUIPass();

  constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* const& __cordl_internal_get_m_DrawOverlayUIPass() const;

  constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*& __cordl_internal_get_m_DrawOverlayUIPass();

  constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass* const& __cordl_internal_get_m_DrawSkyboxPass() const;

  constexpr ::UnityEngine::Rendering::Universal::DrawSkyboxPass*& __cordl_internal_get_m_DrawSkyboxPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* const& __cordl_internal_get_m_FinalBlitPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& __cordl_internal_get_m_FinalBlitPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights* const& __cordl_internal_get_m_ForwardLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::ForwardLights*& __cordl_internal_get_m_ForwardLights();

  constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass* const& __cordl_internal_get_m_GBufferPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::GBufferPass*& __cordl_internal_get_m_GBufferPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& __cordl_internal_get_m_HistoryRawColorCopyPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& __cordl_internal_get_m_HistoryRawColorCopyPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_HistoryRawDepthCopyPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_HistoryRawDepthCopyPass();

  constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode const& __cordl_internal_get_m_IntermediateTextureMode() const;

  constexpr ::UnityEngine::Rendering::Universal::IntermediateTextureMode& __cordl_internal_get_m_IntermediateTextureMode();

  constexpr bool const& __cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg() const;

  constexpr bool& __cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg();

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager* const& __cordl_internal_get_m_LightCookieManager() const;

  constexpr ::UnityEngine::Rendering::Universal::LightCookieManager*& __cordl_internal_get_m_LightCookieManager();

  constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* const& __cordl_internal_get_m_MainLightShadowCasterPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass*& __cordl_internal_get_m_MainLightShadowCasterPass();

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* const& __cordl_internal_get_m_MotionVectorPass() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass*& __cordl_internal_get_m_MotionVectorPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* const& __cordl_internal_get_m_OffscreenUICoverPrepass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass*& __cordl_internal_get_m_OffscreenUICoverPrepass();

  constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* const& __cordl_internal_get_m_OnRenderObjectCallbackPass() const;

  constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*& __cordl_internal_get_m_OnRenderObjectCallbackPass();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph* const& __cordl_internal_get_m_PostProcessPassRenderGraph() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph*& __cordl_internal_get_m_PostProcessPassRenderGraph();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& __cordl_internal_get_m_RenderOpaqueForwardOnlyPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderOpaqueForwardOnlyPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& __cordl_internal_get_m_RenderOpaqueForwardPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderOpaqueForwardPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* const& __cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*& __cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* const& __cordl_internal_get_m_RenderTransparentForwardPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass*& __cordl_internal_get_m_RenderTransparentForwardPass();

  constexpr bool const& __cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass() const;

  constexpr bool& __cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass();

  constexpr bool const& __cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass() const;

  constexpr bool& __cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass();

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event const& __cordl_internal_get_m_RenderingLayersEvent() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event& __cordl_internal_get_m_RenderingLayersEvent();

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const& __cordl_internal_get_m_RenderingLayersMaskSize() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize& __cordl_internal_get_m_RenderingLayersMaskSize();

  constexpr ::StringW const& __cordl_internal_get_m_RenderingLayersTextureName() const;

  constexpr ::StringW& __cordl_internal_get_m_RenderingLayersTextureName();

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode const& __cordl_internal_get_m_RenderingMode() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingMode& __cordl_internal_get_m_RenderingMode();

  constexpr bool const& __cordl_internal_get_m_RequiresRenderingLayer() const;

  constexpr bool& __cordl_internal_get_m_RequiresRenderingLayer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SamplingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SamplingMaterial();

  constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* const& __cordl_internal_get_m_StencilCrossFadeRenderPass() const;

  constexpr ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass*& __cordl_internal_get_m_StencilCrossFadeRenderPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_StencilDeferredMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_StencilDeferredMaterial();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_TargetColorHandle() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_TargetColorHandle();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_TargetDepthHandle() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_TargetDepthHandle();

  constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass* const& __cordl_internal_get_m_TransparentSettingsPass() const;

  constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass*& __cordl_internal_get_m_TransparentSettingsPass();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_XRCopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_XRCopyDepthPass();

  constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass* const& __cordl_internal_get_m_XRDepthMotionPass() const;

  constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass*& __cordl_internal_get_m_XRDepthMotionPass();

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* const& __cordl_internal_get_m_XROcclusionMeshPass() const;

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass*& __cordl_internal_get_m_XROcclusionMeshPass();

  constexpr void __cordl_internal_set__opaqueLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__prepassLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__shadowTransparentReceive_k__BackingField(bool value);

  constexpr void __cordl_internal_set__transparentLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value);

  constexpr void __cordl_internal_set_m_BlitHDRMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_BlitOffscreenUICoverMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CameraDepthAttachmentFormat(::UnityEngine::Rendering::Universal::DepthFormat value);

  constexpr void __cordl_internal_set_m_CameraDepthTextureFormat(::UnityEngine::Rendering::Universal::DepthFormat value);

  constexpr void __cordl_internal_set_m_CameraMotionVecMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CapturePass(::UnityEngine::Rendering::Universal::CapturePass* value);

  constexpr void __cordl_internal_set_m_ClusterDeferredMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_ColorGradingLutPassRenderGraph(::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* value);

  constexpr void __cordl_internal_set_m_CopyColorPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass* value);

  constexpr void __cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value);

  constexpr void __cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_DebugBlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::StencilState value);

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_DeferredPass(::UnityEngine::Rendering::Universal::Internal::DeferredPass* value);

  constexpr void __cordl_internal_set_m_DepthNormalPrepass(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* value);

  constexpr void __cordl_internal_set_m_DepthPrepass(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* value);

  constexpr void __cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  constexpr void __cordl_internal_set_m_DrawOffscreenUIPass(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* value);

  constexpr void __cordl_internal_set_m_DrawOverlayUIPass(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* value);

  constexpr void __cordl_internal_set_m_DrawSkyboxPass(::UnityEngine::Rendering::Universal::DrawSkyboxPass* value);

  constexpr void __cordl_internal_set_m_FinalBlitPass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value);

  constexpr void __cordl_internal_set_m_ForwardLights(::UnityEngine::Rendering::Universal::Internal::ForwardLights* value);

  constexpr void __cordl_internal_set_m_GBufferPass(::UnityEngine::Rendering::Universal::Internal::GBufferPass* value);

  constexpr void __cordl_internal_set_m_HistoryRawColorCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass* value);

  constexpr void __cordl_internal_set_m_HistoryRawDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value);

  constexpr void __cordl_internal_set_m_IssuedGPUOcclusionUnsupportedMsg(bool value);

  constexpr void __cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value);

  constexpr void __cordl_internal_set_m_MainLightShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* value);

  constexpr void __cordl_internal_set_m_MotionVectorPass(::UnityEngine::Rendering::Universal::MotionVectorRenderPass* value);

  constexpr void __cordl_internal_set_m_OffscreenUICoverPrepass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value);

  constexpr void __cordl_internal_set_m_OnRenderObjectCallbackPass(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* value);

  constexpr void __cordl_internal_set_m_PostProcessPassRenderGraph(::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph* value);

  constexpr void __cordl_internal_set_m_RenderOpaqueForwardOnlyPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value);

  constexpr void __cordl_internal_set_m_RenderOpaqueForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value);

  constexpr void __cordl_internal_set_m_RenderOpaqueForwardWithRenderingLayersPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* value);

  constexpr void __cordl_internal_set_m_RenderTransparentForwardPass(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* value);

  constexpr void __cordl_internal_set_m_RenderingLayerProvidesByDepthNormalPass(bool value);

  constexpr void __cordl_internal_set_m_RenderingLayerProvidesRenderObjectPass(bool value);

  constexpr void __cordl_internal_set_m_RenderingLayersEvent(::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event value);

  constexpr void __cordl_internal_set_m_RenderingLayersMaskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value);

  constexpr void __cordl_internal_set_m_RenderingLayersTextureName(::StringW value);

  constexpr void __cordl_internal_set_m_RenderingMode(::UnityEngine::Rendering::Universal::RenderingMode value);

  constexpr void __cordl_internal_set_m_RequiresRenderingLayer(bool value);

  constexpr void __cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_StencilCrossFadeRenderPass(::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* value);

  constexpr void __cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_TargetColorHandle(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_TargetDepthHandle(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_TransparentSettingsPass(::UnityEngine::Rendering::Universal::TransparentSettingsPass* value);

  constexpr void __cordl_internal_set_m_XRCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_XRDepthMotionPass(::UnityEngine::Rendering::Universal::XRDepthMotionPass* value);

  constexpr void __cordl_internal_set_m_XROcclusionMeshPass(::UnityEngine::Rendering::Universal::XROcclusionMeshPass* value);

  /// @brief Method .ctor, addr 0x6ca2568, size 0x10d4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data);

  static inline int32_t getStaticF_m_CurrentColorHandle();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_OffscreenUIColorHandle();

  static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> getStaticF_m_RenderGraphCameraColorHandles();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_RenderGraphCameraDepthHandle();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_RenderGraphDebugTextureHandle();

  static inline bool getStaticF_m_RequiresIntermediateAttachments();

  /// @brief Method get_accurateGbufferNormals, addr 0x6ca636c, size 0x20, virtual false, abstract: false, final false
  inline bool get_accurateGbufferNormals();

  /// @brief Method get_cameraDepthAttachmentFormat, addr 0x6cabbbc, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_cameraDepthAttachmentFormat();

  /// @brief Method get_cameraDepthTextureFormat, addr 0x6cabb5c, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_cameraDepthTextureFormat();

  /// @brief Method get_currentRenderGraphCameraColorHandle, addr 0x6cae3d4, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_currentRenderGraphCameraColorHandle();

  /// @brief Method get_deferredLights, addr 0x6cabb14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* get_deferredLights();

  /// @brief Method get_deferredModeUnsupported, addr 0x6cab920, size 0x74, virtual false, abstract: false, final false
  inline bool get_deferredModeUnsupported();

  /// @brief Method get_depthPrimingMode, addr 0x6cabaf4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DepthPrimingMode get_depthPrimingMode();

  /// @brief Method get_isPostProcessPassRenderGraphActive, addr 0x6cabb04, size 0x10, virtual false, abstract: false, final false
  inline bool get_isPostProcessPassRenderGraphActive();

  /// @brief Method get_needTransparencyPass, addr 0x6caba14, size 0xe0, virtual false, abstract: false, final false
  inline bool get_needTransparencyPass();

  /// @brief Method get_nextRenderGraphCameraColorHandle, addr 0x6cae478, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_nextRenderGraphCameraColorHandle();

  /// [CompilerGenerated]
  /// @brief Method get_opaqueLayerMask, addr 0x6cabb2c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_opaqueLayerMask();

  /// [CompilerGenerated]
  /// @brief Method get_prepassLayerMask, addr 0x6cabb1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_prepassLayerMask();

  /// @brief Method get_renderingModeActual, addr 0x6cab994, size 0x4c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingModeActual();

  /// @brief Method get_renderingModeRequested, addr 0x6cab918, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingModeRequested();

  /// [CompilerGenerated]
  /// @brief Method get_shadowTransparentReceive, addr 0x6cabb4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_shadowTransparentReceive();

  /// @brief Method get_supportsGPUOcclusion, addr 0x6cb4104, size 0xc0, virtual true, abstract: false, final false
  inline bool get_supportsGPUOcclusion();

  /// @brief Method get_supportsNativeRenderPassRendergraphCompiler, addr 0x6cad0ac, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsNativeRenderPassRendergraphCompiler();

  /// [CompilerGenerated]
  /// @brief Method get_transparentLayerMask, addr 0x6cabb3c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_transparentLayerMask();

  /// @brief Method get_usesClusterLightLoop, addr 0x6cab9e0, size 0x34, virtual false, abstract: false, final false
  inline bool get_usesClusterLightLoop();

  /// @brief Method get_usesDeferredLighting, addr 0x6ca6340, size 0x2c, virtual false, abstract: false, final false
  inline bool get_usesDeferredLighting();

  static inline void setStaticF_m_CurrentColorHandle(int32_t value);

  static inline void setStaticF_m_OffscreenUIColorHandle(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_RenderGraphCameraColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*> value);

  static inline void setStaticF_m_RenderGraphCameraDepthHandle(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_RenderGraphDebugTextureHandle(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_RequiresIntermediateAttachments(bool value);

  /// @brief Method set_depthPrimingMode, addr 0x6cabafc, size 0x8, virtual false, abstract: false, final false
  inline void set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  /// [CompilerGenerated]
  /// @brief Method set_opaqueLayerMask, addr 0x6cabb34, size 0x8, virtual false, abstract: false, final false
  inline void set_opaqueLayerMask(::UnityEngine::LayerMask value);

  /// [CompilerGenerated]
  /// @brief Method set_prepassLayerMask, addr 0x6cabb24, size 0x8, virtual false, abstract: false, final false
  inline void set_prepassLayerMask(::UnityEngine::LayerMask value);

  /// [CompilerGenerated]
  /// @brief Method set_shadowTransparentReceive, addr 0x6cabb54, size 0x8, virtual false, abstract: false, final false
  inline void set_shadowTransparentReceive(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_transparentLayerMask, addr 0x6cabb44, size 0x8, virtual false, abstract: false, final false
  inline void set_transparentLayerMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderer(UniversalRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderer(UniversalRenderer const&) = delete;

  /// @brief Field _CameraColorAfterPostProcessingName offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraColorAfterPostProcessingName{ u"_CameraColorAfterPostProcessing" };

  /// @brief Field _CameraColorUpscaled offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraColorUpscaled{ u"_CameraColorUpscaled" };

  /// @brief Field _CameraDepthAttachmentName offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraDepthAttachmentName{ u"_CameraDepthAttachment" };

  /// @brief Field _CameraTargetAttachmentAName offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraTargetAttachmentAName{ u"_CameraTargetAttachmentA" };

  /// @brief Field _CameraTargetAttachmentBName offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraTargetAttachmentBName{ u"_CameraTargetAttachmentB" };

  /// @brief Field _SingleCameraTargetAttachmentName offset 0xffffffff size 0x8
  static constexpr ::ConstString _SingleCameraTargetAttachmentName{ u"_CameraTargetAttachment" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12986 };

  /// @brief Field k_AfterFinalBlitPassQueueOffset offset 0xffffffff size 0x4
  static constexpr int32_t k_AfterFinalBlitPassQueueOffset{ static_cast<int32_t>(0x2) };

  /// @brief Field k_FinalBlitPassQueueOffset offset 0xffffffff size 0x4
  static constexpr int32_t k_FinalBlitPassQueueOffset{ static_cast<int32_t>(0x1) };

  /// @brief Field m_DepthPrepass, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* ___m_DepthPrepass;

  /// @brief Field m_DepthNormalPrepass, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* ___m_DepthNormalPrepass;

  /// @brief Field m_MotionVectorPass, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* ___m_MotionVectorPass;

  /// @brief Field m_MainLightShadowCasterPass, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* ___m_MainLightShadowCasterPass;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* ___m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_GBufferPass, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::GBufferPass* ___m_GBufferPass;

  /// @brief Field m_DeferredPass, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredPass* ___m_DeferredPass;

  /// @brief Field m_RenderOpaqueForwardOnlyPass, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderOpaqueForwardOnlyPass;

  /// @brief Field m_RenderOpaqueForwardPass, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderOpaqueForwardPass;

  /// @brief Field m_RenderOpaqueForwardWithRenderingLayersPass, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* ___m_RenderOpaqueForwardWithRenderingLayersPass;

  /// @brief Field m_DrawSkyboxPass, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DrawSkyboxPass* ___m_DrawSkyboxPass;

  /// @brief Field m_CopyDepthPass, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_CopyDepthPass;

  /// @brief Field m_CopyColorPass, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* ___m_CopyColorPass;

  /// @brief Field m_TransparentSettingsPass, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TransparentSettingsPass* ___m_TransparentSettingsPass;

  /// @brief Field m_RenderTransparentForwardPass, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderTransparentForwardPass;

  /// @brief Field m_OnRenderObjectCallbackPass, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* ___m_OnRenderObjectCallbackPass;

  /// @brief Field m_FinalBlitPass, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* ___m_FinalBlitPass;

  /// @brief Field m_OffscreenUICoverPrepass, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* ___m_OffscreenUICoverPrepass;

  /// @brief Field m_CapturePass, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::CapturePass* ___m_CapturePass;

  /// @brief Field m_XROcclusionMeshPass, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* ___m_XROcclusionMeshPass;

  /// @brief Field m_XRCopyDepthPass, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_XRCopyDepthPass;

  /// @brief Field m_XRDepthMotionPass, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XRDepthMotionPass* ___m_XRDepthMotionPass;

  /// @brief Field m_DrawOffscreenUIPass, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* ___m_DrawOffscreenUIPass;

  /// @brief Field m_DrawOverlayUIPass, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* ___m_DrawOverlayUIPass;

  /// @brief Field m_HistoryRawColorCopyPass, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* ___m_HistoryRawColorCopyPass;

  /// @brief Field m_HistoryRawDepthCopyPass, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_HistoryRawDepthCopyPass;

  /// @brief Field m_StencilCrossFadeRenderPass, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::StencilCrossFadeRenderPass* ___m_StencilCrossFadeRenderPass;

  /// @brief Field m_TargetColorHandle, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_TargetColorHandle;

  /// @brief Field m_TargetDepthHandle, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_TargetDepthHandle;

  /// @brief Field m_ForwardLights, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::ForwardLights* ___m_ForwardLights;

  /// @brief Field m_DeferredLights, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  /// @brief Field m_RenderingMode, offset: 0x178, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingMode ___m_RenderingMode;

  /// @brief Field m_DepthPrimingMode, offset: 0x17c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthPrimingMode ___m_DepthPrimingMode;

  /// @brief Field m_CopyDepthMode, offset: 0x180, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CopyDepthMode ___m_CopyDepthMode;

  /// @brief Field m_CameraDepthAttachmentFormat, offset: 0x184, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthFormat ___m_CameraDepthAttachmentFormat;

  /// @brief Field m_CameraDepthTextureFormat, offset: 0x188, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthFormat ___m_CameraDepthTextureFormat;

  /// @brief Field m_DefaultStencilState, offset: 0x18c, size: 0xc, def value: None
  ::UnityEngine::Rendering::StencilState ___m_DefaultStencilState;

  /// @brief Field m_LightCookieManager, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* ___m_LightCookieManager;

  /// @brief Field m_IntermediateTextureMode, offset: 0x1a0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::IntermediateTextureMode ___m_IntermediateTextureMode;

  /// @brief Field m_BlitMaterial, offset: 0x1a8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  /// @brief Field m_BlitHDRMaterial, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitHDRMaterial;

  /// @brief Field m_SamplingMaterial, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SamplingMaterial;

  /// @brief Field m_BlitOffscreenUICoverMaterial, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitOffscreenUICoverMaterial;

  /// @brief Field m_StencilDeferredMaterial, offset: 0x1c8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_StencilDeferredMaterial;

  /// @brief Field m_ClusterDeferredMaterial, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ClusterDeferredMaterial;

  /// @brief Field m_CameraMotionVecMaterial, offset: 0x1d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CameraMotionVecMaterial;

  /// [CompilerGenerated]
  /// @brief Field <prepassLayerMask>k__BackingField, offset: 0x1e0, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____prepassLayerMask_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <opaqueLayerMask>k__BackingField, offset: 0x1e4, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____opaqueLayerMask_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <transparentLayerMask>k__BackingField, offset: 0x1e8, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____transparentLayerMask_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <shadowTransparentReceive>k__BackingField, offset: 0x1ec, size: 0x1, def value: None
  bool ____shadowTransparentReceive_k__BackingField;

  /// @brief Field m_DebugBlitMaterial, offset: 0x1f0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DebugBlitMaterial;

  /// @brief Field m_RequiresRenderingLayer, offset: 0x1f8, size: 0x1, def value: None
  bool ___m_RequiresRenderingLayer;

  /// @brief Field m_RenderingLayersEvent, offset: 0x1fc, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event ___m_RenderingLayersEvent;

  /// @brief Field m_RenderingLayersMaskSize, offset: 0x200, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize ___m_RenderingLayersMaskSize;

  /// @brief Field m_RenderingLayerProvidesRenderObjectPass, offset: 0x204, size: 0x1, def value: None
  bool ___m_RenderingLayerProvidesRenderObjectPass;

  /// @brief Field m_RenderingLayerProvidesByDepthNormalPass, offset: 0x205, size: 0x1, def value: None
  bool ___m_RenderingLayerProvidesByDepthNormalPass;

  /// @brief Field m_RenderingLayersTextureName, offset: 0x208, size: 0x8, def value: None
  ::StringW ___m_RenderingLayersTextureName;

  /// @brief Field m_ColorGradingLutPassRenderGraph, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* ___m_ColorGradingLutPassRenderGraph;

  /// @brief Field m_PostProcessPassRenderGraph, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPassRenderGraph* ___m_PostProcessPassRenderGraph;

  /// @brief Field m_IssuedGPUOcclusionUnsupportedMsg, offset: 0x220, size: 0x1, def value: None
  bool ___m_IssuedGPUOcclusionUnsupportedMsg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrepass) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthNormalPrepass) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MotionVectorPass) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MainLightShadowCasterPass) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_AdditionalLightsShadowCasterPass) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_GBufferPass) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DeferredPass) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardOnlyPass) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardPass) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardWithRenderingLayersPass) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawSkyboxPass) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthPass) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyColorPass) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TransparentSettingsPass) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderTransparentForwardPass) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_OnRenderObjectCallbackPass) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_FinalBlitPass) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_OffscreenUICoverPrepass) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CapturePass) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XROcclusionMeshPass) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XRCopyDepthPass) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XRDepthMotionPass) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawOffscreenUIPass) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawOverlayUIPass) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_HistoryRawColorCopyPass) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_HistoryRawDepthCopyPass) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_StencilCrossFadeRenderPass) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TargetColorHandle) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TargetDepthHandle) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ForwardLights) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DeferredLights) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingMode) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrimingMode) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthMode) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthAttachmentFormat) == 0x184, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthTextureFormat) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DefaultStencilState) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_LightCookieManager) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_IntermediateTextureMode) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_BlitMaterial) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_BlitHDRMaterial) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_SamplingMaterial) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_BlitOffscreenUICoverMaterial) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_StencilDeferredMaterial) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ClusterDeferredMaterial) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraMotionVecMaterial) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____prepassLayerMask_k__BackingField) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____opaqueLayerMask_k__BackingField) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____transparentLayerMask_k__BackingField) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____shadowTransparentReceive_k__BackingField) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DebugBlitMaterial) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RequiresRenderingLayer) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersEvent) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersMaskSize) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayerProvidesRenderObjectPass) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayerProvidesByDepthNormalPass) == 0x205, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersTextureName) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ColorGradingLutPassRenderGraph) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_PostProcessPassRenderGraph) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_IssuedGPUOcclusionUnsupportedMsg) == 0x220, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::UniversalRenderer) == 0x228, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
