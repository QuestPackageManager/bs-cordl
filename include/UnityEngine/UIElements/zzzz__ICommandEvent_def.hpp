#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ICommandEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICommandEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class ICommandEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ICommandEvent);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ICommandEvent
class CORDL_TYPE ICommandEvent {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ICommandEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICommandEvent(ICommandEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5797 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ICommandEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ICommandEvent*, "UnityEngine.UIElements", "ICommandEvent");
