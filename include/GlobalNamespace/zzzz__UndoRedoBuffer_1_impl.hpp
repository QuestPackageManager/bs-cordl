#pragma once
// IWYU pragma private; include "GlobalNamespace\UndoRedoBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UndoRedoBuffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template <typename T> constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____data;
}
template <typename T> constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_set__data(::System::Collections::Generic::List_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____data = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__capacity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
template <typename T> constexpr int32_t const& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__capacity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capacity;
}
template <typename T> constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_set__capacity(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capacity = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__cursor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursor;
}
template <typename T> constexpr int32_t const& GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_get__cursor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursor;
}
template <typename T> constexpr void GlobalNamespace::UndoRedoBuffer_1<T>::__cordl_internal_set__cursor(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cursor = value;
}
template <typename T> inline void GlobalNamespace::UndoRedoBuffer_1<T>::_ctor(int32_t capacity) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UndoRedoBuffer_1<T>*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template <typename T> inline void GlobalNamespace::UndoRedoBuffer_1<T>::Add(T item) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UndoRedoBuffer_1<T>*>(), { "Add", {}, { ::i2c::type_of<T>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template <typename T> inline T GlobalNamespace::UndoRedoBuffer_1<T>::Undo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UndoRedoBuffer_1<T>*>(), { "Undo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::UndoRedoBuffer_1<T>::Redo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UndoRedoBuffer_1<T>*>(), { "Redo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::UndoRedoBuffer_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UndoRedoBuffer_1<T>*>(), { "Clear", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::UndoRedoBuffer_1<T>* GlobalNamespace::UndoRedoBuffer_1<T>::New_ctor(int32_t capacity) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UndoRedoBuffer_1<T>*>(capacity));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::UndoRedoBuffer_1<T>::UndoRedoBuffer_1() {}
