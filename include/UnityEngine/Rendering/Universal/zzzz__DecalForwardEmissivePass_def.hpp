#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalForwardEmissivePass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
CORDL_MODULE_EXPORT(DecalForwardEmissivePass)
namespace System::Collections::Generic {
template <typename T> class List_1;
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
namespace UnityEngine::Rendering::Universal {
class DecalDrawFowardEmissiveSystem;
}
namespace UnityEngine::Rendering::Universal {
class DecalForwardEmissivePass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DecalForwardEmissivePass___c;
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
class UniversalRenderingData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RendererListParams;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShaderTagId;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalForwardEmissivePass;
}
namespace UnityEngine::Rendering::Universal {
class DecalForwardEmissivePass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DecalForwardEmissivePass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalForwardEmissivePass/PassData
class CORDL_TYPE DecalForwardEmissivePass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field drawSystem, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_drawSystem, put = __cordl_internal_set_drawSystem)) ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* drawSystem;

  /// @brief Field rendererList, offset 0x18, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  static inline ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* const& __cordl_internal_get_drawSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*& __cordl_internal_get_drawSystem();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr void __cordl_internal_set_drawSystem(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* value);

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x663707c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalForwardEmissivePass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalForwardEmissivePass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalForwardEmissivePass_PassData(DecalForwardEmissivePass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalForwardEmissivePass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalForwardEmissivePass_PassData(DecalForwardEmissivePass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12647 };

  /// @brief Field drawSystem, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* ___drawSystem;

  /// @brief Field rendererList, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData, ___drawSystem) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData, ___rendererList) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalForwardEmissivePass/<>c
class CORDL_TYPE DecalForwardEmissivePass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c* __9;

  /// @brief Field <>9__10_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__10_0,
                      put = setStaticF___9__10_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__10_0;

  static inline ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__10_0, addr 0x6637bec, size 0x50, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__10_0(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x6637be8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__10_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c* value);

  static inline void setStaticF___9__10_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalForwardEmissivePass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalForwardEmissivePass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalForwardEmissivePass___c(DecalForwardEmissivePass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalForwardEmissivePass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalForwardEmissivePass___c(DecalForwardEmissivePass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12648 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalForwardEmissivePass
class CORDL_TYPE DecalForwardEmissivePass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c;

  /// @brief Field m_DrawSystem, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawSystem, put = __cordl_internal_set_m_DrawSystem)) ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* m_DrawSystem;

  /// @brief Field m_FilteringSettings, offset 0xb8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* m_PassData;

  /// @brief Field m_ShaderTagIdList, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Method Execute, addr 0x6637080, size 0x268, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x6637438, size 0x60, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList);

  /// @brief Method InitPassData, addr 0x66372e8, size 0x1c, virtual false, abstract: false, final false
  inline void InitPassData(::ByRef<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*> passData);

  /// @brief Method InitRendererListParams, addr 0x6637304, size 0x134, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RendererListParams InitRendererListParams(::UnityEngine::Rendering::Universal::UniversalRenderingData* renderingData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalCameraData* cameraData,
                                                                             ::UnityEngine::Rendering::Universal::UniversalLightData* lightData);

  static inline ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass* New_ctor(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* drawSystem);

  /// @brief Method RecordRenderGraph, addr 0x6637498, size 0x6fc, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* const& __cordl_internal_get_m_DrawSystem() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem*& __cordl_internal_get_m_DrawSystem();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr void __cordl_internal_set_m_DrawSystem(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x6636da0, size 0x2dc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* drawSystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalForwardEmissivePass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalForwardEmissivePass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalForwardEmissivePass(DecalForwardEmissivePass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalForwardEmissivePass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalForwardEmissivePass(DecalForwardEmissivePass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12649 };

  /// @brief Field m_FilteringSettings, offset: 0xb8, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_ShaderTagIdList, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_DrawSystem, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalDrawFowardEmissiveSystem* ___m_DrawSystem;

  /// @brief Field m_PassData, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass, ___m_FilteringSettings) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass, ___m_ShaderTagIdList) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass, ___m_DrawSystem) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass, ___m_PassData) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalForwardEmissivePass, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass*, "UnityEngine.Rendering.Universal", "DecalForwardEmissivePass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass_PassData*, "UnityEngine.Rendering.Universal", "DecalForwardEmissivePass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalForwardEmissivePass___c*, "UnityEngine.Rendering.Universal", "DecalForwardEmissivePass/<>c");
