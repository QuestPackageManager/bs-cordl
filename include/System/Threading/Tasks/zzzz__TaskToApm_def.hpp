#pragma once
// IWYU pragma private; include "System/Threading/Tasks/TaskToApm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskToApm)
namespace System::Threading::Tasks {
class TaskToApm_TaskWrapperAsyncResult;
}
namespace System::Threading::Tasks {
class TaskToApm___c__DisplayClass3_0;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class WaitHandle;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskToApm;
}
namespace System::Threading::Tasks {
class TaskToApm_TaskWrapperAsyncResult;
}
namespace System::Threading::Tasks {
class TaskToApm___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskToApm);
MARK_REF_PTR_T(::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult);
MARK_REF_PTR_T(::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0);
// Dependencies System.IAsyncResult, System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
class CORDL_TYPE TaskToApm_TaskWrapperAsyncResult : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_IAsyncResult_get_AsyncState)) ::System::Object* System_IAsyncResult_AsyncState;

  __declspec(property(get = System_IAsyncResult_get_AsyncWaitHandle)) ::System::Threading::WaitHandle* System_IAsyncResult_AsyncWaitHandle;

  __declspec(property(get = System_IAsyncResult_get_CompletedSynchronously)) bool System_IAsyncResult_CompletedSynchronously;

  __declspec(property(get = System_IAsyncResult_get_IsCompleted)) bool System_IAsyncResult_IsCompleted;

  /// @brief Field Task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Task, put = __cordl_internal_set_Task)) ::System::Threading::Tasks::Task* Task;

  /// @brief Field _completedSynchronously, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__completedSynchronously, put = __cordl_internal_set__completedSynchronously)) bool _completedSynchronously;

  /// @brief Field _state, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::System::Object* _state;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  static inline ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult* New_ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, bool completedSynchronously);

  /// @brief Method System.IAsyncResult.get_AsyncState, addr 0x3e5f0d8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_IAsyncResult_get_AsyncState();

  /// @brief Method System.IAsyncResult.get_AsyncWaitHandle, addr 0x3e5f100, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();

  /// @brief Method System.IAsyncResult.get_CompletedSynchronously, addr 0x3e5f0e0, size 0x8, virtual true, abstract: false, final true
  inline bool System_IAsyncResult_get_CompletedSynchronously();

  /// @brief Method System.IAsyncResult.get_IsCompleted, addr 0x3e5f0e8, size 0x18, virtual true, abstract: false, final true
  inline bool System_IAsyncResult_get_IsCompleted();

  constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_Task() const;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_Task();

  constexpr bool const& __cordl_internal_get__completedSynchronously() const;

  constexpr bool& __cordl_internal_get__completedSynchronously();

  constexpr ::System::Object* const& __cordl_internal_get__state() const;

  constexpr ::System::Object*& __cordl_internal_get__state();

  constexpr void __cordl_internal_set_Task(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__completedSynchronously(bool value);

  constexpr void __cordl_internal_set__state(::System::Object* value);

  /// @brief Method .ctor, addr 0x3e5ee84, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, bool completedSynchronously);

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskToApm_TaskWrapperAsyncResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskToApm_TaskWrapperAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskToApm_TaskWrapperAsyncResult(TaskToApm_TaskWrapperAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskToApm_TaskWrapperAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskToApm_TaskWrapperAsyncResult(TaskToApm_TaskWrapperAsyncResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2762 };

  /// @brief Field Task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___Task;

  /// @brief Field _state, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____state;

  /// @brief Field _completedSynchronously, offset: 0x20, size: 0x1, def value: None
  bool ____completedSynchronously;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult, ___Task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult, ____state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult, ____completedSynchronously) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult, 0x28>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskToApm/<>c__DisplayClass3_0
class CORDL_TYPE TaskToApm___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field asyncResult, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncResult, put = __cordl_internal_set_asyncResult)) ::System::IAsyncResult* asyncResult;

  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback)) ::System::AsyncCallback* callback;

  static inline ::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0* New_ctor();

  /// @brief Method <InvokeCallbackWhenTaskCompletes>b__0, addr 0x3e5f1a4, size 0x28, virtual false, abstract: false, final false
  inline void _InvokeCallbackWhenTaskCompletes_b__0();

  constexpr ::System::IAsyncResult* const& __cordl_internal_get_asyncResult() const;

  constexpr ::System::IAsyncResult*& __cordl_internal_get_asyncResult();

  constexpr ::System::AsyncCallback* const& __cordl_internal_get_callback() const;

  constexpr ::System::AsyncCallback*& __cordl_internal_get_callback();

  constexpr void __cordl_internal_set_asyncResult(::System::IAsyncResult* value);

  constexpr void __cordl_internal_set_callback(::System::AsyncCallback* value);

  /// @brief Method .ctor, addr 0x3e5f09c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskToApm___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskToApm___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskToApm___c__DisplayClass3_0(TaskToApm___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskToApm___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskToApm___c__DisplayClass3_0(TaskToApm___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2763 };

  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::AsyncCallback* ___callback;

  /// @brief Field asyncResult, offset: 0x18, size: 0x8, def value: None
  ::System::IAsyncResult* ___asyncResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0, ___asyncResult) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Dependencies System.Object
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: System.Threading.Tasks.TaskToApm
class CORDL_TYPE TaskToApm : public ::System::Object {
public:
  // Declarations
  using TaskWrapperAsyncResult = ::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult;

  using __c__DisplayClass3_0 = ::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0;

  /// @brief Method Begin, addr 0x3e5ed2c, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::IAsyncResult* Begin(::System::Threading::Tasks::Task* task, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method End, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline TResult End(::System::IAsyncResult* asyncResult);

  /// @brief Method End, addr 0x3e5efb4, size 0xe4, virtual false, abstract: false, final false
  static inline void End(::System::IAsyncResult* asyncResult);

  /// @brief Method InvokeCallbackWhenTaskCompletes, addr 0x3e5eec0, size 0xf4, virtual false, abstract: false, final false
  static inline void InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task* antecedent, ::System::AsyncCallback* callback, ::System::IAsyncResult* asyncResult);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskToApm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TaskToApm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskToApm(TaskToApm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskToApm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskToApm(TaskToApm const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2764 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskToApm, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskToApm);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskToApm*, "System.Threading.Tasks", "TaskToApm");
NEED_NO_BOX(::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskToApm_TaskWrapperAsyncResult*, "System.Threading.Tasks", "TaskToApm/TaskWrapperAsyncResult");
NEED_NO_BOX(::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskToApm___c__DisplayClass3_0*, "System.Threading.Tasks", "TaskToApm/<>c__DisplayClass3_0");
