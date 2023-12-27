#pragma once
#include "Zenject/zzzz__StaticMemoryPool_2_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_2_def.hpp"
template <typename TParam1, typename TValue> inline ::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>* Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>*>());
}
template <typename TParam1, typename TValue> inline void Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TValue> inline void Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::OnSpawned(TParam1 p1, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>*>::get(), "OnSpawned", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p1, value);
}
template <typename TParam1, typename TValue> inline void Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::OnDespawned(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>*>::get(), "OnDespawned",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
template <typename TParam1, typename TValue> constexpr ::Zenject::PoolableStaticMemoryPool_2<TParam1, TValue>::PoolableStaticMemoryPool_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
