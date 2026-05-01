#pragma once
// IWYU pragma private; include "UnityEngine/Pool/IObjectPool_1.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
template <typename T> inline void UnityEngine::Pool::IObjectPool_1<T>::Release(T element) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Pool::IObjectPool_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, element);
}
