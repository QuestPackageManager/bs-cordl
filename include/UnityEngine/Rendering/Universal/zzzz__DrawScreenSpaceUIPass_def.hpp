#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DrawScreenSpaceUIPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DrawScreenSpaceUIPass)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
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
namespace UnityEngine::Rendering::RenderGraphModule {
class UnsafeGraphContext;
}
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass_UnsafePassData;
}
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass___c;
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
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
class UnsafeCommandBuffer;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass;
}
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass_UnsafePassData;
}
namespace UnityEngine::Rendering::Universal {
class DrawScreenSpaceUIPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass/PassData
class CORDL_TYPE DrawScreenSpaceUIPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field rendererList, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  static inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x66c9af8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawScreenSpaceUIPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawScreenSpaceUIPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawScreenSpaceUIPass_PassData(DrawScreenSpaceUIPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawScreenSpaceUIPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawScreenSpaceUIPass_PassData(DrawScreenSpaceUIPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12801 };

  /// @brief Field rendererList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData, ___rendererList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass/UnsafePassData
class CORDL_TYPE DrawScreenSpaceUIPass_UnsafePassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field colorTarget, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_colorTarget, put = __cordl_internal_set_colorTarget)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget;

  /// @brief Field rendererList, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  static inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_colorTarget() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_colorTarget();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr void __cordl_internal_set_colorTarget(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x66cb77c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawScreenSpaceUIPass_UnsafePassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawScreenSpaceUIPass_UnsafePassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawScreenSpaceUIPass_UnsafePassData(DrawScreenSpaceUIPass_UnsafePassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawScreenSpaceUIPass_UnsafePassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawScreenSpaceUIPass_UnsafePassData(DrawScreenSpaceUIPass_UnsafePassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12802 };

  /// @brief Field rendererList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  /// @brief Field colorTarget, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___colorTarget;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData, ___rendererList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData, ___colorTarget) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass/<>c
class CORDL_TYPE DrawScreenSpaceUIPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* __9;

  /// @brief Field <>9__17_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_0,
                      put = setStaticF___9__17_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__17_0;

  /// @brief Field <>9__17_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__17_1,
                      put = setStaticF___9__17_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__17_1;

  /// @brief Field <>9__18_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_0,
                      put = setStaticF___9__18_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__18_0;

  /// @brief Field <>9__18_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__18_1,
                      put = setStaticF___9__18_1)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* __9__18_1;

  static inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* New_ctor();

  /// @brief Method <RenderOffscreen>b__17_0, addr 0x66cb7d8, size 0xa8, virtual false, abstract: false, final false
  inline void _RenderOffscreen_b__17_0(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderOffscreen>b__17_1, addr 0x66cb880, size 0x120, virtual false, abstract: false, final false
  inline void _RenderOffscreen_b__17_1(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method <RenderOverlay>b__18_0, addr 0x66cb9a0, size 0xa8, virtual false, abstract: false, final false
  inline void _RenderOverlay_b__18_0(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method <RenderOverlay>b__18_1, addr 0x66cba48, size 0x120, virtual false, abstract: false, final false
  inline void _RenderOverlay_b__18_1(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext* context);

  /// @brief Method .ctor, addr 0x66cb7d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__17_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__17_1();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__18_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*
  getStaticF___9__18_1();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c* value);

  static inline void setStaticF___9__17_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__17_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

  static inline void setStaticF___9__18_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__18_1(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawScreenSpaceUIPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawScreenSpaceUIPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawScreenSpaceUIPass___c(DrawScreenSpaceUIPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawScreenSpaceUIPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawScreenSpaceUIPass___c(DrawScreenSpaceUIPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DrawScreenSpaceUIPass
class CORDL_TYPE DrawScreenSpaceUIPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData;

  using UnsafePassData = ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData;

  using __c = ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c;

  /// @brief Field m_ColorTarget, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorTarget, put = __cordl_internal_set_m_ColorTarget)) ::UnityEngine::Rendering::RTHandle* m_ColorTarget;

  /// @brief Field m_DepthTarget, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthTarget, put = __cordl_internal_set_m_DepthTarget)) ::UnityEngine::Rendering::RTHandle* m_DepthTarget;

  /// @brief Field m_PassData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* m_PassData;

  /// @brief Field m_RenderOffscreen, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RenderOffscreen, put = __cordl_internal_set_m_RenderOffscreen)) bool m_RenderOffscreen;

  /// @brief Field s_CameraDepthTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraDepthTextureID, put = setStaticF_s_CameraDepthTextureID)) int32_t s_CameraDepthTextureID;

  /// @brief Field s_CameraOpaqueTextureID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CameraOpaqueTextureID, put = setStaticF_s_CameraOpaqueTextureID)) int32_t s_CameraOpaqueTextureID;

  /// @brief Method ConfigureColorDescriptor, addr 0x66c9afc, size 0x34, virtual false, abstract: false, final false
  static inline void ConfigureColorDescriptor(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, int32_t cameraWidth, int32_t cameraHeight);

  /// @brief Method ConfigureDepthDescriptor, addr 0x66c9b30, size 0x40, virtual false, abstract: false, final false
  static inline void ConfigureDepthDescriptor(::ByRef<::UnityEngine::RenderTextureDescriptor> descriptor, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat,
                                              int32_t cameraWidth, int32_t cameraHeight);

  /// @brief Method Dispose, addr 0x66c9be0, size 0x34, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method Execute, addr 0x66c9fb4, size 0x1a8, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x66c9b70, size 0x38, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* commandBuffer, ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method ExecutePass, addr 0x66c9ba8, size 0x38, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::UnsafeCommandBuffer* commandBuffer, ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList);

  static inline ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool renderOffscreen);

  /// @brief Method OnCameraSetup, addr 0x66c9da4, size 0x210, virtual true, abstract: false, final false
  inline void OnCameraSetup(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method RenderOffscreen, addr 0x66ca15c, size 0xc2c, virtual false, abstract: false, final false
  inline void RenderOffscreen(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                              ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> output);

  /// @brief Method RenderOverlay, addr 0x66cad88, size 0x950, virtual false, abstract: false, final false
  inline void RenderOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                            ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> colorBuffer, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::TextureHandle> depthBuffer);

  /// @brief Method Setup, addr 0x66c9c14, size 0x190, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat);

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_ColorTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_ColorTarget();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DepthTarget() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DepthTarget();

  constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr bool const& __cordl_internal_get_m_RenderOffscreen() const;

  constexpr bool& __cordl_internal_get_m_RenderOffscreen();

  constexpr void __cordl_internal_set_m_ColorTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_DepthTarget(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* value);

  constexpr void __cordl_internal_set_m_RenderOffscreen(bool value);

  /// @brief Method .ctor, addr 0x66c9a30, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, bool renderOffscreen);

  static inline int32_t getStaticF_s_CameraDepthTextureID();

  static inline int32_t getStaticF_s_CameraOpaqueTextureID();

  static inline void setStaticF_s_CameraDepthTextureID(int32_t value);

  static inline void setStaticF_s_CameraOpaqueTextureID(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawScreenSpaceUIPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawScreenSpaceUIPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawScreenSpaceUIPass(DrawScreenSpaceUIPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawScreenSpaceUIPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawScreenSpaceUIPass(DrawScreenSpaceUIPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12804 };

  /// @brief Field m_PassData, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData* ___m_PassData;

  /// @brief Field m_ColorTarget, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_ColorTarget;

  /// @brief Field m_DepthTarget, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DepthTarget;

  /// @brief Field m_RenderOffscreen, offset: 0xd0, size: 0x1, def value: None
  bool ___m_RenderOffscreen;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass, ___m_PassData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass, ___m_ColorTarget) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass, ___m_DepthTarget) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass, ___m_RenderOffscreen) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass*, "UnityEngine.Rendering.Universal", "DrawScreenSpaceUIPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_PassData*, "UnityEngine.Rendering.Universal", "DrawScreenSpaceUIPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass_UnsafePassData*, "UnityEngine.Rendering.Universal", "DrawScreenSpaceUIPass/UnsafePassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawScreenSpaceUIPass___c*, "UnityEngine.Rendering.Universal", "DrawScreenSpaceUIPass/<>c");
