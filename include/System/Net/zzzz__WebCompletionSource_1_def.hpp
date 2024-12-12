#pragma once
// IWYU pragma private; include "System/Net/WebCompletionSource_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebCompletionSource_1)
namespace System::Net {
template <typename T> class WebCompletionSource_1_Result;
}
namespace System::Net {
template <typename T> struct WebCompletionSource_1_Status;
}
namespace System::Net {
template <typename T> struct WebCompletionSource_1__WaitForCompletion_d__15;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System {
class OperationCanceledException;
}
// Forward declare root types
namespace System::Net {
template <typename T> struct WebCompletionSource_1_Status;
}
namespace System::Net {
template <typename T> class WebCompletionSource_1;
}
namespace System::Net {
template <typename T> class WebCompletionSource_1_Result;
}
namespace System::Net {
template <typename T> struct WebCompletionSource_1__WaitForCompletion_d__15;
}
// Write type traits
MARK_GEN_VAL_T(::System::Net::WebCompletionSource_1_Status);
MARK_GEN_REF_PTR_T(::System::Net::WebCompletionSource_1);
MARK_GEN_REF_PTR_T(::System::Net::WebCompletionSource_1_Result);
MARK_GEN_VAL_T(::System::Net::WebCompletionSource_1__WaitForCompletion_d__15);
// Dependencies
namespace System::Net {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Net.WebCompletionSource`1/Status<T>
struct CORDL_TYPE WebCompletionSource_1_Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WebCompletionSource_1_Status_Unwrapped
  enum struct __WebCompletionSource_1_Status_Unwrapped : int32_t {
    __E_Running = static_cast<int32_t>(0x0),
    __E_Completed = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_Faulted = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WebCompletionSource_1_Status_Unwrapped() const noexcept {
    return static_cast<__WebCompletionSource_1_Status_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebCompletionSource_1_Status();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WebCompletionSource_1_Status(int32_t value__) noexcept;

  /// @brief Field Canceled value: I32(2)
  static ::System::Net::WebCompletionSource_1_Status<T> const Canceled;

  /// @brief Field Completed value: I32(1)
  static ::System::Net::WebCompletionSource_1_Status<T> const Completed;

  /// @brief Field Faulted value: I32(3)
  static ::System::Net::WebCompletionSource_1_Status<T> const Faulted;

  /// @brief Field Running value: I32(0)
  static ::System::Net::WebCompletionSource_1_Status<T> const Running;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9725 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Net
// Dependencies System.Net.WebCompletionSource`1::Status<T>, System.Object
namespace System::Net {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Net.WebCompletionSource`1/Result<T>
class CORDL_TYPE WebCompletionSource_1_Result : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Argument)) T Argument;

  __declspec(property(get = get_Error)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Error;

  __declspec(property(get = get_Status)) ::System::Net::WebCompletionSource_1_Status<T> Status;

  __declspec(property(get = get_Success)) bool Success;

  /// @brief Field <Argument>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Argument_k__BackingField, put = __cordl_internal_set__Argument_k__BackingField)) T _Argument_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Error_k__BackingField,
                      put = __cordl_internal_set__Error_k__BackingField)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _Error_k__BackingField;

  /// @brief Field <Status>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Status_k__BackingField, put = __cordl_internal_set__Status_k__BackingField)) ::System::Net::WebCompletionSource_1_Status<T> _Status_k__BackingField;

  static inline ::System::Net::WebCompletionSource_1_Result<T>* New_ctor(T argument);

  static inline ::System::Net::WebCompletionSource_1_Result<T>* New_ctor(::System::Net::WebCompletionSource_1_Status<T> state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error);

  constexpr T const& __cordl_internal_get__Argument_k__BackingField() const;

  constexpr T& __cordl_internal_get__Argument_k__BackingField();

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get__Error_k__BackingField() const;

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get__Error_k__BackingField();

  constexpr ::System::Net::WebCompletionSource_1_Status<T> const& __cordl_internal_get__Status_k__BackingField() const;

  constexpr ::System::Net::WebCompletionSource_1_Status<T>& __cordl_internal_get__Status_k__BackingField();

  constexpr void __cordl_internal_set__Argument_k__BackingField(T value);

  constexpr void __cordl_internal_set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  constexpr void __cordl_internal_set__Status_k__BackingField(::System::Net::WebCompletionSource_1_Status<T> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T argument);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::WebCompletionSource_1_Status<T> state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error);

  /// @brief Method get_Argument, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Argument();

  /// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error();

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Net::WebCompletionSource_1_Status<T> get_Status();

  /// @brief Method get_Success, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Success();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebCompletionSource_1_Result();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1_Result", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebCompletionSource_1_Result(WebCompletionSource_1_Result&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1_Result", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebCompletionSource_1_Result(WebCompletionSource_1_Result const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9726 };

  /// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::Net::WebCompletionSource_1_Status<T> ____Status_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* ____Error_k__BackingField;

  /// @brief Field <Argument>k__BackingField, offset: 0x20, size: 0x8, def value: None
  T ____Argument_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>,
// System.Runtime.CompilerServices.IAsyncStateMachine
namespace System::Net {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Net.WebCompletionSource`1/<WaitForCompletion>d__15<T>
struct CORDL_TYPE WebCompletionSource_1__WaitForCompletion_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr WebCompletionSource_1__WaitForCompletion_d__15();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<T>*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebCompletionSource_1_Result<T>*>",
  // modifiers: "", def_value: None }]
  constexpr WebCompletionSource_1__WaitForCompletion_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::System::Net::WebCompletionSource_1<T>* __4__this,
      ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebCompletionSource_1_Result<T>*> __u__1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9727 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebCompletionSource_1<T>* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Net::WebCompletionSource_1_Result<T>*> __u__1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Net
// Dependencies System.Object
namespace System::Net {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Net.WebCompletionSource`1<T>
class CORDL_TYPE WebCompletionSource_1 : public ::System::Object {
public:
  // Declarations
  using Result = ::System::Net::WebCompletionSource_1_Result<T>;

  using Status = ::System::Net::WebCompletionSource_1_Status<T>;

  using _WaitForCompletion_d__15 = ::System::Net::WebCompletionSource_1__WaitForCompletion_d__15<T>;

  __declspec(property(get = get_CurrentResult)) ::System::Net::WebCompletionSource_1_Result<T>* CurrentResult;

  __declspec(property(get = get_Task)) ::System::Threading::Tasks::Task* Task;

  /// @brief Field completion, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_completion,
                      put = __cordl_internal_set_completion)) ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>* completion;

  /// @brief Field currentResult, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currentResult, put = __cordl_internal_set_currentResult)) ::System::Net::WebCompletionSource_1_Result<T>* currentResult;

  static inline ::System::Net::WebCompletionSource_1<T>* New_ctor(bool runAsync);

  /// @brief Method ThrowOnError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ThrowOnError();

  /// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetCanceled();

  /// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetCanceled(::System::OperationCanceledException* error);

  /// @brief Method TrySetCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetCompleted();

  /// @brief Method TrySetCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetCompleted(T argument);

  /// @brief Method TrySetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetException(::System::Exception* error);

  /// @brief Method WaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* WaitForCompletion();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>* const& __cordl_internal_get_completion() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>*& __cordl_internal_get_completion();

  constexpr ::System::Net::WebCompletionSource_1_Result<T>* const& __cordl_internal_get_currentResult() const;

  constexpr ::System::Net::WebCompletionSource_1_Result<T>*& __cordl_internal_get_currentResult();

  constexpr void __cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>* value);

  constexpr void __cordl_internal_set_currentResult(::System::Net::WebCompletionSource_1_Result<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(bool runAsync);

  /// @brief Method get_CurrentResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Net::WebCompletionSource_1_Result<T>* get_CurrentResult();

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* get_Task();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebCompletionSource_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebCompletionSource_1(WebCompletionSource_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebCompletionSource_1(WebCompletionSource_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9728 };

  /// @brief Field completion, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>* ___completion;

  /// @brief Field currentResult, offset: 0x18, size: 0x8, def value: None
  ::System::Net::WebCompletionSource_1_Result<T>* ___currentResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::WebCompletionSource_1_Status, "System.Net", "WebCompletionSource`1/Status");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::WebCompletionSource_1, "System.Net", "WebCompletionSource`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::WebCompletionSource_1_Result, "System.Net", "WebCompletionSource`1/Result");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::WebCompletionSource_1__WaitForCompletion_d__15, "System.Net", "WebCompletionSource`1/<WaitForCompletion>d__15");
