#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ComputeCommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeCommandBuffer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
class IBaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class IComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
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
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
namespace UnityEngine::Rendering {
struct SinglePassStereoMode;
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
struct GraphicsBufferHandle;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ComputeCommandBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::ComputeCommandBuffer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::ComputeCommandBuffer*, "UnityEngine.Rendering", "ComputeCommandBuffer");
// Dependencies UnityEngine.Rendering.BaseCommandBuffer
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ComputeCommandBuffer
class CORDL_TYPE ComputeCommandBuffer : public ::UnityEngine::Rendering::BaseCommandBuffer {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IComputeCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IComputeCommandBuffer*() noexcept;

  /// @brief Method BeginSample, addr 0x6b64e2c, size 0x4, virtual true, abstract: false, final true
  inline void BeginSample(::Unity::Profiling::ProfilerMarker marker);

  /// @brief Method BeginSample, addr 0x6b64dd4, size 0x18, virtual true, abstract: false, final true
  inline void BeginSample(::StringW name);

  /// @brief Method BeginSample, addr 0x6b64e04, size 0x14, virtual true, abstract: false, final true
  inline void BeginSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x6b659d8, size 0x18, virtual true, abstract: false, final true
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x6b65a08, size 0x14, virtual true, abstract: false, final true
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure,
                                                   ::UnityEngine::Rendering::RayTracingAccelerationStructure_BuildSettings buildSettings);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x6b659f0, size 0x18, virtual true, abstract: false, final true
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure, ::UnityEngine::Vector3 relativeOrigin);

  /// @brief Method CopyCounterValue, addr 0x6b661b0, size 0x14, virtual true, abstract: false, final true
  inline void CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x6b661d8, size 0x14, virtual true, abstract: false, final true
  inline void CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x6b661c4, size 0x14, virtual true, abstract: false, final true
  inline void CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x6b661ec, size 0x14, virtual true, abstract: false, final true
  inline void CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method DisableKeyword, addr 0x6b64c10, size 0x38, virtual false, abstract: false, final false
  inline void DisableKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method DisableKeyword, addr 0x6b64bc0, size 0x18, virtual false, abstract: false, final false
  inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword);

  /// @brief Method DisableKeyword, addr 0x6b64bd8, size 0x38, virtual false, abstract: false, final false
  inline void DisableKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method DisableScissorRect, addr 0x6b64a3c, size 0x18, virtual true, abstract: false, final true
  inline void DisableScissorRect();

  /// @brief Method DisableShaderKeyword, addr 0x6b64ba8, size 0x18, virtual true, abstract: false, final true
  inline void DisableShaderKeyword(::StringW keyword);

  /// @brief Method DispatchCompute, addr 0x6b659a8, size 0x18, virtual true, abstract: false, final true
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method DispatchCompute, addr 0x6b659c0, size 0x18, virtual true, abstract: false, final true
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method DispatchCompute, addr 0x6b65994, size 0x14, virtual true, abstract: false, final true
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method DispatchRays, addr 0x6b6619c, size 0x14, virtual true, abstract: false, final true
  inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, ::UnityEngine::GraphicsBuffer* argsBuffer, uint32_t argsOffset,
                           ::UnityEngine::Camera* camera);

  /// @brief Method DispatchRays, addr 0x6b66188, size 0x14, virtual true, abstract: false, final true
  inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, uint32_t width, uint32_t height, uint32_t depth, ::UnityEngine::Camera* camera);

  /// @brief Method EnableKeyword, addr 0x6b64b70, size 0x38, virtual false, abstract: false, final false
  inline void EnableKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method EnableKeyword, addr 0x6b64b20, size 0x18, virtual false, abstract: false, final false
  inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword);

  /// @brief Method EnableKeyword, addr 0x6b64b38, size 0x38, virtual false, abstract: false, final false
  inline void EnableKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method EnableScissorRect, addr 0x6b64a24, size 0x18, virtual true, abstract: false, final true
  inline void EnableScissorRect(::UnityEngine::Rect scissor);

  /// @brief Method EnableShaderKeyword, addr 0x6b64b08, size 0x18, virtual true, abstract: false, final true
  inline void EnableShaderKeyword(::StringW keyword);

  /// @brief Method EndSample, addr 0x6b64e30, size 0x4, virtual true, abstract: false, final true
  inline void EndSample(::Unity::Profiling::ProfilerMarker marker);

  /// @brief Method EndSample, addr 0x6b64dec, size 0x18, virtual true, abstract: false, final true
  inline void EndSample(::StringW name);

  /// @brief Method EndSample, addr 0x6b64e18, size 0x14, virtual true, abstract: false, final true
  inline void EndSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method IncrementUpdateCount, addr 0x6b64e34, size 0x3c, virtual true, abstract: false, final true
  inline void IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method InvokeOnRenderObjectCallbacks, addr 0x6b64f34, size 0x2c, virtual true, abstract: false, final true
  inline void InvokeOnRenderObjectCallbacks();

  /// @brief Method IssuePluginCustomBlit, addr 0x6b66ab8, size 0x90, virtual true, abstract: false, final true
  inline void IssuePluginCustomBlit(::System::IntPtr callback, uint32_t command, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest,
                                    uint32_t commandParam, uint32_t commandFlags);

  /// @brief Method IssuePluginCustomTextureUpdateV2, addr 0x6b66b48, size 0x58, virtual true, abstract: false, final true
  inline void IssuePluginCustomTextureUpdateV2(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, uint32_t userData);

  /// @brief Method IssuePluginEvent, addr 0x6b66a88, size 0x18, virtual true, abstract: false, final true
  inline void IssuePluginEvent(::System::IntPtr callback, int32_t eventID);

  /// @brief Method IssuePluginEventAndData, addr 0x6b66aa0, size 0x18, virtual true, abstract: false, final true
  inline void IssuePluginEventAndData(::System::IntPtr callback, int32_t eventID, ::System::IntPtr data);

  /// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0x6b64da4, size 0x18, virtual true, abstract: false, final true
  inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID);

  static inline ::UnityEngine::Rendering::ComputeCommandBuffer* New_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass,
                                                                         bool isAsync);

  /// @brief Method SetBufferCounterValue, addr 0x6b64ea0, size 0x14, virtual true, abstract: false, final true
  inline void SetBufferCounterValue(::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue);

  /// @brief Method SetBufferCounterValue, addr 0x6b64ee4, size 0x14, virtual true, abstract: false, final true
  inline void SetBufferCounterValue(::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue);

  /// @brief Method SetBufferData, addr 0x6b64e70, size 0x18, virtual true, abstract: false, final true
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data);

  /// @brief Method SetBufferData, addr 0x6b64e88, size 0x18, virtual true, abstract: false, final true
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x6b64eb4, size 0x18, virtual true, abstract: false, final true
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data);

  /// @brief Method SetBufferData, addr 0x6b64ecc, size 0x18, virtual true, abstract: false, final true
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetComputeBufferParam, addr 0x6b65778, size 0x54, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x6b6584c, size 0x54, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x6b657e4, size 0x54, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetComputeBufferParam, addr 0x6b65764, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x6b65838, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x6b657cc, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetComputeConstantBufferParam, addr 0x6b658b4, size 0x5c, virtual true, abstract: false, final true
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x6b65924, size 0x5c, virtual true, abstract: false, final true
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x6b658a0, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x6b65910, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeFloatParam, addr 0x6b64f60, size 0x4c, virtual true, abstract: false, final true
  inline void SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, float_t val);

  /// @brief Method SetComputeFloatParam, addr 0x6b64940, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, float_t val);

  /// @brief Method SetComputeFloatParams, addr 0x6b65140, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetComputeFloatParams, addr 0x6b65184, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetComputeIntParam, addr 0x6b64fac, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, int32_t val);

  /// @brief Method SetComputeIntParam, addr 0x6b64958, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, int32_t val);

  /// @brief Method SetComputeIntParams, addr 0x6b65198, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetComputeIntParams, addr 0x6b651dc, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetComputeMatrixArrayParam, addr 0x6b650fc, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetComputeMatrixArrayParam, addr 0x6b649dc, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetComputeMatrixParam, addr 0x6b650a0, size 0x5c, virtual true, abstract: false, final true
  inline void SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetComputeMatrixParam, addr 0x6b649a0, size 0x3c, virtual true, abstract: false, final true
  inline void SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetComputeParamsFromMaterial, addr 0x6b65980, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeParamsFromMaterial(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::Material* material);

  /// @brief Method SetComputeTextureParam, addr 0x6b651f0, size 0xe8, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt);

  /// @brief Method SetComputeTextureParam, addr 0x6b653b4, size 0xec, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x6b65580, size 0xf8, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeTextureParam, addr 0x6b652d8, size 0xdc, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt);

  /// @brief Method SetComputeTextureParam, addr 0x6b654a0, size 0xe0, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x6b65678, size 0xec, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeVectorArrayParam, addr 0x6b6505c, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetComputeVectorArrayParam, addr 0x6b64988, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetComputeVectorParam, addr 0x6b64ff0, size 0x6c, virtual true, abstract: false, final true
  inline void SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetComputeVectorParam, addr 0x6b64970, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetGlobalBuffer, addr 0x6b668a8, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6b668f8, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6b668e4, size 0x14, virtual true, abstract: false, final true
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x6b66934, size 0x14, virtual true, abstract: false, final true
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalColor, addr 0x6b66310, size 0x5c, virtual true, abstract: false, final true
  inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x6b64ab4, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6b6695c, size 0x54, virtual true, abstract: false, final true
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6b66948, size 0x14, virtual true, abstract: false, final true
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6b669c4, size 0x54, virtual true, abstract: false, final true
  inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x6b669b0, size 0x14, virtual true, abstract: false, final true
  inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalDepthBias, addr 0x6b64d2c, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalDepthBias(float_t bias, float_t slopeBias);

  /// @brief Method SetGlobalFloat, addr 0x6b66200, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x6b64a54, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x6b64d44, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6b663f4, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x6b6640c, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalFloatArray(::StringW propertyName, ::ArrayW<float_t> values);

  /// @brief Method SetGlobalFloatArray, addr 0x6b663b8, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalFloatArray(::StringW propertyName, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalInt, addr 0x6b6623c, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x6b64a6c, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6b66278, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x6b64a84, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalMatrix, addr 0x6b6636c, size 0x4c, virtual true, abstract: false, final true
  inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x6b64acc, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x6b64d74, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6b66514, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6b6652c, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalMatrixArray(::StringW propertyName, ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x6b664d8, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalMatrixArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalTexture, addr 0x6b66568, size 0xdc, virtual true, abstract: false, final true
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method SetGlobalTexture, addr 0x6b66704, size 0xe0, virtual true, abstract: false, final true
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x6b66644, size 0xc0, virtual true, abstract: false, final true
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method SetGlobalTexture, addr 0x6b667e4, size 0xc4, virtual true, abstract: false, final true
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalVector, addr 0x6b662b4, size 0x5c, virtual true, abstract: false, final true
  inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x6b64a9c, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x6b64d5c, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6b66484, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x6b6649c, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalVectorArray(::StringW propertyName, ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetGlobalVectorArray, addr 0x6b66448, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalVectorArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetInvertCulling, addr 0x6b64924, size 0x1c, virtual true, abstract: false, final true
  inline void SetInvertCulling(bool invertCulling);

  /// @brief Method SetKeyword, addr 0x6b64ca0, size 0x3c, virtual false, abstract: false, final false
  inline void SetKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// @brief Method SetKeyword, addr 0x6b64c48, size 0x1c, virtual false, abstract: false, final false
  inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword, bool value);

  /// @brief Method SetKeyword, addr 0x6b64c64, size 0x3c, virtual false, abstract: false, final false
  inline void SetKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// @brief Method SetLateLatchProjectionMatrices, addr 0x6b64d8c, size 0x18, virtual true, abstract: false, final true
  inline void SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4> projectionMat);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6b65a74, size 0x54, virtual true, abstract: false, final true
  inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6b65ac8, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6b65a1c, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x6b65a60, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingBufferParam, addr 0x6b65adc, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x6b65b34, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x6b65b8c, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetRayTracingBufferParam, addr 0x6b65b20, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x6b65b78, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x6b65bd0, size 0x18, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x6b65bfc, size 0x5c, virtual true, abstract: false, final true
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x6b65c6c, size 0x5c, virtual true, abstract: false, final true
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x6b65be8, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x6b65c58, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingFloatParam, addr 0x6b65e5c, size 0x4c, virtual true, abstract: false, final true
  inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, float_t val);

  /// @brief Method SetRayTracingFloatParam, addr 0x6b65ea8, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val);

  /// @brief Method SetRayTracingFloatParams, addr 0x6b65ebc, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetRayTracingFloatParams, addr 0x6b65f00, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<float_t> values);

  /// @brief Method SetRayTracingIntParam, addr 0x6b65f14, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, int32_t val);

  /// @brief Method SetRayTracingIntParam, addr 0x6b65f58, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val);

  /// @brief Method SetRayTracingIntParams, addr 0x6b65f6c, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetRayTracingIntParams, addr 0x6b65fb0, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<int32_t> values);

  /// @brief Method SetRayTracingMatrixArrayParam, addr 0x6b66130, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, /* [ParamArray] */ ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetRayTracingMatrixArrayParam, addr 0x6b66174, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<::UnityEngine::Matrix4x4> values);

  /// @brief Method SetRayTracingMatrixParam, addr 0x6b6609c, size 0x5c, virtual true, abstract: false, final true
  inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetRayTracingMatrixParam, addr 0x6b660f8, size 0x38, virtual true, abstract: false, final true
  inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetRayTracingShaderPass, addr 0x6b649f4, size 0x18, virtual true, abstract: false, final true
  inline void SetRayTracingShaderPass(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW passName);

  /// @brief Method SetRayTracingTextureParam, addr 0x6b65cc8, size 0xd0, virtual true, abstract: false, final true
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt);

  /// @brief Method SetRayTracingTextureParam, addr 0x6b65d98, size 0xc4, virtual true, abstract: false, final true
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt);

  /// @brief Method SetRayTracingVectorArrayParam, addr 0x6b66044, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, /* [ParamArray] */ ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetRayTracingVectorArrayParam, addr 0x6b66088, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, /* [ParamArray] */ ::ArrayW<::UnityEngine::Vector4> values);

  /// @brief Method SetRayTracingVectorParam, addr 0x6b65fc4, size 0x6c, virtual true, abstract: false, final true
  inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetRayTracingVectorParam, addr 0x6b66030, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetShadowSamplingMode, addr 0x6b66a18, size 0x5c, virtual true, abstract: false, final true
  inline void SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode mode);

  /// @brief Method SetSinglePassStereo, addr 0x6b66a74, size 0x14, virtual true, abstract: false, final true
  inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method SetViewProjectionMatrices, addr 0x6b64cdc, size 0x50, virtual true, abstract: false, final true
  inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj);

  /// @brief Method SetViewport, addr 0x6b64a0c, size 0x18, virtual true, abstract: false, final true
  inline void SetViewport(::UnityEngine::Rect pixelRect);

  /// @brief Method SetupCameraProperties, addr 0x6b64ef8, size 0x3c, virtual true, abstract: false, final true
  inline void SetupCameraProperties(::UnityEngine::Camera* camera);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x6b66c78, size 0x38, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x6b66c28, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x6b66c40, size 0x38, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x6b66bf0, size 0x38, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x6b66ba0, size 0x18, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x6b66bb8, size 0x38, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x6b66d08, size 0x3c, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::ComputeShader* computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword,
                                                                  bool value);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x6b66cb0, size 0x1c, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword const> keyword, bool value);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x6b66ccc, size 0x3c, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::Material* material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword const> keyword, bool value);

  /// @brief Method UnmarkLateLatchMatrix, addr 0x6b64dbc, size 0x18, virtual true, abstract: false, final true
  inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType);

  /// @brief Method .ctor, addr 0x6b648d4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass, bool isAsync);

  /// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
  constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IComputeCommandBuffer"
  constexpr ::UnityEngine::Rendering::IComputeCommandBuffer* i___UnityEngine__Rendering__IComputeCommandBuffer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ComputeCommandBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ComputeCommandBuffer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ComputeCommandBuffer(ComputeCommandBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ComputeCommandBuffer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ComputeCommandBuffer(ComputeCommandBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8737 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::ComputeCommandBuffer) == 0x20, "Size mismatch!");

} // namespace UnityEngine::Rendering
