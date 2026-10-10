#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/CopyColorPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CopyColorPass)
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
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
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct Downsampling;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderTargetHandle;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyColorPass___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::CopyColorPass*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::CopyColorPass*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass/<>c");
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.Universal.Downsampling
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyColorPass/PassData
class CORDL_TYPE CopyColorPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field copyColorMaterial, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_copyColorMaterial, put = __cordl_internal_set_copyColorMaterial)) ::UnityW<::UnityEngine::Material> copyColorMaterial;

  /// @brief Field destination, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field downsamplingMethod, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_downsamplingMethod, put = __cordl_internal_set_downsamplingMethod)) ::UnityEngine::Rendering::Universal::Downsampling downsamplingMethod;

  /// @brief Field sampleOffsetShaderHandle, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_sampleOffsetShaderHandle, put = __cordl_internal_set_sampleOffsetShaderHandle)) int32_t sampleOffsetShaderHandle;

  /// @brief Field samplingMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_samplingMaterial, put = __cordl_internal_set_samplingMaterial)) ::UnityW<::UnityEngine::Material> samplingMaterial;

  /// @brief Field source, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  /// @brief Field useProceduralBlit, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_useProceduralBlit, put = __cordl_internal_set_useProceduralBlit)) bool useProceduralBlit;

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_copyColorMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_copyColorMaterial();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr ::UnityEngine::Rendering::Universal::Downsampling const& __cordl_internal_get_downsamplingMethod() const;

  constexpr ::UnityEngine::Rendering::Universal::Downsampling& __cordl_internal_get_downsamplingMethod();

  constexpr int32_t const& __cordl_internal_get_sampleOffsetShaderHandle() const;

  constexpr int32_t& __cordl_internal_get_sampleOffsetShaderHandle();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_samplingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_samplingMaterial();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_source() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_source();

  constexpr bool const& __cordl_internal_get_useProceduralBlit() const;

  constexpr bool& __cordl_internal_get_useProceduralBlit();

  constexpr void __cordl_internal_set_copyColorMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_downsamplingMethod(::UnityEngine::Rendering::Universal::Downsampling value);

  constexpr void __cordl_internal_set_sampleOffsetShaderHandle(int32_t value);

  constexpr void __cordl_internal_set_samplingMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_useProceduralBlit(bool value);

  /// @brief Method .ctor, addr 0x6d21a5c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyColorPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass_PassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyColorPass_PassData(CopyColorPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass_PassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyColorPass_PassData(CopyColorPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13307 };

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field destination, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  /// @brief Field useProceduralBlit, offset: 0x30, size: 0x1, def value: None
  bool ___useProceduralBlit;

  /// @brief Field samplingMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___samplingMaterial;

  /// @brief Field copyColorMaterial, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___copyColorMaterial;

  /// @brief Field downsamplingMethod, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::Downsampling ___downsamplingMethod;

  /// @brief Field sampleOffsetShaderHandle, offset: 0x4c, size: 0x4, def value: None
  int32_t ___sampleOffsetShaderHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData, ___destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData, ___useProceduralBlit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData, ___samplingMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData, ___copyColorMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData, ___downsamplingMethod) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData, ___sampleOffsetShaderHandle) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData) == 0x50, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyColorPass/<>c
class CORDL_TYPE CopyColorPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0,
                      put = setStaticF___9__17_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__17_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* New_ctor();

  /// @brief Method <AddDownsampleAndCopyColorRenderPass>b__17_0, addr 0x6d21ab8, size 0xbc, virtual false, abstract: false, final false
  inline void _AddDownsampleAndCopyColorRenderPass_b__17_0(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* data,
                                                           ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6d21ab4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__17_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* value);

  static inline void setStaticF___9__17_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyColorPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyColorPass___c(CopyColorPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyColorPass___c(CopyColorPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13308 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Rendering.Universal.Downsampling, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyColorPass
class CORDL_TYPE CopyColorPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c;

  /// @brief Field k_CopyColorPassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_CopyColorPassName, put = setStaticF_k_CopyColorPassName)) ::StringW k_CopyColorPassName;

  /// @brief Field k_DownsampleAndCopyPassName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DownsampleAndCopyPassName, put = setStaticF_k_DownsampleAndCopyPassName)) ::StringW k_DownsampleAndCopyPassName;

  /// @brief Field m_CopyColorMaterial, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyColorMaterial, put = __cordl_internal_set_m_CopyColorMaterial)) ::UnityW<::UnityEngine::Material> m_CopyColorMaterial;

  /// @brief Field m_DownsamplingMethod, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DownsamplingMethod, put = __cordl_internal_set_m_DownsamplingMethod)) ::UnityEngine::Rendering::Universal::Downsampling m_DownsamplingMethod;

  /// @brief Field m_SampleOffsetShaderHandle, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SampleOffsetShaderHandle, put = __cordl_internal_set_m_SampleOffsetShaderHandle)) int32_t m_SampleOffsetShaderHandle;

  /// @brief Field m_SamplingMaterial, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingMaterial, put = __cordl_internal_set_m_SamplingMaterial)) ::UnityW<::UnityEngine::Material> m_SamplingMaterial;

  /// @brief Method AddDownsampleAndCopyColorRenderPass, addr 0x6d214ec, size 0x4e0, virtual false, abstract: false, final false
  inline void AddDownsampleAndCopyColorRenderPass(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination,
                                                  /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source, bool useProceduralBlit, ::StringW passName);

  /// @brief Method ConfigureDescriptor, addr 0x6d20a50, size 0x54, virtual false, abstract: false, final false
  static inline void ConfigureDescriptor(::UnityEngine::Rendering::Universal::Downsampling downsamplingMethod, ::by_ref<::UnityEngine::RenderTextureDescriptor> descriptor,
                                         ::by_ref<::UnityEngine::FilterMode> filterMode);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Execute, addr 0x6d20954, size 0x4, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6d20af8, size 0x398, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* passData,
                                 ::UnityEngine::Rendering::RTHandle* source, bool useDrawProceduralBlit);

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* samplingMaterial,
                                                                                       ::UnityEngine::Material* copyColorMaterial, ::StringW customPassName);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method OnCameraSetup, addr 0x6d20950, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Render, addr 0x6d20e90, size 0x1d4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                           ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                           /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                                                           ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  /// @brief Method RenderInternal, addr 0x6d21064, size 0x3d4, virtual false, abstract: false, final false
  inline void RenderInternal(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination,
                             /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source, bool useProceduralBlit);

  /// @brief Method RenderToExistingTexture, addr 0x6d21438, size 0xb4, virtual false, abstract: false, final false
  inline void RenderToExistingTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> destination,
                                      /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureHandle const> source,
                                      ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  /// @brief Method Setup, addr 0x6d20af0, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  /// [Obsolete("Use RTHandles for source and destination #from(2022.1) #breakingFrom(2023.1).", true)]
  /// @brief Method Setup, addr 0x6d20aa4, size 0x4c, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::Universal::RenderTargetHandle destination,
                    ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CopyColorMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CopyColorMaterial();

  constexpr ::UnityEngine::Rendering::Universal::Downsampling const& __cordl_internal_get_m_DownsamplingMethod() const;

  constexpr ::UnityEngine::Rendering::Universal::Downsampling& __cordl_internal_get_m_DownsamplingMethod();

  constexpr int32_t const& __cordl_internal_get_m_SampleOffsetShaderHandle() const;

  constexpr int32_t& __cordl_internal_get_m_SampleOffsetShaderHandle();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SamplingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SamplingMaterial();

  constexpr void __cordl_internal_set_m_CopyColorMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DownsamplingMethod(::UnityEngine::Rendering::Universal::Downsampling value);

  constexpr void __cordl_internal_set_m_SampleOffsetShaderHandle(int32_t value);

  constexpr void __cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x6d20958, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* samplingMaterial, ::UnityEngine::Material* copyColorMaterial, ::StringW customPassName);

  static inline ::StringW getStaticF_k_CopyColorPassName();

  static inline ::StringW getStaticF_k_DownsampleAndCopyPassName();

  static inline void setStaticF_k_CopyColorPassName(::StringW value);

  static inline void setStaticF_k_DownsampleAndCopyPassName(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyColorPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyColorPass(CopyColorPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyColorPass(CopyColorPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13309 };

  /// @brief Field m_SampleOffsetShaderHandle, offset: 0x5c, size: 0x4, def value: None
  int32_t ___m_SampleOffsetShaderHandle;

  /// @brief Field m_SamplingMaterial, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SamplingMaterial;

  /// @brief Field m_DownsamplingMethod, offset: 0x68, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::Downsampling ___m_DownsamplingMethod;

  /// @brief Field m_CopyColorMaterial, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CopyColorMaterial;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_SampleOffsetShaderHandle) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_SamplingMaterial) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_DownsamplingMethod) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_CopyColorMaterial) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass) == 0x78, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
