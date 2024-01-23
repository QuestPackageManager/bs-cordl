#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebCompletionSource_1)
namespace System::Net {
template <typename T> class __WebCompletionSource_1__Result;
}
namespace System::Net {
template <typename T> struct __WebCompletionSource_1__Status;
}
namespace System::Net {
template <typename T> struct __WebCompletionSource_1___WaitForCompletion_d__15;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct __ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
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
template <typename T> struct __WebCompletionSource_1__Status;
}
namespace System::Net {
template <typename T> class WebCompletionSource_1;
}
namespace System::Net {
template <typename T> class __WebCompletionSource_1__Result;
}
namespace System::Net {
template <typename T> struct __WebCompletionSource_1___WaitForCompletion_d__15;
}
// Write type traits
MARK_GEN_VAL_T(::System::Net::__WebCompletionSource_1__Status);
MARK_GEN_REF_PTR_T(::System::Net::WebCompletionSource_1);
MARK_GEN_REF_PTR_T(::System::Net::__WebCompletionSource_1__Result);
MARK_GEN_VAL_T(::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15);
// Type: ::Status
// SizeInfo { instance_size: 4, native_size: 20, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9209)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9209), inst: 5027 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9209))
// CS Name: ::WebCompletionSource`1::Status<T>
struct CORDL_TYPE __WebCompletionSource_1__Status {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____WebCompletionSource_1__Status_Unwrapped
  enum struct ____WebCompletionSource_1__Status_Unwrapped : int32_t {
    __E_Running = static_cast<int32_t>(0x0),
    __E_Completed = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_Faulted = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____WebCompletionSource_1__Status_Unwrapped() const noexcept {
    return static_cast<____WebCompletionSource_1__Status_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __WebCompletionSource_1__Status(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebCompletionSource_1__Status();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Running value: static_cast<int32_t>(0x0)
  static ::System::Net::__WebCompletionSource_1__Status<T> const Running;

  /// @brief Field Completed value: static_cast<int32_t>(0x1)
  static ::System::Net::__WebCompletionSource_1__Status<T> const Completed;

  /// @brief Field Canceled value: static_cast<int32_t>(0x2)
  static ::System::Net::__WebCompletionSource_1__Status<T> const Canceled;

  /// @brief Field Faulted value: static_cast<int32_t>(0x3)
  static ::System::Net::__WebCompletionSource_1__Status<T> const Faulted;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Net
// Type: ::Result
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(9209)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9209), inst: 5026
// })] Self: TypeDefinitionIndex(TypeDefinitionIndex(9210)) CS Name: ::WebCompletionSource`1::Result<T>*
class CORDL_TYPE __WebCompletionSource_1__Result : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Status>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__Status_k__BackingField, put = __cordl_internal_set__Status_k__BackingField))::System::Net::__WebCompletionSource_1__Status<T> _Status_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Error_k__BackingField,
                      put = __cordl_internal_set__Error_k__BackingField))::System::Runtime::ExceptionServices::ExceptionDispatchInfo* _Error_k__BackingField;

  /// @brief Field <Argument>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Argument_k__BackingField, put = __cordl_internal_set__Argument_k__BackingField)) T _Argument_k__BackingField;

  __declspec(property(get = get_Status))::System::Net::__WebCompletionSource_1__Status<T> Status;

  __declspec(property(get = get_Success)) bool Success;

  __declspec(property(get = get_Error))::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Error;

  __declspec(property(get = get_Argument)) T Argument;

  constexpr ::System::Net::__WebCompletionSource_1__Status<T>& __cordl_internal_get__Status_k__BackingField();

  constexpr ::System::Net::__WebCompletionSource_1__Status<T> const& __cordl_internal_get__Status_k__BackingField() const;

  constexpr void __cordl_internal_set__Status_k__BackingField(::System::Net::__WebCompletionSource_1__Status<T> value);

  constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get__Error_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const& __cordl_internal_get__Error_k__BackingField() const;

  constexpr void __cordl_internal_set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value);

  constexpr T& __cordl_internal_get__Argument_k__BackingField();

  constexpr T const& __cordl_internal_get__Argument_k__BackingField() const;

  constexpr void __cordl_internal_set__Argument_k__BackingField(T value);

  /// @brief Method get_Status, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Net::__WebCompletionSource_1__Status<T> get_Status();

  /// @brief Method get_Success, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Success();

  /// @brief Method get_Error, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* get_Error();

  /// @brief Method get_Argument, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Argument();

  static inline ::System::Net::__WebCompletionSource_1__Result<T>* New_ctor(T argument);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T argument);

  static inline ::System::Net::__WebCompletionSource_1__Result<T>* New_ctor(::System::Net::__WebCompletionSource_1__Status<T> state,
                                                                            ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::__WebCompletionSource_1__Status<T> state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error);

  // Ctor Parameters [CppParam { name: "", ty: "__WebCompletionSource_1__Result", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WebCompletionSource_1__Result(__WebCompletionSource_1__Result&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WebCompletionSource_1__Result", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WebCompletionSource_1__Result(__WebCompletionSource_1__Result const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebCompletionSource_1__Result();

public:
  /// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::System::Net::__WebCompletionSource_1__Status<T> ____Status_k__BackingField;

  /// @brief Field <Error>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* ____Error_k__BackingField;

  /// @brief Field <Argument>k__BackingField, offset: 0x20, size: 0x8, def value: None
  T ____Argument_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
// Type: ::<WaitForCompletion>d__15
// SizeInfo { instance_size: 56, native_size: 72, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(3397)), TypeDefinitionIndex(TypeDefinitionIndex(3402)), TypeDefinitionIndex(TypeDefinitionIndex(9210)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3397), inst: 1122 }), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 101 }),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9210), inst: 101 })] Self: TypeDefinitionIndex(TypeDefinitionIndex(9211)) CS Name:
// ::WebCompletionSource`1::<WaitForCompletion>d__15<T>
struct CORDL_TYPE __WebCompletionSource_1___WaitForCompletion_d__15 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<T>*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>",
  // modifiers: "", def_value: None }]
  constexpr __WebCompletionSource_1___WaitForCompletion_d__15(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::System::Net::WebCompletionSource_1<T>* __4__this,
      ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*> __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WebCompletionSource_1___WaitForCompletion_d__15();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::WebCompletionSource_1<T>* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Net
// Type: System.Net::WebCompletionSource`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9212))
// CS Name: ::System.Net::WebCompletionSource`1<T>*
class CORDL_TYPE WebCompletionSource_1 : public ::System::Object {
public:
  // Declarations
  using _WaitForCompletion_d__15 = ::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>;

  using Result = ::System::Net::__WebCompletionSource_1__Result<T>;

  using Status = ::System::Net::__WebCompletionSource_1__Status<T>;

  /// @brief Field completion, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_completion,
                      put = __cordl_internal_set_completion))::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>* completion;

  /// @brief Field currentResult, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currentResult, put = __cordl_internal_set_currentResult))::System::Net::__WebCompletionSource_1__Result<T>* currentResult;

  __declspec(property(get = get_CurrentResult))::System::Net::__WebCompletionSource_1__Result<T>* CurrentResult;

  __declspec(property(get = get_Task))::System::Threading::Tasks::Task* Task;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*& __cordl_internal_get_completion();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*> const& __cordl_internal_get_completion() const;

  constexpr void __cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>* value);

  constexpr ::System::Net::__WebCompletionSource_1__Result<T>*& __cordl_internal_get_currentResult();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::__WebCompletionSource_1__Result<T>*> const& __cordl_internal_get_currentResult() const;

  constexpr void __cordl_internal_set_currentResult(::System::Net::__WebCompletionSource_1__Result<T>* value);

  static inline ::System::Net::WebCompletionSource_1<T>* New_ctor(bool runAsync);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(bool runAsync);

  /// @brief Method get_CurrentResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Net::__WebCompletionSource_1__Result<T>* get_CurrentResult();

  /// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* get_Task();

  /// @brief Method TrySetCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetCompleted(T argument);

  /// @brief Method TrySetCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetCompleted();

  /// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetCanceled();

  /// @brief Method TrySetCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetCanceled(::System::OperationCanceledException* error);

  /// @brief Method TrySetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool TrySetException(::System::Exception* error);

  /// @brief Method ThrowOnError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ThrowOnError();

  /// @brief Method WaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* WaitForCompletion();

  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WebCompletionSource_1(WebCompletionSource_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WebCompletionSource_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WebCompletionSource_1(WebCompletionSource_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WebCompletionSource_1();

public:
  /// @brief Field completion, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>* ___completion;

  /// @brief Field currentResult, offset: 0x18, size: 0x8, def value: None
  ::System::Net::__WebCompletionSource_1__Result<T>* ___currentResult;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Net
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::__WebCompletionSource_1__Status, "System.Net", "WebCompletionSource`1/Status");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::WebCompletionSource_1, "System.Net", "WebCompletionSource`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Net::__WebCompletionSource_1__Result, "System.Net", "WebCompletionSource`1/Result");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15, "System.Net", "WebCompletionSource`1/<WaitForCompletion>d__15");
