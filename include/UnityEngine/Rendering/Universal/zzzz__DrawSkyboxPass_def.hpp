#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DrawSkyboxPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(DrawSkyboxPass)
namespace UnityEngine::Experimental::Rendering {
class XRPass;
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
struct RendererListHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass___c;
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
class ContextContainer;
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
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass;
}
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DrawSkyboxPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DrawSkyboxPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DrawSkyboxPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DrawSkyboxPass/PassData
class CORDL_TYPE DrawSkyboxPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field material, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field skyRendererListHandle, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_skyRendererListHandle,
                      put = __cordl_internal_set_skyRendererListHandle)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle skyRendererListHandle;

  /// @brief Field xr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_xr, put = __cordl_internal_set_xr)) ::UnityEngine::Experimental::Rendering::XRPass* xr;

  static inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_skyRendererListHandle() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_skyRendererListHandle();

  constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& __cordl_internal_get_xr() const;

  constexpr ::UnityEngine::Experimental::Rendering::XRPass*& __cordl_internal_get_xr();

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_skyRendererListHandle(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  constexpr void __cordl_internal_set_xr(::UnityEngine::Experimental::Rendering::XRPass* value);

  /// @brief Method .ctor, addr 0x6664cec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawSkyboxPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawSkyboxPass_PassData(DrawSkyboxPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawSkyboxPass_PassData(DrawSkyboxPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12801 };

  /// @brief Field xr, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Experimental::Rendering::XRPass* ___xr;

  /// @brief Field skyRendererListHandle, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___skyRendererListHandle;

  /// @brief Field material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData, ___xr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData, ___skyRendererListHandle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData, ___material) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DrawSkyboxPass/<>c
class CORDL_TYPE DrawSkyboxPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0,
                      put = setStaticF___9__7_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__7_0;

  static inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c* New_ctor();

  /// @brief Method <Render>b__7_0, addr 0x6664d48, size 0x4c, virtual false, abstract: false, final false
  inline void _Render_b__7_0(::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x6664d44, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__7_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DrawSkyboxPass___c* value);

  static inline void setStaticF___9__7_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawSkyboxPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawSkyboxPass___c(DrawSkyboxPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawSkyboxPass___c(DrawSkyboxPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12802 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DrawSkyboxPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DrawSkyboxPass
class CORDL_TYPE DrawSkyboxPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::DrawSkyboxPass___c;

  /// @brief Method CreateSkyBoxRendererList, addr 0x6664468, size 0x170, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle CreateSkyBoxRendererList(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                                                  ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method CreateSkyboxRendererList, addr 0x66641a8, size 0x1a0, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererList CreateSkyboxRendererList(::UnityEngine::Rendering::ScriptableRenderContext context,
                                                                         ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData);

  /// @brief Method Execute, addr 0x6664070, size 0x138, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6664348, size 0x120, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Experimental::Rendering::XRPass* xr, ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method InitPassData, addr 0x66645d8, size 0x38, virtual false, abstract: false, final false
  inline void InitPassData(::ByRef<::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*> passData, ::ByRef<::UnityEngine::Experimental::Rendering::XRPass*> xr,
                           ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> handle);

  static inline ::UnityEngine::Rendering::Universal::DrawSkyboxPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

  /// @brief Method Render, addr 0x6664610, size 0x6dc, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget, ::UnityEngine::Material* skyboxMaterial);

  /// @brief Method .ctor, addr 0x6663fdc, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawSkyboxPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawSkyboxPass(DrawSkyboxPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawSkyboxPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawSkyboxPass(DrawSkyboxPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12803 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DrawSkyboxPass, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawSkyboxPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawSkyboxPass*, "UnityEngine.Rendering.Universal", "DrawSkyboxPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawSkyboxPass_PassData*, "UnityEngine.Rendering.Universal", "DrawSkyboxPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DrawSkyboxPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DrawSkyboxPass___c*, "UnityEngine.Rendering.Universal", "DrawSkyboxPass/<>c");
