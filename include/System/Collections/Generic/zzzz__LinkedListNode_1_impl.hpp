#pragma once
// IWYU pragma private; include "System\Collections\Generic\LinkedListNode_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::LinkedList_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_list() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
template <typename T> constexpr ::System::Collections::Generic::LinkedList_1<T>* const& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_list() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___list;
}
template <typename T> constexpr void System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_set_list(::System::Collections::Generic::LinkedList_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___list = value;
}
template <typename T> constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename T> constexpr ::System::Collections::Generic::LinkedListNode_1<T>* const& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename T> constexpr void System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_set_next(::System::Collections::Generic::LinkedListNode_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
template <typename T> constexpr ::System::Collections::Generic::LinkedListNode_1<T>*& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
template <typename T> constexpr ::System::Collections::Generic::LinkedListNode_1<T>* const& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___prev;
}
template <typename T> constexpr void System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_set_prev(::System::Collections::Generic::LinkedListNode_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___prev = value;
}
template <typename T> constexpr T& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr T const& System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_get_item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___item;
}
template <typename T> constexpr void System::Collections::Generic::LinkedListNode_1<T>::__cordl_internal_set_item(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___item = value;
}
template <typename T> inline void System::Collections::Generic::LinkedListNode_1<T>::_ctor(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LinkedListNode_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::Generic::LinkedListNode_1<T>::_ctor(::System::Collections::Generic::LinkedList_1<T>* list, T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LinkedListNode_1<T>*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::LinkedList_1<T>*>(), ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list, value);
}
template <typename T> inline ::System::Collections::Generic::LinkedList_1<T>* System::Collections::Generic::LinkedListNode_1<T>::get_List() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LinkedListNode_1<T>*>(), { "get_List", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedList_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::get_Next() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LinkedListNode_1<T>*>(), { "get_Next", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::get_Previous() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LinkedListNode_1<T>*>(), { "get_Previous", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::LinkedListNode_1<T>*>(this, ___internal_method);
}
template <typename T> inline T System::Collections::Generic::LinkedListNode_1<T>::get_Value() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LinkedListNode_1<T>*>(), { "get_Value", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void System::Collections::Generic::LinkedListNode_1<T>::set_Value(T value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LinkedListNode_1<T>*>(), { "set_Value", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template <typename T> inline void System::Collections::Generic::LinkedListNode_1<T>::Invalidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LinkedListNode_1<T>*>(), { "Invalidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::New_ctor(T value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::LinkedListNode_1<T>*>(value));
}
template <typename T>
inline ::System::Collections::Generic::LinkedListNode_1<T>* System::Collections::Generic::LinkedListNode_1<T>::New_ctor(::System::Collections::Generic::LinkedList_1<T>* list, T value) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Collections::Generic::LinkedListNode_1<T>*>(list, value));
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::LinkedListNode_1<T>::LinkedListNode_1() {}
