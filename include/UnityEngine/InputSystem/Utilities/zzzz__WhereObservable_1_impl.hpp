#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/WhereObservable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__WhereObservable_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__WhereObservable_1_def.hpp"
template <typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*& UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::__cordl_internal_get_m_Observable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observable;
}
template <typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* const& UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::__cordl_internal_get_m_Observable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observable;
}
template <typename TValue>
constexpr void UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::__cordl_internal_set_m_Observable(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Observable = value;
}
template <typename TValue> constexpr ::System::IObserver_1<TValue>*& UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::__cordl_internal_get_m_Observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
template <typename TValue> constexpr ::System::IObserver_1<TValue>* const& UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::__cordl_internal_get_m_Observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::__cordl_internal_set_m_Observer(::System::IObserver_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Observer = value;
}
template <typename TValue>
inline void UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::_ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* observable,
                                                                                        ::System::IObserver_1<TValue>* observer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>(), ::i2c::type_of<::System::IObserver_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, observable, observer);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::OnCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>*>(), { "OnCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::OnError(::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>*>(), { "OnError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::OnNext(TValue evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>*>(), { "OnNext", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>*
UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::New_ctor(::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* observable, ::System::IObserver_1<TValue>* observer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>*>(observable, observer));
}
/// @brief Convert operator to "::System::IObserver_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::operator ::System::IObserver_1<TValue>*() noexcept {
  return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<TValue>"
template <typename TValue> constexpr ::System::IObserver_1<TValue>* UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::i___System__IObserver_1_TValue_() noexcept {
  return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1_Where<TValue>::WhereObservable_1_Where() {}
template <typename TValue> constexpr ::System::IObservable_1<TValue>*& UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
template <typename TValue> constexpr ::System::IObservable_1<TValue>* const& UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__cordl_internal_set_m_Source(::System::IObservable_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Source = value;
}
template <typename TValue> constexpr ::System::Func_2<TValue, bool>*& UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__cordl_internal_get_m_Predicate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Predicate;
}
template <typename TValue> constexpr ::System::Func_2<TValue, bool>* const& UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__cordl_internal_get_m_Predicate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Predicate;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::__cordl_internal_set_m_Predicate(::System::Func_2<TValue, bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Predicate = value;
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::_ctor(::System::IObservable_1<TValue>* source, ::System::Func_2<TValue, bool>* predicate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IObservable_1<TValue>*>(), ::i2c::type_of<::System::Func_2<TValue, bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, predicate);
}
template <typename TValue> inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::Subscribe(::System::IObserver_1<TValue>* observer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>(),
                                                                                         { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>* UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::New_ctor(::System::IObservable_1<TValue>* source,
                                                                                                                                                  ::System::Func_2<TValue, bool>* predicate) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>*>(source, predicate));
}
/// @brief Convert operator to "::System::IObservable_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::operator ::System::IObservable_1<TValue>*() noexcept {
  return static_cast<::System::IObservable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<TValue>"
template <typename TValue> constexpr ::System::IObservable_1<TValue>* UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::i___System__IObservable_1_TValue_() noexcept {
  return static_cast<::System::IObservable_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::WhereObservable_1<TValue>::WhereObservable_1() {}
