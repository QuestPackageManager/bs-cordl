#pragma once
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TValue> constexpr Zenject::IFactory_1<TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TValue> constexpr ::Zenject::IFactory* Zenject::IFactory_1<TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
template <typename TValue> inline TValue Zenject::IFactory_1<TValue>::Create() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::IFactory_1<TValue>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
