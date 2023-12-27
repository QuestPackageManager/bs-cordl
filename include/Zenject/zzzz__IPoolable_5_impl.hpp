#pragma once
#include "Zenject/zzzz__IPoolable_5_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5> inline void Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, TParam5>::OnDespawned() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, TParam5>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
inline void Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, TParam5>::OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, TParam5>*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, p1, p2, p3, p4, p5);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
