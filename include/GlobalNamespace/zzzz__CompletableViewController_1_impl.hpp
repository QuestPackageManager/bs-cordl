#pragma once
// IWYU pragma private; include "GlobalNamespace/CompletableViewController_1.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__CompletableViewController_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& GlobalNamespace::CompletableViewController_1<T>::__cordl_internal_get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& GlobalNamespace::CompletableViewController_1<T>::__cordl_internal_get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
template <typename T> constexpr void GlobalNamespace::CompletableViewController_1<T>::__cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taskCompletionSource = value;
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::CompletableViewController_1<T>::WaitForCompletionAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController_1<T>*>(), { "WaitForCompletionAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::CompletableViewController_1<T>::ResetCompletion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController_1<T>*>(), { "ResetCompletion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::CompletableViewController_1<T>::Complete(T result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController_1<T>*>(), { "Complete", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template <typename T> inline void GlobalNamespace::CompletableViewController_1<T>::__Activate(bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::CompletableViewController_1<T>*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addedToHierarchy, screenSystemEnabling);
}
template <typename T> inline void GlobalNamespace::CompletableViewController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompletableViewController_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::CompletableViewController_1<T>* GlobalNamespace::CompletableViewController_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompletableViewController_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::CompletableViewController_1<T>::CompletableViewController_1() {}
