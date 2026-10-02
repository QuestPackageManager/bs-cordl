#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/CopyDepthPass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CopyDepthPass)
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
class CopyDepthPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalResourceData;
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
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass_ShaderConstants;
}
namespace UnityEngine::Rendering::Universal::Internal {
class CopyDepthPass___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*);
MARK_REF_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass/PassData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass/ShaderConstants");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass/<>c");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyDepthPass/ShaderConstants
class CORDL_TYPE CopyDepthPass_ShaderConstants : public ::System::Object {
public:
  // Declarations
  /// @brief Field _CameraDepthAttachment, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CameraDepthAttachment, put = setStaticF__CameraDepthAttachment)) int32_t _CameraDepthAttachment;

  /// @brief Field _CameraDepthTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CameraDepthTexture, put = setStaticF__CameraDepthTexture)) int32_t _CameraDepthTexture;

  /// @brief Field _ZWriteShaderHandle, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__ZWriteShaderHandle, put = setStaticF__ZWriteShaderHandle)) int32_t _ZWriteShaderHandle;

  static inline int32_t getStaticF__CameraDepthAttachment();

  static inline int32_t getStaticF__CameraDepthTexture();

  static inline int32_t getStaticF__ZWriteShaderHandle();

  static inline void setStaticF__CameraDepthAttachment(int32_t value);

  static inline void setStaticF__CameraDepthTexture(int32_t value);

  static inline void setStaticF__ZWriteShaderHandle(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyDepthPass_ShaderConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass_ShaderConstants", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass_ShaderConstants(CopyDepthPass_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass_ShaderConstants", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass_ShaderConstants(CopyDepthPass_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13310 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyDepthPass/PassData
class CORDL_TYPE CopyDepthPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field copyDepthMaterial, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_copyDepthMaterial, put = __cordl_internal_set_copyDepthMaterial)) ::UnityW<::UnityEngine::Material> copyDepthMaterial;

  /// @brief Field copyResolvedDepth, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_copyResolvedDepth, put = __cordl_internal_set_copyResolvedDepth)) bool copyResolvedDepth;

  /// @brief Field copyToDepth, offset 0x45, size 0x1
  __declspec(property(get = __cordl_internal_get_copyToDepth, put = __cordl_internal_set_copyToDepth)) bool copyToDepth;

  /// @brief Field destination, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_destination, put = __cordl_internal_set_destination)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination;

  /// @brief Field isDstBackbuffer, offset 0x46, size 0x1
  __declspec(property(get = __cordl_internal_get_isDstBackbuffer, put = __cordl_internal_set_isDstBackbuffer)) bool isDstBackbuffer;

  /// @brief Field msaaSamples, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_msaaSamples, put = __cordl_internal_set_msaaSamples)) int32_t msaaSamples;

  /// @brief Field source, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_source, put = __cordl_internal_set_source)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source;

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_copyDepthMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_copyDepthMaterial();

  constexpr bool const& __cordl_internal_get_copyResolvedDepth() const;

  constexpr bool& __cordl_internal_get_copyResolvedDepth();

  constexpr bool const& __cordl_internal_get_copyToDepth() const;

  constexpr bool& __cordl_internal_get_copyToDepth();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_destination() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_destination();

  constexpr bool const& __cordl_internal_get_isDstBackbuffer() const;

  constexpr bool& __cordl_internal_get_isDstBackbuffer();

  constexpr int32_t const& __cordl_internal_get_msaaSamples() const;

  constexpr int32_t& __cordl_internal_get_msaaSamples();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_source() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_source();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_copyDepthMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_copyResolvedDepth(bool value);

  constexpr void __cordl_internal_set_copyToDepth(bool value);

  constexpr void __cordl_internal_set_destination(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_isDstBackbuffer(bool value);

  constexpr void __cordl_internal_set_msaaSamples(int32_t value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x6d22fd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyDepthPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass_PassData", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass_PassData(CopyDepthPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass_PassData", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass_PassData(CopyDepthPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13311 };

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field destination, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___destination;

  /// @brief Field cameraData, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field copyDepthMaterial, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___copyDepthMaterial;

  /// @brief Field msaaSamples, offset: 0x40, size: 0x4, def value: None
  int32_t ___msaaSamples;

  /// @brief Field copyResolvedDepth, offset: 0x44, size: 0x1, def value: None
  bool ___copyResolvedDepth;

  /// @brief Field copyToDepth, offset: 0x45, size: 0x1, def value: None
  bool ___copyToDepth;

  /// @brief Field isDstBackbuffer, offset: 0x46, size: 0x1, def value: None
  bool ___isDstBackbuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___destination) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___cameraData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___copyDepthMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___msaaSamples) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___copyResolvedDepth) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___copyToDepth) == 0x45, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___isDstBackbuffer) == 0x46, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData) == 0x48, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyDepthPass/<>c
class CORDL_TYPE CopyDepthPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* __9;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__28_0,
                      put = setStaticF___9__28_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__28_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* New_ctor();

  /// @brief Method <Render>b__28_0, addr 0x6d23034, size 0x100, virtual false, abstract: false, final false
  inline void _Render_b__28_0(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6d23030, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__28_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* value);

  static inline void setStaticF___9__28_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyDepthPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass___c(CopyDepthPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass___c(CopyDepthPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13312 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyDepthPass
class CORDL_TYPE CopyDepthPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData;

  using ShaderConstants = ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants;

  using __c = ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c;

  __declspec(property(get = get_CopyToBackbuffer, put = set_CopyToBackbuffer)) bool CopyToBackbuffer;

  __declspec(property(get = get_CopyToDepth, put = set_CopyToDepth)) bool CopyToDepth;

  __declspec(property(get = get_CopyToDepthXR, put = set_CopyToDepthXR)) bool CopyToDepthXR;

  __declspec(property(get = get_MsaaSamples, put = set_MsaaSamples)) int32_t MsaaSamples;

  /// @brief Field <CopyToBackbuffer>k__BackingField, offset 0x62, size 0x1
  __declspec(property(get = __cordl_internal_get__CopyToBackbuffer_k__BackingField, put = __cordl_internal_set__CopyToBackbuffer_k__BackingField)) bool _CopyToBackbuffer_k__BackingField;

  /// @brief Field <CopyToDepthXR>k__BackingField, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get__CopyToDepthXR_k__BackingField, put = __cordl_internal_set__CopyToDepthXR_k__BackingField)) bool _CopyToDepthXR_k__BackingField;

  /// @brief Field <CopyToDepth>k__BackingField, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__CopyToDepth_k__BackingField, put = __cordl_internal_set__CopyToDepth_k__BackingField)) bool _CopyToDepth_k__BackingField;

  /// @brief Field <MsaaSamples>k__BackingField, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__MsaaSamples_k__BackingField, put = __cordl_internal_set__MsaaSamples_k__BackingField)) int32_t _MsaaSamples_k__BackingField;

  /// @brief Field m_CopyDepthMaterial, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMaterial, put = __cordl_internal_set_m_CopyDepthMaterial)) ::UnityW<::UnityEngine::Material> m_CopyDepthMaterial;

  /// @brief Field m_CopyResolvedDepth, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CopyResolvedDepth, put = __cordl_internal_set_m_CopyResolvedDepth)) bool m_CopyResolvedDepth;

  /// @brief Method Dispose, addr 0x6d21d28, size 0x60, virtual false, abstract: false, final false
  inline void Dispose();

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method Execute, addr 0x6d21b78, size 0x4, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6d21d88, size 0x5e0, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* passData,
                                 ::UnityEngine::Rendering::RTHandle* source, bool yflip);

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader,
                                                                                       bool shouldClear, bool copyToDepth, bool copyResolvedDepth, ::StringW customPassName);

  /// @brief Method OnCameraCleanup, addr 0x6d22368, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// [Obsolete("This rendering path is for Compatibility Mode only which has been deprecated and hidden behind URP_COMPATIBILITY_MODE define. This will do nothing.")]
  /// @brief Method OnCameraSetup, addr 0x6d21b74, size 0x4, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Render, addr 0x6d22464, size 0xa9c, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool bindAsCameraDepth, ::StringW passName);

  /// @brief Method Render, addr 0x6d2236c, size 0xf8, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, bool bindAsCameraDepth,
                     ::StringW passName);

  /// @brief Method Setup, addr 0x6d21d1c, size 0xc, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination);

  constexpr bool const& __cordl_internal_get__CopyToBackbuffer_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CopyToBackbuffer_k__BackingField();

  constexpr bool const& __cordl_internal_get__CopyToDepthXR_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CopyToDepthXR_k__BackingField();

  constexpr bool const& __cordl_internal_get__CopyToDepth_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CopyToDepth_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__MsaaSamples_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MsaaSamples_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CopyDepthMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CopyDepthMaterial();

  constexpr bool const& __cordl_internal_get_m_CopyResolvedDepth() const;

  constexpr bool& __cordl_internal_get_m_CopyResolvedDepth();

  constexpr void __cordl_internal_set__CopyToBackbuffer_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CopyToDepthXR_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CopyToDepth_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MsaaSamples_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CopyDepthMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CopyResolvedDepth(bool value);

  /// @brief Method .ctor, addr 0x6d21bbc, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader, bool shouldClear, bool copyToDepth, bool copyResolvedDepth,
                    ::StringW customPassName);

  /// [CompilerGenerated]
  /// @brief Method get_CopyToBackbuffer, addr 0x6d21bac, size 0x8, virtual false, abstract: false, final false
  inline bool get_CopyToBackbuffer();

  /// [CompilerGenerated]
  /// @brief Method get_CopyToDepth, addr 0x6d21b8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_CopyToDepth();

  /// [CompilerGenerated]
  /// @brief Method get_CopyToDepthXR, addr 0x6d21b9c, size 0x8, virtual false, abstract: false, final false
  inline bool get_CopyToDepthXR();

  /// [CompilerGenerated]
  /// @brief Method get_MsaaSamples, addr 0x6d21b7c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MsaaSamples();

  /// [CompilerGenerated]
  /// @brief Method set_CopyToBackbuffer, addr 0x6d21bb4, size 0x8, virtual false, abstract: false, final false
  inline void set_CopyToBackbuffer(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_CopyToDepth, addr 0x6d21b94, size 0x8, virtual false, abstract: false, final false
  inline void set_CopyToDepth(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_CopyToDepthXR, addr 0x6d21ba4, size 0x8, virtual false, abstract: false, final false
  inline void set_CopyToDepthXR(bool value);

  /// [CompilerGenerated]
  /// @brief Method set_MsaaSamples, addr 0x6d21b84, size 0x8, virtual false, abstract: false, final false
  inline void set_MsaaSamples(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyDepthPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass(CopyDepthPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass(CopyDepthPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13313 };

  /// [CompilerGenerated]
  /// @brief Field <MsaaSamples>k__BackingField, offset: 0x5c, size: 0x4, def value: None
  int32_t ____MsaaSamples_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <CopyToDepth>k__BackingField, offset: 0x60, size: 0x1, def value: None
  bool ____CopyToDepth_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <CopyToDepthXR>k__BackingField, offset: 0x61, size: 0x1, def value: None
  bool ____CopyToDepthXR_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <CopyToBackbuffer>k__BackingField, offset: 0x62, size: 0x1, def value: None
  bool ____CopyToBackbuffer_k__BackingField;

  /// @brief Field m_CopyDepthMaterial, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CopyDepthMaterial;

  /// @brief Field m_CopyResolvedDepth, offset: 0x70, size: 0x1, def value: None
  bool ___m_CopyResolvedDepth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____MsaaSamples_k__BackingField) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____CopyToDepth_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____CopyToDepthXR_k__BackingField) == 0x61, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____CopyToBackbuffer_k__BackingField) == 0x62, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ___m_CopyDepthMaterial) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ___m_CopyResolvedDepth) == 0x70, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass) == 0x78, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
