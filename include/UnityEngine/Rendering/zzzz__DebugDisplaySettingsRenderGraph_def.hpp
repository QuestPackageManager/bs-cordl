#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugDisplaySettingsRenderGraph.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugDisplaySettingsPanel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DebugDisplaySettingsRenderGraph)
namespace UnityEngine::Rendering {
class DebugDisplaySettingsRenderGraph_SettingsPanel;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsData;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsQuery;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class DebugDisplaySettingsRenderGraph;
}
namespace UnityEngine::Rendering {
class DebugDisplaySettingsRenderGraph_SettingsPanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph);
MARK_REF_PTR_T(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel);
// Dependencies UnityEngine.Rendering.DebugDisplaySettingsPanel
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsRenderGraph/SettingsPanel
class CORDL_TYPE DebugDisplaySettingsRenderGraph_SettingsPanel : public ::UnityEngine::Rendering::DebugDisplaySettingsPanel {
public:
  // Declarations
  __declspec(property(get = get_PanelName)) ::StringW PanelName;

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel* New_ctor(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* _);

  /// @brief Method .ctor, addr 0x65eb794, size 0x2d8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* _);

  /// @brief Method get_PanelName, addr 0x65ebbe8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_PanelName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsRenderGraph_SettingsPanel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRenderGraph_SettingsPanel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsRenderGraph_SettingsPanel(DebugDisplaySettingsRenderGraph_SettingsPanel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRenderGraph_SettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsRenderGraph_SettingsPanel(DebugDisplaySettingsRenderGraph_SettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12156 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.DebugDisplaySettingsRenderGraph
class CORDL_TYPE DebugDisplaySettingsRenderGraph : public ::System::Object {
public:
  // Declarations
  using SettingsPanel = ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel;

  __declspec(property(get = get_AreAnySettingsActive)) bool AreAnySettingsActive;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsData*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsQuery*() noexcept;

  static inline ::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph* New_ctor();

  /// @brief Method UnityEngine.Rendering.IDebugDisplaySettingsData.CreatePanel, addr 0x65eb740, size 0x54, virtual true, abstract: false, final true
  inline ::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable* UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel();

  /// @brief Method .ctor, addr 0x65eb5c0, size 0x180, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AreAnySettingsActive, addr 0x65eba6c, size 0x17c, virtual true, abstract: false, final true
  inline bool get_AreAnySettingsActive();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsData"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsData* i___UnityEngine__Rendering__IDebugDisplaySettingsData() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsQuery"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsQuery* i___UnityEngine__Rendering__IDebugDisplaySettingsQuery() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugDisplaySettingsRenderGraph();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRenderGraph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugDisplaySettingsRenderGraph(DebugDisplaySettingsRenderGraph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugDisplaySettingsRenderGraph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugDisplaySettingsRenderGraph(DebugDisplaySettingsRenderGraph const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12157 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph*, "UnityEngine.Rendering", "DebugDisplaySettingsRenderGraph");
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsRenderGraph_SettingsPanel*, "UnityEngine.Rendering", "DebugDisplaySettingsRenderGraph/SettingsPanel");
