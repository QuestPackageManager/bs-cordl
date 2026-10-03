#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Vrs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vrs)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class ComputeGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Rendering {
class VrsResources;
}
namespace UnityEngine::Rendering {
class Vrs_ConversionPassData;
}
namespace UnityEngine::Rendering {
class Vrs_VisualizationPassData;
}
namespace UnityEngine::Rendering {
class Vrs___c;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class Vrs;
}
namespace UnityEngine::Rendering {
class Vrs_ConversionPassData;
}
namespace UnityEngine::Rendering {
class Vrs_VisualizationPassData;
}
namespace UnityEngine::Rendering {
class Vrs___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Vrs*);
MARK_REF_T(::UnityEngine::Rendering::Vrs_ConversionPassData*);
MARK_REF_T(::UnityEngine::Rendering::Vrs_VisualizationPassData*);
MARK_REF_T(::UnityEngine::Rendering::Vrs___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Vrs*, "UnityEngine.Rendering", "Vrs");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Vrs_ConversionPassData*, "UnityEngine.Rendering", "Vrs/ConversionPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Vrs_VisualizationPassData*, "UnityEngine.Rendering", "Vrs/VisualizationPassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Vrs___c*, "UnityEngine.Rendering", "Vrs/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.BufferHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.TextureDimension,
// UnityEngine.Vector2Int, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Vrs/ConversionPassData
class CORDL_TYPE Vrs_ConversionPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field computeShader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_computeShader, put = __cordl_internal_set_computeShader)) ::UnityW<::UnityEngine::ComputeShader> computeShader;

  /// @brief Field dispatchSize, offset 0x6c, size 0x8
  __declspec(property(get = __cordl_internal_get_dispatchSize, put = __cordl_internal_set_dispatchSize)) ::UnityEngine::Vector2Int dispatchSize;

  /// @brief Field kernelIndex, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_kernelIndex, put = __cordl_internal_set_kernelIndex)) int32_t kernelIndex;

  /// @brief Field mainTexDimension, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_mainTexDimension, put = __cordl_internal_set_mainTexDimension)) ::UnityEngine::Rendering::TextureDimension mainTexDimension;

  /// @brief Field mainTexHandle, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_mainTexHandle, put = __cordl_internal_set_mainTexHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle mainTexHandle;

  /// @brief Field mainTexLutHandle, offset 0x34, size 0xc
  __declspec(property(get = __cordl_internal_get_mainTexLutHandle, put = __cordl_internal_set_mainTexLutHandle)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle mainTexLutHandle;

  /// @brief Field scaleBias, offset 0x5c, size 0x10
  __declspec(property(get = __cordl_internal_get_scaleBias, put = __cordl_internal_set_scaleBias)) ::UnityEngine::Vector4 scaleBias;

  /// @brief Field sriTextureHandle, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_sriTextureHandle, put = __cordl_internal_set_sriTextureHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sriTextureHandle;

  /// @brief Field validatedShadingRateFragmentSizeHandle, offset 0x40, size 0xc
  __declspec(property(get = __cordl_internal_get_validatedShadingRateFragmentSizeHandle,
                      put = __cordl_internal_set_validatedShadingRateFragmentSizeHandle)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle validatedShadingRateFragmentSizeHandle;

  /// @brief Field yFlip, offset 0x74, size 0x1
  __declspec(property(get = __cordl_internal_get_yFlip, put = __cordl_internal_set_yFlip)) bool yFlip;

  static inline ::UnityEngine::Rendering::Vrs_ConversionPassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_computeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_computeShader();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_dispatchSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_dispatchSize();

  constexpr int32_t const& __cordl_internal_get_kernelIndex() const;

  constexpr int32_t& __cordl_internal_get_kernelIndex();

  constexpr ::UnityEngine::Rendering::TextureDimension const& __cordl_internal_get_mainTexDimension() const;

  constexpr ::UnityEngine::Rendering::TextureDimension& __cordl_internal_get_mainTexDimension();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_mainTexHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_mainTexHandle();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& __cordl_internal_get_mainTexLutHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& __cordl_internal_get_mainTexLutHandle();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_scaleBias() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_scaleBias();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_sriTextureHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_sriTextureHandle();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& __cordl_internal_get_validatedShadingRateFragmentSizeHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& __cordl_internal_get_validatedShadingRateFragmentSizeHandle();

  constexpr bool const& __cordl_internal_get_yFlip() const;

  constexpr bool& __cordl_internal_get_yFlip();

  constexpr void __cordl_internal_set_computeShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_dispatchSize(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set_kernelIndex(int32_t value);

  constexpr void __cordl_internal_set_mainTexDimension(::UnityEngine::Rendering::TextureDimension value);

  constexpr void __cordl_internal_set_mainTexHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_mainTexLutHandle(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value);

  constexpr void __cordl_internal_set_scaleBias(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_sriTextureHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_validatedShadingRateFragmentSizeHandle(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value);

  constexpr void __cordl_internal_set_yFlip(bool value);

  /// @brief Method .ctor, addr 0x6befa70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vrs_ConversionPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vrs_ConversionPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vrs_ConversionPassData(Vrs_ConversionPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vrs_ConversionPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vrs_ConversionPassData(Vrs_ConversionPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9260 };

  /// @brief Field sriTextureHandle, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___sriTextureHandle;

  /// @brief Field mainTexHandle, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___mainTexHandle;

  /// @brief Field mainTexDimension, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::Rendering::TextureDimension ___mainTexDimension;

  /// @brief Field mainTexLutHandle, offset: 0x34, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ___mainTexLutHandle;

  /// @brief Field validatedShadingRateFragmentSizeHandle, offset: 0x40, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ___validatedShadingRateFragmentSizeHandle;

  /// @brief Field computeShader, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___computeShader;

  /// @brief Field kernelIndex, offset: 0x58, size: 0x4, def value: None
  int32_t ___kernelIndex;

  /// @brief Field scaleBias, offset: 0x5c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___scaleBias;

  /// @brief Field dispatchSize, offset: 0x6c, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___dispatchSize;

  /// @brief Field yFlip, offset: 0x74, size: 0x1, def value: None
  bool ___yFlip;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___sriTextureHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___mainTexHandle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___mainTexDimension) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___mainTexLutHandle) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___validatedShadingRateFragmentSizeHandle) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___computeShader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___kernelIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___scaleBias) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___dispatchSize) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_ConversionPassData, ___yFlip) == 0x74, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Vrs_ConversionPassData) == 0x78, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.BufferHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Vector4
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Vrs/VisualizationPassData
class CORDL_TYPE Vrs_VisualizationPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field dummy, offset 0x34, size 0x10
  __declspec(property(get = __cordl_internal_get_dummy, put = __cordl_internal_set_dummy)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle dummy;

  /// @brief Field lut, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_lut, put = __cordl_internal_set_lut)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle lut;

  /// @brief Field material, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field source, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  /// @brief Field visualizationParams, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get_visualizationParams, put = __cordl_internal_set_visualizationParams)) ::UnityEngine::Vector4 visualizationParams;

  static inline ::UnityEngine::Rendering::Vrs_VisualizationPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_dummy() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_dummy();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& __cordl_internal_get_lut() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& __cordl_internal_get_lut();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_source() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_source();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_visualizationParams() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_visualizationParams();

  constexpr void __cordl_internal_set_dummy(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_lut(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_visualizationParams(::UnityEngine::Vector4 value);

  /// @brief Method .ctor, addr 0x6befa74, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vrs_VisualizationPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vrs_VisualizationPassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vrs_VisualizationPassData(Vrs_VisualizationPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vrs_VisualizationPassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vrs_VisualizationPassData(Vrs_VisualizationPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9261 };

  /// @brief Field material, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field source, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field lut, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ___lut;

  /// @brief Field dummy, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___dummy;

  /// @brief Field visualizationParams, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___visualizationParams;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Vrs_VisualizationPassData, ___material) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_VisualizationPassData, ___source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_VisualizationPassData, ___lut) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_VisualizationPassData, ___dummy) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Vrs_VisualizationPassData, ___visualizationParams) == 0x44, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Vrs_VisualizationPassData) == 0x58, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Vrs/<>c
class CORDL_TYPE Vrs___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Vrs___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0,
                      put = setStaticF___9__10_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_VisualizationPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__10_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0,
                      put = setStaticF___9__9_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_ConversionPassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__9_0;

  static inline ::UnityEngine::Rendering::Vrs___c* New_ctor();

  /// @brief Method <ColorMaskTextureToShadingRateImage>b__9_0, addr 0x6befad0, size 0x74, virtual false, abstract: false, final false
  inline void _ColorMaskTextureToShadingRateImage_b__9_0(::UnityEngine::Rendering::Vrs_ConversionPassData* innerPassData, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* context);

  /// @brief Method <ShadingRateImageToColorMaskTexture>b__10_0, addr 0x6befb44, size 0x1c0, virtual false, abstract: false, final false
  inline void _ShadingRateImageToColorMaskTexture_b__10_0(::UnityEngine::Rendering::Vrs_VisualizationPassData* innerPassData, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6befacc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Vrs___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_VisualizationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__10_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_ConversionPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__9_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Vrs___c* value);

  static inline void setStaticF___9__10_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_VisualizationPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__9_0(
      ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Vrs_ConversionPassData*, ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vrs___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vrs___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vrs___c(Vrs___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vrs___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vrs___c(Vrs___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Vrs___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Vrs
class CORDL_TYPE Vrs : public ::System::Object {
public:
  // Declarations
  using ConversionPassData = ::UnityEngine::Rendering::Vrs_ConversionPassData;

  using VisualizationPassData = ::UnityEngine::Rendering::Vrs_VisualizationPassData;

  using __c = ::UnityEngine::Rendering::Vrs___c;

  /// @brief Field s_VrsResources, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_VrsResources, put = setStaticF_s_VrsResources)) ::UnityEngine::Rendering::VrsResources* s_VrsResources;

  /// @brief Field shadingRateFragmentSizeCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_shadingRateFragmentSizeCount, put = setStaticF_shadingRateFragmentSizeCount)) int32_t shadingRateFragmentSizeCount;

  /// @brief Method ColorMaskTextureToShadingRateImage, addr 0x6bedaa4, size 0x1a8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ColorMaskTextureToShadingRateImage(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                              ::UnityEngine::Rendering::RTHandle* sriRtHandle,
                                                                                                              ::UnityEngine::Rendering::RTHandle* colorMaskRtHandle, bool yFlip);

  /// @brief Method ColorMaskTextureToShadingRateImage, addr 0x6bedd7c, size 0x7e4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ColorMaskTextureToShadingRateImage(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                              ::UnityEngine::Rendering::RenderGraphModule::TextureHandle sriTextureHandle,
                                                                                                              ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorMaskHandle,
                                                                                                              ::UnityEngine::Rendering::TextureDimension colorMaskDimension, bool yFlip);

  /// @brief Method ColorMaskTextureToShadingRateImageDispatch, addr 0x6bef1fc, size 0x4ec, virtual false, abstract: false, final false
  static inline void ColorMaskTextureToShadingRateImageDispatch(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sriDestination,
                                                                ::UnityEngine::Texture* colorMaskSource, bool yFlip);

  /// @brief Method ConversionDispatch, addr 0x6beef64, size 0x298, virtual false, abstract: false, final false
  static inline void ConversionDispatch(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::UnityEngine::Rendering::Vrs_ConversionPassData* conversionPassData);

  /// @brief Method DisposeResources, addr 0x6beda1c, size 0x84, virtual false, abstract: false, final false
  static inline void DisposeResources();

  /// @brief Method InitializeResources, addr 0x6bed7dc, size 0x178, virtual false, abstract: false, final false
  static inline void InitializeResources();

  /// @brief Method IsColorMaskTextureConversionSupported, addr 0x6bed618, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsColorMaskTextureConversionSupported();

  /// @brief Method IsInitialized, addr 0x6bed6c0, size 0x11c, virtual false, abstract: false, final false
  static inline bool IsInitialized();

  /// @brief Method ShadingRateImageToColorMaskTexture, addr 0x6bee584, size 0x930, virtual false, abstract: false, final false
  static inline void ShadingRateImageToColorMaskTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> sriTextureHandle,
                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> colorMaskHandle);

  /// @brief Method ShadingRateImageToColorMaskTextureBlit, addr 0x6bef6e8, size 0x2cc, virtual false, abstract: false, final false
  static inline void ShadingRateImageToColorMaskTextureBlit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RTHandle* sriSource,
                                                            ::UnityEngine::Rendering::RTHandle* colorMaskDestination);

  static inline ::UnityEngine::Rendering::VrsResources* getStaticF_s_VrsResources();

  static inline int32_t getStaticF_shadingRateFragmentSizeCount();

  static inline void setStaticF_s_VrsResources(::UnityEngine::Rendering::VrsResources* value);

  static inline void setStaticF_shadingRateFragmentSizeCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vrs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vrs", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vrs(Vrs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vrs", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vrs(Vrs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9263 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Vrs) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering
