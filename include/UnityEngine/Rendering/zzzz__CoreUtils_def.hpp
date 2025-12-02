#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUtils)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template <typename T, typename TResult> class Func_2;
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
class CoreUtils_Priorities;
}
namespace UnityEngine::Rendering {
class CoreUtils_Sections;
}
namespace UnityEngine::Rendering {
class CoreUtils___c;
}
namespace UnityEngine::Rendering {
template <typename T> class CoreUtils___c__98_1;
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
namespace UnityEngine::Rendering {
class CoreUtils___c;
}
namespace UnityEngine::Rendering {
template <typename T> class CoreUtils___c__98_1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CoreUtils);
MARK_REF_PTR_T(::UnityEngine::Rendering::CoreUtils_Priorities);
MARK_REF_PTR_T(::UnityEngine::Rendering::CoreUtils_Sections);
MARK_REF_PTR_T(::UnityEngine::Rendering::CoreUtils___c);
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::CoreUtils___c__98_1);
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
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Sections", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils_Sections(CoreUtils_Sections&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Sections", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils_Sections(CoreUtils_Sections const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12245 };

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreUtils_Sections, 0x10>, "Size mismatch!");

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
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Priorities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils_Priorities(CoreUtils_Priorities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Priorities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils_Priorities(CoreUtils_Priorities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12246 };

  /// @brief Field assetsCreateRenderingMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t assetsCreateRenderingMenuPriority{ static_cast<int32_t>(0x134) };

  /// @brief Field assetsCreateShaderMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t assetsCreateShaderMenuPriority{ static_cast<int32_t>(0x53) };

  /// @brief Field editMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t editMenuPriority{ static_cast<int32_t>(0x140) };

  /// @brief Field gameObjectMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t gameObjectMenuPriority{ static_cast<int32_t>(0xa) };

  /// @brief Field srpLensFlareMenuPriority offset 0xffffffff size 0x4
  static constexpr int32_t srpLensFlareMenuPriority{ static_cast<int32_t>(0x12f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreUtils_Priorities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils/<>c
class CORDL_TYPE CoreUtils___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::CoreUtils___c* __9;

  /// @brief Field <>9__97_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__97_0,
                      put = setStaticF___9__97_0)) ::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* __9__97_0;

  static inline ::UnityEngine::Rendering::CoreUtils___c* New_ctor();

  /// @brief Method <GetAllAssemblyTypes>b__97_0, addr 0x65a3978, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GetAllAssemblyTypes_b__97_0(::System::Reflection::Assembly* t);

  /// @brief Method .ctor, addr 0x65a3974, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::CoreUtils___c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* getStaticF___9__97_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::CoreUtils___c* value);

  static inline void setStaticF___9__97_0(::System::Func_2<::System::Reflection::Assembly*, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUtils___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils___c(CoreUtils___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils___c(CoreUtils___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12247 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreUtils___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils/<>c__98`1<T>
class CORDL_TYPE CoreUtils___c__98_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::CoreUtils___c__98_1<T>* __9;

  /// @brief Field <>9__98_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__98_0, put = setStaticF___9__98_0)) ::System::Func_2<::System::Type*, bool>* __9__98_0;

  static inline ::UnityEngine::Rendering::CoreUtils___c__98_1<T>* New_ctor();

  /// @brief Method <GetAllTypesDerivedFrom>b__98_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetAllTypesDerivedFrom_b__98_0(::System::Type* t);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::CoreUtils___c__98_1<T>* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__98_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::CoreUtils___c__98_1<T>* value);

  static inline void setStaticF___9__98_0(::System::Func_2<::System::Type*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUtils___c__98_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils___c__98_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils___c__98_1(CoreUtils___c__98_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils___c__98_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils___c__98_1(CoreUtils___c__98_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12248 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils
class CORDL_TYPE CoreUtils : public ::System::Object {
public:
  // Declarations
  using Priorities = ::UnityEngine::Rendering::CoreUtils_Priorities;

  using Sections = ::UnityEngine::Rendering::CoreUtils_Sections;

  using __c = ::UnityEngine::Rendering::CoreUtils___c;

  template <typename T> using __c__98_1 = ::UnityEngine::Rendering::CoreUtils___c__98_1<T>;

  /// @brief Field lookAtList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_lookAtList, put = setStaticF_lookAtList)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> lookAtList;

  /// @brief Field m_AssemblyTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_AssemblyTypes, put = setStaticF_m_AssemblyTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>* m_AssemblyTypes;

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

  /// @brief Field upVectorList, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_upVectorList, put = setStaticF_upVectorList)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> upVectorList;

  /// @brief Method AreAnimatedMaterialsEnabled, addr 0x65a33c0, size 0x8, virtual false, abstract: false, final false
  static inline bool AreAnimatedMaterialsEnabled(::UnityEngine::Camera* camera);

  /// @brief Method ArePostProcessesEnabled, addr 0x65a33b8, size 0x8, virtual false, abstract: false, final false
  static inline bool ArePostProcessesEnabled(::UnityEngine::Camera* camera);

  /// @brief Method CalculateViewSpaceCorners, addr 0x65a3574, size 0x21c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> CalculateViewSpaceCorners(::UnityEngine::Matrix4x4 proj, float_t z);

  /// @brief Method ClearCubemap, addr 0x65a2320, size 0x1bc, virtual false, abstract: false, final false
  static inline void ClearCubemap(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTexture* renderTexture, ::UnityEngine::Color clearColor, bool clearMips);

  /// @brief Method ClearRenderTarget, addr 0x659ffac, size 0x8c, virtual false, abstract: false, final false
  static inline void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method ConvertLinearToActiveColorSpace, addr 0x65a2a4c, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ConvertLinearToActiveColorSpace(::UnityEngine::Color color);

  /// @brief Method ConvertSRGBToActiveColorSpace, addr 0x65a2978, size 0xd4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color ConvertSRGBToActiveColorSpace(::UnityEngine::Color color);

  /// @brief Method CreateCubeMesh, addr 0x65a3008, size 0x3b0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> CreateCubeMesh(::UnityEngine::Vector3 min, ::UnityEngine::Vector3 max);

  /// @brief Method CreateEngineMaterial, addr 0x6599f2c, size 0x108, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateEngineMaterial(::UnityEngine::Shader* shader);

  /// @brief Method CreateEngineMaterial, addr 0x65a2b20, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateEngineMaterial(::StringW shaderPath);

  /// @brief Method Destroy, addr 0x658c744, size 0x8c, virtual false, abstract: false, final false
  static inline void Destroy(::UnityEngine::Object* obj);

  /// @brief Method DivRoundUp, addr 0x65a3520, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DivRoundUp(int32_t value, int32_t divisor);

  /// @brief Method DrawFullScreen, addr 0x65a26f0, size 0xec, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                    ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x65a2618, size 0xd8, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                    ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x65a27dc, size 0xe0, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                    ::UnityEngine::Rendering::RenderTargetIdentifier depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x65a28bc, size 0xbc, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material,
                                    ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                    ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x65a24dc, size 0xb0, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* properties, int32_t shaderPassId);

  /// @brief Method DrawFullScreen, addr 0x65a258c, size 0x8c, virtual false, abstract: false, final false
  static inline void DrawFullScreen(::UnityEngine::Rendering::RasterCommandBuffer* commandBuffer, ::UnityEngine::Material* material, ::UnityEngine::MaterialPropertyBlock* properties,
                                    int32_t shaderPassId);

  /// @brief Method DrawRendererList, addr 0x65a33f0, size 0x38, virtual false, abstract: false, final false
  static inline void DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext renderContext, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                      ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method FixupDepthSlice, addr 0x65a0038, size 0x44, virtual false, abstract: false, final false
  static inline int32_t FixupDepthSlice(int32_t depthSlice, ::UnityEngine::Rendering::RTHandle* buffer);

  /// @brief Method FixupDepthSlice, addr 0x65a007c, size 0x14, virtual false, abstract: false, final false
  static inline int32_t FixupDepthSlice(int32_t depthSlice, ::UnityEngine::CubemapFace cubemapFace);

  /// @brief Method GetAllAssemblyTypes, addr 0x65a2e54, size 0x19c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes();

  /// @brief Method GetAllTypesDerivedFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllTypesDerivedFrom();

  /// @brief Method GetCorePath, addr 0x65a3530, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW GetCorePath();

  /// @brief Method GetLastEnumValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T GetLastEnumValue();

  /// @brief Method GetMipCount, addr 0x65929c4, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t GetMipCount(float_t size);

  /// @brief Method GetMipCount, addr 0x65a3454, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetMipCount(int32_t size);

  /// @brief Method GetRenderTargetAutoName, addr 0x65a18b8, size 0x3a4, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips,
                                                  bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples, bool dynamicRes, bool dynamicResExplicit);

  /// @brief Method GetRenderTargetAutoName, addr 0x6590998, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                  ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples,
                                                  bool dynamicRes, bool dynamicResExplicit);

  /// @brief Method GetRenderTargetAutoName, addr 0x65a1c5c, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::StringW name, bool mips,
                                                  bool enableMSAA, ::UnityEngine::Rendering::MSAASamples msaaSamples);

  /// @brief Method GetRenderTargetAutoName, addr 0x6591210, size 0x104, virtual false, abstract: false, final false
  static inline ::StringW GetRenderTargetAutoName(int32_t width, int32_t height, int32_t depth, ::UnityEngine::RenderTextureFormat format, ::StringW name, bool mips, bool enableMSAA,
                                                  ::UnityEngine::Rendering::MSAASamples msaaSamples);

  /// @brief Method GetTextureAutoName, addr 0x65a1e48, size 0x3f0, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::StringW format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips, int32_t depth);

  /// @brief Method GetTextureAutoName, addr 0x65a2238, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Rendering::TextureDimension dim,
                                             ::StringW name, bool mips, int32_t depth);

  /// @brief Method GetTextureAutoName, addr 0x65a1d60, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetTextureAutoName(int32_t width, int32_t height, ::UnityEngine::TextureFormat format, ::UnityEngine::Rendering::TextureDimension dim, ::StringW name, bool mips,
                                             int32_t depth);

  /// @brief Method GetTextureHash, addr 0x6593bd8, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t GetTextureHash(::UnityEngine::Texture* texture);

  /// @brief Method HasFlag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool HasFlag(T mask, T flag);

  /// @brief Method IsLightOverlapDebugEnabled, addr 0x65a33d0, size 0x8, virtual false, abstract: false, final false
  static inline bool IsLightOverlapDebugEnabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneFilteringEnabled, addr 0x65a33e0, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneFilteringEnabled();

  /// @brief Method IsSceneLightingDisabled, addr 0x65a33c8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneLightingDisabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneViewFogEnabled, addr 0x65a33d8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneViewFogEnabled(::UnityEngine::Camera* camera);

  /// @brief Method IsSceneViewPrefabStageContextHidden, addr 0x65a33e8, size 0x8, virtual false, abstract: false, final false
  static inline bool IsSceneViewPrefabStageContextHidden();

  /// @brief Method PreviousPowerOfTwo, addr 0x65a3428, size 0x2c, virtual false, abstract: false, final false
  static inline int32_t PreviousPowerOfTwo(int32_t size);

  /// @brief Method SafeRelease, addr 0x65a2ffc, size 0xc, virtual false, abstract: false, final false
  static inline void SafeRelease(::UnityEngine::ComputeBuffer* buffer);

  /// @brief Method SafeRelease, addr 0x65a2ff0, size 0xc, virtual false, abstract: false, final false
  static inline void SafeRelease(::UnityEngine::GraphicsBuffer* buffer);

  /// @brief Method SetKeyword, addr 0x65a2d68, size 0x3c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Rendering::BaseCommandBuffer* cmd, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x65a2cd8, size 0x90, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x65a2cac, size 0x2c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x65a2e28, size 0x2c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::ComputeShader* cs, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x65a2da4, size 0x2c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Material* material, ::StringW keyword, bool state);

  /// @brief Method SetKeyword, addr 0x65a2dd0, size 0x58, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Material* material, ::UnityEngine::Rendering::LocalKeyword keyword, bool state);

  /// @brief Method SetRenderTarget, addr 0x65a112c, size 0x10c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x659c0bc, size 0xa8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x659c5b0, size 0x110, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a0090, size 0x100, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a0190, size 0xc4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                     int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a0e28, size 0xfc, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x65a0a14, size 0xb4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x65a0754, size 0xe4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x65a090c, size 0x108, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a0838, size 0xd4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier buffer, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction storeAction, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a14c4, size 0x18c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RTHandle* depthBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a12e4, size 0x130, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a1414, size 0xb0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer,
                                     ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a1238, size 0xac, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* colorBuffer, ::UnityEngine::Rendering::RTHandle* depthBuffer, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a0f24, size 0xec, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x65a0ac8, size 0x11c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x65a0cf0, size 0x138, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor,
                                     int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a0be4, size 0x10c, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction,
                                     ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a032c, size 0x118, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a0444, size 0xdc, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, int32_t miplevel,
                                     ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a0254, size 0xd8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, int32_t miplevel, ::UnityEngine::CubemapFace cubemapFace, int32_t depthSlice);

  /// @brief Method SetRenderTarget, addr 0x65a1650, size 0xb4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer);

  /// @brief Method SetRenderTarget, addr 0x65a1704, size 0xc0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x65a17c4, size 0xf4, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RTHandle* depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetRenderTarget, addr 0x65a0520, size 0xa0, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer);

  /// @brief Method SetRenderTarget, addr 0x65a06a8, size 0xac, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag);

  /// @brief Method SetRenderTarget, addr 0x65a05c0, size 0xe8, virtual false, abstract: false, final false
  static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd,
                                     ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier, ::Array<::UnityEngine::Rendering::RenderTargetIdentifier>*> colorBuffers,
                                     ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer, ::UnityEngine::Rendering::ClearFlag clearFlag, ::UnityEngine::Color clearColor);

  /// @brief Method SetViewport, addr 0x65a10b8, size 0x74, virtual false, abstract: false, final false
  static inline void SetViewport(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* target);

  /// @brief Method SetViewportAndClear, addr 0x65a1010, size 0xa8, virtual false, abstract: false, final false
  static inline void SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* buffer, ::UnityEngine::Rendering::ClearFlag clearFlag,
                                         ::UnityEngine::Color clearColor);

  /// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Swap(::ByRef<T> a, ::ByRef<T> b);

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_lookAtList();

  static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* getStaticF_m_AssemblyTypes();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_BlackCubeTexture();

  static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_BlackVolumeTexture();

  static inline ::UnityEngine::GraphicsBuffer* getStaticF_m_EmptyBuffer();

  static inline ::UnityW<::UnityEngine::RenderTexture> getStaticF_m_EmptyUAV();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_MagentaCubeTexture();

  static inline ::UnityW<::UnityEngine::CubemapArray> getStaticF_m_MagentaCubeTextureArray();

  static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_WhiteCubeTexture();

  static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_WhiteVolumeTexture();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_upVectorList();

  /// @brief Method get_blackCubeTexture, addr 0x659f39c, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_blackCubeTexture();

  /// @brief Method get_blackVolumeTexture, addr 0x659fc90, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> get_blackVolumeTexture();

  /// @brief Method get_emptyBuffer, addr 0x659fb68, size 0x128, virtual false, abstract: false, final false
  static inline ::UnityEngine::GraphicsBuffer* get_emptyBuffer();

  /// @brief Method get_emptyUAV, addr 0x659fa2c, size 0x13c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> get_emptyUAV();

  /// @brief Method get_magentaCubeTexture, addr 0x659f52c, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_magentaCubeTexture();

  /// @brief Method get_magentaCubeTextureArray, addr 0x659f6bc, size 0x1e0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::CubemapArray> get_magentaCubeTextureArray();

  /// @brief Method get_whiteCubeTexture, addr 0x659f89c, size 0x190, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Cubemap> get_whiteCubeTexture();

  /// @brief Method get_whiteVolumeTexture, addr 0x659fe20, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture3D> get_whiteVolumeTexture();

  static inline void setStaticF_lookAtList(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

  static inline void setStaticF_m_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>* value);

  static inline void setStaticF_m_BlackCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_m_BlackVolumeTexture(::UnityW<::UnityEngine::Texture3D> value);

  static inline void setStaticF_m_EmptyBuffer(::UnityEngine::GraphicsBuffer* value);

  static inline void setStaticF_m_EmptyUAV(::UnityW<::UnityEngine::RenderTexture> value);

  static inline void setStaticF_m_MagentaCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_m_MagentaCubeTextureArray(::UnityW<::UnityEngine::CubemapArray> value);

  static inline void setStaticF_m_WhiteCubeTexture(::UnityW<::UnityEngine::Cubemap> value);

  static inline void setStaticF_m_WhiteVolumeTexture(::UnityW<::UnityEngine::Texture3D> value);

  static inline void setStaticF_upVectorList(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoreUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoreUtils(CoreUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoreUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoreUtils(CoreUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12249 };

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
  static constexpr ::ConstString obsoletePriorityMessage{ u"Use CoreUtils.Priorities instead" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CoreUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CoreUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreUtils*, "UnityEngine.Rendering", "CoreUtils");
NEED_NO_BOX(::UnityEngine::Rendering::CoreUtils_Priorities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreUtils_Priorities*, "UnityEngine.Rendering", "CoreUtils/Priorities");
NEED_NO_BOX(::UnityEngine::Rendering::CoreUtils_Sections);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreUtils_Sections*, "UnityEngine.Rendering", "CoreUtils/Sections");
NEED_NO_BOX(::UnityEngine::Rendering::CoreUtils___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CoreUtils___c*, "UnityEngine.Rendering", "CoreUtils/<>c");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::CoreUtils___c__98_1, "UnityEngine.Rendering", "CoreUtils/<>c__98`1");
