#pragma once
#include "Zenject/zzzz__IPoolable_2_def.hpp"
template <typename TParam1, typename TParam2> inline void Zenject::IPoolable_2<TParam1, TParam2>::OnDespawned() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IPoolable_2<TParam1, TParam2>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2> inline void Zenject::IPoolable_2<TParam1, TParam2>::OnSpawned(TParam1 p1, TParam2 p2) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IPoolable_2<TParam1, TParam2>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
