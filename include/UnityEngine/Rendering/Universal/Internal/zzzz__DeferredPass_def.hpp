#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DeferredPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
CORDL_MODULE_EXPORT(DeferredPass)
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
class DeferredLights;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredPass___c;
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
class UniversalLightData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalShadowData;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredPass;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredPass_PassData;
}
namespace UnityEngine::Rendering::Universal::Internal {
class DeferredPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::Internal::DeferredPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredPass/PassData
class CORDL_TYPE DeferredPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cameraData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraData, put = __cordl_internal_set_cameraData)) ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData;

  /// @brief Field color, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color;

  /// @brief Field deferredLights, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_deferredLights, put = __cordl_internal_set_deferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights;

  /// @brief Field depth, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depth;

  /// @brief Field gbuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_gbuffer,
                      put = __cordl_internal_set_gbuffer)) ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>
      gbuffer;

  /// @brief Field lightData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lightData, put = __cordl_internal_set_lightData)) ::UnityEngine::Rendering::Universal::UniversalLightData* lightData;

  /// @brief Field shadowData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_shadowData, put = __cordl_internal_set_shadowData)) ::UnityEngine::Rendering::Universal::UniversalShadowData* shadowData;

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& __cordl_internal_get_cameraData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& __cordl_internal_get_cameraData();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_color();

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_deferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_deferredLights();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depth() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depth();

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> const& __cordl_internal_get_gbuffer() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*>& __cordl_internal_get_gbuffer();

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData* const& __cordl_internal_get_lightData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalLightData*& __cordl_internal_get_lightData();

  constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData* const& __cordl_internal_get_shadowData() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalShadowData*& __cordl_internal_get_shadowData();

  constexpr void __cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData* value);

  constexpr void __cordl_internal_set_color(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_deferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  constexpr void __cordl_internal_set_depth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_gbuffer(::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> value);

  constexpr void __cordl_internal_set_lightData(::UnityEngine::Rendering::Universal::UniversalLightData* value);

  constexpr void __cordl_internal_set_shadowData(::UnityEngine::Rendering::Universal::UniversalShadowData* value);

  /// @brief Method .ctor, addr 0x66ddfa8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredPass_PassData(DeferredPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredPass_PassData(DeferredPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13050 };

  /// @brief Field cameraData, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraData* ___cameraData;

  /// @brief Field lightData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalLightData* ___lightData;

  /// @brief Field shadowData, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalShadowData* ___shadowData;

  /// @brief Field color, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___color;

  /// @brief Field depth, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depth;

  /// @brief Field gbuffer, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> ___gbuffer;

  /// @brief Field deferredLights, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___deferredLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData, ___cameraData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData, ___lightData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData, ___shadowData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData, ___color) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData, ___depth) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData, ___gbuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData, ___deferredLights) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData, 0x58>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredPass/<>c
class CORDL_TYPE DeferredPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::Internal::DeferredPass___c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0,
                      put = setStaticF___9__5_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__5_0;

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredPass___c* New_ctor();

  /// @brief Method <Render>b__5_0, addr 0x66de004, size 0x30, virtual false, abstract: false, final false
  inline void _Render_b__5_0(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext context);

  /// @brief Method .ctor, addr 0x66de000, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__5_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::Internal::DeferredPass___c* value);

  static inline void setStaticF___9__5_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredPass___c(DeferredPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredPass___c(DeferredPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13051 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
// Dependencies UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal::Internal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.Internal.DeferredPass
class CORDL_TYPE DeferredPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::Internal::DeferredPass___c;

  /// @brief Field m_DeferredLights, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredLights, put = __cordl_internal_set_m_DeferredLights)) ::UnityEngine::Rendering::Universal::Internal::DeferredLights* m_DeferredLights;

  /// @brief Method Configure, addr 0x66dd670, size 0x4c, virtual true, abstract: false, final false
  inline void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::RenderTextureDescriptor cameraTextureDescripor);

  /// @brief Method Execute, addr 0x66dd6bc, size 0x124, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  static inline ::UnityEngine::Rendering::Universal::Internal::DeferredPass* New_ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt,
                                                                                      ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);

  /// @brief Method OnCameraCleanup, addr 0x66ddf90, size 0x18, virtual true, abstract: false, final false
  inline void OnCameraCleanup(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method Render, addr 0x66dd7e0, size 0x7b0, virtual false, abstract: false, final false
  inline void Render(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData,
                     ::UnityEngine::Rendering::RenderGraphModule::TextureHandle color, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depth,
                     ::ArrayW<::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::Array<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*> gbuffer);

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights* const& __cordl_internal_get_m_DeferredLights() const;

  constexpr ::UnityEngine::Rendering::Universal::Internal::DeferredLights*& __cordl_internal_get_m_DeferredLights();

  constexpr void __cordl_internal_set_m_DeferredLights(::UnityEngine::Rendering::Universal::Internal::DeferredLights* value);

  /// @brief Method .ctor, addr 0x66dd5a0, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::RenderPassEvent evt, ::UnityEngine::Rendering::Universal::Internal::DeferredLights* deferredLights);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeferredPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DeferredPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeferredPass(DeferredPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeferredPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeferredPass(DeferredPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13052 };

  /// @brief Field m_DeferredLights, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::Internal::DeferredLights* ___m_DeferredLights;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::Internal::DeferredPass, ___m_DeferredLights) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::Internal::DeferredPass, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal::Internal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredPass*, "UnityEngine.Rendering.Universal.Internal", "DeferredPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredPass_PassData*, "UnityEngine.Rendering.Universal.Internal", "DeferredPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Internal::DeferredPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Internal::DeferredPass___c*, "UnityEngine.Rendering.Universal.Internal", "DeferredPass/<>c");
