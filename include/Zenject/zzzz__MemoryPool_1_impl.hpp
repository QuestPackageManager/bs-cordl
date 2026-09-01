#pragma once
// IWYU pragma private; include "Zenject\MemoryPool_1.hpp"
#include "Zenject/zzzz__MemoryPoolBase_1_impl.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TValue> inline TValue Zenject::MemoryPool_1<TValue>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_1<TValue>*>(), { "Spawn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::MemoryPool_1<TValue>::Reinitialize(TValue item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MemoryPool_1<TValue>*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TValue> inline TValue Zenject::MemoryPool_1<TValue>::Zenject_IFactory_TValue__Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_1<TValue>*>(), { "Zenject.IFactory<TValue>.Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::MemoryPool_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_1<TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline ::System::Object* Zenject::MemoryPool_1<TValue>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_1<TValue>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::MemoryPool_1<TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPool_1<TValue>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TValue> inline ::Zenject::MemoryPool_1<TValue>* Zenject::MemoryPool_1<TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPool_1<TValue>*>());
}
/// @brief Convert operator to "::Zenject::IMemoryPool_1<TValue>"
template <typename TValue> constexpr Zenject::MemoryPool_1<TValue>::operator ::Zenject::IMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool_1<TValue>"
template <typename TValue> constexpr ::Zenject::IMemoryPool_1<TValue>* Zenject::MemoryPool_1<TValue>::i___Zenject__IMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr Zenject::MemoryPool_1<TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::MemoryPool_1<TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TValue> constexpr Zenject::MemoryPool_1<TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TValue> constexpr ::Zenject::IMemoryPool* Zenject::MemoryPool_1<TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory_1<TValue>"
template <typename TValue> constexpr Zenject::MemoryPool_1<TValue>::operator ::Zenject::IFactory_1<TValue>*() noexcept {
  return static_cast<::Zenject::IFactory_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_1<TValue>"
template <typename TValue> constexpr ::Zenject::IFactory_1<TValue>* Zenject::MemoryPool_1<TValue>::i___Zenject__IFactory_1_TValue_() noexcept {
  return static_cast<::Zenject::IFactory_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename TValue> constexpr Zenject::MemoryPool_1<TValue>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename TValue> constexpr ::Zenject::IFactory* Zenject::MemoryPool_1<TValue>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::MemoryPool_1<TValue>::MemoryPool_1() {}
