#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DrawObjectsWithRenderingLayersPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DrawObjectsPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingLayerUtils_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DrawObjectsWithRenderingLayersPass)
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
class DrawObjectsPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsWithRenderingLayersPass_RenderingLayersPassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsWithRenderingLayersPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderPassEvent;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingLayerUtils_MaskSize;
}
namespace UnityEngine::Rendering::Universal {
struct URPProfileId;
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
struct RenderQueueRange;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct StencilState;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsWithRenderingLayersPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsWithRenderingLayersPass_RenderingLayersPassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DrawObjectsWithRenderingLayersPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c);
// Dependencies System.Object, UnityEngine.Rendering.Universal.RenderingLayerUtils::MaskSize
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DrawObjectsWithRenderingLayersPass/RenderingLayersPassData
class CORDL_TYPE DrawObjectsWithRenderingLayersPass_RenderingLayersPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field basePassData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_basePassData, put = __cordl_internal_set_basePassData)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* basePassData;

  /// @brief Field maskSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_maskSize, put = __cordl_internal_set_maskSize)) ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize;

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* const& __cordl_internal_get_basePassData() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData*& __cordl_internal_get_basePassData();

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize const& __cordl_internal_get_maskSize() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize& __cordl_internal_get_maskSize();

  constexpr void __cordl_internal_set_basePassData(::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* value);

  constexpr void __cordl_internal_set_maskSize(::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize value);

  /// @brief Method .ctor, addr 0x66e39c8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawObjectsWithRenderingLayersPass_RenderingLayersPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsWithRenderingLayersPass_RenderingLayersPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawObjectsWithRenderingLayersPass_RenderingLayersPassData(DrawObjectsWithRenderingLayersPass_RenderingLayersPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsWithRenderingLayersPass_RenderingLayersPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawObjectsWithRenderingLayersPass_RenderingLayersPassData(DrawObjectsWithRenderingLayersPass_RenderingLayersPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13062 };

  /// @brief Field basePassData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass_PassData* ___basePassData;

  /// @brief Field maskSize, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize ___maskSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData, ___basePassData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData, ___maskSize) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DrawObjectsWithRenderingLayersPass/<>c
class CORDL_TYPE DrawObjectsWithRenderingLayersPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<
      ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__7_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* New_ctor();

  /// @brief Method <Render>b__7_0, addr 0x66e3a70, size 0x1d4, virtual false, abstract: false, final false
  inline void _Render_b__7_0(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData* data,
                             ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66e3a6c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__7_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c* value);

  static inline void
  setStaticF___9__7_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*,
                                                                                    ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawObjectsWithRenderingLayersPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsWithRenderingLayersPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawObjectsWithRenderingLayersPass___c(DrawObjectsWithRenderingLayersPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsWithRenderingLayersPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawObjectsWithRenderingLayersPass___c(DrawObjectsWithRenderingLayersPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13063 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Rendering.Universal.Internal.DrawObjectsPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DrawObjectsWithRenderingLayersPass
class CORDL_TYPE DrawObjectsWithRenderingLayersPass : public ::UnityEngine::Rendering::Universal::Internal::DrawObjectsPass {
public:
  // Declarations
  using RenderingLayersPassData = ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c;

  /// @brief Field m_ColorTargetIndentifiers, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ColorTargetIndentifiers,
                      put = __cordl_internal_set_m_ColorTargetIndentifiers)) ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>
      m_ColorTargetIndentifiers;

  /// @brief Field m_DepthTargetIndentifiers, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DepthTargetIndentifiers, put = __cordl_internal_set_m_DepthTargetIndentifiers)) ::UnityEngine::Rendering::RTHandle* m_DepthTargetIndentifiers;

  /// @brief Method Configure, addr 0x66e2b34, size 0xc, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor);

  /// @brief Method Execute, addr 0x66e2b40, size 0xb0, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*
  New_ctor(::UnityEngine::Rendering::Universal::URPProfileId profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
           ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

  /// @brief Method Render, addr 0x66e2bf0, size 0xdd8, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorTarget, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle renderingLayersTexture,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthTarget, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle mainShadowsTexture,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle additionalShadowsTexture, ::UnityEngine::Rendering::Universal::RenderingLayerUtils_MaskSize maskSize,
                     uint32_t batchLayerMask);

  /// @brief Method Setup, addr 0x66e29d4, size 0x160, virtual false, abstract: false, final false
  inline void Setup(::UnityEngine::Rendering::RTHandle* colorAttachment, ::UnityEngine::Rendering::RTHandle* renderingLayersTexture, ::UnityEngine::Rendering::RTHandle* depthAttachment);

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> const& __cordl_internal_get_m_ColorTargetIndentifiers() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*>& __cordl_internal_get_m_ColorTargetIndentifiers();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_m_DepthTargetIndentifiers() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_m_DepthTargetIndentifiers();

  constexpr void __cordl_internal_set_m_ColorTargetIndentifiers(::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> value);

  constexpr void __cordl_internal_set_m_DepthTargetIndentifiers(::UnityEngine::Rendering::RTHandle* value);

  /// @brief Method .ctor, addr 0x66e28f8, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::URPProfileId profilerTag, bool opaque, ::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                    ::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask, ::UnityEngine::Rendering::StencilState stencilState, int32_t stencilReference);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawObjectsWithRenderingLayersPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsWithRenderingLayersPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawObjectsWithRenderingLayersPass(DrawObjectsWithRenderingLayersPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawObjectsWithRenderingLayersPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawObjectsWithRenderingLayersPass(DrawObjectsWithRenderingLayersPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13064 };

  /// @brief Field m_ColorTargetIndentifiers, offset: 0x160, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RTHandle*, ::Array<::UnityEngine::Rendering::RTHandle*>*> ___m_ColorTargetIndentifiers;

  /// @brief Field m_DepthTargetIndentifiers, offset: 0x168, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___m_DepthTargetIndentifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass, ___m_ColorTargetIndentifiers) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass, ___m_DepthTargetIndentifiers) == 0x168, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass, 0x170>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass*, "UnityEngine.Rendering.Universal.Internal", "DrawObjectsWithRenderingLayersPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass_RenderingLayersPassData*, "UnityEngine.Rendering.Universal.Internal",
                       "DrawObjectsWithRenderingLayersPass/RenderingLayersPassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DrawObjectsWithRenderingLayersPass___c*, "UnityEngine.Rendering.Universal.Internal", "DrawObjectsWithRenderingLayersPass/<>c");
