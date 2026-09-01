#pragma once
// IWYU pragma private; include "System\Collections\Generic\LargeArrayBuilder_1.hpp"
#include "System/Collections/Generic/zzzz__ArrayBuilder_1_impl.hpp"
#include "System/Collections/Generic/zzzz__LargeArrayBuilder_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename T> inline void System::Collections::Generic::LargeArrayBuilder_1<T>::_ctor(bool initialize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, initialize);
}
template <typename T> inline void System::Collections::Generic::LargeArrayBuilder_1<T>::_ctor(int32_t maxCapacity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, maxCapacity);
}
template <typename T> inline void System::Collections::Generic::LargeArrayBuilder_1<T>::AddRange(::System::Collections::Generic::IEnumerable_1<T>* items) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(),
                                                                                         { "AddRange", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, items);
}
template <typename T> inline void System::Collections::Generic::LargeArrayBuilder_1<T>::AddWithBufferAllocation(T item, ::by_ref<::ArrayW<T>> destination, ::by_ref<int32_t> index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(),
                                                           { "AddWithBufferAllocation", {}, { ::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item, destination, index);
}
template <typename T> inline void System::Collections::Generic::LargeArrayBuilder_1<T>::CopyTo(::ArrayW<T> array, int32_t arrayIndex, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(),
                                                                                         { "CopyTo", {}, { ::i2c::type_of<::ArrayW<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, arrayIndex, count);
}
template <typename T> inline ::ArrayW<T> System::Collections::Generic::LargeArrayBuilder_1<T>::GetBuffer(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(), { "GetBuffer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method, index);
}
template <typename T> inline ::ArrayW<T> System::Collections::Generic::LargeArrayBuilder_1<T>::ToArray() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(), { "ToArray", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template <typename T> inline bool System::Collections::Generic::LargeArrayBuilder_1<T>::TryMove(::by_ref<::ArrayW<T>> array) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(), { "TryMove", {}, { ::i2c::type_of<::by_ref<::ArrayW<T>>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, array);
}
template <typename T> inline void System::Collections::Generic::LargeArrayBuilder_1<T>::AllocateBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Collections::Generic::LargeArrayBuilder_1<T>>(), { "AllocateBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_maxCapacity", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_first", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_buffers", ty: "::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_current", ty: "::ArrayW<T>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::System::Collections::Generic::LargeArrayBuilder_1<T>::LargeArrayBuilder_1(int32_t _maxCapacity, ::ArrayW<T> _first, ::System::Collections::Generic::ArrayBuilder_1<::ArrayW<T>> _buffers,
                                                                                      ::ArrayW<T> _current, int32_t _index, int32_t _count) noexcept {
  this->_maxCapacity = _maxCapacity;
  this->_first = _first;
  this->_buffers = _buffers;
  this->_current = _current;
  this->_index = _index;
  this->_count = _count;
}
// Ctor Parameters []
template <typename T> constexpr ::System::Collections::Generic::LargeArrayBuilder_1<T>::LargeArrayBuilder_1() {}
