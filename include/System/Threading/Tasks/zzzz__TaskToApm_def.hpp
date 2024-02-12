#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TaskToApm)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
class __TaskToApm__TaskWrapperAsyncResult;
}
namespace System::Threading::Tasks {
class __TaskToApm____c__DisplayClass3_0;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2759))
// CS Name: ::TaskToApm::TaskWrapperAsyncResult*
class CORDL_TYPE __TaskToApm__TaskWrapperAsyncResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field Task, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Task, put = __cordl_internal_set_Task))::System::Threading::Tasks::Task* Task;

  /// @brief Field _state, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::System::Object* _state;

  /// @brief Field _completedSynchronously, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__completedSynchronously, put = __cordl_internal_set__completedSynchronously)) bool _completedSynchronously;

  __declspec(property(get = System_IAsyncResult_get_AsyncState))::System::Object* System_IAsyncResult_AsyncState;

  __declspec(property(get = System_IAsyncResult_get_CompletedSynchronously)) bool System_IAsyncResult_CompletedSynchronously;

  __declspec(property(get = System_IAsyncResult_get_IsCompleted)) bool System_IAsyncResult_IsCompleted;

  __declspec(property(get = System_IAsyncResult_get_AsyncWaitHandle))::System::Threading::WaitHandle* System_IAsyncResult_AsyncWaitHandle;

  /// @brief Convert operator to "::System::IAsyncResult"
  constexpr operator ::System::IAsyncResult*() noexcept;

  /// @brief Convert to "::System::IAsyncResult"
  constexpr ::System::IAsyncResult* i___System__IAsyncResult() noexcept;

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_Task();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get_Task() const;

  constexpr void __cordl_internal_set_Task(::System::Threading::Tasks::Task* value);

  constexpr ::System::Object*& __cordl_internal_get__state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__state() const;

  constexpr void __cordl_internal_set__state(::System::Object* value);

  constexpr bool& __cordl_internal_get__completedSynchronously();

  constexpr bool const& __cordl_internal_get__completedSynchronously() const;

  constexpr void __cordl_internal_set__completedSynchronously(bool value);

  static inline ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult* New_ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, bool completedSynchronously);

  /// @brief Method .ctor, addr 0x2647140, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::Tasks::Task* task, ::System::Object* state, bool completedSynchronously);

  /// @brief Method System.IAsyncResult.get_AsyncState, addr 0x26473a0, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_IAsyncResult_get_AsyncState();

  /// @brief Method System.IAsyncResult.get_CompletedSynchronously, addr 0x26473a8, size 0x8, virtual true, abstract: false, final true
  inline bool System_IAsyncResult_get_CompletedSynchronously();

  /// @brief Method System.IAsyncResult.get_IsCompleted, addr 0x26473b0, size 0x18, virtual true, abstract: false, final true
  inline bool System_IAsyncResult_get_IsCompleted();

  /// @brief Method System.IAsyncResult.get_AsyncWaitHandle, addr 0x26473c8, size 0xa4, virtual true, abstract: false, final true
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

static_assert(offsetof(::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult, ___Task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult, ____state) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult, ____completedSynchronously) == 0x20, "Offset mismatch!");

} // namespace System::Threading::Tasks
// Type: ::<>c__DisplayClass3_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2760))
// CS Name: ::TaskToApm::<>c__DisplayClass3_0*
class CORDL_TYPE __TaskToApm____c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field callback, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_callback, put = __cordl_internal_set_callback))::System::AsyncCallback* callback;

  /// @brief Field asyncResult, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_asyncResult, put = __cordl_internal_set_asyncResult))::System::IAsyncResult* asyncResult;

  constexpr ::System::AsyncCallback*& __cordl_internal_get_callback();

  constexpr ::cordl_internals::to_const_pointer<::System::AsyncCallback*> const& __cordl_internal_get_callback() const;

  constexpr void __cordl_internal_set_callback(::System::AsyncCallback* value);

  constexpr ::System::IAsyncResult*& __cordl_internal_get_asyncResult();

  constexpr ::cordl_internals::to_const_pointer<::System::IAsyncResult*> const& __cordl_internal_get_asyncResult() const;

  constexpr void __cordl_internal_set_asyncResult(::System::IAsyncResult* value);

  static inline ::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0* New_ctor();

  /// @brief Method .ctor, addr 0x2647364, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InvokeCallbackWhenTaskCompletes>b__0, addr 0x264746c, size 0x28, virtual false, abstract: false, final false
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

static_assert(offsetof(::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0, ___callback) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0, ___asyncResult) == 0x18, "Offset mismatch!");

} // namespace System::Threading::Tasks
// Type: System.Threading.Tasks::TaskToApm
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2761))
// CS Name: ::System.Threading.Tasks::TaskToApm*
class CORDL_TYPE TaskToApm : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::System::Threading::Tasks::__TaskToApm____c__DisplayClass3_0;

  using TaskWrapperAsyncResult = ::System::Threading::Tasks::__TaskToApm__TaskWrapperAsyncResult;

  /// @brief Method Begin, addr 0x2646fe8, size 0xf4, virtual false, abstract: false, final false
  static inline ::System::IAsyncResult* Begin(::System::Threading::Tasks::Task* task, ::System::AsyncCallback* callback, ::System::Object* state);

  /// @brief Method End, addr 0x2647274, size 0xec, virtual false, abstract: false, final false
  static inline void End(::System::IAsyncResult* asyncResult);

  /// @brief Method End, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline TResult End(::System::IAsyncResult* asyncResult);

  /// @brief Method InvokeCallbackWhenTaskCompletes, addr 0x264717c, size 0xf8, virtual false, abstract: false, final false
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
