#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuffer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Array;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
struct AsyncRequestNativeArrayData;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
namespace UnityEngine::Rendering {
struct CommandBufferExecutionFlags;
}
namespace UnityEngine::Rendering {
class CommandBuffer_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingMode;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct GraphicsFenceType;
}
namespace UnityEngine::Rendering {
struct GraphicsFence;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RTClearFlags;
}
namespace UnityEngine::Rendering {
struct RayTracingAccelerationStructure_BuildSettings;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
class RayTracingShader;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetBinding;
}
namespace UnityEngine::Rendering {
struct RenderTargetFlags;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
namespace UnityEngine::Rendering {
struct SinglePassStereoMode;
}
namespace UnityEngine::Rendering {
struct SubPassDescriptor;
}
namespace UnityEngine::Rendering {
struct SynchronisationStageFlags;
}
namespace UnityEngine::Rendering {
struct SynchronisationStage;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
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
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RectInt;
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
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
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
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class CommandBuffer_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBuffer);
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBuffer/BindingsMarshaller
class CORDL_TYPE CommandBuffer_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x68e8258, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBuffer_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBuffer_BindingsMarshaller(CommandBuffer_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBuffer_BindingsMarshaller(CommandBuffer_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10750 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBuffer
class CORDL_TYPE CommandBuffer : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller;

  /// @brief Field ThrowOnSetRenderTarget, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_ThrowOnSetRenderTarget, put = setStaticF_ThrowOnSetRenderTarget)) bool ThrowOnSetRenderTarget;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_sizeInBytes)) int32_t sizeInBytes;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BeginRenderPass, addr 0x68e44cc, size 0x104, virtual false, abstract: false, final false
  inline void BeginRenderPass(int32_t width, int32_t height, int32_t volumeDepth, int32_t samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments,
                              int32_t depthAttachmentIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubPassDescriptor> subPasses,
                              ::System::ReadOnlySpan_1<uint8_t> debugNameUtf8);

  /// @brief Method BeginRenderPass_Internal, addr 0x68e42a4, size 0x18c, virtual false, abstract: false, final false
  inline void BeginRenderPass_Internal(int32_t width, int32_t height, int32_t volumeDepth, int32_t samples, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments,
                                       int32_t depthAttachmentIndex, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubPassDescriptor> subPasses, ::System::ReadOnlySpan_1<uint8_t> debugNameUtf8);

  /// @brief Method BeginRenderPass_Internal_Injected, addr 0x68e4430, size 0x9c, virtual false, abstract: false, final false
  static inline void BeginRenderPass_Internal_Injected(::System::IntPtr _unity_self, int32_t width, int32_t height, int32_t volumeDepth, int32_t samples,
                                                       ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> attachments, int32_t depthAttachmentIndex,
                                                       ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> subPasses, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> debugNameUtf8);

  /// @brief Method BeginSample, addr 0x68e08e4, size 0x14c, virtual false, abstract: false, final false
  inline void BeginSample(::StringW name);

  /// @brief Method BeginSample, addr 0x68e0c04, size 0x4, virtual false, abstract: false, final false
  inline void BeginSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method BeginSample_CustomSampler, addr 0x68e0c08, size 0xa0, virtual false, abstract: false, final false
  inline void BeginSample_CustomSampler(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method BeginSample_CustomSampler_Injected, addr 0x68e0d4c, size 0x44, virtual false, abstract: false, final false
  static inline void BeginSample_CustomSampler_Injected(::System::IntPtr _unity_self, ::System::IntPtr sampler);

  /// @brief Method BeginSample_Injected, addr 0x68e0a30, size 0x44, virtual false, abstract: false, final false
  static inline void BeginSample_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Blit, addr 0x68e77ac, size 0x80, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method Blit, addr 0x68e782c, size 0x84, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat);

  /// @brief Method Blit, addr 0x68e78b0, size 0x90, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat, int32_t pass);

  /// @brief Method Blit, addr 0x68e76a8, size 0x80, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method Blit, addr 0x68e7728, size 0x84, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat);

  /// @brief Method Blit_Identifier, addr 0x68ddca8, size 0xf8, virtual false, abstract: false, final false
  inline void Blit_Identifier(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat,
                              int32_t pass, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Identifier_Injected, addr 0x68ddda0, size 0x9c, virtual false, abstract: false, final false
  static inline void Blit_Identifier_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source,
                                              ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::System::IntPtr mat, int32_t pass, ::ByRef<::UnityEngine::Vector2> scale,
                                              ::ByRef<::UnityEngine::Vector2> offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Texture, addr 0x68ddae4, size 0x128, virtual false, abstract: false, final false
  inline void Blit_Texture(::UnityEngine::Texture* source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat, int32_t pass, ::UnityEngine::Vector2 scale,
                           ::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Texture_Injected, addr 0x68ddc0c, size 0x9c, virtual false, abstract: false, final false
  static inline void Blit_Texture_Injected(::System::IntPtr _unity_self, ::System::IntPtr source, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::System::IntPtr mat, int32_t pass,
                                           ::ByRef<::UnityEngine::Vector2> scale, ::ByRef<::UnityEngine::Vector2> offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x68e5208, size 0x70, virtual false, abstract: false, final false
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x68e5278, size 0x88, virtual false, abstract: false, final false
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure, ::UnityEngine::Vector3 relativeOrigin);

  /// @brief Method CheckThrowOnSetRenderTarget, addr 0x68e15c4, size 0x98, virtual false, abstract: false, final false
  static inline void CheckThrowOnSetRenderTarget();

  /// @brief Method Clear, addr 0x68dbd74, size 0x4c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearRandomWriteTargets, addr 0x68dd6e4, size 0x4c, virtual false, abstract: false, final false
  inline void ClearRandomWriteTargets();

  /// @brief Method ClearRandomWriteTargets_Injected, addr 0x68dd730, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearRandomWriteTargets_Injected(::System::IntPtr _unity_self);

  /// @brief Method ClearRenderTarget, addr 0x68de368, size 0xc, virtual false, abstract: false, final false
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method ClearRenderTarget, addr 0x68de40c, size 0x8, virtual false, abstract: false, final false
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method ClearRenderTarget, addr 0x68de374, size 0x98, virtual false, abstract: false, final false
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTarget, addr 0x68de504, size 0x78, virtual false, abstract: false, final false
  inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTarget, addr 0x68de57c, size 0x164, virtual false, abstract: false, final false
  inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> backgroundColors, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTargetMulti_Internal, addr 0x68de6e0, size 0x110, virtual false, abstract: false, final false
  inline void ClearRenderTargetMulti_Internal(::UnityEngine::Rendering::RTClearFlags clearFlags, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> colors, float_t depth,
                                              uint32_t stencil);

  /// @brief Method ClearRenderTargetMulti_Internal_Injected, addr 0x68e3094, size 0x6c, virtual false, abstract: false, final false
  static inline void ClearRenderTargetMulti_Internal_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::RTClearFlags clearFlags,
                                                              ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colors, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTargetSingle_Internal, addr 0x68de478, size 0x8c, virtual false, abstract: false, final false
  inline void ClearRenderTargetSingle_Internal(::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color color, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTargetSingle_Internal_Injected, addr 0x68e3028, size 0x6c, virtual false, abstract: false, final false
  static inline void ClearRenderTargetSingle_Internal_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::RTClearFlags clearFlags, ::ByRef<::UnityEngine::Color> color, float_t depth,
                                                               uint32_t stencil);

  /// @brief Method Clear_Injected, addr 0x68dbdc0, size 0x3c, virtual false, abstract: false, final false
  static inline void Clear_Injected(::System::IntPtr _unity_self);

  /// @brief Method ConfigureFoveatedRendering, addr 0x68e152c, size 0x54, virtual false, abstract: false, final false
  inline void ConfigureFoveatedRendering(::System::IntPtr platformData);

  /// @brief Method ConfigureFoveatedRendering_Injected, addr 0x68e1580, size 0x44, virtual false, abstract: false, final false
  static inline void ConfigureFoveatedRendering_Injected(::System::IntPtr _unity_self, ::System::IntPtr platformData);

  /// @brief Method CopyCounterValue, addr 0x68e75b0, size 0x4, virtual false, abstract: false, final false
  inline void CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x68e75b8, size 0x4, virtual false, abstract: false, final false
  inline void CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x68e75b4, size 0x4, virtual false, abstract: false, final false
  inline void CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x68e75bc, size 0x4, virtual false, abstract: false, final false
  inline void CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueCC, addr 0x68db6a0, size 0x84, virtual false, abstract: false, final false
  inline void CopyCounterValueCC(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueCC_Injected, addr 0x68db724, size 0x5c, virtual false, abstract: false, final false
  static inline void CopyCounterValueCC_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::IntPtr dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueCG, addr 0x68db860, size 0x84, virtual false, abstract: false, final false
  inline void CopyCounterValueCG(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueCG_Injected, addr 0x68db8e4, size 0x5c, virtual false, abstract: false, final false
  static inline void CopyCounterValueCG_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::IntPtr dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueGC, addr 0x68db780, size 0x84, virtual false, abstract: false, final false
  inline void CopyCounterValueGC(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueGC_Injected, addr 0x68db804, size 0x5c, virtual false, abstract: false, final false
  static inline void CopyCounterValueGC_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::IntPtr dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueGG, addr 0x68db940, size 0x84, virtual false, abstract: false, final false
  inline void CopyCounterValueGG(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueGG_Injected, addr 0x68db9c4, size 0x5c, virtual false, abstract: false, final false
  static inline void CopyCounterValueGG_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::IntPtr dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyTexture, addr 0x68e75c0, size 0x54, virtual false, abstract: false, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, ::UnityEngine::Rendering::RenderTargetIdentifier dst);

  /// @brief Method CopyTexture, addr 0x68e7614, size 0x4c, virtual false, abstract: false, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement,
                          int32_t dstMip);

  /// @brief Method CopyTexture, addr 0x68e7660, size 0x48, virtual false, abstract: false, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                          ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyTexture_Internal, addr 0x68dd944, size 0xd8, virtual false, abstract: false, final false
  inline void CopyTexture_Internal(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                   ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY, int32_t mode);

  /// @brief Method CopyTexture_Internal_Injected, addr 0x68dda1c, size 0xc8, virtual false, abstract: false, final false
  static inline void CopyTexture_Internal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> src, int32_t srcElement, int32_t srcMip, int32_t srcX,
                                                   int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dst, int32_t dstElement, int32_t dstMip,
                                                   int32_t dstX, int32_t dstY, int32_t mode);

  /// @brief Method CreateAsyncGraphicsFence, addr 0x68e4a00, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GraphicsFence CreateAsyncGraphicsFence();

  /// @brief Method CreateGPUFence_Internal, addr 0x68d84b4, size 0x64, virtual false, abstract: false, final false
  inline ::System::IntPtr CreateGPUFence_Internal(::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method CreateGPUFence_Internal_Injected, addr 0x68d8518, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateGPUFence_Internal_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::GraphicsFenceType fenceType,
                                                                  ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method CreateGraphicsFence, addr 0x68e4a0c, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GraphicsFence CreateGraphicsFence(::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method DisableComputeKeyword, addr 0x68df41c, size 0xac, virtual false, abstract: false, final false
  inline void DisableComputeKeyword(::UnityEngine::ComputeShader* computeShader, ::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableComputeKeyword_Injected, addr 0x68df4c8, size 0x54, virtual false, abstract: false, final false
  static inline void DisableComputeKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableGlobalKeyword, addr 0x68df278, size 0x60, virtual false, abstract: false, final false
  inline void DisableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableGlobalKeyword_Injected, addr 0x68df2d8, size 0x44, virtual false, abstract: false, final false
  static inline void DisableGlobalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x68df554, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x68df51c, size 0xc, virtual false, abstract: false, final false
  inline void DisableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x68df528, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableMaterialKeyword, addr 0x68df31c, size 0xac, virtual false, abstract: false, final false
  inline void DisableMaterialKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableMaterialKeyword_Injected, addr 0x68df3c8, size 0x54, virtual false, abstract: false, final false
  static inline void DisableMaterialKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableScissorRect, addr 0x68dd8bc, size 0x4c, virtual false, abstract: false, final false
  inline void DisableScissorRect();

  /// @brief Method DisableScissorRect_Injected, addr 0x68dd908, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableScissorRect_Injected(::System::IntPtr _unity_self);

  /// @brief Method DisableShaderKeyword, addr 0x68df0e8, size 0x14c, virtual false, abstract: false, final false
  inline void DisableShaderKeyword(::StringW keyword);

  /// @brief Method DisableShaderKeyword_Injected, addr 0x68df234, size 0x44, virtual false, abstract: false, final false
  static inline void DisableShaderKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method DispatchCompute, addr 0x68e5040, size 0xe4, virtual false, abstract: false, final false
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method DispatchCompute, addr 0x68e5124, size 0xe4, virtual false, abstract: false, final false
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method DispatchCompute, addr 0x68e503c, size 0x4, virtual false, abstract: false, final false
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method DispatchRays, addr 0x68e57b8, size 0x4, virtual false, abstract: false, final false
  inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, uint32_t width, uint32_t height, uint32_t depth, ::UnityEngine::Camera* camera);

  /// @brief Method Dispose, addr 0x68e4954, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x68e493c, size 0x18, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawMesh, addr 0x68e5a70, size 0x38, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material);

  /// @brief Method DrawMesh, addr 0x68e5a3c, size 0x34, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// @brief Method DrawMesh, addr 0x68e5a0c, size 0x30, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method DrawMesh, addr 0x68e57bc, size 0x250, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                       ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstanced, addr 0x68e6d14, size 0x28, virtual false, abstract: false, final false
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices);

  /// @brief Method DrawMeshInstanced, addr 0x68e6cf8, size 0x1c, virtual false, abstract: false, final false
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count);

  /// @brief Method DrawMeshInstanced, addr 0x68e6964, size 0x394, virtual false, abstract: false, final false
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x68e721c, size 0x20, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x68e7200, size 0x1c, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                        int32_t argsOffset);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x68e6f88, size 0x278, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                        int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x68e74d0, size 0x20, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x68e74b4, size 0x1c, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs,
                                        int32_t argsOffset);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x68e723c, size 0x278, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs,
                                        int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedProcedural, addr 0x68e6d3c, size 0x24c, virtual false, abstract: false, final false
  inline void DrawMeshInstancedProcedural(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, int32_t count,
                                          ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMultipleMeshes, addr 0x68e5aa8, size 0xa8, virtual false, abstract: false, final false
  inline void DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes,
                                 ::ArrayW<int32_t, ::Array<int32_t>*> subsetIndices, int32_t count, ::UnityEngine::Material* material, int32_t shaderPass,
                                 ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawOcclusionMesh, addr 0x68e74f0, size 0x4, virtual false, abstract: false, final false
  inline void DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport);

  /// @brief Method DrawProcedural, addr 0x68e6098, size 0x34, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount);

  /// @brief Method DrawProcedural, addr 0x68e6068, size 0x30, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount, int32_t instanceCount);

  /// @brief Method DrawProcedural, addr 0x68e5f14, size 0x154, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount, int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProcedural, addr 0x68e5ee0, size 0x34, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount);

  /// @brief Method DrawProcedural, addr 0x68e5eb0, size 0x30, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);

  /// @brief Method DrawProcedural, addr 0x68e5d78, size 0x138, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount,
                             ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x68e64e4, size 0x34, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x68e64b4, size 0x30, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x68e62e4, size 0x1d0, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x68e6930, size 0x34, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x68e6900, size 0x30, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x68e6730, size 0x1d0, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x68e62b0, size 0x34, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x68e6280, size 0x30, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x68e60cc, size 0x1b4, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x68e66fc, size 0x34, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x68e66cc, size 0x30, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x68e6518, size 0x1b4, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawRenderer, addr 0x68e5d40, size 0xc, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material);

  /// @brief Method DrawRenderer, addr 0x68e5d38, size 0x8, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// @brief Method DrawRenderer, addr 0x68e5b50, size 0x1e8, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method DrawRendererList, addr 0x68e5d4c, size 0x2c, virtual false, abstract: false, final false
  inline void DrawRendererList(::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method EnableComputeKeyword, addr 0x68def84, size 0xac, virtual false, abstract: false, final false
  inline void EnableComputeKeyword(::UnityEngine::ComputeShader* computeShader, ::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableComputeKeyword_Injected, addr 0x68df030, size 0x54, virtual false, abstract: false, final false
  static inline void EnableComputeKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableGlobalKeyword, addr 0x68dede0, size 0x60, virtual false, abstract: false, final false
  inline void EnableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableGlobalKeyword_Injected, addr 0x68dee40, size 0x44, virtual false, abstract: false, final false
  static inline void EnableGlobalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x68df0bc, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x68df084, size 0xc, virtual false, abstract: false, final false
  inline void EnableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x68df090, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableMaterialKeyword, addr 0x68dee84, size 0xac, virtual false, abstract: false, final false
  inline void EnableMaterialKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableMaterialKeyword_Injected, addr 0x68def30, size 0x54, virtual false, abstract: false, final false
  static inline void EnableMaterialKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableScissorRect, addr 0x68dd814, size 0x64, virtual false, abstract: false, final false
  inline void EnableScissorRect(::UnityEngine::Rect scissor);

  /// @brief Method EnableScissorRect_Injected, addr 0x68dd878, size 0x44, virtual false, abstract: false, final false
  static inline void EnableScissorRect_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rect> scissor);

  /// @brief Method EnableShaderKeyword, addr 0x68dec50, size 0x14c, virtual false, abstract: false, final false
  inline void EnableShaderKeyword(::StringW keyword);

  /// @brief Method EnableShaderKeyword_Injected, addr 0x68ded9c, size 0x44, virtual false, abstract: false, final false
  static inline void EnableShaderKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EndRenderPass, addr 0x68e4700, size 0x20, virtual false, abstract: false, final false
  inline void EndRenderPass();

  /// @brief Method EndRenderPass_Internal, addr 0x68e4678, size 0x4c, virtual false, abstract: false, final false
  inline void EndRenderPass_Internal();

  /// @brief Method EndRenderPass_Internal_Injected, addr 0x68e46c4, size 0x3c, virtual false, abstract: false, final false
  static inline void EndRenderPass_Internal_Injected(::System::IntPtr _unity_self);

  /// @brief Method EndSample, addr 0x68e0a74, size 0x14c, virtual false, abstract: false, final false
  inline void EndSample(::StringW name);

  /// @brief Method EndSample, addr 0x68e0ca8, size 0x4, virtual false, abstract: false, final false
  inline void EndSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method EndSample_CustomSampler, addr 0x68e0cac, size 0xa0, virtual false, abstract: false, final false
  inline void EndSample_CustomSampler(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method EndSample_CustomSampler_Injected, addr 0x68e0d90, size 0x44, virtual false, abstract: false, final false
  static inline void EndSample_CustomSampler_Injected(::System::IntPtr _unity_self, ::System::IntPtr sampler);

  /// @brief Method EndSample_Injected, addr 0x68e0bc0, size 0x44, virtual false, abstract: false, final false
  static inline void EndSample_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Finalize, addr 0x68e48f0, size 0x4c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetTemporaryRT, addr 0x68de29c, size 0x34, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter);

  /// @brief Method GetTemporaryRT, addr 0x68de1a4, size 0x30, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method GetTemporaryRT, addr 0x68de178, size 0x2c, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetTemporaryRT, addr 0x68de14c, size 0x2c, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing);

  /// @brief Method GetTemporaryRT, addr 0x68de11c, size 0x30, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, bool enableRandomWrite);

  /// @brief Method GetTemporaryRT, addr 0x68de0e8, size 0x34, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, bool enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode);

  /// @brief Method GetTemporaryRT, addr 0x68ddfdc, size 0x10c, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, bool enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode,
                             bool useDynamicScale);

  /// @brief Method GetTemporaryRT, addr 0x68dde3c, size 0xd8, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                             ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t antiAliasing, bool enableRandomWrite,
                             ::UnityEngine::RenderTextureMemoryless memorylessMode, bool useDynamicScale, ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// @brief Method GetTemporaryRTWithDescriptor, addr 0x68de1d4, size 0x6c, virtual false, abstract: false, final false
  inline void GetTemporaryRTWithDescriptor(int32_t nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter);

  /// @brief Method GetTemporaryRTWithDescriptor_Injected, addr 0x68de240, size 0x5c, virtual false, abstract: false, final false
  static inline void GetTemporaryRTWithDescriptor_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::RenderTextureDescriptor> desc, ::UnityEngine::FilterMode filter);

  /// @brief Method GetTemporaryRT_Injected, addr 0x68ddf14, size 0xc8, virtual false, abstract: false, final false
  static inline void GetTemporaryRT_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t width, int32_t height, ::UnityEngine::FilterMode filter,
                                             ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                             int32_t antiAliasing, bool enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode, bool useDynamicScale,
                                             ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// @brief Method IncrementUpdateCount, addr 0x68e12cc, size 0x54, virtual false, abstract: false, final false
  inline void IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method IncrementUpdateCount_Injected, addr 0x68e1320, size 0x44, virtual false, abstract: false, final false
  static inline void IncrementUpdateCount_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest);

  /// @brief Method InitBuffer, addr 0x68d848c, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr InitBuffer();

  /// @brief Method InternalSetComputeBufferCounterValue, addr 0x68e3860, size 0xa8, virtual false, abstract: false, final false
  inline void InternalSetComputeBufferCounterValue(::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue);

  /// @brief Method InternalSetComputeBufferCounterValue_Injected, addr 0x68e3ae8, size 0x54, virtual false, abstract: false, final false
  static inline void InternalSetComputeBufferCounterValue_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, uint32_t counterValue);

  /// @brief Method InternalSetComputeBufferData, addr 0x68e3540, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetComputeBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count,
                                           int32_t elemSize);

  /// @brief Method InternalSetComputeBufferData_Injected, addr 0x68e3a64, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetComputeBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, ::System::Array* data, int32_t managedBufferStartIndex,
                                                           int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);

  /// @brief Method InternalSetComputeBufferNativeData, addr 0x68e3908, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetComputeBufferNativeData(::UnityEngine::ComputeBuffer* buffer, ::System::IntPtr data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count,
                                                 int32_t elemSize);

  /// @brief Method InternalSetComputeBufferNativeData_Injected, addr 0x68e39e0, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetComputeBufferNativeData_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, ::System::IntPtr data, int32_t nativeBufferStartIndex,
                                                                 int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);

  /// @brief Method InternalSetGraphicsBufferCounterValue, addr 0x68e3fc8, size 0xa8, virtual false, abstract: false, final false
  inline void InternalSetGraphicsBufferCounterValue(::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue);

  /// @brief Method InternalSetGraphicsBufferCounterValue_Injected, addr 0x68e4250, size 0x54, virtual false, abstract: false, final false
  static inline void InternalSetGraphicsBufferCounterValue_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, uint32_t counterValue);

  /// @brief Method InternalSetGraphicsBufferData, addr 0x68e3ca8, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetGraphicsBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count,
                                            int32_t elemSize);

  /// @brief Method InternalSetGraphicsBufferData_Injected, addr 0x68e41cc, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetGraphicsBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, ::System::Array* data, int32_t managedBufferStartIndex,
                                                            int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);

  /// @brief Method InternalSetGraphicsBufferNativeData, addr 0x68e4070, size 0xd8, virtual false, abstract: false, final false
  inline void InternalSetGraphicsBufferNativeData(::UnityEngine::GraphicsBuffer* buffer, ::System::IntPtr data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count,
                                                  int32_t elemSize);

  /// @brief Method InternalSetGraphicsBufferNativeData_Injected, addr 0x68e4148, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetGraphicsBufferNativeData_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, ::System::IntPtr data, int32_t nativeBufferStartIndex,
                                                                  int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);

  /// @brief Method Internal_BuildRayTracingAccelerationStructure, addr 0x68db04c, size 0xb4, virtual false, abstract: false, final false
  inline void Internal_BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure,
                                                            ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings buildSettings);

  /// @brief Method Internal_BuildRayTracingAccelerationStructure_Injected, addr 0x68db100, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_BuildRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, ::System::IntPtr accelerationStructure,
                                                                            ::ByRef<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings> buildSettings);

  /// @brief Method Internal_DispatchCompute, addr 0x68d99d0, size 0xe4, virtual false, abstract: false, final false
  inline void Internal_DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method Internal_DispatchComputeIndirect, addr 0x68d9b28, size 0xdc, virtual false, abstract: false, final false
  inline void Internal_DispatchComputeIndirect(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchComputeIndirectGraphicsBuffer, addr 0x68d9c70, size 0xdc, virtual false, abstract: false, final false
  inline void Internal_DispatchComputeIndirectGraphicsBuffer(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchComputeIndirectGraphicsBuffer_Injected, addr 0x68d9d4c, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_DispatchComputeIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, ::System::IntPtr indirectBuffer,
                                                                             uint32_t argsOffset);

  /// @brief Method Internal_DispatchComputeIndirect_Injected, addr 0x68d9c04, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_DispatchComputeIndirect_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, ::System::IntPtr indirectBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchCompute_Injected, addr 0x68d9ab4, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_DispatchCompute_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY,
                                                       int32_t threadGroupsZ);

  /// @brief Method Internal_DispatchRays, addr 0x68db414, size 0x208, virtual false, abstract: false, final false
  inline void Internal_DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenShaderName, uint32_t width, uint32_t height, uint32_t depth,
                                    ::UnityEngine::Camera* camera);

  /// @brief Method Internal_DispatchRays_Injected, addr 0x68db61c, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_DispatchRays_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> rayGenShaderName,
                                                    uint32_t width, uint32_t height, uint32_t depth, ::System::IntPtr camera);

  /// @brief Method Internal_DrawMesh, addr 0x68dbdfc, size 0x124, virtual false, abstract: false, final false
  inline void Internal_DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                                ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstanced, addr 0x68dcd88, size 0x198, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                         ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstancedIndirect, addr 0x68dd144, size 0x12c, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                                 int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstancedIndirectGraphicsBuffer, addr 0x68dd2fc, size 0x12c, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstancedIndirectGraphicsBuffer(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                               ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected, addr 0x68dd428, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, int32_t shaderPass,
                                                                               ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawMeshInstancedIndirect_Injected, addr 0x68dd270, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedIndirect_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, int32_t shaderPass,
                                                                 ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawMeshInstancedProcedural, addr 0x68dcfac, size 0x114, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstancedProcedural(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, int32_t count,
                                                   ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstancedProcedural_Injected, addr 0x68dd0c0, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedProcedural_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, int32_t shaderPass,
                                                                   int32_t count, ::System::IntPtr properties);

  /// @brief Method Internal_DrawMeshInstanced_Injected, addr 0x68dcf20, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstanced_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, int32_t shaderPass,
                                                         ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> matrices, int32_t count, ::System::IntPtr properties);

  /// @brief Method Internal_DrawMesh_Injected, addr 0x68dbf20, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_DrawMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::ByRef<::UnityEngine::Matrix4x4> matrix, ::System::IntPtr material, int32_t submeshIndex,
                                                int32_t shaderPass, ::System::IntPtr properties);

  /// @brief Method Internal_DrawMultipleMeshes, addr 0x68dbfa4, size 0x1d0, virtual false, abstract: false, final false
  inline void Internal_DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes,
                                          ::ArrayW<int32_t, ::Array<int32_t>*> subsetIndices, int32_t count, ::UnityEngine::Material* material, int32_t shaderPass,
                                          ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMultipleMeshes_Injected, addr 0x68dc174, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMultipleMeshes_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> matrices,
                                                          ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> subsetIndices,
                                                          int32_t count, ::System::IntPtr material, int32_t shaderPass, ::System::IntPtr properties);

  /// @brief Method Internal_DrawOcclusionMesh, addr 0x68dd4b4, size 0x60, virtual false, abstract: false, final false
  inline void Internal_DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport);

  /// @brief Method Internal_DrawOcclusionMesh_Injected, addr 0x68dd514, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_DrawOcclusionMesh_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::RectInt> normalizedCamViewport);

  /// @brief Method Internal_DrawProcedural, addr 0x68dc408, size 0xf4, virtual false, abstract: false, final false
  inline void Internal_DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount,
                                      int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProceduralIndexed, addr 0x68dc588, size 0x104, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndexed(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                             ::UnityEngine::MeshTopology topology, int32_t indexCount, int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProceduralIndexedIndirect, addr 0x68dc8b0, size 0x10c, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndexedIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset,
                                                     ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProceduralIndexedIndirectGraphicsBuffer, addr 0x68dcbe0, size 0x10c, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndexedIndirectGraphicsBuffer(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                   ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset,
                                                                   ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected, addr 0x68dccec, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, ::System::IntPtr indexBuffer, ::ByRef<::UnityEngine::Matrix4x4> matrix,
                                                                                   ::System::IntPtr material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::System::IntPtr bufferWithArgs,
                                                                                   int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawProceduralIndexedIndirect_Injected, addr 0x68dc9bc, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndexedIndirect_Injected(::System::IntPtr _unity_self, ::System::IntPtr indexBuffer, ::ByRef<::UnityEngine::Matrix4x4> matrix, ::System::IntPtr material,
                                                                     int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::System::IntPtr bufferWithArgs, int32_t argsOffset,
                                                                     ::System::IntPtr properties);

  /// @brief Method Internal_DrawProceduralIndexed_Injected, addr 0x68dc68c, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndexed_Injected(::System::IntPtr _unity_self, ::System::IntPtr indexBuffer, ::ByRef<::UnityEngine::Matrix4x4> matrix, ::System::IntPtr material,
                                                             int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t indexCount, int32_t instanceCount, ::System::IntPtr properties);

  /// @brief Method Internal_DrawProceduralIndirect, addr 0x68dc728, size 0xfc, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                              ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProceduralIndirectGraphicsBuffer, addr 0x68dca58, size 0xfc, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndirectGraphicsBuffer(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                                            ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProceduralIndirectGraphicsBuffer_Injected, addr 0x68dcb54, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> matrix, ::System::IntPtr material, int32_t shaderPass,
                                                                            ::UnityEngine::MeshTopology topology, ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawProceduralIndirect_Injected, addr 0x68dc824, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndirect_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> matrix, ::System::IntPtr material, int32_t shaderPass,
                                                              ::UnityEngine::MeshTopology topology, ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawProcedural_Injected, addr 0x68dc4fc, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawProcedural_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> matrix, ::System::IntPtr material, int32_t shaderPass,
                                                      ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount, ::System::IntPtr properties);

  /// @brief Method Internal_DrawRenderer, addr 0x68dc200, size 0x104, virtual false, abstract: false, final false
  inline void Internal_DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method Internal_DrawRendererList, addr 0x68dc370, size 0x54, virtual false, abstract: false, final false
  inline void Internal_DrawRendererList(::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method Internal_DrawRendererList_Injected, addr 0x68dc3c4, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_DrawRendererList_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::RendererList> rendererList);

  /// @brief Method Internal_DrawRenderer_Injected, addr 0x68dc304, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_DrawRenderer_Injected(::System::IntPtr _unity_self, ::System::IntPtr renderer, ::System::IntPtr material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method Internal_RequestAsyncReadback_1, addr 0x68d7590, size 0xdc, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_1(::UnityEngine::ComputeBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_1_Injected, addr 0x68d766c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_1_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_2, addr 0x68d76c8, size 0xf4, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_2(::UnityEngine::ComputeBuffer* src, int32_t size, int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_2_Injected, addr 0x68d77bc, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_2_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t size, int32_t offset,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_3, addr 0x68d7830, size 0xf0, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_3(::UnityEngine::Texture* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_3_Injected, addr 0x68d7920, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_3_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_4, addr 0x68d797c, size 0xf8, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_4(::UnityEngine::Texture* src, int32_t mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_4_Injected, addr 0x68d7a74, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_4_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t mipIndex,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_5, addr 0x68d7ae0, size 0x108, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_5(::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_5_Injected, addr 0x68d7be8, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_5_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_6, addr 0x68d7c5c, size 0x17c, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_6(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_6_Injected, addr 0x68d7dd8, size 0xa8, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_6_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z,
                                                              int32_t depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_7, addr 0x68d7e80, size 0x184, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_7(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_7_Injected, addr 0x68d8004, size 0xb8, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_7_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z,
                                                              int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_8, addr 0x68d80bc, size 0xdc, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_8(::UnityEngine::GraphicsBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_8_Injected, addr 0x68d8198, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_8_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_9, addr 0x68d81f4, size 0xf4, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_9(::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_9_Injected, addr 0x68d82e8, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_9_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t size, int32_t offset,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_SetComputeBufferParam, addr 0x68d933c, size 0xdc, virtual false, abstract: false, final false
  inline void Internal_SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method Internal_SetComputeBufferParam_Injected, addr 0x68d9418, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// @brief Method Internal_SetComputeConstantComputeBufferParam, addr 0x68d9710, size 0xec, virtual false, abstract: false, final false
  inline void Internal_SetComputeConstantComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method Internal_SetComputeConstantComputeBufferParam_Injected, addr 0x68d97fc, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_SetComputeConstantComputeBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::System::IntPtr buffer, int32_t offset,
                                                                            int32_t size);

  /// @brief Method Internal_SetComputeConstantGraphicsBufferParam, addr 0x68d9870, size 0xec, virtual false, abstract: false, final false
  inline void Internal_SetComputeConstantGraphicsBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method Internal_SetComputeConstantGraphicsBufferParam_Injected, addr 0x68d995c, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_SetComputeConstantGraphicsBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::System::IntPtr buffer, int32_t offset,
                                                                             int32_t size);

  /// @brief Method Internal_SetComputeFloats, addr 0x68d8e94, size 0x140, virtual false, abstract: false, final false
  inline void Internal_SetComputeFloats(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method Internal_SetComputeFloats_Injected, addr 0x68d8fd4, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeFloats_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method Internal_SetComputeGraphicsBufferHandleParam, addr 0x68d9484, size 0xd8, virtual false, abstract: false, final false
  inline void Internal_SetComputeGraphicsBufferHandleParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method Internal_SetComputeGraphicsBufferHandleParam_Injected, addr 0x68d955c, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeGraphicsBufferHandleParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID,
                                                                           ::ByRef<::UnityEngine::GraphicsBufferHandle> bufferHandle);

  /// @brief Method Internal_SetComputeGraphicsBufferParam, addr 0x68d95c8, size 0xdc, virtual false, abstract: false, final false
  inline void Internal_SetComputeGraphicsBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method Internal_SetComputeGraphicsBufferParam_Injected, addr 0x68d96a4, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeGraphicsBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// @brief Method Internal_SetComputeInts, addr 0x68d9030, size 0x140, virtual false, abstract: false, final false
  inline void Internal_SetComputeInts(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method Internal_SetComputeInts_Injected, addr 0x68d9170, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeInts_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method Internal_SetComputeRayTracingAccelerationStructure, addr 0x68db2a8, size 0x100, virtual false, abstract: false, final false
  inline void Internal_SetComputeRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method Internal_SetComputeRayTracingAccelerationStructure_Injected, addr 0x68db3a8, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::System::IntPtr accelerationStructure);

  /// @brief Method Internal_SetComputeTextureParam, addr 0x68d91cc, size 0xec, virtual false, abstract: false, final false
  inline void Internal_SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                              int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method Internal_SetComputeTextureParam_Injected, addr 0x68d92b8, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_SetComputeTextureParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID,
                                                              ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, int32_t mipLevel,
                                                              ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0x68db154, size 0xf8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                          ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0x68db24c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr accelerationStructure);

  /// @brief Method Internal_SetRayTracingComputeBufferParam, addr 0x68d9db8, size 0xd4, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingComputeBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method Internal_SetRayTracingComputeBufferParam_Injected, addr 0x68d9e8c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingComputeBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr buffer);

  /// @brief Method Internal_SetRayTracingConstantComputeBufferParam, addr 0x68da144, size 0xec, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingConstantComputeBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset,
                                                               int32_t size);

  /// @brief Method Internal_SetRayTracingConstantComputeBufferParam_Injected, addr 0x68da230, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingConstantComputeBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr buffer, int32_t offset,
                                                                               int32_t size);

  /// @brief Method Internal_SetRayTracingConstantGraphicsBufferParam, addr 0x68da2a4, size 0xec, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingConstantGraphicsBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset,
                                                                int32_t size);

  /// @brief Method Internal_SetRayTracingConstantGraphicsBufferParam_Injected, addr 0x68da390, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingConstantGraphicsBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr buffer,
                                                                                int32_t offset, int32_t size);

  /// @brief Method Internal_SetRayTracingFloatParam, addr 0x68da52c, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val);

  /// @brief Method Internal_SetRayTracingFloatParam_Injected, addr 0x68da5f8, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingFloatParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, float_t val);

  /// @brief Method Internal_SetRayTracingFloats, addr 0x68dad14, size 0x140, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingFloats(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method Internal_SetRayTracingFloats_Injected, addr 0x68dae54, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingFloats_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                           ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method Internal_SetRayTracingGraphicsBufferHandleParam, addr 0x68da018, size 0xd0, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingGraphicsBufferHandleParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method Internal_SetRayTracingGraphicsBufferHandleParam_Injected, addr 0x68da0e8, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingGraphicsBufferHandleParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                                              ::ByRef<::UnityEngine::GraphicsBufferHandle> bufferHandle);

  /// @brief Method Internal_SetRayTracingGraphicsBufferParam, addr 0x68d9ee8, size 0xd4, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingGraphicsBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method Internal_SetRayTracingGraphicsBufferParam_Injected, addr 0x68d9fbc, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingGraphicsBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr buffer);

  /// @brief Method Internal_SetRayTracingIntParam, addr 0x68da65c, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val);

  /// @brief Method Internal_SetRayTracingIntParam_Injected, addr 0x68da728, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingIntParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, int32_t val);

  /// @brief Method Internal_SetRayTracingInts, addr 0x68daeb0, size 0x140, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingInts(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method Internal_SetRayTracingInts_Injected, addr 0x68daff0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingInts_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method Internal_SetRayTracingMatrixArrayParam, addr 0x68dab78, size 0x140, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                     ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method Internal_SetRayTracingMatrixArrayParam_Injected, addr 0x68dacb8, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingMatrixArrayParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                                     ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method Internal_SetRayTracingMatrixParam, addr 0x68daa50, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method Internal_SetRayTracingMatrixParam_Injected, addr 0x68dab1c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingMatrixParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::ByRef<::UnityEngine::Matrix4x4> val);

  /// @brief Method Internal_SetRayTracingTextureParam, addr 0x68da404, size 0xcc, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt);

  /// @brief Method Internal_SetRayTracingTextureParam_Injected, addr 0x68da4d0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingTextureParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                                 ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt);

  /// @brief Method Internal_SetRayTracingVectorArrayParam, addr 0x68da8b4, size 0x140, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                     ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method Internal_SetRayTracingVectorArrayParam_Injected, addr 0x68da9f4, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingVectorArrayParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                                     ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method Internal_SetRayTracingVectorParam, addr 0x68da784, size 0xd4, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method Internal_SetRayTracingVectorParam_Injected, addr 0x68da858, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingVectorParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::ByRef<::UnityEngine::Vector4> val);

  /// @brief Method Internal_SetSinglePassStereo, addr 0x68d83f4, size 0x54, virtual false, abstract: false, final false
  inline void Internal_SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method Internal_SetSinglePassStereo_Injected, addr 0x68d8448, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_SetSinglePassStereo_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method InvokeOnRenderObjectCallbacks, addr 0x68e48d0, size 0x20, virtual false, abstract: false, final false
  inline void InvokeOnRenderObjectCallbacks();

  /// @brief Method InvokeOnRenderObjectCallbacks_Internal, addr 0x68e4848, size 0x4c, virtual false, abstract: false, final false
  inline void InvokeOnRenderObjectCallbacks_Internal();

  /// @brief Method InvokeOnRenderObjectCallbacks_Internal_Injected, addr 0x68e4894, size 0x3c, virtual false, abstract: false, final false
  static inline void InvokeOnRenderObjectCallbacks_Internal_Injected(::System::IntPtr _unity_self);

  /// @brief Method IssuePluginCustomBlit, addr 0x68e81a4, size 0x68, virtual false, abstract: false, final false
  inline void IssuePluginCustomBlit(::System::IntPtr callback, uint32_t command, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest,
                                    uint32_t commandParam, uint32_t commandFlags);

  /// @brief Method IssuePluginCustomBlitInternal, addr 0x68e0e9c, size 0x94, virtual false, abstract: false, final false
  inline void IssuePluginCustomBlitInternal(::System::IntPtr callback, uint32_t command, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source,
                                            ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, uint32_t commandParam, uint32_t commandFlags);

  /// @brief Method IssuePluginCustomBlitInternal_Injected, addr 0x68e0f30, size 0x84, virtual false, abstract: false, final false
  static inline void IssuePluginCustomBlitInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr callback, uint32_t command, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source,
                                                            ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, uint32_t commandParam, uint32_t commandFlags);

  /// @brief Method IssuePluginCustomTextureUpdateInternal, addr 0x68e0fb4, size 0xc4, virtual false, abstract: false, final false
  inline void IssuePluginCustomTextureUpdateInternal(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, uint32_t userData, bool useNewUnityRenderingExtTextureUpdateParamsV2);

  /// @brief Method IssuePluginCustomTextureUpdateInternal_Injected, addr 0x68e1078, size 0x6c, virtual false, abstract: false, final false
  static inline void IssuePluginCustomTextureUpdateInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr callback, ::System::IntPtr targetTexture, uint32_t userData,
                                                                     bool useNewUnityRenderingExtTextureUpdateParamsV2);

  /// @brief Method IssuePluginCustomTextureUpdateV2, addr 0x68e820c, size 0x4c, virtual false, abstract: false, final false
  inline void IssuePluginCustomTextureUpdateV2(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, uint32_t userData);

  /// @brief Method IssuePluginEvent, addr 0x68e80bc, size 0x54, virtual false, abstract: false, final false
  inline void IssuePluginEvent(::System::IntPtr callback, int32_t eventID);

  /// @brief Method IssuePluginEventAndData, addr 0x68e8110, size 0x94, virtual false, abstract: false, final false
  inline void IssuePluginEventAndData(::System::IntPtr callback, int32_t eventID, ::System::IntPtr data);

  /// @brief Method IssuePluginEventAndDataInternal, addr 0x68e0dd4, size 0x6c, virtual false, abstract: false, final false
  inline void IssuePluginEventAndDataInternal(::System::IntPtr callback, int32_t eventID, ::System::IntPtr data);

  /// @brief Method IssuePluginEventAndDataInternal_Injected, addr 0x68e0e40, size 0x5c, virtual false, abstract: false, final false
  static inline void IssuePluginEventAndDataInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr callback, int32_t eventID, ::System::IntPtr data);

  /// @brief Method IssuePluginEventInternal, addr 0x68e082c, size 0x64, virtual false, abstract: false, final false
  inline void IssuePluginEventInternal(::System::IntPtr callback, int32_t eventID);

  /// @brief Method IssuePluginEventInternal_Injected, addr 0x68e0890, size 0x54, virtual false, abstract: false, final false
  static inline void IssuePluginEventInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr callback, int32_t eventID);

  /// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0x68e03d4, size 0x64, virtual false, abstract: false, final false
  inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID);

  /// @brief Method MarkLateLatchMatrixShaderPropertyID_Injected, addr 0x68e0438, size 0x54, virtual false, abstract: false, final false
  static inline void MarkLateLatchMatrixShaderPropertyID_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID);

  static inline ::UnityEngine::Rendering::CommandBuffer* New_ctor();

  /// @brief Method NextSubPass, addr 0x68e4658, size 0x20, virtual false, abstract: false, final false
  inline void NextSubPass();

  /// @brief Method NextSubPass_Internal, addr 0x68e45d0, size 0x4c, virtual false, abstract: false, final false
  inline void NextSubPass_Internal();

  /// @brief Method NextSubPass_Internal_Injected, addr 0x68e461c, size 0x3c, virtual false, abstract: false, final false
  static inline void NextSubPass_Internal_Injected(::System::IntPtr _unity_self);

  /// @brief Method Release, addr 0x68e49fc, size 0x4, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method ReleaseBuffer, addr 0x68d8624, size 0x4c, virtual false, abstract: false, final false
  inline void ReleaseBuffer();

  /// @brief Method ReleaseBuffer_Injected, addr 0x68d8670, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseBuffer_Injected(::System::IntPtr _unity_self);

  /// @brief Method ReleaseTemporaryRT, addr 0x68de2d0, size 0x54, virtual false, abstract: false, final false
  inline void ReleaseTemporaryRT(int32_t nameID);

  /// @brief Method ReleaseTemporaryRT_Injected, addr 0x68de324, size 0x44, virtual false, abstract: false, final false
  static inline void ReleaseTemporaryRT_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src, int32_t size, int32_t offset,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::TextureFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void RequestAsyncReadbackIntoNativeArray(::ByRef<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::UnityEngine::TextureFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method SetBufferCounterValue, addr 0x68e385c, size 0x4, virtual false, abstract: false, final false
  inline void SetBufferCounterValue(::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue);

  /// @brief Method SetBufferCounterValue, addr 0x68e3fc4, size 0x4, virtual false, abstract: false, final false
  inline void SetBufferCounterValue(::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue);

  /// @brief Method SetBufferData, addr 0x68e33d4, size 0x16c, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data);

  /// @brief Method SetBufferData, addr 0x68e3618, size 0x244, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x68e3b3c, size 0x16c, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data);

  /// @brief Method SetBufferData, addr 0x68e3d80, size 0x244, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetComputeBufferParam, addr 0x68e4e9c, size 0x4c, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x68e4f40, size 0x4c, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x68e4ef0, size 0x4c, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetComputeBufferParam, addr 0x68e4e98, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x68e4f3c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x68e4ee8, size 0x8, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetComputeConstantBufferParam, addr 0x68e4f90, size 0x54, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x68e4fe8, size 0x54, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x68e4f8c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x68e4fe4, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeFloatParam, addr 0x68e4b3c, size 0x44, virtual false, abstract: false, final false
  inline void SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, float_t val);

  /// @brief Method SetComputeFloatParam, addr 0x68d86ac, size 0xcc, virtual false, abstract: false, final false
  inline void SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, float_t val);

  /// @brief Method SetComputeFloatParam_Injected, addr 0x68d8778, size 0x64, virtual false, abstract: false, final false
  static inline void SetComputeFloatParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, float_t val);

  /// @brief Method SetComputeFloatParams, addr 0x68e4cf0, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetComputeFloatParams, addr 0x68e4d2c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetComputeIntParam, addr 0x68e4b80, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, int32_t val);

  /// @brief Method SetComputeIntParam, addr 0x68d87dc, size 0xcc, virtual false, abstract: false, final false
  inline void SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, int32_t val);

  /// @brief Method SetComputeIntParam_Injected, addr 0x68d88a8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeIntParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, int32_t val);

  /// @brief Method SetComputeIntParams, addr 0x68e4d30, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetComputeIntParams, addr 0x68e4d6c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetComputeKeyword, addr 0x68df754, size 0xbc, virtual false, abstract: false, final false
  inline void SetComputeKeyword(::UnityEngine::ComputeShader* computeShader, ::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetComputeKeyword_Injected, addr 0x68df810, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetComputeMatrixArrayParam, addr 0x68e4cb4, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetComputeMatrixArrayParam, addr 0x68d8cf8, size 0x140, virtual false, abstract: false, final false
  inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetComputeMatrixArrayParam_Injected, addr 0x68d8e38, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeMatrixArrayParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetComputeMatrixParam, addr 0x68e4c5c, size 0x58, virtual false, abstract: false, final false
  inline void SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetComputeMatrixParam, addr 0x68d8bd0, size 0xcc, virtual false, abstract: false, final false
  inline void SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetComputeMatrixParam_Injected, addr 0x68d8c9c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeMatrixParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::ByRef<::UnityEngine::Matrix4x4> val);

  /// @brief Method SetComputeTextureParam, addr 0x68e4d70, size 0x54, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetComputeTextureParam, addr 0x68e4dd0, size 0x58, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x68e4e30, size 0x64, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeTextureParam, addr 0x68e4dc4, size 0xc, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetComputeTextureParam, addr 0x68e4e28, size 0x8, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x68e4e94, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeVectorArrayParam, addr 0x68e4c20, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetComputeVectorArrayParam, addr 0x68d8a34, size 0x140, virtual false, abstract: false, final false
  inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetComputeVectorArrayParam_Injected, addr 0x68d8b74, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeVectorArrayParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetComputeVectorParam, addr 0x68e4bbc, size 0x64, virtual false, abstract: false, final false
  inline void SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetComputeVectorParam, addr 0x68d8904, size 0xd4, virtual false, abstract: false, final false
  inline void SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetComputeVectorParam_Injected, addr 0x68d89d8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeVectorParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::ByRef<::UnityEngine::Vector4> val);

  /// @brief Method SetExecutionFlags, addr 0x68dfb78, size 0x54, virtual false, abstract: false, final false
  inline void SetExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags flags);

  /// @brief Method SetExecutionFlags_Injected, addr 0x68dfbcc, size 0x44, virtual false, abstract: false, final false
  static inline void SetExecutionFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CommandBufferExecutionFlags flags);

  /// @brief Method SetFoveatedRenderingMode, addr 0x68e13fc, size 0x54, virtual false, abstract: false, final false
  inline void SetFoveatedRenderingMode(::UnityEngine::Rendering::FoveatedRenderingMode foveatedRenderingMode);

  /// @brief Method SetFoveatedRenderingMode_Injected, addr 0x68e1450, size 0x44, virtual false, abstract: false, final false
  static inline void SetFoveatedRenderingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::FoveatedRenderingMode foveatedRenderingMode);

  /// @brief Method SetGlobalBuffer, addr 0x68e7f70, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x68e7fa8, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x68e7fa4, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x68e7fdc, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBufferInternal, addr 0x68e05ec, size 0x70, virtual false, abstract: false, final false
  inline void SetGlobalBufferInternal(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBufferInternal_Injected, addr 0x68e065c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalBufferInternal_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr value);

  /// @brief Method SetGlobalColor, addr 0x68e7a30, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x68dead8, size 0x6c, virtual false, abstract: false, final false
  inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor_Injected, addr 0x68deb44, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalColor_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Color> value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x68e7fe4, size 0x4c, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x68e7fe0, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x68e8034, size 0x4c, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x68e8030, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferInternal, addr 0x68e10e4, size 0x88, virtual false, abstract: false, final false
  inline void SetGlobalConstantBufferInternal(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferInternal_Injected, addr 0x68e116c, size 0x6c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferInternal, addr 0x68e11d8, size 0x88, virtual false, abstract: false, final false
  inline void SetGlobalConstantGraphicsBufferInternal(::UnityEngine::GraphicsBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferInternal_Injected, addr 0x68e1260, size 0x6c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalDepthBias, addr 0x68dfac0, size 0x64, virtual false, abstract: false, final false
  inline void SetGlobalDepthBias(float_t bias, float_t slopeBias);

  /// @brief Method SetGlobalDepthBias_Injected, addr 0x68dfb24, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalDepthBias_Injected(::System::IntPtr _unity_self, float_t bias, float_t slopeBias);

  /// @brief Method SetGlobalFloat, addr 0x68e7940, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x68de7f0, size 0x64, virtual false, abstract: false, final false
  inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x68dfe8c, size 0x104, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x68e7b08, size 0xe4, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x68e7bec, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(::StringW propertyName, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x68e7ad4, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(::StringW propertyName, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArrayListImpl, addr 0x68dfc64, size 0x64, virtual false, abstract: false, final false
  inline void SetGlobalFloatArrayListImpl(int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalFloatArrayListImpl_Injected, addr 0x68dfcc8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayListImpl_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalFloatArray_Injected, addr 0x68dff90, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetGlobalFloat_Injected, addr 0x68de854, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t value);

  /// @brief Method SetGlobalGraphicsBufferInternal, addr 0x68e06b0, size 0x70, virtual false, abstract: false, final false
  inline void SetGlobalGraphicsBufferInternal(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferInternal_Injected, addr 0x68e0720, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferInternal_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr value);

  /// @brief Method SetGlobalInt, addr 0x68e7974, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x68de8a8, size 0x64, virtual false, abstract: false, final false
  inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInt_Injected, addr 0x68de90c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x68e79a8, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x68de960, size 0x64, virtual false, abstract: false, final false
  inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInteger_Injected, addr 0x68de9c4, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalInteger_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t value);

  /// @brief Method SetGlobalKeyword, addr 0x68df580, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method SetGlobalKeyword_Injected, addr 0x68df5e8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalKeyword_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method SetGlobalMatrix, addr 0x68e7a84, size 0x50, virtual false, abstract: false, final false
  inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x68deb98, size 0x64, virtual false, abstract: false, final false
  inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x68e013c, size 0x104, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x68e7da0, size 0xe4, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x68e7e84, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(::StringW propertyName, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x68e7d6c, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArrayListImpl, addr 0x68dfdd4, size 0x64, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArrayListImpl(int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalMatrixArrayListImpl_Injected, addr 0x68dfe38, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayListImpl_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalMatrixArray_Injected, addr 0x68e0240, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetGlobalMatrix_Injected, addr 0x68debfc, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Matrix4x4> value);

  /// @brief Method SetGlobalTexture, addr 0x68e7eb8, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x68e7f18, size 0x58, virtual false, abstract: false, final false
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x68e7f10, size 0x8, virtual false, abstract: false, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x68e7f0c, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture_Impl, addr 0x68e0524, size 0x6c, virtual false, abstract: false, final false
  inline void SetGlobalTexture_Impl(int32_t nameID, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture_Impl_Injected, addr 0x68e0590, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalTexture_Impl_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                    ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalVector, addr 0x68e79dc, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x68dea18, size 0x6c, virtual false, abstract: false, final false
  inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x68dffe4, size 0x104, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x68e7c54, size 0xe4, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x68e7d38, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(::StringW propertyName, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x68e7c20, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArrayListImpl, addr 0x68dfd1c, size 0x64, virtual false, abstract: false, final false
  inline void SetGlobalVectorArrayListImpl(int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalVectorArrayListImpl_Injected, addr 0x68dfd80, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayListImpl_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalVectorArray_Injected, addr 0x68e00e8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetGlobalVector_Injected, addr 0x68dea84, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVector_Injected(::System::IntPtr _unity_self, int32_t nameID, ::ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetInstanceMultiplier, addr 0x68e1364, size 0x54, virtual false, abstract: false, final false
  inline void SetInstanceMultiplier(uint32_t multiplier);

  /// @brief Method SetInstanceMultiplier_Injected, addr 0x68e13b8, size 0x44, virtual false, abstract: false, final false
  static inline void SetInstanceMultiplier_Injected(::System::IntPtr _unity_self, uint32_t multiplier);

  /// @brief Method SetInvertCulling, addr 0x68d835c, size 0x54, virtual false, abstract: false, final false
  inline void SetInvertCulling(bool invertCulling);

  /// @brief Method SetInvertCulling_Injected, addr 0x68d83b0, size 0x44, virtual false, abstract: false, final false
  static inline void SetInvertCulling_Injected(::System::IntPtr _unity_self, bool invertCulling);

  /// @brief Method SetKeyword, addr 0x68df8ac, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetKeyword, addr 0x68df86c, size 0x14, virtual false, abstract: false, final false
  inline void SetKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method SetKeyword, addr 0x68df880, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetLateLatchProjectionMatrices, addr 0x68e0294, size 0xfc, virtual false, abstract: false, final false
  inline void SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> projectionMat);

  /// @brief Method SetLateLatchProjectionMatrices_Injected, addr 0x68e0390, size 0x44, virtual false, abstract: false, final false
  static inline void SetLateLatchProjectionMatrices_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> projectionMat);

  /// @brief Method SetMaterialKeyword, addr 0x68df63c, size 0xbc, virtual false, abstract: false, final false
  inline void SetMaterialKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetMaterialKeyword_Injected, addr 0x68df6f8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMaterialKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetProjectionMatrix, addr 0x68df970, size 0x54, virtual false, abstract: false, final false
  inline void SetProjectionMatrix(::UnityEngine::Matrix4x4 proj);

  /// @brief Method SetProjectionMatrix_Injected, addr 0x68df9c4, size 0x44, virtual false, abstract: false, final false
  static inline void SetProjectionMatrix_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> proj);

  /// @brief Method SetRandomWriteTarget, addr 0x68e7574, size 0x3c, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRandomWriteTarget, addr 0x68e752c, size 0x48, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::GraphicsBuffer* buffer, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget, addr 0x68e74f4, size 0x38, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRandomWriteTarget_GraphicsBuffer, addr 0x68dd610, size 0x78, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget_GraphicsBuffer(int32_t index, ::UnityEngine::GraphicsBuffer* uav, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget_GraphicsBuffer_Injected, addr 0x68dd688, size 0x5c, virtual false, abstract: false, final false
  static inline void SetRandomWriteTarget_GraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t index, ::System::IntPtr uav, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget_Texture, addr 0x68dd558, size 0x64, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget_Texture(int32_t index, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt);

  /// @brief Method SetRandomWriteTarget_Texture_Injected, addr 0x68dd5bc, size 0x54, virtual false, abstract: false, final false
  static inline void SetRandomWriteTarget_Texture_Injected(::System::IntPtr _unity_self, int32_t index, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x68e5340, size 0x4c, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x68e538c, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x68e5300, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x68e533c, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingBufferParam, addr 0x68e5390, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x68e53d0, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x68e5410, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetRayTracingBufferParam, addr 0x68e53cc, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x68e540c, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x68e544c, size 0x8, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x68e5458, size 0x54, virtual false, abstract: false, final false
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x68e54b0, size 0x54, virtual false, abstract: false, final false
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x68e5454, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x68e54ac, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingFloatParam, addr 0x68e5544, size 0x44, virtual false, abstract: false, final false
  inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, float_t val);

  /// @brief Method SetRayTracingFloatParam, addr 0x68e5588, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val);

  /// @brief Method SetRayTracingFloatParams, addr 0x68e558c, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetRayTracingFloatParams, addr 0x68e55c8, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetRayTracingIntParam, addr 0x68e55cc, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, int32_t val);

  /// @brief Method SetRayTracingIntParam, addr 0x68e5608, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val);

  /// @brief Method SetRayTracingIntParams, addr 0x68e560c, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetRayTracingIntParams, addr 0x68e5648, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetRayTracingMatrixArrayParam, addr 0x68e5778, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                            ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetRayTracingMatrixArrayParam, addr 0x68e57b4, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                            ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetRayTracingMatrixParam, addr 0x68e56f4, size 0x58, virtual false, abstract: false, final false
  inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetRayTracingMatrixParam, addr 0x68e574c, size 0x2c, virtual false, abstract: false, final false
  inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetRayTracingTextureParam, addr 0x68e5504, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRayTracingTextureParam, addr 0x68e5540, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRayTracingVectorArrayParam, addr 0x68e56b4, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetRayTracingVectorArrayParam, addr 0x68e56f0, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetRayTracingVectorParam, addr 0x68e564c, size 0x64, virtual false, abstract: false, final false
  inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetRayTracingVectorParam, addr 0x68e56b0, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetRenderTarget, addr 0x68e2cc4, size 0x364, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding);

  /// @brief Method SetRenderTarget, addr 0x68e2888, size 0x388, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x68e206c, size 0xf8, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                              ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x68e1be4, size 0x80, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth);

  /// @brief Method SetRenderTarget, addr 0x68e1d00, size 0x114, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x68e1e14, size 0x110, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method SetRenderTarget, addr 0x68e1f24, size 0x148, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                              int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x68e2164, size 0x17c, virtual false, abstract: false, final false
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                              ::UnityEngine::Rendering::RenderTargetIdentifier depth);

  /// @brief Method SetRenderTarget, addr 0x68e24e0, size 0x198, virtual false, abstract: false, final false
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                              ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x68e165c, size 0x64, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRenderTarget, addr 0x68e1808, size 0xdc, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x68e1744, size 0xc4, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction storeAction);

  /// @brief Method SetRenderTarget, addr 0x68e18e4, size 0xe8, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x68e19cc, size 0xf4, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method SetRenderTarget, addr 0x68e1ac0, size 0x124, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetColorDepthSubtarget, addr 0x68e2c10, size 0xb4, virtual false, abstract: false, final false
  inline void SetRenderTargetColorDepthSubtarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel,
                                                 ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetColorDepthSubtarget_Injected, addr 0x68e328c, size 0xa4, virtual false, abstract: false, final false
  static inline void SetRenderTargetColorDepthSubtarget_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> color,
                                                                 ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> depth, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                 ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                                 ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                                 int32_t depthSlice);

  /// @brief Method SetRenderTargetColorDepth_Internal, addr 0x68e1c64, size 0x9c, virtual false, abstract: false, final false
  inline void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                 ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetColorDepth_Internal_Injected, addr 0x68e3174, size 0x8c, virtual false, abstract: false, final false
  static inline void SetRenderTargetColorDepth_Internal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> color,
                                                                 ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> depth, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                                 ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                                 ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetMultiSubtarget, addr 0x68e2678, size 0x210, virtual false, abstract: false, final false
  inline void SetRenderTargetMultiSubtarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                                            ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                            ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLoadActions,
                                            ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStoreActions,
                                            ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel,
                                            ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetMultiSubtarget_Injected, addr 0x68e3330, size 0xa4, virtual false, abstract: false, final false
  static inline void SetRenderTargetMultiSubtarget_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colors,
                                                            ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> depth, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colorLoadActions,
                                                            ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                            ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                            int32_t depthSlice);

  /// @brief Method SetRenderTargetMulti_Internal, addr 0x68e22e0, size 0x200, virtual false, abstract: false, final false
  inline void SetRenderTargetMulti_Internal(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                                            ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                            ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLoadActions,
                                            ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorStoreActions,
                                            ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                            ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetMulti_Internal_Injected, addr 0x68e3200, size 0x8c, virtual false, abstract: false, final false
  static inline void SetRenderTargetMulti_Internal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colors,
                                                            ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> depth, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colorLoadActions,
                                                            ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                            ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetSingle_Internal, addr 0x68e16c0, size 0x84, virtual false, abstract: false, final false
  inline void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                             ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                             ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTargetSingle_Internal_Injected, addr 0x68e3100, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTargetSingle_Internal_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                             ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                             ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetShadowSamplingMode, addr 0x68e8080, size 0x38, virtual false, abstract: false, final false
  inline void SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode mode);

  /// @brief Method SetShadowSamplingMode_Impl, addr 0x68e0774, size 0x64, virtual false, abstract: false, final false
  inline void SetShadowSamplingMode_Impl(::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode mode);

  /// @brief Method SetShadowSamplingMode_Impl_Injected, addr 0x68e07d8, size 0x54, virtual false, abstract: false, final false
  static inline void SetShadowSamplingMode_Impl_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> shadowmap,
                                                         ::UnityEngine::Rendering::ShadowSamplingMode mode);

  /// @brief Method SetSinglePassStereo, addr 0x68e80b8, size 0x4, virtual false, abstract: false, final false
  inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method SetViewMatrix, addr 0x68df8d8, size 0x54, virtual false, abstract: false, final false
  inline void SetViewMatrix(::UnityEngine::Matrix4x4 view);

  /// @brief Method SetViewMatrix_Injected, addr 0x68df92c, size 0x44, virtual false, abstract: false, final false
  static inline void SetViewMatrix_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> view);

  /// @brief Method SetViewProjectionMatrices, addr 0x68dfa08, size 0x64, virtual false, abstract: false, final false
  inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj);

  /// @brief Method SetViewProjectionMatrices_Injected, addr 0x68dfa6c, size 0x54, virtual false, abstract: false, final false
  static inline void SetViewProjectionMatrices_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Matrix4x4> view, ::ByRef<::UnityEngine::Matrix4x4> proj);

  /// @brief Method SetViewport, addr 0x68dd76c, size 0x64, virtual false, abstract: false, final false
  inline void SetViewport(::UnityEngine::Rect pixelRect);

  /// @brief Method SetViewport_Injected, addr 0x68dd7d0, size 0x44, virtual false, abstract: false, final false
  static inline void SetViewport_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Rect> pixelRect);

  /// @brief Method SetWireframe, addr 0x68e1494, size 0x54, virtual false, abstract: false, final false
  inline void SetWireframe(bool enable);

  /// @brief Method SetWireframe_Injected, addr 0x68e14e8, size 0x44, virtual false, abstract: false, final false
  static inline void SetWireframe_Injected(::System::IntPtr _unity_self, bool enable);

  /// @brief Method SetupCameraProperties, addr 0x68e4818, size 0x30, virtual false, abstract: false, final false
  inline void SetupCameraProperties(::UnityEngine::Camera* camera);

  /// @brief Method SetupCameraProperties_Internal, addr 0x68e4720, size 0xb4, virtual false, abstract: false, final false
  inline void SetupCameraProperties_Internal(::UnityEngine::Camera* camera);

  /// @brief Method SetupCameraProperties_Internal_Injected, addr 0x68e47d4, size 0x44, virtual false, abstract: false, final false
  static inline void SetupCameraProperties_Internal_Injected(::System::IntPtr _unity_self, ::System::IntPtr camera);

  /// @brief Method UnmarkLateLatchMatrix, addr 0x68e048c, size 0x54, virtual false, abstract: false, final false
  inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType);

  /// @brief Method UnmarkLateLatchMatrix_Injected, addr 0x68e04e0, size 0x44, virtual false, abstract: false, final false
  static inline void UnmarkLateLatchMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType);

  /// @brief Method ValidateAgainstExecutionFlags, addr 0x68de414, size 0x64, virtual false, abstract: false, final false
  inline bool ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);

  /// @brief Method ValidateAgainstExecutionFlags_Injected, addr 0x68dfc10, size 0x54, virtual false, abstract: false, final false
  static inline bool ValidateAgainstExecutionFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags,
                                                            ::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);

  /// @brief Method WaitOnAsyncGraphicsFence, addr 0x68e4a40, size 0x8, virtual false, abstract: false, final false
  inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence fence);

  /// @brief Method WaitOnAsyncGraphicsFence, addr 0x68e4a48, size 0x10, virtual false, abstract: false, final false
  inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence fence, ::UnityEngine::Rendering::SynchronisationStage stage);

  /// @brief Method WaitOnAsyncGraphicsFence, addr 0x68e4a58, size 0xe4, virtual false, abstract: false, final false
  inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence fence, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method WaitOnGPUFence_Internal, addr 0x68d856c, size 0x64, virtual false, abstract: false, final false
  inline void WaitOnGPUFence_Internal(::System::IntPtr fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method WaitOnGPUFence_Internal_Injected, addr 0x68d85d0, size 0x54, virtual false, abstract: false, final false
  static inline void WaitOnGPUFence_Internal_Injected(::System::IntPtr _unity_self, ::System::IntPtr fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x68e49bc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_ThrowOnSetRenderTarget();

  /// @brief Method get_name, addr 0x68dba20, size 0xf8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_name_Injected, addr 0x68dbb18, size 0x44, virtual false, abstract: false, final false
  static inline void get_name_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method get_sizeInBytes, addr 0x68dbcec, size 0x4c, virtual false, abstract: false, final false
  inline int32_t get_sizeInBytes();

  /// @brief Method get_sizeInBytes_Injected, addr 0x68dbd38, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sizeInBytes_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_ThrowOnSetRenderTarget(bool value);

  /// @brief Method set_name, addr 0x68dbb5c, size 0x14c, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_name_Injected, addr 0x68dbca8, size 0x44, virtual false, abstract: false, final false
  static inline void set_name_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBuffer(CommandBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBuffer(CommandBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10751 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CommandBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBuffer, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CommandBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
NEED_NO_BOX(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller*, "UnityEngine.Rendering", "CommandBuffer/BindingsMarshaller");
