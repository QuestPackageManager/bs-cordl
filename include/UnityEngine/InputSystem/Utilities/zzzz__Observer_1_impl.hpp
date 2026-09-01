#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\Utilities\Observer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Observer_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
template <typename TValue> constexpr ::System::Action_1<TValue>*& UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__cordl_internal_get_m_OnNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnNext;
}
template <typename TValue> constexpr ::System::Action_1<TValue>* const& UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__cordl_internal_get_m_OnNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnNext;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__cordl_internal_set_m_OnNext(::System::Action_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnNext = value;
}
template <typename TValue> constexpr ::System::Action*& UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__cordl_internal_get_m_OnCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCompleted;
}
template <typename TValue> constexpr ::System::Action* const& UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__cordl_internal_get_m_OnCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnCompleted;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::__cordl_internal_set_m_OnCompleted(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnCompleted = value;
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::_ctor(::System::Action_1<TValue>* onNext, ::System::Action* onCompleted) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Action_1<TValue>*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onNext, onCompleted);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>(), { "OnCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnError(::System::Exception* error) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>(), { "OnError", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::Observer_1<TValue>::OnNext(TValue evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>(), { "OnNext", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::Observer_1<TValue>* UnityEngine::InputSystem::Utilities::Observer_1<TValue>::New_ctor(::System::Action_1<TValue>* onNext, ::System::Action* onCompleted) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::Observer_1<TValue>*>(onNext, onCompleted));
}
/// @brief Convert operator to "::System::IObserver_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::Observer_1<TValue>::operator ::System::IObserver_1<TValue>*() noexcept {
  return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IObserver_1<TValue>"
template <typename TValue> constexpr ::System::IObserver_1<TValue>* UnityEngine::InputSystem::Utilities::Observer_1<TValue>::i___System__IObserver_1_TValue_() noexcept {
  return static_cast<::System::IObserver_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::Observer_1<TValue>::Observer_1() {}
