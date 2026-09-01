#pragma once
// IWYU pragma private; include "Zenject\IFactory_3.hpp"
#include "Zenject/zzzz__IFactory_3_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
template <typename TParam1, typename TParam2, typename TValue> inline TValue Zenject::IFactory_3<TParam1, TParam2, TValue>::Create(TParam1 param1, TParam2 param2) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IFactory_3<TParam1, TParam2, TValue>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, param1, param2);
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TValue> constexpr Zenject::IFactory_3<TParam1, TParam2, TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TParam1, typename TParam2, typename TValue> constexpr ::Zenject::IFactory* Zenject::IFactory_3<TParam1, TParam2, TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
