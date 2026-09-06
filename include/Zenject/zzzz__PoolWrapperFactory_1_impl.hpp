#pragma once
// IWYU pragma private; include "Zenject/PoolWrapperFactory_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__PoolWrapperFactory_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IFactory_def.hpp"
#include "Zenject/zzzz__IMemoryPool_1_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename T> constexpr ::Zenject::IMemoryPool_1<T>*& Zenject::PoolWrapperFactory_1<T>::__cordl_internal_get__pool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename T> constexpr ::Zenject::IMemoryPool_1<T>* const& Zenject::PoolWrapperFactory_1<T>::__cordl_internal_get__pool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pool;
}
template <typename T> constexpr void Zenject::PoolWrapperFactory_1<T>::__cordl_internal_set__pool(::Zenject::IMemoryPool_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pool = value;
}
template <typename T> inline void Zenject::PoolWrapperFactory_1<T>::_ctor(::Zenject::IMemoryPool_1<T>* pool) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolWrapperFactory_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<::Zenject::IMemoryPool_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
template <typename T> inline T Zenject::PoolWrapperFactory_1<T>::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolWrapperFactory_1<T>*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Zenject::PoolWrapperFactory_1<T>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolWrapperFactory_1<T>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename T> inline ::Zenject::InjectTypeInfo* Zenject::PoolWrapperFactory_1<T>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolWrapperFactory_1<T>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename T> inline ::Zenject::PoolWrapperFactory_1<T>* Zenject::PoolWrapperFactory_1<T>::New_ctor(::Zenject::IMemoryPool_1<T>* pool) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolWrapperFactory_1<T>*>(pool));
}
/// @brief Convert operator to "::Zenject::IFactory_1<T>"
template <typename T> constexpr Zenject::PoolWrapperFactory_1<T>::operator ::Zenject::IFactory_1<T>*() noexcept {
  return static_cast<::Zenject::IFactory_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory_1<T>"
template <typename T> constexpr ::Zenject::IFactory_1<T>* Zenject::PoolWrapperFactory_1<T>::i___Zenject__IFactory_1_T_() noexcept {
  return static_cast<::Zenject::IFactory_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IFactory"
template <typename T> constexpr Zenject::PoolWrapperFactory_1<T>::operator ::Zenject::IFactory*() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IFactory"
template <typename T> constexpr ::Zenject::IFactory* Zenject::PoolWrapperFactory_1<T>::i___Zenject__IFactory() noexcept {
  return static_cast<::Zenject::IFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::PoolWrapperFactory_1<T>::PoolWrapperFactory_1() {}
