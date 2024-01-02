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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 5134 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2785))
// CS Name: ::Task::WhenAllPromise`1<T>*
class CORDL_TYPE __Task__WhenAllPromise_1 : public ::System::Threading::Tasks::Task_1<::ArrayW<T, ::Array<T>*>> {
public:
  // Declarations
  /// @brief Field m_tasks, offset 0x58, size 0x8
  __declspec(property(get = __get_m_tasks, put = __set_m_tasks))::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> m_tasks;

  /// @brief Field m_count, offset 0x60, size 0x4
  __declspec(property(get = __get_m_count, put = __set_m_count)) int32_t m_count;

  __declspec(property(get = get_ShouldNotifyDebuggerOfWaitCompletion)) bool ShouldNotifyDebuggerOfWaitCompletion;

  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*>& __get_m_tasks();

  constexpr ::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> const& __get_m_tasks() const;

  constexpr void __set_m_tasks(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> value);

  constexpr int32_t& __get_m_count();

  constexpr int32_t const& __get_m_count() const;

  constexpr void __set_m_count(int32_t value);

  static inline ::System::Threading::Tasks::__Task__WhenAllPromise_1<T>* New_ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> tasks);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> tasks);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Invoke(::System::Threading::Tasks::Task* ignored);

  /// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_ShouldNotifyDebuggerOfWaitCompletion();

  /// @brief Method get_InvokeMayRunArbitraryCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool get_InvokeMayRunArbitraryCode();

  // Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Task__WhenAllPromise_1(__Task__WhenAllPromise_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Task__WhenAllPromise_1(__Task__WhenAllPromise_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Task__WhenAllPromise_1();

public:
  /// @brief Field m_tasks, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Threading::Tasks::Task_1<T>*, ::Array<::System::Threading::Tasks::Task_1<T>*>*> ___m_tasks;

  /// @brief Field m_count, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Threading::Tasks
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Threading::Tasks::__Task__WhenAllPromise_1, "System.Threading.Tasks", "Task/WhenAllPromise`1");
