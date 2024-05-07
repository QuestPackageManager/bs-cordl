#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/Debouncer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/UnityExtension/zzzz__Debouncer_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr BGLib::UnityExtension::Debouncer_1<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* BGLib::UnityExtension::Debouncer_1<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename T> constexpr ::System::Action_1<T>*& BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_get__callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::System::Action_1<T>*> const& BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_get__callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
template <typename T> constexpr void BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_set__callback(::System::Action_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr float_t& BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_get__debounceDelaySeconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debounceDelaySeconds;
}
template <typename T> constexpr float_t const& BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_get__debounceDelaySeconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debounceDelaySeconds;
}
template <typename T> constexpr void BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_set__debounceDelaySeconds(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____debounceDelaySeconds = value;
}
template <typename T> constexpr ::System::Collections::Generic::Queue_1<T>*& BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_get__debounceQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debounceQueue;
}
template <typename T>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<T>*> const& BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_get__debounceQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____debounceQueue;
}
template <typename T> constexpr void BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_set__debounceQueue(::System::Collections::Generic::Queue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debounceQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr float_t& BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_get__nextCallbackTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextCallbackTime;
}
template <typename T> constexpr float_t const& BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_get__nextCallbackTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextCallbackTime;
}
template <typename T> constexpr void BGLib::UnityExtension::Debouncer_1<T>::__cordl_internal_set__nextCallbackTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextCallbackTime = value;
}
template <typename T> inline ::BGLib::UnityExtension::Debouncer_1<T>* BGLib::UnityExtension::Debouncer_1<T>::New_ctor(::System::Action_1<T>* callback, float_t debounceDelaySeconds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::UnityExtension::Debouncer_1<T>*>(callback, debounceDelaySeconds));
}
template <typename T> inline void BGLib::UnityExtension::Debouncer_1<T>::_ctor(::System::Action_1<T>* callback, float_t debounceDelaySeconds) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::Debouncer_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, debounceDelaySeconds);
}
template <typename T> inline void BGLib::UnityExtension::Debouncer_1<T>::Enqueue(T value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::Debouncer_1<T>*>::get(), "Enqueue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline void BGLib::UnityExtension::Debouncer_1<T>::Tick() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::Debouncer_1<T>*>::get(), "Tick",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::UnityExtension::Debouncer_1<T>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::Debouncer_1<T>*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline float_t BGLib::UnityExtension::Debouncer_1<T>::GetCurrentTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::UnityExtension::Debouncer_1<T>*>::get(), "GetCurrentTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::UnityExtension::Debouncer_1<T>::Debouncer_1() {}
