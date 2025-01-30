#pragma once
// IWYU pragma private; include "UnityEngine/UI/ILayoutSelfController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
CORDL_MODULE_EXPORT(ILayoutSelfController)
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutSelfController;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ILayoutSelfController);
// Dependencies UnityEngine.UI.ILayoutController
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15101 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ILayoutSelfController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ILayoutSelfController*, "UnityEngine.UI", "ILayoutSelfController");
