#pragma once
// IWYU pragma private; include "Zenject\StaticMemoryPoolBaseBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IDespawnableMemoryPool_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
template <typename TValue> constexpr ::System::Collections::Generic::Stack_1<TValue>*& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_get__stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
template <typename TValue> constexpr ::System::Collections::Generic::Stack_1<TValue>* const& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_get__stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stack;
}
template <typename TValue> constexpr void Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_set__stack(::System::Collections::Generic::Stack_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stack = value;
}
template <typename TValue> constexpr ::System::Action_1<TValue>*& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_get__onDespawnedMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDespawnedMethod;
}
template <typename TValue> constexpr ::System::Action_1<TValue>* const& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_get__onDespawnedMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onDespawnedMethod;
}
template <typename TValue> constexpr void Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_set__onDespawnedMethod(::System::Action_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onDespawnedMethod = value;
}
template <typename TValue> constexpr int32_t& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_get__activeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeCount;
}
template <typename TValue> constexpr int32_t const& Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_get__activeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeCount;
}
template <typename TValue> constexpr void Zenject::StaticMemoryPoolBaseBase_1<TValue>::__cordl_internal_set__activeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeCount = value;
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::_ctor(::System::Action_1<TValue>* onDespawnedMethod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onDespawnedMethod);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::set_OnDespawnedMethod(::System::Action_1<TValue>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "set_OnDespawnedMethod", {}, { ::i2c::type_of<::System::Action_1<TValue>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename TValue> inline int32_t Zenject::StaticMemoryPoolBaseBase_1<TValue>::get_NumTotal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "get_NumTotal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TValue> inline int32_t Zenject::StaticMemoryPoolBaseBase_1<TValue>::get_NumActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "get_NumActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TValue> inline int32_t Zenject::StaticMemoryPoolBaseBase_1<TValue>::get_NumInactive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "get_NumInactive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TValue> inline ::System::Type* Zenject::StaticMemoryPoolBaseBase_1<TValue>::get_ItemType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "get_ItemType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Resize(int32_t desiredPoolSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desiredPoolSize);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::ResizeInternal(int32_t desiredPoolSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "ResizeInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desiredPoolSize);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::ClearActiveCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "ClearActiveCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::ShrinkBy(int32_t numToRemove) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "ShrinkBy", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numToRemove);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::ExpandBy(int32_t numToAdd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "ExpandBy", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numToAdd);
}
template <typename TValue> inline TValue Zenject::StaticMemoryPoolBaseBase_1<TValue>::SpawnInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "SpawnInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Zenject_IMemoryPool_Despawn(::System::Object* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "Zenject.IMemoryPool.Despawn", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TValue> inline void Zenject::StaticMemoryPoolBaseBase_1<TValue>::Despawn(TValue element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), { "Despawn", {}, { ::i2c::type_of<TValue>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
template <typename TValue> inline TValue Zenject::StaticMemoryPoolBaseBase_1<TValue>::Alloc() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template <typename TValue> inline ::Zenject::StaticMemoryPoolBaseBase_1<TValue>* Zenject::StaticMemoryPoolBaseBase_1<TValue>::New_ctor(::System::Action_1<TValue>* onDespawnedMethod) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::StaticMemoryPoolBaseBase_1<TValue>*>(onDespawnedMethod));
}
/// @brief Convert operator to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr Zenject::StaticMemoryPoolBaseBase_1<TValue>::operator ::Zenject::IDespawnableMemoryPool_1<TValue>*() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IDespawnableMemoryPool_1<TValue>"
template <typename TValue> constexpr ::Zenject::IDespawnableMemoryPool_1<TValue>* Zenject::StaticMemoryPoolBaseBase_1<TValue>::i___Zenject__IDespawnableMemoryPool_1_TValue_() noexcept {
  return static_cast<::Zenject::IDespawnableMemoryPool_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TValue> constexpr Zenject::StaticMemoryPoolBaseBase_1<TValue>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TValue> constexpr ::Zenject::IMemoryPool* Zenject::StaticMemoryPoolBaseBase_1<TValue>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TValue> constexpr Zenject::StaticMemoryPoolBaseBase_1<TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TValue> constexpr ::System::IDisposable* Zenject::StaticMemoryPoolBaseBase_1<TValue>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::StaticMemoryPoolBaseBase_1<TValue>::StaticMemoryPoolBaseBase_1() {}
