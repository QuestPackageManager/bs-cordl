#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugRenderSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugRenderSetup)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RendererListHandle;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsLighting;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsMaterial;
}
namespace UnityEngine::Rendering::Universal {
class DebugDisplaySettingsRendering;
}
namespace UnityEngine::Rendering::Universal {
class DebugHandler;
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
class DebugRenderSetup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DebugRenderSetup);
// Dependencies System.Object, UnityEngine.Rendering.FilteringSettings
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DebugRenderSetup
class CORDL_TYPE DebugRenderSetup : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LightingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* LightingSettings;

  __declspec(property(get = get_MaterialSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* MaterialSettings;

  __declspec(property(get = get_RenderingSettings)) ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* RenderingSettings;

  /// @brief Field m_DebugHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugHandler, put = __cordl_internal_set_m_DebugHandler)) ::UnityEngine::Rendering::Universal::DebugHandler* m_DebugHandler;

  /// @brief Field m_FilteringSettings, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_m_FilteringSettings, put = __cordl_internal_set_m_FilteringSettings)) ::UnityEngine::Rendering::FilteringSettings m_FilteringSettings;

  /// @brief Field m_Index, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Begin, addr 0x66997ac, size 0x70, virtual false, abstract: false, final false
  inline void Begin(::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  /// @brief Method CreateDrawingSettings, addr 0x6699060, size 0x160, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::DrawingSettings drawingSettings);

  /// @brief Method CreateRendererList, addr 0x66999b4, size 0x10c, virtual false, abstract: false, final false
  inline void CreateRendererList(::UnityEngine::Rendering::ScriptableRenderContext context, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                 ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                 ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock, ::ByRef<::UnityEngine::Rendering::RendererList> rendererList);

  /// @brief Method CreateRendererList, addr 0x6699ac0, size 0x124, virtual false, abstract: false, final false
  inline void CreateRendererList(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::CullingResults> cullResults,
                                 ::ByRef<::UnityEngine::Rendering::DrawingSettings> drawingSettings, ::ByRef<::UnityEngine::Rendering::FilteringSettings> filteringSettings,
                                 ::ByRef<::UnityEngine::Rendering::RenderStateBlock> renderStateBlock, ::ByRef<::UnityEngine::Rendering::RenderGraphModule::RendererListHandle> rendererListHdl);

  /// @brief Method Dispose, addr 0x669905c, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method DrawWithRendererList, addr 0x669981c, size 0xbc, virtual false, abstract: false, final false
  inline void DrawWithRendererList(::UnityEngine::Rendering::RasterCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::RendererList> rendererList);

  /// @brief Method End, addr 0x66998d8, size 0x70, virtual false, abstract: false, final false
  inline void End(::UnityEngine::Rendering::RasterCommandBuffer* cmd);

  /// @brief Method GetIndex, addr 0x6699be4, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetIndex();

  /// @brief Method GetRenderStateBlock, addr 0x66991c0, size 0x218, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderStateBlock GetRenderStateBlock(::UnityEngine::Rendering::RenderStateBlock renderStateBlock);

  static inline ::UnityEngine::Rendering::Universal::DebugRenderSetup* New_ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, int32_t index,
                                                                                ::UnityEngine::Rendering::FilteringSettings filteringSettings);

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& __cordl_internal_get_m_DebugHandler() const;

  constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& __cordl_internal_get_m_DebugHandler();

  constexpr ::UnityEngine::Rendering::FilteringSettings const& __cordl_internal_get_m_FilteringSettings() const;

  constexpr ::UnityEngine::Rendering::FilteringSettings& __cordl_internal_get_m_FilteringSettings();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr void __cordl_internal_set_m_DebugHandler(::UnityEngine::Rendering::Universal::DebugHandler* value);

  constexpr void __cordl_internal_set_m_FilteringSettings(::UnityEngine::Rendering::FilteringSettings value);

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  /// @brief Method .ctor, addr 0x6698ebc, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::Universal::DebugHandler* debugHandler, int32_t index, ::UnityEngine::Rendering::FilteringSettings filteringSettings);

  /// @brief Method get_LightingSettings, addr 0x6699990, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting* get_LightingSettings();

  /// @brief Method get_MaterialSettings, addr 0x6699948, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsMaterial* get_MaterialSettings();

  /// @brief Method get_RenderingSettings, addr 0x669996c, size 0x24, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering* get_RenderingSettings();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugRenderSetup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugRenderSetup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugRenderSetup(DebugRenderSetup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugRenderSetup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugRenderSetup(DebugRenderSetup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12641 };

  /// @brief Field m_DebugHandler, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::DebugHandler* ___m_DebugHandler;

  /// @brief Field m_FilteringSettings, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings ___m_FilteringSettings;

  /// @brief Field m_Index, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRenderSetup, ___m_DebugHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRenderSetup, ___m_FilteringSettings) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DebugRenderSetup, ___m_Index) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DebugRenderSetup, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugRenderSetup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugRenderSetup*, "UnityEngine.Rendering.Universal", "DebugRenderSetup");
