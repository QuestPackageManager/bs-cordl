#pragma once
#include "Newtonsoft/Json/zzzz__IArrayPool_1_def.hpp"
template <typename T> inline ::ArrayW<T, ::Array<T>*> Newtonsoft::Json::IArrayPool_1<T>::Rent(int32_t minimumLength) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::IArrayPool_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T, ::Array<T>*>, false>(this, ___internal_method, minimumLength);
}
template <typename T> inline void Newtonsoft::Json::IArrayPool_1<T>::Return(::ArrayW<T, ::Array<T>*> array) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::IArrayPool_1<T>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
