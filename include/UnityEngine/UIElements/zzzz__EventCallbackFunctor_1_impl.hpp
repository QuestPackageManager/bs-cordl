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
  ::cordl_internals::setInstanceField(this, &this->___m_Callback, value);
}
template <typename TEventType>
inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*
UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::GetPooled(int64_t eventTypeId, ::UnityEngine::UIElements::EventCallback_1<TEventType>* callback,
                                                                       ::UnityEngine::UIElements::InvokePolicy invokePolicy) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventCallback_1<TEventType>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::InvokePolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*, false>(nullptr, ___internal_method, eventTypeId, callback, invokePolicy);
}
template <typename TEventType> inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TEventType> inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::Invoke(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
template <typename TEventType>
inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::UnregisterCallback(::UnityEngine::UIElements::CallbackEventHandler* target,
                                                                                            ::UnityEngine::UIElements::TrickleDown useTrickleDown) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target, useTrickleDown);
}
template <typename TEventType> inline bool UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::IsEquivalentTo(int64_t eventTypeId, ::System::Delegate* callback) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, eventTypeId, callback);
}
template <typename TEventType> inline void UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TEventType> inline ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>* UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>*>());
}
// Ctor Parameters []
template <typename TEventType> constexpr ::UnityEngine::UIElements::EventCallbackFunctor_1<TEventType>::EventCallbackFunctor_1() {}
