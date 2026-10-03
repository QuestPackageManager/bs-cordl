#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IUnsafeCommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IUnsafeCommandBuffer)
namespace System {
template <typename T> class Action_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
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
class GraphicsBuffer;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IUnsafeCommandBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::IUnsafeCommandBuffer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::IUnsafeCommandBuffer*, "UnityEngine.Rendering", "IUnsafeCommandBuffer");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IUnsafeCommandBuffer
class CORDL_TYPE IUnsafeCommandBuffer {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IComputeCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IComputeCommandBuffer*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRasterCommandBuffer"
  constexpr operator ::UnityEngine::Rendering::IRasterCommandBuffer*() noexcept;

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method ClearRandomWriteTargets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ClearRandomWriteTargets();

  /// @brief Method CopyTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, ::UnityEngine::Rendering::RenderTargetIdentifier dst);

  /// @brief Method CopyTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement);

  /// @brief Method CopyTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement,
                          int32_t dstMip);

  /// @brief Method CopyTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                          ::UnityEngine::Rendering::RenderTargetIdentifier dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method GenerateMips, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GenerateMips(::UnityEngine::RenderTexture* rt);

  /// @brief Method GenerateMips, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void GenerateMips(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::ComputeBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::ComputeBuffer* src, int32_t size, int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::GraphicsBuffer* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                   ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::TextureFormat dstFormat,
                                   ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                   ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth,
                                   ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RequestAsyncReadback(::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y, int32_t height, int32_t z, int32_t depth, ::UnityEngine::TextureFormat dstFormat,
                                   ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::ComputeBuffer* src, int32_t size, int32_t offset,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::GraphicsBuffer* src, int32_t size, int32_t offset,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex,
                                                  ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, ::UnityEngine::TextureFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T>
    requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
  inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>> output, ::UnityEngine::Texture* src, int32_t mipIndex, int32_t x, int32_t width, int32_t y,
                                                  int32_t height, int32_t z, int32_t depth, ::UnityEngine::TextureFormat dstFormat,
                                                  ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* callback);

  /// @brief Method SetComputeTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetComputeTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetComputeTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetComputeTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetComputeTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, int32_t kernelIndex, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel,
                                     ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetRandomWriteTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SetRandomWriteTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::ComputeBuffer* buffer, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetRandomWriteTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::GraphicsBuffer* buffer, bool preserveCounterValue);

  /// @brief Method SetRandomWriteTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRandomWriteTarget(int32_t index, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRayTracingTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, ::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRayTracingTextureParam, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader* rayTracingShader, int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding binding, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth,
                              ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace,
                              int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth, int32_t mipLevel,
                              ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                              ::UnityEngine::Rendering::RenderBufferStoreAction storeAction);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method SetRenderTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt, int32_t mipLevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
  constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IComputeCommandBuffer"
  constexpr ::UnityEngine::Rendering::IComputeCommandBuffer* i___UnityEngine__Rendering__IComputeCommandBuffer() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRasterCommandBuffer"
  constexpr ::UnityEngine::Rendering::IRasterCommandBuffer* i___UnityEngine__Rendering__IRasterCommandBuffer() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IUnsafeCommandBuffer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUnsafeCommandBuffer(IUnsafeCommandBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8741 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
