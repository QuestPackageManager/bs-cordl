#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IRuntimePanel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRuntimePanel)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IRuntimePanel;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IRuntimePanel);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IRuntimePanel
class CORDL_TYPE IRuntimePanel {
public:
  // Declarations
  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UIElements::IPanel"
  constexpr operator ::UnityEngine::UIElements::IPanel*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::UnityEngine::UIElements::IPanel"
  constexpr ::UnityEngine::UIElements::IPanel* i___UnityEngine__UIElements__IPanel() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IRuntimePanel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRuntimePanel(IRuntimePanel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4594 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IRuntimePanel);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IRuntimePanel*, "UnityEngine.UIElements", "IRuntimePanel");
