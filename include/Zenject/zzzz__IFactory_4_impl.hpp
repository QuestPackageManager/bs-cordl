#pragma once
// IWYU pragma private; include "Zenject\IFactory_4.hpp"
#include "Zenject/zzzz__IFactory_4_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline TValue Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>::Create(TParam1 param1, TParam2 param2, TParam3 param3) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, param1, param2, param3);
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IFactory* Zenject::IFactory_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
