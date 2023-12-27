#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Exception_def.hpp"
/// @brief Convert operator to "::System::IObserver_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::operator ::System::IObserver_1<TValue>*() noexcept {
  return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
template <typename TValue> constexpr ::System::IObserver_1<TValue>*& UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::__get_m_Observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Observer;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<TValue>*> const& UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::__get_m_Observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Observer;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::__set_m_Observer(::System::IObserver_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Observer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::__get_m_Remaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Remaining;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::__get_m_Remaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Remaining;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::__set_m_Remaining(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Remaining = value;
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>*
UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::New_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* observable,
                                                                                 ::System::IObserver_1<TValue>* observer) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>*>(observable, observer));
}
template <typename TValue>
inline void UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* observable,
                                                                                          ::System::IObserver_1<TValue>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, observable, observer);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::OnCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>*>::get(), "OnCompleted",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::OnError(::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>*>::get(), "OnError",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, error);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::OnNext(TValue evt) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>*>::get(), "OnNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::__TakeNObservable_1__Take<TValue>::__TakeNObservable_1__Take() {}
/// @brief Convert operator to "::System::IObservable_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::operator ::System::IObservable_1<TValue>*() noexcept {
  return static_cast<::System::IObservable_1<TValue>*>(static_cast<void*>(this));
}
template <typename TValue> constexpr ::System::IObservable_1<TValue>*& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Source;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::IObservable_1<TValue>*> const& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Source;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__set_m_Source(::System::IObservable_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Source)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__get_m_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Count;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__get_m_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Count;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__set_m_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Count = value;
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::New_ctor(::System::IObservable_1<TValue>* source,
                                                                                                                                                  int32_t count) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>(source, count));
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::_ctor(::System::IObservable_1<TValue>* source, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObservable_1<TValue>*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, source, count);
}
template <typename TValue> inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::Subscribe(::System::IObserver_1<TValue>* observer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>::get(), "Subscribe",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<TValue>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::TakeNObservable_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
