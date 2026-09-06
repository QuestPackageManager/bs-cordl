#pragma once
// IWYU pragma private; include "GlobalNamespace/AsyncComputeOperation_1.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_impl.hpp"
#include "GlobalNamespace/zzzz__AsyncComputeOperation_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& GlobalNamespace::AsyncComputeOperation_1<T>::__cordl_internal_get__tcs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tcs;
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& GlobalNamespace::AsyncComputeOperation_1<T>::__cordl_internal_get__tcs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tcs;
}
template <typename T> constexpr void GlobalNamespace::AsyncComputeOperation_1<T>::__cordl_internal_set__tcs(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tcs = value;
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::AsyncComputeOperation_1<T>::get_task() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), { "get_task", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::_ctor(int32_t timeoutMs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeoutMs);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Execute(bool disposed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), { "Execute", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposed);
}
template <typename T> inline bool GlobalNamespace::AsyncComputeOperation_1<T>::IsValidRequest() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), { "IsValidRequest", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Complete(T computeResult) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), { "Complete", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeResult);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Cancel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), { "Cancel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Fail(::System::Exception* ex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), { "Fail", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
template <typename T> inline T GlobalNamespace::AsyncComputeOperation_1<T>::Compute() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::AsyncComputeOperation_1<T>::Finally() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::AsyncComputeOperation_1<T>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::AsyncComputeOperation_1<T>* GlobalNamespace::AsyncComputeOperation_1<T>::New_ctor(int32_t timeoutMs) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AsyncComputeOperation_1<T>*>(timeoutMs));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::AsyncComputeOperation_1<T>::AsyncComputeOperation_1() {}
