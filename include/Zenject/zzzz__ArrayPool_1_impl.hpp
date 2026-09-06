#pragma once
// IWYU pragma private; include "Zenject/ArrayPool_1.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_impl.hpp"
#include "Zenject/zzzz__ArrayPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
template <typename T> constexpr int32_t& Zenject::ArrayPool_1<T>::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
template <typename T> constexpr int32_t const& Zenject::ArrayPool_1<T>::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
template <typename T> constexpr void Zenject::ArrayPool_1<T>::__cordl_internal_set__length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
template <typename T> inline void Zenject::ArrayPool_1<T>::setStaticF__pools(::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>*, "_pools", ::Zenject::ArrayPool_1<T>*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>*>(value));
}
template <typename T> inline ::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>* Zenject::ArrayPool_1<T>::getStaticF__pools() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::Zenject::ArrayPool_1<T>*>*, "_pools", ::Zenject::ArrayPool_1<T>*>();
}
template <typename T> inline void Zenject::ArrayPool_1<T>::_ctor(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArrayPool_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
template <typename T> inline void Zenject::ArrayPool_1<T>::OnDespawned(::ArrayW<T> arr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArrayPool_1<T>*>(), { "OnDespawned", {}, { ::i2c::type_of<::ArrayW<T>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, arr);
}
template <typename T> inline ::ArrayW<T> Zenject::ArrayPool_1<T>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArrayPool_1<T>*>(), { "Spawn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline ::ArrayW<T> Zenject::ArrayPool_1<T>::Alloc() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::ArrayPool_1<T>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template <typename T> inline ::Zenject::ArrayPool_1<T>* Zenject::ArrayPool_1<T>::GetPool(int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::ArrayPool_1<T>*>(), { "GetPool", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ArrayPool_1<T>*>(nullptr, ___internal_method, length);
}
template <typename T> inline ::Zenject::ArrayPool_1<T>* Zenject::ArrayPool_1<T>::New_ctor(int32_t length) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::ArrayPool_1<T>*>(length));
}
// Ctor Parameters []
template <typename T> constexpr ::Zenject::ArrayPool_1<T>::ArrayPool_1() {}
