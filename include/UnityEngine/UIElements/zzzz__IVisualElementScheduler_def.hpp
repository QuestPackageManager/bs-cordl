#pragma once
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
// Type: UnityEngine.UIElements::IVisualElementScheduler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6747))
// CS Name: ::UnityEngine.UIElements::IVisualElementScheduler*
class CORDL_TYPE IVisualElementScheduler {
public:
  // Declarations
  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Execute(::System::Action_1<::UnityEngine::UIElements::TimerState>* timerUpdateEvent);

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::UIElements::IVisualElementScheduledItem* Execute(::System::Action* updateEvent);

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVisualElementScheduler(IVisualElementScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVisualElementScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVisualElementScheduler(IVisualElementScheduler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IVisualElementScheduler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IVisualElementScheduler*, "UnityEngine.UIElements", "IVisualElementScheduler");
