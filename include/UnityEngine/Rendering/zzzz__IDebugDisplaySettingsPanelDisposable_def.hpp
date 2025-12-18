#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/IDebugDisplaySettingsPanelDisposable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugDisplaySettingsPanelDisposable)
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanel;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class IDebugDisplaySettingsPanelDisposable;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.IDebugDisplaySettingsPanelDisposable
class CORDL_TYPE IDebugDisplaySettingsPanelDisposable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugDisplaySettingsPanel"
  constexpr operator ::UnityEngine::Rendering::IDebugDisplaySettingsPanel*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IDebugDisplaySettingsPanel"
  constexpr ::UnityEngine::Rendering::IDebugDisplaySettingsPanel* i___UnityEngine__Rendering__IDebugDisplaySettingsPanel() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IDebugDisplaySettingsPanelDisposable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugDisplaySettingsPanelDisposable(IDebugDisplaySettingsPanelDisposable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12020 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::IDebugDisplaySettingsPanelDisposable*, "UnityEngine.Rendering", "IDebugDisplaySettingsPanelDisposable");
