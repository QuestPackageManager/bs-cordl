#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugDisplaySettingsPanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IDebugDisplaySettingsPanel)
namespace UnityEngine::Rendering {
struct DebugUI_Flags;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IDebugDisplaySettingsPanel);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDebugDisplaySettingsPanel
class CORDL_TYPE IDebugDisplaySettingsPanel {
public:
  // Declarations
  __declspec(property(get = get_Flags)) ::UnityEngine::Rendering::DebugUI_Flags Flags;

  __declspec(property(get = get_PanelName)) ::StringW PanelName;

  __declspec(property(get = get_Widgets)) ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> Widgets;

  /// @brief Method get_Flags, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Rendering::DebugUI_Flags get_Flags();

  /// @brief Method get_PanelName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_PanelName();

  /// @brief Method get_Widgets, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> get_Widgets();

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsPanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettingsPanel(IDebugDisplaySettingsPanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12019 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IDebugDisplaySettingsPanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDebugDisplaySettingsPanel*, "UnityEngine.Rendering", "IDebugDisplaySettingsPanel");
