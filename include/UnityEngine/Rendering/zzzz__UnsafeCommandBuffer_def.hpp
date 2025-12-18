#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnsafeCommandBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeCommandBuffer)
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
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
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
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingMode;
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
class IRasterCommandBuffer;
}
namespace UnityEngine::Rendering {
class IUnsafeCommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RTClearFlags;
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
class Renderer;
}
namespace UnityEngine {
struct TextureFormat;
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
class UnsafeCommandBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UnsafeCommandBuffer);
// Dependencies UnityEngine.Rendering.BaseCommandBuffer
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnsafeCommandBuffer
class CORDL_TYPE UnsafeCommandBuffer : public ::UnityEngine::Rendering::BaseCommandBuffer {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IComputeCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IComputeCommandBuffer*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRasterCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IRasterCommandBuffer*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IUnsafeCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IUnsafeCommandBuffer*() noexcept;

  /// @brief Method BeginSample, addr 0x659c178, size 0x4, virtual true, abstract: false, final true
  inline void BeginSample(::Unity::Profiling::ProfilerMarker marker);

  /// @brief Method BeginSample, addr 0x659c120, size 0x18, virtual true, abstract: false, final true
  inline void BeginSample(::StringW name);

  /// @brief Method BeginSample, addr 0x659c150, size 0x14, virtual true, abstract: false, final true
  inline void BeginSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x659d184, size 0x18, virtual true, abstract: false, final true
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure);

  /// @brief Method BuildRayTracingAccelerationStructure, addr 0x659d19c, size 0x18, virtual true, abstract: false, final true
  inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure* accelerationStructure, ::UnityEngine::Vector3 relativeOrigin);

  /// @brief Method Clear, addr 0x659bbb4, size 0x18, virtual true, abstract: false, final true
  inline void Clear();

  /// @brief Method ClearRenderTarget, addr 0x659bc14, size 0x24, virtual true, abstract: false, final true
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor);

  /// @brief Method ClearRenderTarget, addr 0x659bc38, size 0x20, virtual true, abstract: false, final true
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth);

  /// @brief Method ClearRenderTarget, addr 0x659bc58, size 0x9c, virtual true, abstract: false, final true
  inline void ClearRenderTarget(bool clearDepth, bool clearColor, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTarget, addr 0x659bcf4, size 0x84, virtual true, abstract: false, final true
  inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags, ::UnityEngine::Color backgroundColor, float_t depth, uint32_t stencil);

  /// @brief Method ClearRenderTarget, addr 0x659bd78, size 0x18, virtual true, abstract: false, final true
  inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags clearFlags, ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> backgroundColors, float_t depth, uint32_t stencil);

  /// @brief Method ConfigureFoveatedRendering, addr 0x659c208, size 0x18, virtual true, abstract: false, final true
  inline void ConfigureFoveatedRendering(::System::IntPtr platformData);

  /// @brief Method CopyCounterValue, addr 0x659e094, size 0x14, virtual true, abstract: false, final true
  inline void CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x659e0bc, size 0x14, virtual true, abstract: false, final true
  inline void CopyCounterValue(::UnityEngine::ComputeBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x659e0a8, size 0x14, virtual true, abstract: false, final true
  inline void CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::ComputeBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method CopyCounterValue, addr 0x659e0d0, size 0x14, virtual true, abstract: false, final true
  inline void CopyCounterValue(::UnityEngine::GraphicsBuffer* src, ::UnityEngine::GraphicsBuffer* dst, uint32_t dstOffsetBytes);

  /// @brief Method DisableKeyword, addr 0x659bf54, size 0x38, virtual false, abstract: false, final false
  inline void DisableKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x659bf00, size 0x1c, virtual false, abstract: false, final false
  inline void DisableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method DisableKeyword, addr 0x659bf1c, size 0x38, virtual false, abstract: false, final false
  inline void DisableKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method DisableScissorRect, addr 0x659bbfc, size 0x18, virtual true, abstract: false, final true
  inline void DisableScissorRect();

  /// @brief Method DisableShaderKeyword, addr 0x659bee8, size 0x18, virtual true, abstract: false, final true
  inline void DisableShaderKeyword(::StringW keyword);

  /// @brief Method DispatchCompute, addr 0x659d154, size 0x18, virtual true, abstract: false, final true
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::ComputeBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method DispatchCompute, addr 0x659d16c, size 0x18, virtual true, abstract: false, final true
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::UnityEngine::GraphicsBuffer* indirectBuffer, uint32_t argsOffset);

  /// @brief Method DispatchCompute, addr 0x659d140, size 0x14, virtual true, abstract: false, final true
  inline void DispatchCompute(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t threadGroupsX, int32_t threadGroupsY, int32_t threadGroupsZ);

  /// @brief Method DispatchRays, addr 0x659d920, size 0x14, virtual true, abstract: false, final true
  inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW rayGenName, uint32_t width, uint32_t height, uint32_t depth, ::UnityEngine::Camera* camera);

  /// @brief Method DrawMesh, addr 0x659d9ec, size 0x44, virtual true, abstract: false, final true
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material);

  /// @brief Method DrawMesh, addr 0x659d9ac, size 0x40, virtual true, abstract: false, final true
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// @brief Method DrawMesh, addr 0x659d970, size 0x3c, virtual true, abstract: false, final true
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method DrawMesh, addr 0x659d934, size 0x3c, virtual true, abstract: false, final true
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                       ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstanced, addr 0x659df70, size 0x18, virtual true, abstract: false, final true
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices);

  /// @brief Method DrawMeshInstanced, addr 0x659df48, size 0x28, virtual true, abstract: false, final true
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count);

  /// @brief Method DrawMeshInstanced, addr 0x659df2c, size 0x1c, virtual true, abstract: false, final true
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x659dfe4, size 0x2c, virtual true, abstract: false, final true
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x659dfbc, size 0x28, virtual true, abstract: false, final true
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                        int32_t argsOffset);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x659dfa0, size 0x1c, virtual true, abstract: false, final true
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs,
                                        int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x659e054, size 0x2c, virtual true, abstract: false, final true
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x659e02c, size 0x28, virtual true, abstract: false, final true
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs,
                                        int32_t argsOffset);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x659e010, size 0x1c, virtual true, abstract: false, final true
  inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::GraphicsBuffer* bufferWithArgs,
                                        int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstancedProcedural, addr 0x659df88, size 0x18, virtual true, abstract: false, final true
  inline void DrawMeshInstancedProcedural(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass, int32_t count,
                                          ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMultipleMeshes, addr 0x659da30, size 0x1c, virtual true, abstract: false, final true
  inline void DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, ::ArrayW<::UnityEngine::Mesh*, ::Array<::UnityEngine::Mesh*>*> meshes,
                                 ::ArrayW<int32_t, ::Array<int32_t>*> subsetIndices, int32_t count, ::UnityEngine::Material* material, int32_t shaderPass,
                                 ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawOcclusionMesh, addr 0x659e080, size 0x14, virtual true, abstract: false, final true
  inline void DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport);

  /// @brief Method DrawProcedural, addr 0x659dc04, size 0x40, virtual true, abstract: false, final true
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount);

  /// @brief Method DrawProcedural, addr 0x659dbc8, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount, int32_t instanceCount);

  /// @brief Method DrawProcedural, addr 0x659db88, size 0x40, virtual true, abstract: false, final true
  inline void DrawProcedural(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                             int32_t indexCount, int32_t instanceCount, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProcedural, addr 0x659db48, size 0x40, virtual true, abstract: false, final true
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount);

  /// @brief Method DrawProcedural, addr 0x659db0c, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);

  /// @brief Method DrawProcedural, addr 0x659dad0, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount,
                             ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x659dd78, size 0x40, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x659dd3c, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x659dcfc, size 0x40, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x659deec, size 0x40, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x659deb0, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x659de70, size 0x40, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer* indexBuffer, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass,
                                     ::UnityEngine::MeshTopology topology, ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x659dcbc, size 0x40, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x659dc80, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x659dc44, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawProceduralIndirect, addr 0x659de30, size 0x40, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs);

  /// @brief Method DrawProceduralIndirect, addr 0x659ddf4, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset);

  /// @brief Method DrawProceduralIndirect, addr 0x659ddb8, size 0x3c, virtual true, abstract: false, final true
  inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t shaderPass, ::UnityEngine::MeshTopology topology,
                                     ::UnityEngine::GraphicsBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawRenderer, addr 0x659da7c, size 0x1c, virtual true, abstract: false, final true
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material);

  /// @brief Method DrawRenderer, addr 0x659da64, size 0x18, virtual true, abstract: false, final true
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// @brief Method DrawRenderer, addr 0x659da4c, size 0x18, virtual true, abstract: false, final true
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method DrawRendererList, addr 0x659da98, size 0x38, virtual true, abstract: false, final true
  inline void DrawRendererList(::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method EnableKeyword, addr 0x659beb0, size 0x38, virtual false, abstract: false, final false
  inline void EnableKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x659be5c, size 0x1c, virtual false, abstract: false, final false
  inline void EnableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method EnableKeyword, addr 0x659be78, size 0x38, virtual false, abstract: false, final false
  inline void EnableKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method EnableScissorRect, addr 0x659bbe4, size 0x18, virtual true, abstract: false, final true
  inline void EnableScissorRect(::UnityEngine::Rect scissor);

  /// @brief Method EnableShaderKeyword, addr 0x659be44, size 0x18, virtual true, abstract: false, final true
  inline void EnableShaderKeyword(::StringW keyword);

  /// @brief Method EndSample, addr 0x659c17c, size 0x4, virtual true, abstract: false, final true
  inline void EndSample(::Unity::Profiling::ProfilerMarker marker);

  /// @brief Method EndSample, addr 0x659c138, size 0x18, virtual true, abstract: false, final true
  inline void EndSample(::StringW name);

  /// @brief Method EndSample, addr 0x659c164, size 0x14, virtual true, abstract: false, final true
  inline void EndSample(::UnityEngine::Profiling::CustomSampler* sampler);

  /// @brief Method IncrementUpdateCount, addr 0x659c180, size 0x3c, virtual true, abstract: false, final true
  inline void IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method InvokeOnRenderObjectCallbacks, addr 0x659c6f4, size 0x2c, virtual true, abstract: false, final true
  inline void InvokeOnRenderObjectCallbacks();

  /// @brief Method IssuePluginCustomBlit, addr 0x659e99c, size 0x90, virtual true, abstract: false, final true
  inline void IssuePluginCustomBlit(::System::IntPtr callback, uint32_t command, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest,
                                    uint32_t commandParam, uint32_t commandFlags);

  /// @brief Method IssuePluginCustomTextureUpdateV2, addr 0x659ea2c, size 0x58, virtual true, abstract: false, final true
  inline void IssuePluginCustomTextureUpdateV2(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, uint32_t userData);

  /// @brief Method IssuePluginEvent, addr 0x659e96c, size 0x18, virtual true, abstract: false, final true
  inline void IssuePluginEvent(::System::IntPtr callback, int32_t eventID);

  /// @brief Method IssuePluginEventAndData, addr 0x659e984, size 0x18, virtual true, abstract: false, final true
  inline void IssuePluginEventAndData(::System::IntPtr callback, int32_t eventID, ::System::IntPtr data);

  /// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0x659c0f0, size 0x18, virtual true, abstract: false, final true
  inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType, int32_t shaderPropertyID);

  static inline ::UnityEngine::Rendering::UnsafeCommandBuffer* New_ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass,
                                                                        bool isAsync);

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

  /// @brief Method SetBufferCounterValue, addr 0x659c660, size 0x14, virtual true, abstract: false, final true
  inline void SetBufferCounterValue(::UnityEngine::ComputeBuffer* buffer, uint32_t counterValue);

  /// @brief Method SetBufferCounterValue, addr 0x659c6a4, size 0x14, virtual true, abstract: false, final true
  inline void SetBufferCounterValue(::UnityEngine::GraphicsBuffer* buffer, uint32_t counterValue);

  /// @brief Method SetBufferData, addr 0x659c630, size 0x18, virtual true, abstract: false, final true
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data);

  /// @brief Method SetBufferData, addr 0x659c648, size 0x18, virtual true, abstract: false, final true
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline void SetBufferData(::UnityEngine::ComputeBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x659c674, size 0x18, virtual true, abstract: false, final true
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data);

  /// @brief Method SetBufferData, addr 0x659c68c, size 0x18, virtual true, abstract: false, final true
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Array* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::System::Collections::Generic::List_1<T>* data, int32_t managedBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data);

  /// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T>
  inline void SetBufferData(::UnityEngine::GraphicsBuffer* buffer, ::Unity::Collections::NativeArray_1<T> data, int32_t nativeBufferStartIndex, int32_t graphicsBufferStartIndex, int32_t count);

  /// @brief Method SetComputeBufferParam, addr 0x659cf38, size 0x54, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x659d00c, size 0x54, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x659cfa4, size 0x54, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetComputeBufferParam, addr 0x659cf24, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x659cff8, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetComputeBufferParam, addr 0x659cf8c, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetComputeConstantBufferParam, addr 0x659d074, size 0x5c, virtual true, abstract: false, final true
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x659d0e4, size 0x5c, virtual true, abstract: false, final true
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x659d060, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeConstantBufferParam, addr 0x659d0d0, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetComputeFloatParam, addr 0x659c720, size 0x4c, virtual true, abstract: false, final true
  inline void SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, float_t val);

  /// @brief Method SetComputeFloatParam, addr 0x659bb00, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, float_t val);

  /// @brief Method SetComputeFloatParams, addr 0x659c900, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetComputeFloatParams, addr 0x659c944, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeFloatParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetComputeIntParam, addr 0x659c76c, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, int32_t val);

  /// @brief Method SetComputeIntParam, addr 0x659bb18, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, int32_t val);

  /// @brief Method SetComputeIntParams, addr 0x659c958, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetComputeIntParams, addr 0x659c99c, size 0x14, virtual true, abstract: false, final true
  inline void SetComputeIntParams(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetComputeMatrixArrayParam, addr 0x659c8bc, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetComputeMatrixArrayParam, addr 0x659bb9c, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetComputeMatrixParam, addr 0x659c860, size 0x5c, virtual true, abstract: false, final true
  inline void SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetComputeMatrixParam, addr 0x659bb60, size 0x3c, virtual true, abstract: false, final true
  inline void SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetComputeTextureParam, addr 0x659c9b0, size 0xe8, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt);

  /// @brief Method SetComputeTextureParam, addr 0x659cb74, size 0xec, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x659cd40, size 0xf8, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeTextureParam, addr 0x659ca98, size 0xdc, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt);

  /// @brief Method SetComputeTextureParam, addr 0x659cc60, size 0xe0, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x659ce38, size 0xec, virtual true, abstract: false, final true
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeVectorArrayParam, addr 0x659c81c, size 0x44, virtual true, abstract: false, final true
  inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetComputeVectorArrayParam, addr 0x659bb48, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetComputeVectorParam, addr 0x659c7b0, size 0x6c, virtual true, abstract: false, final true
  inline void SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, ::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetComputeVectorParam, addr 0x659bb30, size 0x18, virtual true, abstract: false, final true
  inline void SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetFoveatedRenderingMode, addr 0x659c1d4, size 0x18, virtual true, abstract: false, final true
  inline void SetFoveatedRenderingMode(::UnityEngine::Rendering::FoveatedRenderingMode foveatedRenderingMode);

  /// @brief Method SetGlobalBuffer, addr 0x659e78c, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalBuffer(::StringW name, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x659e7dc, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalBuffer(::StringW name, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x659e7c8, size 0x14, virtual true, abstract: false, final true
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::ComputeBuffer* value);

  /// @brief Method SetGlobalBuffer, addr 0x659e818, size 0x14, virtual true, abstract: false, final true
  inline void SetGlobalBuffer(int32_t nameID, ::UnityEngine::GraphicsBuffer* value);

  /// @brief Method SetGlobalColor, addr 0x659e1f4, size 0x5c, virtual true, abstract: false, final true
  inline void SetGlobalColor(::StringW name, ::UnityEngine::Color value);

  /// @brief Method SetGlobalColor, addr 0x659bdf0, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalColor(int32_t nameID, ::UnityEngine::Color value);

  /// @brief Method SetGlobalConstantBuffer, addr 0x659e840, size 0x54, virtual true, abstract: false, final true
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x659e82c, size 0x14, virtual true, abstract: false, final true
  inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x659e8a8, size 0x54, virtual true, abstract: false, final true
  inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, ::StringW name, int32_t offset, int32_t size);

  /// @brief Method SetGlobalConstantBuffer, addr 0x659e894, size 0x14, virtual true, abstract: false, final true
  inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer* buffer, int32_t nameID, int32_t offset, int32_t size);

  /// @brief Method SetGlobalDepthBias, addr 0x659c078, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalDepthBias(float_t bias, float_t slopeBias);

  /// @brief Method SetGlobalFloat, addr 0x659e0e4, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalFloat(::StringW name, float_t value);

  /// @brief Method SetGlobalFloat, addr 0x659bd90, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalFloatArray, addr 0x659c090, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalFloatArray(int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x659e2d8, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalFloatArray(int32_t nameID, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalFloatArray, addr 0x659e2f0, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalFloatArray(::StringW propertyName, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetGlobalFloatArray, addr 0x659e29c, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalFloatArray(::StringW propertyName, ::System::Collections::Generic::List_1<float_t>* values);

  /// @brief Method SetGlobalInt, addr 0x659e120, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalInt(::StringW name, int32_t value);

  /// @brief Method SetGlobalInt, addr 0x659bda8, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalInt(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x659e15c, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalInteger(::StringW name, int32_t value);

  /// @brief Method SetGlobalInteger, addr 0x659bdc0, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalInteger(int32_t nameID, int32_t value);

  /// @brief Method SetGlobalMatrix, addr 0x659e250, size 0x4c, virtual true, abstract: false, final true
  inline void SetGlobalMatrix(::StringW name, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrix, addr 0x659be08, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalMatrix(int32_t nameID, ::UnityEngine::Matrix4x4 value);

  /// @brief Method SetGlobalMatrixArray, addr 0x659c0c0, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalMatrixArray(int32_t nameID, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x659e3f8, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalMatrixArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalMatrixArray, addr 0x659e410, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalMatrixArray(::StringW propertyName, ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetGlobalMatrixArray, addr 0x659e3bc, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalMatrixArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* values);

  /// @brief Method SetGlobalTexture, addr 0x659e44c, size 0xdc, virtual true, abstract: false, final true
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method SetGlobalTexture, addr 0x659e5e8, size 0xe0, virtual true, abstract: false, final true
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x659e528, size 0xc0, virtual true, abstract: false, final true
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method SetGlobalTexture, addr 0x659e6c8, size 0xc4, virtual true, abstract: false, final true
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalVector, addr 0x659e198, size 0x5c, virtual true, abstract: false, final true
  inline void SetGlobalVector(::StringW name, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector, addr 0x659bdd8, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVectorArray, addr 0x659c0a8, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalVectorArray(int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x659e368, size 0x18, virtual true, abstract: false, final true
  inline void SetGlobalVectorArray(int32_t nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetGlobalVectorArray, addr 0x659e380, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalVectorArray(::StringW propertyName, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetGlobalVectorArray, addr 0x659e32c, size 0x3c, virtual true, abstract: false, final true
  inline void SetGlobalVectorArray(::StringW propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>* values);

  /// @brief Method SetInstanceMultiplier, addr 0x659c1bc, size 0x18, virtual true, abstract: false, final true
  inline void SetInstanceMultiplier(uint32_t multiplier);

  /// @brief Method SetInvertCulling, addr 0x659bae4, size 0x1c, virtual true, abstract: false, final true
  inline void SetInvertCulling(bool invertCulling);

  /// @brief Method SetKeyword, addr 0x659bfec, size 0x3c, virtual false, abstract: false, final false
  inline void SetKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetKeyword, addr 0x659bf8c, size 0x24, virtual false, abstract: false, final false
  inline void SetKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method SetKeyword, addr 0x659bfb0, size 0x3c, virtual false, abstract: false, final false
  inline void SetKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetLateLatchProjectionMatrices, addr 0x659c0d8, size 0x18, virtual true, abstract: false, final true
  inline void SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> projectionMat);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x659d20c, size 0x54, virtual true, abstract: false, final true
  inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x659d260, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x659d1b4, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingAccelerationStructure, addr 0x659d1f8, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                                 ::UnityEngine::Rendering::RayTracingAccelerationStructure* rayTracingAccelerationStructure);

  /// @brief Method SetRayTracingBufferParam, addr 0x659d274, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x659d2cc, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x659d324, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetRayTracingBufferParam, addr 0x659d2b8, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x659d310, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRayTracingBufferParam, addr 0x659d368, size 0x18, virtual true, abstract: false, final true
  inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBufferHandle bufferHandle);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x659d394, size 0x5c, virtual true, abstract: false, final true
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x659d404, size 0x5c, virtual true, abstract: false, final true
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x659d380, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::ComputeBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingConstantBufferParam, addr 0x659d3f0, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::GraphicsBuffer* buffer, int32_t offset, int32_t size);

  /// @brief Method SetRayTracingFloatParam, addr 0x659d5f4, size 0x4c, virtual true, abstract: false, final true
  inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, float_t val);

  /// @brief Method SetRayTracingFloatParam, addr 0x659d640, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, float_t val);

  /// @brief Method SetRayTracingFloatParams, addr 0x659d654, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetRayTracingFloatParams, addr 0x659d698, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<float_t, ::Array<float_t>*> values);

  /// @brief Method SetRayTracingIntParam, addr 0x659d6ac, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, int32_t val);

  /// @brief Method SetRayTracingIntParam, addr 0x659d6f0, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, int32_t val);

  /// @brief Method SetRayTracingIntParams, addr 0x659d704, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetRayTracingIntParams, addr 0x659d748, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<int32_t, ::Array<int32_t>*> values);

  /// @brief Method SetRayTracingMatrixArrayParam, addr 0x659d8c8, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name,
                                            ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetRayTracingMatrixArrayParam, addr 0x659d90c, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID,
                                            ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> values);

  /// @brief Method SetRayTracingMatrixParam, addr 0x659d834, size 0x5c, virtual true, abstract: false, final true
  inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetRayTracingMatrixParam, addr 0x659d890, size 0x38, virtual true, abstract: false, final true
  inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Matrix4x4 val);

  /// @brief Method SetRayTracingTextureParam, addr 0x659d460, size 0xd0, virtual true, abstract: false, final true
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt);

  /// @brief Method SetRayTracingTextureParam, addr 0x659d530, size 0xc4, virtual true, abstract: false, final true
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rt);

  /// @brief Method SetRayTracingVectorArrayParam, addr 0x659d7dc, size 0x44, virtual true, abstract: false, final true
  inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetRayTracingVectorArrayParam, addr 0x659d820, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> values);

  /// @brief Method SetRayTracingVectorParam, addr 0x659d75c, size 0x6c, virtual true, abstract: false, final true
  inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Vector4 val);

  /// @brief Method SetRayTracingVectorParam, addr 0x659d7c8, size 0x14, virtual true, abstract: false, final true
  inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Vector4 val);

  /// @brief Method SetRenderTarget, addr 0x659c5f4, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding);

  /// @brief Method SetRenderTarget, addr 0x659c590, size 0x64, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x659c4c8, size 0x50, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                              ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x659c388, size 0x50, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth);

  /// @brief Method SetRenderTarget, addr 0x659c3d8, size 0x50, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x659c428, size 0x50, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method SetRenderTarget, addr 0x659c478, size 0x50, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                              int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x659c518, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                              ::UnityEngine::Rendering::RenderTargetIdentifier depth);

  /// @brief Method SetRenderTarget, addr 0x659c554, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colors,
                              ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x659c220, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRenderTarget, addr 0x659c298, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x659c25c, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction storeAction);

  /// @brief Method SetRenderTarget, addr 0x659c2d4, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x659c310, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method SetRenderTarget, addr 0x659c34c, size 0x3c, virtual true, abstract: false, final true
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetShadowSamplingMode, addr 0x659e8fc, size 0x5c, virtual true, abstract: false, final true
  inline void SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode mode);

  /// @brief Method SetSinglePassStereo, addr 0x659e958, size 0x14, virtual true, abstract: false, final true
  inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode mode);

  /// @brief Method SetViewProjectionMatrices, addr 0x659c028, size 0x50, virtual true, abstract: false, final true
  inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj);

  /// @brief Method SetViewport, addr 0x659bbcc, size 0x18, virtual true, abstract: false, final true
  inline void SetViewport(::UnityEngine::Rect pixelRect);

  /// @brief Method SetWireframe, addr 0x659c1ec, size 0x1c, virtual true, abstract: false, final true
  inline void SetWireframe(bool enable);

  /// @brief Method SetupCameraProperties, addr 0x659c6b8, size 0x3c, virtual true, abstract: false, final true
  inline void SetupCameraProperties(::UnityEngine::Camera* camera);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x659eb64, size 0x38, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x659eb10, size 0x1c, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0x659eb2c, size 0x38, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x659ead8, size 0x38, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x659ea84, size 0x1c, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0x659eaa0, size 0x38, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x659ebfc, size 0x3c, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::ComputeShader* computeShader, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x659eb9c, size 0x24, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::ByRef<::UnityEngine::Rendering::GlobalKeyword> keyword, bool value);

  /// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0x659ebc0, size 0x3c, virtual true, abstract: false, final true
  inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::Material* material, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method UnmarkLateLatchMatrix, addr 0x659c108, size 0x18, virtual true, abstract: false, final true
  inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType matrixPropertyType);

  /// @brief Method .ctor, addr 0x6597d44, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CommandBuffer* wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass* executingPass, bool isAsync);

  /// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
  constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IComputeCommandBuffer"
  constexpr ::UnityEngine::Rendering::IComputeCommandBuffer* i___UnityEngine__Rendering__IComputeCommandBuffer() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRasterCommandBuffer"
  constexpr ::UnityEngine::Rendering::IRasterCommandBuffer* i___UnityEngine__Rendering__IRasterCommandBuffer() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IUnsafeCommandBuffer"
  constexpr ::UnityEngine::Rendering::IUnsafeCommandBuffer* i___UnityEngine__Rendering__IUnsafeCommandBuffer() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeCommandBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeCommandBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeCommandBuffer(UnsafeCommandBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeCommandBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeCommandBuffer(UnsafeCommandBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11853 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UnsafeCommandBuffer, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::UnsafeCommandBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UnsafeCommandBuffer*, "UnityEngine.Rendering", "UnsafeCommandBuffer");
