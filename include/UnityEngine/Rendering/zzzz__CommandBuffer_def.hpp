#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
struct ShadingRateCombinerStage;
}
namespace UnityEngine::Rendering {
struct ShadingRateCombiner;
}
namespace UnityEngine::Rendering {
struct ShadingRateFragmentSize;
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
class RenderTexture;
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
MARK_REF_T(::UnityEngine::Rendering::CommandBuffer*);
MARK_REF_T(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller*, "UnityEngine.Rendering", "CommandBuffer/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBuffer/BindingsMarshaller
class CORDL_TYPE CommandBuffer_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6f79ff8, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::CommandBuffer* commandBuffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBuffer_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBuffer_BindingsMarshaller(CommandBuffer_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBuffer_BindingsMarshaller(CommandBuffer_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10381 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// [NativeType("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
// [NativeHeader("Runtime/Export/Graphics/RenderingCommandBuffer.bindings.h")]
// [UsedByNativeCode]
// [NativeHeader("Runtime/Shaders/RayTracing/RayTracingShader.h")]
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

  /// @brief Method BeginRenderPass, addr 0x6f75e14, size 0x10c, virtual false, abstract: false, final false
  inline void BeginRenderPass(int32_t width, int32_t height, int32_t volumeDepth, int32_t samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments,
                              int32_t depthAttachmentIndex, int32_t shadingRateImageAttachmentIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubPassDescriptor> subPasses,
                              ::System::ReadOnlySpan_1<uint8_t> debugNameUtf8);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::BeginRenderPass", HasExplicitThis = true)]
  /// @brief Method BeginRenderPass_Internal, addr 0x6f75bdc, size 0x19c, virtual false, abstract: false, final false
  inline void BeginRenderPass_Internal(int32_t width, int32_t height, int32_t volumeDepth, int32_t samples, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::AttachmentDescriptor> attachments,
                                       int32_t depthAttachmentIndex, int32_t shadingRateImageAttachmentIndex, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubPassDescriptor> subPasses,
                                       ::System::ReadOnlySpan_1<uint8_t> debugNameUtf8);

  /// @brief Method BeginRenderPass_Internal_Injected, addr 0x6f75d78, size 0x9c, virtual false, abstract: false, final false
  static inline void BeginRenderPass_Internal_Injected(::System::IntPtr _unity_self, int32_t width, int32_t height, int32_t volumeDepth, int32_t samples,
                                                       ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> attachments, int32_t depthAttachmentIndex, int32_t shadingRateImageAttachmentIndex,
                                                       ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> subPasses, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> debugNameUtf8);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::BeginSample", HasExplicitThis = true)]
  /// @brief Method BeginSample, addr 0x6f720e4, size 0x154, virtual false, abstract: false, final false
  inline void BeginSample(::StringW name);

  /// @brief Method BeginSample, addr 0x6f72414, size 0x4, virtual false, abstract: false, final false
  inline void BeginSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::BeginSample_CustomSampler", HasExplicitThis = true)]
  /// @brief Method BeginSample_CustomSampler, addr 0x6f72418, size 0xbc, virtual false, abstract: false, final false
  inline void BeginSample_CustomSampler(/* [NotNull] */ ::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method BeginSample_CustomSampler_Injected, addr 0x6f72594, size 0x44, virtual false, abstract: false, final false
  static inline void BeginSample_CustomSampler_Injected(::System::IntPtr _unity_self, ::System::IntPtr sampler);

  /// @brief Method BeginSample_Injected, addr 0x6f72238, size 0x44, virtual false, abstract: false, final false
  static inline void BeginSample_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Blit, addr 0x6f795d0, size 0x80, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method Blit, addr 0x6f79650, size 0x90, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat, int32_t pass);

  /// @brief Method Blit, addr 0x6f794cc, size 0x80, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method Blit, addr 0x6f7954c, size 0x84, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Blit_Identifier", HasExplicitThis = true)]
  /// @brief Method Blit_Identifier, addr 0x6f6f430, size 0x100, virtual false, abstract: false, final false
  inline void Blit_Identifier(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat,
                              int32_t pass, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Identifier_Injected, addr 0x6f6f530, size 0x9c, virtual false, abstract: false, final false
  static inline void Blit_Identifier_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> source,
                                              ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::System::IntPtr mat, int32_t pass, ::by_ref<::UnityEngine::Vector2 const> scale,
                                              ::by_ref<::UnityEngine::Vector2 const> offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Blit_Texture", HasExplicitThis = true)]
  /// @brief Method Blit_Texture, addr 0x6f6f264, size 0x130, virtual false, abstract: false, final false
  inline void Blit_Texture(::UnityEngine::Texture* source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat, int32_t pass, ::UnityEngine::Vector2 scale,
                           ::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Texture_Injected, addr 0x6f6f394, size 0x9c, virtual false, abstract: false, final false
  static inline void Blit_Texture_Injected(::System::IntPtr _unity_self, ::System::IntPtr source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::System::IntPtr mat, int32_t pass,
                                           ::by_ref<::UnityEngine::Vector2 const> scale, ::by_ref<::UnityEngine::Vector2 const> offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x6f76dfc, size 0x70, virtual false, abstract: false, final false
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x6f76ef4, size 0x4, virtual false, abstract: false, final false
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure,
                                                   ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings buildSettings);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x6f76e6c, size 0x88, virtual false, abstract: false, final false
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure, ::UnityEngine::Vector3 relativeOrigin);

  /// @brief Method CheckThrowOnSetRenderTarget, addr 0x6f72e38, size 0x98, virtual false, abstract: false, final false
  static inline void CheckThrowOnSetRenderTarget();

  /// [NativeMethod("ClearCommands")]
  /// @brief Method Clear, addr 0x6f6d34c, size 0x50, virtual false, abstract: false, final false
  inline void Clear();

  /// [FreeFunction("RenderingCommandBuffer_Bindings::ClearRandomWriteTargets", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method ClearRandomWriteTargets, addr 0x6f6ee50, size 0x50, virtual false, abstract: false, final false
  inline void ClearRandomWriteTargets();

  /// @brief Method ClearRandomWriteTargets_Injected, addr 0x6f6eea0, size 0x3c, virtual false, abstract: false, final false
  static inline void ClearRandomWriteTargets_Injected(::System::IntPtr _unity_self);

  /// @brief Method ClearRenderTarget, addr 0x6f6fb04, size 0xc, virtual false, abstract: false, final false
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method ClearRenderTarget, addr 0x6f6fba8, size 0x8, virtual false, abstract: false, final false
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method ClearRenderTarget, addr 0x6f6fb10, size 0x98, virtual false, abstract: false, final false
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTarget, addr 0x6f6fc40, size 0x78, virtual false, abstract: false, final false
  inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTarget, addr 0x6f6fcb8, size 0x164, virtual false, abstract: false, final false
  inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags, ::ArrayW<::UnityEngine::Color> backgroundColors, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTargetMulti_Internal, addr 0x6f6fe1c, size 0x118, virtual false, abstract: false, final false
  inline void ClearRenderTargetMulti_Internal(::UnityEngine::Rendering::RTClearFlags clearFlags, ::ArrayW<::UnityEngine::Color> colors, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTargetMulti_Internal_Injected, addr 0x6f74924, size 0x6c, virtual false, abstract: false, final false
  static inline void ClearRenderTargetMulti_Internal_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::RTClearFlags clearFlags,
                                                              ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTargetSingle_Internal, addr 0x6f6fbb0, size 0x90, virtual false, abstract: false, final false
  inline void ClearRenderTargetSingle_Internal(::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color color, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTargetSingle_Internal_Injected, addr 0x6f748b8, size 0x6c, virtual false, abstract: false, final false
  static inline void ClearRenderTargetSingle_Internal_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::RTClearFlags clearFlags, ::by_ref<::UnityEngine::Color const> color,
                                                               float_t depth, uint32_t stencil);

  /// @brief Method Clear_Injected, addr 0x6f6d39c, size 0x3c, virtual false, abstract: false, final false
  static inline void Clear_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::ConfigureFoveatedRendering", HasExplicitThis = true)]
  /// @brief Method ConfigureFoveatedRendering, addr 0x6f72d9c, size 0x58, virtual false, abstract: false, final false
  inline void ConfigureFoveatedRendering(::System::IntPtr platformData);

  /// @brief Method ConfigureFoveatedRendering_Injected, addr 0x6f72df4, size 0x44, virtual false, abstract: false, final false
  static inline void ConfigureFoveatedRendering_Injected(::System::IntPtr _unity_self, ::System::IntPtr platformData);

  /// @brief Method CopyCounterValue, addr 0x6f79384, size 0x4, virtual false, abstract: false, final false
  inline void CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x6f7938c, size 0x4, virtual false, abstract: false, final false
  inline void CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x6f79388, size 0x4, virtual false, abstract: false, final false
  inline void CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x6f79390, size 0x4, virtual false, abstract: false, final false
  inline void CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// [NativeMethod("AddCopyCounterValue")]
  /// @brief Method CopyCounterValueCC, addr 0x6f6cc54, size 0x88, virtual false, abstract: false, final false
  inline void CopyCounterValueCC(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueCC_Injected, addr 0x6f6ccdc, size 0x5c, virtual false, abstract: false, final false
  static inline void CopyCounterValueCC_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::IntPtr dst, uint32_t dstOffsetBytes);

  /// [NativeMethod("AddCopyCounterValue")]
  /// @brief Method CopyCounterValueCG, addr 0x6f6ce1c, size 0x88, virtual false, abstract: false, final false
  inline void CopyCounterValueCG(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueCG_Injected, addr 0x6f6cea4, size 0x5c, virtual false, abstract: false, final false
  static inline void CopyCounterValueCG_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::IntPtr dst, uint32_t dstOffsetBytes);

  /// [NativeMethod("AddCopyCounterValue")]
  /// @brief Method CopyCounterValueGC, addr 0x6f6cd38, size 0x88, virtual false, abstract: false, final false
  inline void CopyCounterValueGC(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueGC_Injected, addr 0x6f6cdc0, size 0x5c, virtual false, abstract: false, final false
  static inline void CopyCounterValueGC_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::IntPtr dst, uint32_t dstOffsetBytes);

  /// [NativeMethod("AddCopyCounterValue")]
  /// @brief Method CopyCounterValueGG, addr 0x6f6cf00, size 0x88, virtual false, abstract: false, final false
  inline void CopyCounterValueGG(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValueGG_Injected, addr 0x6f6cf88, size 0x5c, virtual false, abstract: false, final false
  static inline void CopyCounterValueGG_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::IntPtr dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyTexture, addr 0x6f79394, size 0x54, virtual false, abstract: false, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, ::UnityEngine::Rendering::RenderTargetIdentifier dst);

  /// @brief Method CopyTexture, addr 0x6f793e8, size 0x50, virtual false, abstract: false, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement);

  /// @brief Method CopyTexture, addr 0x6f79438, size 0x4c, virtual false, abstract: false, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement,
                          int32_t dstMip);

  /// @brief Method CopyTexture, addr 0x6f79484, size 0x48, virtual false, abstract: false, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                          ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::CopyTexture_Internal", HasExplicitThis = true)]
  /// @brief Method CopyTexture_Internal, addr 0x6f6f0c0, size 0xdc, virtual false, abstract: false, final false
  inline void CopyTexture_Internal(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                   ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY, int32_t mode);

  /// @brief Method CopyTexture_Internal_Injected, addr 0x6f6f19c, size 0xc8, virtual false, abstract: false, final false
  static inline void CopyTexture_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> src, int32_t srcElement, int32_t srcMip, int32_t srcX,
                                                   int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> dst, int32_t dstElement,
                                                   int32_t dstMip, int32_t dstX, int32_t dstY, int32_t mode);

  /// @brief Method CreateAsyncGraphicsFence, addr 0x6f76608, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GraphicsFence CreateAsyncGraphicsFence();

  /// [FreeFunction("RenderingCommandBuffer_Bindings::CreateGPUFence_Internal", HasExplicitThis = true)]
  /// @brief Method CreateGPUFence_Internal, addr 0x6f68f24, size 0x68, virtual false, abstract: false, final false
  inline ::System::IntPtr CreateGPUFence_Internal(::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method CreateGPUFence_Internal_Injected, addr 0x6f68f8c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::IntPtr CreateGPUFence_Internal_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::GraphicsFenceType fenceType,
                                                                  ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method CreateGraphicsFence, addr 0x6f76614, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::GraphicsFence CreateGraphicsFence(::UnityEngine::Rendering::GraphicsFenceType fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::DisableComputeKeyword", HasExplicitThis = true)]
  /// @brief Method DisableComputeKeyword, addr 0x6f70b94, size 0xb4, virtual false, abstract: false, final false
  inline void DisableComputeKeyword(::UnityEngine::ComputeShader* computeShader, ::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableComputeKeyword_Injected, addr 0x6f70c48, size 0x54, virtual false, abstract: false, final false
  static inline void DisableComputeKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
  /// @brief Method DisableGlobalKeyword, addr 0x6f709ec, size 0x5c, virtual false, abstract: false, final false
  inline void DisableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method DisableGlobalKeyword_Injected, addr 0x6f70a48, size 0x44, virtual false, abstract: false, final false
  static inline void DisableGlobalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword);

  /// @brief Method DisableKeyword, addr 0x6f70cd0, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method DisableKeyword, addr 0x6f70c9c, size 0x8, virtual false, abstract: false, final false
  inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword);

  /// @brief Method DisableKeyword, addr 0x6f70ca4, size 0x2c, virtual false, abstract: false, final false
  inline void DisableKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::DisableMaterialKeyword", HasExplicitThis = true)]
  /// @brief Method DisableMaterialKeyword, addr 0x6f70a8c, size 0xb4, virtual false, abstract: false, final false
  inline void DisableMaterialKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method DisableMaterialKeyword_Injected, addr 0x6f70b40, size 0x54, virtual false, abstract: false, final false
  static inline void DisableMaterialKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr material, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::DisableScissorRect", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method DisableScissorRect, addr 0x6f6f034, size 0x50, virtual false, abstract: false, final false
  inline void DisableScissorRect();

  /// @brief Method DisableScissorRect_Injected, addr 0x6f6f084, size 0x3c, virtual false, abstract: false, final false
  static inline void DisableScissorRect_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
  /// @brief Method DisableShaderKeyword, addr 0x6f70854, size 0x154, virtual false, abstract: false, final false
  inline void DisableShaderKeyword(::StringW keyword);

  /// @brief Method DisableShaderKeyword_Injected, addr 0x6f709a8, size 0x44, virtual false, abstract: false, final false
  static inline void DisableShaderKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method DispatchCompute, addr 0x6f76c34, size 0xe4, virtual false, abstract: false, final false
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method DispatchCompute, addr 0x6f76d18, size 0xe4, virtual false, abstract: false, final false
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method DispatchCompute, addr 0x6f76c30, size 0x4, virtual false, abstract: false, final false
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method DispatchRays, addr 0x6f773b4, size 0x4, virtual false, abstract: false, final false
  inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset,
                           ::UnityEngine::Camera* camera);

  /// @brief Method DispatchRays, addr 0x6f773b0, size 0x4, virtual false, abstract: false, final false
  inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, uint32_t width, uint32_t height, uint32_t depth, ::UnityEngine::Camera* camera);

  /// @brief Method Dispose, addr 0x6f7655c, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6f76544, size 0x18, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMesh, addr 0x6f777c0, size 0x38, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMesh, addr 0x6f7778c, size 0x34, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMesh, addr 0x6f7775c, size 0x30, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method DrawMesh, addr 0x6f7750c, size 0x250, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, /* [DefaultValue("0")] */ int32_t submeshIndex,
                       /* [DefaultValue("-1")] */ int32_t shaderPass, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstanced, addr 0x6f78a64, size 0x28, virtual false, abstract: false, final false
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::ArrayW<::UnityEngine::Matrix4x4> matrices);

  /// @brief Method DrawMeshInstanced, addr 0x6f78a48, size 0x1c, virtual false, abstract: false, final false
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::ArrayW<::UnityEngine::Matrix4x4> matrices, int32_t count);

  /// @brief Method DrawMeshInstanced, addr 0x6f786b4, size 0x394, virtual false, abstract: false, final false
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::ArrayW<::UnityEngine::Matrix4x4> matrices, int32_t count,
                                ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x6f78f6c, size 0x20, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x6f78f50, size 0x1c, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                        int32_t argsOffset);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x6f78cd8, size 0x278, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                        int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x6f79220, size 0x20, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x6f79204, size 0x1c, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs,
                                        int32_t argsOffset);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x6f78f8c, size 0x278, virtual false, abstract: false, final false
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs,
                                        int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedProcedural, addr 0x6f78a8c, size 0x24c, virtual false, abstract: false, final false
  inline void DrawMeshInstancedProcedural(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, int32_t count,
                                          ::UnityEngine::MaterialPropertyBlock* properties);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMultipleMeshes, addr 0x6f777f8, size 0xa8, virtual false, abstract: false, final false
  inline void DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4> matrices, ::ArrayW<::UnityEngine::Mesh*> meshes, ::ArrayW<int32_t> subsetIndices, int32_t count, ::UnityEngine::Material* material,
                                 int32_t shaderPass, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawOcclusionMesh, addr 0x6f79240, size 0x4, virtual false, abstract: false, final false
  inline void DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport);

  /// @brief Method DrawProcedural, addr 0x6f77de8, size 0x34, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount);

  /// @brief Method DrawProcedural, addr 0x6f77db8, size 0x30, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount, int32_t instanceCount);

  /// @brief Method DrawProcedural, addr 0x6f77c64, size 0x154, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount, int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// [ExcludeFromDocs]
  /// @brief Method DrawProcedural, addr 0x6f77c30, size 0x34, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount);

  /// [ExcludeFromDocs]
  /// @brief Method DrawProcedural, addr 0x6f77c00, size 0x30, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);

  /// @brief Method DrawProcedural, addr 0x6f77ac8, size 0x138, virtual false, abstract: false, final false
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount,
                             /* [DefaultValue("1")] */ int32_t instanceCount, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x6f78234, size 0x34, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x6f78204, size 0x30, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x6f78034, size 0x1d0, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x6f78680, size 0x34, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x6f78650, size 0x30, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x6f78480, size 0x1d0, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x6f78000, size 0x34, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x6f77fd0, size 0x30, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x6f77e1c, size 0x1b4, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x6f7844c, size 0x34, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x6f7841c, size 0x30, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x6f78268, size 0x1b4, virtual false, abstract: false, final false
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// [ExcludeFromDocs]
  /// @brief Method DrawRenderer, addr 0x6f77a90, size 0xc, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material);

  /// [ExcludeFromDocs]
  /// @brief Method DrawRenderer, addr 0x6f77a88, size 0x8, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// @brief Method DrawRenderer, addr 0x6f778a0, size 0x1e8, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, /* [DefaultValue("0")] */ int32_t submeshIndex, /* [DefaultValue("-1")] */ int32_t shaderPass);

  /// @brief Method DrawRendererList, addr 0x6f77a9c, size 0x2c, virtual false, abstract: false, final false
  inline void DrawRendererList(::UnityEngine::Rendering::RendererList rendererList);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::EnableComputeKeyword", HasExplicitThis = true)]
  /// @brief Method EnableComputeKeyword, addr 0x6f706ec, size 0xb4, virtual false, abstract: false, final false
  inline void EnableComputeKeyword(::UnityEngine::ComputeShader* computeShader, ::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableComputeKeyword_Injected, addr 0x6f707a0, size 0x54, virtual false, abstract: false, final false
  static inline void EnableComputeKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
  /// @brief Method EnableGlobalKeyword, addr 0x6f70544, size 0x5c, virtual false, abstract: false, final false
  inline void EnableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword keyword);

  /// @brief Method EnableGlobalKeyword_Injected, addr 0x6f705a0, size 0x44, virtual false, abstract: false, final false
  static inline void EnableGlobalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword);

  /// @brief Method EnableKeyword, addr 0x6f70828, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method EnableKeyword, addr 0x6f707f4, size 0x8, virtual false, abstract: false, final false
  inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword);

  /// @brief Method EnableKeyword, addr 0x6f707fc, size 0x2c, virtual false, abstract: false, final false
  inline void EnableKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::EnableMaterialKeyword", HasExplicitThis = true)]
  /// @brief Method EnableMaterialKeyword, addr 0x6f705e4, size 0xb4, virtual false, abstract: false, final false
  inline void EnableMaterialKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword);

  /// @brief Method EnableMaterialKeyword_Injected, addr 0x6f70698, size 0x54, virtual false, abstract: false, final false
  static inline void EnableMaterialKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr material, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::EnableScissorRect", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method EnableScissorRect, addr 0x6f6ef88, size 0x68, virtual false, abstract: false, final false
  inline void EnableScissorRect(::UnityEngine::Rect scissor);

  /// @brief Method EnableScissorRect_Injected, addr 0x6f6eff0, size 0x44, virtual false, abstract: false, final false
  static inline void EnableScissorRect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect const> scissor);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
  /// @brief Method EnableShaderKeyword, addr 0x6f703ac, size 0x154, virtual false, abstract: false, final false
  inline void EnableShaderKeyword(::StringW keyword);

  /// @brief Method EnableShaderKeyword_Injected, addr 0x6f70500, size 0x44, virtual false, abstract: false, final false
  static inline void EnableShaderKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword);

  /// @brief Method EndRenderPass, addr 0x6f76058, size 0x20, virtual false, abstract: false, final false
  inline void EndRenderPass();

  /// [FreeFunction("RenderingCommandBuffer_Bindings::EndRenderPass", HasExplicitThis = true)]
  /// @brief Method EndRenderPass_Internal, addr 0x6f75fcc, size 0x50, virtual false, abstract: false, final false
  inline void EndRenderPass_Internal();

  /// @brief Method EndRenderPass_Internal_Injected, addr 0x6f7601c, size 0x3c, virtual false, abstract: false, final false
  static inline void EndRenderPass_Internal_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::EndSample", HasExplicitThis = true)]
  /// @brief Method EndSample, addr 0x6f7227c, size 0x154, virtual false, abstract: false, final false
  inline void EndSample(::StringW name);

  /// @brief Method EndSample, addr 0x6f724d4, size 0x4, virtual false, abstract: false, final false
  inline void EndSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::EndSample_CustomSampler", HasExplicitThis = true)]
  /// @brief Method EndSample_CustomSampler, addr 0x6f724d8, size 0xbc, virtual false, abstract: false, final false
  inline void EndSample_CustomSampler(/* [NotNull] */ ::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method EndSample_CustomSampler_Injected, addr 0x6f725d8, size 0x44, virtual false, abstract: false, final false
  static inline void EndSample_CustomSampler_Injected(::System::IntPtr _unity_self, ::System::IntPtr sampler);

  /// @brief Method EndSample_Injected, addr 0x6f723d0, size 0x44, virtual false, abstract: false, final false
  static inline void EndSample_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name);

  /// @brief Method Finalize, addr 0x6f764f8, size 0x4c, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GenerateMips, addr 0x6f77404, size 0x108, virtual false, abstract: false, final false
  inline void GenerateMips(::UnityEngine::RenderTexture* rt);

  /// @brief Method GenerateMips, addr 0x6f773b8, size 0x4c, virtual false, abstract: false, final false
  inline void GenerateMips(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method GetTemporaryRT, addr 0x6f6fa34, size 0x34, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter);

  /// @brief Method GetTemporaryRT, addr 0x6f6f938, size 0x30, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method GetTemporaryRT, addr 0x6f6f90c, size 0x2c, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite);

  /// @brief Method GetTemporaryRT, addr 0x6f6f8e0, size 0x2c, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing);

  /// @brief Method GetTemporaryRT, addr 0x6f6f8b0, size 0x30, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, bool enableRandomWrite);

  /// @brief Method GetTemporaryRT, addr 0x6f6f87c, size 0x34, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, bool enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode);

  /// @brief Method GetTemporaryRT, addr 0x6f6f770, size 0x10c, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format,
                             ::UnityEngine::RenderTextureReadWrite readWrite, int32_t antiAliasing, bool enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode,
                             bool useDynamicScale);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::GetTemporaryRT", HasExplicitThis = true)]
  /// @brief Method GetTemporaryRT, addr 0x6f6f5cc, size 0xdc, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat,
                             ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t antiAliasing, bool enableRandomWrite,
                             ::UnityEngine::RenderTextureMemoryless memorylessMode, bool useDynamicScale, ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::GetTemporaryRTWithDescriptor", HasExplicitThis = true)]
  /// @brief Method GetTemporaryRTWithDescriptor, addr 0x6f6f968, size 0x70, virtual false, abstract: false, final false
  inline void GetTemporaryRTWithDescriptor(int32_t nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter);

  /// @brief Method GetTemporaryRTWithDescriptor_Injected, addr 0x6f6f9d8, size 0x5c, virtual false, abstract: false, final false
  static inline void GetTemporaryRTWithDescriptor_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::RenderTextureDescriptor const> desc, ::UnityEngine::FilterMode filter);

  /// @brief Method GetTemporaryRT_Injected, addr 0x6f6f6a8, size 0xc8, virtual false, abstract: false, final false
  static inline void GetTemporaryRT_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t width, int32_t height, ::UnityEngine::FilterMode filter,
                                             ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                             int32_t antiAliasing, bool enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode, bool useDynamicScale,
                                             ::UnityEngine::Rendering::ShadowSamplingMode shadowSamplingMode);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::IncrementUpdateCount", HasExplicitThis = true)]
  /// @brief Method IncrementUpdateCount, addr 0x6f72b2c, size 0x58, virtual false, abstract: false, final false
  inline void IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method IncrementUpdateCount_Injected, addr 0x6f72b84, size 0x44, virtual false, abstract: false, final false
  static inline void IncrementUpdateCount_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> dest);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::InitBuffer")]
  /// @brief Method InitBuffer, addr 0x6f68efc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::IntPtr InitBuffer();

  /// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
  /// @brief Method InternalSetComputeBufferCounterValue, addr 0x6f7510c, size 0xc4, virtual false, abstract: false, final false
  inline void InternalSetComputeBufferCounterValue(/* [NotNull] */ ::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue);

  /// @brief Method InternalSetComputeBufferCounterValue_Injected, addr 0x6f753cc, size 0x54, virtual false, abstract: false, final false
  static inline void InternalSetComputeBufferCounterValue_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, uint32_t counterValue);

  /// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method InternalSetComputeBufferData, addr 0x6f74dd0, size 0xf4, virtual false, abstract: false, final false
  inline void InternalSetComputeBufferData(/* [NotNull] */ ::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex,
                                           int32_t count, int32_t elemSize);

  /// @brief Method InternalSetComputeBufferData_Injected, addr 0x6f75348, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetComputeBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, ::System::Array* data, int32_t managedBufferStartIndex,
                                                           int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);

  /// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method InternalSetComputeBufferNativeData, addr 0x6f751d0, size 0xf4, virtual false, abstract: false, final false
  inline void InternalSetComputeBufferNativeData(/* [NotNull] */ ::UnityEngine::ComputeBuffer* buffer, ::System::IntPtr data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex,
                                                 int32_t count, int32_t elemSize);

  /// @brief Method InternalSetComputeBufferNativeData_Injected, addr 0x6f752c4, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetComputeBufferNativeData_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, ::System::IntPtr data, int32_t nativeBufferStartIndex,
                                                                 int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);

  /// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
  /// @brief Method InternalSetGraphicsBufferCounterValue, addr 0x6f758c8, size 0xc4, virtual false, abstract: false, final false
  inline void InternalSetGraphicsBufferCounterValue(/* [NotNull] */ ::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue);

  /// @brief Method InternalSetGraphicsBufferCounterValue_Injected, addr 0x6f75b88, size 0x54, virtual false, abstract: false, final false
  static inline void InternalSetGraphicsBufferCounterValue_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, uint32_t counterValue);

  /// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method InternalSetGraphicsBufferData, addr 0x6f7558c, size 0xf4, virtual false, abstract: false, final false
  inline void InternalSetGraphicsBufferData(/* [NotNull] */ ::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex,
                                            int32_t count, int32_t elemSize);

  /// @brief Method InternalSetGraphicsBufferData_Injected, addr 0x6f75b04, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetGraphicsBufferData_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, ::System::Array* data, int32_t managedBufferStartIndex,
                                                            int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);

  /// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method InternalSetGraphicsBufferNativeData, addr 0x6f7598c, size 0xf4, virtual false, abstract: false, final false
  inline void InternalSetGraphicsBufferNativeData(/* [NotNull] */ ::UnityEngine::GraphicsBuffer* buffer, ::System::IntPtr data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex,
                                                  int32_t count, int32_t elemSize);

  /// @brief Method InternalSetGraphicsBufferNativeData_Injected, addr 0x6f75a80, size 0x84, virtual false, abstract: false, final false
  static inline void InternalSetGraphicsBufferNativeData_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, ::System::IntPtr data, int32_t nativeBufferStartIndex,
                                                                  int32_t graphicsBufferStartIndex, int32_t count, int32_t elemSize);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_BuildRayTracingAccelerationStructure", HasExplicitThis = true)]
  /// @brief Method Internal_BuildRayTracingAccelerationStructure, addr 0x6f6bfe0, size 0xd0, virtual false, abstract: false, final false
  inline void Internal_BuildRayTracingAccelerationStructure(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure,
                                                            ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings buildSettings);

  /// @brief Method Internal_BuildRayTracingAccelerationStructure_Injected, addr 0x6f6c0b0, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_BuildRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, ::System::IntPtr accelerationStructure,
                                                                            ::by_ref<::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings const> buildSettings);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchCompute", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method Internal_DispatchCompute, addr 0x6f6a758, size 0x100, virtual false, abstract: false, final false
  inline void Internal_DispatchCompute(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method Internal_DispatchComputeIndirect, addr 0x6f6a8cc, size 0x100, virtual false, abstract: false, final false
  inline void Internal_DispatchComputeIndirect(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, uint32_t argsOffset);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method Internal_DispatchComputeIndirectGraphicsBuffer, addr 0x6f6aa38, size 0x100, virtual false, abstract: false, final false
  inline void Internal_DispatchComputeIndirectGraphicsBuffer(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer,
                                                             uint32_t argsOffset);

  /// @brief Method Internal_DispatchComputeIndirectGraphicsBuffer_Injected, addr 0x6f6ab38, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_DispatchComputeIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, ::System::IntPtr indirectBuffer,
                                                                             uint32_t argsOffset);

  /// @brief Method Internal_DispatchComputeIndirect_Injected, addr 0x6f6a9cc, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_DispatchComputeIndirect_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, ::System::IntPtr indirectBuffer, uint32_t argsOffset);

  /// @brief Method Internal_DispatchCompute_Injected, addr 0x6f6a858, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_DispatchCompute_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY,
                                                       int32_t threadGroupsZ);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRays", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method Internal_DispatchRays, addr 0x6f6c644, size 0x220, virtual false, abstract: false, final false
  inline void Internal_DispatchRays(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenShaderName, uint32_t width, uint32_t height, uint32_t depth,
                                    ::UnityEngine::Camera* camera);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRaysIndirect", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method Internal_DispatchRaysIndirect, addr 0x6f6c8e8, size 0x25c, virtual false, abstract: false, final false
  inline void Internal_DispatchRaysIndirect(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenShaderName,
                                            /* [NotNull] */ ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset, ::UnityEngine::Camera* camera);

  /// @brief Method Internal_DispatchRaysIndirect_Injected, addr 0x6f6cb44, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_DispatchRaysIndirect_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> rayGenShaderName,
                                                            ::System::IntPtr argsBuffer, uint32_t argsOffset, ::System::IntPtr camera);

  /// @brief Method Internal_DispatchRays_Injected, addr 0x6f6c864, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_DispatchRays_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> rayGenShaderName,
                                                    uint32_t width, uint32_t height, uint32_t depth, ::System::IntPtr camera);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMesh", HasExplicitThis = true)]
  /// @brief Method Internal_DrawMesh, addr 0x6f6d3d8, size 0x140, virtual false, abstract: false, final false
  inline void Internal_DrawMesh(/* [NotNull] */ ::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                                ::UnityEngine::MaterialPropertyBlock* properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstanced", HasExplicitThis = true)]
  /// @brief Method Internal_DrawMeshInstanced, addr 0x6f6e3f0, size 0x1a0, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::ArrayW<::UnityEngine::Matrix4x4> matrices,
                                         int32_t count, ::UnityEngine::MaterialPropertyBlock* properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DrawMeshInstancedIndirect, addr 0x6f6e7bc, size 0x134, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                                 int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DrawMeshInstancedIndirectGraphicsBuffer, addr 0x6f6e97c, size 0x134, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstancedIndirectGraphicsBuffer(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                                               ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected, addr 0x6f6eab0, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, int32_t shaderPass,
                                                                               ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawMeshInstancedIndirect_Injected, addr 0x6f6e8f0, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedIndirect_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, int32_t shaderPass,
                                                                 ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedProcedural", HasExplicitThis = true)]
  /// @brief Method Internal_DrawMeshInstancedProcedural, addr 0x6f6e61c, size 0x11c, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstancedProcedural(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, int32_t count,
                                                   ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstancedProcedural_Injected, addr 0x6f6e738, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedProcedural_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, int32_t shaderPass,
                                                                   int32_t count, ::System::IntPtr properties);

  /// @brief Method Internal_DrawMeshInstanced_Injected, addr 0x6f6e590, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstanced_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, int32_t shaderPass,
                                                         ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> matrices, int32_t count, ::System::IntPtr properties);

  /// @brief Method Internal_DrawMesh_Injected, addr 0x6f6d518, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_DrawMesh_Injected(::System::IntPtr _unity_self, ::System::IntPtr mesh, ::by_ref<::UnityEngine::Matrix4x4 const> matrix, ::System::IntPtr material, int32_t submeshIndex,
                                                int32_t shaderPass, ::System::IntPtr properties);

  /// [NativeMethod("AddDrawMultipleMeshes")]
  /// @brief Method Internal_DrawMultipleMeshes, addr 0x6f6d59c, size 0x1d8, virtual false, abstract: false, final false
  inline void Internal_DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4> matrices, ::ArrayW<::UnityEngine::Mesh*> meshes, ::ArrayW<int32_t> subsetIndices, int32_t count,
                                          ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMultipleMeshes_Injected, addr 0x6f6d774, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMultipleMeshes_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> matrices, ::ArrayW<::UnityEngine::Mesh*> meshes,
                                                          ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> subsetIndices, int32_t count, ::System::IntPtr material, int32_t shaderPass,
                                                          ::System::IntPtr properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawOcclusionMesh", HasExplicitThis = true)]
  /// @brief Method Internal_DrawOcclusionMesh, addr 0x6f6eb3c, size 0x64, virtual false, abstract: false, final false
  inline void Internal_DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport);

  /// @brief Method Internal_DrawOcclusionMesh_Injected, addr 0x6f6eba0, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_DrawOcclusionMesh_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::RectInt const> normalizedCamViewport);

  /// [NativeMethod("AddDrawProcedural")]
  /// @brief Method Internal_DrawProcedural, addr 0x6f6da28, size 0xfc, virtual false, abstract: false, final false
  inline void Internal_DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount,
                                      int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// [NativeMethod("AddDrawProceduralIndexed")]
  /// @brief Method Internal_DrawProceduralIndexed, addr 0x6f6dbb0, size 0x114, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndexed(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                             ::UnityEngine::MeshTopology topology, int32_t indexCount, int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DrawProceduralIndexedIndirect, addr 0x6f6def0, size 0x11c, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndexedIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset,
                                                     ::UnityEngine::MaterialPropertyBlock* properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DrawProceduralIndexedIndirectGraphicsBuffer, addr 0x6f6e238, size 0x11c, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndexedIndirectGraphicsBuffer(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                                                   ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset,
                                                                   ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected, addr 0x6f6e354, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, ::System::IntPtr indexBuffer, ::by_ref<::UnityEngine::Matrix4x4 const> matrix,
                                                                                   ::System::IntPtr material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::System::IntPtr bufferWithArgs,
                                                                                   int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawProceduralIndexedIndirect_Injected, addr 0x6f6e00c, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndexedIndirect_Injected(::System::IntPtr _unity_self, ::System::IntPtr indexBuffer, ::by_ref<::UnityEngine::Matrix4x4 const> matrix,
                                                                     ::System::IntPtr material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::System::IntPtr bufferWithArgs,
                                                                     int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawProceduralIndexed_Injected, addr 0x6f6dcc4, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndexed_Injected(::System::IntPtr _unity_self, ::System::IntPtr indexBuffer, ::by_ref<::UnityEngine::Matrix4x4 const> matrix, ::System::IntPtr material,
                                                             int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t indexCount, int32_t instanceCount, ::System::IntPtr properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DrawProceduralIndirect, addr 0x6f6dd60, size 0x104, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                              ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
  /// @brief Method Internal_DrawProceduralIndirectGraphicsBuffer, addr 0x6f6e0a8, size 0x104, virtual false, abstract: false, final false
  inline void Internal_DrawProceduralIndirectGraphicsBuffer(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                                            ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawProceduralIndirectGraphicsBuffer_Injected, addr 0x6f6e1ac, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndirectGraphicsBuffer_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> matrix, ::System::IntPtr material,
                                                                            int32_t shaderPass, ::UnityEngine::MeshTopology topology, ::System::IntPtr bufferWithArgs, int32_t argsOffset,
                                                                            ::System::IntPtr properties);

  /// @brief Method Internal_DrawProceduralIndirect_Injected, addr 0x6f6de64, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralIndirect_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> matrix, ::System::IntPtr material, int32_t shaderPass,
                                                              ::UnityEngine::MeshTopology topology, ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties);

  /// @brief Method Internal_DrawProcedural_Injected, addr 0x6f6db24, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawProcedural_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> matrix, ::System::IntPtr material, int32_t shaderPass,
                                                      ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount, ::System::IntPtr properties);

  /// [NativeMethod("AddDrawRenderer")]
  /// @brief Method Internal_DrawRenderer, addr 0x6f6d800, size 0x120, virtual false, abstract: false, final false
  inline void Internal_DrawRenderer(/* [NotNull] */ ::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// [NativeMethod("AddDrawRendererList")]
  /// @brief Method Internal_DrawRendererList, addr 0x6f6d98c, size 0x58, virtual false, abstract: false, final false
  inline void Internal_DrawRendererList(::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method Internal_DrawRendererList_Injected, addr 0x6f6d9e4, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_DrawRendererList_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RendererList const> rendererList);

  /// @brief Method Internal_DrawRenderer_Injected, addr 0x6f6d920, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_DrawRenderer_Injected(::System::IntPtr _unity_self, ::System::IntPtr renderer, ::System::IntPtr material, int32_t submeshIndex, int32_t shaderPass);

  /// [NativeMethod("AddGenerateMips")]
  /// @brief Method Internal_GenerateMips, addr 0x6f6cbb8, size 0x58, virtual false, abstract: false, final false
  inline void Internal_GenerateMips(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method Internal_GenerateMips_Injected, addr 0x6f6cc10, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_GenerateMips_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> rt);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_1, addr 0x6f679bc, size 0x100, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_1(/* [NotNull] */ ::UnityEngine::ComputeBuffer* src, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_1_Injected, addr 0x6f68988, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_1_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_2, addr 0x6f67c4c, size 0x118, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_2(/* [NotNull] */ ::UnityEngine::ComputeBuffer* src, int32_t size, int32_t offset,
                                              /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_2_Injected, addr 0x6f689e4, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_2_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t size, int32_t offset,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_3, addr 0x6f67f0c, size 0x114, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_3(/* [NotNull] */ ::UnityEngine::Texture* src, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_3_Injected, addr 0x6f68a58, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_3_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_4, addr 0x6f6806c, size 0x11c, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_4(/* [NotNull] */ ::UnityEngine::Texture* src, int32_t mipIndex,
                                              /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_4_Injected, addr 0x6f68ab4, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_4_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t mipIndex,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_5, addr 0x6f68260, size 0x12c, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_5(/* [NotNull] */ ::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                              /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_5_Injected, addr 0x6f68b20, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_5_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_6, addr 0x6f6847c, size 0x1a0, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_6(/* [NotNull] */ ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                              /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_6_Injected, addr 0x6f68b94, size 0xa8, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_6_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z,
                                                              int32_t depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_7, addr 0x6f6873c, size 0x1a8, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_7(/* [NotNull] */ ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                              ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                              /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_7_Injected, addr 0x6f68c3c, size 0xb8, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_7_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z,
                                                              int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_8, addr 0x6f67af8, size 0x100, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_8(/* [NotNull] */ ::UnityEngine::GraphicsBuffer* src, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_8_Injected, addr 0x6f68cf4, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_8_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [NativeMethod("AddRequestAsyncReadback")]
  /// @brief Method Internal_RequestAsyncReadback_9, addr 0x6f67db8, size 0x118, virtual false, abstract: false, final false
  inline void Internal_RequestAsyncReadback_9(/* [NotNull] */ ::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                              /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// @brief Method Internal_RequestAsyncReadback_9_Injected, addr 0x6f68d50, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_RequestAsyncReadback_9_Injected(::System::IntPtr _unity_self, ::System::IntPtr src, int32_t size, int32_t offset,
                                                              ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback,
                                                              ::UnityEngine::Rendering::AsyncRequestNativeArrayData* nativeArrayData);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeBufferParam, addr 0x6f69eb4, size 0xf8, virtual false, abstract: false, final false
  inline void Internal_SetComputeBufferParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method Internal_SetComputeBufferParam_Injected, addr 0x6f69fac, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeConstantComputeBufferParam, addr 0x6f6a2dc, size 0x110, virtual false, abstract: false, final false
  inline void Internal_SetComputeConstantComputeBufferParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset,
                                                            int32_t size);

  /// @brief Method Internal_SetComputeConstantComputeBufferParam_Injected, addr 0x6f6a3ec, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_SetComputeConstantComputeBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::System::IntPtr buffer, int32_t offset,
                                                                            int32_t size);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeConstantGraphicsBufferParam, addr 0x6f6a460, size 0x110, virtual false, abstract: false, final false
  inline void Internal_SetComputeConstantGraphicsBufferParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset,
                                                             int32_t size);

  /// @brief Method Internal_SetComputeConstantGraphicsBufferParam_Injected, addr 0x6f6a570, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_SetComputeConstantGraphicsBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::System::IntPtr buffer, int32_t offset,
                                                                             int32_t size);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeFloats", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeFloats, addr 0x6f699b8, size 0x15c, virtual false, abstract: false, final false
  inline void Internal_SetComputeFloats(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method Internal_SetComputeFloats_Injected, addr 0x6f69b14, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeFloats_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeGraphicsBufferHandleParam, addr 0x6f6a018, size 0xf4, virtual false, abstract: false, final false
  inline void Internal_SetComputeGraphicsBufferHandleParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                           ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method Internal_SetComputeGraphicsBufferHandleParam_Injected, addr 0x6f6a10c, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeGraphicsBufferHandleParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID,
                                                                           ::by_ref<::UnityEngine::GraphicsBufferHandle const> bufferHandle);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeGraphicsBufferParam, addr 0x6f6a178, size 0xf8, virtual false, abstract: false, final false
  inline void Internal_SetComputeGraphicsBufferParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method Internal_SetComputeGraphicsBufferParam_Injected, addr 0x6f6a270, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeGraphicsBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID, ::System::IntPtr buffer);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeInts", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeInts, addr 0x6f69b70, size 0x15c, virtual false, abstract: false, final false
  inline void Internal_SetComputeInts(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<int32_t> values);

  /// @brief Method Internal_SetComputeInts_Injected, addr 0x6f69ccc, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeInts_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeParamsFromMaterial", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeParamsFromMaterial, addr 0x6f6a5e4, size 0x118, virtual false, abstract: false, final false
  inline void Internal_SetComputeParamsFromMaterial(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::Material* material);

  /// @brief Method Internal_SetComputeParamsFromMaterial_Injected, addr 0x6f6a6fc, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeParamsFromMaterial_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, ::System::IntPtr material);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeRayTracingAccelerationStructure", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeRayTracingAccelerationStructure, addr 0x6f6c290, size 0x138, virtual false, abstract: false, final false
  inline void Internal_SetComputeRayTracingAccelerationStructure(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                                 /* [NotNull] */ ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method Internal_SetComputeRayTracingAccelerationStructure_Injected, addr 0x6f6c3c8, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetComputeRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID,
                                                                                 ::System::IntPtr accelerationStructure);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeTextureParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetComputeTextureParam, addr 0x6f69d28, size 0x108, virtual false, abstract: false, final false
  inline void Internal_SetComputeTextureParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                              ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt, int32_t mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method Internal_SetComputeTextureParam_Injected, addr 0x6f69e30, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_SetComputeTextureParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t kernelIndex, int32_t nameID,
                                                              ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt, int32_t mipLevel,
                                                              ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingAccelerationStructure", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0x6f6c104, size 0x130, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingAccelerationStructure(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                          /* [NotNull] */ ::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0x6f6c234, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr accelerationStructure);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingComputeBufferParam, addr 0x6f6aba4, size 0xf8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingComputeBufferParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method Internal_SetRayTracingComputeBufferParam_Injected, addr 0x6f6ac9c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingComputeBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr buffer);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingConstantComputeBufferParam, addr 0x6f6af94, size 0x110, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingConstantComputeBufferParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer,
                                                               int32_t offset, int32_t size);

  /// @brief Method Internal_SetRayTracingConstantComputeBufferParam_Injected, addr 0x6f6b0a4, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingConstantComputeBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr buffer, int32_t offset,
                                                                               int32_t size);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingConstantGraphicsBufferParam, addr 0x6f6b118, size 0x110, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingConstantGraphicsBufferParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer,
                                                                int32_t offset, int32_t size);

  /// @brief Method Internal_SetRayTracingConstantGraphicsBufferParam_Injected, addr 0x6f6b228, size 0x74, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingConstantGraphicsBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr buffer,
                                                                                int32_t offset, int32_t size);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloatParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingFloatParam, addr 0x6f6b3e0, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingFloatParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val);

  /// @brief Method Internal_SetRayTracingFloatParam_Injected, addr 0x6f6b4c8, size 0x64, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingFloatParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, float_t val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloats", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingFloats, addr 0x6f6bc70, size 0x15c, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingFloats(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method Internal_SetRayTracingFloats_Injected, addr 0x6f6bdcc, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingFloats_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingGraphicsBufferHandleParam, addr 0x6f6ae4c, size 0xec, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingGraphicsBufferHandleParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                              ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method Internal_SetRayTracingGraphicsBufferHandleParam_Injected, addr 0x6f6af38, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingGraphicsBufferHandleParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                                              ::by_ref<::UnityEngine::GraphicsBufferHandle const> bufferHandle);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingGraphicsBufferParam, addr 0x6f6acf8, size 0xf8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingGraphicsBufferParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method Internal_SetRayTracingGraphicsBufferParam_Injected, addr 0x6f6adf0, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingGraphicsBufferParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::System::IntPtr buffer);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingIntParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingIntParam, addr 0x6f6b52c, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingIntParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val);

  /// @brief Method Internal_SetRayTracingIntParam_Injected, addr 0x6f6b614, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingIntParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, int32_t val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingInts", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingInts, addr 0x6f6be28, size 0x15c, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingInts(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<int32_t> values);

  /// @brief Method Internal_SetRayTracingInts_Injected, addr 0x6f6bf84, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingInts_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixArrayParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingMatrixArrayParam, addr 0x6f6bab8, size 0x15c, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingMatrixArrayParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method Internal_SetRayTracingMatrixArrayParam_Injected, addr 0x6f6bc14, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingMatrixArrayParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                                     ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingMatrixParam, addr 0x6f6b974, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingMatrixParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method Internal_SetRayTracingMatrixParam_Injected, addr 0x6f6ba5c, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingMatrixParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::by_ref<::UnityEngine::Matrix4x4 const> val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingTextureParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingTextureParam, addr 0x6f6b29c, size 0xe8, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingTextureParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                 ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt);

  /// @brief Method Internal_SetRayTracingTextureParam_Injected, addr 0x6f6b384, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingTextureParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                                 ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorArrayParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingVectorArrayParam, addr 0x6f6b7bc, size 0x15c, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingVectorArrayParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method Internal_SetRayTracingVectorArrayParam_Injected, addr 0x6f6b918, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingVectorArrayParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID,
                                                                     ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorParam", HasExplicitThis = true)]
  /// @brief Method Internal_SetRayTracingVectorParam, addr 0x6f6b670, size 0xf0, virtual false, abstract: false, final false
  inline void Internal_SetRayTracingVectorParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method Internal_SetRayTracingVectorParam_Injected, addr 0x6f6b760, size 0x5c, virtual false, abstract: false, final false
  static inline void Internal_SetRayTracingVectorParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, int32_t nameID, ::by_ref<::UnityEngine::Vector4 const> val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetSinglePassStereo", HasExplicitThis = true)]
  /// @brief Method Internal_SetSinglePassStereo, addr 0x6f68e60, size 0x58, virtual false, abstract: false, final false
  inline void Internal_SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method Internal_SetSinglePassStereo_Injected, addr 0x6f68eb8, size 0x44, virtual false, abstract: false, final false
  static inline void Internal_SetSinglePassStereo_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method InvokeOnRenderObjectCallbacks, addr 0x6f76248, size 0x20, virtual false, abstract: false, final false
  inline void InvokeOnRenderObjectCallbacks();

  /// [FreeFunction("RenderingCommandBuffer_Bindings::InvokeOnRenderObjectCallbacks", HasExplicitThis = true)]
  /// @brief Method InvokeOnRenderObjectCallbacks_Internal, addr 0x6f761bc, size 0x50, virtual false, abstract: false, final false
  inline void InvokeOnRenderObjectCallbacks_Internal();

  /// @brief Method InvokeOnRenderObjectCallbacks_Internal_Injected, addr 0x6f7620c, size 0x3c, virtual false, abstract: false, final false
  static inline void InvokeOnRenderObjectCallbacks_Internal_Injected(::System::IntPtr _unity_self);

  /// @brief Method IssuePluginCustomBlit, addr 0x6f79f44, size 0x68, virtual false, abstract: false, final false
  inline void IssuePluginCustomBlit(::System::IntPtr callback, uint32_t command, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest,
                                    uint32_t commandParam, uint32_t commandFlags);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomBlitInternal", HasExplicitThis = true)]
  /// @brief Method IssuePluginCustomBlitInternal, addr 0x6f726e8, size 0x98, virtual false, abstract: false, final false
  inline void IssuePluginCustomBlitInternal(::System::IntPtr callback, uint32_t command, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> source,
                                            ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> dest, uint32_t commandParam, uint32_t commandFlags);

  /// @brief Method IssuePluginCustomBlitInternal_Injected, addr 0x6f72780, size 0x84, virtual false, abstract: false, final false
  static inline void IssuePluginCustomBlitInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr callback, uint32_t command,
                                                            ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> dest,
                                                            uint32_t commandParam, uint32_t commandFlags);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomTextureUpdateInternal", HasExplicitThis = true)]
  /// @brief Method IssuePluginCustomTextureUpdateInternal, addr 0x6f72804, size 0xcc, virtual false, abstract: false, final false
  inline void IssuePluginCustomTextureUpdateInternal(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, uint32_t userData, bool useNewUnityRenderingExtTextureUpdateParamsV2);

  /// @brief Method IssuePluginCustomTextureUpdateInternal_Injected, addr 0x6f728d0, size 0x6c, virtual false, abstract: false, final false
  static inline void IssuePluginCustomTextureUpdateInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr callback, ::System::IntPtr targetTexture, uint32_t userData,
                                                                     bool useNewUnityRenderingExtTextureUpdateParamsV2);

  /// @brief Method IssuePluginCustomTextureUpdateV2, addr 0x6f79fac, size 0x4c, virtual false, abstract: false, final false
  inline void IssuePluginCustomTextureUpdateV2(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, uint32_t userData);

  /// @brief Method IssuePluginEvent, addr 0x6f79e5c, size 0x54, virtual false, abstract: false, final false
  inline void IssuePluginEvent(::System::IntPtr callback, int32_t eventID);

  /// @brief Method IssuePluginEventAndData, addr 0x6f79eb0, size 0x94, virtual false, abstract: false, final false
  inline void IssuePluginEventAndData(::System::IntPtr callback, int32_t eventID, ::System::IntPtr data);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventAndDataInternal", HasExplicitThis = true)]
  /// @brief Method IssuePluginEventAndDataInternal, addr 0x6f7261c, size 0x70, virtual false, abstract: false, final false
  inline void IssuePluginEventAndDataInternal(::System::IntPtr callback, int32_t eventID, ::System::IntPtr data);

  /// @brief Method IssuePluginEventAndDataInternal_Injected, addr 0x6f7268c, size 0x5c, virtual false, abstract: false, final false
  static inline void IssuePluginEventAndDataInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr callback, int32_t eventID, ::System::IntPtr data);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventInternal", HasExplicitThis = true)]
  /// @brief Method IssuePluginEventInternal, addr 0x6f72028, size 0x68, virtual false, abstract: false, final false
  inline void IssuePluginEventInternal(::System::IntPtr callback, int32_t eventID);

  /// @brief Method IssuePluginEventInternal_Injected, addr 0x6f72090, size 0x54, virtual false, abstract: false, final false
  static inline void IssuePluginEventInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr callback, int32_t eventID);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::MarkLateLatchMatrixShaderPropertyID", HasExplicitThis = true)]
  /// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0x6f71bb8, size 0x68, virtual false, abstract: false, final false
  inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID);

  /// @brief Method MarkLateLatchMatrixShaderPropertyID_Injected, addr 0x6f71c20, size 0x54, virtual false, abstract: false, final false
  static inline void MarkLateLatchMatrixShaderPropertyID_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID);

  static inline ::UnityEngine::Rendering::CommandBuffer* New_ctor();

  /// @brief Method NextSubPass, addr 0x6f75fac, size 0x20, virtual false, abstract: false, final false
  inline void NextSubPass();

  /// [FreeFunction("RenderingCommandBuffer_Bindings::NextSubPass", HasExplicitThis = true)]
  /// @brief Method NextSubPass_Internal, addr 0x6f75f20, size 0x50, virtual false, abstract: false, final false
  inline void NextSubPass_Internal();

  /// @brief Method NextSubPass_Internal_Injected, addr 0x6f75f70, size 0x3c, virtual false, abstract: false, final false
  static inline void NextSubPass_Internal_Injected(::System::IntPtr _unity_self);

  /// @brief Method Release, addr 0x6f76604, size 0x4, virtual false, abstract: false, final false
  inline void Release();

  /// [FreeFunction("RenderingCommandBuffer_Bindings::ReleaseBuffer", HasExplicitThis = true, IsThreadSafe = true)]
  /// @brief Method ReleaseBuffer, addr 0x6f6909c, size 0x50, virtual false, abstract: false, final false
  inline void ReleaseBuffer();

  /// @brief Method ReleaseBuffer_Injected, addr 0x6f690ec, size 0x3c, virtual false, abstract: false, final false
  static inline void ReleaseBuffer_Injected(::System::IntPtr _unity_self);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::ReleaseTemporaryRT", HasExplicitThis = true)]
  /// @brief Method ReleaseTemporaryRT, addr 0x6f6fa68, size 0x58, virtual false, abstract: false, final false
  inline void ReleaseTemporaryRT(int32_t nameID);

  /// @brief Method ReleaseTemporaryRT_Injected, addr 0x6f6fac0, size 0x44, virtual false, abstract: false, final false
  static inline void ReleaseTemporaryRT_Injected(::System::IntPtr _unity_self, int32_t nameID);

  /// @brief Method RequestAsyncReadback, addr 0x6f67918, size 0x3c, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::ComputeBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f67bf8, size 0x54, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::ComputeBuffer* src, int32_t size, int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f67abc, size 0x3c, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::GraphicsBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f67d64, size 0x54, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f67ed0, size 0x3c, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f68020, size 0x4c, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f6838c, size 0x54, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                   ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f68188, size 0xd8, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::TextureFormat dstFormat,
                                   ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f683e0, size 0x9c, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                   ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f688e4, size 0xa4, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x6f6861c, size 0x120, virtual false, abstract: false, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth, ::UnityEngine::TextureFormat dstFormat,
                                   ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src, int32_t size, int32_t offset,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::TextureFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::UnityEngine::TextureFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method ResetShadingRate, addr 0x6f7638c, size 0x4, virtual false, abstract: false, final false
  inline void ResetShadingRate();

  /// [FreeFunction("RenderingCommandBuffer_Bindings::ResetShadingRate_Impl", HasExplicitThis = true)]
  /// @brief Method ResetShadingRate_Impl, addr 0x6f76390, size 0x50, virtual false, abstract: false, final false
  inline void ResetShadingRate_Impl();

  /// @brief Method ResetShadingRate_Impl_Injected, addr 0x6f764bc, size 0x3c, virtual false, abstract: false, final false
  static inline void ResetShadingRate_Impl_Injected(::System::IntPtr _unity_self);

  /// @brief Method SetBufferCounterValue, addr 0x6f75108, size 0x4, virtual false, abstract: false, final false
  inline void SetBufferCounterValue(::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue);

  /// @brief Method SetBufferCounterValue, addr 0x6f758c4, size 0x4, virtual false, abstract: false, final false
  inline void SetBufferCounterValue(::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue);

  /// @brief Method SetBufferData, addr 0x6f74c64, size 0x16c, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data);

  /// @brief Method SetBufferData, addr 0x6f74ec4, size 0x244, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x6f75420, size 0x16c, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data);

  /// @brief Method SetBufferData, addr 0x6f75680, size 0x244, virtual false, abstract: false, final false
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetComputeBufferParam, addr 0x6f76a8c, size 0x4c, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x6f76b30, size 0x4c, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x6f76ae0, size 0x4c, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetComputeBufferParam, addr 0x6f76a88, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x6f76b2c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x6f76ad8, size 0x8, virtual false, abstract: false, final false
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetComputeConstantBufferParam, addr 0x6f76b80, size 0x54, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x6f76bd8, size 0x54, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x6f76b7c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x6f76bd4, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeFloatParam, addr 0x6f7672c, size 0x44, virtual false, abstract: false, final false
  inline void SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, float_t val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeFloatParam", HasExplicitThis = true)]
  /// @brief Method SetComputeFloatParam, addr 0x6f69128, size 0xe8, virtual false, abstract: false, final false
  inline void SetComputeFloatParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, float_t val);

  /// @brief Method SetComputeFloatParam_Injected, addr 0x6f69210, size 0x64, virtual false, abstract: false, final false
  static inline void SetComputeFloatParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, float_t val);

  /// @brief Method SetComputeFloatParams, addr 0x6f768e0, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetComputeFloatParams, addr 0x6f7691c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetComputeIntParam, addr 0x6f76770, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, int32_t val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeIntParam", HasExplicitThis = true)]
  /// @brief Method SetComputeIntParam, addr 0x6f69274, size 0xe8, virtual false, abstract: false, final false
  inline void SetComputeIntParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, int32_t val);

  /// @brief Method SetComputeIntParam_Injected, addr 0x6f6935c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeIntParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, int32_t val);

  /// @brief Method SetComputeIntParams, addr 0x6f76920, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetComputeIntParams, addr 0x6f7695c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeKeyword", HasExplicitThis = true)]
  /// @brief Method SetComputeKeyword, addr 0x6f70edc, size 0xc4, virtual false, abstract: false, final false
  inline void SetComputeKeyword(::UnityEngine::ComputeShader* computeShader, ::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetComputeKeyword_Injected, addr 0x6f70fa0, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// @brief Method SetComputeMatrixArrayParam, addr 0x6f768a4, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixArrayParam", HasExplicitThis = true)]
  /// @brief Method SetComputeMatrixArrayParam, addr 0x6f69800, size 0x15c, virtual false, abstract: false, final false
  inline void SetComputeMatrixArrayParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetComputeMatrixArrayParam_Injected, addr 0x6f6995c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeMatrixArrayParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetComputeMatrixParam, addr 0x6f7684c, size 0x58, virtual false, abstract: false, final false
  inline void SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Matrix4x4 val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixParam", HasExplicitThis = true)]
  /// @brief Method SetComputeMatrixParam, addr 0x6f696bc, size 0xe8, virtual false, abstract: false, final false
  inline void SetComputeMatrixParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetComputeMatrixParam_Injected, addr 0x6f697a4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeMatrixParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::by_ref<::UnityEngine::Matrix4x4 const> val);

  /// @brief Method SetComputeParamsFromMaterial, addr 0x6f76c2c, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeParamsFromMaterial(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::Material* material);

  /// @brief Method SetComputeTextureParam, addr 0x6f76960, size 0x54, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetComputeTextureParam, addr 0x6f769c0, size 0x58, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x6f76a20, size 0x64, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeTextureParam, addr 0x6f769b4, size 0xc, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetComputeTextureParam, addr 0x6f76a18, size 0x8, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x6f76a84, size 0x4, virtual false, abstract: false, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeVectorArrayParam, addr 0x6f76810, size 0x3c, virtual false, abstract: false, final false
  inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorArrayParam", HasExplicitThis = true)]
  /// @brief Method SetComputeVectorArrayParam, addr 0x6f69504, size 0x15c, virtual false, abstract: false, final false
  inline void SetComputeVectorArrayParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetComputeVectorArrayParam_Injected, addr 0x6f69660, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeVectorArrayParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetComputeVectorParam, addr 0x6f767ac, size 0x64, virtual false, abstract: false, final false
  inline void SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Vector4 val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorParam", HasExplicitThis = true)]
  /// @brief Method SetComputeVectorParam, addr 0x6f693b8, size 0xf0, virtual false, abstract: false, final false
  inline void SetComputeVectorParam(/* [NotNull] */ ::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetComputeVectorParam_Injected, addr 0x6f694a8, size 0x5c, virtual false, abstract: false, final false
  static inline void SetComputeVectorParam_Injected(::System::IntPtr _unity_self, ::System::IntPtr computeShader, int32_t nameID, ::by_ref<::UnityEngine::Vector4 const> val);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetExecutionFlags, addr 0x6f7130c, size 0x58, virtual false, abstract: false, final false
  inline void SetExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags flags);

  /// @brief Method SetExecutionFlags_Injected, addr 0x6f71364, size 0x44, virtual false, abstract: false, final false
  static inline void SetExecutionFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CommandBufferExecutionFlags flags);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetFoveatedRenderingMode", HasExplicitThis = true)]
  /// @brief Method SetFoveatedRenderingMode, addr 0x6f72c64, size 0x58, virtual false, abstract: false, final false
  inline void SetFoveatedRenderingMode(::UnityEngine::Rendering::FoveatedRenderingMode foveatedRenderingMode);

  /// @brief Method SetFoveatedRenderingMode_Injected, addr 0x6f72cbc, size 0x44, virtual false, abstract: false, final false
  static inline void SetFoveatedRenderingMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::FoveatedRenderingMode foveatedRenderingMode);

  /// @brief Method SetGlobalBuffer, addr 0x6f79d10, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6f79d48, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6f79d44, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6f79d7c, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
  /// @brief Method SetGlobalBufferInternal, addr 0x6f71ddc, size 0x74, virtual false, abstract: false, final false
  inline void SetGlobalBufferInternal(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBufferInternal_Injected, addr 0x6f71e50, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalBufferInternal_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr value);

  /// @brief Method SetGlobalColor, addr 0x6f797d0, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalColor", HasExplicitThis = true)]
  /// @brief Method SetGlobalColor, addr 0x6f7022c, size 0x70, virtual false, abstract: false, final false
  inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor_Injected, addr 0x6f7029c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalColor_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Color const> value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6f79d84, size 0x4c, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6f79d80, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6f79dd4, size 0x4c, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6f79dd0, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
  /// @brief Method SetGlobalConstantBufferInternal, addr 0x6f7293c, size 0x8c, virtual false, abstract: false, final false
  inline void SetGlobalConstantBufferInternal(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBufferInternal_Injected, addr 0x6f729c8, size 0x6c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantBufferInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, int32_t nameID, int32_t offset, int32_t size);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
  /// @brief Method SetGlobalConstantGraphicsBufferInternal, addr 0x6f72a34, size 0x8c, virtual false, abstract: false, final false
  inline void SetGlobalConstantGraphicsBufferInternal(::UnityEngine::GraphicsBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantGraphicsBufferInternal_Injected, addr 0x6f72ac0, size 0x6c, virtual false, abstract: false, final false
  static inline void SetGlobalConstantGraphicsBufferInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr buffer, int32_t nameID, int32_t offset, int32_t size);

  /// [NativeMethod("AddSetGlobalDepthBias")]
  /// @brief Method SetGlobalDepthBias, addr 0x6f71250, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalDepthBias(float_t bias, float_t slopeBias);

  /// @brief Method SetGlobalDepthBias_Injected, addr 0x6f712b8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalDepthBias_Injected(::System::IntPtr _unity_self, float_t bias, float_t slopeBias);

  /// @brief Method SetGlobalFloat, addr 0x6f796e0, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalFloat(::StringW name, float_t value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloat", HasExplicitThis = true)]
  /// @brief Method SetGlobalFloat, addr 0x6f6ff34, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetGlobalFloatArray, addr 0x6f71630, size 0x114, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(int32_t nameID, /* [NotNull] */ ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6f798a8, size 0xe4, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x6f7998c, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(::StringW propertyName, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6f79874, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalFloatArray(::StringW propertyName, ::System::Collections::Generic::List_1<float_t>* values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArrayListImpl", HasExplicitThis = true)]
  /// @brief Method SetGlobalFloatArrayListImpl, addr 0x6f713fc, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalFloatArrayListImpl(int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalFloatArrayListImpl_Injected, addr 0x6f71464, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArrayListImpl_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalFloatArray_Injected, addr 0x6f71744, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloatArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetGlobalFloat_Injected, addr 0x6f6ff9c, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalFloat_Injected(::System::IntPtr _unity_self, int32_t nameID, float_t value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
  /// @brief Method SetGlobalGraphicsBufferInternal, addr 0x6f71ea4, size 0x74, virtual false, abstract: false, final false
  inline void SetGlobalGraphicsBufferInternal(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalGraphicsBufferInternal_Injected, addr 0x6f71f18, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalGraphicsBufferInternal_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::IntPtr value);

  /// @brief Method SetGlobalInt, addr 0x6f79714, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalInt(::StringW name, int32_t value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInt", HasExplicitThis = true)]
  /// @brief Method SetGlobalInt, addr 0x6f6fff0, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInt_Injected, addr 0x6f70058, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalInt_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6f79748, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalInteger(::StringW name, int32_t value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInteger", HasExplicitThis = true)]
  /// @brief Method SetGlobalInteger, addr 0x6f700ac, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInteger_Injected, addr 0x6f70114, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalInteger_Injected(::System::IntPtr _unity_self, int32_t nameID, int32_t value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetShaderKeyword", HasExplicitThis = true)]
  /// @brief Method SetGlobalKeyword, addr 0x6f70cfc, size 0x6c, virtual false, abstract: false, final false
  inline void SetGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword keyword, bool value);

  /// @brief Method SetGlobalKeyword_Injected, addr 0x6f70d68, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalKeyword_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword, bool value);

  /// @brief Method SetGlobalMatrix, addr 0x6f79824, size 0x50, virtual false, abstract: false, final false
  inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrix", HasExplicitThis = true)]
  /// @brief Method SetGlobalMatrix, addr 0x6f702f0, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetGlobalMatrixArray, addr 0x6f71900, size 0x114, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(int32_t nameID, /* [NotNull] */ ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6f79b40, size 0xe4, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6f79c24, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(::StringW propertyName, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6f79b0c, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArrayListImpl", HasExplicitThis = true)]
  /// @brief Method SetGlobalMatrixArrayListImpl, addr 0x6f71574, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalMatrixArrayListImpl(int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalMatrixArrayListImpl_Injected, addr 0x6f715dc, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArrayListImpl_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalMatrixArray_Injected, addr 0x6f71a14, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrixArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetGlobalMatrix_Injected, addr 0x6f70358, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalMatrix_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Matrix4x4 const> value);

  /// @brief Method SetGlobalTexture, addr 0x6f79c58, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x6f79cb8, size 0x58, virtual false, abstract: false, final false
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6f79cb0, size 0x8, virtual false, abstract: false, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x6f79cac, size 0x4, virtual false, abstract: false, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalTexture_Impl", HasExplicitThis = true)]
  /// @brief Method SetGlobalTexture_Impl, addr 0x6f71d10, size 0x70, virtual false, abstract: false, final false
  inline void SetGlobalTexture_Impl(int32_t nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture_Impl_Injected, addr 0x6f71d80, size 0x5c, virtual false, abstract: false, final false
  static inline void SetGlobalTexture_Impl_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt,
                                                    ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalVector, addr 0x6f7977c, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVector", HasExplicitThis = true)]
  /// @brief Method SetGlobalVector, addr 0x6f70168, size 0x70, virtual false, abstract: false, final false
  inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArray", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetGlobalVectorArray, addr 0x6f71798, size 0x114, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(int32_t nameID, /* [NotNull] */ ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6f799f4, size 0xe4, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x6f79ad8, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(::StringW propertyName, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6f799c0, size 0x34, virtual false, abstract: false, final false
  inline void SetGlobalVectorArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArrayListImpl", HasExplicitThis = true)]
  /// @brief Method SetGlobalVectorArrayListImpl, addr 0x6f714b8, size 0x68, virtual false, abstract: false, final false
  inline void SetGlobalVectorArrayListImpl(int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalVectorArrayListImpl_Injected, addr 0x6f71520, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArrayListImpl_Injected(::System::IntPtr _unity_self, int32_t nameID, ::System::Object* values);

  /// @brief Method SetGlobalVectorArray_Injected, addr 0x6f718ac, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVectorArray_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> values);

  /// @brief Method SetGlobalVector_Injected, addr 0x6f701d8, size 0x54, virtual false, abstract: false, final false
  static inline void SetGlobalVector_Injected(::System::IntPtr _unity_self, int32_t nameID, ::by_ref<::UnityEngine::Vector4 const> value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetInstanceMultiplier", HasExplicitThis = true)]
  /// @brief Method SetInstanceMultiplier, addr 0x6f72bc8, size 0x58, virtual false, abstract: false, final false
  inline void SetInstanceMultiplier(uint32_t multiplier);

  /// @brief Method SetInstanceMultiplier_Injected, addr 0x6f72c20, size 0x44, virtual false, abstract: false, final false
  static inline void SetInstanceMultiplier_Injected(::System::IntPtr _unity_self, uint32_t multiplier);

  /// [NativeMethod("AddSetInvertCulling")]
  /// @brief Method SetInvertCulling, addr 0x6f68dc4, size 0x58, virtual false, abstract: false, final false
  inline void SetInvertCulling(bool invertCulling);

  /// @brief Method SetInvertCulling_Injected, addr 0x6f68e1c, size 0x44, virtual false, abstract: false, final false
  static inline void SetInvertCulling_Injected(::System::IntPtr _unity_self, bool invertCulling);

  /// @brief Method SetKeyword, addr 0x6f71030, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// @brief Method SetKeyword, addr 0x6f70ffc, size 0x8, virtual false, abstract: false, final false
  inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword, bool value);

  /// @brief Method SetKeyword, addr 0x6f71004, size 0x2c, virtual false, abstract: false, final false
  inline void SetKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetLateLatchProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetLateLatchProjectionMatrices, addr 0x6f71a68, size 0x10c, virtual false, abstract: false, final false
  inline void SetLateLatchProjectionMatrices(/* [NotNull] */ ::ArrayW<::UnityEngine::Matrix4x4> projectionMat);

  /// @brief Method SetLateLatchProjectionMatrices_Injected, addr 0x6f71b74, size 0x44, virtual false, abstract: false, final false
  static inline void SetLateLatchProjectionMatrices_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> projectionMat);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetMaterialKeyword", HasExplicitThis = true)]
  /// @brief Method SetMaterialKeyword, addr 0x6f70dbc, size 0xc4, virtual false, abstract: false, final false
  inline void SetMaterialKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword, bool value);

  /// @brief Method SetMaterialKeyword_Injected, addr 0x6f70e80, size 0x5c, virtual false, abstract: false, final false
  static inline void SetMaterialKeyword_Injected(::System::IntPtr _unity_self, ::System::IntPtr material, ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetProjectionMatrix", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetProjectionMatrix, addr 0x6f710f8, size 0x58, virtual false, abstract: false, final false
  inline void SetProjectionMatrix(::UnityEngine::Matrix4x4 proj);

  /// @brief Method SetProjectionMatrix_Injected, addr 0x6f71150, size 0x44, virtual false, abstract: false, final false
  static inline void SetProjectionMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> proj);

  /// @brief Method SetRandomWriteTarget, addr 0x6f792c4, size 0x3c, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRandomWriteTarget, addr 0x6f7927c, size 0x48, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::ComputeBuffer* buffer, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget, addr 0x6f79348, size 0x3c, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRandomWriteTarget, addr 0x6f79300, size 0x48, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::GraphicsBuffer* buffer, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget, addr 0x6f79244, size 0x38, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetRandomWriteTarget_Buffer, addr 0x6f6eca0, size 0x7c, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget_Buffer(int32_t index, ::UnityEngine::ComputeBuffer* uav, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget_Buffer_Injected, addr 0x6f6ed1c, size 0x5c, virtual false, abstract: false, final false
  static inline void SetRandomWriteTarget_Buffer_Injected(::System::IntPtr _unity_self, int32_t index, ::System::IntPtr uav, bool preserveCounterValue);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetRandomWriteTarget_GraphicsBuffer, addr 0x6f6ed78, size 0x7c, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget_GraphicsBuffer(int32_t index, ::UnityEngine::GraphicsBuffer* uav, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget_GraphicsBuffer_Injected, addr 0x6f6edf4, size 0x5c, virtual false, abstract: false, final false
  static inline void SetRandomWriteTarget_GraphicsBuffer_Injected(::System::IntPtr _unity_self, int32_t index, ::System::IntPtr uav, bool preserveCounterValue);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Texture", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetRandomWriteTarget_Texture, addr 0x6f6ebe4, size 0x68, virtual false, abstract: false, final false
  inline void SetRandomWriteTarget_Texture(int32_t index, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt);

  /// @brief Method SetRandomWriteTarget_Texture_Injected, addr 0x6f6ec4c, size 0x54, virtual false, abstract: false, final false
  static inline void SetRandomWriteTarget_Texture_Injected(::System::IntPtr _unity_self, int32_t index, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> rt);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6f76f38, size 0x4c, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6f76f84, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6f76ef8, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6f76f34, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingBufferParam, addr 0x6f76f88, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x6f76fc8, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x6f77008, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetRayTracingBufferParam, addr 0x6f76fc4, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x6f77004, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x6f77044, size 0x8, virtual false, abstract: false, final false
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x6f77050, size 0x54, virtual false, abstract: false, final false
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x6f770a8, size 0x54, virtual false, abstract: false, final false
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x6f7704c, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x6f770a4, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingFloatParam, addr 0x6f7713c, size 0x44, virtual false, abstract: false, final false
  inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, float_t val);

  /// @brief Method SetRayTracingFloatParam, addr 0x6f77180, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val);

  /// @brief Method SetRayTracingFloatParams, addr 0x6f77184, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetRayTracingFloatParams, addr 0x6f771c0, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetRayTracingIntParam, addr 0x6f771c4, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, int32_t val);

  /// @brief Method SetRayTracingIntParam, addr 0x6f77200, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val);

  /// @brief Method SetRayTracingIntParams, addr 0x6f77204, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetRayTracingIntParams, addr 0x6f77240, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetRayTracingMatrixArrayParam, addr 0x6f77370, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, /* [ParamArray] */ ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetRayTracingMatrixArrayParam, addr 0x6f773ac, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetRayTracingMatrixParam, addr 0x6f772ec, size 0x58, virtual false, abstract: false, final false
  inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetRayTracingMatrixParam, addr 0x6f77344, size 0x2c, virtual false, abstract: false, final false
  inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// [NativeMethod("AddSetRayTracingShaderPass")]
  /// @brief Method SetRayTracingShaderPass, addr 0x6f6c434, size 0x1bc, virtual false, abstract: false, final false
  inline void SetRayTracingShaderPass(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW passName);

  /// @brief Method SetRayTracingShaderPass_Injected, addr 0x6f6c5f0, size 0x54, virtual false, abstract: false, final false
  static inline void SetRayTracingShaderPass_Injected(::System::IntPtr _unity_self, ::System::IntPtr rayTracingShader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> passName);

  /// @brief Method SetRayTracingTextureParam, addr 0x6f770fc, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRayTracingTextureParam, addr 0x6f77138, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRayTracingVectorArrayParam, addr 0x6f772ac, size 0x3c, virtual false, abstract: false, final false
  inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, /* [ParamArray] */ ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetRayTracingVectorArrayParam, addr 0x6f772e8, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetRayTracingVectorParam, addr 0x6f77244, size 0x64, virtual false, abstract: false, final false
  inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetRayTracingVectorParam, addr 0x6f772a8, size 0x4, virtual false, abstract: false, final false
  inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetRenderTarget, addr 0x6f74554, size 0x364, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding);

  /// @brief Method SetRenderTarget, addr 0x6f74114, size 0x388, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6f738e8, size 0xf8, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                              ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x6f7345c, size 0x80, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth);

  /// @brief Method SetRenderTarget, addr 0x6f7357c, size 0x114, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x6f73690, size 0x110, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method SetRenderTarget, addr 0x6f737a0, size 0x148, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                              int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6f739e0, size 0x17c, virtual false, abstract: false, final false
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth);

  /// @brief Method SetRenderTarget, addr 0x6f73d64, size 0x198, virtual false, abstract: false, final false
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel,
                              ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6f72ed0, size 0x64, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRenderTarget, addr 0x6f73080, size 0xdc, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x6f72fbc, size 0xc4, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction storeAction);

  /// @brief Method SetRenderTarget, addr 0x6f7315c, size 0xe8, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x6f73244, size 0xf4, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method SetRenderTarget, addr 0x6f73338, size 0x124, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetColorDepthSubtarget, addr 0x6f7449c, size 0xb8, virtual false, abstract: false, final false
  inline void SetRenderTargetColorDepthSubtarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel,
                                                 ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetColorDepthSubtarget_Injected, addr 0x6f74b1c, size 0xa4, virtual false, abstract: false, final false
  static inline void SetRenderTargetColorDepthSubtarget_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> color,
                                                                 ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> depth,
                                                                 ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                                 ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                                 int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetColorDepth_Internal, addr 0x6f734dc, size 0xa0, virtual false, abstract: false, final false
  inline void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                 ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                 ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetColorDepth_Internal_Injected, addr 0x6f74a04, size 0x8c, virtual false, abstract: false, final false
  static inline void SetRenderTargetColorDepth_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> color,
                                                                 ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> depth,
                                                                 ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                                 ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                                                 ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetMultiSubtarget, addr 0x6f73efc, size 0x218, virtual false, abstract: false, final false
  inline void SetRenderTargetMultiSubtarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                            ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction> colorLoadActions, ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> colorStoreActions,
                                            ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel,
                                            ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTargetMultiSubtarget_Injected, addr 0x6f74bc0, size 0xa4, virtual false, abstract: false, final false
  static inline void SetRenderTargetMultiSubtarget_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors,
                                                            ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> depth,
                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colorLoadActions,
                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                            ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                                                            int32_t depthSlice);

  /// @brief Method SetRenderTargetMulti_Internal, addr 0x6f73b5c, size 0x208, virtual false, abstract: false, final false
  inline void SetRenderTargetMulti_Internal(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                                            ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction> colorLoadActions, ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> colorStoreActions,
                                            ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                            ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetMulti_Internal_Injected, addr 0x6f74a90, size 0x8c, virtual false, abstract: false, final false
  static inline void SetRenderTargetMulti_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colors,
                                                            ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> depth,
                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colorLoadActions,
                                                            ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                            ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags flags);

  /// @brief Method SetRenderTargetSingle_Internal, addr 0x6f72f34, size 0x88, virtual false, abstract: false, final false
  inline void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                             ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                             ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTargetSingle_Internal_Injected, addr 0x6f74990, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTargetSingle_Internal_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> rt,
                                                             ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                                             ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetShadingRateCombiner, addr 0x6f762c4, size 0x4, virtual false, abstract: false, final false
  inline void SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage stage, ::UnityEngine::Rendering::ShadingRateCombiner combiner);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateCombiner_Impl", HasExplicitThis = true)]
  /// @brief Method SetShadingRateCombiner_Impl, addr 0x6f762c8, size 0x68, virtual false, abstract: false, final false
  inline void SetShadingRateCombiner_Impl(::UnityEngine::Rendering::ShadingRateCombinerStage stage, ::UnityEngine::Rendering::ShadingRateCombiner combiner);

  /// @brief Method SetShadingRateCombiner_Impl_Injected, addr 0x6f76424, size 0x54, virtual false, abstract: false, final false
  static inline void SetShadingRateCombiner_Impl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShadingRateCombinerStage stage,
                                                          ::UnityEngine::Rendering::ShadingRateCombiner combiner);

  /// @brief Method SetShadingRateFragmentSize, addr 0x6f76268, size 0x4, virtual false, abstract: false, final false
  inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateFragmentSize_Impl", HasExplicitThis = true)]
  /// @brief Method SetShadingRateFragmentSize_Impl, addr 0x6f7626c, size 0x58, virtual false, abstract: false, final false
  inline void SetShadingRateFragmentSize_Impl(::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize);

  /// @brief Method SetShadingRateFragmentSize_Impl_Injected, addr 0x6f763e0, size 0x44, virtual false, abstract: false, final false
  static inline void SetShadingRateFragmentSize_Impl_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::ShadingRateFragmentSize shadingRateFragmentSize);

  /// @brief Method SetShadingRateImage, addr 0x6f76330, size 0x4, virtual false, abstract: false, final false
  inline void SetShadingRateImage(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> shadingRateImage);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateImage_Impl", HasExplicitThis = true)]
  /// @brief Method SetShadingRateImage_Impl, addr 0x6f76334, size 0x58, virtual false, abstract: false, final false
  inline void SetShadingRateImage_Impl(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> shadingRateImage);

  /// @brief Method SetShadingRateImage_Impl_Injected, addr 0x6f76478, size 0x44, virtual false, abstract: false, final false
  static inline void SetShadingRateImage_Impl_Injected(::System::IntPtr _unity_self, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> shadingRateImage);

  /// @brief Method SetShadowSamplingMode, addr 0x6f79e20, size 0x38, virtual false, abstract: false, final false
  inline void SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode mode);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetShadowSamplingMode_Impl", HasExplicitThis = true)]
  /// @brief Method SetShadowSamplingMode_Impl, addr 0x6f71f6c, size 0x68, virtual false, abstract: false, final false
  inline void SetShadowSamplingMode_Impl(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode mode);

  /// @brief Method SetShadowSamplingMode_Impl_Injected, addr 0x6f71fd4, size 0x54, virtual false, abstract: false, final false
  static inline void SetShadowSamplingMode_Impl_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier> shadowmap,
                                                         ::UnityEngine::Rendering::ShadowSamplingMode mode);

  /// @brief Method SetSinglePassStereo, addr 0x6f79e58, size 0x4, virtual false, abstract: false, final false
  inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetViewMatrix", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetViewMatrix, addr 0x6f7105c, size 0x58, virtual false, abstract: false, final false
  inline void SetViewMatrix(::UnityEngine::Matrix4x4 view);

  /// @brief Method SetViewMatrix_Injected, addr 0x6f710b4, size 0x44, virtual false, abstract: false, final false
  static inline void SetViewMatrix_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> view);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetViewProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetViewProjectionMatrices, addr 0x6f71194, size 0x68, virtual false, abstract: false, final false
  inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj);

  /// @brief Method SetViewProjectionMatrices_Injected, addr 0x6f711fc, size 0x54, virtual false, abstract: false, final false
  static inline void SetViewProjectionMatrices_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Matrix4x4 const> view, ::by_ref<::UnityEngine::Matrix4x4 const> proj);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetViewport", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method SetViewport, addr 0x6f6eedc, size 0x68, virtual false, abstract: false, final false
  inline void SetViewport(::UnityEngine::Rect pixelRect);

  /// @brief Method SetViewport_Injected, addr 0x6f6ef44, size 0x44, virtual false, abstract: false, final false
  static inline void SetViewport_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect const> pixelRect);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetWireframe", HasExplicitThis = true)]
  /// @brief Method SetWireframe, addr 0x6f72d00, size 0x58, virtual false, abstract: false, final false
  inline void SetWireframe(bool enable);

  /// @brief Method SetWireframe_Injected, addr 0x6f72d58, size 0x44, virtual false, abstract: false, final false
  static inline void SetWireframe_Injected(::System::IntPtr _unity_self, bool enable);

  /// @brief Method SetupCameraProperties, addr 0x6f7618c, size 0x30, virtual false, abstract: false, final false
  inline void SetupCameraProperties(::UnityEngine::Camera* camera);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::SetupCameraProperties", HasExplicitThis = true)]
  /// @brief Method SetupCameraProperties_Internal, addr 0x6f76078, size 0xd0, virtual false, abstract: false, final false
  inline void SetupCameraProperties_Internal(/* [NotNull] */ ::UnityEngine::Camera* camera);

  /// @brief Method SetupCameraProperties_Internal_Injected, addr 0x6f76148, size 0x44, virtual false, abstract: false, final false
  static inline void SetupCameraProperties_Internal_Injected(::System::IntPtr _unity_self, ::System::IntPtr camera);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::UnmarkLateLatchMatrix", HasExplicitThis = true)]
  /// @brief Method UnmarkLateLatchMatrix, addr 0x6f71c74, size 0x58, virtual false, abstract: false, final false
  inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType);

  /// @brief Method UnmarkLateLatchMatrix_Injected, addr 0x6f71ccc, size 0x44, virtual false, abstract: false, final false
  static inline void UnmarkLateLatchMatrix_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::ValidateAgainstExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
  /// @brief Method ValidateAgainstExecutionFlags, addr 0x6f67954, size 0x68, virtual false, abstract: false, final false
  inline bool ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);

  /// @brief Method ValidateAgainstExecutionFlags_Injected, addr 0x6f713a8, size 0x54, virtual false, abstract: false, final false
  static inline bool ValidateAgainstExecutionFlags_Injected(::System::IntPtr _unity_self, ::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags,
                                                            ::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);

  /// @brief Method WaitOnAsyncGraphicsFence, addr 0x6f76648, size 0xe4, virtual false, abstract: false, final false
  inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence fence, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// [FreeFunction("RenderingCommandBuffer_Bindings::WaitOnGPUFence_Internal", HasExplicitThis = true)]
  /// @brief Method WaitOnGPUFence_Internal, addr 0x6f68fe0, size 0x68, virtual false, abstract: false, final false
  inline void WaitOnGPUFence_Internal(::System::IntPtr fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  /// @brief Method WaitOnGPUFence_Internal_Injected, addr 0x6f69048, size 0x54, virtual false, abstract: false, final false
  static inline void WaitOnGPUFence_Internal_Injected(::System::IntPtr _unity_self, ::System::IntPtr fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags stage);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6f765c4, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

  static inline bool getStaticF_ThrowOnSetRenderTarget();

  /// @brief Method get_name, addr 0x6f6cfe4, size 0x100, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_name_Injected, addr 0x6f6d0e4, size 0x44, virtual false, abstract: false, final false
  static inline void get_name_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// [NativeMethod("GetBufferSize")]
  /// @brief Method get_sizeInBytes, addr 0x6f6d2c0, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_sizeInBytes();

  /// @brief Method get_sizeInBytes_Injected, addr 0x6f6d310, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_sizeInBytes_Injected(::System::IntPtr _unity_self);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_ThrowOnSetRenderTarget(bool value);

  /// @brief Method set_name, addr 0x6f6d128, size 0x154, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_name_Injected, addr 0x6f6d27c, size 0x44, virtual false, abstract: false, final false
  static inline void set_name_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBuffer(CommandBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBuffer(CommandBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10382 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CommandBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
