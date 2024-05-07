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
// Type: UnityEngine.UIElements::IScheduler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IScheduler*
class CORDL_TYPE IScheduler {
public:
  // Declarations
  /// @brief Method Schedule, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Schedule(::UnityEngine::UIElements::ScheduledItem* item);

  /// @brief Method Unschedule, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Unschedule(::UnityEngine::UIElements::ScheduledItem* item);

  /// @brief Method UpdateScheduledEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateScheduledEvents();

  // Ctor Parameters [CppParam { name: "", ty: "IScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IScheduler(IScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScheduler(IScheduler const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IScheduler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IScheduler*, "UnityEngine.UIElements", "IScheduler");
