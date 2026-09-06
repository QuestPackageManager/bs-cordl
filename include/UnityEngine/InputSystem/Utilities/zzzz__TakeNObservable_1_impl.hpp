#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/TakeNObservable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__TakeNObservable_1_def.hpp"
template <typename TValue> constexpr ::System::IObserver_1<TValue>*& UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_get_m_Observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
template <typename TValue> constexpr ::System::IObserver_1<TValue>* const& UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_get_m_Observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Observer;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_set_m_Observer(::System::IObserver_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Observer = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_get_m_Remaining() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Remaining;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_get_m_Remaining() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Remaining;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::__cordl_internal_set_m_Remaining(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Remaining = value;
}
template <typename TValue>
inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* observable,
                                                                                       ::System::IObserver_1<TValue>* observer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>(), ::i2c::type_of<::System::IObserver_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, observable, observer);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::OnCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>(), { "OnCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::OnError(::System::Exception* error) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>(), { "OnError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::OnNext(TValue evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>(), { "OnNext", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*
UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::New_ctor(::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* observable, ::System::IObserver_1<TValue>* observer) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>*>(observable, observer));
}
/// @brief Convert operator to "::System::IObserver_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::operator ::System::IObserver_1<TValue>*() noexcept {
  return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<TValue>"
template <typename TValue> constexpr ::System::IObserver_1<TValue>* UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::i___System__IObserver_1_TValue_() noexcept {
  return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::TakeNObservable_1_Take<TValue>::TakeNObservable_1_Take() {}
template <typename TValue> constexpr ::System::IObservable_1<TValue>*& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_get_m_Source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
template <typename TValue> constexpr ::System::IObservable_1<TValue>* const& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_get_m_Source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Source;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_set_m_Source(::System::IObservable_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Source = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_get_m_Count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_get_m_Count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Count;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::__cordl_internal_set_m_Count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Count = value;
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::_ctor(::System::IObservable_1<TValue>* source, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::IObservable_1<TValue>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, count);
}
template <typename TValue> inline ::System::IDisposable* UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::Subscribe(::System::IObserver_1<TValue>* observer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>(),
                                                                                         { "Subscribe", {}, { ::i2c::type_of<::System::IObserver_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method, observer);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>* UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::New_ctor(::System::IObservable_1<TValue>* source,
                                                                                                                                                  int32_t count) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>*>(source, count));
}
/// @brief Convert operator to "::System::IObservable_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::operator ::System::IObservable_1<TValue>*() noexcept {
  return static_cast<::System::IObservable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObservable_1<TValue>"
template <typename TValue> constexpr ::System::IObservable_1<TValue>* UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::i___System__IObservable_1_TValue_() noexcept {
  return static_cast<::System::IObservable_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::TakeNObservable_1<TValue>::TakeNObservable_1() {}
