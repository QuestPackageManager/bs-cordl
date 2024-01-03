#pragma once
#include "Zenject/zzzz__IMemoryPool_2_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TValue> constexpr Zenject::IMemoryPool_2<TParam1, TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TParam1, typename TValue> constexpr Zenject::IMemoryPool_2<TParam1, TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template <typename TParam1, typename TValue> inline TValue Zenject::IMemoryPool_2<TParam1, TValue>::Spawn(TParam1 param) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IMemoryPool_2<TParam1, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
