#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/CopyColorPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Downsampling_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyColorPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c);
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

  /// @brief Method .ctor, addr 0x66dae34, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyColorPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyColorPass_PassData(CopyColorPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyColorPass_PassData(CopyColorPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13043 };

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

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyColorPass/<>c
class CORDL_TYPE CopyColorPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0,
                      put = setStaticF___9__23_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__23_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* New_ctor();

  /// @brief Method <RenderInternal>b__23_0, addr 0x66dbddc, size 0x8c, virtual false, abstract: false, final false
  inline void _RenderInternal_b__23_0(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66dbdd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__23_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c* value);

  static inline void setStaticF___9__23_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyColorPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyColorPass___c(CopyColorPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyColorPass___c(CopyColorPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13044 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c, 0x10>, "Size mismatch!");

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

  /// @brief Field <destination>k__BackingField, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get__destination_k__BackingField,
                      put = __cordl_internal_set__destination_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _destination_k__BackingField;

  /// @brief Field <source>k__BackingField, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get__source_k__BackingField, put = __cordl_internal_set__source_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _source_k__BackingField;

  __declspec(property(get = get_destination, put = set_destination)) ::UnityEngine::Rendering::RTHandle* destination;

  /// @brief Field m_CopyColorMaterial, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyColorMaterial, put = __cordl_internal_set_m_CopyColorMaterial)) ::UnityW<::UnityEngine::Material> m_CopyColorMaterial;

  /// @brief Field m_DownsamplingMethod, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_DownsamplingMethod, put = __cordl_internal_set_m_DownsamplingMethod)) ::UnityEngine::Rendering::Universal::Downsampling m_DownsamplingMethod;

  /// @brief Field m_PassData, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* m_PassData;

  /// @brief Field m_SampleOffsetShaderHandle, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SampleOffsetShaderHandle, put = __cordl_internal_set_m_SampleOffsetShaderHandle)) int32_t m_SampleOffsetShaderHandle;

  /// @brief Field m_SamplingMaterial, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SamplingMaterial, put = __cordl_internal_set_m_SamplingMaterial)) ::UnityW<::UnityEngine::Material> m_SamplingMaterial;

  __declspec(property(get = get_source, put = set_source)) ::UnityEngine::Rendering::RTHandle* source;

  /// @brief Method ConfigureDescriptor, addr 0x66dae38, size 0x54, virtual false, abstract: false, final false
  static inline void ConfigureDescriptor(::UnityEngine::Rendering::Universal::Downsampling downsamplingMethod, ::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor,
                                         ::ByRef<::UnityEngine::FilterMode> filterMode);

  /// @brief Method Execute, addr 0x66daf40, size 0x200, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66db140, size 0x398, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* passData,
                                 ::UnityEngine::Rendering::RTHandle* source, bool useDrawProceduralBlit);

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyColorPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* samplingMaterial,
                                                                                       ::UnityEngine::Material* copyColorMaterial, ::StringW customPassName);

  /// @brief Method OnCameraSetup, addr 0x66daee4, size 0x5c, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Render, addr 0x66db4d8, size 0x1ac, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                                                                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                                                           ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  /// @brief Method RenderInternal, addr 0x66db684, size 0x64c, virtual false, abstract: false, final false
  inline void RenderInternal(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination,
                             ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source, bool useProceduralBlit);

  /// @brief Method RenderToExistingTexture, addr 0x66dbcd0, size 0xb4, virtual false, abstract: false, final false
  inline void RenderToExistingTexture(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                                      ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> destination, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> source,
                                      ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  /// @brief Method Setup, addr 0x66daed8, size 0xc, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination, ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  /// @brief Method Setup, addr 0x66dae8c, size 0x4c, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::Universal::RenderTargetHandle destination,
                    ::UnityEngine::Rendering::Universal::Downsampling downsampling);

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__destination_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__destination_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__source_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__source_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CopyColorMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CopyColorMaterial();

  constexpr ::UnityEngine::Rendering::Universal::Downsampling const& __cordl_internal_get_m_DownsamplingMethod() const;

  constexpr ::UnityEngine::Rendering::Universal::Downsampling& __cordl_internal_get_m_DownsamplingMethod();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr int32_t const& __cordl_internal_get_m_SampleOffsetShaderHandle() const;

  constexpr int32_t& __cordl_internal_get_m_SampleOffsetShaderHandle();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_SamplingMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_SamplingMaterial();

  constexpr void __cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CopyColorMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DownsamplingMethod(::UnityEngine::Rendering::Universal::Downsampling value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* value);

  constexpr void __cordl_internal_set_m_SampleOffsetShaderHandle(int32_t value);

  constexpr void __cordl_internal_set_m_SamplingMaterial(::UnityW<::UnityEngine::Material> value);

  /// @brief Method .ctor, addr 0x66dacdc, size 0x158, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Material* samplingMaterial, ::UnityEngine::Material* copyColorMaterial, ::StringW customPassName);

  /// @brief Method get_destination, addr 0x66daccc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_destination();

  /// @brief Method get_source, addr 0x66dacbc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_source();

  /// @brief Method set_destination, addr 0x66dacd4, size 0x8, virtual false, abstract: false, final false
  inline void set_destination(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_source, addr 0x66dacc4, size 0x8, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Rendering::RTHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyColorPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyColorPass(CopyColorPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyColorPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyColorPass(CopyColorPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13045 };

  /// @brief Field m_SampleOffsetShaderHandle, offset: 0xb8, size: 0x4, def value: None
  int32_t ___m_SampleOffsetShaderHandle;

  /// @brief Field m_SamplingMaterial, offset: 0xc0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_SamplingMaterial;

  /// @brief Field m_DownsamplingMethod, offset: 0xc8, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::Downsampling ___m_DownsamplingMethod;

  /// @brief Field m_CopyColorMaterial, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CopyColorMaterial;

  /// @brief Field <source>k__BackingField, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____source_k__BackingField;

  /// @brief Field <destination>k__BackingField, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____destination_k__BackingField;

  /// @brief Field m_PassData, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_SampleOffsetShaderHandle) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_SamplingMaterial) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_DownsamplingMethod) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_CopyColorMaterial) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ____source_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ____destination_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyColorPass, ___m_PassData) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyColorPass, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyColorPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyColorPass*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyColorPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyColorPass___c*, "UnityEngine.Rendering.Universal.Internal", "CopyColorPass/<>c");
