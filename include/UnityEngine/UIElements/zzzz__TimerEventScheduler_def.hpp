#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TimerEventScheduler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimerEventScheduler)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class IScheduler;
}
namespace UnityEngine::UIElements {
class ScheduledItem;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TimerEventScheduler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TimerEventScheduler);
// Type: UnityEngine.UIElements::TimerEventScheduler
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TimerEventScheduler*
class CORDL_TYPE TimerEventScheduler : public ::System::Object {
public:
  // Declarations
  /// @brief Field disableThrottling, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_disableThrottling, put = __cordl_internal_set_disableThrottling)) bool disableThrottling;

  /// @brief Field m_LastUpdatedIndex, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LastUpdatedIndex, put = __cordl_internal_set_m_LastUpdatedIndex)) int32_t m_LastUpdatedIndex;

  /// @brief Field m_ScheduleTransactions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScheduleTransactions,
                      put = __cordl_internal_set_m_ScheduleTransactions)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* m_ScheduleTransactions;

  /// @brief Field m_ScheduledItems, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScheduledItems,
                      put = __cordl_internal_set_m_ScheduledItems)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* m_ScheduledItems;

  /// @brief Field m_TransactionMode, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_TransactionMode, put = __cordl_internal_set_m_TransactionMode)) bool m_TransactionMode;

  /// @brief Field m_UnscheduleTransactions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_UnscheduleTransactions,
                      put = __cordl_internal_set_m_UnscheduleTransactions)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>* m_UnscheduleTransactions;

  /// @brief Convert operator to "::UnityEngine::UIElements::IScheduler"
  constexpr operator ::UnityEngine::UIElements::IScheduler*() noexcept;

  static inline ::UnityEngine::UIElements::TimerEventScheduler* New_ctor();

  /// @brief Method PrivateUnSchedule, addr 0x49ed31c, size 0xa0, virtual false, abstract: false, final false
  inline bool PrivateUnSchedule(::UnityEngine::UIElements::ScheduledItem* sItem);

  /// @brief Method RemovedScheduledItemAt, addr 0x49ed110, size 0x7c, virtual false, abstract: false, final false
  inline bool RemovedScheduledItemAt(int32_t index);

  /// @brief Method Schedule, addr 0x49ecf58, size 0x1b8, virtual true, abstract: false, final true
  inline void Schedule(::UnityEngine::UIElements::ScheduledItem* item);

  /// @brief Method Unschedule, addr 0x49ed18c, size 0x190, virtual true, abstract: false, final true
  inline void Unschedule(::UnityEngine::UIElements::ScheduledItem* item);

  /// @brief Method UpdateScheduledEvents, addr 0x49ed3bc, size 0x314, virtual true, abstract: false, final true
  inline void UpdateScheduledEvents();

  constexpr bool const& __cordl_internal_get_disableThrottling() const;

  constexpr bool& __cordl_internal_get_disableThrottling();

  constexpr int32_t const& __cordl_internal_get_m_LastUpdatedIndex() const;

  constexpr int32_t& __cordl_internal_get_m_LastUpdatedIndex();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*& __cordl_internal_get_m_ScheduleTransactions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*> const& __cordl_internal_get_m_ScheduleTransactions() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*& __cordl_internal_get_m_ScheduledItems();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>*> const& __cordl_internal_get_m_ScheduledItems() const;

  constexpr bool const& __cordl_internal_get_m_TransactionMode() const;

  constexpr bool& __cordl_internal_get_m_TransactionMode();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>*& __cordl_internal_get_m_UnscheduleTransactions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>*> const& __cordl_internal_get_m_UnscheduleTransactions() const;

  constexpr void __cordl_internal_set_disableThrottling(bool value);

  constexpr void __cordl_internal_set_m_LastUpdatedIndex(int32_t value);

  constexpr void __cordl_internal_set_m_ScheduleTransactions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* value);

  constexpr void __cordl_internal_set_m_ScheduledItems(::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* value);

  constexpr void __cordl_internal_set_m_TransactionMode(bool value);

  constexpr void __cordl_internal_set_m_UnscheduleTransactions(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>* value);

  /// @brief Method .ctor, addr 0x49ed6d0, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::UIElements::IScheduler"
  constexpr ::UnityEngine::UIElements::IScheduler* i___UnityEngine__UIElements__IScheduler() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimerEventScheduler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TimerEventScheduler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimerEventScheduler(TimerEventScheduler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimerEventScheduler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimerEventScheduler(TimerEventScheduler const&) = delete;

  /// @brief Field m_ScheduledItems, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* ___m_ScheduledItems;

  /// @brief Field m_TransactionMode, offset: 0x18, size: 0x1, def value: None
  bool ___m_TransactionMode;

  /// @brief Field m_ScheduleTransactions, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::ScheduledItem*>* ___m_ScheduleTransactions;

  /// @brief Field m_UnscheduleTransactions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::ScheduledItem*>* ___m_UnscheduleTransactions;

  /// @brief Field disableThrottling, offset: 0x30, size: 0x1, def value: None
  bool ___disableThrottling;

  /// @brief Field m_LastUpdatedIndex, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_LastUpdatedIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6015 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TimerEventScheduler, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerEventScheduler, ___m_ScheduledItems) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerEventScheduler, ___m_TransactionMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerEventScheduler, ___m_ScheduleTransactions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerEventScheduler, ___m_UnscheduleTransactions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerEventScheduler, ___disableThrottling) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TimerEventScheduler, ___m_LastUpdatedIndex) == 0x34, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TimerEventScheduler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimerEventScheduler*, "UnityEngine.UIElements", "TimerEventScheduler");
