#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
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
namespace UnityEngine::Experimental::Rendering {
class XRVisibleMesh;
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
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
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
MARK_REF_T(::UnityEngine::Experimental::Rendering::XRPass*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Experimental::Rendering::XRPass*, "UnityEngine.Experimental.Rendering", "XRPass");
// Dependencies System.IntPtr, System.Object, UnityEngine.RenderTextureDescriptor, UnityEngine.Rendering.RenderTargetIdentifier, UnityEngine.Rendering.ScriptableCullingParameters
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// CS Name: UnityEngine.Experimental.Rendering.XRPass
class CORDL_TYPE XRPass : public ::System::Object {
public:
  // Declarations
  /// @brief Field <copyDepth>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__copyDepth_k__BackingField, put = __cordl_internal_set__copyDepth_k__BackingField)) bool _copyDepth_k__BackingField;

  /// @brief Field <cullingParams>k__BackingField, offset 0x100, size 0x638
  __declspec(property(get = __cordl_internal_get__cullingParams_k__BackingField,
                      put = __cordl_internal_set__cullingParams_k__BackingField)) ::UnityEngine::Rendering::ScriptableCullingParameters _cullingParams_k__BackingField;

  /// @brief Field <cullingPassId>k__BackingField, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__cullingPassId_k__BackingField, put = __cordl_internal_set__cullingPassId_k__BackingField)) int32_t _cullingPassId_k__BackingField;

  /// @brief Field <foveatedRenderingInfo>k__BackingField, offset 0x738, size 0x8
  __declspec(property(get = __cordl_internal_get__foveatedRenderingInfo_k__BackingField,
                      put = __cordl_internal_set__foveatedRenderingInfo_k__BackingField)) ::System::IntPtr _foveatedRenderingInfo_k__BackingField;

  /// @brief Field <hasMotionVectorPass>k__BackingField, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__hasMotionVectorPass_k__BackingField, put = __cordl_internal_set__hasMotionVectorPass_k__BackingField)) bool _hasMotionVectorPass_k__BackingField;

  /// @brief Field <isLastCameraPass>k__BackingField, offset 0x2b, size 0x1
  __declspec(property(get = __cordl_internal_get__isLastCameraPass_k__BackingField, put = __cordl_internal_set__isLastCameraPass_k__BackingField)) bool _isLastCameraPass_k__BackingField;

  /// @brief Field <motionVectorRenderTargetDesc>k__BackingField, offset 0xc8, size 0x34
  __declspec(property(get = __cordl_internal_get__motionVectorRenderTargetDesc_k__BackingField,
                      put = __cordl_internal_set__motionVectorRenderTargetDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor _motionVectorRenderTargetDesc_k__BackingField;

  /// @brief Field <motionVectorRenderTarget>k__BackingField, offset 0xa0, size 0x28
  __declspec(property(get = __cordl_internal_get__motionVectorRenderTarget_k__BackingField,
                      put = __cordl_internal_set__motionVectorRenderTarget_k__BackingField)) ::UnityEngine::Rendering::RenderTargetIdentifier _motionVectorRenderTarget_k__BackingField;

  /// @brief Field <multipassId>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__multipassId_k__BackingField, put = __cordl_internal_set__multipassId_k__BackingField)) int32_t _multipassId_k__BackingField;

  /// @brief Field <occlusionMeshScale>k__BackingField, offset 0x740, size 0x4
  __declspec(property(get = __cordl_internal_get__occlusionMeshScale_k__BackingField, put = __cordl_internal_set__occlusionMeshScale_k__BackingField)) float_t _occlusionMeshScale_k__BackingField;

  /// @brief Field <renderTargetDesc>k__BackingField, offset 0x68, size 0x34
  __declspec(property(get = __cordl_internal_get__renderTargetDesc_k__BackingField,
                      put = __cordl_internal_set__renderTargetDesc_k__BackingField)) ::UnityEngine::RenderTextureDescriptor _renderTargetDesc_k__BackingField;

  /// @brief Field <renderTargetScaledHeight>k__BackingField, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__renderTargetScaledHeight_k__BackingField,
                      put = __cordl_internal_set__renderTargetScaledHeight_k__BackingField)) int32_t _renderTargetScaledHeight_k__BackingField;

  /// @brief Field <renderTargetScaledWidth>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__renderTargetScaledWidth_k__BackingField,
                      put = __cordl_internal_set__renderTargetScaledWidth_k__BackingField)) int32_t _renderTargetScaledWidth_k__BackingField;

  /// @brief Field <renderTarget>k__BackingField, offset 0x40, size 0x28
  __declspec(property(get = __cordl_internal_get__renderTarget_k__BackingField,
                      put = __cordl_internal_set__renderTarget_k__BackingField)) ::UnityEngine::Rendering::RenderTargetIdentifier _renderTarget_k__BackingField;

  /// @brief Field <spaceWarpRightHandedNDC>k__BackingField, offset 0x2a, size 0x1
  __declspec(property(get = __cordl_internal_get__spaceWarpRightHandedNDC_k__BackingField,
                      put = __cordl_internal_set__spaceWarpRightHandedNDC_k__BackingField)) bool _spaceWarpRightHandedNDC_k__BackingField;

  __declspec(property(get = get_copyDepth, put = set_copyDepth)) bool copyDepth;

  __declspec(property(get = get_cullingParams, put = set_cullingParams)) ::UnityEngine::Rendering::ScriptableCullingParameters cullingParams;

  __declspec(property(get = get_cullingPassId, put = set_cullingPassId)) int32_t cullingPassId;

  __declspec(property(get = get_enabled)) bool enabled;

  __declspec(property(get = get_foveatedRenderingInfo, put = set_foveatedRenderingInfo)) ::System::IntPtr foveatedRenderingInfo;

  __declspec(property(get = get_hasMotionVectorPass, put = set_hasMotionVectorPass)) bool hasMotionVectorPass;

  __declspec(property(get = get_hasValidOcclusionMesh)) bool hasValidOcclusionMesh;

  __declspec(property(get = get_hasValidVisibleMesh)) bool hasValidVisibleMesh;

  __declspec(property(get = get_hdrDisplayOutputColorGamut)) ::UnityEngine::ColorGamut hdrDisplayOutputColorGamut;

  __declspec(property(get = get_hdrDisplayOutputInformation)) ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation hdrDisplayOutputInformation;

  __declspec(property(get = get_isFirstCameraPass)) bool isFirstCameraPass;

  __declspec(property(get = get_isHDRDisplayOutputActive)) bool isHDRDisplayOutputActive;

  __declspec(property(get = get_isLastCameraPass, put = set_isLastCameraPass)) bool isLastCameraPass;

  /// @brief Field m_OcclusionMesh, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OcclusionMesh, put = __cordl_internal_set_m_OcclusionMesh)) ::UnityEngine::Experimental::Rendering::XROcclusionMesh* m_OcclusionMesh;

  /// @brief Field m_Views, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Views, put = __cordl_internal_set_m_Views)) ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* m_Views;

  /// @brief Field m_VisibleMesh, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VisibleMesh, put = __cordl_internal_set_m_VisibleMesh)) ::UnityEngine::Experimental::Rendering::XRVisibleMesh* m_VisibleMesh;

  __declspec(property(get = get_motionVectorRenderTarget, put = set_motionVectorRenderTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget;

  __declspec(property(get = get_motionVectorRenderTargetDesc, put = set_motionVectorRenderTargetDesc)) ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc;

  __declspec(property(get = get_multipassId, put = set_multipassId)) int32_t multipassId;

  __declspec(property(get = get_occlusionMeshScale, put = set_occlusionMeshScale)) float_t occlusionMeshScale;

  __declspec(property(get = get_renderTarget, put = set_renderTarget)) ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;

  __declspec(property(get = get_renderTargetDesc, put = set_renderTargetDesc)) ::UnityEngine::RenderTextureDescriptor renderTargetDesc;

  __declspec(property(get = get_renderTargetScaledHeight, put = set_renderTargetScaledHeight)) int32_t renderTargetScaledHeight;

  __declspec(property(get = get_renderTargetScaledWidth, put = set_renderTargetScaledWidth)) int32_t renderTargetScaledWidth;

  __declspec(property(get = get_singlePassEnabled)) bool singlePassEnabled;

  __declspec(property(get = get_spaceWarpRightHandedNDC, put = set_spaceWarpRightHandedNDC)) bool spaceWarpRightHandedNDC;

  __declspec(property(get = get_supportsFoveatedRendering)) bool supportsFoveatedRendering;

  __declspec(property(get = get_viewCount)) int32_t viewCount;

  /// @brief Method AddView, addr 0x6b5fb74, size 0x210, virtual false, abstract: false, final false
  inline void AddView(::UnityEngine::Experimental::Rendering::XRView xrView);

  /// @brief Method ApplyXRViewCenterOffset, addr 0x6b5f7cc, size 0x154, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 ApplyXRViewCenterOffset(::UnityEngine::Vector2 center);

  /// @brief Method AssignCullingParams, addr 0x6b5fa20, size 0x80, virtual false, abstract: false, final false
  inline void AssignCullingParams(int32_t cullingPassId, ::UnityEngine::Rendering::ScriptableCullingParameters cullingParams);

  /// @brief Method AssignView, addr 0x6b5f920, size 0x100, virtual false, abstract: false, final false
  inline void AssignView(int32_t viewId, ::UnityEngine::Experimental::Rendering::XRView xrView);

  /// @brief Method CreateDefault, addr 0x6b5e52c, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::XRPass* CreateDefault(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo);

  /// @brief Method GetOcclusionMesh, addr 0x6b5d75c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetOcclusionMesh(int32_t viewIndex);

  /// @brief Method GetPrevViewMatrix, addr 0x6b5efdc, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetPrevViewMatrix(int32_t viewIndex);

  /// @brief Method GetPrevViewValid, addr 0x6b5ef60, size 0x7c, virtual false, abstract: false, final false
  inline bool GetPrevViewValid(int32_t viewIndex);

  /// @brief Method GetProjMatrix, addr 0x6b5a8d0, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetProjMatrix(int32_t viewIndex);

  /// @brief Method GetTextureArraySlice, addr 0x6b5bfa4, size 0x78, virtual false, abstract: false, final false
  inline int32_t GetTextureArraySlice(int32_t viewIndex);

  /// @brief Method GetViewMatrix, addr 0x6b5a840, size 0x90, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 GetViewMatrix(int32_t viewIndex);

  /// @brief Method GetViewport, addr 0x6b5bf28, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::Rect GetViewport(int32_t viewIndex);

  /// @brief Method GetVisibleMesh, addr 0x6b5f06c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> GetVisibleMesh(int32_t viewIndex);

  /// @brief Method InitBase, addr 0x6b5e60c, size 0x22c, virtual false, abstract: false, final false
  inline void InitBase(::UnityEngine::Experimental::Rendering::XRPassCreateInfo createInfo);

  static inline ::UnityEngine::Experimental::Rendering::XRPass* New_ctor();

  /// @brief Method Release, addr 0x6b5e838, size 0x84, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method RenderDebugXRViewsFrustum, addr 0x6b5f53c, size 0x290, virtual false, abstract: false, final false
  inline void RenderDebugXRViewsFrustum();

  /// @brief Method RenderOcclusionMesh, addr 0x6b5f30c, size 0x28, virtual false, abstract: false, final false
  inline void RenderOcclusionMesh(::UnityEngine::Rendering::CommandBuffer* cmd, bool renderIntoTexture);

  /// @brief Method RenderOcclusionMesh, addr 0x6b5f334, size 0x38, virtual false, abstract: false, final false
  inline void RenderOcclusionMesh(::UnityEngine::Rendering::RasterCommandBuffer* cmd, bool renderIntoTexture);

  /// @brief Method RenderVisibleMeshCustomMaterial, addr 0x6b5f518, size 0x24, virtual false, abstract: false, final false
  inline void RenderVisibleMeshCustomMaterial(::UnityEngine::Rendering::CommandBuffer* cmd, float_t occlusionMeshScale, ::UnityEngine::Material* material,
                                              ::UnityEngine::MaterialPropertyBlock* materialBlock, int32_t shaderPass, bool renderIntoTexture);

  /// @brief Method RenderVisibleMeshCustomMaterial, addr 0x6b5f36c, size 0x34, virtual false, abstract: false, final false
  inline void RenderVisibleMeshCustomMaterial(::UnityEngine::Rendering::RasterCommandBuffer* cmd, float_t occlusionMeshScale, ::UnityEngine::Material* material,
                                              ::UnityEngine::MaterialPropertyBlock* materialBlock, int32_t shaderPass, bool renderIntoTexture);

  /// @brief Method StartSinglePass, addr 0x6b5dc84, size 0x218, virtual false, abstract: false, final false
  inline void StartSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method StartSinglePass, addr 0x6b5f0e4, size 0x8c, virtual false, abstract: false, final false
  inline void StartSinglePass(::UnityEngine::Rendering::IRasterCommandBuffer* cmd);

  /// @brief Method StopSinglePass, addr 0x6b5f170, size 0x14, virtual false, abstract: false, final false
  inline void StopSinglePass(::UnityEngine::Rendering::BaseCommandBuffer* cmd);

  /// @brief Method StopSinglePass, addr 0x6b5db90, size 0xf4, virtual false, abstract: false, final false
  inline void StopSinglePass(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateCombinedOcclusionMesh, addr 0x6b5b938, size 0x28, virtual false, abstract: false, final false
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

  constexpr bool const& __cordl_internal_get__isLastCameraPass_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isLastCameraPass_k__BackingField();

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

  constexpr int32_t const& __cordl_internal_get__renderTargetScaledHeight_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__renderTargetScaledHeight_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__renderTargetScaledWidth_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__renderTargetScaledWidth_k__BackingField();

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier const& __cordl_internal_get__renderTarget_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RenderTargetIdentifier& __cordl_internal_get__renderTarget_k__BackingField();

  constexpr bool const& __cordl_internal_get__spaceWarpRightHandedNDC_k__BackingField() const;

  constexpr bool& __cordl_internal_get__spaceWarpRightHandedNDC_k__BackingField();

  constexpr ::UnityEngine::Experimental::Rendering::XROcclusionMesh* const& __cordl_internal_get_m_OcclusionMesh() const;

  constexpr ::UnityEngine::Experimental::Rendering::XROcclusionMesh*& __cordl_internal_get_m_OcclusionMesh();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* const& __cordl_internal_get_m_Views() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>*& __cordl_internal_get_m_Views();

  constexpr ::UnityEngine::Experimental::Rendering::XRVisibleMesh* const& __cordl_internal_get_m_VisibleMesh() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRVisibleMesh*& __cordl_internal_get_m_VisibleMesh();

  constexpr void __cordl_internal_set__copyDepth_k__BackingField(bool value);

  constexpr void __cordl_internal_set__cullingParams_k__BackingField(::UnityEngine::Rendering::ScriptableCullingParameters value);

  constexpr void __cordl_internal_set__cullingPassId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__foveatedRenderingInfo_k__BackingField(::System::IntPtr value);

  constexpr void __cordl_internal_set__hasMotionVectorPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isLastCameraPass_k__BackingField(bool value);

  constexpr void __cordl_internal_set__motionVectorRenderTargetDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set__motionVectorRenderTarget_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__multipassId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__occlusionMeshScale_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__renderTargetDesc_k__BackingField(::UnityEngine::RenderTextureDescriptor value);

  constexpr void __cordl_internal_set__renderTargetScaledHeight_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__renderTargetScaledWidth_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__renderTarget_k__BackingField(::UnityEngine::Rendering::RenderTargetIdentifier value);

  constexpr void __cordl_internal_set__spaceWarpRightHandedNDC_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_OcclusionMesh(::UnityEngine::Experimental::Rendering::XROcclusionMesh* value);

  constexpr void __cordl_internal_set_m_Views(::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* value);

  constexpr void __cordl_internal_set_m_VisibleMesh(::UnityEngine::Experimental::Rendering::XRVisibleMesh* value);

  /// @brief Method .ctor, addr 0x6b5e450, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_copyDepth, addr 0x6b5ea20, size 0x8, virtual false, abstract: false, final false
  inline bool get_copyDepth();

  /// [CompilerGenerated]
  /// @brief Method get_cullingParams, addr 0x6b5eb80, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ScriptableCullingParameters get_cullingParams();

  /// [CompilerGenerated]
  /// @brief Method get_cullingPassId, addr 0x6b5ea80, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cullingPassId();

  /// @brief Method get_enabled, addr 0x6b5a828, size 0x18, virtual false, abstract: false, final false
  inline bool get_enabled();

  /// [CompilerGenerated]
  /// @brief Method get_foveatedRenderingInfo, addr 0x6b5eb9c, size 0x8, virtual false, abstract: false, final false
  inline ::System::IntPtr get_foveatedRenderingInfo();

  /// [CompilerGenerated]
  /// @brief Method get_hasMotionVectorPass, addr 0x6b5ea30, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasMotionVectorPass();

  /// @brief Method get_hasValidOcclusionMesh, addr 0x6b5f184, size 0x14, virtual false, abstract: false, final false
  inline bool get_hasValidOcclusionMesh();

  /// @brief Method get_hasValidVisibleMesh, addr 0x6b5f198, size 0xbc, virtual false, abstract: false, final false
  inline bool get_hasValidVisibleMesh();

  /// @brief Method get_hdrDisplayOutputColorGamut, addr 0x6b5ec64, size 0xb8, virtual false, abstract: false, final false
  inline ::UnityEngine::ColorGamut get_hdrDisplayOutputColorGamut();

  /// @brief Method get_hdrDisplayOutputInformation, addr 0x6b5ed1c, size 0x234, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::HDROutputUtils_HDRDisplayInformation get_hdrDisplayOutputInformation();

  /// @brief Method get_isFirstCameraPass, addr 0x6b5ea50, size 0x10, virtual false, abstract: false, final false
  inline bool get_isFirstCameraPass();

  /// @brief Method get_isHDRDisplayOutputActive, addr 0x6b5ebac, size 0xb8, virtual false, abstract: false, final false
  inline bool get_isHDRDisplayOutputActive();

  /// [CompilerGenerated]
  /// @brief Method get_isLastCameraPass, addr 0x6b5ea60, size 0x8, virtual false, abstract: false, final false
  inline bool get_isLastCameraPass();

  /// [CompilerGenerated]
  /// @brief Method get_motionVectorRenderTarget, addr 0x6b5eb18, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_motionVectorRenderTarget();

  /// [CompilerGenerated]
  /// @brief Method get_motionVectorRenderTargetDesc, addr 0x6b5eb40, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_motionVectorRenderTargetDesc();

  /// [CompilerGenerated]
  /// @brief Method get_multipassId, addr 0x6b5ea70, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_multipassId();

  /// [CompilerGenerated]
  /// @brief Method get_occlusionMeshScale, addr 0x6b5ef50, size 0x8, virtual false, abstract: false, final false
  inline float_t get_occlusionMeshScale();

  /// [CompilerGenerated]
  /// @brief Method get_renderTarget, addr 0x6b5eab0, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderTargetIdentifier get_renderTarget();

  /// [CompilerGenerated]
  /// @brief Method get_renderTargetDesc, addr 0x6b5ead8, size 0x20, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureDescriptor get_renderTargetDesc();

  /// [CompilerGenerated]
  /// @brief Method get_renderTargetScaledHeight, addr 0x6b5eaa0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderTargetScaledHeight();

  /// [CompilerGenerated]
  /// @brief Method get_renderTargetScaledWidth, addr 0x6b5ea90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_renderTargetScaledWidth();

  /// @brief Method get_singlePassEnabled, addr 0x6b5a960, size 0x18, virtual false, abstract: false, final false
  inline bool get_singlePassEnabled();

  /// [CompilerGenerated]
  /// @brief Method get_spaceWarpRightHandedNDC, addr 0x6b5ea40, size 0x8, virtual false, abstract: false, final false
  inline bool get_spaceWarpRightHandedNDC();

  /// @brief Method get_supportsFoveatedRendering, addr 0x6b5e960, size 0xc0, virtual false, abstract: false, final false
  inline bool get_supportsFoveatedRendering();

  /// @brief Method get_viewCount, addr 0x6b5c01c, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_viewCount();

  /// [CompilerGenerated]
  /// @brief Method set_copyDepth, addr 0x6b5ea28, size 0x8, virtual false, abstract: false, final false
  inline void set_copyDepth(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_cullingParams, addr 0x6b5eb90, size 0xc, virtual false, abstract: false, final false
  inline void set_cullingParams(::UnityEngine::Rendering::ScriptableCullingParameters value);

  /// [CompilerGenerated]
  /// @brief Method set_cullingPassId, addr 0x6b5ea88, size 0x8, virtual false, abstract: false, final false
  inline void set_cullingPassId(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_foveatedRenderingInfo, addr 0x6b5eba4, size 0x8, virtual false, abstract: false, final false
  inline void set_foveatedRenderingInfo(::System::IntPtr value);

  /// [CompilerGenerated]
  /// @brief Method set_hasMotionVectorPass, addr 0x6b5ea38, size 0x8, virtual false, abstract: false, final false
  inline void set_hasMotionVectorPass(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_isLastCameraPass, addr 0x6b5ea68, size 0x8, virtual false, abstract: false, final false
  inline void set_isLastCameraPass(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_motionVectorRenderTarget, addr 0x6b5eb2c, size 0x14, virtual false, abstract: false, final false
  inline void set_motionVectorRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// [CompilerGenerated]
  /// @brief Method set_motionVectorRenderTargetDesc, addr 0x6b5eb60, size 0x20, virtual false, abstract: false, final false
  inline void set_motionVectorRenderTargetDesc(::UnityEngine::RenderTextureDescriptor value);

  /// [CompilerGenerated]
  /// @brief Method set_multipassId, addr 0x6b5ea78, size 0x8, virtual false, abstract: false, final false
  inline void set_multipassId(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_occlusionMeshScale, addr 0x6b5ef58, size 0x8, virtual false, abstract: false, final false
  inline void set_occlusionMeshScale(float_t value);

  /// [CompilerGenerated]
  /// @brief Method set_renderTarget, addr 0x6b5eac4, size 0x14, virtual false, abstract: false, final false
  inline void set_renderTarget(::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// [CompilerGenerated]
  /// @brief Method set_renderTargetDesc, addr 0x6b5eaf8, size 0x20, virtual false, abstract: false, final false
  inline void set_renderTargetDesc(::UnityEngine::RenderTextureDescriptor value);

  /// [CompilerGenerated]
  /// @brief Method set_renderTargetScaledHeight, addr 0x6b5eaa8, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTargetScaledHeight(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_renderTargetScaledWidth, addr 0x6b5ea98, size 0x8, virtual false, abstract: false, final false
  inline void set_renderTargetScaledWidth(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_spaceWarpRightHandedNDC, addr 0x6b5ea48, size 0x8, virtual false, abstract: false, final false
  inline void set_spaceWarpRightHandedNDC(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRPass(XRPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRPass(XRPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8722 };

  /// @brief Field m_Views, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Experimental::Rendering::XRView>* ___m_Views;

  /// @brief Field m_OcclusionMesh, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XROcclusionMesh* ___m_OcclusionMesh;

  /// @brief Field m_VisibleMesh, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRVisibleMesh* ___m_VisibleMesh;

  /// [CompilerGenerated]
  /// @brief Field <copyDepth>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____copyDepth_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <hasMotionVectorPass>k__BackingField, offset: 0x29, size: 0x1, def value: None
  bool ____hasMotionVectorPass_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <spaceWarpRightHandedNDC>k__BackingField, offset: 0x2a, size: 0x1, def value: None
  bool ____spaceWarpRightHandedNDC_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <isLastCameraPass>k__BackingField, offset: 0x2b, size: 0x1, def value: None
  bool ____isLastCameraPass_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <multipassId>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____multipassId_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <cullingPassId>k__BackingField, offset: 0x30, size: 0x4, def value: None
  int32_t ____cullingPassId_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <renderTargetScaledWidth>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____renderTargetScaledWidth_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <renderTargetScaledHeight>k__BackingField, offset: 0x38, size: 0x4, def value: None
  int32_t ____renderTargetScaledHeight_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <renderTarget>k__BackingField, offset: 0x40, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____renderTarget_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <renderTargetDesc>k__BackingField, offset: 0x68, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ____renderTargetDesc_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <motionVectorRenderTarget>k__BackingField, offset: 0xa0, size: 0x28, def value: None
  ::UnityEngine::Rendering::RenderTargetIdentifier ____motionVectorRenderTarget_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <motionVectorRenderTargetDesc>k__BackingField, offset: 0xc8, size: 0x34, def value: None
  ::UnityEngine::RenderTextureDescriptor ____motionVectorRenderTargetDesc_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <cullingParams>k__BackingField, offset: 0x100, size: 0x638, def value: None
  ::UnityEngine::Rendering::ScriptableCullingParameters ____cullingParams_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <foveatedRenderingInfo>k__BackingField, offset: 0x738, size: 0x8, def value: None
  ::System::IntPtr ____foveatedRenderingInfo_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <occlusionMeshScale>k__BackingField, offset: 0x740, size: 0x4, def value: None
  float_t ____occlusionMeshScale_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ___m_Views) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ___m_OcclusionMesh) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ___m_VisibleMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____copyDepth_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____hasMotionVectorPass_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____spaceWarpRightHandedNDC_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____isLastCameraPass_k__BackingField) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____multipassId_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____cullingPassId_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____renderTargetScaledWidth_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____renderTargetScaledHeight_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____renderTarget_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____renderTargetDesc_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____motionVectorRenderTarget_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____motionVectorRenderTargetDesc_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____cullingParams_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____foveatedRenderingInfo_k__BackingField) == 0x738, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Experimental::Rendering::XRPass, ____occlusionMeshScale_k__BackingField) == 0x740, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Experimental::Rendering::XRPass) == 0x748, "Size mismatch!");

} // namespace UnityEngine::Experimental::Rendering
