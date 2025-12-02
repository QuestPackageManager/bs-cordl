#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDebugPanelChangeReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDebugPanelChangeReceiver)
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IDebugPanelChangeReceiver;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IDebugPanelChangeReceiver);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IDebugPanelChangeReceiver
class CORDL_TYPE IDebugPanelChangeReceiver {
public:
  // Declarations
  /// @brief Method OnVisualElementChange, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnVisualElementChange(::UnityEngine::UIElements::VisualElement* element, ::UnityEngine::UIElements::VersionChangeType changeType);

  // Ctor Parameters [CppParam { name: "", ty: "IDebugPanelChangeReceiver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDebugPanelChangeReceiver(IDebugPanelChangeReceiver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4642 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IDebugPanelChangeReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IDebugPanelChangeReceiver*, "UnityEngine.UIElements", "IDebugPanelChangeReceiver");
