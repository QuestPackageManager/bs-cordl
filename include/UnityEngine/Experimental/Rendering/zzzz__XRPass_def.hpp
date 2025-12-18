#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRPass)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
class XROcclusionMesh;
}
namespace UnityEngine::Experimental::Rendering {
struct XRPassCreateInfo;
}
namespace UnityEngine::Experimental::Rendering {
struct XRView;
}
namespace UnityEngine::Rendering {
class BaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct HDROutputUtils_HDRDisplayInformation;
}
namespace UnityEngine::Rendering {
class IRasterCommandBuffer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableCullingParameters;
}
namespace UnityEngine {
struct ColorGamut;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class XRPass;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Experimental::Rendering::XRPass);
// Dependencies System.IntPtr, System.Object, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Rendering.ScriptableCullingParameters
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XRPass
class CORDL_TYPE XRPass : public ::System::Object {
public:
  // Declarations
  /// @brief Field <copyDepth>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__copyDepth_k__BackingField, put = __cordl_internal_set__copyDepth_k__BackingField)) bool _copyDepth_k__BackingField;

  /// @brief Field <cullingParams>k__BackingField, offset 0xf0, size 0x638
  __declspec(property(get = __cordl_internal_get__cullingParams_k__BackingField,
                      put = __cordl_internal_set__cullingParams_k__BackingField)) ::UnityEngine::Rendering::ScriptableCullingParameters _cullingParams_k__BackingField;

  /// @brief Field <cullingPassId>k__BackingField, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__cullingPassId_k__BackingField, put = __cordl_internal_set__cullingPassId_k__BackingField)) int32_t _cullingPassId_k__BackingField;

  /// @brief Field <foveatedRenderingInfo>k__BackingField, offset 0x728, size 0x8
  __declspec(property(get = __cordl_internal_get__foveatedRenderingInfo_k__BackingField,
                      put = __cordl_internal_set__foveatedRenderingInfo_k__BackingField)) ::System::IntPtr _foveatedRenderingInfo_k__BackingField;

  /// @brief Field <hasMotionVectorPass>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__hasMotionVectorPass_k__BackingField, put = __cordl_internal_set__hasMotionVectorPass_k__BackingField)) bool _hasMotionVectorPass_k__BackingField;

  /// @brief Field <motionVectorRenderTargetDesc>k__BackingField, offset 0xb8, size 0x34
  __declspec(property(get = __cordl_internal_get__motionVectorRenderTargetDesc_k__BackingField,
                      put = __cordl_internal_set__motionVectorRenderTargetDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor _motionVectorRenderTargetDesc_k__BackingField;

  /// @brief Field <motionVectorRenderTarget>k__BackingField, offset 0x90, size 0x28
  __declspec(property(get = __cordl_internal_get__motionVectorRenderTarget_k__BackingField,
                      put = __cordl_internal_set__motionVectorRenderTarget_k__BackingField)) ::UnityEngine::Rendering::RenderTargetIdentifier _motionVectorRenderTarget_k__BackingField;

  /// @brief Field <multipassId>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__multipassId_k__BackingField, put = __cordl_internal_set__multipassId_k__BackingField)) int32_t _multipassId_k__BackingField;

  /// @brief Field <occlusionMeshScale>k__BackingField, offset 0x730, size 0x4
  __declspec(property(get = __cordl_internal_get__occlusionMeshScale_k__BackingField, put = __cordl_internal_set__occlusionMeshScale_k__BackingField)) float_t _occlusionMeshScale_k__BackingField;

  /// @brief Field <renderTargetDesc>k__BackingField, offset 0x58, size 0x34
  __declspec(property(get = __cordl_internal_get__renderTargetDesc_k__BackingField,
                      put = __cordl_internal_set__renderTargetDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor _renderTargetDesc_k__BackingField;

  /// @brief Field <renderTarget>k__BackingField, offset 0x30, size 0x28
  __declspec(property(get = __cordl_internal_get__renderTarget_k__BackingField,
                      put = __cordl_internal_set__renderTarget_k__BackingField)) ::UnityEngine::Rendering::RenderTargetIdentifier _renderTarget_k__BackingField;

  __declspec(property(get = get_copyDepth, put = set_copyDepth)) bool copyDepth;

  __declspec(property(get = get_cullingParams, put = set_cullingParams)) ::UnityEngine::Rendering::ScriptableCullingParameters cullingParams;

  __declspec(property(get = get_cullingPassId, put = set_cullingPassId)) int32_t cullingPassId;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_foveatedRenderingInfo, put = set_foveatedRenderingInfo)) ::System::IntPtr foveatedRenderingInfo;

  __declspec(property(get = get_hasMotionVectorPass, put = set_hasMotionVectorPass)) bool hasMotionVectorPass;

  __declspec(property(get = get_hasValidOcclusionMesh)) bool hasValidOcclusionMesh;

  __declspec(property(get = get_hdrDisplayOutputColorGamut)) ::UnityEngine::ColorGamut hdrDisplayOutputColorGamut;

  __declspec(property(get = get_hdrDisplayOutputInformation)) ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayOutputInformation;

  __declspec(property(get = get_isFirstCameraPass)) bool isFirstCameraPass;

  __declspec(property(get = get_isHDRDisplayOutputActive)) bool isHDRDisplayOutputActive;

  __declspec(property(get = get_isLastCameraPass)) bool isLastCameraPass;

  /// @brief Field m_OcclusionMesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OcclusionMesh, put = __cordl_internal_set_m_OcclusionMesh)) ::UnityEngine::Experimental::Rendering::XROcclusionMesh* m_OcclusionMesh;

  /// @brief Field m_Views, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Views, put = __cordl_internal_set_m_Views)) ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* m_Views;

  __declspec(property(get = get_motionVectorRenderTarget, put = set_motionVectorRenderTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget;

  __declspec(property(get = get_motionVectorRenderTargetDesc, put = set_motionVectorRenderTargetDesc)) ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc;

  __declspec(property(get = get_multipassId, put = set_multipassId)) int32_t multipassId;

  __declspec(property(get = get_occlusionMeshScale, put = set_occlusionMeshScale)) float_t occlusionMeshScale;

  __declspec(property(get = get_renderTarget, put = set_renderTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;

  __declspec(property(get = get_renderTargetDesc, put = set_renderTargetDesc)) ::UnityEngine::RenderTextureDescriptor renderTargetDesc;

  __declspec(property(get = get_singlePassEnabled)) bool singlePassEnabled;

  __declspec(property(get = get_supportsFoveatedRendering)) bool supportsFoveatedRendering;

  __declspec(property(get = get_viewCount)) int32_t viewCount;

  /// @brief Method AddView, addr 0x659385c, size 0x210, virtual false, abstract: false, final false
  inline void AddView(::UnityEngine::Experimental::Rendering::XRView xrView);

  /// @brief Method ApplyXRViewCenterOffset, addr 0x6593588, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 ApplyXRViewCenterOffset(::UnityEngine::Vector2 center);

  /// @brief Method AssignCullingParams, addr 0x65937dc, size 0x80, virtual false, abstract: false, final false
  inline void AssignCullingParams(int32_t cullingPassId, ::UnityEngine::Rendering::ScriptableCullingParameters cullingParams);

  /// @brief Method AssignView, addr 0x65936dc, size 0x100, virtual false, abstract: false, final false
  inline void AssignView(int32_t viewId, ::UnityEngine::Experimental::Rendering::XRView xrView);

  /// @brief Method CreateDefault, addr 0x6592760, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::XRPass* CreateDefault(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo);

  /// @brief Method GetOcclusionMesh, addr 0x65919d0, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetOcclusionMesh(int32_t viewIndex);

  /// @brief Method GetPrevViewMatrix, addr 0x6593160, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetPrevViewMatrix(int32_t viewIndex);

  /// @brief Method GetPrevViewValid, addr 0x65930e4, size 0x7c, virtual false, abstract: false, final false
  inline bool GetPrevViewValid(int32_t viewIndex);

  /// @brief Method GetProjMatrix, addr 0x658ec6c, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetProjMatrix(int32_t viewIndex);

  /// @brief Method GetTextureArraySlice, addr 0x6590288, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetTextureArraySlice(int32_t viewIndex);

  /// @brief Method GetViewMatrix, addr 0x658ebd4, size 0x98, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetViewMatrix(int32_t viewIndex);

  /// @brief Method GetViewport, addr 0x659020c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetViewport(int32_t viewIndex);

  /// @brief Method InitBase, addr 0x6592840, size 0x204, virtual false, abstract: false, final false
  inline void InitBase(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo);

  static inline ::UnityEngine::Experimental::Rendering::XRPass* New_ctor();

  /// @brief Method Release, addr 0x6592a44, size 0x74, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method RenderDebugXRViewsFrustum, addr 0x659330c, size 0x27c, virtual false, abstract: false, final false
  inline void RenderDebugXRViewsFrustum();

  /// @brief Method RenderOcclusionMesh, addr 0x65932ac, size 0x28, virtual false, abstract: false, final false
  inline void RenderOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd, bool renderIntoTexture);

  /// @brief Method RenderOcclusionMesh, addr 0x65932d4, size 0x38, virtual false, abstract: false, final false
  inline void RenderOcclusionMesh(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture);

  /// @brief Method StartSinglePass, addr 0x6591ef8, size 0x218, virtual false, abstract: false, final false
  inline void StartSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method StartSinglePass, addr 0x65931f8, size 0x8c, virtual false, abstract: false, final false
  inline void StartSinglePass(::UnityEngine::Rendering::IRasterCommandBuffer* cmd);

  /// @brief Method StopSinglePass, addr 0x6593284, size 0x14, virtual false, abstract: false, final false
  inline void StopSinglePass(::UnityEngine::Rendering::BaseCommandBuffer* cmd);

  /// @brief Method StopSinglePass, addr 0x6591e04, size 0xf4, virtual false, abstract: false, final false
  inline void StopSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateCombinedOcclusionMesh, addr 0x658fc60, size 0x14, virtual false, abstract: false, final false
  inline void UpdateCombinedOcclusionMesh();

  constexpr bool const& __cordl_internal_get__copyDepth_k__BackingField() const;

  constexpr bool& __cordl_internal_get__copyDepth_k__BackingField();

  constexpr ::UnityEngine::Rendering::ScriptableCullingParameters const& __cordl_internal_get__cullingParams_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ScriptableCullingParameters& __cordl_internal_get__cullingParams_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__cullingPassId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__cullingPassId_k__BackingField();

  constexpr ::System::IntPtr const& __cordl_internal_get__foveatedRenderingInfo_k__BackingField() const;

  constexpr ::System::IntPtr& __cordl_internal_get__foveatedRenderingInfo_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasMotionVectorPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasMotionVectorPass_k__BackingField();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__motionVectorRenderTargetDesc_k__BackingField() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__motionVectorRenderTargetDesc_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__motionVectorRenderTarget_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__motionVectorRenderTarget_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__multipassId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__multipassId_k__BackingField();

  constexpr float_t const& __cordl_internal_get__occlusionMeshScale_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__occlusionMeshScale_k__BackingField();

  constexpr ::UnityEngine::RenderTextureDescriptor const& __cordl_internal_get__renderTargetDesc_k__BackingField() const;

  constexpr ::UnityEngine::RenderTextureDescriptor& __cordl_internal_get__renderTargetDesc_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__renderTarget_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__renderTarget_k__BackingField();

  constexpr ::UnityEngine::Experimental::Rendering::XROcclusionMesh* const& __cordl_internal_get_m_OcclusionMesh() const;

  constexpr ::UnityEngine::Experimental::Rendering::XROcclusionMesh*& __cordl_internal_get_m_OcclusionMesh();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* const& __cordl_internal_get_m_Views() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>*& __cordl_internal_get_m_Views();

  constexpr void __cordl_internal_set__copyDepth_k__BackingField(bool value);

  constexpr void __cordl_internal_set__cullingParams_k__BackingField(::UnityEngine::Rendering::ScriptableCullingParameters value);

  constexpr void __cordl_internal_set__cullingPassId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__foveatedRenderingInfo_k__BackingField(::System::IntPtr value);

  constexpr void __cordl_internal_set__hasMotionVectorPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__motionVectorRenderTargetDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set__motionVectorRenderTarget_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__multipassId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__occlusionMeshScale_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__renderTargetDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set__renderTarget_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set_m_OcclusionMesh(::UnityEngine::Experimental::Rendering::XROcclusionMesh* value);

  constexpr void __cordl_internal_set_m_Views(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* value);

  /// @brief Method .ctor, addr 0x65926c0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_copyDepth, addr 0x6592b78, size 0x8, virtual false, abstract: false, final false
  inline bool get_copyDepth();

  /// @brief Method get_cullingParams, addr 0x6592d04, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ScriptableCullingParameters get_cullingParams();

  /// @brief Method get_cullingPassId, addr 0x6592c24, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cullingPassId();

  /// @brief Method get_enabled, addr 0x658ebbc, size 0x18, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// @brief Method get_foveatedRenderingInfo, addr 0x6592d20, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_foveatedRenderingInfo();

  /// @brief Method get_hasMotionVectorPass, addr 0x6592b88, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasMotionVectorPass();

  /// @brief Method get_hasValidOcclusionMesh, addr 0x6593298, size 0x14, virtual false, abstract: false, final false
  inline bool get_hasValidOcclusionMesh();

  /// @brief Method get_hdrDisplayOutputColorGamut, addr 0x6592de8, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorGamut get_hdrDisplayOutputColorGamut();

  /// @brief Method get_hdrDisplayOutputInformation, addr 0x6592ea0, size 0x234, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation get_hdrDisplayOutputInformation();

  /// @brief Method get_isFirstCameraPass, addr 0x6592b98, size 0x10, virtual false, abstract: false, final false
  inline bool get_isFirstCameraPass();

  /// @brief Method get_isHDRDisplayOutputActive, addr 0x6592d30, size 0xb8, virtual false, abstract: false, final false
  inline bool get_isHDRDisplayOutputActive();

  /// @brief Method get_isLastCameraPass, addr 0x6592ba8, size 0x6c, virtual false, abstract: false, final false
  inline bool get_isLastCameraPass();

  /// @brief Method get_motionVectorRenderTarget, addr 0x6592c9c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_motionVectorRenderTarget();

  /// @brief Method get_motionVectorRenderTargetDesc, addr 0x6592cc4, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_motionVectorRenderTargetDesc();

  /// @brief Method get_multipassId, addr 0x6592c14, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_multipassId();

  /// @brief Method get_occlusionMeshScale, addr 0x65930d4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_occlusionMeshScale();

  /// @brief Method get_renderTarget, addr 0x6592c34, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_renderTarget();

  /// @brief Method get_renderTargetDesc, addr 0x6592c5c, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_renderTargetDesc();

  /// @brief Method get_singlePassEnabled, addr 0x658ed04, size 0x18, virtual false, abstract: false, final false
  inline bool get_singlePassEnabled();

  /// @brief Method get_supportsFoveatedRendering, addr 0x6592ab8, size 0xc0, virtual false, abstract: false, final false
  inline bool get_supportsFoveatedRendering();

  /// @brief Method get_viewCount, addr 0x6590300, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_viewCount();

  /// @brief Method set_copyDepth, addr 0x6592b80, size 0x8, virtual false, abstract: false, final false
  inline void set_copyDepth(bool value);

  /// @brief Method set_cullingParams, addr 0x6592d14, size 0xc, virtual false, abstract: false, final false
  inline void set_cullingParams(::UnityEngine::Rendering::ScriptableCullingParameters value);

  /// @brief Method set_cullingPassId, addr 0x6592c2c, size 0x8, virtual false, abstract: false, final false
  inline void set_cullingPassId(int32_t value);

  /// @brief Method set_foveatedRenderingInfo, addr 0x6592d28, size 0x8, virtual false, abstract: false, final false
  inline void set_foveatedRenderingInfo(::System::IntPtr value);

  /// @brief Method set_hasMotionVectorPass, addr 0x6592b90, size 0x8, virtual false, abstract: false, final false
  inline void set_hasMotionVectorPass(bool value);

  /// @brief Method set_motionVectorRenderTarget, addr 0x6592cb0, size 0x14, virtual false, abstract: false, final false
  inline void set_motionVectorRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_motionVectorRenderTargetDesc, addr 0x6592ce4, size 0x20, virtual false, abstract: false, final false
  inline void set_motionVectorRenderTargetDesc(::UnityEngine::RenderTextureDescriptor value);

  /// @brief Method set_multipassId, addr 0x6592c1c, size 0x8, virtual false, abstract: false, final false
  inline void set_multipassId(int32_t value);

  /// @brief Method set_occlusionMeshScale, addr 0x65930dc, size 0x8, virtual false, abstract: false, final false
  inline void set_occlusionMeshScale(float_t value);

  /// @brief Method set_renderTarget, addr 0x6592c48, size 0x14, virtual false, abstract: false, final false
  inline void set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method set_renderTargetDesc, addr 0x6592c7c, size 0x20, virtual false, abstract: false, final false
  inline void set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRPass(XRPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRPass(XRPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11833 };

  /// @brief Field m_Views, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* ___m_Views;

  /// @brief Field m_OcclusionMesh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XROcclusionMesh* ___m_OcclusionMesh;

  /// @brief Field <copyDepth>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____copyDepth_k__BackingField;

  /// @brief Field <hasMotionVectorPass>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____hasMotionVectorPass_k__BackingField;

  /// @brief Field <multipassId>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____multipassId_k__BackingField;

  /// @brief Field <cullingPassId>k__BackingField, offset: 0x28, size: 0x4, def value: None
  int32_t ____cullingPassId_k__BackingField;

  /// @brief Field <renderTarget>k__BackingField, offset: 0x30, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____renderTarget_k__BackingField;

  /// @brief Field <renderTargetDesc>k__BackingField, offset: 0x58, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ____renderTargetDesc_k__BackingField;

  /// @brief Field <motionVectorRenderTarget>k__BackingField, offset: 0x90, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____motionVectorRenderTarget_k__BackingField;

  /// @brief Field <motionVectorRenderTargetDesc>k__BackingField, offset: 0xb8, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ____motionVectorRenderTargetDesc_k__BackingField;

  /// @brief Field <cullingParams>k__BackingField, offset: 0xf0, size: 0x638, def value: None
  ::UnityEngine::Rendering::ScriptableCullingParameters ____cullingParams_k__BackingField;

  /// @brief Field <foveatedRenderingInfo>k__BackingField, offset: 0x728, size: 0x8, def value: None
  ::System::IntPtr ____foveatedRenderingInfo_k__BackingField;

  /// @brief Field <occlusionMeshScale>k__BackingField, offset: 0x730, size: 0x4, def value: None
  float_t ____occlusionMeshScale_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ___m_Views) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ___m_OcclusionMesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____copyDepth_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____hasMotionVectorPass_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____multipassId_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____cullingPassId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____renderTarget_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____renderTargetDesc_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____motionVectorRenderTarget_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____motionVectorRenderTargetDesc_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____cullingParams_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____foveatedRenderingInfo_k__BackingField) == 0x728, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____occlusionMeshScale_k__BackingField) == 0x730, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::Rendering::XRPass, 0x738>, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::XRPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::XRPass*, "UnityEngine.Experimental.Rendering", "XRPass");
