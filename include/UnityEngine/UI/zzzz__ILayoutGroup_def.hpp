#pragma once
// IWYU pragma private; include "UnityEngine/UI/ILayoutGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILayoutGroup)
namespace UnityEngine::UI {
class ILayoutController;
}
// Forward declare root types
namespace UnityEngine::UI {
class ILayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ILayoutGroup);
// Dependencies
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ILayoutGroup
class CORDL_TYPE ILayoutGroup {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
  constexpr operator ::UnityEngine::UI::ILayoutController*() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ILayoutController"
  constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ILayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILayoutGroup(ILayoutGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17424 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ILayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ILayoutGroup*, "UnityEngine.UI", "ILayoutGroup");
