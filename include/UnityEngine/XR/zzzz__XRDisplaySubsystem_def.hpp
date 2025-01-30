#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem)
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::XR {
struct XRDisplaySubsystem_LateLatchNode;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRBlitParams;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRMirrorViewBlitDesc;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRRenderPass;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode);
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams);
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc);
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass);
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/LateLatchNode
struct CORDL_TYPE XRDisplaySubsystem_LateLatchNode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XRDisplaySubsystem_LateLatchNode_Unwrapped
  enum struct __XRDisplaySubsystem_LateLatchNode_Unwrapped : int32_t {
    __E_Head = static_cast<int32_t>(0x0),
    __E_LeftHand = static_cast<int32_t>(0x1),
    __E_RightHand = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XRDisplaySubsystem_LateLatchNode_Unwrapped() const noexcept {
    return static_cast<__XRDisplaySubsystem_LateLatchNode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystem_LateLatchNode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRDisplaySubsystem_LateLatchNode(int32_t value__) noexcept;

  /// @brief Field Head value: I32(0)
  static ::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode const Head;

  /// @brief Field LeftHand value: I32(1)
  static ::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode const LeftHand;

  /// @brief Field RightHand value: I32(2)
  static ::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode const RightHand;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies System.IntPtr, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct CORDL_TYPE XRDisplaySubsystem_XRRenderPass {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystem_XRRenderPass();

  // Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "renderPassIndex", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "renderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "renderTargetDesc", ty:
  // "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "hasMotionVectorPass", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "motionVectorRenderTarget", ty: "::UnityEngine::Rendering::RenderTargetIdentifier", modifiers: "", def_value: None }, CppParam { name: "motionVectorRenderTargetDesc", ty:
  // "::UnityEngine::RenderTextureDescriptor", modifiers: "", def_value: None }, CppParam { name: "shouldFillOutDepth", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "cullingPassIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr XRDisplaySubsystem_XRRenderPass(::System::IntPtr displaySubsystemInstance, int32_t renderPassIndex, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget,
                                            ::UnityEngine::RenderTextureDescriptor renderTargetDesc, bool hasMotionVectorPass,
                                            ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget, ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc,
                                            bool shouldFillOutDepth, int32_t cullingPassIndex, ::System::IntPtr foveatedRenderingInfo) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18279 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe0 };

  /// @brief Field displaySubsystemInstance, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr displaySubsystemInstance;

  /// @brief Field renderPassIndex, offset: 0x8, size: 0x4, def value: None
  int32_t renderPassIndex;

  /// @brief Field renderTarget, offset: 0x10, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;

  /// @brief Field renderTargetDesc, offset: 0x38, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor renderTargetDesc;

  /// @brief Field hasMotionVectorPass, offset: 0x6c, size: 0x1, def value: None
  bool hasMotionVectorPass;

  /// @brief Field motionVectorRenderTarget, offset: 0x70, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget;

  /// @brief Field motionVectorRenderTargetDesc, offset: 0x98, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc;

  /// @brief Field shouldFillOutDepth, offset: 0xcc, size: 0x1, def value: None
  bool shouldFillOutDepth;

  /// @brief Field cullingPassIndex, offset: 0xd0, size: 0x4, def value: None
  int32_t cullingPassIndex;

  /// @brief Field foveatedRenderingInfo, offset: 0xd8, size: 0x8, def value: None
  ::System::IntPtr foveatedRenderingInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, displaySubsystemInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, renderPassIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, renderTarget) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, renderTargetDesc) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, hasMotionVectorPass) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, motionVectorRenderTarget) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, motionVectorRenderTargetDesc) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, shouldFillOutDepth) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, cullingPassIndex) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, foveatedRenderingInfo) == 0xd8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies System.IntPtr, UnityEngine.ColorGamut, UnityEngine.Rect
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRBlitParams
struct CORDL_TYPE XRDisplaySubsystem_XRBlitParams {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystem_XRBlitParams();

  // Ctor Parameters [CppParam { name: "srcTex", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "srcTexArraySlice", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "srcRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "destRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None
  // }, CppParam { name: "foveatedRenderingInfo", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "srcHdrEncoded", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "srcHdrColorGamut", ty: "::UnityEngine::ColorGamut", modifiers: "", def_value: None }, CppParam { name: "srcHdrMaxLuminance", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRDisplaySubsystem_XRBlitParams(::UnityW<::UnityEngine::RenderTexture> srcTex, int32_t srcTexArraySlice, ::UnityEngine::Rect srcRect, ::UnityEngine::Rect destRect,
                                            ::System::IntPtr foveatedRenderingInfo, bool srcHdrEncoded, ::UnityEngine::ColorGamut srcHdrColorGamut, int32_t srcHdrMaxLuminance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18280 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field srcTex, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> srcTex;

  /// @brief Field srcTexArraySlice, offset: 0x8, size: 0x4, def value: None
  int32_t srcTexArraySlice;

  /// @brief Field srcRect, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Rect srcRect;

  /// @brief Field destRect, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rect destRect;

  /// @brief Field foveatedRenderingInfo, offset: 0x30, size: 0x8, def value: None
  ::System::IntPtr foveatedRenderingInfo;

  /// @brief Field srcHdrEncoded, offset: 0x38, size: 0x1, def value: None
  bool srcHdrEncoded;

  /// @brief Field srcHdrColorGamut, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::ColorGamut srcHdrColorGamut;

  /// @brief Field srcHdrMaxLuminance, offset: 0x40, size: 0x4, def value: None
  int32_t srcHdrMaxLuminance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, srcTex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, srcTexArraySlice) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, srcRect) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, destRect) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, foveatedRenderingInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, srcHdrEncoded) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, srcHdrColorGamut) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, srcHdrMaxLuminance) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, 0x48>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies System.IntPtr
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRMirrorViewBlitDesc
struct CORDL_TYPE XRDisplaySubsystem_XRMirrorViewBlitDesc {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystem_XRMirrorViewBlitDesc();

  // Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRDisplaySubsystem_XRMirrorViewBlitDesc(::System::IntPtr displaySubsystemInstance, bool nativeBlitAvailable, bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18281 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field displaySubsystemInstance, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr displaySubsystemInstance;

  /// @brief Field nativeBlitAvailable, offset: 0x8, size: 0x1, def value: None
  bool nativeBlitAvailable;

  /// @brief Field nativeBlitInvalidStates, offset: 0x9, size: 0x1, def value: None
  bool nativeBlitInvalidStates;

  /// @brief Field blitParamsCount, offset: 0xc, size: 0x4, def value: None
  int32_t blitParamsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc, displaySubsystemInstance) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc, nativeBlitAvailable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc, nativeBlitInvalidStates) == 0x9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc, blitParamsCount) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode, "UnityEngine.XR", "XRDisplaySubsystem/LateLatchNode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, "UnityEngine.XR", "XRDisplaySubsystem/XRBlitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc, "UnityEngine.XR", "XRDisplaySubsystem/XRMirrorViewBlitDesc");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
