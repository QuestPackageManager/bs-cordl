#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventCallbackFunctor_2.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctor_2_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackPhase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
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
  ::cordl_internals::setInstanceField(this, &this->___m_Callback, value);
}
template <typename TEventType, typename TCallbackArgs> constexpr int64_t& UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_get_m_EventTypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventTypeId;
}
template <typename TEventType, typename TCallbackArgs> constexpr int64_t const& UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_get_m_EventTypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventTypeId;
}
template <typename TEventType, typename TCallbackArgs> constexpr void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::__cordl_internal_set_m_EventTypeId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventTypeId = value;
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
  ::cordl_internals::setInstanceField(this, &this->____userArgs_k__BackingField, value);
}
template <typename TEventType, typename TCallbackArgs> inline TCallbackArgs UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::get_userArgs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>::get(),
                                               "get_userArgs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TCallbackArgs, false>(this, ___internal_method);
}
template <typename TEventType, typename TCallbackArgs> inline void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::set_userArgs(TCallbackArgs value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>::get(), "set_userArgs",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCallbackArgs>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TEventType, typename TCallbackArgs>
inline void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::_ctor(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback, TCallbackArgs userArgs,
                                                                                              ::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TCallbackArgs>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CallbackPhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, userArgs, phase, invokePolicy);
}
template <typename TEventType, typename TCallbackArgs>
inline void UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::Invoke(::UnityEngine::UIElements::EventBase* evt,
                                                                                               ::UnityEngine::UIElements::PropagationPhase propagationPhase) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, propagationPhase);
}
template <typename TEventType, typename TCallbackArgs>
inline bool UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback,
                                                                                                       ::UnityEngine::UIElements::CallbackPhase phase) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventTypeId, callback, phase);
}
template <typename TEventType, typename TCallbackArgs>
inline ::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*
UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::New_ctor(::UnityEngine::UIElements::EventCallback_2<TEventType, TCallbackArgs>* callback, TCallbackArgs userArgs,
                                                                                     ::UnityEngine::UIElements::CallbackPhase phase, ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>*>(callback, userArgs, phase, invokePolicy));
}
// Ctor Parameters []
template <typename TEventType, typename TCallbackArgs> constexpr ::UnityEngine::UIElements::EventCallbackFunctor_2<TEventType, TCallbackArgs>::EventCallbackFunctor_2() {}
