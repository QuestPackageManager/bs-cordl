#pragma once
// IWYU pragma private; include "Zenject/IFactory_8.hpp"
#include "Zenject/zzzz__IFactory_impl.hpp"
#include "Zenject/zzzz__IFactory_8_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
inline TValue Zenject::IFactory_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>::Create(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5,
                                                                                                                 TParam6 param6, TParam7 param7) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, param1, param2, param3, param4, param5, param6, param7);
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
constexpr Zenject::IFactory_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
constexpr ::Zenject::IFactory* Zenject::IFactory_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
