#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackFunctor_1.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctor_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
template <typename TEventType> constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType>*& UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TEventType>
constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType>* const& UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TEventType>
constexpr void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_set_m_Callback(::UnityEngine::UIElements::EventCallback_1<TEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Callback = value;
}
template <typename TEventType>
inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*
UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::GetPooled(int64_t eventTypeId, ::UnityEngine::UIElements::EventCallback_1<TEventType>* callback,
                                                                       ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>(),
          { "GetPooled", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::UIElements::EventCallback_1<TEventType>*>(), ::i2c::type_of<::UnityEngine::UIElements::InvokePolicy>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>(nullptr, ___internal_method, eventTypeId, callback, invokePolicy);
}
template <typename TEventType> inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TEventType> inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::Invoke(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TEventType>
inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::UnregisterCallback(::UnityEngine::UIElements::CallbackEventHandler* target,
                                                                                            ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, useTrickleDown);
}
template <typename TEventType> inline bool UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventTypeId, callback);
}
template <typename TEventType> inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TEventType> inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>* UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>());
}
// Ctor Parameters []
template <typename TEventType> constexpr ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::EventCallbackFunctor_1() {}
