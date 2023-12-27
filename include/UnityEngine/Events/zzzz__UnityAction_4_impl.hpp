#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T0, typename T1, typename T2, typename T3>
inline ::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>* UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>*>(object, method));
}
template <typename T0, typename T1, typename T2, typename T3> inline void UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T0, typename T1, typename T2, typename T3> inline void UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>::Invoke(T0 arg0, T1 arg1, T2 arg2, T3 arg3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg0, arg1, arg2, arg3);
}
// Ctor Parameters []
template <typename T0, typename T1, typename T2, typename T3> constexpr ::UnityEngine::Events::UnityAction_4<T0, T1, T2, T3>::UnityAction_4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
