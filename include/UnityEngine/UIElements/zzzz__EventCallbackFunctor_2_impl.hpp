#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackFunctor_2.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctor_2_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackEventHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__TrickleDown_def.hpp"
template <typename TEventType, typename TCallbackArgs>
constexpr ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*& UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TEventType, typename TCallbackArgs>
constexpr ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* const&
UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TEventType, typename TCallbackArgs>
constexpr void
UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_set_m_Callback(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Callback = value;
}
template <typename TEventType, typename TCallbackArgs>
constexpr TCallbackArgs& UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_get__userArgs_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userArgs_k__BackingField;
}
template <typename TEventType, typename TCallbackArgs>
constexpr TCallbackArgs const& UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_get__userArgs_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userArgs_k__BackingField;
}
template <typename TEventType, typename TCallbackArgs>
constexpr void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_set__userArgs_k__BackingField(TCallbackArgs value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userArgs_k__BackingField = value;
}
template <typename TEventType, typename TCallbackArgs> inline TCallbackArgs UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::get_userArgs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(), { "get_userArgs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TCallbackArgs>(this, ___internal_method);
}
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::set_userArgs(TCallbackArgs value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(), { "set_userArgs", {}, { ::i2c::type_of<TCallbackArgs>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TEventType, typename TCallbackArgs>
inline ::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*
UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::GetPooled(int64_t eventTypeId, ::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback,
                                                                                      TCallbackArgs userArgs, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(),
                                                           { "GetPooled",
                                                             {},
                                                             { ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>(),
                                                               ::i2c::type_of<TCallbackArgs>(), ::i2c::type_of<::UnityEngine::UIElements::InvokePolicy>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(nullptr, ___internal_method, eventTypeId, callback, userArgs, invokePolicy);
}
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::Dispose() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::Invoke(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template <typename TEventType, typename TCallbackArgs>
inline void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::UnregisterCallback(::UnityEngine::UIElements::CallbackEventHandler* target,
                                                                                                           ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, useTrickleDown);
}
template <typename TEventType, typename TCallbackArgs>
inline bool UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventTypeId, callback);
}
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TEventType, typename TCallbackArgs>
inline ::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>* UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>());
}
// Ctor Parameters []
template <typename TEventType, typename TCallbackArgs> constexpr ::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::EventCallbackFunctor_2() {}
