#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRPassCreateInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRPassCreateInfo)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
struct XRPassCreateInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::Rendering::XRPassCreateInfo);
// Dependencies System.IntPtr, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Rendering.ScriptableCullingParameters,
// UnityEngine.XR.XRDisplaySubsystem::XRRenderPass
namespace UnityEngine::Experimental::Rendering {
// Is value type: true
// CS Name: UnityEngine.Experimental.Rendering.XRPassCreateInfo
struct CORDL_TYPE XRPassCreateInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPassCreateInfo();

  // Ctor Parameters [CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "renderTargetDesc", ty:
  // "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "",
  // def_value: None }, CppParam { name: "motionVectorRenderTargetDesc", ty: "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "cullingParameters", ty:
  // "::UnityEngine::Rendering::ScriptableCullingParameters", modifiers: "", def_value: None }, CppParam { name: "occlusionMeshMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "",
  // def_value: None }, CppParam { name: "occlusionMeshScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "",
  // def_value: None }, CppParam { name: "multipassId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cullingPassId", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "copyDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "xrSdkRenderPass", ty:
  // "::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass", modifiers: "", def_value: None }]
  constexpr XRPassCreateInfo(::UnityEngine::Rendering::RenderTargetIdentifier renderTarget, ::UnityEngine::RenderTextureDescriptor renderTargetDesc,
                             ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc,
                             ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters, ::UnityW<::UnityEngine::Material> occlusionMeshMaterial, float_t occlusionMeshScale,
                             ::System::IntPtr foveatedRenderingInfo, int32_t multipassId, int32_t cullingPassId, bool copyDepth, bool hasMotionVectorPass,
                             ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrSdkRenderPass) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11828 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x800 };

  /// @brief Field renderTarget, offset: 0x0, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;

  /// @brief Field renderTargetDesc, offset: 0x28, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor renderTargetDesc;

  /// @brief Field motionVectorRenderTarget, offset: 0x60, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget;

  /// @brief Field motionVectorRenderTargetDesc, offset: 0x88, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc;

  /// @brief Field cullingParameters, offset: 0xc0, size: 0x638, def value: None
  ::UnityEngine::Rendering::ScriptableCullingParameters cullingParameters;

  /// @brief Field occlusionMeshMaterial, offset: 0x6f8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> occlusionMeshMaterial;

  /// @brief Field occlusionMeshScale, offset: 0x700, size: 0x4, def value: None
  float_t occlusionMeshScale;

  /// @brief Field foveatedRenderingInfo, offset: 0x708, size: 0x8, def value: None
  ::System::IntPtr foveatedRenderingInfo;

  /// @brief Field multipassId, offset: 0x710, size: 0x4, def value: None
  int32_t multipassId;

  /// @brief Field cullingPassId, offset: 0x714, size: 0x4, def value: None
  int32_t cullingPassId;

  /// @brief Field copyDepth, offset: 0x718, size: 0x1, def value: None
  bool copyDepth;

  /// @brief Field hasMotionVectorPass, offset: 0x719, size: 0x1, def value: None
  bool hasMotionVectorPass;

  /// @brief Field xrSdkRenderPass, offset: 0x720, size: 0xe0, def value: None
  ::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass xrSdkRenderPass;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, renderTarget) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, renderTargetDesc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, motionVectorRenderTarget) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, motionVectorRenderTargetDesc) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, cullingParameters) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, occlusionMeshMaterial) == 0x6f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, occlusionMeshScale) == 0x700, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, foveatedRenderingInfo) == 0x708, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, multipassId) == 0x710, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, cullingPassId) == 0x714, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, copyDepth) == 0x718, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, hasMotionVectorPass) == 0x719, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, xrSdkRenderPass) == 0x720, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRPassCreateInfo, 0x800>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRPassCreateInfo, "UnityEngine.Experimental.Rendering", "XRPassCreateInfo");
