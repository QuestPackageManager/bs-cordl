#pragma once
// IWYU pragma private; include "UnityEngine/Graphics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Graphics)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct OpenGLESVersion;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class LightProbeProxyVolume;
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
struct Quaternion;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderInstancedDataLayout;
}
namespace UnityEngine {
struct RenderTargetSetup;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Graphics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Graphics);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Graphics
class CORDL_TYPE Graphics : public ::System::Object {
public:
  // Declarations
  /// @brief Field kMaxDrawMeshInstanceCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kMaxDrawMeshInstanceCount, put = setStaticF_kMaxDrawMeshInstanceCount)) int32_t kMaxDrawMeshInstanceCount;

  /// @brief Field s_RenderInstancedDataLayouts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_RenderInstancedDataLayouts,
                      put = setStaticF_s_RenderInstancedDataLayouts)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::RenderInstancedDataLayout>* s_RenderInstancedDataLayouts;

  /// @brief Method Blit, addr 0x68bb5d8, size 0x68, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest);

  /// @brief Method Blit, addr 0x68bb75c, size 0x74, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat);

  /// @brief Method Blit, addr 0x68bb6d8, size 0x84, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, int32_t pass);

  /// @brief Method Blit, addr 0x68bb640, size 0x98, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset);

  /// @brief Method Blit2, addr 0x68b9d28, size 0xe8, virtual false, abstract: false, final false
  static inline void Blit2(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest);

  /// @brief Method Blit2_Injected, addr 0x68b9e10, size 0x44, virtual false, abstract: false, final false
  static inline void Blit2_Injected(::System::IntPtr source, ::System::IntPtr dest);

  /// @brief Method Blit4, addr 0x68b9e54, size 0x104, virtual false, abstract: false, final false
  static inline void Blit4(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset);

  /// @brief Method Blit4_Injected, addr 0x68b9f58, size 0x5c, virtual false, abstract: false, final false
  static inline void Blit4_Injected(::System::IntPtr source, ::System::IntPtr dest, ::ByRef<::UnityEngine::Vector2> scale, ::ByRef<::UnityEngine::Vector2> offset);

  /// @brief Method CheckLoadActionValid, addr 0x68ba0a8, size 0xa4, virtual false, abstract: false, final false
  static inline void CheckLoadActionValid(::UnityEngine::Rendering::RenderBufferLoadAction load, ::StringW bufferType);

  /// @brief Method CheckStoreActionValid, addr 0x68ba14c, size 0xa8, virtual false, abstract: false, final false
  static inline void CheckStoreActionValid(::UnityEngine::Rendering::RenderBufferStoreAction store, ::StringW bufferType);

  /// @brief Method ClearRandomWriteTargets, addr 0x68b8d38, size 0x28, virtual false, abstract: false, final false
  static inline void ClearRandomWriteTargets();

  /// @brief Method CopyTexture, addr 0x68ba774, size 0x98, virtual false, abstract: false, final false
  static inline void CopyTexture(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyTexture, addr 0x68ba80c, size 0x124, virtual false, abstract: false, final false
  static inline void CopyTexture(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::UnityEngine::Texture* dst,
                                 int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyTexture_Region, addr 0x68b8ed4, size 0x138, virtual false, abstract: false, final false
  static inline void CopyTexture_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::UnityEngine::Texture* dst,
                                        int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyTexture_Region_Injected, addr 0x68b900c, size 0xc0, virtual false, abstract: false, final false
  static inline void CopyTexture_Region_Injected(::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::System::IntPtr dst,
                                                 int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyTexture_Slice, addr 0x68b8d60, size 0x100, virtual false, abstract: false, final false
  static inline void CopyTexture_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyTexture_Slice_Injected, addr 0x68b8e60, size 0x74, virtual false, abstract: false, final false
  static inline void CopyTexture_Slice_Injected(::System::IntPtr src, int32_t srcElement, int32_t srcMip, ::System::IntPtr dst, int32_t dstElement, int32_t dstMip);

  /// @brief Method DrawMesh, addr 0x68bb928, size 0xd4, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer, ::UnityEngine::Camera* camera, int32_t submeshIndex,
                              ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMesh, addr 0x68bab54, size 0x1a0, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer, ::UnityEngine::Camera* camera, int32_t submeshIndex,
                              ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, ::UnityEngine::Transform* probeAnchor,
                              ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method DrawMesh, addr 0x68baa50, size 0x104, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer, ::UnityEngine::Camera* camera, int32_t submeshIndex,
                              ::UnityEngine::MaterialPropertyBlock* properties, bool castShadows, bool receiveShadows, bool useLightProbes);

  /// @brief Method DrawMesh, addr 0x68bb7d0, size 0x158, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Material* material, int32_t layer,
                              ::UnityEngine::Camera* camera);

  /// @brief Method DrawMeshInstanced, addr 0x68bb9fc, size 0xd4, virtual false, abstract: false, final false
  static inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material,
                                       ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties,
                                       ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer);

  /// @brief Method DrawMeshInstanced, addr 0x68bbad0, size 0xd8, virtual false, abstract: false, final false
  static inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material,
                                       ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties,
                                       ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera);

  /// @brief Method DrawMeshInstanced, addr 0x68bacf4, size 0x434, virtual false, abstract: false, final false
  static inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material,
                                       ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties,
                                       ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                       ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x68bbba8, size 0xf4, virtual false, abstract: false, final false
  static inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds,
                                               ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties,
                                               ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                               ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x68bb1d0, size 0x378, virtual false, abstract: false, final false
  static inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds,
                                               ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties,
                                               ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                               ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method DrawMeshNow, addr 0x68ba930, size 0x120, virtual false, abstract: false, final false
  static inline void DrawMeshNow(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, int32_t materialIndex);

  /// @brief Method DrawProceduralNow, addr 0x68bb548, size 0x90, virtual false, abstract: false, final false
  static inline void DrawProceduralNow(::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);

  /// @brief Method ExecuteCommandBuffer, addr 0x68b9fb4, size 0xb8, virtual false, abstract: false, final false
  static inline void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method ExecuteCommandBuffer_Injected, addr 0x68ba06c, size 0x3c, virtual false, abstract: false, final false
  static inline void ExecuteCommandBuffer_Injected(::System::IntPtr buffer);

  /// @brief Method GetMinOpenGLESVersion, addr 0x68b8870, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::OpenGLESVersion GetMinOpenGLESVersion();

  /// @brief Method GetPreserveFramebufferAlpha, addr 0x68b87dc, size 0x28, virtual false, abstract: false, final false
  static inline bool GetPreserveFramebufferAlpha();

  /// @brief Method Internal_BlitMaterial5, addr 0x68b9b60, size 0x15c, virtual false, abstract: false, final false
  static inline void Internal_BlitMaterial5(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, int32_t pass, bool setRT);

  /// @brief Method Internal_BlitMaterial5_Injected, addr 0x68b9cbc, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_BlitMaterial5_Injected(::System::IntPtr source, ::System::IntPtr dest, ::System::IntPtr mat, int32_t pass, bool setRT);

  /// @brief Method Internal_DrawMesh, addr 0x68b9204, size 0x200, virtual false, abstract: false, final false
  static inline void Internal_DrawMesh(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer,
                                       ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows,
                                       ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method Internal_DrawMeshInstanced, addr 0x68b94c8, size 0x294, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material,
                                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties,
                                                ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                                ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method Internal_DrawMeshInstancedIndirect, addr 0x68b9820, size 0x228, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds,
                                                        ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties,
                                                        ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                                        ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method Internal_DrawMeshInstancedIndirect_Injected, addr 0x68b9a48, size 0xc4, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedIndirect_Injected(::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, ::ByRef<::UnityEngine::Bounds> bounds,
                                                                 ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties,
                                                                 ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::System::IntPtr camera,
                                                                 ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::System::IntPtr lightProbeProxyVolume);

  /// @brief Method Internal_DrawMeshInstanced_Injected, addr 0x68b975c, size 0xc4, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstanced_Injected(::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> matrices,
                                                         int32_t count, ::System::IntPtr properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer,
                                                         ::System::IntPtr camera, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::System::IntPtr lightProbeProxyVolume);

  /// @brief Method Internal_DrawMeshNow2, addr 0x68b90cc, size 0xe4, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshNow2(::UnityEngine::Mesh* mesh, int32_t subsetIndex, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method Internal_DrawMeshNow2_Injected, addr 0x68b91b0, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshNow2_Injected(::System::IntPtr mesh, int32_t subsetIndex, ::ByRef<::UnityEngine::Matrix4x4> matrix);

  /// @brief Method Internal_DrawMesh_Injected, addr 0x68b9404, size 0xc4, virtual false, abstract: false, final false
  static inline void Internal_DrawMesh_Injected(::System::IntPtr mesh, int32_t submeshIndex, ::ByRef<::UnityEngine::Matrix4x4> matrix, ::System::IntPtr material, int32_t layer,
                                                ::System::IntPtr camera, ::System::IntPtr properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows,
                                                ::System::IntPtr probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::System::IntPtr lightProbeProxyVolume);

  /// @brief Method Internal_DrawProceduralNow, addr 0x68b9b0c, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralNow(::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);

  /// @brief Method Internal_GetMaxDrawMeshInstanceCount, addr 0x68b8750, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Internal_GetMaxDrawMeshInstanceCount();

  /// @brief Method Internal_SetMRTFullSetup, addr 0x68b8a44, size 0x258, virtual false, abstract: false, final false
  static inline void Internal_SetMRTFullSetup(::ArrayW<::UnityEngine::RenderBuffer, ::Array<::UnityEngine::RenderBuffer>*> color, ::UnityEngine::RenderBuffer depth, int32_t mip,
                                              ::UnityEngine::CubemapFace face, int32_t depthSlice,
                                              ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction, ::Array<::UnityEngine::Rendering::RenderBufferLoadAction>*> colorLA,
                                              ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction, ::Array<::UnityEngine::Rendering::RenderBufferStoreAction>*> colorSA,
                                              ::UnityEngine::Rendering::RenderBufferLoadAction depthLA, ::UnityEngine::Rendering::RenderBufferStoreAction depthSA);

  /// @brief Method Internal_SetMRTFullSetup_Injected, addr 0x68b8c9c, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_SetMRTFullSetup_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> color, ::ByRef<::UnityEngine::RenderBuffer> depth, int32_t mip,
                                                       ::UnityEngine::CubemapFace face, int32_t depthSlice, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colorLA,
                                                       ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction depthLA,
                                                       ::UnityEngine::Rendering::RenderBufferStoreAction depthSA);

  /// @brief Method Internal_SetNullRT, addr 0x68b8904, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_SetNullRT();

  /// @brief Method Internal_SetRTSimple, addr 0x68b892c, size 0xac, virtual false, abstract: false, final false
  static inline void Internal_SetRTSimple(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth, int32_t mip, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method Internal_SetRTSimple_Injected, addr 0x68b89d8, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetRTSimple_Injected(::ByRef<::UnityEngine::RenderBuffer> color, ::ByRef<::UnityEngine::RenderBuffer> depth, int32_t mip, ::UnityEngine::CubemapFace face,
                                                   int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x68bbc9c, size 0x64, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt);

  /// @brief Method SetRenderTarget, addr 0x68bbd00, size 0x70, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt, int32_t mipLevel);

  /// @brief Method SetRenderTarget, addr 0x68bbd70, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt, int32_t mipLevel, ::UnityEngine::CubemapFace face);

  /// @brief Method SetRenderTarget, addr 0x68ba680, size 0x80, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x68ba700, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTargetSetup setup);

  /// @brief Method SetRenderTargetImpl, addr 0x68ba4b0, size 0xa0, virtual false, abstract: false, final false
  static inline void SetRenderTargetImpl(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method SetRenderTargetImpl, addr 0x68ba550, size 0x130, virtual false, abstract: false, final false
  static inline void SetRenderTargetImpl(::UnityEngine::RenderTexture* rt, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method SetRenderTargetImpl, addr 0x68ba1f4, size 0x2bc, virtual false, abstract: false, final false
  static inline void SetRenderTargetImpl(::UnityEngine::RenderTargetSetup setup);

  static inline int32_t getStaticF_kMaxDrawMeshInstanceCount();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::RenderInstancedDataLayout>* getStaticF_s_RenderInstancedDataLayouts();

  /// @brief Method get_activeTier, addr 0x68b8778, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsTier get_activeTier();

  /// @brief Method get_minOpenGLESVersion, addr 0x68b8898, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::OpenGLESVersion get_minOpenGLESVersion();

  /// @brief Method get_preserveFramebufferAlpha, addr 0x68b8804, size 0x6c, virtual false, abstract: false, final false
  static inline bool get_preserveFramebufferAlpha();

  static inline void setStaticF_kMaxDrawMeshInstanceCount(int32_t value);

  static inline void setStaticF_s_RenderInstancedDataLayouts(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::RenderInstancedDataLayout>* value);

  /// @brief Method set_activeTier, addr 0x68b87a0, size 0x3c, virtual false, abstract: false, final false
  static inline void set_activeTier(::UnityEngine::Rendering::GraphicsTier value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Graphics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Graphics(Graphics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Graphics(Graphics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Graphics, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Graphics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Graphics*, "UnityEngine", "Graphics");
