#pragma once
// IWYU pragma private; include "GlobalNamespace/QueueSet_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__QueueSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::LinkedList_1<T>*& GlobalNamespace::QueueSet_1<T>::__cordl_internal_get__linkedList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkedList;
}
template <typename T> constexpr ::System::Collections::Generic::LinkedList_1<T>* const& GlobalNamespace::QueueSet_1<T>::__cordl_internal_get__linkedList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____linkedList;
}
template <typename T> constexpr void GlobalNamespace::QueueSet_1<T>::__cordl_internal_set__linkedList(::System::Collections::Generic::LinkedList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____linkedList = value;
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>*& GlobalNamespace::QueueSet_1<T>::__cordl_internal_get__set() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set;
}
template <typename T> constexpr ::System::Collections::Generic::HashSet_1<T>* const& GlobalNamespace::QueueSet_1<T>::__cordl_internal_get__set() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____set;
}
template <typename T> constexpr void GlobalNamespace::QueueSet_1<T>::__cordl_internal_set__set(::System::Collections::Generic::HashSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____set = value;
}
template <typename T> inline int32_t GlobalNamespace::QueueSet_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QueueSet_1<T>*>(), { "get_Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::QueueSet_1<T>::Enqueue(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QueueSet_1<T>*>(), { "Enqueue", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline T GlobalNamespace::QueueSet_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QueueSet_1<T>*>(), { "Dequeue", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::QueueSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QueueSet_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::QueueSet_1<T>::Contains(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QueueSet_1<T>*>(), { "Contains", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::QueueSet_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::QueueSet_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::QueueSet_1<T>* GlobalNamespace::QueueSet_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::QueueSet_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::QueueSet_1<T>::QueueSet_1() {}
