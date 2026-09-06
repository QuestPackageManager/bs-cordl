#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncBackgroundCommand_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_1_def.hpp"
#include "GlobalNamespace/zzzz__IBackgroundCommand_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& GlobalNamespace::SyncBackgroundCommand_1<T>::__cordl_internal_get__taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
template <typename T> constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& GlobalNamespace::SyncBackgroundCommand_1<T>::__cordl_internal_get__taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____taskCompletionSource;
}
template <typename T> constexpr void GlobalNamespace::SyncBackgroundCommand_1<T>::__cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____taskCompletionSource = value;
}
template <typename T> inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::SyncBackgroundCommand_1<T>::get_resultTask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand_1<T>*>(), { "get_resultTask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Threading::Tasks::Task* GlobalNamespace::SyncBackgroundCommand_1<T>::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand_1<T>*>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::SyncBackgroundCommand_1<T>::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::SyncBackgroundCommand_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SyncBackgroundCommand_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::SyncBackgroundCommand_1<T>* GlobalNamespace::SyncBackgroundCommand_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SyncBackgroundCommand_1<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBackgroundCommand"
template <typename T> constexpr GlobalNamespace::SyncBackgroundCommand_1<T>::operator ::GlobalNamespace::IBackgroundCommand*() noexcept {
  return static_cast<::GlobalNamespace::IBackgroundCommand*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBackgroundCommand"
template <typename T> constexpr ::GlobalNamespace::IBackgroundCommand* GlobalNamespace::SyncBackgroundCommand_1<T>::i___GlobalNamespace__IBackgroundCommand() noexcept {
  return static_cast<::GlobalNamespace::IBackgroundCommand*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SyncBackgroundCommand_1<T>::SyncBackgroundCommand_1() {}
