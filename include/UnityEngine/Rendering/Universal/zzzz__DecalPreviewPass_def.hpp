#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalPreviewPass.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
CORDL_MODULE_EXPORT(DecalPreviewPass)
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
class DecalPreviewPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DecalPreviewPass___c;
}
namespace UnityEngine::Rendering::Universal {
struct RenderingData;
}
namespace UnityEngine::Rendering {
class ContextContainer;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
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
struct ShaderTagId;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalPreviewPass;
}
namespace UnityEngine::Rendering::Universal {
class DecalPreviewPass_PassData;
}
namespace UnityEngine::Rendering::Universal {
class DecalPreviewPass___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalPreviewPass);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalPreviewPass___c);
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.RendererListHandle
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalPreviewPass/PassData
class CORDL_TYPE DecalPreviewPass_PassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field rendererList, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_rendererList, put = __cordl_internal_set_rendererList)) ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle rendererList;

  static inline ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& __cordl_internal_get_rendererList() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& __cordl_internal_get_rendererList();

  constexpr void __cordl_internal_set_rendererList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle value);

  /// @brief Method .ctor, addr 0x669fbf8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalPreviewPass_PassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalPreviewPass_PassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalPreviewPass_PassData(DecalPreviewPass_PassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalPreviewPass_PassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalPreviewPass_PassData(DecalPreviewPass_PassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12655 };

  /// @brief Field rendererList, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle ___rendererList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData, ___rendererList) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalPreviewPass/<>c
class CORDL_TYPE DecalPreviewPass___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::DecalPreviewPass___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0,
                      put = setStaticF___9__8_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*,
                                                                                                                ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__8_0;

  static inline ::UnityEngine::Rendering::Universal::DecalPreviewPass___c* New_ctor();

  /// @brief Method <RecordRenderGraph>b__8_0, addr 0x66a0828, size 0x58, virtual false, abstract: false, final false
  inline void _RecordRenderGraph_b__8_0(::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext rgContext);

  /// @brief Method .ctor, addr 0x66a0824, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::DecalPreviewPass___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__8_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::DecalPreviewPass___c* value);

  static inline void setStaticF___9__8_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*,
                                                                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalPreviewPass___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalPreviewPass___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalPreviewPass___c(DecalPreviewPass___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalPreviewPass___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalPreviewPass___c(DecalPreviewPass___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12656 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalPreviewPass___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.Rendering.FilteringSettings, UnityEngine.Rendering.Universal.ScriptableRenderPass
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalPreviewPass
class CORDL_TYPE DecalPreviewPass : public ::UnityEngine::Rendering::Universal::ScriptableRenderPass {
public:
  // Declarations
  using PassData = ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData;

  using __c = ::UnityEngine::Rendering::Universal::DecalPreviewPass___c;

  /// @brief Field m_FilteringSettings, offset 0xb8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_PassData, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PassData, put = __cordl_internal_set_m_PassData)) ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* m_PassData;

  /// @brief Field m_ProfilingSampler, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSampler, put = __cordl_internal_set_m_ProfilingSampler)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSampler;

  /// @brief Field m_ShaderTagIdList, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ShaderTagIdList,
                      put = __cordl_internal_set_m_ShaderTagIdList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList;

  /// @brief Method Execute, addr 0x669fbfc, size 0x374, virtual true, abstract: false, final false
  inline void Execute(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::Universal::RenderingData> renderingData);

  /// @brief Method ExecutePass, addr 0x669ff70, size 0x38, virtual false, abstract: false, final false
  static inline void ExecutePass(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* passData,
                                 ::UnityEngine::Rendering::RendererList rendererList);

  static inline ::UnityEngine::Rendering::Universal::DecalPreviewPass* New_ctor();

  /// @brief Method RecordRenderGraph, addr 0x669ffa8, size 0x828, virtual true, abstract: false, final false
  inline void RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::ContextContainer* frameData);

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* const& __cordl_internal_get_m_PassData() const;

  constexpr ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*& __cordl_internal_get_m_PassData();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSampler() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSampler();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* const& __cordl_internal_get_m_ShaderTagIdList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*& __cordl_internal_get_m_ShaderTagIdList();

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_PassData(::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* value);

  constexpr void __cordl_internal_set_m_ProfilingSampler(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ShaderTagIdList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* value);

  /// @brief Method .ctor, addr 0x669f9b4, size 0x244, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalPreviewPass();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalPreviewPass", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalPreviewPass(DecalPreviewPass&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalPreviewPass", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalPreviewPass(DecalPreviewPass const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12657 };

  /// @brief Field m_FilteringSettings, offset: 0xb8, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_ShaderTagIdList, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* ___m_ShaderTagIdList;

  /// @brief Field m_ProfilingSampler, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSampler;

  /// @brief Field m_PassData, offset: 0xe8, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData* ___m_PassData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalPreviewPass, ___m_FilteringSettings) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalPreviewPass, ___m_ShaderTagIdList) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalPreviewPass, ___m_ProfilingSampler) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalPreviewPass, ___m_PassData) == 0xe8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalPreviewPass, 0xf0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalPreviewPass);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalPreviewPass*, "UnityEngine.Rendering.Universal", "DecalPreviewPass");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalPreviewPass_PassData*, "UnityEngine.Rendering.Universal", "DecalPreviewPass/PassData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalPreviewPass___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalPreviewPass___c*, "UnityEngine.Rendering.Universal", "DecalPreviewPass/<>c");
