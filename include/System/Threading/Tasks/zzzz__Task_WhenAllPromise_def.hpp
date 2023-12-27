#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Task_WhenAllPromise)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class ITaskCompletionAction;
}
// Forward declare root types
namespace System::Threading::Tasks {
class __Task__WhenAllPromise;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::__Task__WhenAllPromise);
// Type: ::WhenAllPromise
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 100, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 900 }), TypeDefinitionIndex(TypeDefinitionIndex(2773)),
// TypeDefinitionIndex(TypeDefinitionIndex(2794))} Self: TypeDefinitionIndex(TypeDefinitionIndex(2784)) CS Name: ::Task::WhenAllPromise*
class CORDL_TYPE __Task__WhenAllPromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
  // Declarations
  /// @brief Field m_tasks, offset 0x58, size 0x8
  __declspec(property(get = __get_m_tasks, put = __set_m_tasks))::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> m_tasks;

  /// @brief Field m_count, offset 0x60, size 0x4
  __declspec(property(get = __get_m_count, put = __set_m_count)) int32_t m_count;

  __declspec(property(get = get_ShouldNotifyDebuggerOfWaitCompletion)) bool ShouldNotifyDebuggerOfWaitCompletion;

  __declspec(property(get = get_InvokeMayRunArbitraryCode)) bool InvokeMayRunArbitraryCode;

  /// @brief Convert operator to "::System::Threading::Tasks::ITaskCompletionAction"
  constexpr operator ::System::Threading::Tasks::ITaskCompletionAction*() noexcept;

  constexpr ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*>& __get_m_tasks();

  constexpr ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> const& __get_m_tasks() const;

  constexpr void __set_m_tasks(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> value);

  constexpr int32_t& __get_m_count();

  constexpr int32_t const& __get_m_count() const;

  constexpr void __set_m_count(int32_t value);

  static inline ::System::Threading::Tasks::__Task__WhenAllPromise* New_ctor(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks);

  /// @brief Method .ctor addr 0x2629d14 size 0x174 virtual false final false
  inline void _ctor(::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> tasks);

  /// @brief Method Invoke addr 0x262ade8 size 0x2c8 virtual true final true
  inline void Invoke(::System::Threading::Tasks::Task* ignored);

  /// @brief Method get_ShouldNotifyDebuggerOfWaitCompletion addr 0x262b0b0 size 0x74 virtual true final false
  inline bool get_ShouldNotifyDebuggerOfWaitCompletion();

  /// @brief Method get_InvokeMayRunArbitraryCode addr 0x262b124 size 0x8 virtual true final true
  inline bool get_InvokeMayRunArbitraryCode();

  // Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Task__WhenAllPromise(__Task__WhenAllPromise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Task__WhenAllPromise", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Task__WhenAllPromise(__Task__WhenAllPromise const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Task__WhenAllPromise();

public:
  /// @brief Field m_tasks, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::System::Threading::Tasks::Task*, ::Array<::System::Threading::Tasks::Task*>*> ___m_tasks;

  /// @brief Field m_count, offset: 0x60, size: 0x4, def value: None
  int32_t ___m_count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__Task__WhenAllPromise, 0x68>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::__Task__WhenAllPromise);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__Task__WhenAllPromise*, "System.Threading.Tasks", "Task/WhenAllPromise");
