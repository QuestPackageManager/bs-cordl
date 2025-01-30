#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IVisualElementScheduler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IVisualElementScheduler)
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
struct TimerState;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IVisualElementScheduler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IVisualElementScheduler);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IVisualElementScheduler
class CORDL_TYPE IVisualElementScheduler {
public:
  // Declarations
  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Execute(::System::Action_1<::UnityEngine::UIElements::TimerState>* timerUpdateEvent);

  /// @brief Method Execute, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Execute(::System::Action* updateEvent);

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVisualElementScheduler(IVisualElementScheduler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6327 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IVisualElementScheduler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualElementScheduler*, "UnityEngine.UIElements", "IVisualElementScheduler");
