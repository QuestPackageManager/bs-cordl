#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CopyDepthMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthFormat_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DepthPrimingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__IntermediateTextureMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__PostProcessPasses_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/zzzz__StencilState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
namespace UnityEngine::Rendering::Universal::Internal {
class RenderTargetBufferSystem;
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
class PostProcessPass;
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
struct UniversalRenderer_ColorCopySchedule;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_CopyToDebugTexturePassData;
}
namespace UnityEngine::Rendering::Universal {
struct UniversalRenderer_DepthCopySchedule;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_Profiling;
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
class ProfilingSampler;
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
namespace UnityEngine::Rendering {
struct ShaderTagId;
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
class UniversalRenderer;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_CopyToDebugTexturePassData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer_Profiling;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderer___c;
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
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderer);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalRenderer___c);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary);
MARK_VAL_T(::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/Profiling
class CORDL_TYPE UniversalRenderer_Profiling : public ::System::Object {
public:
  // Declarations
  /// @brief Field createCameraRenderTarget, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_createCameraRenderTarget, put = setStaticF_createCameraRenderTarget)) ::UnityEngine::Rendering::ProfilingSampler* createCameraRenderTarget;

  static inline ::UnityEngine::Rendering::ProfilingSampler* getStaticF_createCameraRenderTarget();

  static inline void setStaticF_createCameraRenderTarget(::UnityEngine::Rendering::ProfilingSampler* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_Profiling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_Profiling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderer_Profiling(UniversalRenderer_Profiling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_Profiling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderer_Profiling(UniversalRenderer_Profiling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12975 };

  /// @brief Field k_Name offset 0xffffffff size 0x8
  static constexpr ::ConstString k_Name{ u"UniversalRenderer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
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

  // Ctor Parameters [CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requiresDepthPrepass", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "requiresNormalsTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requiresColorTexture", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "requiresColorTextureCreated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "requiresMotionVectors", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "requiresDepthNormalAtEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: None }, CppParam { name: "requiresDepthTextureEarliestEvent", ty:
  // "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: None }]
  constexpr UniversalRenderer_RenderPassInputSummary(bool requiresDepthTexture, bool requiresDepthPrepass, bool requiresNormalsTexture, bool requiresColorTexture, bool requiresColorTextureCreated,
                                                     bool requiresMotionVectors, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalAtEvent,
                                                     ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthTextureEarliestEvent) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12976 };

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

  /// @brief Field requiresColorTextureCreated, offset: 0x4, size: 0x1, def value: None
  bool requiresColorTextureCreated;

  /// @brief Field requiresMotionVectors, offset: 0x5, size: 0x1, def value: None
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

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresColorTextureCreated) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresMotionVectors) == 0x5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresDepthNormalAtEvent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, requiresDepthTextureEarliestEvent) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, 0x10>, "Size mismatch!");

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

  /// @brief Method .ctor, addr 0x671fe4c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer_CopyToDebugTexturePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_CopyToDebugTexturePassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderer_CopyToDebugTexturePassData(UniversalRenderer_CopyToDebugTexturePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer_CopyToDebugTexturePassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderer_CopyToDebugTexturePassData(UniversalRenderer_CopyToDebugTexturePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12977 };

  /// @brief Field src, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___src;

  /// @brief Field dest, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___dest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData, ___src) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData, ___dest) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData, 0x30>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12978 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule, 0x4>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UniversalRenderer_ColorCopySchedule(int32_t value__) noexcept;

  /// @brief Field AfterSkybox value: I32(0)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule const AfterSkybox;

  /// @brief Field None value: I32(1)
  static ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12979 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule, 0x4>, "Size mismatch!");

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

  // Ctor Parameters [CppParam { name: "depth", ty: "::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule", modifiers: "", def_value: None }, CppParam { name: "color", ty:
  // "::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule", modifiers: "", def_value: None }]
  constexpr UniversalRenderer_TextureCopySchedules(::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule depth,
                                                   ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule color) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12980 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules, 0x8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/<>c
class CORDL_TYPE UniversalRenderer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::UniversalRenderer___c* __9;

  /// @brief Field <>9__110_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__110_0, put = setStaticF___9__110_0)) ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* __9__110_0;

  /// @brief Field <>9__110_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__110_1, put = setStaticF___9__110_1)) ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* __9__110_1;

  /// @brief Field <>9__139_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__139_0,
                      put = setStaticF___9__139_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__139_0;

  /// @brief Field <>9__194_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__194_0, put = setStaticF___9__194_0)) ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* __9__194_0;

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* New_ctor();

  /// @brief Method <BlitEmptyTexture>b__139_0, addr 0x671fef4, size 0xd0, virtual false, abstract: false, final false
  inline void _BlitEmptyTexture_b__139_0(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData* data,
                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <OnAfterRendering>b__194_0, addr 0x671ffc4, size 0x1c, virtual false, abstract: false, final false
  inline bool _OnAfterRendering_b__194_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x);

  /// @brief Method <Setup>b__110_0, addr 0x671fea8, size 0x1c, virtual false, abstract: false, final false
  inline bool _Setup_b__110_0(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x);

  /// @brief Method <Setup>b__110_1, addr 0x671fec4, size 0x30, virtual false, abstract: false, final false
  inline bool _Setup_b__110_1(::UnityEngine::Rendering::Universal::ScriptableRenderPass* x);

  /// @brief Method .ctor, addr 0x671fea4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__110_0();

  static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__110_1();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__139_0();

  static inline ::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* getStaticF___9__194_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::UniversalRenderer___c* value);

  static inline void setStaticF___9__110_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

  static inline void setStaticF___9__110_1(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

  static inline void setStaticF___9__139_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__194_0(::System::Predicate_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderer___c(UniversalRenderer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderer___c(UniversalRenderer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12981 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.LayerMask, UnityEngine.Rendering.StencilState, UnityEngine.Rendering.Universal.CopyDepthMode,
// UnityEngine.Rendering.Universal.DepthFormat, UnityEngine.Rendering.Universal.DepthPrimingMode, UnityEngine.Rendering.Universal.IntermediateTextureMode,
// UnityEngine.Rendering.Universal.PostProcessPasses, UnityEngine.Rendering.Universal.RenderingLayerUtils::Event, UnityEngine.Rendering.Universal.RenderingLayerUtils::MaskSize,
// UnityEngine.Rendering.Universal.RenderingMode, UnityEngine.Rendering.Universal.ScriptableRenderer
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer
class CORDL_TYPE UniversalRenderer : public ::UnityEngine::Rendering::Universal::ScriptableRenderer {
public:
  // Declarations
  using ColorCopySchedule = ::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule;

  using CopyToDebugTexturePassData = ::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData;

  using DepthCopySchedule = ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule;

  using Profiling = ::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling;

  using RenderPassInputSummary = ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary;

  using TextureCopySchedules = ::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules;

  using __c = ::UnityEngine::Rendering::Universal::UniversalRenderer___c;

  /// @brief Field <opaqueLayerMask>k__BackingField, offset 0x340, size 0x4
  __declspec(property(get = __cordl_internal_get__opaqueLayerMask_k__BackingField,
                      put = __cordl_internal_set__opaqueLayerMask_k__BackingField)) ::UnityEngine::LayerMask _opaqueLayerMask_k__BackingField;

  /// @brief Field <transparentLayerMask>k__BackingField, offset 0x344, size 0x4
  __declspec(property(get = __cordl_internal_get__transparentLayerMask_k__BackingField,
                      put = __cordl_internal_set__transparentLayerMask_k__BackingField)) ::UnityEngine::LayerMask _transparentLayerMask_k__BackingField;

  __declspec(property(get = get_accurateGbufferNormals)) bool accurateGbufferNormals;

  __declspec(property(get = get_cameraDepthAttachmentFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat cameraDepthAttachmentFormat;

  __declspec(property(get = get_cameraDepthTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat cameraDepthTextureFormat;

  __declspec(property(get = get_colorGradingLut)) ::UnityEngine::Rendering::RTHandle* colorGradingLut;

  __declspec(property(get = get_colorGradingLutPass)) ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* colorGradingLutPass;

  __declspec(property(get = get_currentRenderGraphCameraColorHandle)) ::UnityEngine::Rendering::RTHandle* currentRenderGraphCameraColorHandle;

  __declspec(property(get = get_deferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights;

  __declspec(property(get = get_depthPrimingMode, put = set_depthPrimingMode)) ::UnityEngine::Rendering::Universal::DepthPrimingMode depthPrimingMode;

  __declspec(property(get = get_finalPostProcessPass)) ::UnityEngine::Rendering::Universal::PostProcessPass* finalPostProcessPass;

  /// @brief Field k_DepthNormalsOnly, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DepthNormalsOnly, put = setStaticF_k_DepthNormalsOnly)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* k_DepthNormalsOnly;

  /// @brief Field m_ActiveCameraColorAttachment, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveCameraColorAttachment,
                      put = __cordl_internal_set_m_ActiveCameraColorAttachment)) ::UnityEngine::Rendering::RTHandle* m_ActiveCameraColorAttachment;

  /// @brief Field m_ActiveCameraDepthAttachment, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveCameraDepthAttachment,
                      put = __cordl_internal_set_m_ActiveCameraDepthAttachment)) ::UnityEngine::Rendering::RTHandle* m_ActiveCameraDepthAttachment;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AdditionalLightsShadowCasterPass,
                      put =
                          __cordl_internal_set_m_AdditionalLightsShadowCasterPass)) ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_BlitHDRMaterial, offset 0x2e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitHDRMaterial, put = __cordl_internal_set_m_BlitHDRMaterial)) ::UnityW<::UnityEngine::Material> m_BlitHDRMaterial;

  /// @brief Field m_BlitMaterial, offset 0x2d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlitMaterial, put = __cordl_internal_set_m_BlitMaterial)) ::UnityW<::UnityEngine::Material> m_BlitMaterial;

  /// @brief Field m_CameraDepthAttachment, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraDepthAttachment, put = __cordl_internal_set_m_CameraDepthAttachment)) ::UnityEngine::Rendering::RTHandle* m_CameraDepthAttachment;

  /// @brief Field m_CameraDepthAttachmentFormat, offset 0x2ac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CameraDepthAttachmentFormat,
                      put = __cordl_internal_set_m_CameraDepthAttachmentFormat)) ::UnityEngine::Rendering::Universal::DepthFormat m_CameraDepthAttachmentFormat;

  /// @brief Field m_CameraDepthAttachment_D3d_11, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraDepthAttachment_D3d_11,
                      put = __cordl_internal_set_m_CameraDepthAttachment_D3d_11)) ::UnityEngine::Rendering::RTHandle* m_CameraDepthAttachment_D3d_11;

  /// @brief Field m_CameraDepthTextureFormat, offset 0x2b0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CameraDepthTextureFormat,
                      put = __cordl_internal_set_m_CameraDepthTextureFormat)) ::UnityEngine::Rendering::Universal::DepthFormat m_CameraDepthTextureFormat;

  /// @brief Field m_CameraMotionVecMaterial, offset 0x2f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CameraMotionVecMaterial, put = __cordl_internal_set_m_CameraMotionVecMaterial)) ::UnityW<::UnityEngine::Material> m_CameraMotionVecMaterial;

  /// @brief Field m_CapturePass, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CapturePass, put = __cordl_internal_set_m_CapturePass)) ::UnityEngine::Rendering::Universal::CapturePass* m_CapturePass;

  /// @brief Field m_Clustering, offset 0x143, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Clustering, put = __cordl_internal_set_m_Clustering)) bool m_Clustering;

  /// @brief Field m_ColorBufferSystem, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorBufferSystem,
                      put = __cordl_internal_set_m_ColorBufferSystem)) ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* m_ColorBufferSystem;

  /// @brief Field m_ColorFrontBuffer, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorFrontBuffer, put = __cordl_internal_set_m_ColorFrontBuffer)) ::UnityEngine::Rendering::RTHandle* m_ColorFrontBuffer;

  /// @brief Field m_CopyColorPass, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyColorPass, put = __cordl_internal_set_m_CopyColorPass)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* m_CopyColorPass;

  /// @brief Field m_CopyDepthMode, offset 0x2a8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMode, put = __cordl_internal_set_m_CopyDepthMode)) ::UnityEngine::Rendering::Universal::CopyDepthMode m_CopyDepthMode;

  /// @brief Field m_CopyDepthPass, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthPass, put = __cordl_internal_set_m_CopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_CopyDepthPass;

  /// @brief Field m_CurrentColorHandle, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_CurrentColorHandle, put = setStaticF_m_CurrentColorHandle)) int32_t m_CurrentColorHandle;

  /// @brief Field m_DebugBlitMaterial, offset 0x348, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugBlitMaterial, put = __cordl_internal_set_m_DebugBlitMaterial)) ::UnityW<::UnityEngine::Material> m_DebugBlitMaterial;

  /// @brief Field m_DecalLayersTexture, offset 0x270, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DecalLayersTexture, put = __cordl_internal_set_m_DecalLayersTexture)) ::UnityEngine::Rendering::RTHandle* m_DecalLayersTexture;

  /// @brief Field m_DefaultStencilState, offset 0x2b5, size 0xc
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState)) ::UnityEngine::Rendering::StencilState m_DefaultStencilState;

  /// @brief Field m_DeferredLights, offset 0x298, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Field m_DeferredPass, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredPass, put = __cordl_internal_set_m_DeferredPass)) ::UnityEngine::Rendering::Universal::Internal::DeferredPass* m_DeferredPass;

  /// @brief Field m_DepthNormalPrepass, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthNormalPrepass,
                      put = __cordl_internal_set_m_DepthNormalPrepass)) ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* m_DepthNormalPrepass;

  /// @brief Field m_DepthPrepass, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthPrepass, put = __cordl_internal_set_m_DepthPrepass)) ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* m_DepthPrepass;

  /// @brief Field m_DepthPrimingMode, offset 0x2a4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DepthPrimingMode, put = __cordl_internal_set_m_DepthPrimingMode)) ::UnityEngine::Rendering::Universal::DepthPrimingMode m_DepthPrimingMode;

  /// @brief Field m_DepthPrimingRecommended, offset 0x2b4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DepthPrimingRecommended, put = __cordl_internal_set_m_DepthPrimingRecommended)) bool m_DepthPrimingRecommended;

  /// @brief Field m_DepthTexture, offset 0x260, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthTexture, put = __cordl_internal_set_m_DepthTexture)) ::UnityEngine::Rendering::RTHandle* m_DepthTexture;

  /// @brief Field m_DrawOffscreenUIPass, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawOffscreenUIPass,
                      put = __cordl_internal_set_m_DrawOffscreenUIPass)) ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* m_DrawOffscreenUIPass;

  /// @brief Field m_DrawOverlayUIPass, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawOverlayUIPass, put = __cordl_internal_set_m_DrawOverlayUIPass)) ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* m_DrawOverlayUIPass;

  /// @brief Field m_DrawSkyboxPass, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSkyboxPass, put = __cordl_internal_set_m_DrawSkyboxPass)) ::UnityEngine::Rendering::Universal::DrawSkyboxPass* m_DrawSkyboxPass;

  /// @brief Field m_FinalBlitPass, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FinalBlitPass, put = __cordl_internal_set_m_FinalBlitPass)) ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* m_FinalBlitPass;

  /// @brief Field m_ForwardLights, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ForwardLights, put = __cordl_internal_set_m_ForwardLights)) ::UnityEngine::Rendering::Universal::Internal::ForwardLights* m_ForwardLights;

  /// @brief Field m_GBufferCopyDepthPass, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GBufferCopyDepthPass,
                      put = __cordl_internal_set_m_GBufferCopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_GBufferCopyDepthPass;

  /// @brief Field m_GBufferPass, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GBufferPass, put = __cordl_internal_set_m_GBufferPass)) ::UnityEngine::Rendering::Universal::Internal::GBufferPass* m_GBufferPass;

  /// @brief Field m_HistoryRawColorCopyPass, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HistoryRawColorCopyPass,
                      put = __cordl_internal_set_m_HistoryRawColorCopyPass)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* m_HistoryRawColorCopyPass;

  /// @brief Field m_HistoryRawDepthCopyPass, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_m_HistoryRawDepthCopyPass,
                      put = __cordl_internal_set_m_HistoryRawDepthCopyPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_HistoryRawDepthCopyPass;

  /// @brief Field m_IntermediateTextureMode, offset 0x2d0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IntermediateTextureMode,
                      put = __cordl_internal_set_m_IntermediateTextureMode)) ::UnityEngine::Rendering::Universal::IntermediateTextureMode m_IntermediateTextureMode;

  /// @brief Field m_IssuedGPUOcclusionUnsupportedMsg, offset 0x368, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IssuedGPUOcclusionUnsupportedMsg, put = __cordl_internal_set_m_IssuedGPUOcclusionUnsupportedMsg)) bool m_IssuedGPUOcclusionUnsupportedMsg;

  /// @brief Field m_LightCookieManager, offset 0x2c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LightCookieManager, put = __cordl_internal_set_m_LightCookieManager)) ::UnityEngine::Rendering::Universal::LightCookieManager* m_LightCookieManager;

  /// @brief Field m_MainLightShadowCasterPass, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MainLightShadowCasterPass,
                      put = __cordl_internal_set_m_MainLightShadowCasterPass)) ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* m_MainLightShadowCasterPass;

  /// @brief Field m_MotionVectorColor, offset 0x280, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionVectorColor, put = __cordl_internal_set_m_MotionVectorColor)) ::UnityEngine::Rendering::RTHandle* m_MotionVectorColor;

  /// @brief Field m_MotionVectorDepth, offset 0x288, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionVectorDepth, put = __cordl_internal_set_m_MotionVectorDepth)) ::UnityEngine::Rendering::RTHandle* m_MotionVectorDepth;

  /// @brief Field m_MotionVectorPass, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionVectorPass, put = __cordl_internal_set_m_MotionVectorPass)) ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* m_MotionVectorPass;

  /// @brief Field m_NormalsTexture, offset 0x268, size 0x8
  __declspec(property(get = __cordl_internal_get_m_NormalsTexture, put = __cordl_internal_set_m_NormalsTexture)) ::UnityEngine::Rendering::RTHandle* m_NormalsTexture;

  /// @brief Field m_OnRenderObjectCallbackPass, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnRenderObjectCallbackPass,
                      put = __cordl_internal_set_m_OnRenderObjectCallbackPass)) ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* m_OnRenderObjectCallbackPass;

  /// @brief Field m_OpaqueColor, offset 0x278, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OpaqueColor, put = __cordl_internal_set_m_OpaqueColor)) ::UnityEngine::Rendering::RTHandle* m_OpaqueColor;

  /// @brief Field m_PostProcessPasses, offset 0x300, size 0x40
  __declspec(property(get = __cordl_internal_get_m_PostProcessPasses, put = __cordl_internal_set_m_PostProcessPasses)) ::UnityEngine::Rendering::Universal::PostProcessPasses m_PostProcessPasses;

  /// @brief Field m_PrimedDepthCopyPass, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PrimedDepthCopyPass,
                      put = __cordl_internal_set_m_PrimedDepthCopyPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_PrimedDepthCopyPass;

  /// @brief Field m_RenderGraphCameraColorHandles, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RenderGraphCameraColorHandles,
                      put = setStaticF_m_RenderGraphCameraColorHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_RenderGraphCameraColorHandles;

  /// @brief Field m_RenderGraphCameraDepthHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RenderGraphCameraDepthHandle, put = setStaticF_m_RenderGraphCameraDepthHandle)) ::UnityEngine::Rendering::RTHandle* m_RenderGraphCameraDepthHandle;

  /// @brief Field m_RenderGraphDebugTextureHandle, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RenderGraphDebugTextureHandle, put = setStaticF_m_RenderGraphDebugTextureHandle)) ::UnityEngine::Rendering::RTHandle* m_RenderGraphDebugTextureHandle;

  /// @brief Field m_RenderGraphUpscaledCameraColorHandles, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RenderGraphUpscaledCameraColorHandles,
                      put = setStaticF_m_RenderGraphUpscaledCameraColorHandles)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_RenderGraphUpscaledCameraColorHandles;

  /// @brief Field m_RenderOpaqueForwardOnlyPass, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderOpaqueForwardOnlyPass,
                      put = __cordl_internal_set_m_RenderOpaqueForwardOnlyPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardOnlyPass;

  /// @brief Field m_RenderOpaqueForwardPass, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderOpaqueForwardPass,
                      put = __cordl_internal_set_m_RenderOpaqueForwardPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderOpaqueForwardPass;

  /// @brief Field m_RenderOpaqueForwardWithRenderingLayersPass, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderOpaqueForwardWithRenderingLayersPass,
                      put = __cordl_internal_set_m_RenderOpaqueForwardWithRenderingLayersPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*
      m_RenderOpaqueForwardWithRenderingLayersPass;

  /// @brief Field m_RenderTransparentForwardPass, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderTransparentForwardPass,
                      put = __cordl_internal_set_m_RenderTransparentForwardPass)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* m_RenderTransparentForwardPass;

  /// @brief Field m_RenderingLayerProvidesByDepthNormalPass, offset 0x35d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RenderingLayerProvidesByDepthNormalPass,
                      put = __cordl_internal_set_m_RenderingLayerProvidesByDepthNormalPass)) bool m_RenderingLayerProvidesByDepthNormalPass;

  /// @brief Field m_RenderingLayerProvidesRenderObjectPass, offset 0x35c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RenderingLayerProvidesRenderObjectPass,
                      put = __cordl_internal_set_m_RenderingLayerProvidesRenderObjectPass)) bool m_RenderingLayerProvidesRenderObjectPass;

  /// @brief Field m_RenderingLayersEvent, offset 0x354, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingLayersEvent,
                      put = __cordl_internal_set_m_RenderingLayersEvent)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event m_RenderingLayersEvent;

  /// @brief Field m_RenderingLayersMaskSize, offset 0x358, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingLayersMaskSize,
                      put = __cordl_internal_set_m_RenderingLayersMaskSize)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize m_RenderingLayersMaskSize;

  /// @brief Field m_RenderingLayersTextureName, offset 0x360, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderingLayersTextureName, put = __cordl_internal_set_m_RenderingLayersTextureName)) ::StringW m_RenderingLayersTextureName;

  /// @brief Field m_RenderingMode, offset 0x2a0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderingMode, put = __cordl_internal_set_m_RenderingMode)) ::UnityEngine::Rendering::Universal::RenderingMode m_RenderingMode;

  /// @brief Field m_RequiresIntermediateAttachments, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_RequiresIntermediateAttachments, put = setStaticF_m_RequiresIntermediateAttachments)) bool m_RequiresIntermediateAttachments;

  /// @brief Field m_RequiresRenderingLayer, offset 0x350, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequiresRenderingLayer, put = __cordl_internal_set_m_RequiresRenderingLayer)) bool m_RequiresRenderingLayer;

  /// @brief Field m_SamplingMaterial, offset 0x2e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingMaterial, put = __cordl_internal_set_m_SamplingMaterial)) ::UnityW<::UnityEngine::Material> m_SamplingMaterial;

  /// @brief Field m_StencilDeferredMaterial, offset 0x2f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StencilDeferredMaterial, put = __cordl_internal_set_m_StencilDeferredMaterial)) ::UnityW<::UnityEngine::Material> m_StencilDeferredMaterial;

  /// @brief Field m_TargetColorHandle, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetColorHandle, put = __cordl_internal_set_m_TargetColorHandle)) ::UnityEngine::Rendering::RTHandle* m_TargetColorHandle;

  /// @brief Field m_TargetDepthHandle, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetDepthHandle, put = __cordl_internal_set_m_TargetDepthHandle)) ::UnityEngine::Rendering::RTHandle* m_TargetDepthHandle;

  /// @brief Field m_TransparentSettingsPass, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TransparentSettingsPass,
                      put = __cordl_internal_set_m_TransparentSettingsPass)) ::UnityEngine::Rendering::Universal::TransparentSettingsPass* m_TransparentSettingsPass;

  /// @brief Field m_UseUpscaledColorHandle, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_UseUpscaledColorHandle, put = setStaticF_m_UseUpscaledColorHandle)) bool m_UseUpscaledColorHandle;

  /// @brief Field m_VulkanEnablePreTransform, offset 0x2d4, size 0x1
  __declspec(property(get = __cordl_internal_get_m_VulkanEnablePreTransform, put = __cordl_internal_set_m_VulkanEnablePreTransform)) bool m_VulkanEnablePreTransform;

  /// @brief Field m_XRCopyDepthPass, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRCopyDepthPass, put = __cordl_internal_set_m_XRCopyDepthPass)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* m_XRCopyDepthPass;

  /// @brief Field m_XRDepthMotionPass, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XRDepthMotionPass, put = __cordl_internal_set_m_XRDepthMotionPass)) ::UnityEngine::Rendering::Universal::XRDepthMotionPass* m_XRDepthMotionPass;

  /// @brief Field m_XROcclusionMeshPass, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_XROcclusionMeshPass,
                      put = __cordl_internal_set_m_XROcclusionMeshPass)) ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* m_XROcclusionMeshPass;

  __declspec(property(get = get_nextRenderGraphCameraColorHandle)) ::UnityEngine::Rendering::RTHandle* nextRenderGraphCameraColorHandle;

  __declspec(property(get = get_opaqueLayerMask, put = set_opaqueLayerMask)) ::UnityEngine::LayerMask opaqueLayerMask;

  __declspec(property(get = get_postProcessPass)) ::UnityEngine::Rendering::Universal::PostProcessPass* postProcessPass;

  __declspec(property(get = get_renderingModeActual)) ::UnityEngine::Rendering::Universal::RenderingMode renderingModeActual;

  __declspec(property(get = get_renderingModeRequested)) ::UnityEngine::Rendering::Universal::RenderingMode renderingModeRequested;

  __declspec(property(get = get_supportsGPUOcclusion)) bool supportsGPUOcclusion;

  __declspec(property(get = get_supportsNativeRenderPassRendergraphCompiler)) bool supportsNativeRenderPassRendergraphCompiler;

  __declspec(property(get = get_transparentLayerMask, put = set_transparentLayerMask)) ::UnityEngine::LayerMask transparentLayerMask;

  /// @brief Method AllowPartialDepthNormalsPrepass, addr 0x671f04c, size 0x14, virtual false, abstract: false, final false
  inline bool AllowPartialDepthNormalsPrepass(bool isDeferred, ::UnityEngine::Rendering::Universal::RenderPassEvent requiresDepthNormalEvent);

  /// @brief Method BlitEmptyTexture, addr 0x6719174, size 0x410, virtual false, abstract: false, final false
  inline void BlitEmptyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::StringW passName);

  /// @brief Method BlitToDebugTexture, addr 0x6718c1c, size 0x2f4, virtual false, abstract: false, final false
  inline void BlitToDebugTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source,
                                 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, bool isSourceTextureColor);

  /// @brief Method CalculateDepthCopySchedule, addr 0x671f060, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule CalculateDepthCopySchedule(::UnityEngine::Rendering::Universal::RenderPassEvent earliestDepthReadEvent,
                                                                                                             bool hasFullPrepass);

  /// @brief Method CalculateTextureCopySchedules, addr 0x671f0b8, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules
  CalculateTextureCopySchedules(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary renderPassInputs,
                                bool isDeferred, bool requiresDepthPrepass, bool hasFullPrepass);

  /// @brief Method CalculateUVRect, addr 0x671845c, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect CalculateUVRect(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, int32_t textureHeightPercent);

  /// @brief Method CalculateUVRect, addr 0x6718428, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect CalculateUVRect(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, float_t width, float_t height);

  /// @brief Method CameraHasPostProcessingWithDepth, addr 0x6719918, size 0x44, virtual false, abstract: false, final false
  inline bool CameraHasPostProcessingWithDepth(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method CanCopyDepth, addr 0x67138e0, size 0x124, virtual false, abstract: false, final false
  inline bool CanCopyDepth(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method CleanupRenderGraphResources, addr 0x6713090, size 0x19c, virtual false, abstract: false, final false
  inline void CleanupRenderGraphResources();

  /// @brief Method CopyDepthToDepthTexture, addr 0x671f20c, size 0xc4, virtual false, abstract: false, final false
  inline void CopyDepthToDepthTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData);

  /// @brief Method CorrectForTextureAspectRatio, addr 0x67136b4, size 0x40, virtual false, abstract: false, final false
  inline void CorrectForTextureAspectRatio(::ByRef<float_t> width, ::ByRef<float_t> height, float_t sourceWidth, float_t sourceHeight);

  /// @brief Method CreateAfterPostProcessTexture, addr 0x671b6c0, size 0x15c, virtual false, abstract: false, final false
  inline void CreateAfterPostProcessTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor descriptor);

  /// @brief Method CreateCameraDepthCopyTexture, addr 0x671af10, size 0x16c, virtual false, abstract: false, final false
  inline void CreateCameraDepthCopyTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor descriptor, bool isDepthTexture);

  /// @brief Method CreateCameraNormalsTexture, addr 0x671b07c, size 0x200, virtual false, abstract: false, final false
  inline void CreateCameraNormalsTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor descriptor);

  /// @brief Method CreateCameraRenderTarget, addr 0x6716d60, size 0x5d4, virtual false, abstract: false, final false
  inline void CreateCameraRenderTarget(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                       ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method CreateDebugTexture, addr 0x6718338, size 0xf0, virtual false, abstract: false, final false
  inline void CreateDebugTexture(::UnityEngine::RenderTextureDescriptor descriptor);

  /// @brief Method CreateMotionVectorTextures, addr 0x671b27c, size 0x1e8, virtual false, abstract: false, final false
  inline void CreateMotionVectorTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor descriptor);

  /// @brief Method CreateRenderGraphCameraRenderTargets, addr 0x6719bf8, size 0x1318, virtual false, abstract: false, final false
  inline void CreateRenderGraphCameraRenderTargets(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, bool isCameraTargetOffscreenDepth);

  /// @brief Method CreateRenderGraphTexture, addr 0x67197d4, size 0x12c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                    ::UnityEngine::RenderTextureDescriptor desc, ::StringW name, bool clear, ::UnityEngine::Color color,
                                                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode);

  /// @brief Method CreateRenderGraphTexture, addr 0x67196b8, size 0x11c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle CreateRenderGraphTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                    ::UnityEngine::RenderTextureDescriptor desc, ::StringW name, bool clear,
                                                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode);

  /// @brief Method CreateRenderingLayersTexture, addr 0x671b464, size 0x25c, virtual false, abstract: false, final false
  inline void CreateRenderingLayersTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::RenderTextureDescriptor descriptor);

  /// @brief Method DebugHandlerRequireDepthPass, addr 0x67182c4, size 0x74, virtual false, abstract: false, final false
  inline bool DebugHandlerRequireDepthPass(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method DepthNormalPrepassRender, addr 0x671f380, size 0x1c0, virtual false, abstract: false, final false
  inline void DepthNormalPrepassRender(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                       ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary renderPassInputs,
                                       ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget, uint32_t batchLayerMask, bool setGlobalDepth, bool setGlobalTextures);

  /// @brief Method Dispose, addr 0x6712ea4, size 0x1ec, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method EnableSwapBufferMSAA, addr 0x67182a0, size 0x1c, virtual true, abstract: false, final false
  inline void EnableSwapBufferMSAA(bool enable);

  /// @brief Method EnqueueDeferred, addr 0x6717334, size 0x158, virtual false, abstract: false, final false
  inline void EnqueueDeferred(::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor, bool hasDepthPrepass, bool hasNormalPrepass, bool hasRenderingLayerPrepass, bool applyMainShadow,
                              bool applyAdditionalShadow);

  /// @brief Method ExecuteScheduledDepthCopyWithMotion, addr 0x671effc, size 0x50, virtual false, abstract: false, final false
  inline void ExecuteScheduledDepthCopyWithMotion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                  bool renderMotionVectors);

  /// @brief Method FinishRendering, addr 0x6717fc8, size 0x2c, virtual true, abstract: false, final false
  inline void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetCameraColorBackBuffer, addr 0x671827c, size 0x24, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetCameraColorBackBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetCameraColorFrontBuffer, addr 0x6718264, size 0x18, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method GetRenderPassInputs, addr 0x67168bc, size 0x2d8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary GetRenderPassInputs(bool isTemporalAAEnabled, bool postProcessingEnabled, bool isSceneViewCamera);

  /// @brief Method HasActiveRenderFeatures, addr 0x6713aa0, size 0x128, virtual false, abstract: false, final false
  inline bool HasActiveRenderFeatures();

  /// @brief Method HasPassesRequiringIntermediateTexture, addr 0x6713bc8, size 0x128, virtual false, abstract: false, final false
  inline bool HasPassesRequiringIntermediateTexture();

  /// @brief Method InstanceOcclusionTest, addr 0x671ed68, size 0x1f4, virtual false, abstract: false, final false
  inline void InstanceOcclusionTest(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                    ::UnityEngine::Rendering::OcclusionTest occlusionTest);

  /// @brief Method IsDepthPrimingEnabled, addr 0x67137f4, size 0xec, virtual false, abstract: false, final false
  inline bool IsDepthPrimingEnabled(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method IsGLDevice, addr 0x6713a40, size 0x60, virtual false, abstract: false, final false
  inline bool IsGLDevice();

  /// @brief Method IsGLESDevice, addr 0x6713a0c, size 0x34, virtual false, abstract: false, final false
  inline bool IsGLESDevice();

  /// @brief Method IsOffscreenDepthTexture, addr 0x67136f4, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsOffscreenDepthTexture(::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method IsOffscreenDepthTexture, addr 0x6713760, size 0x94, virtual false, abstract: false, final false
  static inline bool IsOffscreenDepthTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method IsWebGL, addr 0x6713a04, size 0x8, virtual false, abstract: false, final false
  inline bool IsWebGL();

  static inline ::UnityEngine::Rendering::Universal::UniversalRenderer* New_ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data);

  /// @brief Method OnAfterRendering, addr 0x671d690, size 0xab8, virtual false, abstract: false, final false
  inline void OnAfterRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method OnBeforeRendering, addr 0x671c510, size 0x2d0, virtual false, abstract: false, final false
  inline void OnBeforeRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method OnBeginRenderGraphFrame, addr 0x671be10, size 0x64, virtual true, abstract: false, final false
  inline void OnBeginRenderGraphFrame();

  /// @brief Method OnEndRenderGraphFrame, addr 0x671e148, size 0x60, virtual true, abstract: false, final false
  inline void OnEndRenderGraphFrame();

  /// @brief Method OnFinishRenderGraphRendering, addr 0x671e1a8, size 0x70, virtual true, abstract: false, final false
  inline void OnFinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnMainRendering, addr 0x671c7e0, size 0xeb0, virtual false, abstract: false, final false
  inline void OnMainRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context);

  /// @brief Method OnOffscreenDepthTextureRendering, addr 0x671c128, size 0x3e8, virtual false, abstract: false, final false
  inline void OnOffscreenDepthTextureRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context,
                                               ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method OnRecordRenderGraph, addr 0x671be74, size 0x2b4, virtual true, abstract: false, final false
  inline void OnRecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext context);

  /// @brief Method PlatformRequiresExplicitMsaaResolve, addr 0x6717ff4, size 0xb0, virtual false, abstract: false, final false
  inline bool PlatformRequiresExplicitMsaaResolve();

  /// @brief Method RecordCustomPassesWithDepthCopyAndMotion, addr 0x671ef5c, size 0xa0, virtual false, abstract: false, final false
  inline void RecordCustomPassesWithDepthCopyAndMotion(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                                                       ::UnityEngine::Rendering::Universal::RenderPassEvent earliestDepthReadEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent currentEvent,
                                                       bool renderMotionVectors);

  /// @brief Method ReleaseRenderTargets, addr 0x671322c, size 0x104, virtual true, abstract: false, final false
  inline void ReleaseRenderTargets();

  /// @brief Method RenderMotionVectors, addr 0x671f2d0, size 0xb0, virtual false, abstract: false, final false
  inline void RenderMotionVectors(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData);

  /// @brief Method RenderRawColorDepthHistory, addr 0x671b920, size 0x4f0, virtual false, abstract: false, final false
  inline void RenderRawColorDepthHistory(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                         ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData);

  /// @brief Method RequireDepthPrepass, addr 0x6719a64, size 0xa0, virtual false, abstract: false, final false
  inline bool RequireDepthPrepass(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                  ::ByRef<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs);

  /// @brief Method RequireDepthTexture, addr 0x6719b04, size 0xf4, virtual false, abstract: false, final false
  inline bool RequireDepthTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool requiresDepthPrepass,
                                  ::ByRef<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs);

  /// @brief Method RequiresIntermediateAttachments, addr 0x671995c, size 0x108, virtual false, abstract: false, final false
  inline bool RequiresIntermediateAttachments(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                              ::ByRef<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs);

  /// @brief Method RequiresIntermediateColorTexture, addr 0x6716b94, size 0x1cc, virtual false, abstract: false, final false
  inline bool RequiresIntermediateColorTexture(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                               ::ByRef<::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary> renderPassInputs);

  /// @brief Method SetRenderingLayersGlobalTextures, addr 0x671f540, size 0x218, virtual false, abstract: false, final false
  inline void SetRenderingLayersGlobalTextures(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method Setup, addr 0x6713cf0, size 0x2b14, virtual true, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupAfterPostRenderGraphFinalPassDebug, addr 0x6718f10, size 0x264, virtual false, abstract: false, final false
  inline void SetupAfterPostRenderGraphFinalPassDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method SetupCullingParameters, addr 0x6717bb8, size 0x2b4, virtual true, abstract: false, final false
  inline void SetupCullingParameters(::ByRef<::UnityEngine::Rendering::ScriptableCullingParameters> cullingParameters, ::ByRef<::UnityEngine::Rendering::Universal::CameraData> cameraData);

  /// @brief Method SetupFinalPassDebug, addr 0x6713330, size 0x384, virtual false, abstract: false, final false
  inline void SetupFinalPassDebug(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method SetupLights, addr 0x6717a24, size 0x194, virtual true, abstract: false, final false
  inline void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method SetupRawColorDepthHistory, addr 0x671748c, size 0x32c, virtual false, abstract: false, final false
  inline void SetupRawColorDepthHistory(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::ByRef<::UnityEngine::RenderTextureDescriptor> cameraTargetDescriptor);

  /// @brief Method SetupRenderGraphFinalPassDebug, addr 0x67184b4, size 0x768, virtual false, abstract: false, final false
  inline void SetupRenderGraphFinalPassDebug(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  /// @brief Method SetupRenderGraphLights, addr 0x671b89c, size 0x84, virtual false, abstract: false, final false
  inline void SetupRenderGraphLights(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  /// @brief Method SetupRenderingLayers, addr 0x671b81c, size 0x80, virtual false, abstract: false, final false
  inline void SetupRenderingLayers(int32_t msaaSamples);

  /// @brief Method SetupVFXCameraBuffer, addr 0x67177b8, size 0x26c, virtual false, abstract: false, final false
  inline void SetupVFXCameraBuffer(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method ShouldApplyPostProcessing, addr 0x6719900, size 0x18, virtual false, abstract: false, final false
  inline bool ShouldApplyPostProcessing(bool postProcessEnabled);

  /// @brief Method SupportedCameraStackingTypes, addr 0x6711b08, size 0x24, virtual true, abstract: false, final false
  inline int32_t SupportedCameraStackingTypes();

  /// @brief Method SupportsMotionVectors, addr 0x6711b2c, size 0x8, virtual true, abstract: false, final false
  inline bool SupportsMotionVectors();

  /// @brief Method SwapColorBuffer, addr 0x67180a4, size 0x1c0, virtual true, abstract: false, final false
  inline void SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateCameraHistory, addr 0x6716804, size 0xb8, virtual false, abstract: false, final false
  inline void UpdateCameraHistory(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method UpdateInstanceOccluders, addr 0x671e9a0, size 0x3c8, virtual false, abstract: false, final false
  inline void UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                      ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTexture);

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__opaqueLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__opaqueLayerMask_k__BackingField();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__transparentLayerMask_k__BackingField() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get__transparentLayerMask_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ActiveCameraColorAttachment() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ActiveCameraColorAttachment();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ActiveCameraDepthAttachment() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ActiveCameraDepthAttachment();

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* const& __cordl_internal_get_m_AdditionalLightsShadowCasterPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass*& __cordl_internal_get_m_AdditionalLightsShadowCasterPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitHDRMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitHDRMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_BlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_BlitMaterial();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraDepthAttachment() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraDepthAttachment();

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& __cordl_internal_get_m_CameraDepthAttachmentFormat() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat& __cordl_internal_get_m_CameraDepthAttachmentFormat();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_CameraDepthAttachment_D3d_11() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_CameraDepthAttachment_D3d_11();

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat const& __cordl_internal_get_m_CameraDepthTextureFormat() const;

  constexpr ::UnityEngine::Rendering::Universal::DepthFormat& __cordl_internal_get_m_CameraDepthTextureFormat();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CameraMotionVecMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CameraMotionVecMaterial();

  constexpr ::UnityEngine::Rendering::Universal::CapturePass* const& __cordl_internal_get_m_CapturePass() const;

  constexpr ::UnityEngine::Rendering::Universal::CapturePass*& __cordl_internal_get_m_CapturePass();

  constexpr bool const& __cordl_internal_get_m_Clustering() const;

  constexpr bool& __cordl_internal_get_m_Clustering();

  constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* const& __cordl_internal_get_m_ColorBufferSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem*& __cordl_internal_get_m_ColorBufferSystem();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ColorFrontBuffer() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ColorFrontBuffer();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* const& __cordl_internal_get_m_CopyColorPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass*& __cordl_internal_get_m_CopyColorPass();

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode const& __cordl_internal_get_m_CopyDepthMode() const;

  constexpr ::UnityEngine::Rendering::Universal::CopyDepthMode& __cordl_internal_get_m_CopyDepthMode();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_CopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_CopyDepthPass();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DebugBlitMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DebugBlitMaterial();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DecalLayersTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DecalLayersTexture();

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

  constexpr bool const& __cordl_internal_get_m_DepthPrimingRecommended() const;

  constexpr bool& __cordl_internal_get_m_DepthPrimingRecommended();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DepthTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DepthTexture();

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

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_GBufferCopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_GBufferCopyDepthPass();

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

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_MotionVectorColor() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_MotionVectorColor();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_MotionVectorDepth() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_MotionVectorDepth();

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* const& __cordl_internal_get_m_MotionVectorPass() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorRenderPass*& __cordl_internal_get_m_MotionVectorPass();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_NormalsTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_NormalsTexture();

  constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* const& __cordl_internal_get_m_OnRenderObjectCallbackPass() const;

  constexpr ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass*& __cordl_internal_get_m_OnRenderObjectCallbackPass();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_OpaqueColor() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_OpaqueColor();

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses const& __cordl_internal_get_m_PostProcessPasses() const;

  constexpr ::UnityEngine::Rendering::Universal::PostProcessPasses& __cordl_internal_get_m_PostProcessPasses();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_PrimedDepthCopyPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_PrimedDepthCopyPass();

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

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_StencilDeferredMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_StencilDeferredMaterial();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_TargetColorHandle() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_TargetColorHandle();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_TargetDepthHandle() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_TargetDepthHandle();

  constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass* const& __cordl_internal_get_m_TransparentSettingsPass() const;

  constexpr ::UnityEngine::Rendering::Universal::TransparentSettingsPass*& __cordl_internal_get_m_TransparentSettingsPass();

  constexpr bool const& __cordl_internal_get_m_VulkanEnablePreTransform() const;

  constexpr bool& __cordl_internal_get_m_VulkanEnablePreTransform();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* const& __cordl_internal_get_m_XRCopyDepthPass() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*& __cordl_internal_get_m_XRCopyDepthPass();

  constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass* const& __cordl_internal_get_m_XRDepthMotionPass() const;

  constexpr ::UnityEngine::Rendering::Universal::XRDepthMotionPass*& __cordl_internal_get_m_XRDepthMotionPass();

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* const& __cordl_internal_get_m_XROcclusionMeshPass() const;

  constexpr ::UnityEngine::Rendering::Universal::XROcclusionMeshPass*& __cordl_internal_get_m_XROcclusionMeshPass();

  constexpr void __cordl_internal_set__opaqueLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set__transparentLayerMask_k__BackingField(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_ActiveCameraColorAttachment(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_ActiveCameraDepthAttachment(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_AdditionalLightsShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* value);

  constexpr void __cordl_internal_set_m_BlitHDRMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_BlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CameraDepthAttachment(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CameraDepthAttachmentFormat(::UnityEngine::Rendering::Universal::DepthFormat value);

  constexpr void __cordl_internal_set_m_CameraDepthAttachment_D3d_11(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CameraDepthTextureFormat(::UnityEngine::Rendering::Universal::DepthFormat value);

  constexpr void __cordl_internal_set_m_CameraMotionVecMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CapturePass(::UnityEngine::Rendering::Universal::CapturePass* value);

  constexpr void __cordl_internal_set_m_Clustering(bool value);

  constexpr void __cordl_internal_set_m_ColorBufferSystem(::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* value);

  constexpr void __cordl_internal_set_m_ColorFrontBuffer(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CopyColorPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass* value);

  constexpr void __cordl_internal_set_m_CopyDepthMode(::UnityEngine::Rendering::Universal::CopyDepthMode value);

  constexpr void __cordl_internal_set_m_CopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_DebugBlitMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DecalLayersTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(::UnityEngine::Rendering::StencilState value);

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_m_DeferredPass(::UnityEngine::Rendering::Universal::Internal::DeferredPass* value);

  constexpr void __cordl_internal_set_m_DepthNormalPrepass(::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* value);

  constexpr void __cordl_internal_set_m_DepthPrepass(::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* value);

  constexpr void __cordl_internal_set_m_DepthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  constexpr void __cordl_internal_set_m_DepthPrimingRecommended(bool value);

  constexpr void __cordl_internal_set_m_DepthTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DrawOffscreenUIPass(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* value);

  constexpr void __cordl_internal_set_m_DrawOverlayUIPass(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* value);

  constexpr void __cordl_internal_set_m_DrawSkyboxPass(::UnityEngine::Rendering::Universal::DrawSkyboxPass* value);

  constexpr void __cordl_internal_set_m_FinalBlitPass(::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* value);

  constexpr void __cordl_internal_set_m_ForwardLights(::UnityEngine::Rendering::Universal::Internal::ForwardLights* value);

  constexpr void __cordl_internal_set_m_GBufferCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_GBufferPass(::UnityEngine::Rendering::Universal::Internal::GBufferPass* value);

  constexpr void __cordl_internal_set_m_HistoryRawColorCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyColorPass* value);

  constexpr void __cordl_internal_set_m_HistoryRawDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_IntermediateTextureMode(::UnityEngine::Rendering::Universal::IntermediateTextureMode value);

  constexpr void __cordl_internal_set_m_IssuedGPUOcclusionUnsupportedMsg(bool value);

  constexpr void __cordl_internal_set_m_LightCookieManager(::UnityEngine::Rendering::Universal::LightCookieManager* value);

  constexpr void __cordl_internal_set_m_MainLightShadowCasterPass(::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* value);

  constexpr void __cordl_internal_set_m_MotionVectorColor(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_MotionVectorDepth(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_MotionVectorPass(::UnityEngine::Rendering::Universal::MotionVectorRenderPass* value);

  constexpr void __cordl_internal_set_m_NormalsTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_OnRenderObjectCallbackPass(::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* value);

  constexpr void __cordl_internal_set_m_OpaqueColor(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_PostProcessPasses(::UnityEngine::Rendering::Universal::PostProcessPasses value);

  constexpr void __cordl_internal_set_m_PrimedDepthCopyPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

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

  constexpr void __cordl_internal_set_m_StencilDeferredMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_TargetColorHandle(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_TargetDepthHandle(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_TransparentSettingsPass(::UnityEngine::Rendering::Universal::TransparentSettingsPass* value);

  constexpr void __cordl_internal_set_m_VulkanEnablePreTransform(bool value);

  constexpr void __cordl_internal_set_m_XRCopyDepthPass(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* value);

  constexpr void __cordl_internal_set_m_XRDepthMotionPass(::UnityEngine::Rendering::Universal::XRDepthMotionPass* value);

  constexpr void __cordl_internal_set_m_XROcclusionMeshPass(::UnityEngine::Rendering::Universal::XROcclusionMeshPass* value);

  /// @brief Method .ctor, addr 0x6711c6c, size 0x10c8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::UniversalRendererData* data);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF_k_DepthNormalsOnly();

  static inline int32_t getStaticF_m_CurrentColorHandle();

  static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> getStaticF_m_RenderGraphCameraColorHandles();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_RenderGraphCameraDepthHandle();

  static inline ::UnityEngine::Rendering::RTHandle* getStaticF_m_RenderGraphDebugTextureHandle();

  static inline ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> getStaticF_m_RenderGraphUpscaledCameraColorHandles();

  static inline bool getStaticF_m_RequiresIntermediateAttachments();

  static inline bool getStaticF_m_UseUpscaledColorHandle();

  /// @brief Method get_accurateGbufferNormals, addr 0x6711bcc, size 0x20, virtual false, abstract: false, final false
  inline bool get_accurateGbufferNormals();

  /// @brief Method get_cameraDepthAttachmentFormat, addr 0x6711c58, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_cameraDepthAttachmentFormat();

  /// @brief Method get_cameraDepthTextureFormat, addr 0x6711c44, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_cameraDepthTextureFormat();

  /// @brief Method get_colorGradingLut, addr 0x6711c14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_colorGradingLut();

  /// @brief Method get_colorGradingLutPass, addr 0x6711bfc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::ColorGradingLutPass* get_colorGradingLutPass();

  /// @brief Method get_currentRenderGraphCameraColorHandle, addr 0x6719584, size 0xc4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_currentRenderGraphCameraColorHandle();

  /// @brief Method get_deferredLights, addr 0x6711c1c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::Internal::DeferredLights* get_deferredLights();

  /// @brief Method get_depthPrimingMode, addr 0x6711bec, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DepthPrimingMode get_depthPrimingMode();

  /// @brief Method get_finalPostProcessPass, addr 0x6711c0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PostProcessPass* get_finalPostProcessPass();

  /// @brief Method get_nextRenderGraphCameraColorHandle, addr 0x6719648, size 0x70, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_nextRenderGraphCameraColorHandle();

  /// @brief Method get_opaqueLayerMask, addr 0x6711c24, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_opaqueLayerMask();

  /// @brief Method get_postProcessPass, addr 0x6711c04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::PostProcessPass* get_postProcessPass();

  /// @brief Method get_renderingModeActual, addr 0x6711b3c, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingModeActual();

  /// @brief Method get_renderingModeRequested, addr 0x6711b34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::RenderingMode get_renderingModeRequested();

  /// @brief Method get_supportsGPUOcclusion, addr 0x671e218, size 0xc8, virtual true, abstract: false, final false
  inline bool get_supportsGPUOcclusion();

  /// @brief Method get_supportsNativeRenderPassRendergraphCompiler, addr 0x67182bc, size 0x8, virtual true, abstract: false, final false
  inline bool get_supportsNativeRenderPassRendergraphCompiler();

  /// @brief Method get_transparentLayerMask, addr 0x6711c34, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_transparentLayerMask();

  static inline void setStaticF_k_DepthNormalsOnly(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  static inline void setStaticF_m_CurrentColorHandle(int32_t value);

  static inline void setStaticF_m_RenderGraphCameraColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  static inline void setStaticF_m_RenderGraphCameraDepthHandle(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_RenderGraphDebugTextureHandle(::UnityEngine::Rendering::RTHandle* value);

  static inline void setStaticF_m_RenderGraphUpscaledCameraColorHandles(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  static inline void setStaticF_m_RequiresIntermediateAttachments(bool value);

  static inline void setStaticF_m_UseUpscaledColorHandle(bool value);

  /// @brief Method set_depthPrimingMode, addr 0x6711bf4, size 0x8, virtual false, abstract: false, final false
  inline void set_depthPrimingMode(::UnityEngine::Rendering::Universal::DepthPrimingMode value);

  /// @brief Method set_opaqueLayerMask, addr 0x6711c2c, size 0x8, virtual false, abstract: false, final false
  inline void set_opaqueLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_transparentLayerMask, addr 0x6711c3c, size 0x8, virtual false, abstract: false, final false
  inline void set_transparentLayerMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalRenderer(UniversalRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalRenderer(UniversalRenderer const&) = delete;

  /// @brief Field _CameraTargetAttachmentAName offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraTargetAttachmentAName{ u"_CameraTargetAttachmentA" };

  /// @brief Field _CameraTargetAttachmentBName offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraTargetAttachmentBName{ u"_CameraTargetAttachmentB" };

  /// @brief Field _CameraUpscaledTargetAttachmentAName offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraUpscaledTargetAttachmentAName{ u"_CameraUpscaledTargetAttachmentA" };

  /// @brief Field _CameraUpscaledTargetAttachmentBName offset 0xffffffff size 0x8
  static constexpr ::ConstString _CameraUpscaledTargetAttachmentBName{ u"_CameraUpscaledTargetAttachmentB" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12982 };

  /// @brief Field k_AfterFinalBlitPassQueueOffset offset 0xffffffff size 0x4
  static constexpr int32_t k_AfterFinalBlitPassQueueOffset{ static_cast<int32_t>(0x2) };

  /// @brief Field k_DepthStencilFormatDefault value: I32(92)
  static ::UnityEngine::Experimental::Rendering::GraphicsFormat const k_DepthStencilFormatDefault;

  /// @brief Field k_FinalBlitPassQueueOffset offset 0xffffffff size 0x4
  static constexpr int32_t k_FinalBlitPassQueueOffset{ static_cast<int32_t>(0x1) };

  /// @brief Field m_Clustering, offset: 0x143, size: 0x1, def value: None
  bool ___m_Clustering;

  /// @brief Field m_DepthPrepass, offset: 0x148, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DepthOnlyPass* ___m_DepthPrepass;

  /// @brief Field m_DepthNormalPrepass, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DepthNormalOnlyPass* ___m_DepthNormalPrepass;

  /// @brief Field m_PrimedDepthCopyPass, offset: 0x158, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_PrimedDepthCopyPass;

  /// @brief Field m_MotionVectorPass, offset: 0x160, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionVectorRenderPass* ___m_MotionVectorPass;

  /// @brief Field m_MainLightShadowCasterPass, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::MainLightShadowCasterPass* ___m_MainLightShadowCasterPass;

  /// @brief Field m_AdditionalLightsShadowCasterPass, offset: 0x170, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::AdditionalLightsShadowCasterPass* ___m_AdditionalLightsShadowCasterPass;

  /// @brief Field m_GBufferPass, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::GBufferPass* ___m_GBufferPass;

  /// @brief Field m_GBufferCopyDepthPass, offset: 0x180, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_GBufferCopyDepthPass;

  /// @brief Field m_DeferredPass, offset: 0x188, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredPass* ___m_DeferredPass;

  /// @brief Field m_RenderOpaqueForwardOnlyPass, offset: 0x190, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderOpaqueForwardOnlyPass;

  /// @brief Field m_RenderOpaqueForwardPass, offset: 0x198, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderOpaqueForwardPass;

  /// @brief Field m_RenderOpaqueForwardWithRenderingLayersPass, offset: 0x1a0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass* ___m_RenderOpaqueForwardWithRenderingLayersPass;

  /// @brief Field m_DrawSkyboxPass, offset: 0x1a8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DrawSkyboxPass* ___m_DrawSkyboxPass;

  /// @brief Field m_CopyDepthPass, offset: 0x1b0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_CopyDepthPass;

  /// @brief Field m_CopyColorPass, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* ___m_CopyColorPass;

  /// @brief Field m_TransparentSettingsPass, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::TransparentSettingsPass* ___m_TransparentSettingsPass;

  /// @brief Field m_RenderTransparentForwardPass, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass* ___m_RenderTransparentForwardPass;

  /// @brief Field m_OnRenderObjectCallbackPass, offset: 0x1d0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::InvokeOnRenderObjectCallbackPass* ___m_OnRenderObjectCallbackPass;

  /// @brief Field m_FinalBlitPass, offset: 0x1d8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::FinalBlitPass* ___m_FinalBlitPass;

  /// @brief Field m_CapturePass, offset: 0x1e0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::CapturePass* ___m_CapturePass;

  /// @brief Field m_XROcclusionMeshPass, offset: 0x1e8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XROcclusionMeshPass* ___m_XROcclusionMeshPass;

  /// @brief Field m_XRCopyDepthPass, offset: 0x1f0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_XRCopyDepthPass;

  /// @brief Field m_XRDepthMotionPass, offset: 0x1f8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::XRDepthMotionPass* ___m_XRDepthMotionPass;

  /// @brief Field m_DrawOffscreenUIPass, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* ___m_DrawOffscreenUIPass;

  /// @brief Field m_DrawOverlayUIPass, offset: 0x208, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* ___m_DrawOverlayUIPass;

  /// @brief Field m_HistoryRawColorCopyPass, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* ___m_HistoryRawColorCopyPass;

  /// @brief Field m_HistoryRawDepthCopyPass, offset: 0x218, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* ___m_HistoryRawDepthCopyPass;

  /// @brief Field m_ColorBufferSystem, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::RenderTargetBufferSystem* ___m_ColorBufferSystem;

  /// @brief Field m_ActiveCameraColorAttachment, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_ActiveCameraColorAttachment;

  /// @brief Field m_ColorFrontBuffer, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_ColorFrontBuffer;

  /// @brief Field m_ActiveCameraDepthAttachment, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_ActiveCameraDepthAttachment;

  /// @brief Field m_CameraDepthAttachment, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraDepthAttachment;

  /// @brief Field m_CameraDepthAttachment_D3d_11, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_CameraDepthAttachment_D3d_11;

  /// @brief Field m_TargetColorHandle, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_TargetColorHandle;

  /// @brief Field m_TargetDepthHandle, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_TargetDepthHandle;

  /// @brief Field m_DepthTexture, offset: 0x260, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DepthTexture;

  /// @brief Field m_NormalsTexture, offset: 0x268, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_NormalsTexture;

  /// @brief Field m_DecalLayersTexture, offset: 0x270, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DecalLayersTexture;

  /// @brief Field m_OpaqueColor, offset: 0x278, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_OpaqueColor;

  /// @brief Field m_MotionVectorColor, offset: 0x280, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_MotionVectorColor;

  /// @brief Field m_MotionVectorDepth, offset: 0x288, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_MotionVectorDepth;

  /// @brief Field m_ForwardLights, offset: 0x290, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::ForwardLights* ___m_ForwardLights;

  /// @brief Field m_DeferredLights, offset: 0x298, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  /// @brief Field m_RenderingMode, offset: 0x2a0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingMode ___m_RenderingMode;

  /// @brief Field m_DepthPrimingMode, offset: 0x2a4, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthPrimingMode ___m_DepthPrimingMode;

  /// @brief Field m_CopyDepthMode, offset: 0x2a8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CopyDepthMode ___m_CopyDepthMode;

  /// @brief Field m_CameraDepthAttachmentFormat, offset: 0x2ac, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthFormat ___m_CameraDepthAttachmentFormat;

  /// @brief Field m_CameraDepthTextureFormat, offset: 0x2b0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::DepthFormat ___m_CameraDepthTextureFormat;

  /// @brief Field m_DepthPrimingRecommended, offset: 0x2b4, size: 0x1, def value: None
  bool ___m_DepthPrimingRecommended;

  /// @brief Field m_DefaultStencilState, offset: 0x2b5, size: 0xc, def value: None
  ::UnityEngine::Rendering::StencilState ___m_DefaultStencilState;

  /// @brief Field m_LightCookieManager, offset: 0x2c8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::LightCookieManager* ___m_LightCookieManager;

  /// @brief Field m_IntermediateTextureMode, offset: 0x2d0, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::IntermediateTextureMode ___m_IntermediateTextureMode;

  /// @brief Field m_VulkanEnablePreTransform, offset: 0x2d4, size: 0x1, def value: None
  bool ___m_VulkanEnablePreTransform;

  /// @brief Field m_BlitMaterial, offset: 0x2d8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitMaterial;

  /// @brief Field m_BlitHDRMaterial, offset: 0x2e0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_BlitHDRMaterial;

  /// @brief Field m_SamplingMaterial, offset: 0x2e8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SamplingMaterial;

  /// @brief Field m_StencilDeferredMaterial, offset: 0x2f0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_StencilDeferredMaterial;

  /// @brief Field m_CameraMotionVecMaterial, offset: 0x2f8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CameraMotionVecMaterial;

  /// @brief Field m_PostProcessPasses, offset: 0x300, size: 0x40, def value: None
  ::UnityEngine::Rendering::Universal::PostProcessPasses ___m_PostProcessPasses;

  /// @brief Field <opaqueLayerMask>k__BackingField, offset: 0x340, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____opaqueLayerMask_k__BackingField;

  /// @brief Field <transparentLayerMask>k__BackingField, offset: 0x344, size: 0x4, def value: None
  ::UnityEngine::LayerMask ____transparentLayerMask_k__BackingField;

  /// @brief Field m_DebugBlitMaterial, offset: 0x348, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DebugBlitMaterial;

  /// @brief Field m_RequiresRenderingLayer, offset: 0x350, size: 0x1, def value: None
  bool ___m_RequiresRenderingLayer;

  /// @brief Field m_RenderingLayersEvent, offset: 0x354, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingLayerUtils_Event ___m_RenderingLayersEvent;

  /// @brief Field m_RenderingLayersMaskSize, offset: 0x358, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize ___m_RenderingLayersMaskSize;

  /// @brief Field m_RenderingLayerProvidesRenderObjectPass, offset: 0x35c, size: 0x1, def value: None
  bool ___m_RenderingLayerProvidesRenderObjectPass;

  /// @brief Field m_RenderingLayerProvidesByDepthNormalPass, offset: 0x35d, size: 0x1, def value: None
  bool ___m_RenderingLayerProvidesByDepthNormalPass;

  /// @brief Field m_RenderingLayersTextureName, offset: 0x360, size: 0x8, def value: None
  ::StringW ___m_RenderingLayersTextureName;

  /// @brief Field m_IssuedGPUOcclusionUnsupportedMsg, offset: 0x368, size: 0x1, def value: None
  bool ___m_IssuedGPUOcclusionUnsupportedMsg;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_Clustering) == 0x143, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrepass) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthNormalPrepass) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_PrimedDepthCopyPass) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MotionVectorPass) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MainLightShadowCasterPass) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_AdditionalLightsShadowCasterPass) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_GBufferPass) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_GBufferCopyDepthPass) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DeferredPass) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardOnlyPass) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardPass) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderOpaqueForwardWithRenderingLayersPass) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawSkyboxPass) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthPass) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyColorPass) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TransparentSettingsPass) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderTransparentForwardPass) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_OnRenderObjectCallbackPass) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_FinalBlitPass) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CapturePass) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XROcclusionMeshPass) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XRCopyDepthPass) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_XRDepthMotionPass) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawOffscreenUIPass) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DrawOverlayUIPass) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_HistoryRawColorCopyPass) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_HistoryRawDepthCopyPass) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ColorBufferSystem) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ActiveCameraColorAttachment) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ColorFrontBuffer) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ActiveCameraDepthAttachment) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthAttachment) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthAttachment_D3d_11) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TargetColorHandle) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_TargetDepthHandle) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthTexture) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_NormalsTexture) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DecalLayersTexture) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_OpaqueColor) == 0x278, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MotionVectorColor) == 0x280, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_MotionVectorDepth) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_ForwardLights) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DeferredLights) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingMode) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrimingMode) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CopyDepthMode) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthAttachmentFormat) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraDepthTextureFormat) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DepthPrimingRecommended) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DefaultStencilState) == 0x2b5, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_LightCookieManager) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_IntermediateTextureMode) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_VulkanEnablePreTransform) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_BlitMaterial) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_BlitHDRMaterial) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_SamplingMaterial) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_StencilDeferredMaterial) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_CameraMotionVecMaterial) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_PostProcessPasses) == 0x300, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____opaqueLayerMask_k__BackingField) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ____transparentLayerMask_k__BackingField) == 0x344, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_DebugBlitMaterial) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RequiresRenderingLayer) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersEvent) == 0x354, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersMaskSize) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayerProvidesRenderObjectPass) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayerProvidesByDepthNormalPass) == 0x35d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_RenderingLayersTextureName) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalRenderer, ___m_IssuedGPUOcclusionUnsupportedMsg) == 0x368, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalRenderer, 0x370>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer_ColorCopySchedule, "UnityEngine.Rendering.Universal", "UniversalRenderer/ColorCopySchedule");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer_DepthCopySchedule, "UnityEngine.Rendering.Universal", "UniversalRenderer/DepthCopySchedule");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer*, "UnityEngine.Rendering.Universal", "UniversalRenderer");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer_CopyToDebugTexturePassData*, "UnityEngine.Rendering.Universal", "UniversalRenderer/CopyToDebugTexturePassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer_Profiling*, "UnityEngine.Rendering.Universal", "UniversalRenderer/Profiling");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalRenderer___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer___c*, "UnityEngine.Rendering.Universal", "UniversalRenderer/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer_RenderPassInputSummary, "UnityEngine.Rendering.Universal", "UniversalRenderer/RenderPassInputSummary");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalRenderer_TextureCopySchedules, "UnityEngine.Rendering.Universal", "UniversalRenderer/TextureCopySchedules");
