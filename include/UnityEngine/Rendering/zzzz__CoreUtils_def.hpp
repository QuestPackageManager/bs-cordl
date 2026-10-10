#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUtils)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class BaseCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ClearFlag;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
class CoreUtils_Priorities;
}
namespace UnityEngine::Rendering {
class CoreUtils_Sections;
}
namespace UnityEngine::Rendering {
struct DepthBits;
}
namespace UnityEngine::Rendering {
class IRasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct MSAASamples;
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
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
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
struct TextureDimension;
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
class CubemapArray;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class Cubemap;
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
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture3D;
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
// Forward declare root types
namespace UnityEngine::Rendering {
class CoreUtils;
}
namespace UnityEngine::Rendering {
class CoreUtils_Priorities;
}
namespace UnityEngine::Rendering {
class CoreUtils_Sections;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::CoreUtils*);
MARK_REF_T(::UnityEngine::Rendering::CoreUtils_Priorities*);
MARK_REF_T(::UnityEngine::Rendering::CoreUtils_Sections*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUtils*, "UnityEngine.Rendering", "CoreUtils");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUtils_Priorities*, "UnityEngine.Rendering", "CoreUtils/Priorities");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUtils_Sections*, "UnityEngine.Rendering", "CoreUtils/Sections");
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils/Sections
class CORDL_TYPE CoreUtils_Sections : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUtils_Sections();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Sections", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils_Sections(CoreUtils_Sections&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Sections", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils_Sections(CoreUtils_Sections const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9152 };

  /// @brief Field section1 offset 0xffffffff size 0x4
  static constexpr int32_t section1{ static_cast<int32_t>(0x2710) };

  /// @brief Field section2 offset 0xffffffff size 0x4
  static constexpr int32_t section2{ static_cast<int32_t>(0x4e20) };

  /// @brief Field section3 offset 0xffffffff size 0x4
  static constexpr int32_t section3{ static_cast<int32_t>(0x7530) };

  /// @brief Field section4 offset 0xffffffff size 0x4
  static constexpr int32_t section4{ static_cast<int32_t>(0x9c40) };

  /// @brief Field section5 offset 0xffffffff size 0x4
  static constexpr int32_t section5{ static_cast<int32_t>(0xc350) };

  /// @brief Field section6 offset 0xffffffff size 0x4
  static constexpr int32_t section6{ static_cast<int32_t>(0xea60) };

  /// @brief Field section7 offset 0xffffffff size 0x4
  static constexpr int32_t section7{ static_cast<int32_t>(0x11170) };

  /// @brief Field section8 offset 0xffffffff size 0x4
  static constexpr int32_t section8{ static_cast<int32_t>(0x13880) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUtils_Sections) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils/Priorities
class CORDL_TYPE CoreUtils_Priorities : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUtils_Priorities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Priorities", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils_Priorities(CoreUtils_Priorities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Priorities", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils_Priorities(CoreUtils_Priorities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9153 };

  /// @brief Field assetsCreateRenderingMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t assetsCreateRenderingMenuPriority{ static_cast<int32_t>(0x134) };

  /// @brief Field assetsCreateShaderMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t assetsCreateShaderMenuPriority{ static_cast<int32_t>(0x53) };

  /// @brief Field editMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority{ static_cast<int32_t>(0x140) };

  /// @brief Field gameObjectMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t gameObjectMenuPriority{ static_cast<int32_t>(0xa) };

  /// @brief Field scriptingPriority offset 0xffffffff size 0x4
  static constexpr int32_t scriptingPriority{ static_cast<int32_t>(0x28) };

  /// @brief Field srpLensFlareMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t srpLensFlareMenuPriority{ static_cast<int32_t>(0x9) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUtils_Priorities) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IConvertible, System.Object, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils
class CORDL_TYPE CoreUtils : public ::System::Object {
public:
  // Declarations
  using Priorities = ::UnityEngine::Rendering::CoreUtils_Priorities;

  using Sections = ::UnityEngine::Rendering::CoreUtils_Sections;

  /// @brief Field lookAtList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lookAtList, put = setStaticF_lookAtList)) ::ArrayW<::UnityEngine::Vector3> lookAtList;

  /// @brief Field m_BlackCubeTexture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_BlackCubeTexture, put = setStaticF_m_BlackCubeTexture)) ::UnityW<::UnityEngine::Cubemap> m_BlackCubeTexture;

  /// @brief Field m_BlackVolumeTexture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_BlackVolumeTexture, put = setStaticF_m_BlackVolumeTexture)) ::UnityW<::UnityEngine::Texture3D> m_BlackVolumeTexture;

  /// @brief Field m_EmptyBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_EmptyBuffer, put = setStaticF_m_EmptyBuffer)) ::UnityEngine::GraphicsBuffer* m_EmptyBuffer;

  /// @brief Field m_EmptyUAV, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_EmptyUAV, put = setStaticF_m_EmptyUAV)) ::UnityW<::UnityEngine::RenderTexture> m_EmptyUAV;

  /// @brief Field m_MagentaCubeTexture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_MagentaCubeTexture, put = setStaticF_m_MagentaCubeTexture)) ::UnityW<::UnityEngine::Cubemap> m_MagentaCubeTexture;

  /// @brief Field m_MagentaCubeTextureArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_MagentaCubeTextureArray, put = setStaticF_m_MagentaCubeTextureArray)) ::UnityW<::UnityEngine::CubemapArray> m_MagentaCubeTextureArray;

  /// @brief Field m_WhiteCubeTexture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_WhiteCubeTexture, put = setStaticF_m_WhiteCubeTexture)) ::UnityW<::UnityEngine::Cubemap> m_WhiteCubeTexture;

  /// @brief Field m_WhiteVolumeTexture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_WhiteVolumeTexture, put = setStaticF_m_WhiteVolumeTexture)) ::UnityW<::UnityEngine::Texture3D> m_WhiteVolumeTexture;

  /// @brief Field s_AssemblyTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_AssemblyTypes, put = setStaticF_s_AssemblyTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* s_AssemblyTypes;

  /// @brief Field upVectorList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_upVectorList, put = setStaticF_upVectorList)) ::ArrayW<::UnityEngine::Vector3> upVectorList;

  /// @brief Method AreAnimatedMaterialsEnabled, addr 0x6bde128, size 0x8, virtual false, abstract: false, final false
  static inline bool AreAnimatedMaterialsEnabled(::UnityEngine::Camera* camera);

  /// @brief Method ArePostProcessesEnabled, addr 0x6bde120, size 0x8, virtual false, abstract: false, final false
  static inline bool ArePostProcessesEnabled(::UnityEngine::Camera* camera);

  /// @brief Method CalculateViewSpaceCorners, addr 0x6bde58c, size 0x260, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3> CalculateViewSpaceCorners(::UnityEngine::Matrix4x4 proj, float_t z);

  /// @brief Method ClearCubemap, addr 0x6bdce60, size 0x1bc, virtual false, abstract: false, final false
  static inline void ClearCubemap(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::Color clearColor, bool clearMips);

  /// @brief Method ClearRenderTarget, addr 0x6bda4fc, size 0x8c, virtual false, abstract: false, final false
  static inline void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method ConvertLinearToActiveColorSpace, addr 0x6bdd58c, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ConvertLinearToActiveColorSpace(::UnityEngine::Color color);

  /// @brief Method ConvertSRGBToActiveColorSpace, addr 0x6bdd4b8, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ConvertSRGBToActiveColorSpace(::UnityEngine::Color color);

  /// @brief Method CreateCubeMesh, addr 0x6bddd70, size 0x3b0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateCubeMesh(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);

  /// @brief Method CreateEngineMaterial, addr 0x6bdd7ec, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateEngineMaterial(::UnityEngine::Shader* shader);

  /// @brief Method CreateEngineMaterial, addr 0x6bdd660, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateEngineMaterial(::StringW shaderPath);

  /// @brief Method Destroy, addr 0x6bdda9c, size 0x8c, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj);

  /// @brief Method DivRoundUp, addr 0x6bde538, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DivRoundUp(int32_t value, int32_t divisor);

  /// @brief Method DrawFullScreen, addr 0x6bdd230, size 0xec, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                    ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x6bdd158, size 0xd8, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                    ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x6bdd31c, size 0xe0, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                    ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x6bdd3fc, size 0xbc, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                    ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x6bdd01c, size 0xb0, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x6bdd0cc, size 0x8c, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::RasterCommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* properties,
                                    int32_t shaderPassId);

  /// @brief Method DrawRendererList, addr 0x6bde190, size 0x34, virtual false, abstract: false, final false
  static inline void DrawRendererList(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method DrawRendererList, addr 0x6bde1c4, size 0xe4, virtual false, abstract: false, final false
  static inline void DrawRendererList(::UnityEngine::Rendering::IRasterCommandBuffer* cmd, ::UnityEngine::Rendering::RendererList rendererList);

  /// [Obsolete("Use DrawRendererList(CommandBuffer cmd, UnityEngine.Rendering.RendererList rendererList) instead. #from(6000.3) (UnityUpgradable) -> !0")]
  /// @brief Method DrawRendererList, addr 0x6bde158, size 0x38, virtual false, abstract: false, final false
  static inline void DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                      ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method FixupDepthSlice, addr 0x6bda588, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FixupDepthSlice(int32_t depthSlice, ::UnityEngine::Rendering::RTHandle* buffer);

  /// @brief Method FixupDepthSlice, addr 0x6bda5cc, size 0x14, virtual false, abstract: false, final false
  static inline int32_t FixupDepthSlice(int32_t depthSlice, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method GetAllAssemblyTypes, addr 0x6bddb28, size 0x230, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes();

  /// @brief Method GetAllTypesDerivedFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllTypesDerivedFrom();

  /// @brief Method GetCorePath, addr 0x6bde548, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetCorePath();

  /// @brief Method GetDefaultDepthBufferBits, addr 0x6bde850, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::DepthBits GetDefaultDepthBufferBits();

  /// @brief Method GetDefaultDepthOnlyFormat, addr 0x6bde7f4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthOnlyFormat();

  /// @brief Method GetDefaultDepthStencilFormat, addr 0x6bde7ec, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthStencilFormat();

  /// @brief Method GetLastEnumValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetLastEnumValue();

  /// @brief Method GetMipCount, addr 0x6bde470, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetMipCount(float_t size);

  /// @brief Method GetMipCount, addr 0x6bde3a4, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetMipCount(int32_t size);

  /// @brief Method GetRenderTargetAutoName, addr 0x6bdc2e4, size 0x3a4, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips,
                                                  bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes, bool dynamicResExplicit);

  /// @brief Method GetRenderTargetAutoName, addr 0x6bdc78c, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                  ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                  bool dynamicRes, bool dynamicResExplicit);

  /// @brief Method GetRenderTargetAutoName, addr 0x6bdc688, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::StringW name, bool mips,
                                                  bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples);

  /// @brief Method GetRenderTargetAutoName, addr 0x6bdc1e0, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::StringW name, bool mips, bool enableMSAA,
                                                  ::UnityEngine::Rendering::MSAASamples msaaSamples);

  /// @brief Method GetTextureAutoName, addr 0x6bdc98c, size 0x3ec, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, int32_t depth);

  /// @brief Method GetTextureAutoName, addr 0x6bdcd78, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Rendering::TextureDimension dim,
                                             ::StringW name, bool mips, int32_t depth);

  /// @brief Method GetTextureAutoName, addr 0x6bdc8a4, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips,
                                             int32_t depth);

  /// @brief Method GetTextureHash, addr 0x6bde2a8, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t GetTextureHash(::UnityEngine::Texture* texture);

  /// @brief Method HasFlag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::type_constraint<T, ::System::IConvertible*>)
  static inline bool HasFlag(T mask, T flag);

  /// @brief Method IsLightOverlapDebugEnabled, addr 0x6bde138, size 0x8, virtual false, abstract: false, final false
  static inline bool IsLightOverlapDebugEnabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneFilteringEnabled, addr 0x6bde148, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneFilteringEnabled();

  /// @brief Method IsSceneLightingDisabled, addr 0x6bde130, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneLightingDisabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneViewFogEnabled, addr 0x6bde140, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneViewFogEnabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneViewPrefabStageContextHidden, addr 0x6bde150, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneViewPrefabStageContextHidden();

  /// @brief Method IsScreenFullyCoveredByCameras, addr 0x6bde858, size 0x578, virtual false, abstract: false, final false
  static inline bool IsScreenFullyCoveredByCameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameras);

  /// @brief Method PreviousPowerOfTwo, addr 0x6bde378, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t PreviousPowerOfTwo(int32_t size);

  /// @brief Method SafeRelease, addr 0x6bddd64, size 0xc, virtual false, abstract: false, final false
  static inline void SafeRelease(::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SafeRelease, addr 0x6bddd58, size 0xc, virtual false, abstract: false, final false
  static inline void SafeRelease(::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetKeyword, addr 0x6bdd9b0, size 0x3c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x6bdd920, size 0x90, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x6bdd8f4, size 0x2c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x6bdda70, size 0x2c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x6bdd9ec, size 0x2c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Material* material, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x6bdda18, size 0x58, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword, bool state);

  /// @brief Method SetRenderTarget, addr 0x6bdb798, size 0x10c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdb978, size 0xa8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdbcac, size 0x110, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bda5e0, size 0x100, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bda6e0, size 0xc4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdb490, size 0xfc, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x6bdaff4, size 0xb4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x6bdaca4, size 0xe4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x6bdaea4, size 0x150, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdad88, size 0x11c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdbdbc, size 0x18c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RTHandle* depthBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdbacc, size 0x130, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdbbfc, size 0xb0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdba20, size 0xac, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdb58c, size 0xec, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x6bdb0a8, size 0x11c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x6bdb318, size 0x178, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor,
                                     int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdb1c4, size 0x154, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bda87c, size 0x118, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bda994, size 0xdc, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bda7a4, size 0xd8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x6bdbf78, size 0xb4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer);

  /// @brief Method SetRenderTarget, addr 0x6bdc02c, size 0xc0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x6bdc0ec, size 0xf4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x6bdaa70, size 0xa0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer);

  /// @brief Method SetRenderTarget, addr 0x6bdabf8, size 0xac, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x6bdab10, size 0xe8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x6bdb8a4, size 0xd4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetShadingRateCombiner, addr 0x6bdbf58, size 0x10, virtual false, abstract: false, final false
  static inline void SetShadingRateCombiner(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ShadingRateCombinerStage stage,
                                            ::UnityEngine::Rendering::ShadingRateCombiner combiner);

  /// @brief Method SetShadingRateFragmentSize, addr 0x6bdbf48, size 0x10, virtual false, abstract: false, final false
  static inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ShadingRateFragmentSize baseShadingRateFragmentSize);

  /// @brief Method SetShadingRateImage, addr 0x6bdbf68, size 0x10, virtual false, abstract: false, final false
  static inline void SetShadingRateImage(::UnityEngine::Rendering::CommandBuffer* cmd, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier const> shadingRateImage);

  /// @brief Method SetViewport, addr 0x6bdb720, size 0x78, virtual false, abstract: false, final false
  static inline void SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* target);

  /// @brief Method SetViewportAndClear, addr 0x6bdb678, size 0xa8, virtual false, abstract: false, final false
  static inline void SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                         ::UnityEngine::Color clearColor);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Swap(::by_ref<T> a, ::by_ref<T> b);

  static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_lookAtList();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_BlackCubeTexture();

  static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_BlackVolumeTexture();

  static inline ::UnityEngine::GraphicsBuffer* getStaticF_m_EmptyBuffer();

  static inline ::UnityW<::UnityEngine::RenderTexture> getStaticF_m_EmptyUAV();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_MagentaCubeTexture();

  static inline ::UnityW<::UnityEngine::CubemapArray> getStaticF_m_MagentaCubeTextureArray();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_WhiteCubeTexture();

  static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_WhiteVolumeTexture();

  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* getStaticF_s_AssemblyTypes();

  static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_upVectorList();

  /// @brief Method get_blackCubeTexture, addr 0x6bd98ec, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_blackCubeTexture();

  /// @brief Method get_blackVolumeTexture, addr 0x6bda1e0, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> get_blackVolumeTexture();

  /// @brief Method get_emptyBuffer, addr 0x6bda0b8, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer* get_emptyBuffer();

  /// @brief Method get_emptyUAV, addr 0x6bd9f7c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> get_emptyUAV();

  /// @brief Method get_magentaCubeTexture, addr 0x6bd9a7c, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_magentaCubeTexture();

  /// @brief Method get_magentaCubeTextureArray, addr 0x6bd9c0c, size 0x1e0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::CubemapArray> get_magentaCubeTextureArray();

  /// @brief Method get_whiteCubeTexture, addr 0x6bd9dec, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_whiteCubeTexture();

  /// @brief Method get_whiteVolumeTexture, addr 0x6bda370, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> get_whiteVolumeTexture();

  static inline void setStaticF_lookAtList(::ArrayW<::UnityEngine::Vector3> value);

  static inline void setStaticF_m_BlackCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_m_BlackVolumeTexture(::UnityW<::UnityEngine::Texture3D> value);

  static inline void setStaticF_m_EmptyBuffer(::UnityEngine::GraphicsBuffer* value);

  static inline void setStaticF_m_EmptyUAV(::UnityW<::UnityEngine::RenderTexture> value);

  static inline void setStaticF_m_MagentaCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_m_MagentaCubeTextureArray(::UnityW<::UnityEngine::CubemapArray> value);

  static inline void setStaticF_m_WhiteCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_m_WhiteVolumeTexture(::UnityW<::UnityEngine::Texture3D> value);

  static inline void setStaticF_s_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  static inline void setStaticF_upVectorList(::ArrayW<::UnityEngine::Vector3> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils(CoreUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils(CoreUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9154 };

  /// @brief Field assetCreateMenuPriority1 offset 0xffffffff size 0x4
  static constexpr int32_t assetCreateMenuPriority1{ static_cast<int32_t>(0xe6) };

  /// @brief Field assetCreateMenuPriority2 offset 0xffffffff size 0x4
  static constexpr int32_t assetCreateMenuPriority2{ static_cast<int32_t>(0xf1) };

  /// @brief Field assetCreateMenuPriority3 offset 0xffffffff size 0x4
  static constexpr int32_t assetCreateMenuPriority3{ static_cast<int32_t>(0x12c) };

  /// @brief Field editMenuPriority1 offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority1{ static_cast<int32_t>(0x140) };

  /// @brief Field editMenuPriority2 offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority2{ static_cast<int32_t>(0x14b) };

  /// @brief Field editMenuPriority3 offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority3{ static_cast<int32_t>(0x156) };

  /// @brief Field editMenuPriority4 offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority4{ static_cast<int32_t>(0x161) };

  /// @brief Field gameObjectMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t gameObjectMenuPriority{ static_cast<int32_t>(0xa) };

  /// @brief Field obsoletePriorityMessage offset 0xffffffff size 0x8
  static constexpr ::ConstString obsoletePriorityMessage{ u"Use CoreUtils.Priorities instead. #from(2021.2)" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
