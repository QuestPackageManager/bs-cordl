#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Task_WhenAllPromise_1)
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace System::Threading::Tasks {
template <typename T> class __Task__WhenAllPromise_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Threading::Tasks::__Task__WhenAllPromise_1);
// Type: ::WhenAllPromise`1
// SizeInfo { instance_size: 104, native_size: 100, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::Task::WhenAllPromise`1<T>*
class CORDL_TYPE __Task__WhenAllPromise_1 : public ::System::Threading::Tasks::Task_1<::ArrayW<T, ::Array<T>*>> {
public:
  // Declarations
  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  __declspec(property(get = get_ShouldNotifyDebuggerOfWaitCompletion)) bool ShouldNotifyDebuggerOfWaitCompletion;

  /// @brief Field m_count, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_count, put = __cordl_internal_set_m_count)) int32_t m_count;

  /// @brief Field m_tasks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_tasks,
                      put = __cordl_internal_set_m_tasks))::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> m_tasks;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Invoke(::System::Threading::Tasks::Task* ignored);

  static inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<T>* New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> tasks);

  constexpr int32_t const& __cordl_internal_get_m_count() const;

  constexpr int32_t& __cordl_internal_get_m_count();

  constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> const& __cordl_internal_get_m_tasks() const;

  constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*>& __cordl_internal_get_m_tasks();

  constexpr void __cordl_internal_set_m_count(int32_t value);

  constexpr void __cordl_internal_set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> tasks);

  /// @brief Method get_InvokeMayRunArbitraryCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_InvokeMayRunArbitraryCode();

  /// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_ShouldNotifyDebuggerOfWaitCompletion();

  /// @brief Convert to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr ::System::Threading::Tasks::ITaskCompletionAction* i___System__Threading__Tasks__ITaskCompletionAction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Task__WhenAllPromise_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Task__WhenAllPromise_1(__Task__WhenAllPromise_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Task__WhenAllPromise_1(__Task__WhenAllPromise_1 const&) = delete;

  /// @brief Field m_tasks, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> ___m_tasks;

  /// @brief Field m_count, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__Task__WhenAllPromise_1, "System.Threading.Tasks", "Task/WhenAllPromise`1");
