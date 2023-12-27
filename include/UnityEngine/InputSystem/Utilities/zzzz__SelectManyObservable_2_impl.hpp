#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SelectManyObservable_2_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SelectManyObservable_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
/// @brief Convert operator to "::System::IObserver_1<TSource>"
template <typename TSource, typename TResult> constexpr UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::operator ::System::IObserver_1<TSource>*() noexcept {
  return static_cast<::System::IObserver_1<TSource>*>(static_cast<void*>(this));
}
template <typename TSource, typename TResult>
constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*&
UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::__get_m_Observable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Observable;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*> const&
UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::__get_m_Observable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Observable;
}
template <typename TSource, typename TResult>
constexpr void
UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::__set_m_Observable(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Observable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult> constexpr ::System::IObserver_1<TResult>*& UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::__get_m_Observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Observer;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TResult>*> const&
UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::__get_m_Observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Observer;
}
template <typename TSource, typename TResult>
constexpr void UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::__set_m_Observer(::System::IObserver_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Observer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
inline ::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>*
UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::New_ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable,
                                                                                                  ::System::IObserver_1<TResult>* observer) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>*>(observable, observer));
}
template <typename TSource, typename TResult>
inline void UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::_ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable,
                                                                                                           ::System::IObserver_1<TResult>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, observable, observer);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::OnCompleted() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>*>::get(),
                                  "OnCompleted", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::OnError(::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>*>::get(), "OnError",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::OnNext(TSource evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>*>::get(), "OnNext",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::UnityEngine::InputSystem::Utilities::__SelectManyObservable_2__Select<TSource, TResult>::__SelectManyObservable_2__Select() {}
/// @brief Convert operator to "::System::IObservable_1<TResult>"
template <typename TSource, typename TResult> constexpr UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::operator ::System::IObservable_1<TResult>*() noexcept {
  return static_cast<::System::IObservable_1<TResult>*>(static_cast<void*>(this));
}
template <typename TSource, typename TResult> constexpr ::System::IObservable_1<TSource>*& UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Source;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<TSource>*> const& UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Source;
}
template <typename TSource, typename TResult> constexpr void UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__set_m_Source(::System::IObservable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*& UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__get_m_Filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Filter;
}
template <typename TSource, typename TResult>
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*> const&
UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__get_m_Filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Filter;
}
template <typename TSource, typename TResult>
constexpr void
UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__set_m_Filter(::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Filter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TSource, typename TResult>
inline ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*
UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::New_ctor(::System::IObservable_1<TSource>* source,
                                                                                        ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*>(source, filter));
}
template <typename TSource, typename TResult>
inline void UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::_ctor(::System::IObservable_1<TSource>* source,
                                                                                                 ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TSource>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, filter);
}
template <typename TSource, typename TResult>
inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::Subscribe(::System::IObserver_1<TResult>* observer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*>::get(), "Subscribe",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::SelectManyObservable_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
