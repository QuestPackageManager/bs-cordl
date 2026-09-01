#pragma once
// IWYU pragma private; include "Zenject\IDespawnableMemoryPool_1.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
template <typename TValue> inline void Zenject::IDespawnableMemoryPool_1<TValue>::Despawn(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::IDespawnableMemoryPool_1<TValue>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TValue> constexpr Zenject::IDespawnableMemoryPool_1<TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TValue> constexpr ::Zenject::IMemoryPool* Zenject::IDespawnableMemoryPool_1<TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
