#pragma once
// IWYU pragma private; include "GlobalNamespace/ISortedList_1.hpp"
#include "GlobalNamespace/zzzz__ISortedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
template <typename T> inline int32_t GlobalNamespace::ISortedList_1<T>::get_count() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISortedList_1<T>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::LinkedList_1<T>* GlobalNamespace::ISortedList_1<T>::get_items() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISortedList_1<T>*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* GlobalNamespace::ISortedList_1<T>::Insert(T newItem) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISortedList_1<T>*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*>(this, ___internal_method, newItem);
}
template <typename T> inline void GlobalNamespace::ISortedList_1<T>::Insert(::System::Collections::Generic::LinkedListNode_1<T>* newNode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISortedList_1<T>*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newNode);
}
template <typename T> inline void GlobalNamespace::ISortedList_1<T>::Remove(::System::Collections::Generic::LinkedListNode_1<T>* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISortedList_1<T>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
template <typename T> inline void GlobalNamespace::ISortedList_1<T>::TouchLastUsedNode(::System::Collections::Generic::LinkedListNode_1<T>* node) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ISortedList_1<T>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
