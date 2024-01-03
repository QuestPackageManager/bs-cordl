#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCreationOptions_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename TResult> constexpr ::System::Threading::Tasks::Task_1<TResult>*& System::Threading::Tasks::TaskCompletionSource_1<TResult>::__get__task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____task;
}
template <typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<TResult>*> const& System::Threading::Tasks::TaskCompletionSource_1<TResult>::__get__task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____task;
}
template <typename TResult> constexpr void System::Threading::Tasks::TaskCompletionSource_1<TResult>::__set__task(::System::Threading::Tasks::Task_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TResult> inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>());
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult>
inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>*
System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(creationOptions));
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, creationOptions);
}
template <typename TResult> inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Object* state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(state));
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state);
}
template <typename TResult>
inline ::System::Threading::Tasks::TaskCompletionSource_1<TResult>*
System::Threading::Tasks::TaskCompletionSource_1<TResult>::New_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>(state, creationOptions));
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::_ctor(::System::Object* state, ::System::Threading::Tasks::TaskCreationOptions creationOptions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::TaskCreationOptions>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, creationOptions);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Threading::Tasks::TaskCompletionSource_1<TResult>::get_Task() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), "get_Task",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal_method);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SpinUntilCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), "SpinUntilCompleted",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), "TrySetException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, exception);
}
template <typename TResult> inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), "TrySetResult",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetResult(TResult result) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), "SetResult",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
template <typename TResult> inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), "TrySetCanceled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TResult> inline bool System::Threading::Tasks::TaskCompletionSource_1<TResult>::TrySetCanceled(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), "TrySetCanceled", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cancellationToken);
}
template <typename TResult> inline void System::Threading::Tasks::TaskCompletionSource_1<TResult>::SetCanceled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskCompletionSource_1<TResult>*>::get(), "SetCanceled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TResult> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<TResult>::TaskCompletionSource_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
