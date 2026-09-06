#pragma once
// IWYU pragma private; include "Zenject/PoolableMemoryPool_3.hpp"
#include "Zenject/zzzz__MemoryPool_3_impl.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TParam2, typename TValue> inline void Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::OnDespawned(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TParam1, typename TParam2, typename TValue> inline void Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::Reinitialize(TParam1 p1, TParam2 p2, TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p1, p2, item);
}
template <typename TParam1, typename TParam2, typename TValue> inline void Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TValue> inline ::System::Object* Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TParam2, typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TValue> inline ::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>* Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TValue> constexpr ::Zenject::PoolableMemoryPool_3<TParam1, TParam2, TValue>::PoolableMemoryPool_3() {}
