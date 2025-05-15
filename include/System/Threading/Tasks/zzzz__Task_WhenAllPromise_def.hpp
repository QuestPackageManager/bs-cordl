#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Task_WhenAllPromise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__ITaskCompletionAction_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Task_WhenAllPromise)
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class Task_WhenAllPromise;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Task_WhenAllPromise);
// Dependencies System.Threading.Tasks.ITaskCompletionAction, System.Threading.Tasks.Task`1<TResult>, System.Threading.Tasks.VoidTaskResult
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Threading.Tasks.Task/WhenAllPromise
class CORDL_TYPE Task_WhenAllPromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
  // Declarations
  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  __declspec(property(get = get_ShouldNotifyDebuggerOfWaitCompletion)) bool ShouldNotifyDebuggerOfWaitCompletion;

  /// @brief Field m_count, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_count, put = __cordl_internal_set_m_count)) int32_t m_count;

  /// @brief Field m_tasks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_tasks, put = __cordl_internal_set_m_tasks)) ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> m_tasks;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  /// @brief Method Invoke, addr 0x3e691ac, size 0x2d0, virtual true, abstract: false, final true
  inline void Invoke(::System::Threading::Tasks::Task* ignored);

  static inline ::GlobalNamespace::Task_WhenAllPromise* New_ctor(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks);

  constexpr int32_t const& __cordl_internal_get_m_count() const;

  constexpr int32_t& __cordl_internal_get_m_count();

  constexpr ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> const& __cordl_internal_get_m_tasks() const;

  constexpr ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>& __cordl_internal_get_m_tasks();

  constexpr void __cordl_internal_set_m_count(int32_t value);

  constexpr void __cordl_internal_set_m_tasks(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> value);

  /// @brief Method .ctor, addr 0x3e680dc, size 0x174, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks);

  /// @brief Method get_InvokeMayRunArbitraryCode, addr 0x3e694f0, size 0x8, virtual true, abstract: false, final true
  inline bool get_InvokeMayRunArbitraryCode();

  /// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion, addr 0x3e6947c, size 0x74, virtual true, abstract: false, final false
  inline bool get_ShouldNotifyDebuggerOfWaitCompletion();

  /// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr ::System::Threading::Tasks::ITaskCompletionAction* i___System__Threading__Tasks__ITaskCompletionAction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Task_WhenAllPromise();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Task_WhenAllPromise", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Task_WhenAllPromise(Task_WhenAllPromise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Task_WhenAllPromise", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Task_WhenAllPromise(Task_WhenAllPromise const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2787 };

  /// @brief Field m_tasks, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> ___m_tasks;

  /// @brief Field m_count, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Task_WhenAllPromise, ___m_tasks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Task_WhenAllPromise, ___m_count) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Task_WhenAllPromise, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Task_WhenAllPromise);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Task_WhenAllPromise*, "System.Threading.Tasks", "Task/WhenAllPromise");
