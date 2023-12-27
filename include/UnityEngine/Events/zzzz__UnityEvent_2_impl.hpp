#pragma once
#include "UnityEngine/Events/zzzz__UnityEventBase_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__BaseInvokableCall_def.hpp"
template <typename T0, typename T1> constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& UnityEngine::Events::UnityEvent_2<T0, T1>::__get_m_InvokeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1> constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& UnityEngine::Events::UnityEvent_2<T0, T1>::__get_m_InvokeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_InvokeArray;
}
template <typename T0, typename T1> constexpr void UnityEngine::Events::UnityEvent_2<T0, T1>::__set_m_InvokeArray(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InvokeArray)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T0, typename T1> inline ::UnityEngine::Events::UnityEvent_2<T0, T1>* UnityEngine::Events::UnityEvent_2<T0, T1>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityEvent_2<T0, T1>*>());
}
template <typename T0, typename T1> inline void UnityEngine::Events::UnityEvent_2<T0, T1>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_2<T0, T1>*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T0, typename T1> inline ::System::Reflection::MethodInfo* UnityEngine::Events::UnityEvent_2<T0, T1>::FindMethod_Impl(::StringW name, ::System::Type* targetObjType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_2<T0, T1>*>::get(), "FindMethod_Impl", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*, false>(this, ___internal_method, name, targetObjType);
}
template <typename T0, typename T1>
inline ::UnityEngine::Events::BaseInvokableCall* UnityEngine::Events::UnityEvent_2<T0, T1>::GetDelegate(::System::Object* target, ::System::Reflection::MethodInfo* theFunction) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityEvent_2<T0, T1>*>::get(), "GetDelegate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::BaseInvokableCall*, false>(this, ___internal_method, target, theFunction);
}
// Ctor Parameters []
template <typename T0, typename T1> constexpr ::UnityEngine::Events::UnityEvent_2<T0, T1>::UnityEvent_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
