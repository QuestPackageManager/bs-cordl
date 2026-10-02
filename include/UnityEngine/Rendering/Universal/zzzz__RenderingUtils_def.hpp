#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderingUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingUtils)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalRenderingData;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
struct ClearFlag;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
namespace UnityEngine::Rendering {
struct RTHandleAllocInfo;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RendererListParams;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
class ScaleFunc;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
namespace UnityEngine::Rendering {
struct SortingCriteria;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FilterMode;
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
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class RenderingUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::RenderingUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::RenderingUtils*, "UnityEngine.Rendering.Universal", "RenderingUtils");
// Dependencies System.Object, UnityEngine.Rendering.AttachmentDescriptor, UnityEngine.Rendering.RenderStateBlock, UnityEngine.Rendering.ShaderTagId
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderingUtils
class CORDL_TYPE RenderingUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_LegacyShaderPassNames, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_LegacyShaderPassNames,
                      put = setStaticF_m_LegacyShaderPassNames)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_LegacyShaderPassNames;

  /// @brief Field m_RenderTextureFormatSupport, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RenderTextureFormatSupport,
                      put = setStaticF_m_RenderTextureFormatSupport)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>* m_RenderTextureFormatSupport;

  /// @brief Field s_EmptyAttachment, offset 0xffffffff, size 0x78
  __declspec(property(get = getStaticF_s_EmptyAttachment, put = setStaticF_s_EmptyAttachment)) ::UnityEngine::Rendering::AttachmentDescriptor s_EmptyAttachment;

  /// @brief Field s_ErrorMaterial, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ErrorMaterial, put = setStaticF_s_ErrorMaterial)) ::UnityW<::UnityEngine::Material> s_ErrorMaterial;

  /// @brief Field s_FullscreenMesh, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_FullscreenMesh, put = setStaticF_s_FullscreenMesh)) ::UnityW<::UnityEngine::Mesh> s_FullscreenMesh;

  /// @brief Field s_RenderStateBlocks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RenderStateBlocks, put = setStaticF_s_RenderStateBlocks)) ::ArrayW<::UnityEngine::Rendering::RenderStateBlock> s_RenderStateBlocks;

  /// @brief Field s_ShaderTagValues, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_ShaderTagValues, put = setStaticF_s_ShaderTagValues)) ::ArrayW<::UnityEngine::Rendering::ShaderTagId> s_ShaderTagValues;

  /// @brief Method AddStaleResourceToPoolOrRelease, addr 0x6ceebf4, size 0xec, virtual false, abstract: false, final false
  static inline void AddStaleResourceToPoolOrRelease(::UnityEngine::Rendering::RenderGraphModule::TextureDesc desc, ::UnityEngine::Rendering::RTHandle* handle);

  /// @brief Method Blit, addr 0x6cec4e4, size 0x1d4, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rect viewport, ::UnityEngine::Rendering::RTHandle* destination,
                          ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag,
                          ::UnityEngine::Color clearColor, ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method Blit, addr 0x6cec6b8, size 0x214, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rect viewport, ::UnityEngine::Rendering::RTHandle* destinationColor,
                          ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                          ::UnityEngine::Rendering::RTHandle* destinationDepthStencil, ::UnityEngine::Rendering::RenderBufferLoadAction depthStencilLoadAction,
                          ::UnityEngine::Rendering::RenderBufferStoreAction depthStencilStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor,
                          ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method ClearSystemInfoCache, addr 0x6ced674, size 0x80, virtual false, abstract: false, final false
  static inline void ClearSystemInfoCache();

  /// @brief Method Contains, addr 0x6cee080, size 0xc, virtual false, abstract: false, final false
  static inline bool Contains(::UnityEngine::Rendering::ClearFlag a, ::UnityEngine::Rendering::ClearFlag b);

  /// @brief Method Contains, addr 0x6cedb08, size 0x108, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> source, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method CountDistinct, addr 0x6ceddbc, size 0x1b8, virtual false, abstract: false, final false
  static inline uint32_t CountDistinct(::ArrayW<::UnityEngine::Rendering::RTHandle*> source, ::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method CreateDrawingSettings, addr 0x6cf06fc, size 0x1d8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId,
                                                                                ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6cf058c, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId,
                                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6cf0a44, size 0x260, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                                ::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                                ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                                ::UnityEngine::Rendering::Universal::UniversalLightData* lightData,
                                                                                ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateDrawingSettings, addr 0x6cf08d4, size 0x170, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList,
                                                                                ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData,
                                                                                ::UnityEngine::Rendering::SortingCriteria sortingCriteria);

  /// @brief Method CreateRTHandleAllocInfo, addr 0x6cf0d1c, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandleAllocInfo CreateRTHandleAllocInfo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                                                                    ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, int32_t anisoLevel,
                                                                                    float_t mipMapBias, ::StringW name);

  /// @brief Method CreateRTHandleAllocInfo, addr 0x6cf0db0, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandleAllocInfo CreateRTHandleAllocInfo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> descriptor, ::StringW name);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CreateRendererListObjectsWithError, addr 0x6ced130, size 0x180, virtual false, abstract: false, final false
  static inline void CreateRendererListObjectsWithError(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                        ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::FilteringSettings filterSettings, ::UnityEngine::Rendering::SortingCriteria sortFlags,
                                                        ::by_ref<::UnityEngine::Rendering::RendererList> rl);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CreateRendererListObjectsWithError, addr 0x6ced2b0, size 0x134, virtual false, abstract: false, final false
  static inline void CreateRendererListObjectsWithError(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                        ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::FilteringSettings filterSettings, ::UnityEngine::Rendering::SortingCriteria sortFlags,
                                                        ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rl);

  /// @brief Method CreateRendererListWithRenderStateBlock, addr 0x6ced41c, size 0x258, virtual false, abstract: false, final false
  static inline void CreateRendererListWithRenderStateBlock(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                            ::UnityEngine::Rendering::DrawingSettings ds, ::UnityEngine::Rendering::FilteringSettings fs,
                                                            ::UnityEngine::Rendering::RenderStateBlock rsb, ::by_ref<::UnityEngine::Rendering::RendererList> rl);

  /// @brief Method CreateRendererListWithRenderStateBlock, addr 0x6cdf3a8, size 0x2fc, virtual false, abstract: false, final false
  static inline void CreateRendererListWithRenderStateBlock(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::by_ref<::UnityEngine::Rendering::CullingResults> cullResults,
                                                            ::UnityEngine::Rendering::DrawingSettings ds, ::UnityEngine::Rendering::FilteringSettings fs,
                                                            ::UnityEngine::Rendering::RenderStateBlock rsb, ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rl);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method CreateRendererParamsObjectsWithError, addr 0x6cece00, size 0x330, virtual false, abstract: false, final false
  static inline void CreateRendererParamsObjectsWithError(::by_ref<::UnityEngine::Rendering::CullingResults> cullResults, ::UnityEngine::Camera* camera,
                                                          ::UnityEngine::Rendering::FilteringSettings filterSettings, ::UnityEngine::Rendering::SortingCriteria sortFlags,
                                                          ::by_ref<::UnityEngine::Rendering::RendererListParams> param);

  /// [Conditional("DEVELOPMENT_BUILD")]
  /// [Conditional("UNITY_EDITOR")]
  /// @brief Method DrawRendererListObjectsWithError, addr 0x6ced3e4, size 0x38, virtual false, abstract: false, final false
  static inline void DrawRendererListObjectsWithError(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::RendererList> rl);

  /// @brief Method FinalBlit, addr 0x6cec8cc, size 0x534, virtual false, abstract: false, final false
  static inline void FinalBlit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Rendering::RTHandle* source,
                               ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                               ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Material* material, int32_t passIndex);

  /// @brief Method GetCameraTargetIdentifier, addr 0x6cee6cc, size 0x1ec, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetIdentifier GetCameraTargetIdentifier(::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method GetFinalBlitScaleBias, addr 0x6cda054, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetFinalBlitScaleBias(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext> renderGraphContext,
                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination);

  /// @brief Method GetLastValidColorBufferIndex, addr 0x6ced85c, size 0x124, virtual false, abstract: false, final false
  static inline int32_t GetLastValidColorBufferIndex(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers);

  /// @brief Method GetValidColorBufferCount, addr 0x6ced980, size 0x124, virtual false, abstract: false, final false
  static inline uint32_t GetValidColorBufferCount(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorBuffers);

  /// @brief Method IndexOf, addr 0x6cedd2c, size 0x90, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::ArrayW<::UnityEngine::Rendering::RTHandle*> source, ::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method IndexOf, addr 0x6cedc10, size 0x11c, virtual false, abstract: false, final false
  static inline int32_t IndexOf(::ArrayW<::UnityEngine::Rendering::RTHandle*> source, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method IsHandleYFlipped, addr 0x6cf0ca4, size 0x78, virtual false, abstract: false, final false
  static inline bool IsHandleYFlipped(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext> renderGraphContext,
                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> textureHandle);

  /// @brief Method IsMRT, addr 0x6cedaa4, size 0x64, virtual false, abstract: false, final false
  static inline bool IsMRT(::ArrayW<::UnityEngine::Rendering::RTHandle*> colorBuffers);

  /// @brief Method LastValid, addr 0x6cedf74, size 0x10c, virtual false, abstract: false, final false
  static inline int32_t LastValid(::ArrayW<::UnityEngine::Rendering::RTHandle*> source);

  /// @brief Method MultisampleDepthResolveSupported, addr 0x6cee2ec, size 0xf8, virtual false, abstract: false, final false
  static inline bool MultisampleDepthResolveSupported();

  /// @brief Method RTHandleNeedsReAlloc, addr 0x6cee3e4, size 0x2e8, virtual false, abstract: false, final false
  static inline bool RTHandleNeedsReAlloc(::UnityEngine::Rendering::RTHandle* handle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc> descriptor, bool scaled);

  /// @brief Method ReAllocateHandleIfNeeded, addr 0x6cef898, size 0x350, virtual false, abstract: false, final false
  static inline bool ReAllocateHandleIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Rendering::RenderGraphModule::TextureDesc descriptor, ::StringW name);

  /// @brief Method ReAllocateHandleIfNeeded, addr 0x6cef480, size 0x418, virtual false, abstract: false, final false
  static inline bool ReAllocateHandleIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                              ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, int32_t anisoLevel, float_t mipMapBias, ::StringW name);

  /// @brief Method ReAllocateHandleIfNeeded, addr 0x6cefbe8, size 0x474, virtual false, abstract: false, final false
  static inline bool ReAllocateHandleIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Vector2 scaleFactor,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode,
                                              ::UnityEngine::TextureWrapMode wrapMode, int32_t anisoLevel, float_t mipMapBias, ::StringW name);

  /// @brief Method ReAllocateHandleIfNeeded, addr 0x6cf005c, size 0x494, virtual false, abstract: false, final false
  static inline bool ReAllocateHandleIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Rendering::ScaleFunc* scaleFunc,
                                              /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode,
                                              ::UnityEngine::TextureWrapMode wrapMode, int32_t anisoLevel, float_t mipMapBias, ::StringW name);

  /// [Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
  /// @brief Method ReAllocateIfNeeded, addr 0x6cee8b8, size 0x33c, virtual false, abstract: false, final false
  static inline bool ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                        ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode, bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::StringW name);

  /// [Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
  /// @brief Method ReAllocateIfNeeded, addr 0x6ceece0, size 0x3b4, virtual false, abstract: false, final false
  static inline bool ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Vector2 scaleFactor,
                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                        bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::StringW name);

  /// [Obsolete("This method will be removed in a future release. Please use ReAllocateHandleIfNeeded instead. #from(2023.3)")]
  /// @brief Method ReAllocateIfNeeded, addr 0x6cef094, size 0x3ec, virtual false, abstract: false, final false
  static inline bool ReAllocateIfNeeded(::by_ref<::UnityEngine::Rendering::RTHandle*> handle, ::UnityEngine::Rendering::ScaleFunc* scaleFunc,
                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::FilterMode filterMode, ::UnityEngine::TextureWrapMode wrapMode,
                                        bool isShadowMap, int32_t anisoLevel, float_t mipMapBias, ::StringW name);

  /// @brief Method SequenceEqual, addr 0x6cee08c, size 0x260, virtual false, abstract: false, final false
  static inline bool SequenceEqual(::ArrayW<::UnityEngine::Rendering::RTHandle*> left, ::ArrayW<::UnityEngine::Rendering::RTHandle*> right);

  /// @brief Method SetMaxRTHandlePoolCapacity, addr 0x6cf04f0, size 0x9c, virtual false, abstract: false, final false
  static inline bool SetMaxRTHandlePoolCapacity(int32_t capacity);

  /// @brief Method SetScaleBiasRt, addr 0x6cec204, size 0x1a0, virtual false, abstract: false, final false
  static inline void SetScaleBiasRt(::UnityEngine::Rendering::RasterCommandBuffer* cmd, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*> cameraData,
                                    ::UnityEngine::Rendering::RTHandle* rTHandle);

  /// @brief Method SetViewAndProjectionMatrices, addr 0x6cebe14, size 0x124, virtual false, abstract: false, final false
  static inline void SetViewAndProjectionMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                  bool setInverseMatrices);

  /// @brief Method SetViewAndProjectionMatrices, addr 0x6cebf38, size 0x2cc, virtual false, abstract: false, final false
  static inline void SetViewAndProjectionMatrices(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix,
                                                  bool setInverseMatrices);

  /// @brief Method SetupOffscreenUIViewportParams, addr 0x6cec3a4, size 0x140, virtual false, abstract: false, final false
  static inline void SetupOffscreenUIViewportParams(::UnityEngine::Material* material, ::by_ref<::UnityEngine::Rect> pixelRect, bool isRenderToBackBufferTarget);

  /// [Obsolete("Use SystemInfo.IsFormatSupported instead. #from(2023.2)")]
  /// @brief Method SupportsGraphicsFormat, addr 0x6ced814, size 0x48, virtual false, abstract: false, final false
  static inline bool SupportsGraphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method SupportsLightLayers, addr 0x6cebc70, size 0x8, virtual false, abstract: false, final false
  static inline bool SupportsLightLayers(::UnityEngine::Rendering::GraphicsDeviceType type);

  /// @brief Method SupportsRenderTextureFormat, addr 0x6ced6f4, size 0x120, virtual false, abstract: false, final false
  static inline bool SupportsRenderTextureFormat(::UnityEngine::RenderTextureFormat format);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* getStaticF_m_LegacyShaderPassNames();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>* getStaticF_m_RenderTextureFormatSupport();

  static inline ::UnityEngine::Rendering::AttachmentDescriptor getStaticF_s_EmptyAttachment();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_ErrorMaterial();

  static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_FullscreenMesh();

  static inline ::ArrayW<::UnityEngine::Rendering::RenderStateBlock> getStaticF_s_RenderStateBlocks();

  static inline ::ArrayW<::UnityEngine::Rendering::ShaderTagId> getStaticF_s_ShaderTagValues();

  /// @brief Method get_emptyAttachment, addr 0x6ceb618, size 0x68, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::AttachmentDescriptor get_emptyAttachment();

  /// @brief Method get_errorMaterial, addr 0x6cebc78, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> get_errorMaterial();

  /// @brief Method get_fullscreenMesh, addr 0x6ceb680, size 0x5e8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> get_fullscreenMesh();

  /// @brief Method get_useStructuredBuffer, addr 0x6cebc68, size 0x8, virtual false, abstract: false, final false
  static inline bool get_useStructuredBuffer();

  static inline void setStaticF_m_LegacyShaderPassNames(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  static inline void setStaticF_m_RenderTextureFormatSupport(::System::Collections::Generic::Dictionary_2<::UnityEngine::RenderTextureFormat, bool>* value);

  static inline void setStaticF_s_EmptyAttachment(::UnityEngine::Rendering::AttachmentDescriptor value);

  static inline void setStaticF_s_ErrorMaterial(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_FullscreenMesh(::UnityW<::UnityEngine::Mesh> value);

  static inline void setStaticF_s_RenderStateBlocks(::ArrayW<::UnityEngine::Rendering::RenderStateBlock> value);

  static inline void setStaticF_s_ShaderTagValues(::ArrayW<::UnityEngine::Rendering::ShaderTagId> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderingUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderingUtils(RenderingUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderingUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderingUtils(RenderingUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13187 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::RenderingUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
