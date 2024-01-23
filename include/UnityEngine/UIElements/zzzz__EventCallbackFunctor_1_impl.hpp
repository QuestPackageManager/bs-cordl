#pragma once
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctorBase_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallbackFunctor_1_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "UnityEngine/UIElements/zzzz__CallbackPhase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventCallback_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__InvokePolicy_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
template <typename TEventType> constexpr ::UnityEngine::UIElements::EventCallback_1<TEventType>*& UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_get_m_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TEventType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallback_1<TEventType>*> const&
UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_get_m_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Callback;
}
template <typename TEventType>
constexpr void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_set_m_Callback(::UnityEngine::UIElements::EventCallback_1<TEventType>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TEventType> constexpr int64_t& UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_get_m_EventTypeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventTypeId;
}
template <typename TEventType> constexpr int64_t const& UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_get_m_EventTypeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventTypeId;
}
template <typename TEventType> constexpr void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::__cordl_internal_set_m_EventTypeId(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventTypeId = value;
}
/// @param invokePolicy: ::UnityEngine::UIElements::InvokePolicy (default: static_cast<int32_t>(0x0))
template <typename TEventType>
inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*
UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::New_ctor(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::CallbackPhase phase,
                                                                      ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>(callback, phase, invokePolicy));
}
/// @param invokePolicy: ::UnityEngine::UIElements::InvokePolicy (default: static_cast<int32_t>(0x0))
template <typename TEventType>
inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::_ctor(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::CallbackPhase phase,
                                                                               ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_1<TEventType>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CallbackPhase>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, phase, invokePolicy);
}
template <typename TEventType>
inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::Invoke(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPhase propagationPhase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, propagationPhase);
}
template <typename TEventType>
inline bool UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback, ::UnityEngine::UIElements::CallbackPhase phase) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventTypeId, callback, phase);
}
// Ctor Parameters []
template <typename TEventType> constexpr ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::EventCallbackFunctor_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
