#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Graphics)
namespace UnityEngine {
class Material;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
class LightProbeProxyVolume;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
// Forward declare root types
namespace UnityEngine {
class Graphics;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Graphics);
// Type: UnityEngine::Graphics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10082))
// CS Name: ::UnityEngine::Graphics*
class CORDL_TYPE Graphics : public ::System::Object {
public:
  // Declarations
  /// @brief Field kMaxDrawMeshInstanceCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kMaxDrawMeshInstanceCount, put = setStaticF_kMaxDrawMeshInstanceCount)) int32_t kMaxDrawMeshInstanceCount;

  static inline void setStaticF_kMaxDrawMeshInstanceCount(int32_t value);

  static inline int32_t getStaticF_kMaxDrawMeshInstanceCount();

  /// @brief Method DrawMeshInstanced, addr 0x2cb4c50, size 0xd0, virtual false, abstract: false, final false
  static inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material,
                                       ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties,
                                       ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer);

  /// @brief Method SetRenderTarget, addr 0x2cb51c0, size 0x60, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt);

  /// @brief Method SetRenderTarget, addr 0x2cb529c, size 0x70, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt, int32_t mipLevel, ::UnityEngine::CubemapFace face);

  /// @brief Method SetRenderTargetImpl, addr 0x2cb530c, size 0x9c, virtual false, abstract: false, final false
  static inline void SetRenderTargetImpl(::UnityEngine::RenderBuffer colorBuffer, ::UnityEngine::RenderBuffer depthBuffer, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method SetRenderTargetImpl, addr 0x2cb5450, size 0x124, virtual false, abstract: false, final false
  static inline void SetRenderTargetImpl(::UnityEngine::RenderTexture* rt, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x2cb5220, size 0x7c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::RenderTexture* rt, int32_t mipLevel, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method CopyTexture, addr 0x2cb559c, size 0x84, virtual false, abstract: false, final false
  static inline void CopyTexture(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst);

  /// @brief Method CopyTexture, addr 0x2cb5664, size 0xb4, virtual false, abstract: false, final false
  static inline void CopyTexture(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip);

  /// @brief Method DrawMeshNow, addr 0x2cb578c, size 0x124, virtual false, abstract: false, final false
  static inline void DrawMeshNow(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, int32_t materialIndex);

  /// @brief Method DrawMesh, addr 0x2cb593c, size 0x19c, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer, ::UnityEngine::Camera* camera, int32_t submeshIndex,
                              ::UnityEngine::MaterialPropertyBlock* properties, bool castShadows, bool receiveShadows, bool useLightProbes);

  /// @brief Method DrawMesh, addr 0x2cb5ad8, size 0x1a4, virtual false, abstract: false, final false
  static inline void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer, ::UnityEngine::Camera* camera, int32_t submeshIndex,
                              ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, ::UnityEngine::Transform* probeAnchor,
                              ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method DrawMeshInstanced, addr 0x2cb4d20, size 0x4a0, virtual false, abstract: false, final false
  static inline void DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material,
                                       ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties,
                                       ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                       ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method Blit, addr 0x2cb5e68, size 0x84, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest);

  /// @brief Method Blit, addr 0x2cb5f30, size 0x94, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset);

  /// @brief Method Blit, addr 0x2cb6064, size 0xa0, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, int32_t pass);

  /// @brief Method Blit, addr 0x2cb6170, size 0x70, virtual false, abstract: false, final false
  static inline void Blit(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat);

  /// @brief Method Internal_GetMaxDrawMeshInstanceCount, addr 0x2cb61e0, size 0x28, virtual false, abstract: false, final false
  static inline int32_t Internal_GetMaxDrawMeshInstanceCount();

  /// @brief Method get_activeTier, addr 0x2cb6208, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::GraphicsTier get_activeTier();

  /// @brief Method set_activeTier, addr 0x2cb6230, size 0x3c, virtual false, abstract: false, final false
  static inline void set_activeTier(::UnityEngine::Rendering::GraphicsTier value);

  /// @brief Method Internal_SetNullRT, addr 0x2cb5574, size 0x28, virtual false, abstract: false, final false
  static inline void Internal_SetNullRT();

  /// @brief Method Internal_SetRTSimple, addr 0x2cb53a8, size 0xa8, virtual false, abstract: false, final false
  static inline void Internal_SetRTSimple(::UnityEngine::RenderBuffer color, ::UnityEngine::RenderBuffer depth, int32_t mip, ::UnityEngine::CubemapFace face, int32_t depthSlice);

  /// @brief Method CopyTexture_Full, addr 0x2cb5620, size 0x44, virtual false, abstract: false, final false
  static inline void CopyTexture_Full(::UnityEngine::Texture* src, ::UnityEngine::Texture* dst);

  /// @brief Method CopyTexture_Slice, addr 0x2cb5718, size 0x74, virtual false, abstract: false, final false
  static inline void CopyTexture_Slice(::UnityEngine::Texture* src, int32_t srcElement, int32_t srcMip, ::UnityEngine::Texture* dst, int32_t dstElement, int32_t dstMip);

  /// @brief Method Internal_DrawMeshNow2, addr 0x2cb58b0, size 0x8c, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshNow2(::UnityEngine::Mesh* mesh, int32_t subsetIndex, ::UnityEngine::Matrix4x4 matrix);

  /// @brief Method Internal_DrawMesh, addr 0x2cb5c7c, size 0xf0, virtual false, abstract: false, final false
  static inline void Internal_DrawMesh(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, int32_t layer,
                                       ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows,
                                       ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method Internal_DrawMeshInstanced, addr 0x2cb5da8, size 0xc0, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ::UnityEngine::Material* material,
                                                ::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*> matrices, int32_t count, ::UnityEngine::MaterialPropertyBlock* properties,
                                                ::UnityEngine::Rendering::ShadowCastingMode castShadows, bool receiveShadows, int32_t layer, ::UnityEngine::Camera* camera,
                                                ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage, ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method Internal_BlitMaterial5, addr 0x2cb6104, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_BlitMaterial5(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Material* mat, int32_t pass, bool setRT);

  /// @brief Method Blit2, addr 0x2cb5eec, size 0x44, virtual false, abstract: false, final false
  static inline void Blit2(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest);

  /// @brief Method Blit4, addr 0x2cb5fc4, size 0xa0, virtual false, abstract: false, final false
  static inline void Blit4(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset);

  /// @brief Method ExecuteCommandBuffer, addr 0x2cb6448, size 0x3c, virtual false, abstract: false, final false
  static inline void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* buffer);

  /// @brief Method Internal_SetRTSimple_Injected, addr 0x2cb626c, size 0x6c, virtual false, abstract: false, final false
  static inline void Internal_SetRTSimple_Injected(ByRef<::UnityEngine::RenderBuffer> color, ByRef<::UnityEngine::RenderBuffer> depth, int32_t mip, ::UnityEngine::CubemapFace face,
                                                   int32_t depthSlice);

  /// @brief Method Internal_DrawMeshNow2_Injected, addr 0x2cb62d8, size 0x54, virtual false, abstract: false, final false
  static inline void Internal_DrawMeshNow2_Injected(::UnityEngine::Mesh* mesh, int32_t subsetIndex, ByRef<::UnityEngine::Matrix4x4> matrix);

  /// @brief Method Internal_DrawMesh_Injected, addr 0x2cb632c, size 0xc0, virtual false, abstract: false, final false
  static inline void Internal_DrawMesh_Injected(::UnityEngine::Mesh* mesh, int32_t submeshIndex, ByRef<::UnityEngine::Matrix4x4> matrix, ::UnityEngine::Material* material, int32_t layer,
                                                ::UnityEngine::Camera* camera, ::UnityEngine::MaterialPropertyBlock* properties, ::UnityEngine::Rendering::ShadowCastingMode castShadows,
                                                bool receiveShadows, ::UnityEngine::Transform* probeAnchor, ::UnityEngine::Rendering::LightProbeUsage lightProbeUsage,
                                                ::UnityEngine::LightProbeProxyVolume* lightProbeProxyVolume);

  /// @brief Method Blit4_Injected, addr 0x2cb63ec, size 0x5c, virtual false, abstract: false, final false
  static inline void Blit4_Injected(::UnityEngine::Texture* source, ::UnityEngine::RenderTexture* dest, ByRef<::UnityEngine::Vector2> scale, ByRef<::UnityEngine::Vector2> offset);

  // Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Graphics(Graphics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Graphics(Graphics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Graphics();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Graphics, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Graphics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Graphics*, "UnityEngine", "Graphics");
