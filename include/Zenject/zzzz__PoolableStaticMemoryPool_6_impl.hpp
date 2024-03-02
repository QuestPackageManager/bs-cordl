#pragma once
#include "Zenject/zzzz__StaticMemoryPool_6_impl.hpp"
#include "Zenject/zzzz__PoolableStaticMemoryPool_6_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline ::Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*
Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>());
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline void Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline void Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::OnSpawned(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(), "OnSpawned",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, p1, p2, p3, p4, p5, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline void Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::OnDespawned(TValue value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(),
                                 "OnDespawned", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr ::Zenject::PoolableStaticMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::PoolableStaticMemoryPool_6() {}
