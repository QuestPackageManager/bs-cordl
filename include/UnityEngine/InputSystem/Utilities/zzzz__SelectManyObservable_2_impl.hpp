#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\SelectManyObservable_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SelectManyObservable_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__SelectManyObservable_2_def.hpp"
template <typename TSource, typename TResult>
constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*&
UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::__cordl_internal_get_m_Observable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observable;
}
template <typename TSource, typename TResult>
constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* const&
UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::__cordl_internal_get_m_Observable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observable;
}
template <typename TSource, typename TResult>
constexpr void UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::__cordl_internal_set_m_Observable(
    ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Observable = value;
}
template <typename TSource, typename TResult>
constexpr ::System::IObserver_1<TResult>*& UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::__cordl_internal_get_m_Observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
template <typename TSource, typename TResult>
constexpr ::System::IObserver_1<TResult>* const& UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::__cordl_internal_get_m_Observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
template <typename TSource, typename TResult>
constexpr void UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::__cordl_internal_set_m_Observer(::System::IObserver_1<TResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Observer = value;
}
template <typename TSource, typename TResult>
inline void UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::_ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable,
                                                                                                        ::System::IObserver_1<TResult>* observer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>*>(),
                          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*>(), ::i2c::type_of<::System::IObserver_1<TResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, observable, observer);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::OnCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>*>(), { "OnCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::OnError(::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>*>(),
                                                                                         { "OnError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template <typename TSource, typename TResult> inline void UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::OnNext(TSource evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>*>(), { "OnNext", {}, { ::i2c::type_of<TSource>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TSource, typename TResult>
inline ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>*
UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::New_ctor(::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>* observable,
                                                                                               ::System::IObserver_1<TResult>* observer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>*>(observable, observer));
}
/// @brief Convert operator to "::System::IObserver_1<TSource>"
template <typename TSource, typename TResult> constexpr UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::operator ::System::IObserver_1<TSource>*() noexcept {
  return static_cast<::System::IObserver_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<TSource>"
template <typename TSource, typename TResult>
constexpr ::System::IObserver_1<TSource>* UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::i___System__IObserver_1_TSource_() noexcept {
  return static_cast<::System::IObserver_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2_Select<TSource, TResult>::SelectManyObservable_2_Select() {}
template <typename TSource, typename TResult>
constexpr ::System::IObservable_1<TSource>*& UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
template <typename TSource, typename TResult>
constexpr ::System::IObservable_1<TSource>* const& UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
template <typename TSource, typename TResult>
constexpr void UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__cordl_internal_set_m_Source(::System::IObservable_1<TSource>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Source = value;
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*&
UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__cordl_internal_get_m_Filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Filter;
}
template <typename TSource, typename TResult>
constexpr ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* const&
UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__cordl_internal_get_m_Filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Filter;
}
template <typename TSource, typename TResult>
constexpr void UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::__cordl_internal_set_m_Filter(
    ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Filter = value;
}
template <typename TSource, typename TResult>
inline void UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::_ctor(::System::IObservable_1<TSource>* source,
                                                                                                 ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::IObservable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, filter);
}
template <typename TSource, typename TResult>
inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::Subscribe(::System::IObserver_1<TResult>* observer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*>(),
                                                                                         { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<TResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
template <typename TSource, typename TResult>
inline ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*
UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::New_ctor(::System::IObservable_1<TSource>* source,
                                                                                        ::System::Func_2<TSource, ::System::Collections::Generic::IEnumerable_1<TResult>*>* filter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>*>(source, filter));
}
/// @brief Convert operator to "::System::IObservable_1<TResult>"
template <typename TSource, typename TResult> constexpr UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::operator ::System::IObservable_1<TResult>*() noexcept {
  return static_cast<::System::IObservable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<TResult>"
template <typename TSource, typename TResult>
constexpr ::System::IObservable_1<TResult>* UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::i___System__IObservable_1_TResult_() noexcept {
  return static_cast<::System::IObservable_1<TResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TSource, typename TResult> constexpr ::UnityEngine::InputSystem::Utilities::SelectManyObservable_2<TSource, TResult>::SelectManyObservable_2() {}
