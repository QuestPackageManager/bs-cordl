#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/SelectObservable_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__SelectObservable_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__SelectObservable_2_def.hpp"
template <typename TSource, typename TResult>
constexpr ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>*&
UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::__cordl_internal_get_m_Observable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observable;
}
template <typename TSource, typename TResult>
constexpr ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>* const&
UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::__cordl_internal_get_m_Observable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observable;
}
template <typename TSource, typename TResult>
constexpr void
UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::__cordl_internal_set_m_Observable(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Observable, value);
}
template <typename TSource, typename TResult>
constexpr ::System::IObserver_1<TResult>*& UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::__cordl_internal_get_m_Observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
template <typename TSource, typename TResult>
constexpr ::System::IObserver_1<TResult>* const& UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::__cordl_internal_get_m_Observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
template <typename TSource, typename TResult>
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::__cordl_internal_set_m_Observer(::System::IObserver_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Observer, value);
}
template <typename TSource, typename TResult>
inline void UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::_ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>* observable,
                                                                                                   ::System::IObserver_1<TResult>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, observable, observer);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::OnCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>*>::get(),
                                               "OnCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::OnError(::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>*>::get(), "OnError",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::OnNext(TSource evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>*>::get(), "OnNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TSource, typename TResult>
inline ::UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>*
UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::New_ctor(::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>* observable,
                                                                                          ::System::IObserver_1<TResult>* observer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>*>(observable, observer));
}
/// @brief Convert operator to "::System::IObserver_1<TSource>"
template <typename TSource, typename TResult> constexpr UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::operator ::System::IObserver_1<TSource>*() noexcept {
  return static_cast<::System::IObserver_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<TSource>"
template <typename TSource, typename TResult>
constexpr ::System::IObserver_1<TSource>* UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::i___System__IObserver_1_TSource_() noexcept {
  return static_cast<::System::IObserver_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::UnityEngine::InputSystem::LowLevel::SelectObservable_2_Select<TSource, TResult>::SelectObservable_2_Select() {}
template <typename TSource, typename TResult> constexpr ::System::IObservable_1<TSource>*& UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
template <typename TSource, typename TResult>
constexpr ::System::IObservable_1<TSource>* const& UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
template <typename TSource, typename TResult>
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::__cordl_internal_set_m_Source(::System::IObservable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Source, value);
}
template <typename TSource, typename TResult> constexpr ::System::Func_2<TSource, TResult>*& UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::__cordl_internal_get_m_Filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Filter;
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, TResult>* const& UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::__cordl_internal_get_m_Filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Filter;
}
template <typename TSource, typename TResult>
constexpr void UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::__cordl_internal_set_m_Filter(::System::Func_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_Filter, value);
}
template <typename TSource, typename TResult>
inline void UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::_ctor(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, TResult>* filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TSource>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, filter);
}
template <typename TSource, typename TResult>
inline ::System::IDisposable* UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::Subscribe(::System::IObserver_1<TResult>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>*>::get(), "Subscribe", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
template <typename TSource, typename TResult>
inline ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>*
UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::New_ctor(::System::IObservable_1<TSource>* source, ::System::Func_2<TSource, TResult>* filter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>*>(source, filter));
}
/// @brief Convert operator to "::System::IObservable_1<TResult>"
template <typename TSource, typename TResult> constexpr UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::operator ::System::IObservable_1<TResult>*() noexcept {
  return static_cast<::System::IObservable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<TResult>"
template <typename TSource, typename TResult>
constexpr ::System::IObservable_1<TResult>* UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::i___System__IObservable_1_TResult_() noexcept {
  return static_cast<::System::IObservable_1<TResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::UnityEngine::InputSystem::LowLevel::SelectObservable_2<TSource, TResult>::SelectObservable_2() {}
