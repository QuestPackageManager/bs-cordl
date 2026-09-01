#pragma once
// IWYU pragma private; include "Zenject\StaticMemoryPool_1.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
template <typename TValue> constexpr ::System::Action_1<TValue>*& Zenject::StaticMemoryPool_1<TValue>::__cordl_internal_get__onSpawnMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpawnMethod;
}
template <typename TValue> constexpr ::System::Action_1<TValue>* const& Zenject::StaticMemoryPool_1<TValue>::__cordl_internal_get__onSpawnMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpawnMethod;
}
template <typename TValue> constexpr void Zenject::StaticMemoryPool_1<TValue>::__cordl_internal_set__onSpawnMethod(::System::Action_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onSpawnMethod = value;
}
template <typename TValue> inline void Zenject::StaticMemoryPool_1<TValue>::_ctor(::System::Action_1<TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod, int32_t initialSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPool_1<TValue>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Action_1<TValue>*>(), ::i2c::type_of<::System::Action_1<TValue>*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onSpawnMethod, onDespawnedMethod, initialSize);
}
template <typename TValue> inline void Zenject::StaticMemoryPool_1<TValue>::set_OnSpawnMethod(::System::Action_1<TValue>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPool_1<TValue>*>(), { "set_OnSpawnMethod", {}, { ::i2c::type_of<::System::Action_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValue> inline TValue Zenject::StaticMemoryPool_1<TValue>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPool_1<TValue>*>(), { "Spawn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue>
inline ::Zenject::StaticMemoryPool_1<TValue>* Zenject::StaticMemoryPool_1<TValue>::New_ctor(::System::Action_1<TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod,
                                                                                            int32_t initialSize) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::StaticMemoryPool_1<TValue>*>(onSpawnMethod, onDespawnedMethod, initialSize));
}
/// @brief Convert operator to "::Zenject::IMemoryPool_1<TValue>"
template <typename TValue> constexpr Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool_1<TValue>"
template <typename TValue> constexpr ::Zenject::IMemoryPool_1<TValue>* Zenject::StaticMemoryPool_1<TValue>::i___Zenject__IMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::StaticMemoryPool_1<TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TValue> constexpr Zenject::StaticMemoryPool_1<TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TValue> constexpr ::Zenject::IMemoryPool* Zenject::StaticMemoryPool_1<TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::StaticMemoryPool_1<TValue>::StaticMemoryPool_1() {}
