#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRDisplaySubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__ColorGamut_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDisplaySubsystem)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::XR {
struct XRDisplaySubsystem_LateLatchNode;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_TextureLayout;
}
namespace UnityEngine::XR {
class XRDisplaySubsystem_BindingsMarshaller;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRBlitParams;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRMirrorViewBlitDesc;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRRenderParameter;
}
namespace UnityEngine::XR {
struct XRDisplaySubsystem_XRRenderPass;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode);
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_TextureLayout);
MARK_REF_PTR_T(::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller);
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams);
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc);
MARK_VAL_T(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter);
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21949 };

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
// Dependencies
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/TextureLayout
struct CORDL_TYPE XRDisplaySubsystem_TextureLayout {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XRDisplaySubsystem_TextureLayout_Unwrapped
  enum struct __XRDisplaySubsystem_TextureLayout_Unwrapped : int32_t {
    __E_Texture2DArray = static_cast<int32_t>(0x1),
    __E_SingleTexture2D = static_cast<int32_t>(0x2),
    __E_SeparateTexture2Ds = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XRDisplaySubsystem_TextureLayout_Unwrapped() const noexcept {
    return static_cast<__XRDisplaySubsystem_TextureLayout_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystem_TextureLayout();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRDisplaySubsystem_TextureLayout(int32_t value__) noexcept;

  /// @brief Field SeparateTexture2Ds value: I32(4)
  static ::UnityEngine::XR::XRDisplaySubsystem_TextureLayout const SeparateTexture2Ds;

  /// @brief Field SingleTexture2D value: I32(2)
  static ::UnityEngine::XR::XRDisplaySubsystem_TextureLayout const SingleTexture2D;

  /// @brief Field Texture2DArray value: I32(1)
  static ::UnityEngine::XR::XRDisplaySubsystem_TextureLayout const Texture2DArray;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21950 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_TextureLayout, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystem_TextureLayout, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies UnityEngine.Matrix4x4, UnityEngine.Rect
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter
struct CORDL_TYPE XRDisplaySubsystem_XRRenderParameter {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystem_XRRenderParameter();

  // Ctor Parameters [CppParam { name: "view", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "projection", ty: "::UnityEngine::Matrix4x4", modifiers: "",
  // def_value: None }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam { name: "occlusionMesh", ty: "::UnityW<::UnityEngine::Mesh>", modifiers: "",
  // def_value: None }, CppParam { name: "textureArraySlice", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "previousView", ty: "::UnityEngine::Matrix4x4", modifiers: "",
  // def_value: None }, CppParam { name: "isPreviousViewValid", ty: "bool", modifiers: "", def_value: None }]
  constexpr XRDisplaySubsystem_XRRenderParameter(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 projection, ::UnityEngine::Rect viewport, ::UnityW<::UnityEngine::Mesh> occlusionMesh,
                                                 int32_t textureArraySlice, ::UnityEngine::Matrix4x4 previousView, bool isPreviousViewValid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21951 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xe0 };

  /// @brief Field view, offset: 0x0, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 view;

  /// @brief Field projection, offset: 0x40, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 projection;

  /// @brief Field viewport, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Rect viewport;

  /// @brief Field occlusionMesh, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> occlusionMesh;

  /// @brief Field textureArraySlice, offset: 0x98, size: 0x4, def value: None
  int32_t textureArraySlice;

  /// @brief Field previousView, offset: 0x9c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 previousView;

  /// @brief Field isPreviousViewValid, offset: 0xdc, size: 0x1, def value: None
  bool isPreviousViewValid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, view) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, projection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, viewport) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, occlusionMesh) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, textureArraySlice) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, previousView) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, isPreviousViewValid) == 0xdc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, 0xe0>, "Size mismatch!");

} // namespace UnityEngine::XR
// Dependencies System.IntPtr, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderTargetIdentifier
namespace UnityEngine::XR {
// Is value type: true
// CS Name: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
struct CORDL_TYPE XRDisplaySubsystem_XRRenderPass {
public:
  // Declarations
  /// @brief Method GetRenderParameter, addr 0x6c6a510, size 0xa8, virtual false, abstract: false, final false
  inline void GetRenderParameter(::UnityEngine::Camera* camera, int32_t renderParameterIndex, ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter> renderParameter);

  /// @brief Method GetRenderParameterCount, addr 0x6c6a614, size 0x3c, virtual false, abstract: false, final false
  inline int32_t GetRenderParameterCount();

  /// @brief Method GetRenderParameter_Injected, addr 0x6c6a5b8, size 0x5c, virtual false, abstract: false, final false
  static inline void GetRenderParameter_Injected(::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass> _unity_self, ::System::IntPtr camera, int32_t renderParameterIndex,
                                                 ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter> renderParameter);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21952 };

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21953 };

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
  /// @brief Method GetBlitParameter, addr 0x6c6a650, size 0x54, virtual false, abstract: false, final false
  inline void GetBlitParameter(int32_t blitParameterIndex, ::ByRef<::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams> blitParameter);

  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystem_XRMirrorViewBlitDesc();

  // Ctor Parameters [CppParam { name: "displaySubsystemInstance", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "nativeBlitAvailable", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "nativeBlitInvalidStates", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "blitParamsCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XRDisplaySubsystem_XRMirrorViewBlitDesc(::System::IntPtr displaySubsystemInstance, bool nativeBlitAvailable, bool nativeBlitInvalidStates, int32_t blitParamsCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21954 };

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
// Dependencies System.Object
namespace UnityEngine::XR {
// Is value type: false
// CS Name: UnityEngine.XR.XRDisplaySubsystem/BindingsMarshaller
class CORDL_TYPE XRDisplaySubsystem_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6c6a6a4, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(Il2CppObject* xrDisplaySubsystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRDisplaySubsystem_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystem_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRDisplaySubsystem_BindingsMarshaller(XRDisplaySubsystem_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystem_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRDisplaySubsystem_BindingsMarshaller(XRDisplaySubsystem_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21955 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_LateLatchNode, "UnityEngine.XR", "XRDisplaySubsystem/LateLatchNode");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_TextureLayout, "UnityEngine.XR", "XRDisplaySubsystem/TextureLayout");
NEED_NO_BOX(::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_BindingsMarshaller*, "UnityEngine.XR", "XRDisplaySubsystem/BindingsMarshaller");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_XRBlitParams, "UnityEngine.XR", "XRDisplaySubsystem/XRBlitParams");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_XRMirrorViewBlitDesc, "UnityEngine.XR", "XRDisplaySubsystem/XRMirrorViewBlitDesc");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_XRRenderParameter, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderParameter");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem_XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
