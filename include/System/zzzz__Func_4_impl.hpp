#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T1, typename T2, typename T3, typename TResult> inline ::System::Func_4<T1, T2, T3, TResult>* System::Func_4<T1, T2, T3, TResult>::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Func_4<T1, T2, T3, TResult>*>(object, method));
}
template <typename T1, typename T2, typename T3, typename TResult> inline void System::Func_4<T1, T2, T3, TResult>::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Func_4<T1, T2, T3, TResult>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template <typename T1, typename T2, typename T3, typename TResult> inline TResult System::Func_4<T1, T2, T3, TResult>::Invoke(T1 arg1, T2 arg2, T3 arg3) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Func_4<T1, T2, T3, TResult>*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T2>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T3>::get() })));
  return ::cordl_internals::RunMethodRethrow<TResult, false>(this, ___internal_method, arg1, arg2, arg3);
}
// Ctor Parameters []
template <typename T1, typename T2, typename T3, typename TResult> constexpr ::System::Func_4<T1, T2, T3, TResult>::Func_4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
