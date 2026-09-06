#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleMemoryPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleMemoryPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>*& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__activeElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeElements;
}
template <typename T> constexpr ::GlobalNamespace::LazyCopyHashSet_1<T>* const& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__activeElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activeElements;
}
template <typename T> constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_set__activeElements(::GlobalNamespace::LazyCopyHashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activeElements = value;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__inactiveElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveElements;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__inactiveElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____inactiveElements;
}
template <typename T> constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_set__inactiveElements(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____inactiveElements = value;
}
template <typename T> constexpr ::System::Func_1<T>*& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__createNewItemFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createNewItemFunc;
}
template <typename T> constexpr ::System::Func_1<T>* const& GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_get__createNewItemFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____createNewItemFunc;
}
template <typename T> constexpr void GlobalNamespace::SimpleMemoryPool_1<T>::__cordl_internal_set__createNewItemFunc(::System::Func_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____createNewItemFunc = value;
}
template <typename T> inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::get_items() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleMemoryPool_1<T>*>(), { "get_items", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::SimpleMemoryPool_1<T>::_ctor(int32_t startCapacity, ::System::Func_1<T>* createNewItemFunc) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleMemoryPool_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Func_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startCapacity, createNewItemFunc);
}
template <typename T> inline T GlobalNamespace::SimpleMemoryPool_1<T>::Spawn() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleMemoryPool_1<T>*>(), { "Spawn", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::SimpleMemoryPool_1<T>::Despawn(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleMemoryPool_1<T>*>(), { "Despawn", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline ::GlobalNamespace::SimpleMemoryPool_1<T>* GlobalNamespace::SimpleMemoryPool_1<T>::New_ctor(int32_t startCapacity, ::System::Func_1<T>* createNewItemFunc) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleMemoryPool_1<T>*>(startCapacity, createNewItemFunc));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::SimpleMemoryPool_1<T>::SimpleMemoryPool_1() {}
