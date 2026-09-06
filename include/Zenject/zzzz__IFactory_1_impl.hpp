#pragma once
// IWYU pragma private; include "Zenject/IFactory_1.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
template <typename TValue> inline TValue Zenject::IFactory_1<TValue>::Create() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IFactory_1<TValue>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TValue> constexpr Zenject::IFactory_1<TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TValue> constexpr ::Zenject::IFactory* Zenject::IFactory_1<TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
