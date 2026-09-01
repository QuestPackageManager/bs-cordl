#pragma once
// IWYU pragma private; include "Zenject\MonoMemoryPool_2.hpp"
#include "Zenject/zzzz__MemoryPool_2_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
template <typename TParam1, typename TValue> constexpr ::UnityW<::UnityEngine::Transform>& Zenject::MonoMemoryPool_2<TParam1, TValue>::__cordl_internal_get__originalParent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalParent;
}
template <typename TParam1, typename TValue> constexpr ::UnityW<::UnityEngine::Transform> const& Zenject::MonoMemoryPool_2<TParam1, TValue>::__cordl_internal_get__originalParent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalParent;
}
template <typename TParam1, typename TValue> constexpr void Zenject::MonoMemoryPool_2<TParam1, TValue>::__cordl_internal_set__originalParent(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalParent = value;
}
template <typename TParam1, typename TValue> inline void Zenject::MonoMemoryPool_2<TParam1, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoMemoryPool_2<TParam1, TValue>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoMemoryPool_2<TParam1, TValue>::OnCreated(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MonoMemoryPool_2<TParam1, TValue>*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoMemoryPool_2<TParam1, TValue>::OnDestroyed(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MonoMemoryPool_2<TParam1, TValue>*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoMemoryPool_2<TParam1, TValue>::OnSpawned(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MonoMemoryPool_2<TParam1, TValue>*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TParam1, typename TValue> inline void Zenject::MonoMemoryPool_2<TParam1, TValue>::OnDespawned(TValue item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MonoMemoryPool_2<TParam1, TValue>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TParam1, typename TValue> inline ::System::Object* Zenject::MonoMemoryPool_2<TParam1, TValue>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoMemoryPool_2<TParam1, TValue>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TParam1, typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::MonoMemoryPool_2<TParam1, TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MonoMemoryPool_2<TParam1, TValue>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TParam1, typename TValue> inline ::Zenject::MonoMemoryPool_2<TParam1, TValue>* Zenject::MonoMemoryPool_2<TParam1, TValue>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MonoMemoryPool_2<TParam1, TValue>*>());
}
// Ctor Parameters []
template <typename TParam1, typename TValue> constexpr ::Zenject::MonoMemoryPool_2<TParam1, TValue>::MonoMemoryPool_2() {}
