#pragma once
#include "Zenject/zzzz__IFactory_6_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
constexpr ::Zenject::IFactory* Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
inline TValue Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>::Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param1, param2, param3, param4, param5);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
