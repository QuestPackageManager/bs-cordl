#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskToApm)
namespace System {
class IAsyncResult;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class __TaskToApm__TaskWrapperAsyncResult;
}
namespace System::Threading::Tasks {
class __TaskToApm____c__DisplayClass3_0;
}
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System::Threading {
class WaitHandle;
}
// Forward declare root types
namespace System::Threading::Tasks {
class TaskToApm;
}
namespace System::Threading::Tasks {
class __TaskToApm__TaskWrapperAsyncResult;
}
namespace System::Threading::Tasks {
class __TaskToApm____c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::TaskToApm);
MARK_REF_PTR_T(::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult);
MARK_REF_PTR_T(::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0);
// Type: ::TaskWrapperAsyncResult
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2759))
// CS Name: ::TaskToApm::TaskWrapperAsyncResult*
class CORDL_TYPE __TaskToApm__TaskWrapperAsyncResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Task, offset 0x10, size 0x8
  __declspec(property(get = __get_Task, put = __set_Task))::System::Threading::Tasks::Task* Task;

  /// @brief Field _state, offset 0x18, size 0x8
  __declspec(property(get = __get__state, put = __set__state))::System::Object* _state;

  /// @brief Field _completedSynchronously, offset 0x20, size 0x1
  __declspec(property(get = __get__completedSynchronously, put = __set__completedSynchronously)) bool _completedSynchronously;

  __declspec(property(get = System_IAsyncResult_get_AsyncState))::System::Object* System_IAsyncResult_AsyncState;

  __declspec(property(get = System_IAsyncResult_get_CompletedSynchronously)) bool System_IAsyncResult_CompletedSynchronously;

  __declspec(property(get = System_IAsyncResult_get_IsCompleted)) bool System_IAsyncResult_IsCompleted;

  __declspec(property(get = System_IAsyncResult_get_AsyncWaitHandle))::System::Threading::WaitHandle* System_IAsyncResult_AsyncWaitHandle;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  constexpr ::System::Threading::Tasks::Task*& __get_Task();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __get_Task() const;

  constexpr void __set_Task(::System::Threading::Tasks::Task* value);

  constexpr ::System::Object*& __get__state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__state() const;

  constexpr void __set__state(::System::Object* value);

  constexpr bool& __get__completedSynchronously();

  constexpr bool const& __get__completedSynchronously() const;

  constexpr void __set__completedSynchronously(bool value);

  static inline ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult* New_ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, bool completedSynchronously);

  /// @brief Method .ctor addr 0x2620fc4 size 0x3c virtual false final false
  inline void _ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, bool completedSynchronously);

  /// @brief Method System.IAsyncResult.get_AsyncState addr 0x2621224 size 0x8 virtual true final true
  inline ::System::Object* System_IAsyncResult_get_AsyncState();

  /// @brief Method System.IAsyncResult.get_CompletedSynchronously addr 0x262122c size 0x8 virtual true final true
  inline bool System_IAsyncResult_get_CompletedSynchronously();

  /// @brief Method System.IAsyncResult.get_IsCompleted addr 0x2621234 size 0x18 virtual true final true
  inline bool System_IAsyncResult_get_IsCompleted();

  /// @brief Method System.IAsyncResult.get_AsyncWaitHandle addr 0x262124c size 0xa4 virtual true final true
  inline ::System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();

  // Ctor Parameters [CppParam { name: "", ty: "__TaskToApm__TaskWrapperAsyncResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskToApm__TaskWrapperAsyncResult(__TaskToApm__TaskWrapperAsyncResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskToApm__TaskWrapperAsyncResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskToApm__TaskWrapperAsyncResult(__TaskToApm__TaskWrapperAsyncResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskToApm__TaskWrapperAsyncResult();

public:
  /// @brief Field Task, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ___Task;

  /// @brief Field _state, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____state;

  /// @brief Field _completedSynchronously, offset: 0x20, size: 0x1, def value: None
  bool ____completedSynchronously;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult, 0x28>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2760))
// CS Name: ::TaskToApm::<>c__DisplayClass3_0*
class CORDL_TYPE __TaskToApm____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __get_callback, put = __set_callback))::System::AsyncCallback* callback;

  /// @brief Field asyncResult, offset 0x18, size 0x8
  __declspec(property(get = __get_asyncResult, put = __set_asyncResult))::System::IAsyncResult* asyncResult;

  constexpr ::System::AsyncCallback*& __get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __get_callback() const;

  constexpr void __set_callback(::System::AsyncCallback* value);

  constexpr ::System::IAsyncResult*& __get_asyncResult();

  constexpr ::cordl_internals::to_const_pointer<::System::IAsyncResult*> const& __get_asyncResult() const;

  constexpr void __set_asyncResult(::System::IAsyncResult* value);

  static inline ::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor addr 0x26211e8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <InvokeCallbackWhenTaskCompletes>b__0 addr 0x26212f0 size 0x28 virtual false final false
  inline void _InvokeCallbackWhenTaskCompletes_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__TaskToApm____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TaskToApm____c__DisplayClass3_0(__TaskToApm____c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TaskToApm____c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TaskToApm____c__DisplayClass3_0(__TaskToApm____c__DisplayClass3_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TaskToApm____c__DisplayClass3_0();

public:
  /// @brief Field callback, offset: 0x10, size: 0x8, def value: None
  ::System::AsyncCallback* ___callback;

  /// @brief Field asyncResult, offset: 0x18, size: 0x8, def value: None
  ::System::IAsyncResult* ___asyncResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::TaskToApm
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2761))
// CS Name: ::System.Threading.Tasks::TaskToApm*
class CORDL_TYPE TaskToApm : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0;

  using TaskWrapperAsyncResult = ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult;

  /// @brief Method Begin addr 0x2620e6c size 0xf4 virtual false final false
  static inline ::System::IAsyncResult* Begin(::System::Threading::Tasks::Task* task, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method End addr 0x26210f8 size 0xec virtual false final false
  static inline void End(::System::IAsyncResult* asyncResult);

  /// @brief Method End addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TResult> static inline TResult End(::System::IAsyncResult* asyncResult);

  /// @brief Method InvokeCallbackWhenTaskCompletes addr 0x2621000 size 0xf8 virtual false final false
  static inline void InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task* antecedent, ::System::AsyncCallback* callback, ::System::IAsyncResult* asyncResult);

  // Ctor Parameters [CppParam { name: "", ty: "TaskToApm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TaskToApm(TaskToApm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TaskToApm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TaskToApm(TaskToApm const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TaskToApm();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::TaskToApm, 0x10>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::TaskToApm);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskToApm*, "System.Threading.Tasks", "TaskToApm");
NEED_NO_BOX(::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult*, "System.Threading.Tasks", "TaskToApm/TaskWrapperAsyncResult");
NEED_NO_BOX(::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0*, "System.Threading.Tasks", "TaskToApm/<>c__DisplayClass3_0");
