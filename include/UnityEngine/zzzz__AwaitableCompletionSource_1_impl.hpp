#pragma once
// IWYU pragma private; include "UnityEngine\AwaitableCompletionSource_1.hpp"
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
  this->____Awaitable_k__BackingField = value;
}
template <typename T> inline ::UnityEngine::Awaitable_1<T>* UnityEngine::AwaitableCompletionSource_1<T>::get_Awaitable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { "get_Awaitable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Awaitable_1<T>*>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::set_Awaitable(::UnityEngine::Awaitable_1<T>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { "set_Awaitable", {}, { ::i2c::type_of<::UnityEngine::Awaitable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::SetResult(::by_ref<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { "SetResult", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::SetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { "SetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
template <typename T> inline bool UnityEngine::AwaitableCompletionSource_1<T>::CheckAndAcquireCompletionState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { "CheckAndAcquireCompletionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline bool UnityEngine::AwaitableCompletionSource_1<T>::TrySetResult(::by_ref<T> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { "TrySetResult", {}, { ::i2c::type_of<::by_ref<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
template <typename T> inline bool UnityEngine::AwaitableCompletionSource_1<T>::TrySetException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { "TrySetException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void UnityEngine::AwaitableCompletionSource_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AwaitableCompletionSource_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::AwaitableCompletionSource_1<T>* UnityEngine::AwaitableCompletionSource_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AwaitableCompletionSource_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::UnityEngine::AwaitableCompletionSource_1<T>::AwaitableCompletionSource_1() {}
