#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugRendererLists.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
CORDL_MODULE_EXPORT(DebugRendererLists)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class IRasterRenderGraphBuilder;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
}
namespace UnityEngine::Rendering::Universal {
class DebugRenderSetup;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderStateBlock;
}
namespace UnityEngine::Rendering {
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DebugRendererLists;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugRendererLists);
// Dependencies System.Object, UnityEngine.Rendering.FilteringSettings
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugRendererLists
class CORDL_TYPE DebugRendererLists : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_ActiveDebugRendererList, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveDebugRendererList,
                      put = __cordl_internal_set_m_ActiveDebugRendererList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* m_ActiveDebugRendererList;

  /// @brief Field m_ActiveDebugRendererListHdl, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ActiveDebugRendererListHdl,
      put = __cordl_internal_set_m_ActiveDebugRendererListHdl)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* m_ActiveDebugRendererListHdl;

  /// @brief Field m_DebugHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugHandler, put = __cordl_internal_set_m_DebugHandler)) ::UnityEngine::Rendering::Universal::DebugHandler* m_DebugHandler;

  /// @brief Field m_DebugRenderSetups, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugRenderSetups,
                      put = __cordl_internal_set_m_DebugRenderSetups)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* m_DebugRenderSetups;

  /// @brief Field m_FilteringSettings, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Method CreateDebugRenderSetups, addr 0x6698d74, size 0x148, virtual false, abstract: false, final false
  inline void CreateDebugRenderSetups(::UnityEngine::Rendering::FilteringSettings filteringSettings);

  /// @brief Method CreateRendererListsWithDebugRenderState, addr 0x6697ca0, size 0x3a4, virtual false, abstract: false, final false
  inline void CreateRendererListsWithDebugRenderState(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                      ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                      ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock);

  /// @brief Method CreateRendererListsWithDebugRenderState, addr 0x6698104, size 0x38c, virtual false, abstract: false, final false
  inline void CreateRendererListsWithDebugRenderState(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                                      ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                                      ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock);

  /// @brief Method DisposeDebugRenderLists, addr 0x6698ed4, size 0x188, virtual false, abstract: false, final false
  inline void DisposeDebugRenderLists();

  /// @brief Method DrawWithRendererList, addr 0x6699574, size 0x238, virtual false, abstract: false, final false
  inline void DrawWithRendererList(::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  static inline ::UnityEngine::Rendering::Universal::DebugRendererLists* New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler,
                                                                                  ::UnityEngine::Rendering::FilteringSettings filteringSettings);

  /// @brief Method PrepareRendererListForRasterPass, addr 0x66993d8, size 0x19c, virtual false, abstract: false, final false
  inline void PrepareRendererListForRasterPass(::UnityEngine::Rendering::RenderGraphModule::IRasterRenderGraphBuilder* builder);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* const& __cordl_internal_get_m_ActiveDebugRendererList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>*& __cordl_internal_get_m_ActiveDebugRendererList();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* const& __cordl_internal_get_m_ActiveDebugRendererListHdl() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>*& __cordl_internal_get_m_ActiveDebugRendererListHdl();

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& __cordl_internal_get_m_DebugHandler() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& __cordl_internal_get_m_DebugHandler();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* const& __cordl_internal_get_m_DebugRenderSetups() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>*& __cordl_internal_get_m_DebugRenderSetups();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr void __cordl_internal_set_m_ActiveDebugRendererList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* value);

  constexpr void __cordl_internal_set_m_ActiveDebugRendererListHdl(::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* value);

  constexpr void __cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value);

  constexpr void __cordl_internal_set_m_DebugRenderSetups(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  /// @brief Method .ctor, addr 0x6697b70, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, ::UnityEngine::Rendering::FilteringSettings filteringSettings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugRendererLists();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugRendererLists", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugRendererLists(DebugRendererLists&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugRendererLists", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugRendererLists(DebugRendererLists const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12640 };

  /// @brief Field m_DebugHandler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler* ___m_DebugHandler;

  /// @brief Field m_FilteringSettings, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_DebugRenderSetups, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::DebugRenderSetup*>* ___m_DebugRenderSetups;

  /// @brief Field m_ActiveDebugRendererList, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RendererList>* ___m_ActiveDebugRendererList;

  /// @brief Field m_ActiveDebugRendererListHdl, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle>* ___m_ActiveDebugRendererListHdl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRendererLists, ___m_DebugHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRendererLists, ___m_FilteringSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRendererLists, ___m_DebugRenderSetups) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRendererLists, ___m_ActiveDebugRendererList) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRendererLists, ___m_ActiveDebugRendererListHdl) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugRendererLists, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugRendererLists);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugRendererLists*, "UnityEngine.Rendering.Universal", "DebugRendererLists");
