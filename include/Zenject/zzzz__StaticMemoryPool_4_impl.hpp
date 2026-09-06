#pragma once
// IWYU pragma private; include "Zenject/StaticMemoryPool_4.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPool_4_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_4_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_4_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Action_4<TParam1, TParam2, TParam3, TValue>*& Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::__cordl_internal_get__onSpawnMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpawnMethod;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::System::Action_4<TParam1, TParam2, TParam3, TValue>* const& Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::__cordl_internal_get__onSpawnMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpawnMethod;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr void Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::__cordl_internal_set__onSpawnMethod(::System::Action_4<TParam1, TParam2, TParam3, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onSpawnMethod = value;
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::_ctor(::System::Action_4<TParam1, TParam2, TParam3, TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Action_4<TParam1, TParam2, TParam3, TValue>*>(), ::i2c::type_of<::System::Action_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onSpawnMethod, onDespawnedMethod);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline void Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::set_OnSpawnMethod(::System::Action_4<TParam1, TParam2, TParam3, TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(),
                                                                                         { "set_OnSpawnMethod", {}, { ::i2c::type_of<::System::Action_4<TParam1, TParam2, TParam3, TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline TValue Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::Spawn(TParam1 p1, TParam2 p2, TParam3 p3) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(),
                                                                                         { "Spawn", {}, { ::i2c::type_of<TParam1>(), ::i2c::type_of<TParam2>(), ::i2c::type_of<TParam3>() } })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, p1, p2, p3);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
inline ::Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*
Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::New_ctor(::System::Action_4<TParam1, TParam2, TParam3, TValue>* onSpawnMethod, ::System::Action_1<TValue>* onDespawnedMethod) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(onSpawnMethod, onDespawnedMethod));
}
/// @brief Convert operator to "::Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool_4<TParam1,TParam2,TParam3,TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>*
Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IMemoryPool_4_TParam1_TParam2_TParam3_TValue_() noexcept {
  return static_cast<::Zenject::IMemoryPool_4<TParam1, TParam2, TParam3, TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
constexpr ::Zenject::IMemoryPool* Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> constexpr ::Zenject::StaticMemoryPool_4<TParam1, TParam2, TParam3, TValue>::StaticMemoryPool_4() {}
