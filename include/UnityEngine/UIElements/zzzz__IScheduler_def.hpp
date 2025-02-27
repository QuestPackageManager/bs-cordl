#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IScheduler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IScheduler)
namespace UnityEngine::UIElements {
class ScheduledItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IScheduler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IScheduler);
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IScheduler
class CORDL_TYPE IScheduler {
public:
  // Declarations
  /// @brief Method Schedule, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Schedule(::UnityEngine::UIElements::ScheduledItem* item);

  /// @brief Method Unschedule, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Unschedule(::UnityEngine::UIElements::ScheduledItem* item);

  /// @brief Method UpdateScheduledEvents, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateScheduledEvents();

  // Ctor Parameters [CppParam { name: "", ty: "IScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScheduler(IScheduler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6047 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IScheduler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IScheduler*, "UnityEngine.UIElements", "IScheduler");
