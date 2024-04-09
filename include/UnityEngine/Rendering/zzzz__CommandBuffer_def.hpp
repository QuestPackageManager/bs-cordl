#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuffer)
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct CommandBufferExecutionFlags;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine {
struct FilterMode;
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
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBuffer);
// Type: UnityEngine.Rendering::CommandBuffer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CommandBuffer*
class CORDL_TYPE CommandBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) void* m_Ptr;

  __declspec(property(put = set_name))::StringW name;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Blit, addr 0x3220648, size 0x8c, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest);

  /// @brief Method Blit, addr 0x32206d4, size 0x90, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat);

  /// @brief Method Blit, addr 0x3220764, size 0x9c, virtual false, abstract: false, final false
  inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat, int32_t pass);

  /// @brief Method Blit_Identifier, addr 0x321f220, size 0xa0, virtual false, abstract: false, final false
  inline void Blit_Identifier(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat, int32_t pass,
                              ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Blit_Identifier_Injected, addr 0x321f2c0, size 0x9c, virtual false, abstract: false, final false
  inline void Blit_Identifier_Injected(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> source, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dest, ::UnityEngine::Material* mat,
                                       int32_t pass, ByRef<::UnityEngine::Vector2> scale, ByRef<::UnityEngine::Vector2> offset, int32_t sourceDepthSlice, int32_t destDepthSlice);

  /// @brief Method Clear, addr 0x321ef1c, size 0x3c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CopyTexture, addr 0x32205b4, size 0x94, virtual false, abstract: false, final false
  inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, ::UnityEngine::Rendering::RenderTargetIdentifier dst);

  /// @brief Method CopyTexture_Internal, addr 0x321f158, size 0xc8, virtual false, abstract: false, final false
  inline void CopyTexture_Internal(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight,
                                   ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY, int32_t mode);

  /// @brief Method Dispose, addr 0x321fc2c, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x321fbb4, size 0x78, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawMesh, addr 0x321ffc0, size 0x38, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material);

  /// @brief Method DrawMesh, addr 0x321ff8c, size 0x34, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex);

  /// @brief Method DrawMesh, addr 0x321ff5c, size 0x30, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method DrawMesh, addr 0x321fcd8, size 0x284, virtual false, abstract: false, final false
  inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                       ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMeshInstanced, addr 0x322020c, size 0x3a8, virtual false, abstract: false, final false
  inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawRenderer, addr 0x321fff8, size 0x214, virtual false, abstract: false, final false
  inline void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  /// @brief Method Finalize, addr 0x321fb1c, size 0x98, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method GetTemporaryRT, addr 0x321f568, size 0xa0, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat format);

  /// @brief Method GetTemporaryRT, addr 0x321f4c4, size 0xa4, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                             int32_t antiAliasing);

  /// @brief Method GetTemporaryRT, addr 0x321f418, size 0xac, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                             int32_t antiAliasing, bool enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode);

  /// @brief Method GetTemporaryRT, addr 0x321f35c, size 0xbc, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                             int32_t antiAliasing, bool enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode, bool useDynamicScale);

  /// @brief Method GetTemporaryRT, addr 0x321f608, size 0xec, virtual false, abstract: false, final false
  inline void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format);

  /// @brief Method InitBuffer, addr 0x321ee74, size 0x28, virtual false, abstract: false, final false
  static inline void* InitBuffer();

  /// @brief Method Internal_DrawMesh, addr 0x321ef58, size 0x84, virtual false, abstract: false, final false
  inline void Internal_DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                                ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMeshInstanced, addr 0x321f0cc, size 0x8c, virtual false, abstract: false, final false
  inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, int32_t shaderPass,
                                         ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawMesh_Injected, addr 0x321efdc, size 0x84, virtual false, abstract: false, final false
  inline void Internal_DrawMesh_Injected(::UnityEngine::Mesh* mesh, ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass,
                                         ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method Internal_DrawRenderer, addr 0x321f060, size 0x6c, virtual false, abstract: false, final false
  inline void Internal_DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, int32_t submeshIndex, int32_t shaderPass);

  static inline ::UnityEngine::Rendering::CommandBuffer* New_ctor();

  /// @brief Method ReleaseBuffer, addr 0x321ee9c, size 0x3c, virtual false, abstract: false, final false
  inline void ReleaseBuffer();

  /// @brief Method ReleaseTemporaryRT, addr 0x321f6f4, size 0x44, virtual false, abstract: false, final false
  inline void ReleaseTemporaryRT(int32_t nameID);

  /// @brief Method SetGlobalFloat, addr 0x321f738, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalFloat(int32_t nameID, float_t value);

  /// @brief Method SetGlobalTexture, addr 0x3220800, size 0x78, virtual false, abstract: false, final false
  inline void SetGlobalTexture(::StringW name, ::UnityEngine::Rendering::RenderTargetIdentifier value);

  /// @brief Method SetGlobalTexture, addr 0x3220878, size 0x5c, virtual false, abstract: false, final false
  inline void SetGlobalTexture(int32_t nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalTexture_Impl, addr 0x321f938, size 0x5c, virtual false, abstract: false, final false
  inline void SetGlobalTexture_Impl(int32_t nameID, ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, ::UnityEngine::Rendering::RenderTextureSubElement element);

  /// @brief Method SetGlobalVector, addr 0x321f78c, size 0x5c, virtual false, abstract: false, final false
  inline void SetGlobalVector(int32_t nameID, ::UnityEngine::Vector4 value);

  /// @brief Method SetGlobalVector_Injected, addr 0x321f7e8, size 0x54, virtual false, abstract: false, final false
  inline void SetGlobalVector_Injected(int32_t nameID, ByRef<::UnityEngine::Vector4> value);

  /// @brief Method SetRenderTarget, addr 0x321f994, size 0xa0, virtual false, abstract: false, final false
  inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt);

  /// @brief Method SetRenderTargetSingle_Internal, addr 0x321fa34, size 0x74, virtual false, abstract: false, final false
  inline void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                             ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                             ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetRenderTargetSingle_Internal_Injected, addr 0x321faa8, size 0x74, virtual false, abstract: false, final false
  inline void SetRenderTargetSingle_Internal_Injected(ByRef<::UnityEngine::Rendering::RenderTargetIdentifier> rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                                      ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                                      ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction);

  /// @brief Method SetViewProjectionMatrices, addr 0x321f83c, size 0x54, virtual false, abstract: false, final false
  inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj);

  /// @brief Method SetViewProjectionMatrices_Injected, addr 0x321f890, size 0x54, virtual false, abstract: false, final false
  inline void SetViewProjectionMatrices_Injected(ByRef<::UnityEngine::Matrix4x4> view, ByRef<::UnityEngine::Matrix4x4> proj);

  /// @brief Method ValidateAgainstExecutionFlags, addr 0x321f8e4, size 0x54, virtual false, abstract: false, final false
  inline bool ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags);

  constexpr void* const& __cordl_internal_get_m_Ptr() const;

  constexpr void*& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(void* value);

  /// @brief Method .ctor, addr 0x321fc90, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_name, addr 0x321eed8, size 0x44, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

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

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBuffer, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CommandBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CommandBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
