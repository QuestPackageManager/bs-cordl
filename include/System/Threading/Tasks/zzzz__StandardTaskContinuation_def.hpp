#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__TaskContinuationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskContinuation_def.hpp"
CORDL_MODULE_EXPORT(StandardTaskContinuation)
namespace System::Threading::Tasks {
class TaskScheduler;
}
namespace System::Threading::Tasks {
struct TaskContinuationOptions;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
class StandardTaskContinuation;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::StandardTaskContinuation);
// Type: System.Threading.Tasks::StandardTaskContinuation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2797)), TypeDefinitionIndex(TypeDefinitionIndex(2788))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2798))
// CS Name: ::System.Threading.Tasks::StandardTaskContinuation*
class CORDL_TYPE StandardTaskContinuation : public ::System::Threading::Tasks::TaskContinuation {
public:
  // Declarations
  /// @brief Field m_task, offset 0x10, size 0x8
  __declspec(property(get = __get_m_task, put = __set_m_task))::System::Threading::Tasks::Task* m_task;

  /// @brief Field m_options, offset 0x18, size 0x4
  __declspec(property(get = __get_m_options, put = __set_m_options))::System::Threading::Tasks::TaskContinuationOptions m_options;

  /// @brief Field m_taskScheduler, offset 0x20, size 0x8
  __declspec(property(get = __get_m_taskScheduler, put = __set_m_taskScheduler))::System::Threading::Tasks::TaskScheduler* m_taskScheduler;

  constexpr ::System::Threading::Tasks::Task*& __get_m_task();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get_m_task() const;

  constexpr void __set_m_task(::System::Threading::Tasks::Task* value);

  constexpr ::System::Threading::Tasks::TaskContinuationOptions& __get_m_options();

  constexpr ::System::Threading::Tasks::TaskContinuationOptions const& __get_m_options() const;

  constexpr void __set_m_options(::System::Threading::Tasks::TaskContinuationOptions value);

  constexpr ::System::Threading::Tasks::TaskScheduler*& __get_m_taskScheduler();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskScheduler*> const& __get_m_taskScheduler() const;

  constexpr void __set_m_taskScheduler(::System::Threading::Tasks::TaskScheduler* value);

  static inline ::System::Threading::Tasks::StandardTaskContinuation* New_ctor(::System::Threading::Tasks::Task* task, ::System::Threading::Tasks::TaskContinuationOptions options,
                                                                               ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method .ctor addr 0x24ce264 size 0x120 virtual false final false
  inline void _ctor(::System::Threading::Tasks::Task* task, ::System::Threading::Tasks::TaskContinuationOptions options, ::System::Threading::Tasks::TaskScheduler* scheduler);

  /// @brief Method Run addr 0x24d1500 size 0x198 virtual true final false
  inline void Run(::System::Threading::Tasks::Task* completedTask, bool bCanInlineContinuationTask);

  // Ctor Parameters [CppParam { name: "", ty: "StandardTaskContinuation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardTaskContinuation(StandardTaskContinuation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardTaskContinuation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardTaskContinuation(StandardTaskContinuation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardTaskContinuation();

public:
  /// @brief Field m_task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___m_task;

  /// @brief Field m_options, offset: 0x18, size: 0x4, def value: None
  ::System::Threading::Tasks::TaskContinuationOptions ___m_options;

  /// @brief Field m_taskScheduler, offset: 0x20, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskScheduler* ___m_taskScheduler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::StandardTaskContinuation, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::StandardTaskContinuation, ___m_task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::StandardTaskContinuation, ___m_options) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::StandardTaskContinuation, ___m_taskScheduler) == 0x20, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::StandardTaskContinuation);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::StandardTaskContinuation*, "System.Threading.Tasks", "StandardTaskContinuation");
