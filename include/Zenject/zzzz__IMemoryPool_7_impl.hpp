#pragma once
#include "Zenject/zzzz__IMemoryPool_7_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
constexpr ::Zenject::IMemoryPool* Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TValue>
inline TValue Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>::Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5,
                                                                                                          TParam6 param6) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IMemoryPool_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param1, param2, param3, param4, param5, param6);
}
