#pragma once
// IWYU pragma private; include "UnityEngine\UI\ILayoutSelfController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILayoutSelfController)
namespace UnityEngine::UI {
class ILayoutController;
}
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutSelfController;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::ILayoutSelfController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::ILayoutSelfController*, "UnityEngine.UI", "ILayoutSelfController");
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ILayoutSelfController
class CORDL_TYPE ILayoutSelfController {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutController"
  constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutSelfController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayoutSelfController(ILayoutSelfController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
