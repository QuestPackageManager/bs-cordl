#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/CopyDepthPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c);
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
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass_ShaderConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass_ShaderConstants(CopyDepthPass_ShaderConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass_ShaderConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass_ShaderConstants(CopyDepthPass_ShaderConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13046 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyDepthPass/PassData
class CORDL_TYPE CopyDepthPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field copyDepthMaterial, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_copyDepthMaterial, put = __cordl_internal_set_copyDepthMaterial)) ::UnityW<::UnityEngine::Material> copyDepthMaterial;

  /// @brief Field copyResolvedDepth, offset 0x34, size 0x1
  __declspec(property(get = __cordl_internal_get_copyResolvedDepth, put = __cordl_internal_set_copyResolvedDepth)) bool copyResolvedDepth;

  /// @brief Field copyToDepth, offset 0x35, size 0x1
  __declspec(property(get = __cordl_internal_get_copyToDepth, put = __cordl_internal_set_copyToDepth)) bool copyToDepth;

  /// @brief Field isDstBackbuffer, offset 0x36, size 0x1
  __declspec(property(get = __cordl_internal_get_isDstBackbuffer, put = __cordl_internal_set_isDstBackbuffer)) bool isDstBackbuffer;

  /// @brief Field msaaSamples, offset 0x30, size 0x4
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

  constexpr void __cordl_internal_set_isDstBackbuffer(bool value);

  constexpr void __cordl_internal_set_msaaSamples(int32_t value);

  constexpr void __cordl_internal_set_source(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x66dc0a8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyDepthPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass_PassData(CopyDepthPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass_PassData(CopyDepthPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13047 };

  /// @brief Field source, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___source;

  /// @brief Field cameraData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field copyDepthMaterial, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___copyDepthMaterial;

  /// @brief Field msaaSamples, offset: 0x30, size: 0x4, def value: None
  int32_t ___msaaSamples;

  /// @brief Field copyResolvedDepth, offset: 0x34, size: 0x1, def value: None
  bool ___copyResolvedDepth;

  /// @brief Field copyToDepth, offset: 0x35, size: 0x1, def value: None
  bool ___copyToDepth;

  /// @brief Field isDstBackbuffer, offset: 0x36, size: 0x1, def value: None
  bool ___isDstBackbuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___cameraData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___copyDepthMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___msaaSamples) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___copyResolvedDepth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___copyToDepth) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, ___isDstBackbuffer) == 0x36, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.CopyDepthPass/<>c
class CORDL_TYPE CopyDepthPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* __9;

  /// @brief Field <>9__38_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__38_0,
                      put = setStaticF___9__38_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__38_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* New_ctor();

  /// @brief Method <Render>b__38_0, addr 0x66dd518, size 0x88, virtual false, abstract: false, final false
  inline void _Render_b__38_0(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66dd514, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__38_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c* value);

  static inline void setStaticF___9__38_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyDepthPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass___c(CopyDepthPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass___c(CopyDepthPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13048 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c, 0x10>, "Size mismatch!");

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

  __declspec(property(get = get_MssaSamples, put = set_MssaSamples)) int32_t MssaSamples;

  /// @brief Field <CopyToBackbuffer>k__BackingField, offset 0xce, size 0x1
  __declspec(property(get = __cordl_internal_get__CopyToBackbuffer_k__BackingField, put = __cordl_internal_set__CopyToBackbuffer_k__BackingField)) bool _CopyToBackbuffer_k__BackingField;

  /// @brief Field <CopyToDepthXR>k__BackingField, offset 0xcd, size 0x1
  __declspec(property(get = __cordl_internal_get__CopyToDepthXR_k__BackingField, put = __cordl_internal_set__CopyToDepthXR_k__BackingField)) bool _CopyToDepthXR_k__BackingField;

  /// @brief Field <CopyToDepth>k__BackingField, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get__CopyToDepth_k__BackingField, put = __cordl_internal_set__CopyToDepth_k__BackingField)) bool _CopyToDepth_k__BackingField;

  /// @brief Field <MssaSamples>k__BackingField, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get__MssaSamples_k__BackingField, put = __cordl_internal_set__MssaSamples_k__BackingField)) int32_t _MssaSamples_k__BackingField;

  /// @brief Field <destination>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__destination_k__BackingField,
                      put = __cordl_internal_set__destination_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _destination_k__BackingField;

  /// @brief Field <source>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__source_k__BackingField, put = __cordl_internal_set__source_k__BackingField)) ::UnityEngine::Rendering::RTHandle* _source_k__BackingField;

  __declspec(property(get = get_destination, put = set_destination)) ::UnityEngine::Rendering::RTHandle* destination;

  /// @brief Field m_CopyDepthMaterial, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CopyDepthMaterial, put = __cordl_internal_set_m_CopyDepthMaterial)) ::UnityW<::UnityEngine::Material> m_CopyDepthMaterial;

  /// @brief Field m_CopyResolvedDepth, offset 0xd8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_CopyResolvedDepth, put = __cordl_internal_set_m_CopyResolvedDepth)) bool m_CopyResolvedDepth;

  /// @brief Field m_PassData, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* m_PassData;

  /// @brief Field m_ShouldClear, offset 0xd9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ShouldClear, put = __cordl_internal_set_m_ShouldClear)) bool m_ShouldClear;

  __declspec(property(get = get_source, put = set_source)) ::UnityEngine::Rendering::RTHandle* source;

  /// @brief Method Dispose, addr 0x66dc0bc, size 0x60, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x66dc154, size 0x1e0, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66dc334, size 0x618, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* passData,
                                 ::UnityEngine::Rendering::RTHandle* source);

  static inline ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader,
                                                                                       bool shouldClear, bool copyToDepth, bool copyResolvedDepth, ::StringW customPassName);

  /// @brief Method OnCameraCleanup, addr 0x66dc94c, size 0xbc, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnCameraSetup, addr 0x66dc11c, size 0x38, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method Render, addr 0x66dcb00, size 0x8e8, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, ::UnityEngine::Rendering::Universal::UniversalResourceData* resourceData,
                     ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, bool bindAsCameraDepth, ::StringW passName);

  /// @brief Method Render, addr 0x66dca08, size 0xf8, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle destination, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle source, bool bindAsCameraDepth,
                     ::StringW passName);

  /// @brief Method Setup, addr 0x66dc0ac, size 0x10, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* source, ::UnityEngine::Rendering::RTHandle* destination);

  constexpr bool const& __cordl_internal_get__CopyToBackbuffer_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CopyToBackbuffer_k__BackingField();

  constexpr bool const& __cordl_internal_get__CopyToDepthXR_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CopyToDepthXR_k__BackingField();

  constexpr bool const& __cordl_internal_get__CopyToDepth_k__BackingField() const;

  constexpr bool& __cordl_internal_get__CopyToDepth_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__MssaSamples_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__MssaSamples_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__destination_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__destination_k__BackingField();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get__source_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get__source_k__BackingField();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_CopyDepthMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_CopyDepthMaterial();

  constexpr bool const& __cordl_internal_get_m_CopyResolvedDepth() const;

  constexpr bool& __cordl_internal_get_m_CopyResolvedDepth();

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr bool const& __cordl_internal_get_m_ShouldClear() const;

  constexpr bool& __cordl_internal_get_m_ShouldClear();

  constexpr void __cordl_internal_set__CopyToBackbuffer_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CopyToDepthXR_k__BackingField(bool value);

  constexpr void __cordl_internal_set__CopyToDepth_k__BackingField(bool value);

  constexpr void __cordl_internal_set__MssaSamples_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__destination_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set__source_k__BackingField(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_CopyDepthMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_CopyResolvedDepth(bool value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* value);

  constexpr void __cordl_internal_set_m_ShouldClear(bool value);

  /// @brief Method .ctor, addr 0x66dbec8, size 0x1e0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Shader* copyDepthShader, bool shouldClear, bool copyToDepth, bool copyResolvedDepth,
                    ::StringW customPassName);

  /// @brief Method get_CopyToBackbuffer, addr 0x66dbeb8, size 0x8, virtual false, abstract: false, final false
  inline bool get_CopyToBackbuffer();

  /// @brief Method get_CopyToDepth, addr 0x66dbe98, size 0x8, virtual false, abstract: false, final false
  inline bool get_CopyToDepth();

  /// @brief Method get_CopyToDepthXR, addr 0x66dbea8, size 0x8, virtual false, abstract: false, final false
  inline bool get_CopyToDepthXR();

  /// @brief Method get_MssaSamples, addr 0x66dbe88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MssaSamples();

  /// @brief Method get_destination, addr 0x66dbe78, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_destination();

  /// @brief Method get_source, addr 0x66dbe68, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RTHandle* get_source();

  /// @brief Method set_CopyToBackbuffer, addr 0x66dbec0, size 0x8, virtual false, abstract: false, final false
  inline void set_CopyToBackbuffer(bool value);

  /// @brief Method set_CopyToDepth, addr 0x66dbea0, size 0x8, virtual false, abstract: false, final false
  inline void set_CopyToDepth(bool value);

  /// @brief Method set_CopyToDepthXR, addr 0x66dbeb0, size 0x8, virtual false, abstract: false, final false
  inline void set_CopyToDepthXR(bool value);

  /// @brief Method set_MssaSamples, addr 0x66dbe90, size 0x8, virtual false, abstract: false, final false
  inline void set_MssaSamples(int32_t value);

  /// @brief Method set_destination, addr 0x66dbe80, size 0x8, virtual false, abstract: false, final false
  inline void set_destination(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method set_source, addr 0x66dbe70, size 0x8, virtual false, abstract: false, final false
  inline void set_source(::UnityEngine::Rendering::RTHandle* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CopyDepthPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CopyDepthPass(CopyDepthPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CopyDepthPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CopyDepthPass(CopyDepthPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13049 };

  /// @brief Field <source>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____source_k__BackingField;

  /// @brief Field <destination>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ____destination_k__BackingField;

  /// @brief Field <MssaSamples>k__BackingField, offset: 0xc8, size: 0x4, def value: None
  int32_t ____MssaSamples_k__BackingField;

  /// @brief Field <CopyToDepth>k__BackingField, offset: 0xcc, size: 0x1, def value: None
  bool ____CopyToDepth_k__BackingField;

  /// @brief Field <CopyToDepthXR>k__BackingField, offset: 0xcd, size: 0x1, def value: None
  bool ____CopyToDepthXR_k__BackingField;

  /// @brief Field <CopyToBackbuffer>k__BackingField, offset: 0xce, size: 0x1, def value: None
  bool ____CopyToBackbuffer_k__BackingField;

  /// @brief Field m_CopyDepthMaterial, offset: 0xd0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_CopyDepthMaterial;

  /// @brief Field m_CopyResolvedDepth, offset: 0xd8, size: 0x1, def value: None
  bool ___m_CopyResolvedDepth;

  /// @brief Field m_ShouldClear, offset: 0xd9, size: 0x1, def value: None
  bool ___m_ShouldClear;

  /// @brief Field m_PassData, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____source_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____destination_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____MssaSamples_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____CopyToDepth_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____CopyToDepthXR_k__BackingField) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ____CopyToBackbuffer_k__BackingField) == 0xce, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ___m_CopyDepthMaterial) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ___m_CopyResolvedDepth) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ___m_ShouldClear) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, ___m_PassData) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::CopyDepthPass, 0xe8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass_ShaderConstants*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass/ShaderConstants");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::CopyDepthPass___c*, "UnityEngine.Rendering.Universal.Internal", "CopyDepthPass/<>c");
