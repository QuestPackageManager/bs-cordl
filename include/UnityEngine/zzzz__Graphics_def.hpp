#pragma once
// IWYU pragma private; include "UnityEngine/Graphics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::Graphics*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Graphics*, "UnityEngine", "Graphics");
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// [NativeHeader("Runtime/Graphics/CopyTexture.h")]
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [NativeHeader("Runtime/Misc/PlayerSettings.h")]
// [NativeHeader("Runtime/Graphics/ColorGamut.h")]
// [NativeHeader("Runtime/Camera/LightProbeProxyVolume.h")]
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

  /// @brief Method Blit, addr 0x6f18224, size 0x68, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest);

  /// @brief Method Blit, addr 0x6f183a8, size 0x74, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat);

  /// @brief Method Blit, addr 0x6f18324, size 0x84, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, /* [DefaultValue("-1")] */ int32_t pass);

  /// @brief Method Blit, addr 0x6f1828c, size 0x98, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset);

  /// [FreeFunction("GraphicsScripting::Blit")]
  /// @brief Method Blit2, addr 0x6f16ae8, size 0xe8, virtual false, abstract: false, final false
  static inline void Blit2(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest);

  /// @brief Method Blit2_Injected, addr 0x6f16bd0, size 0x44, virtual false, abstract: false, final false
  static inline void Blit2_Injected(::System::IntPtr source, ::System::IntPtr dest);

  /// [FreeFunction("GraphicsScripting::Blit")]
  /// @brief Method Blit4, addr 0x6f16c14, size 0x104, virtual false, abstract: false, final false
  static inline void Blit4(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset);

  /// @brief Method Blit4_Injected, addr 0x6f16d18, size 0x5c, virtual false, abstract: false, final false
  static inline void Blit4_Injected(::System::IntPtr source, ::System::IntPtr dest, ::by_ref<::UnityEngine::Vector2 const> scale, ::by_ref<::UnityEngine::Vector2 const> offset);

  /// @brief Method CheckLoadActionValid, addr 0x6f16e68, size 0x6c, virtual false, abstract: false, final false
  static inline void CheckLoadActionValid(::UnityEngine::Rendering::RenderBufferLoadAction load, ::StringW bufferType);

  /// @brief Method CheckStoreActionValid, addr 0x6f16ed4, size 0x70, virtual false, abstract: false, final false
  static inline void CheckStoreActionValid(::UnityEngine::Rendering::RenderBufferStoreAction store, ::StringW bufferType);

  /// [StaticAccessor("GetGfxDevice()", (UnityEngine.Bindings.StaticAccessorType)0)]
  /// @brief Method ClearRandomWriteTargets, addr 0x6f15af8, size 0x28, virtual false, abstract: false, final false
  static inline void ClearRandomWriteTargets();

  /// @brief Method CopyTexture, addr 0x6f174c4, size 0x98, virtual false, abstract: false, final false
  static inline void CopyTexture(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyTexture, addr 0x6f1755c, size 0x124, virtual false, abstract: false, final false
  static inline void CopyTexture(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::UnityEngine::Texture* dst,
                                 int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// [FreeFunction("CopyTextureRegion")]
  /// @brief Method CopyTexture_Region, addr 0x6f15c94, size 0x138, virtual false, abstract: false, final false
  static inline void CopyTexture_Region(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::UnityEngine::Texture* dst,
                                        int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// @brief Method CopyTexture_Region_Injected, addr 0x6f15dcc, size 0xc0, virtual false, abstract: false, final false
  static inline void CopyTexture_Region_Injected(::System::IntPtr src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ::System::IntPtr dst,
                                                 int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY);

  /// [FreeFunction("CopyTexture")]
  /// @brief Method CopyTexture_Slice, addr 0x6f15b20, size 0x100, virtual false, abstract: false, final false
  static inline void CopyTexture_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip);

  /// @brief Method CopyTexture_Slice_Injected, addr 0x6f15c20, size 0x74, virtual false, abstract: false, final false
  static inline void CopyTexture_Slice_Injected(::System::IntPtr src, int32_t srcElement, int32_t srcMip, ::System::IntPtr dst, int32_t dstElement, int32_t dstMip);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMesh, addr 0x6f185ac, size 0xd4, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer, ::UnityEngine::Camera* camera, int32_t submeshIndex,
                              ::UnityEngine::MaterialPropertyBlock* properties);

  /// @brief Method DrawMesh, addr 0x6f177a0, size 0x1a0, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer, ::UnityEngine::Camera* camera, int32_t submeshIndex,
                              ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, ::UnityEngine::Transform* probeAnchor,
                              ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMesh, addr 0x6f1841c, size 0x190, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Material* material, int32_t layer,
                              ::UnityEngine::Camera* camera);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMeshInstanced, addr 0x6f18680, size 0xd4, virtual false, abstract: false, final false
  static inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, ::ArrayW<::UnityEngine::Matrix4x4> matrices, int32_t count,
                                       ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMeshInstanced, addr 0x6f18754, size 0xd8, virtual false, abstract: false, final false
  static inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, ::ArrayW<::UnityEngine::Matrix4x4> matrices, int32_t count,
                                       ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer,
                                       ::UnityEngine::Camera* camera);

  /// @brief Method DrawMeshInstanced, addr 0x6f17940, size 0x434, virtual false, abstract: false, final false
  static inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, ::ArrayW<::UnityEngine::Matrix4x4> matrices,
                                       /* [DefaultValue("matrices.Length")] */ int32_t count, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock* properties,
                                       /* [DefaultValue("ShadowCastingMode.On")] */ ::UnityEngine::Rendering::ShadowCastingMode castShadows, /* [DefaultValue("true")] */ bool receiveShadows,
                                       /* [DefaultValue("0")] */ int32_t layer, /* [DefaultValue("null")] */ ::UnityEngine::Camera* camera,
                                       /* [DefaultValue("LightProbeUsage.BlendProbes")] */ ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage,
                                       /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// [ExcludeFromDocs]
  /// @brief Method DrawMeshInstancedIndirect, addr 0x6f1882c, size 0xf4, virtual false, abstract: false, final false
  static inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds,
                                               ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset, ::UnityEngine::MaterialPropertyBlock* properties,
                                               ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                               ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage);

  /// @brief Method DrawMeshInstancedIndirect, addr 0x6f17e1c, size 0x378, virtual false, abstract: false, final false
  static inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material, ::UnityEngine::Bounds bounds,
                                               ::UnityEngine::ComputeBuffer* bufferWithArgs, /* [DefaultValue("0")] */ int32_t argsOffset,
                                               /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock* properties,
                                               /* [DefaultValue("ShadowCastingMode.On")] */ ::UnityEngine::Rendering::ShadowCastingMode castShadows, /* [DefaultValue("true")] */ bool receiveShadows,
                                               /* [DefaultValue("0")] */ int32_t layer, /* [DefaultValue("null")] */ ::UnityEngine::Camera* camera,
                                               /* [DefaultValue("LightProbeUsage.BlendProbes")] */ ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage,
                                               /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method DrawMeshNow, addr 0x6f17680, size 0x120, virtual false, abstract: false, final false
  static inline void DrawMeshNow(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, int32_t materialIndex);

  /// @brief Method DrawProceduralNow, addr 0x6f18194, size 0x90, virtual false, abstract: false, final false
  static inline void DrawProceduralNow(::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);

  /// [NativeMethod(Name = "GraphicsScripting::ExecuteCommandBuffer", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method ExecuteCommandBuffer, addr 0x6f16d74, size 0xb8, virtual false, abstract: false, final false
  static inline void ExecuteCommandBuffer(/* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method ExecuteCommandBuffer_Injected, addr 0x6f16e2c, size 0x3c, virtual false, abstract: false, final false
  static inline void ExecuteCommandBuffer_Injected(::System::IntPtr buffer);

  /// [NativeMethod(Name = "GetMinOpenGLESVersion")]
  /// [StaticAccessor("GetPlayerSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
  /// @brief Method GetMinOpenGLESVersion, addr 0x6f15630, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::OpenGLESVersion GetMinOpenGLESVersion();

  /// [StaticAccessor("GetPlayerSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
  /// [NativeMethod(Name = "GetPreserveFramebufferAlpha")]
  /// @brief Method GetPreserveFramebufferAlpha, addr 0x6f1559c, size 0x28, virtual false, abstract: false, final false
  static inline bool GetPreserveFramebufferAlpha();

  /// [FreeFunction("GraphicsScripting::BlitMaterial")]
  /// @brief Method Internal_BlitMaterial5, addr 0x6f16920, size 0x15c, virtual false, abstract: false, final false
  static inline void Internal_BlitMaterial5(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, /* [NotNull] */ ::UnityEngine::Material* mat, int32_t pass, bool setRT);

  /// @brief Method Internal_BlitMaterial5_Injected, addr 0x6f16a7c, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_BlitMaterial5_Injected(::System::IntPtr source, ::System::IntPtr dest, ::System::IntPtr mat, int32_t pass, bool setRT);

  /// [FreeFunction("GraphicsScripting::DrawMesh")]
  /// @brief Method Internal_DrawMesh, addr 0x6f15fc4, size 0x200, virtual false, abstract: false, final false
  static inline void Internal_DrawMesh(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer,
                                       ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows,
                                       ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// [FreeFunction("GraphicsScripting::DrawMeshInstanced")]
  /// @brief Method Internal_DrawMeshInstanced, addr 0x6f16288, size 0x294, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstanced(/* [NotNull] */ ::UnityEngine::Mesh* mesh, int32_t submeshIndex, /* [NotNull] */ ::UnityEngine::Material* material,
                                                ::ArrayW<::UnityEngine::Matrix4x4> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties,
                                                ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                                ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// [FreeFunction("GraphicsScripting::DrawMeshInstancedIndirect")]
  /// @brief Method Internal_DrawMeshInstancedIndirect, addr 0x6f165e0, size 0x228, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedIndirect(/* [NotNull] */ ::UnityEngine::Mesh* mesh, int32_t submeshIndex, /* [NotNull] */ ::UnityEngine::Material* material,
                                                        ::UnityEngine::Bounds bounds, ::UnityEngine::ComputeBuffer* bufferWithArgs, int32_t argsOffset,
                                                        ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer,
                                                        ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage,
                                                        ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method Internal_DrawMeshInstancedIndirect_Injected, addr 0x6f16808, size 0xc4, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstancedIndirect_Injected(::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, ::by_ref<::UnityEngine::Bounds const> bounds,
                                                                 ::System::IntPtr bufferWithArgs, int32_t argsOffset, ::System::IntPtr properties,
                                                                 ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::System::IntPtr camera,
                                                                 ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::System::IntPtr lightProbeProxyVolume);

  /// @brief Method Internal_DrawMeshInstanced_Injected, addr 0x6f1651c, size 0xc4, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstanced_Injected(::System::IntPtr mesh, int32_t submeshIndex, ::System::IntPtr material, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> matrices,
                                                         int32_t count, ::System::IntPtr properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer,
                                                         ::System::IntPtr camera, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::System::IntPtr lightProbeProxyVolume);

  /// [FreeFunction("GraphicsScripting::DrawMeshNow")]
  /// @brief Method Internal_DrawMeshNow2, addr 0x6f15e8c, size 0xe4, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshNow2(/* [NotNull] */ ::UnityEngine::Mesh* mesh, int32_t subsetIndex, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method Internal_DrawMeshNow2_Injected, addr 0x6f15f70, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshNow2_Injected(::System::IntPtr mesh, int32_t subsetIndex, ::by_ref<::UnityEngine::Matrix4x4 const> matrix);

  /// @brief Method Internal_DrawMesh_Injected, addr 0x6f161c4, size 0xc4, virtual false, abstract: false, final false
  static inline void Internal_DrawMesh_Injected(::System::IntPtr mesh, int32_t submeshIndex, ::by_ref<::UnityEngine::Matrix4x4 const> matrix, ::System::IntPtr material, int32_t layer,
                                                ::System::IntPtr camera, ::System::IntPtr properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows,
                                                ::System::IntPtr probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::System::IntPtr lightProbeProxyVolume);

  /// [FreeFunction("GraphicsScripting::DrawProceduralNow")]
  /// @brief Method Internal_DrawProceduralNow, addr 0x6f168cc, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_DrawProceduralNow(::UnityEngine::MeshTopology topology, int32_t vertexCount, int32_t instanceCount);

  /// [FreeFunction("GraphicsScripting::GetMaxDrawMeshInstanceCount", IsThreadSafe = true)]
  /// @brief Method Internal_GetMaxDrawMeshInstanceCount, addr 0x6f15510, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Internal_GetMaxDrawMeshInstanceCount();

  /// [NativeMethod(Name = "GraphicsScripting::SetMRTFull", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method Internal_SetMRTFullSetup, addr 0x6f15804, size 0x258, virtual false, abstract: false, final false
  static inline void Internal_SetMRTFullSetup(/* [NotNull] */ ::ArrayW<::UnityEngine::RenderBuffer> color, ::UnityEngine::RenderBuffer depth, int32_t mip, ::UnityEngine::CubemapFace face,
                                              int32_t depthSlice, /* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction> colorLA,
                                              /* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction depthLA,
                                              ::UnityEngine::Rendering::RenderBufferStoreAction depthSA);

  /// @brief Method Internal_SetMRTFullSetup_Injected, addr 0x6f15a5c, size 0x9c, virtual false, abstract: false, final false
  static inline void Internal_SetMRTFullSetup_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> color, ::by_ref<::UnityEngine::RenderBuffer const> depth, int32_t mip,
                                                       ::UnityEngine::CubemapFace face, int32_t depthSlice, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colorLA,
                                                       ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction depthLA,
                                                       ::UnityEngine::Rendering::RenderBufferStoreAction depthSA);

  /// [FreeFunction("GraphicsScripting::SetNullRT")]
  /// @brief Method Internal_SetNullRT, addr 0x6f156c4, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_SetNullRT();

  /// [NativeMethod(Name = "GraphicsScripting::SetRTSimple", IsFreeFunction = true, ThrowsException = true)]
  /// @brief Method Internal_SetRTSimple, addr 0x6f156ec, size 0xac, virtual false, abstract: false, final false
  static inline void Internal_SetRTSimple(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth, int32_t mip, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method Internal_SetRTSimple_Injected, addr 0x6f15798, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetRTSimple_Injected(::by_ref<::UnityEngine::RenderBuffer const> color, ::by_ref<::UnityEngine::RenderBuffer const> depth, int32_t mip, ::UnityEngine::CubemapFace face,
                                                   int32_t depthSlice);

  /// [ExcludeFromDocs]
  /// @brief Method SetRenderTarget, addr 0x6f18920, size 0x64, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt);

  /// [ExcludeFromDocs]
  /// @brief Method SetRenderTarget, addr 0x6f18984, size 0x70, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt, int32_t mipLevel);

  /// [ExcludeFromDocs]
  /// @brief Method SetRenderTarget, addr 0x6f189f4, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt, int32_t mipLevel, ::UnityEngine::CubemapFace face);

  /// @brief Method SetRenderTarget, addr 0x6f173d0, size 0x80, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt, /* [DefaultValue("0")] */ int32_t mipLevel, /* [DefaultValue("CubemapFace.Unknown")] */ ::UnityEngine::CubemapFace face,
                                     /* [DefaultValue("0")] */ int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6f17450, size 0x74, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTargetSetup setup);

  /// @brief Method SetRenderTargetImpl, addr 0x6f17200, size 0xa0, virtual false, abstract: false, final false
  static inline void SetRenderTargetImpl(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method SetRenderTargetImpl, addr 0x6f172a0, size 0x130, virtual false, abstract: false, final false
  static inline void SetRenderTargetImpl(::UnityEngine::RenderTexture* rt, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method SetRenderTargetImpl, addr 0x6f16f44, size 0x2bc, virtual false, abstract: false, final false
  static inline void SetRenderTargetImpl(::UnityEngine::RenderTargetSetup setup);

  static inline int32_t getStaticF_kMaxDrawMeshInstanceCount();

  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::RenderInstancedDataLayout>* getStaticF_s_RenderInstancedDataLayouts();

  /// @brief Method get_activeTier, addr 0x6f15538, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsTier get_activeTier();

  /// @brief Method get_minOpenGLESVersion, addr 0x6f15658, size 0x6c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::OpenGLESVersion get_minOpenGLESVersion();

  /// @brief Method get_preserveFramebufferAlpha, addr 0x6f155c4, size 0x6c, virtual false, abstract: false, final false
  static inline bool get_preserveFramebufferAlpha();

  static inline void setStaticF_kMaxDrawMeshInstanceCount(int32_t value);

  static inline void setStaticF_s_RenderInstancedDataLayouts(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::RenderInstancedDataLayout>* value);

  /// @brief Method set_activeTier, addr 0x6f15560, size 0x3c, virtual false, abstract: false, final false
  static inline void set_activeTier(::UnityEngine::Rendering::GraphicsTier value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Graphics();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Graphics(Graphics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Graphics(Graphics const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9717 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Graphics) == 0x10, "Size mismatch!");

} // namespace UnityEngine
