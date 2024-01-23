#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_3_def.hpp"
template <typename T0, typename T1, typename T2>
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& UnityEngine::Events::UnityEvent_3<T0, T1, T2>::__cordl_internal_get_m_InvokeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1, typename T2>
constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& UnityEngine::Events::UnityEvent_3<T0, T1, T2>::__cordl_internal_get_m_InvokeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1, typename T2>
constexpr void UnityEngine::Events::UnityEvent_3<T0, T1, T2>::__cordl_internal_set_m_InvokeArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InvokeArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1, typename T2> inline ::UnityEngine::Events::UnityEvent_3<T0, T1, T2>* UnityEngine::Events::UnityEvent_3<T0, T1, T2>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>());
}
template <typename T0, typename T1, typename T2> inline void UnityEngine::Events::UnityEvent_3<T0, T1, T2>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1, typename T2> inline void UnityEngine::Events::UnityEvent_3<T0, T1, T2>::AddListener(::UnityEngine::Events::UnityAction_3<T0, T1, T2>* call) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>::get(), "AddListener", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0, T1, T2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, call);
}
template <typename T0, typename T1, typename T2> inline void UnityEngine::Events::UnityEvent_3<T0, T1, T2>::RemoveListener(::UnityEngine::Events::UnityAction_3<T0, T1, T2>* call) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>::get(), "RemoveListener", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0, T1, T2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, call);
}
template <typename T0, typename T1, typename T2>
inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_3<T0, T1, T2>::FindMethod_Impl(::StringW name, ::System::Type* targetObjType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, targetObjType);
}
template <typename T0, typename T1, typename T2>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0, T1, T2>::GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(this, ___internal_method, target, theFunction);
}
template <typename T0, typename T1, typename T2>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_3<T0, T1, T2>::GetDelegate(::UnityEngine::Events::UnityAction_3<T0, T1, T2>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>::get(), "GetDelegate", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_3<T0, T1, T2>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(nullptr, ___internal_method, action);
}
template <typename T0, typename T1, typename T2> inline void UnityEngine::Events::UnityEvent_3<T0, T1, T2>::Invoke(T0 arg0, T1 arg1, T2 arg2) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_3<T0, T1, T2>*>::get(), "Invoke", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg0, arg1, arg2);
}
// Ctor Parameters []
template <typename T0, typename T1, typename T2> constexpr ::UnityEngine::Events::UnityEvent_3<T0, T1, T2>::UnityEvent_3() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
