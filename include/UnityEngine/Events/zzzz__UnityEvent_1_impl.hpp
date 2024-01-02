#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
#include "System/zzzz__Type_def.hpp"
template <typename T0> constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& UnityEngine::Events::UnityEvent_1<T0>::__get_m_InvokeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0> constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& UnityEngine::Events::UnityEvent_1<T0>::__get_m_InvokeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_InvokeArray;
}
template <typename T0> constexpr void UnityEngine::Events::UnityEvent_1<T0>::__set_m_InvokeArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InvokeArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0> inline ::UnityEngine::Events::UnityEvent_1<T0>* UnityEngine::Events::UnityEvent_1<T0>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityEvent_1<T0>*>());
}
template <typename T0> inline void UnityEngine::Events::UnityEvent_1<T0>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_1<T0>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0> inline void UnityEngine::Events::UnityEvent_1<T0>::AddListener(::UnityEngine::Events::UnityAction_1<T0>* call) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_1<T0>*>::get(), "AddListener", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T0>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, call);
}
template <typename T0> inline void UnityEngine::Events::UnityEvent_1<T0>::RemoveListener(::UnityEngine::Events::UnityAction_1<T0>* call) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_1<T0>*>::get(), "RemoveListener", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T0>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, call);
}
template <typename T0> inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_1<T0>::FindMethod_Impl(::StringW name, ::System::Type* targetObjType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_1<T0>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, targetObjType);
}
template <typename T0> inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_1<T0>::GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_1<T0>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(this, ___internal_method, target, theFunction);
}
template <typename T0> inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_1<T0>::GetDelegate(::UnityEngine::Events::UnityAction_1<T0>* action) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_1<T0>*>::get(), "GetDelegate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityAction_1<T0>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(nullptr, ___internal_method, action);
}
template <typename T0> inline void UnityEngine::Events::UnityEvent_1<T0>::Invoke(T0 arg0) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_1<T0>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg0);
}
// Ctor Parameters []
template <typename T0> constexpr ::UnityEngine::Events::UnityEvent_1<T0>::UnityEvent_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
