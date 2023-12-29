#pragma once
#include "System/Net/zzzz__WebCompletionSource_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Status<T>::__WebCompletionSource_1__Status(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Status<T>::__WebCompletionSource_1__Status() {}
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Status<T> System::Net::__WebCompletionSource_1__Status<T>::Running{ static_cast<int32_t>(0x0) };
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Status<T> System::Net::__WebCompletionSource_1__Status<T>::Completed{ static_cast<int32_t>(0x1) };
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Status<T> System::Net::__WebCompletionSource_1__Status<T>::Canceled{ static_cast<int32_t>(0x2) };
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Status<T> System::Net::__WebCompletionSource_1__Status<T>::Faulted{ static_cast<int32_t>(0x3) };
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Status<T>& System::Net::__WebCompletionSource_1__Result<T>::__get__Status_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Status_k__BackingField;
}
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Status<T> const& System::Net::__WebCompletionSource_1__Result<T>::__get__Status_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Status_k__BackingField;
}
template <typename T> constexpr void System::Net::__WebCompletionSource_1__Result<T>::__set__Status_k__BackingField(::System::Net::__WebCompletionSource_1__Status<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Status_k__BackingField = value;
}
template <typename T> constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Net::__WebCompletionSource_1__Result<T>::__get__Error_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Error_k__BackingField;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const&
System::Net::__WebCompletionSource_1__Result<T>::__get__Error_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Error_k__BackingField;
}
template <typename T> constexpr void System::Net::__WebCompletionSource_1__Result<T>::__set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Error_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr T& System::Net::__WebCompletionSource_1__Result<T>::__get__Argument_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Argument_k__BackingField;
}
template <typename T> constexpr T const& System::Net::__WebCompletionSource_1__Result<T>::__get__Argument_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Argument_k__BackingField;
}
template <typename T> constexpr void System::Net::__WebCompletionSource_1__Result<T>::__set__Argument_k__BackingField(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Argument_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> inline ::System::Net::__WebCompletionSource_1__Status<T> System::Net::__WebCompletionSource_1__Result<T>::get_Status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                                                                             "get_Status", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__WebCompletionSource_1__Status<T>, false>(this, ___internal_method);
}
template <typename T> inline bool System::Net::__WebCompletionSource_1__Result<T>::get_Success() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                                                                             "get_Success", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::__WebCompletionSource_1__Result<T>::get_Error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                                                                             "get_Error", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(this, ___internal_method);
}
template <typename T> inline T System::Net::__WebCompletionSource_1__Result<T>::get_Argument() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(),
                                                                             "get_Argument", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline ::System::Net::__WebCompletionSource_1__Result<T>* System::Net::__WebCompletionSource_1__Result<T>::New_ctor(T argument) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebCompletionSource_1__Result<T>*>(argument));
}
template <typename T> inline void System::Net::__WebCompletionSource_1__Result<T>::_ctor(T argument) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, argument);
}
template <typename T>
inline ::System::Net::__WebCompletionSource_1__Result<T>* System::Net::__WebCompletionSource_1__Result<T>::New_ctor(::System::Net::__WebCompletionSource_1__Status<T> state,
                                                                                                                    ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__WebCompletionSource_1__Result<T>*>(state, error));
}
template <typename T>
inline void System::Net::__WebCompletionSource_1__Result<T>::_ctor(::System::Net::__WebCompletionSource_1__Status<T> state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1__Result<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::__WebCompletionSource_1__Status<T>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, error);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Result<T>::__WebCompletionSource_1__Result() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
template <typename T> inline void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::System::Net::WebCompletionSource_1<T>*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__WebCompletionSource_1___WaitForCompletion_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::System::Net::WebCompletionSource_1<T>* __4__this,
    ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<::System::Net::__WebCompletionSource_1__Result<T>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Net::__WebCompletionSource_1___WaitForCompletion_d__15<T>::__WebCompletionSource_1___WaitForCompletion_d__15() {}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*& System::Net::WebCompletionSource_1<T>::__get_completion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completion;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>*> const&
System::Net::WebCompletionSource_1<T>::__get_completion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completion;
}
template <typename T>
constexpr void System::Net::WebCompletionSource_1<T>::__set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::__WebCompletionSource_1__Result<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___completion)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::System::Net::__WebCompletionSource_1__Result<T>*& System::Net::WebCompletionSource_1<T>::__get_currentResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentResult;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Net::__WebCompletionSource_1__Result<T>*> const& System::Net::WebCompletionSource_1<T>::__get_currentResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentResult;
}
template <typename T> constexpr void System::Net::WebCompletionSource_1<T>::__set_currentResult(::System::Net::__WebCompletionSource_1__Result<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___currentResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
/// @param runAsync: bool (default: true)
template <typename T> inline ::System::Net::WebCompletionSource_1<T>* System::Net::WebCompletionSource_1<T>::New_ctor(bool runAsync) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebCompletionSource_1<T>*>(runAsync));
}
/// @param runAsync: bool (default: true)
template <typename T> inline void System::Net::WebCompletionSource_1<T>::_ctor(bool runAsync) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runAsync);
}
template <typename T> inline ::System::Net::__WebCompletionSource_1__Result<T>* System::Net::WebCompletionSource_1<T>::get_CurrentResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                                                                             "get_CurrentResult", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::__WebCompletionSource_1__Result<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task* System::Net::WebCompletionSource_1<T>::get_Task() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(), "get_Task",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
template <typename T> inline bool System::Net::WebCompletionSource_1<T>::TrySetCompleted(T argument) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(), "TrySetCompleted", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, argument);
}
template <typename T> inline bool System::Net::WebCompletionSource_1<T>::TrySetCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(), "TrySetCompleted",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Net::WebCompletionSource_1<T>::TrySetCanceled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(), "TrySetCanceled",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool System::Net::WebCompletionSource_1<T>::TrySetCanceled(::System::OperationCanceledException* error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(), "TrySetCanceled", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::OperationCanceledException*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, error);
}
template <typename T> inline bool System::Net::WebCompletionSource_1<T>::TrySetException(::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(), "TrySetException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, error);
}
template <typename T> inline void System::Net::WebCompletionSource_1<T>::ThrowOnError() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(), "ThrowOnError",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* System::Net::WebCompletionSource_1<T>::WaitForCompletion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebCompletionSource_1<T>*>::get(),
                                                                             "WaitForCompletion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::System::Net::WebCompletionSource_1<T>::WebCompletionSource_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
