#pragma once
// IWYU pragma private; include "UnityEngine/AwaitableCompletionSource_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AwaitableCompletionSource_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "UnityEngine/zzzz__Awaitable_1_def.hpp"
template <typename T> constexpr int32_t& UnityEngine::AwaitableCompletionSource_1<T>::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename T> constexpr int32_t const& UnityEngine::AwaitableCompletionSource_1<T>::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
template <typename T> constexpr void UnityEngine::AwaitableCompletionSource_1<T>::__cordl_internal_set__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
template <typename T> constexpr ::UnityEngine::Awaitable_1<T>*& UnityEngine::AwaitableCompletionSource_1<T>::__cordl_internal_get__Awaitable_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Awaitable_k__BackingField;
}
template <typename T> constexpr ::UnityEngine::Awaitable_1<T>* const& UnityEngine::AwaitableCompletionSource_1<T>::__cordl_internal_get__Awaitable_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Awaitable_k__BackingField;
}
template <typename T> constexpr void UnityEngine::AwaitableCompletionSource_1<T>::__cordl_internal_set__Awaitable_k__BackingField(::UnityEngine::Awaitable_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____Awaitable_k__BackingField, value);
}
template <typename T> inline ::UnityEngine::Awaitable_1<T>* UnityEngine::AwaitableCompletionSource_1<T>::get_Awaitable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(),
                                                                             "get_Awaitable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::set_Awaitable(::UnityEngine::Awaitable_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(), "set_Awaitable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Awaitable_1<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::SetResult(::ByRef<T> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(), "SetResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::SetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(), "SetException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
template <typename T> inline bool UnityEngine::AwaitableCompletionSource_1<T>::CheckAndAcquireCompletionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(),
                                                                             "CheckAndAcquireCompletionState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::AwaitableCompletionSource_1<T>::TrySetResult(::ByRef<T> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(), "TrySetResult",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::AwaitableCompletionSource_1<T>::TrySetException(::System::Exception* exception) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(), "TrySetException",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, exception);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AwaitableCompletionSource_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::AwaitableCompletionSource_1<T>* UnityEngine::AwaitableCompletionSource_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AwaitableCompletionSource_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::AwaitableCompletionSource_1<T>::AwaitableCompletionSource_1() {}
