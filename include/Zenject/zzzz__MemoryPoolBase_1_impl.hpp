#pragma once
// IWYU pragma private; include "Zenject\MemoryPoolBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MemoryPoolBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__IFactory_1_def.hpp"
#include "Zenject/zzzz__IMemoryPool_def.hpp"
#include "Zenject/zzzz__IValidatable_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolSettings_def.hpp"
template <typename TContract> constexpr ::System::Collections::Generic::Stack_1<TContract>*& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__inactiveItems() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveItems;
}
template <typename TContract> constexpr ::System::Collections::Generic::Stack_1<TContract>* const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__inactiveItems() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveItems;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__inactiveItems(::System::Collections::Generic::Stack_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inactiveItems = value;
}
template <typename TContract> constexpr ::Zenject::IFactory_1<TContract>*& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__factory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factory;
}
template <typename TContract> constexpr ::Zenject::IFactory_1<TContract>* const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__factory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____factory;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__factory(::Zenject::IFactory_1<TContract>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____factory = value;
}
template <typename TContract> constexpr ::Zenject::MemoryPoolSettings*& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
template <typename TContract> constexpr ::Zenject::MemoryPoolSettings* const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__settings(::Zenject::MemoryPoolSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settings = value;
}
template <typename TContract> constexpr ::Zenject::DiContainer*& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__container() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TContract> constexpr ::Zenject::DiContainer* const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__container() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____container;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__container(::Zenject::DiContainer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____container = value;
}
template <typename TContract> constexpr int32_t& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__activeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeCount;
}
template <typename TContract> constexpr int32_t const& Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_get__activeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeCount;
}
template <typename TContract> constexpr void Zenject::MemoryPoolBase_1<TContract>::__cordl_internal_set__activeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeCount = value;
}
template <typename TContract>
inline void Zenject::MemoryPoolBase_1<TContract>::Construct(::Zenject::IFactory_1<TContract>* factory, ::Zenject::DiContainer* container, ::Zenject::MemoryPoolSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(),
                          { "Construct", {}, { ::i2c::type_of<::Zenject::IFactory_1<TContract>*>(), ::i2c::type_of<::Zenject::DiContainer*>(), ::i2c::type_of<::Zenject::MemoryPoolSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, factory, container, settings);
}
template <typename TContract> inline ::Zenject::DiContainer* Zenject::MemoryPoolBase_1<TContract>::get_Container() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "get_Container", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::DiContainer*>(this, ___internal_method);
}
template <typename TContract> inline ::System::Collections::Generic::IEnumerable_1<TContract>* Zenject::MemoryPoolBase_1<TContract>::get_InactiveItems() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "get_InactiveItems", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TContract>*>(this, ___internal_method);
}
template <typename TContract> inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumTotal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "get_NumTotal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TContract> inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumInactive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "get_NumInactive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TContract> inline int32_t Zenject::MemoryPoolBase_1<TContract>::get_NumActive() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "get_NumActive", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename TContract> inline ::System::Type* Zenject::MemoryPoolBase_1<TContract>::get_ItemType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "get_ItemType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Zenject_IMemoryPool_Despawn(::System::Object* item) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "Zenject.IMemoryPool.Despawn", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Despawn(TContract item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "Despawn", {}, { ::i2c::type_of<TContract>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TContract> inline TContract Zenject::MemoryPoolBase_1<TContract>::AllocNew() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "AllocNew", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Zenject_IValidatable_Validate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "Zenject.IValidatable.Validate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::ShrinkBy(int32_t numToRemove) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "ShrinkBy", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numToRemove);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::ExpandBy(int32_t numToAdd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "ExpandBy", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numToAdd);
}
template <typename TContract> inline TContract Zenject::MemoryPoolBase_1<TContract>::GetInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "GetInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<TContract>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::Resize(int32_t desiredPoolSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "Resize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, desiredPoolSize);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::ExpandPool() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "ExpandPool", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::OnDespawned(TContract item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::OnSpawned(TContract item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::OnCreated(TContract item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::OnDestroyed(TContract item) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TContract> inline ::System::Object* Zenject::MemoryPoolBase_1<TContract>::__zenCreate(::ArrayW<::System::Object*> P_0) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "__zenCreate", {}, { ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, P_0);
}
template <typename TContract> inline void Zenject::MemoryPoolBase_1<TContract>::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*> P_1) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(),
                                                           { "__zenInjectMethod0", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TContract> inline ::Zenject::InjectTypeInfo* Zenject::MemoryPoolBase_1<TContract>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Zenject::MemoryPoolBase_1<TContract>*>(), { "__zenCreateInjectTypeInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*>(nullptr, ___internal_method);
}
template <typename TContract> inline ::Zenject::MemoryPoolBase_1<TContract>* Zenject::MemoryPoolBase_1<TContract>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Zenject::MemoryPoolBase_1<TContract>*>());
}
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TContract> constexpr Zenject::MemoryPoolBase_1<TContract>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename TContract> constexpr ::Zenject::IValidatable* Zenject::MemoryPoolBase_1<TContract>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IMemoryPool"
template <typename TContract> constexpr Zenject::MemoryPoolBase_1<TContract>::operator ::Zenject::IMemoryPool*() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IMemoryPool"
template <typename TContract> constexpr ::Zenject::IMemoryPool* Zenject::MemoryPoolBase_1<TContract>::i___Zenject__IMemoryPool() noexcept {
  return static_cast<::Zenject::IMemoryPool*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TContract> constexpr Zenject::MemoryPoolBase_1<TContract>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename TContract> constexpr ::System::IDisposable* Zenject::MemoryPoolBase_1<TContract>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolBase_1<TContract>::MemoryPoolBase_1() {}
